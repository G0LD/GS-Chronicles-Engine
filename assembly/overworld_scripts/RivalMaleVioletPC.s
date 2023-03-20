.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"
	
	@---------------
EventScript_RivalMaleVioletPC:
	lockall
	faceplayer
	msgbox 0x8C176A6 0xA //"Ethan"
	msgbox gText_RivalMaleVioletPC_String1 MSG_YESNO
	compare LASTRESULT 0x1
	if 0x1 _goto EventScript_RivalMaleVioletPC_Startconv
	msgbox gText_RivalMaleVioletPC_String2 MSG_NORMAL
	callstd 0xB
	releaseall
	end

EventScript_RivalMaleVioletPC_Startconv:
	msgbox 0x8C176A6 0xA //"Ethan"
	msgbox gText_RivalMaleVioletPC_String3 MSG_NORMAL
	callstd 0xB
	fadescreen 0x1
	getplayerpos 0x8004 0x8005
	compare 0x8004 0x7
	if 0x1 _call 0x8C100FE
	compare 0x8005 0x1C
	if 0x1 _goto EventScript_RivalMaleVioletPC_Nextconv
	spriteface 0xFF 0x3
	spriteface 0x4 0x3
	pause 0x60
	fadescreen 0x0
	pause 0xF
	spriteface 0x4 0x1
	spriteface 0xFF 0x2
	msgbox 0x8C176A6 0xA //"Ethan"
	msgbox gText_RivalMaleVioletPC_String4 MSG_YESNO
	compare LASTRESULT 0x1
	if 0x1 _goto EventScript_RivalMaleVioletPC_Convyes
	msgbox gText_RivalMaleVioletPC_String5 MSG_NORMAL
	callstd 0xB
	pause 0xF
	goto EventScript_RivalMaleVioletPC_Ending

EventScript_RivalMaleVioletPC_Nextconv:
	applymovement PLAYER 0x8C0E30C
	waitmovement 0x0
	spriteface 0xFF 0x3
	spriteface 0x4 0x3
	pause 0x60
	fadescreen 0x0
	pause 0xF
	spriteface 0x4 0x1
	spriteface 0xFF 0x2
	msgbox 0x8C176A6 0xA //"Ethan"
	msgbox gText_RivalMaleVioletPC_String4 MSG_YESNO
	compare LASTRESULT 0x1
	if 0x1 _goto EventScript_RivalMaleVioletPC_Convyes
	msgbox gText_RivalMaleVioletPC_String5 MSG_NORMAL
	callstd 0xB
	pause 0xF
	goto EventScript_RivalMaleVioletPC_Ending

EventScript_RivalMaleVioletPC_Convyes:
	msgbox gText_RivalMaleVioletPC_String6 MSG_NORMAL
	callstd 0xB
	pause 0xF
	goto EventScript_RivalMaleVioletPC_Ending

EventScript_RivalMaleVioletPC_Ending:
	applymovement 0x4 0x8C10652
	sound 0x15
	waitmovement 0x0
	checksound
	msgbox 0x8C176A6 0xA //"Ethan"
	msgbox gText_RivalMaleVioletPC_String7 MSG_KEEPOPEN
	callstd 0xB
	fanfare 0x172
	preparemsg 0x8C5D8B6 @"[player] received a [green_fr]Pok..."
	pause 0x60
	giveegg 0xAF
	msgbox 0x8C176A6 0xA //"Ethan"
	msgbox gText_RivalMaleVioletPC_String8 MSG_NORMAL
	callstd 0xB
	applymovement 0x1 0x8C10656
	waitmovement 0x0
	sound 0x9
	checksound
	pause 0xF
	hidesprite 0x4
	setflag 0x918
	setflag 0x919
	clearflag 0x215
	releaseall
	end










