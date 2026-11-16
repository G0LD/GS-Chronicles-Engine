#include "../include/global.h"
#include "../include/event_data.h"
#include "../include/money.h"
#include "../include/string_util.h"
#include "defines.h"
#include "defines_battle.h"

/*
mom_savings.c
	Custom system made for GS Chronicles for your mom
    to save 5% of the total money earned from your
    trainer battles.

    It was necessary to modify some battle scripts,
    including the Pay-day battle script hijack to
    display how much was earned at the end of a
    battle.

    This same function handles the function of mom's
    deposit and withdrawal of funds.
*/

#define MOM_MONEY_MAX         999999

#define VAR_MOM_INPUT_LOW  0x8008
#define VAR_MOM_INPUT_HIGH 0x8009
#define VAR_MOM_RESULT     0x800D
#define PLAYER_MONEY_MAX   999999

u32 GetMomMoney(void);
void SetMomMoney(u32 amount);

void Special_MomShowSavings(void)
{
    ConvertIntToDecimalStringN(
        gStringVar1,
        GetMomMoney(),
        STR_CONV_MODE_LEFT_ALIGN,
        6
    );
}

void Special_MomPrepareWithdrawal(void)
{
    struct SaveBlock1 *save = *(struct SaveBlock1 **)0x03005008;
    u32 balance = GetMomMoney();
    u32 wallet = GetMoney(&save->money);
    u32 capacity = wallet >= PLAYER_MONEY_MAX
                 ? 0 : PLAYER_MONEY_MAX - wallet;

    if (balance > capacity)
        balance = capacity;

    VarSet(VAR_MOM_INPUT_LOW, (u16)balance);
    VarSet(VAR_MOM_INPUT_HIGH, (u16)(balance >> 16));
    VarSet(VAR_MOM_RESULT, balance ? 1 : 0);
}

void Special_MomCompleteWithdrawal(void)
{
    struct SaveBlock1 *save = *(struct SaveBlock1 **)0x03005008;
    u32 amount = (u32)VarGet(VAR_MOM_INPUT_LOW)
               | ((u32)VarGet(VAR_MOM_INPUT_HIGH) << 16);
    u32 wallet = GetMoney(&save->money);
    u32 balance = GetMomMoney();

    VarSet(VAR_MOM_RESULT, 0);

    if (amount == 0 || amount > balance)
        return;

    if (wallet >= PLAYER_MONEY_MAX ||
        amount > PLAYER_MONEY_MAX - wallet)
        return;

    AddMoney(&save->money, amount);
    SetMomMoney(balance - amount);
    VarSet(VAR_MOM_RESULT, 1);
}



void Special_MomPrepareDeposit(void)
{
    struct SaveBlock1 *save = *(struct SaveBlock1 **)0x03005008;
    u32 wallet = GetMoney(&save->money);
    u32 balance = GetMomMoney();
    u32 capacity = balance >= MOM_MONEY_MAX ? 0 : MOM_MONEY_MAX - balance;
    u32 maximum = wallet < capacity ? wallet : capacity;

    VarSet(VAR_MOM_INPUT_LOW, (u16)maximum);
    VarSet(VAR_MOM_INPUT_HIGH, (u16)(maximum >> 16));
    VarSet(VAR_MOM_RESULT, capacity == 0 ? 3 : (maximum ? 1 : 0));
}

void Special_MomCompleteDeposit(void)
{
    struct SaveBlock1 *save = *(struct SaveBlock1 **)0x03005008;
    u32 amount = (u32)VarGet(VAR_MOM_INPUT_LOW)
               | ((u32)VarGet(VAR_MOM_INPUT_HIGH) << 16);
    u32 wallet = GetMoney(&save->money);
    u32 balance = GetMomMoney();

    VarSet(VAR_MOM_RESULT, 0);

    if (amount == 0)
        return;

    if (amount > wallet)
    {
        VarSet(VAR_MOM_RESULT, 2);
        return;
    }

    if (balance >= MOM_MONEY_MAX || amount > MOM_MONEY_MAX - balance)
    {
        VarSet(VAR_MOM_RESULT, 3);
        return;
    }

    RemoveMoney(&save->money, amount);
    SetMomMoney(balance + amount);
    VarSet(VAR_MOM_RESULT, 1);
}


static const u8 sMomText[] = {
    0xCD, 0xD9, 0xE2, 0xE8, 0x00, 0xB7, 0xFD, 0x01,
    0x00, 0xE8, 0xE3, 0x00, 0xC7, 0xE3, 0xE1, 0xAB, 0xFF
};

static const u8 sMomBattleScript[] = {
    0x10, 0x84, 0x01,
    0x12, 0x40, 0x00,
    0x3C
};

extern void BattleScriptPushCursor(void);
extern void atk91_givepaydaymoney(void);

u32 GetMomMoney(void)
{
    return (u32)VarGet(VAR_MOM_MONEY_LOW)
         | ((u32)VarGet(VAR_MOM_MONEY_HIGH) << 16);
}

void SetMomMoney(u32 amount)
{
    if (amount > MOM_MONEY_MAX)
        amount = MOM_MONEY_MAX;

    VarSet(VAR_MOM_MONEY_LOW, (u16)amount);
    VarSet(VAR_MOM_MONEY_HIGH, (u16)(amount >> 16));
}

void AddMomMoney(u32 amount)
{
    u32 current = GetMomMoney();

    if (current >= MOM_MONEY_MAX)
        return;
    if (amount > MOM_MONEY_MAX - current)
        amount = MOM_MONEY_MAX - current;

    SetMomMoney(current + amount);
}

u32 MomSavings_ReadMoney(void)
{
    struct SaveBlock1 *save = *(struct SaveBlock1 **)0x03005008;
    return GetMoney(&save->money);
}

void MomSavings_AfterReward(u32 before)
{
    struct SaveBlock1 *save = *(struct SaveBlock1 **)0x03005008;
    u32 after = GetMoney(&save->money);
    u32 reward;
    u32 savings;
    u32 current;

    if (!FlagGet(FLAG_MOM_SAVING))
        return;
    if (before == 0 || after <= before)
        return;

    reward = after - before;
    if (reward > 100000)
        return;

    savings = reward / 20;
    if (savings == 0)
        return;

    current = GetMomMoney();
    if (current >= MOM_MONEY_MAX)
        return;
    if (savings > MOM_MONEY_MAX - current)
        savings = MOM_MONEY_MAX - current;

    RemoveMoney(&save->money, savings);
    SetMomMoney(current + savings);
    VarSet(VAR_MOM_LAST_DEPOSIT, (u16)savings);

}

void Cmd_GivePayDayWithMom(void)
{
    u32 amount;
    u8 *buff;

    if (VarGet(VAR_MOM_LAST_DEPOSIT) == 0)
    {
        atk91_givepaydaymoney();
        return;
    }

    if (gBattleExecBuffer)
    {
        return;
    }

    amount = VarGet(VAR_MOM_LAST_DEPOSIT);
    VarSet(VAR_MOM_LAST_DEPOSIT, 0);

    buff = gBattleTextBuff2;
    buff[0] = 0xFD;
    buff[1] = 1;
    buff[2] = 4;
    buff[3] = 6;
    buff[4] = (u8)amount;
    buff[5] = (u8)(amount >> 8);
    buff[6] = (u8)(amount >> 16);
    buff[7] = (u8)(amount >> 24);
    buff[8] = 0xFF;

    gBattleStringLoader = (u8 *)sMomText;
    BattleScriptPushCursor();
    gBattlescriptCurrInstr = (u8 *)sMomBattleScript;
}

/*
This specific function was written in THUMB mode
cuz for some reason the game was crashing if I
write the function in C.

Probably there's a better way to handle this,
but if it works, it works.
*/
__attribute__((naked))
void Cmd_GetMoneyRewardWithMom(void)
{
    __asm__ volatile(
        "push {r4, lr}\n"
        "bl MomSavings_ReadMoney\n"
        "mov r4, r0\n"
        "ldr r0, =0x080258AD\n"
        "bl CallOriginalMoneyReward\n"
        "mov r0, r4\n"
        "bl MomSavings_AfterReward\n"
        "pop {r4, pc}\n"
        "CallOriginalMoneyReward:\n"
        "bx r0\n"
    );
}
