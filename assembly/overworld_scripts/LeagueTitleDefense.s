.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

.equ FLAG_SCALE_TRAINER_LEVELS, 0x140E
.equ VAR_STARTER_CHOSEN_SILVER, 0x4060
.equ VAR_TITLE_DEFENSE_VICTORIES, 0x4029
	
	@---------------
EventScript_LeagueTitleDefense:
    lockall
    hidesprite 0x1
    hidesprite 0x6
    hidesprite 0x7
    setflag 0x1501
    getplayerpos 0x8008 0x8009
    compare 0x8008 0x8
    if 0x1 _call EventScript_LeagueTitleDefense_StepRight
    compare 0x8008 0xA
    if 0x1 _call EventScript_LeagueTitleDefense_StepLeft
    applymovement PLAYER EventScript_LeagueTitleDefense_Move1
    waitmovement 0x0
    msgbox 0x8C5508A 0xA
    msgbox gText_LeagueTitleDefense_ElmSpeech1 MSG_NORMAL
    callstd 0xB
    applymovement PLAYER EventScript_LeagueTitleDefense_Move2
    waitmovement 0x0
    pause 0x32
    random 0x6
    compare LASTRESULT 0x5
    if 0x1 _goto EventScript_LeagueTitleDefense_ProfElm
    compare LASTRESULT 0x0
    if 0x1 _goto EventScript_LeagueTitleDefense_Lorelei
    compare LASTRESULT 0x1
    if 0x1 _goto EventScript_LeagueTitleDefense_Joey
    compare LASTRESULT 0x2
    if 0x1 _goto EventScript_LeagueTitleDefense_Naoko
    compare LASTRESULT 0x3
    if 0x1 _goto EventScript_LeagueTitleDefense_Clair
    compare LASTRESULT 0x4
    if 0x1 _goto EventScript_LeagueTitleDefense_Silver
    goto EventScript_LeagueTitleDefense_ProfElm
    end

EventScript_LeagueTitleDefense_Lorelei:
    showsprite 0xB
    applymovement 0xB EventScript_LeagueTitleDefense_Move3
    waitmovement 0x0
    msgbox 0x8C3DFE1 0xA
    msgbox gText_LeagueTitleDefense_LoreleiSpeech1 MSG_NORMAL
    callstd 0xB
    trainerbattle3 0x3 0x16E 0x200 gText_LeagueTitleDefense_LoreleiSpeech2
    clearflag FLAG_SCALE_TRAINER_LEVELS
    msgbox 0x8C3DFE1 0xA
    msgbox gText_LeagueTitleDefense_LoreleiSpeech3 MSG_NORMAL
    callstd 0xB
    applymovement 0xB EventScript_LeagueTitleDefense_Move4
    waitmovement 0x0
    hidesprite 0xB
    goto EventScript_LeagueTitleDefense_Ending
    end

EventScript_LeagueTitleDefense_Joey:
    showsprite 0x8
    applymovement 0x8 EventScript_LeagueTitleDefense_Move3
    waitmovement 0x0
    msgbox gText_LeagueTitleDefense_JoeyName 0xA
    msgbox gText_LeagueTitleDefense_JoeySpeech1 MSG_NORMAL
    callstd 0xB
    trainerbattle3 0x3 0x16C 0x200 gText_LeagueTitleDefense_JoeySpeech2
    clearflag FLAG_SCALE_TRAINER_LEVELS
    msgbox 0x8C3DFE1 0xA
    msgbox gText_LeagueTitleDefense_JoeySpeech3 MSG_NORMAL
    callstd 0xB
    applymovement 0x8 EventScript_LeagueTitleDefense_Move4
    waitmovement 0x0
    hidesprite 0x8
    goto EventScript_LeagueTitleDefense_Ending
    end

EventScript_LeagueTitleDefense_Naoko:
    showsprite 0x9
    applymovement 0x9 EventScript_LeagueTitleDefense_Move3
    waitmovement 0x0
    msgbox 0x8C4D18E 0xA
    msgbox gText_LeagueTitleDefense_NaokoSpeech1 MSG_NORMAL
    callstd 0xB
    trainerbattle3 0x3 0x16D 0x200 gText_LeagueTitleDefense_NaokoSpeech2
    clearflag FLAG_SCALE_TRAINER_LEVELS
    msgbox 0x8C4D18E 0xA
    msgbox gText_LeagueTitleDefense_NaokoSpeech3 MSG_NORMAL
    callstd 0xB
    applymovement 0x9 EventScript_LeagueTitleDefense_Move4
    waitmovement 0x0
    hidesprite 0x9
    goto EventScript_LeagueTitleDefense_Ending
    end

EventScript_LeagueTitleDefense_Clair:
    showsprite 0xA
    applymovement 0xA EventScript_LeagueTitleDefense_Move3
    waitmovement 0x0
    msgbox 0x8C4A5DB 0xA
    msgbox gText_LeagueTitleDefense_ClairSpeech1 MSG_NORMAL
    callstd 0xB
    trainerbattle3 0x3 0x16F 0x200 gText_LeagueTitleDefense_ClairSpeech2
    clearflag FLAG_SCALE_TRAINER_LEVELS
    msgbox 0x8C4A5DB 0xA
    msgbox gText_LeagueTitleDefense_ClairSpeech3 MSG_NORMAL
    callstd 0xB
    applymovement 0xA EventScript_LeagueTitleDefense_Move4
    waitmovement 0x0
    hidesprite 0xA
    goto EventScript_LeagueTitleDefense_Ending
    end

EventScript_LeagueTitleDefense_Silver:
    showsprite 0x2
    applymovement 0x2 EventScript_LeagueTitleDefense_Move3
    waitmovement 0x0
    msgbox 0x8C09516 0xA
    msgbox gText_LeagueTitleDefense_SilverSpeech1 MSG_NORMAL
    callstd 0xB
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
    applymovement 0x2 EventScript_LeagueTitleDefense_Move4
    waitmovement 0x0
    hidesprite 0x2
    goto EventScript_LeagueTitleDefense_Ending
    end

EventScript_LeagueTitleDefense_Silver_Cyndaquil:
    trainerbattle3 0x3 0x169 0x200 gText_LeagueTitleDefense_SilverSpeech2
    return

EventScript_LeagueTitleDefense_Silver_Totodile:
    trainerbattle3 0x3 0x16A 0x200 gText_LeagueTitleDefense_SilverSpeech2
    return

EventScript_LeagueTitleDefense_Silver_Chikorita:
    trainerbattle3 0x3 0x16B 0x200 gText_LeagueTitleDefense_SilverSpeech2
    return

EventScript_LeagueTitleDefense_ProfElm:
    applymovement 0x5 EventScript_LeagueTitleDefense_Move5
    waitmovement 0x0
    spriteface 0x5 UP
    msgbox 0x8C05560 0xA
    msgbox gText_LeagueTitleDefense_ProfElmSpeech1 MSG_NORMAL
    callstd 0xB
    compare VAR_STARTER_CHOSEN_SILVER SPECIES_CYNDAQUIL
    if 0x1 _call EventScript_LeagueTitleDefense_ProfElm_Totodile
    compare VAR_STARTER_CHOSEN_SILVER SPECIES_TOTODILE
    if 0x1 _call EventScript_LeagueTitleDefense_ProfElm_Chikorita
    compare VAR_STARTER_CHOSEN_SILVER SPECIES_CHIKORITA
    if 0x1 _call EventScript_LeagueTitleDefense_ProfElm_Cyndaquil
    clearflag FLAG_SCALE_TRAINER_LEVELS
    msgbox 0x8C05560 0xA
    msgbox gText_LeagueTitleDefense_ProfElmSpeech3 MSG_KEEPOPEN
    goto EventScript_LeagueTitleDefense_EndingElm
    end

EventScript_LeagueTitleDefense_ProfElm_Totodile:
    trainerbattle3 0x3 0x171 0x200 gText_LeagueTitleDefense_ProfElmSpeech2
    return

EventScript_LeagueTitleDefense_ProfElm_Chikorita:
    trainerbattle3 0x3 0x172 0x200 gText_LeagueTitleDefense_ProfElmSpeech2
    return

EventScript_LeagueTitleDefense_ProfElm_Cyndaquil:
    trainerbattle3 0x3 0x170 0x200 gText_LeagueTitleDefense_ProfElmSpeech2
    return

EventScript_LeagueTitleDefense_Ending:
    spriteface PLAYER UP
    applymovement 0x5 EventScript_LeagueTitleDefense_Move2
    waitmovement 0x0
    msgbox 0x8C5508A 0xA
    msgbox gText_LeagueTitleDefense_ElmSpeech2 MSG_NORMAL
    callstd 0xB
    applymovement 0x5 EventScript_LeagueTitleDefense_Move6
    applymovement PLAYER EventScript_LeagueTitleDefense_Move6
    waitmovement 0x0
    applymovement 0x5 EventScript_LeagueTitleDefense_Move7
    hidesprite 0x5
    sound 0x9
    pause 0x16
    compare VAR_TITLE_DEFENSE_VICTORIES 0xFFFF
    if equal _goto EventScript_LeagueTitleDefense_None @If value is 0xFFFF, don't add anything. Prevents data overflow.
    addvar VAR_TITLE_DEFENSE_VICTORIES 0x1
    applymovement PLAYER EventScript_LeagueTitleDefense_Move8
    warp 0x1 0x50 0xFF 0x5 0x10
    end

EventScript_LeagueTitleDefense_EndingElm:
    msgbox gText_LeagueTitleDefense_ElmSpeech2 MSG_NORMAL
    callstd 0xB
    applymovement 0x5 EventScript_LeagueTitleDefense_Move9
    waitmovement 0x0
    spriteface 0x5 DOWN
    spriteface PLAYER UP
    pause 0xF
    applymovement 0x5 EventScript_LeagueTitleDefense_Move6
    applymovement PLAYER EventScript_LeagueTitleDefense_Move6
    waitmovement 0x0
    applymovement 0x5 EventScript_LeagueTitleDefense_Move7
    hidesprite 0x5
    sound 0x9
    pause 0x16
    compare VAR_TITLE_DEFENSE_VICTORIES 0xFFFF
    if equal _goto EventScript_LeagueTitleDefense_None @If value is 0xFFFF, don't add anything. Prevents data overflow.
    addvar VAR_TITLE_DEFENSE_VICTORIES 0x1
    applymovement PLAYER EventScript_LeagueTitleDefense_Move8
    warp 0x1 0x50 0xFF 0x5 0x10
    end

EventScript_LeagueTitleDefense_None:
    applymovement PLAYER EventScript_LeagueTitleDefense_Move8
    warp 0x1 0x50 0xFF 0x5 0x10
    end

EventScript_LeagueTitleDefense_StepRight:
    applymovement PLAYER EventScript_LeagueTitleDefense_Move10
    waitmovement 0x0
    return

EventScript_LeagueTitleDefense_StepLeft:
    applymovement PLAYER EventScript_LeagueTitleDefense_Move11
    waitmovement 0x0
    return

EventScript_LeagueTitleDefense_Move1:
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte end_m

EventScript_LeagueTitleDefense_Move2:
.byte walk_down
.byte end_m

EventScript_LeagueTitleDefense_Move3:
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte end_m

EventScript_LeagueTitleDefense_Move4:
.byte walk_down
.byte walk_down
.byte walk_down
.byte walk_down
.byte walk_down
.byte walk_down
.byte walk_down
.byte end_m

EventScript_LeagueTitleDefense_Move5:
.byte walk_left
.byte walk_down
.byte walk_down
.byte walk_down
.byte walk_right
.byte end_m

EventScript_LeagueTitleDefense_Move6:
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte walk_up
.byte end_m

EventScript_LeagueTitleDefense_Move7:
.byte walk_up
.byte end_m

EventScript_LeagueTitleDefense_Move8:
.byte walk_up
.byte walk_up
.byte end_m

EventScript_LeagueTitleDefense_Move9:
.byte walk_left
.byte walk_up
.byte walk_up
.byte walk_right
.byte end_m

EventScript_LeagueTitleDefense_Move10:
.byte walk_right
.byte end_m

EventScript_LeagueTitleDefense_Move11:
.byte walk_left
.byte end_m
