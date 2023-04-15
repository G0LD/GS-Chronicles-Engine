.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

#define FLAG_SCALE_TRAINER_LEVELS 0x140E
#define VAR_STARTER_CHOSEN_SILVER 0x4060
	
	@---------------
EventScript_LeagueTitleDefense:
    lockall
    hidesprite 0x1
    hidesprite 0x6
    hidesprite 0x7
    applymovement PLAYER EventScript_LeagueTitleDefense_Move1
    waitmovement 0x0
    random 0x6
    compare LASTRESULT 0x5
    if 0x1 _goto EventScript_LeagueTitleDefense_ProfElm
    msgbox 0x8C5508A 0xA
    msgbox gText_LeagueTitleDefense_ElmSpeech1 MSG_NORMAL
    callstd 0xB
    applymovement PLAYER EventScript_LeagueTitleDefense_Move2
    waitmovement 0x0
    pause 0x32
    compare LASTRESULT 0x0
    if 0x1 _goto EventScript_LeagueTitleDefense_Lorelei
    compare LASTRESULT 0x1
    if 0x1 _goto EventScript_LeagueTitleDefense_Joey
    compare LASTRESULT 0x2
    if 0x1 _goto EventScript_LeagueTitleDefense_Sayo
    compare LASTRESULT 0x3
    if 0x1 _goto EventScript_LeagueTitleDefense_Clair
    compare LASTRESULT 0x4
    if 0x1 _goto EventScript_LeagueTitleDefense_Silver
    end

EventScript_LeagueTitleDefense_Lorelei:
    showsprite 0xFE
    applymovement 0xFE EventScript_LeagueTitleDefense_Move3
    waitmovement 0x0
    msgbox 0x8C3DFE1 0xA
    msgbox gText_LeagueTitleDefense_LoreleiSpeech1 MSG_NORMAL
    callstd 0xB
    setflag FLAG_SCALE_TRAINER_LEVELS
    trainerbattle3 0x3 0x16E 0x200 gText_LeagueTitleDefense_LoreleiSpeech2
    clearflag FLAG_SCALE_TRAINER_LEVELS
    msgbox 0x8C3DFE1 0xA
    msgbox gText_LeagueTitleDefense_LoreleiSpeech3 MSG_NORMAL
    callstd 0xB
    applymovement 0xFE EventScript_LeagueTitleDefense_Move4
    waitmovement 0x0
    hidesprite 0xFE
    goto EventScript_LeagueTitleDefense_Ending
    end

EventScript_LeagueTitleDefense_Joey:
    showsprite 0xFE
    applymovement 0xFE EventScript_LeagueTitleDefense_Move3
    waitmovement 0x0
    msgbox gText_LeagueTitleDefense_JoeyName 0xA
    msgbox gText_LeagueTitleDefense_JoeySpeech1 MSG_NORMAL
    callstd 0xB
    setflag FLAG_SCALE_TRAINER_LEVELS
    trainerbattle3 0x3 0x16C 0x200 gText_LeagueTitleDefense_JoeySpeech2
    clearflag FLAG_SCALE_TRAINER_LEVELS
    msgbox 0x8C3DFE1 0xA
    msgbox gText_LeagueTitleDefense_JoeySpeech3 MSG_NORMAL
    callstd 0xB
    applymovement 0xFE EventScript_LeagueTitleDefense_Move4
    waitmovement 0x0
    hidesprite 0xFE
    goto EventScript_LeagueTitleDefense_Ending
    end

EventScript_LeagueTitleDefense_Sayo:
    showsprite 0xFE
    applymovement 0xFE EventScript_LeagueTitleDefense_Move3
    waitmovement 0x0
    msgbox 0x8C4D19D 0xA
    msgbox gText_LeagueTitleDefense_SayoSpeech1 MSG_NORMAL
    callstd 0xB
    setflag FLAG_SCALE_TRAINER_LEVELS
    trainerbattle3 0x3 0x16D 0x200 gText_LeagueTitleDefense_SayoSpeech2
    clearflag FLAG_SCALE_TRAINER_LEVELS
    msgbox 0x8C4D19D 0xA
    msgbox gText_LeagueTitleDefense_SayoSpeech3 MSG_NORMAL
    callstd 0xB
    applymovement 0xFE EventScript_LeagueTitleDefense_Move4
    waitmovement 0x0
    hidesprite 0xFE
    goto EventScript_LeagueTitleDefense_Ending
    end

EventScript_LeagueTitleDefense_Clair:
    showsprite 0xFE
    applymovement 0xFE EventScript_LeagueTitleDefense_Move3
    waitmovement 0x0
    msgbox 0x8C4A5DB 0xA
    msgbox gText_LeagueTitleDefense_ClairSpeech1 MSG_NORMAL
    callstd 0xB
    setflag FLAG_SCALE_TRAINER_LEVELS
    trainerbattle3 0x3 0x16F 0x200 gText_LeagueTitleDefense_ClairSpeech2
    clearflag FLAG_SCALE_TRAINER_LEVELS
    msgbox 0x8C4A5DB 0xA
    msgbox gText_LeagueTitleDefense_ClairSpeech3 MSG_NORMAL
    callstd 0xB
    applymovement 0xFE EventScript_LeagueTitleDefense_Move4
    waitmovement 0x0
    hidesprite 0xFE
    goto EventScript_LeagueTitleDefense_Ending
    end

EventScript_LeagueTitleDefense_Silver:
    showsprite 0xFE
    applymovement 0xFE EventScript_LeagueTitleDefense_Move3
    waitmovement 0x0
    msgbox 0x8C09516 0xA
    msgbox gText_LeagueTitleDefense_SilverSpeech1 MSG_NORMAL
    callstd 0xB
    setflag FLAG_SCALE_TRAINER_LEVELS
    compare VAR_STARTER_CHOSEN_SILVER SPECIES_CYNDAQUIL
    if 0x1 _call EventScript_LeagueTitleDefense_Silver_Cyndaquil
    compare VAR_STARTER_CHOSEN_SILVER SPECIES_TOTODILE
    if 0x1 _call EventScript_LeagueTitleDefense_Silver_Totodile
    compare VAR_STARTER_CHOSEN_SILVER SPECIES_CHIKORITA
    if 0x1 _call EventScript_LeagueTitleDefense_Silver_Chikorita
    clearflag FLAG_SCALE_TRAINER_LEVELS
    msgbox 0x8C09516 0xA
    msgbox gText_LeagueTitleDefense_SilverSpeech3 MSG_NORMAL
    callstd 0xB
    applymovement 0xFE EventScript_LeagueTitleDefense_Move4
    waitmovement 0x0
    hidesprite 0xFE
    goto EventScript_LeagueTitleDefense_Ending
    end

EventScript_LeagueTitleDefense_Silver_Cyndaquil:
    trainerbattle3 0x3 0x1AA 0x200 gText_LeagueTitleDefense_SilverSpeech2
    return

EventScript_LeagueTitleDefense_Silver_Totodile:
    trainerbattle3 0x3 0x1AB 0x200 gText_LeagueTitleDefense_SilverSpeech2
    return

EventScript_LeagueTitleDefense_Silver_Chikorita:
    trainerbattle3 0x3 0x1AC 0x200 gText_LeagueTitleDefense_SilverSpeech2
    return

EventScript_LeagueTitleDefense_ProfElm:
    applymovement 0xFE EventScript_LeagueTitleDefense_Move5
    waitmovement 0x0
    msgbox 0x8C05560 0xA
    msgbox gText_LeagueTitleDefense_ProfElmSpeech1 MSG_NORMAL
    callstd 0xB
    setflag FLAG_SCALE_TRAINER_LEVELS
    compare VAR_STARTER_CHOSEN_SILVER SPECIES_CYNDAQUIL
    if 0x1 _call EventScript_LeagueTitleDefense_ProfElm_Totodile
    compare VAR_STARTER_CHOSEN_SILVER SPECIES_TOTODILE
    if 0x1 _call EventScript_LeagueTitleDefense_ProfElm_Chikorita
    compare VAR_STARTER_CHOSEN_SILVER SPECIES_CHIKORITA
    if 0x1 _call EventScript_LeagueTitleDefense_ProfElm_Cyndaquil
    clearflag FLAG_SCALE_TRAINER_LEVELS
    msgbox 0x8C05560 0xA
    msgbox gText_LeagueTitleDefense_ProfElmSpeech3 MSG_NORMAL
    callstd 0xB
    applymovement 0xFE EventScript_LeagueTitleDefense_Move4
    waitmovement 0x0
    hidesprite 0xFE
    goto EventScript_LeagueTitleDefense_Ending
    end

EventScript_LeagueTitleDefense_ProfElm_Totodile:
    trainerbattle3 0x3 0x171 0x200 gText_LeagueTitleDefense_SilverSpeech2
    return

EventScript_LeagueTitleDefense_ProfElm_Chikorita:
    trainerbattle3 0x3 0x172 0x200 gText_LeagueTitleDefense_SilverSpeech2
    return

EventScript_LeagueTitleDefense_ProfElm_Cyndaquil:
    trainerbattle3 0x3 0x170 0x200 gText_LeagueTitleDefense_SilverSpeech2
    return