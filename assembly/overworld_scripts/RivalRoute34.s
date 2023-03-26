.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

EventScript_RivalRoute34_0XC16B40:
	lockall
	pause 0x22
	msgbox 0x8C16E68 MSG_NORMAL @"Thanks for the advice,\ngrandpa!"
	pause 0x10
	getplayerpos 0x8004 0x8005
	compare 0x8004 0x12
	if 0x1 _goto EventScript_RivalRoute34_0XC16BA2
	compare 0x8004 0x11
	if 0x1 _goto EventScript_RivalRoute34_0XC16BB2
	compare 0x8004 0x10
	if 0x1 _goto EventScript_RivalRoute34_0XC16BC2
	compare 0x8004 0xF
	if 0x1 _goto EventScript_RivalRoute34_0XC16BD2
	compare 0x8004 0xE
	if 0x1 _goto EventScript_RivalRoute34_0XC16BE2
	compare 0x8004 0xD
	if 0x1 _goto EventScript_RivalRoute34_0XC16BF2
	compare 0x8004 0xC
	if 0x1 _goto EventScript_RivalRoute34_0XC16C02
	end

EventScript_RivalRoute34_0XC16BA2:
	applymovement PLAYER 0x8C176AE
	waitmovement 0x0
	goto EventScript_RivalRoute34_0XC16C12
	end

EventScript_RivalRoute34_0XC16BB2:
	applymovement PLAYER 0x8C176B2
	waitmovement 0x0
	goto EventScript_RivalRoute34_0XC16C12
	end

EventScript_RivalRoute34_0XC16BC2:
	applymovement PLAYER 0x8C176B5
	waitmovement 0x0
	goto EventScript_RivalRoute34_0XC16C12
	end

EventScript_RivalRoute34_0XC16BD2:
	applymovement PLAYER 0x8C176B9
	waitmovement 0x0
	goto EventScript_RivalRoute34_0XC16C12
	end

EventScript_RivalRoute34_0XC16BE2:
	applymovement PLAYER 0x8C176BE
	waitmovement 0x0
	goto EventScript_RivalRoute34_0XC16C12
	end

EventScript_RivalRoute34_0XC16BF2:
	applymovement PLAYER 0x8C176C4
	waitmovement 0x0
	goto EventScript_RivalRoute34_0XC16C12
	end

EventScript_RivalRoute34_0XC16C02:
	applymovement PLAYER 0x8C176CB
	waitmovement 0x0
	goto EventScript_RivalRoute34_0XC16C12
	end

EventScript_RivalRoute34_0XC16C12:
	checkgender
	compare LASTRESULT 0x0
	if 0x1 _goto EventScript_RivalRoute34_0XC16C2A
	compare LASTRESULT 0x1
	if 0x1 _goto EventScript_RivalRoute34_0XC16CFE
	end


EventScript_RivalRoute34_0XC16C2A: @Kris
	playsong 0x144 0x0
	spriteface 0x1 0x0
	spriteface 0xC 0x0
	applymovement 0x1 0x8C176D3
	waitmovement 0x0
	call 0x8C16DD2
	msgbox gText_RivalRoute34_String1 MSG_KEEPOPEN @"Hey [player]!\nNice to see you.\pI..."
	pause 0xF
	call 0x8C16DF9
	msgbox gText_RivalRoute34_String2 MSG_KEEPOPEN @"Yo [player]! Long time no see.\pHo..."
	pause 0xF
	spriteface 0x1 RIGHT
	spriteface 0xC LEFT
	call 0x8C16DD2
	msgbox gText_RivalRoute34_String3 MSG_NORMAL @"Yup. [player] is in charge\nof Pro..."
	callstd 0xB
	pause 0x20
	spriteface 0x1 DOWN
	spriteface 0xC DOWN
	call 0x8C16DD2
	msgbox gText_RivalRoute34_String3a MSG_NORMAL
	callstd 0xB
	trainerbattle3 0x3 0x3B 0x200 gText_RivalRoute34_String4
	call 0x8C16DD2
	msgbox gText_RivalRoute34_String5 MSG_KEEPOPEN @"That was a nice battle. I see\nmy ..."
	callstd 0xB
	fanfare 0x13D
	msgbox 0x8C172D7 MSG_KEEPOPEN @"Kris@ Phone number was registered\..."
	waitfanfare
	call 0x8C16DD2
	msgbox gText_RivalRoute34_String6 MSG_NORMAL @"Professor Oak and Elm are waiting\..."
	callstd 0xB
	applymovement 0x1 0x8C176D7
	waitmovement 0x0
	call 0x8C16DD2
	msgbox gText_RivalRoute34_String6a MSG_NORMAL
	callstd 0xB
	applymovement 0x1 0x8C176DE
	waitmovement 0x0
	hidesprite 0x1
	applymovement 0xC 0x8C176E6
	waitmovement 0x0
	call 0x8C16DF9
	msgbox gText_RivalRoute34_0XC17339 MSG_NORMAL @"You had an exciting battle!\nMy de..."
	callstd 0xB
	applymovement PLAYER 0x8C176EA
	waitmovement 0x0
	pause 0x22
	call 0x8C16DF9
	msgbox 0x8C67E83 MSG_NORMAL @"Hahaha. I@m just kidding.\nDon@t g..."
	callstd 0xB
	goto EventScript_RivalRoute34_0XC57063
	end

EventScript_RivalRoute34_0XC16CFE: @Ethan
	playsong 0x145 0x0
	spriteface 0x2 0x0
	spriteface 0xC 0x0
	applymovement 0x2 0x8C176D3
	waitmovement 0x0
	call 0x8C16E41
	msgbox gText_RivalRoute34_String1 MSG_KEEPOPEN @"Hey [player]!\nNice to see you.\pI..."
	pause 0xF
	call 0x8C16DF9
	msgbox gText_RivalRoute34_String7 MSG_KEEPOPEN @"Yo [player]! Long time no see.\pHo..."
	pause 0xF
	spriteface 0x2 RIGHT
	spriteface 0xC LEFT
	call 0x8C16E41
	msgbox gText_RivalRoute34_String3 MSG_NORMAL @"Yup. [player] is in charge\nof Pro..."
	callstd 0xB
	pause 0x20
	spriteface 0x2 DOWN
	spriteface 0xC DOWN
	call 0x8C16E41
	msgbox gText_RivalRoute34_String3a MSG_NORMAL
	callstd 0xB
	trainerbattle3 0x3 0x3C 0x200 gText_RivalRoute34_String4
	call 0x8C16E41
	msgbox gText_RivalRoute34_String5 MSG_NORMAL @"That was a nice battle. I see\nmy ..."
	callstd 0xB
	fanfare 0x13D
	msgbox 0x8C17597 MSG_KEEPOPEN @"Ethan@s Phone number was registere..."
	waitfanfare
	call 0x8C16E41
	msgbox gText_RivalRoute34_String6 MSG_NORMAL @"Professor Oak and Elm are waiting\..."
	callstd 0xB
	applymovement 0x2 0x8C176D7
	waitmovement 0x0
	call 0x8C16E41
	msgbox gText_RivalRoute34_String6a MSG_NORMAL
	callstd 0xB
	applymovement 0x2 0x8C176DE
	waitmovement 0x0
	hidesprite 0x2
	applymovement 0xC 0x8C176E6
	waitmovement 0x0
	call 0x8C16DF9
	msgbox gText_RivalRoute34_0XC175CF MSG_NORMAL @"You had an exciting battle!\nMy de..."
	callstd 0xB
	sound 0x15
	applymovement PLAYER 0x8C176EA
	waitmovement 0x0
	checksound
	pause 0x22
	call 0x8C16DF9
	msgbox 0x8C67E83 MSG_NORMAL @"Hahaha. I@m just kidding.\nDon@t g..."
	callstd 0xB
	goto EventScript_RivalRoute34_0XC57063
	end

EventScript_RivalRoute34_0XC57063:
	callstd 0xB
	applymovement 0xC 0x8C176EE
	waitmovement 0x0
	sound 0x9
	hidesprite 0xC
	checksound
	pause 0xF
	setflag 0x927
	setflag 0x928
	setflag 0x236
	setflag 0x9F8
	setflag 0x9F9
	setflag 0x9FB
	setflag 0x100A
	setflag 0x100C
	setflag 0x1008
	setvar 0x5026 0x1
	releaseall
	end
