#include "defines.h"
#include "defines_battle.h"

#include "../include/new/battle_util.h"
#include "../include/new/multi.h"
#include "../include/new/trainer_sliding.h"
#include "../include/new/trainer_sliding_data.h"
/*
trainer_sliding.c
	handles mid-battle trainer sliding and related message.
*/

struct TrainerSlide
{
	u16 trainerId;
	const u8* msgFirstDown;
	const u8* msgLastSwitchIn;
	const u8* msgLastLowHp;
};

struct DynamaxTrainerSlide
{
	u16 trainerId;
	const u8* dynamaxMsg;
};

static const struct TrainerSlide sTrainerSlides[] =
{
	{},

	{0x4, NULL, sText_Rival1Last, sText_Rival1LastLowHP},
	{0x5, NULL, sText_Rival1Last, sText_Rival1LastLowHP},
	{0xD, NULL, sText_Li1Last, sText_Li1LastLowHP},
	{0x141, NULL, sText_Falkner1Last, sText_Falkner1LastLowHP},
	{0x18, NULL, sText_Rival2Last, sText_Rival2LastLowHP},
	{0x19, NULL, sText_Rival2Last, sText_Rival2LastLowHP},
	{0x2F, NULL, sText_Proton1Last, sText_Proton1LastLowHP},
	{0x35, NULL, sText_Bugsy1Last, sText_Bugsy1LastLowHP},
	{0x3B, NULL, sText_Rival3Last, sText_Rival3LastLowHP},
	{0x3C, NULL, sText_Rival3Last, sText_Rival3LastLowHP},
	{0x4A, NULL, sText_Whitney1Last, sText_Whitney1LastLowHP},
	{0x69, NULL, sText_Proton2Last, sText_Proton2LastLowHP},
	{0x6F, NULL, sText_Morty1Last, sText_Morty1LastLowHP},
	{0x72, NULL, sText_Ariana1Last, sText_Ariana1LastLowHP},
	{0x97, NULL, sText_Chuck1Last, sText_Chuck1LastLowHP},
	{0x98, NULL, sText_Jasmine1Last, sText_Jasmine1LastLowHP},
	{0x99, NULL, sText_Lorelei1Last, sText_Lorelei1LastLowHP},
	{0x9A, NULL, sText_Clair1Last, sText_Clair1LastLowHP},
	{0x12C, NULL, sText_Pryce1Last, sText_Pryce1LastLowHP},
	{0xA9, NULL, sText_Rival4Last, sText_Rival4LastLowHP},
	{0xAA, NULL, sText_Rival4Last, sText_Rival4LastLowHP},
	{0xB7, NULL, sText_Rival5Last, sText_Rival5LastLowHP},
	{0xB8, NULL, sText_Rival5Last, sText_Rival5LastLowHP},
	{0xC9, NULL, sText_Berkel1Last, sText_Berkel1LastLowHP},
	{0xCA, NULL, sText_Petrel1Last, sText_Petrel1LastLowHP},
	{0xCB, NULL, sText_Ariana2Last, sText_Ariana2LastLowHP},
	{0xDF, NULL, sText_Rival6Last, sText_Rival6LastLowHP},
	{0xE0, NULL, sText_Rival6Last, sText_Rival6LastLowHP},
	{0xED, NULL, sText_Berkel2Last, sText_Berkel2LastLowHP},
	{0x3B, NULL, sText_Rival3Last, sText_Rival3LastLowHP},
	{0xF5, NULL, sText_Petrel2Last, sText_Petrel2LastLowHP},
	{0xF6, NULL, sText_Proton3Last, sText_Proton3LastLowHP},
	{0xF7, NULL, sText_Ariana3Last, sText_Ariana3LastLowHP},
	{0xF8, NULL, sText_Archer1Last, sText_Archer1LastLowHP},
	{0xFB, NULL, sText_Mokai1Last, sText_Mokai1LastLowHP},
	{0x12D, NULL, sText_Rival7Last, sText_Rival7LastLowHP},
	{0x12E, NULL, sText_Rival7Last, sText_Rival7LastLowHP},
	{0x19A, NULL, sText_Aile1Last, sText_Aile1LastLowHP},
	{0x19B, NULL, sText_Will1Last, sText_Will1LastLowHP},
	{0x19C, NULL, sText_Koga1Last, sText_Koga1LastLowHP},
	{0x19D, NULL, sText_Karen1Last, sText_Karen1LastLowHP},

};

static const struct DynamaxTrainerSlide sDynamaxTrainerSlides[] =
{
	{0x17, gText_TestTrainerDynamaxMsg}, //Test data
};

//This file's functions:
static bool8 IsBankHpLow(u8 bank);
static u8 GetEnemyMonCount(bool8 onlyAlive);

void atk53_trainerslidein(void)
{
	gActiveBattler = GetBattlerAtPosition(gBattlescriptCurrInstr[1]);
	EmitTrainerSlide(0);
	MarkBufferBankForExecution(gActiveBattler);
	gBattlescriptCurrInstr += 2;
}

void TrainerSlideInScriptingBank(void)
{
	gActiveBattler = gBattleScripting.bank;
	EmitTrainerSlide(0);
	MarkBufferBankForExecution(gActiveBattler);
}

void TrainerSlideOutScriptingBank(void)
{
	gActiveBattler = gBattleScripting.bank;
	EmitTrainerSlideBack(0);
	MarkBufferBankForExecution(gActiveBattler);
}

//The modifications made to this function don't affect
//sliding in anyway. They allow expanded Battle Backgrounds.
void HandleIntroSlide(u8 terrain)
{
	u8 taskId;

	for (int bank = 0; bank < gBattlersCount; ++bank)
	{
		if (GetMonAbility(GetBankPartyData(bank)) == ABILITY_ILLUSION)
			gStatuses3[bank] |= STATUS3_ILLUSION;
	}

	if (gBattleTypeFlags & BATTLE_TYPE_LINK)
	{
		taskId = CreateTask(BattleIntroSlideLink, 0);
	}
	else if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
	{
		taskId = CreateTask(BattleIntroSlide3, 0);
	}
	else if ((gBattleTypeFlags & BATTLE_TYPE_KYOGRE_GROUDON) && gGameVersion != VERSION_RUBY) //Why?
	{
		terrain = BATTLE_TERRAIN_UNDERWATER;
		taskId = CreateTask(BattleIntroSlide2, 0);
	}
	else if (terrain > 0x13) //Terrain Champion
	{
		taskId = CreateTask(BattleIntroSlide3, 0);
	}
	else
	{
		taskId = CreateTask(sBattleIntroSlideFuncs[terrain], 0);
	}

	gTasks[taskId].data[0] = 0;
	gTasks[taskId].data[1] = terrain;
	gTasks[taskId].data[2] = 0;
	gTasks[taskId].data[3] = 0;
	gTasks[taskId].data[4] = 0;
	gTasks[taskId].data[5] = 0;
	gTasks[taskId].data[6] = 0;
}

static u8 GetEnemyMonCount(bool8 onlyAlive)
{
	u8 i, count = 0;

	for (i = 0; i < PARTY_SIZE; i++)
	{
		u32 species = GetMonData(&gEnemyParty[i], MON_DATA_SPECIES2, NULL);
		if (species != SPECIES_NONE
		&&  species != SPECIES_EGG
		&& (!onlyAlive || gEnemyParty[i].hp))
			++count;
	}

	return count;
}

static bool8 IsBankHpLow(u8 bank)
{
	return udivsi((gBattleMons[bank].hp * 100), gBattleMons[bank].maxHP) < 25;
}

bool8 ShouldDoTrainerSlide(u8 bank, u16 trainerId, u8 caseId)
{
	u32 i;

	if (!(gBattleTypeFlags & BATTLE_TYPE_TRAINER) || SIDE(bank) != B_SIDE_OPPONENT)
		return FALSE;

	for (i = 0; i < ARRAY_COUNT(sTrainerSlides); ++i)
	{
		if (trainerId == sTrainerSlides[i].trainerId)
		{
			gBattleScripting.bank = bank;
			switch (caseId) {
				case TRAINER_SLIDE_LAST_SWITCHIN:
					if (sTrainerSlides[i].msgLastSwitchIn != NULL && GetEnemyMonCount(TRUE) == 1)
					{
						gBattleStringLoader = sTrainerSlides[i].msgLastSwitchIn;
						return TRUE;
					}
					break;

				case TRAINER_SLIDE_LAST_LOW_HP:
					if (sTrainerSlides[i].msgLastLowHp != NULL
					&& GetEnemyMonCount(TRUE) == 1
					&& IsBankHpLow(bank)
					&& !gNewBS->trainerSlideLowHpMsgDone)
					{
						gNewBS->trainerSlideLowHpMsgDone = TRUE;
						gBattleStringLoader = sTrainerSlides[i].msgLastLowHp;
						return TRUE;
					}
					break;

				case TRAINER_SLIDE_FIRST_DOWN:
					if (sTrainerSlides[i].msgFirstDown != NULL && GetEnemyMonCount(TRUE) == GetEnemyMonCount(FALSE) - 1)
					{
						gBattleStringLoader = sTrainerSlides[i].msgFirstDown;
						return TRUE;
					}
					break;
			}
			break;
		}
	}

	return FALSE;
}

void TryDoDynamaxTrainerSlide(void)
{
	u32 i;
	u16 trainerId;

	if (!(gBattleTypeFlags & BATTLE_TYPE_TRAINER) || SIDE(gBattleScripting.bank) != B_SIDE_OPPONENT)
		return;

	if (IsTwoOpponentBattle() && GetBattlerPosition(gBattleScripting.bank) == B_POSITION_OPPONENT_RIGHT)
		trainerId = gTrainerBattleOpponent_B;
	else
		trainerId = gTrainerBattleOpponent_A;

	gBattleStringLoader = gText_DefaultTrainerDynamaxMsg;
	for (i = 0; i < ARRAY_COUNT(sDynamaxTrainerSlides); ++i)
	{
		if (trainerId == sDynamaxTrainerSlides[i].trainerId)
			gBattleStringLoader = sDynamaxTrainerSlides[i].dynamaxMsg;
	}

	BattleScriptPush(gBattlescriptCurrInstr + 5); //After callasm
	gBattlescriptCurrInstr = BattleScript_TrainerSlideMsgRet - 5;
}

//Hook in Battle Main
void CheckLastMonLowHPSlide(void)
{
	if (ShouldDoTrainerSlide(GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT), gTrainerBattleOpponent_A, TRAINER_SLIDE_LAST_LOW_HP)
	|| (IsTwoOpponentBattle() && ShouldDoTrainerSlide(GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT), gTrainerBattleOpponent_B, TRAINER_SLIDE_LAST_LOW_HP))
	|| (IS_DOUBLE_BATTLE && ShouldDoTrainerSlide(GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT), gTrainerBattleOpponent_A, TRAINER_SLIDE_LAST_LOW_HP)))
		BattleScriptExecute(BattleScript_TrainerSlideMsgEnd2);
}

//handletrainerslidemsg BANK CASE
void atkFF1C_handletrainerslidemsg(void)
{
	gActiveBattler = GetBankForBattleScript(gBattlescriptCurrInstr[1]);

	if (IS_DOUBLE_BATTLE)
		gActiveBattler &= BIT_SIDE; //Always mon on enemy left in doubles

	u8 caseId = gBattlescriptCurrInstr[2];

	switch(caseId) {
		case 0:
			gNewBS->savedObjId = gBattlerSpriteIds[gActiveBattler];
			break;

		case 1:
			gBattlerSpriteIds[gActiveBattler] = gNewBS->savedObjId;
			if (BATTLER_ALIVE(gActiveBattler))
				BattleLoadOpponentMonSpriteGfx(GetBankPartyData(gActiveBattler), gActiveBattler);
	}

	gBattlescriptCurrInstr += 3;
}

//trytrainerslidefirstdownmsg BANK
void atkFF1D_trytrainerslidefirstdownmsg(void)
{
	u8 pos, shouldDo;

	gActiveBattler = GetBankForBattleScript(gBattlescriptCurrInstr[1]);
	pos = GetBattlerPosition(gActiveBattler);

	if (IsTwoOpponentBattle() && pos == B_POSITION_OPPONENT_RIGHT)
		shouldDo = ShouldDoTrainerSlide(gActiveBattler, gTrainerBattleOpponent_B, TRAINER_SLIDE_FIRST_DOWN);
	else
		shouldDo = ShouldDoTrainerSlide(gActiveBattler, gTrainerBattleOpponent_A, TRAINER_SLIDE_FIRST_DOWN);

	if (shouldDo)
	{
		BattleScriptPush(gBattlescriptCurrInstr + 2);
		gBattlescriptCurrInstr = BattleScript_TrainerSlideMsgRet;
		return;
	}

	gBattlescriptCurrInstr += 2;
}

void atkFF1E_trainerslideout(void)
{
	gActiveBattler = GetBattlerAtPosition(gBattlescriptCurrInstr[1]);
	EmitTrainerSlideBack(0);
	MarkBufferBankForExecution(gActiveBattler);
	gBattlescriptCurrInstr += 2;
}
