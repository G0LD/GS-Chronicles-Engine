.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"


EventScript_RivalCianwood:
	lockall
	pause 0xF
	applymovement PLAYER EventScript_RivalCianwood_Move1
	waitmovement 0x0
	checkgender
	compare LASTRESULT 0x0
	if 0x1 _goto EventScript_RivalCianwood_Snippet1
	goto EventScript_RivalCianwood_Snippet2

	@---------------
EventScript_RivalCianwood_Snippet1:
	msgbox gText_RivalCianwood_String1 0xA @"Kris"
	msgbox gText_RivalCianwood_String2 MSG_KEEPOPEN @"I@m here as you requested. Can\nyo..."
	pause 0x5
	msgbox gText_RivalCianwood_String3 0xA @"Aspryus"
	msgbox gText_RivalCianwood_String4 MSG_KEEPOPEN @"You have no idea how excited I am\..."
	pause 0x5
	sound 0x15
	applymovement 0x5 EventScript_RivalCianwood_Move2
	waitmovement 0x0
	checksound
	msgbox gText_RivalCianwood_String1 0xA @"Kris"
	msgbox gText_RivalCianwood_String5 MSG_KEEPOPEN @"You made me interrupt my research\..."
	pause 0x5
	msgbox gText_RivalCianwood_String3 0xA @"Aspryus"
	msgbox gText_RivalCianwood_String6 MSG_KEEPOPEN @"No, no, no. You@re completely\nmis..."
	pause 0x6
	msgbox gText_RivalCianwood_String1 0xA @"Kris"
	msgbox gText_RivalCianwood_String7 MSG_KEEPOPEN @"I... I... I don@t know what to say..."
	pause 0x5
	sound 0x15
	applymovement 0x5 EventScript_RivalCianwood_Move3
	waitmovement 0x0
	spriteface 0x5 0x4
	checksound
	msgbox gText_RivalCianwood_String1 0xA @"Kris"
	msgbox gText_RivalCianwood_String8 MSG_KEEPOPEN @"[player]! I didn@t notice you\nwer..."
	pause 0x5
	spriteface 0x3 0x4
	msgbox gText_RivalCianwood_String3 0xA @"Aspryus"
	msgbox gText_RivalCianwood_String9 MSG_KEEPOPEN @"Nice to see you, [player]!\nI was ..."
	pause 0x5
	msgbox gText_RivalCianwood_String1 0xA @"Kris"
	msgbox gText_RivalCianwood_String10 MSG_KEEPOPEN @"(sigh)\pOk, I@ll do it because I w..."
	pause 0xF
	applymovement 0x3 EventScript_RivalCianwood_Move4
	msgbox gText_RivalCianwood_String3 0xA @"Aspryus"
	msgbox gText_RivalCianwood_String12 MSG_NORMAL @"What a splendid battle!\nI@m amaze..." 0XB
	applymovement 0x3 EventScript_RivalCianwood_Move5
	waitmovement 0x0
	hidesprite 0x3
	pause 0x3
	msgbox gText_RivalCianwood_String1 0xA @"Kris"
	msgbox gText_RivalCianwood_String13 MSG_KEEPOPEN @"Gosh, I don@t know what to do. Not..." 0XB
	pause 0x6
	giveitem ITEM_DESTINY_KNOT 0x1 MSG_OBTAIN
	msgbox gText_RivalCianwood_String11 MSG_NORMAL
	applymovement 0x5 EventScript_RivalCianwood_Move6
	waitmovement 0x0
	sound 0x9
	hidesprite 0x5
	checksound
	pause 0x5
	setflag 0x9CB
	setflag 0x9CC
	setflag 0x9CD
	clearflag 0x9CE
	setvar 0x5039 0x1
	releaseall
	end

	@---------------
EventScript_RivalCianwood_Snippet2:
	msgbox gText_RivalCianwood_String14 0xA @"Ethan"
	msgbox gText_RivalCianwood_String2 MSG_KEEPOPEN @"I@m here as you requested. Can\nyo..."
	pause 0x5
	msgbox gText_RivalCianwood_String3 0xA @"Aspryus"
	msgbox gText_RivalCianwood_String15 MSG_KEEPOPEN @"You have no idea how excited I am\..."
	pause 0x5
	sound 0x15
	applymovement 0x4 EventScript_RivalCianwood_Move2
	waitmovement 0x0
	checksound
	msgbox gText_RivalCianwood_String14 0xA @"Ethan"
	msgbox gText_RivalCianwood_String5 MSG_KEEPOPEN @"You made me interrupt my research\..."
	pause 0x5
	msgbox gText_RivalCianwood_String3 0xA @"Aspryus"
	msgbox gText_RivalCianwood_String16 MSG_KEEPOPEN @"No, no, no. You@re completely\nmis..."
	pause 0x6
	msgbox gText_RivalCianwood_String14 0xA @"Ethan"
	msgbox gText_RivalCianwood_String7 MSG_KEEPOPEN @"I... I... I don@t know what to say..."
	pause 0x5
	sound 0x15
	applymovement 0x4 EventScript_RivalCianwood_Move3
	waitmovement 0x0
	spriteface 0x4 0x4
	checksound
	msgbox gText_RivalCianwood_String14 0xA @"Ethan"
	msgbox gText_RivalCianwood_String8 MSG_KEEPOPEN @"[player]! I didn@t notice you\nwer..."
	pause 0x5
	spriteface 0x3 0x4
	msgbox gText_RivalCianwood_String3 0xA @"Aspryus"
	msgbox gText_RivalCianwood_String17 MSG_KEEPOPEN @"Nice to see you, [player]!\nI was ..."
	pause 0x5
	msgbox gText_RivalCianwood_String14 0xA @"Ethan"
	msgbox gText_RivalCianwood_String10 MSG_KEEPOPEN @"(sigh)\pOk, I@ll do it because I w..."
	pause 0xF
	applymovement 0x3 EventScript_RivalCianwood_Move4
	waitmovement 0x0
	msgbox gText_RivalCianwood_String3 0xA @"Aspryus"
	msgbox gText_RivalCianwood_String18 MSG_NORMAL @"What a splendid battle!\nI@m amaze..." 0XB
	applymovement 0x3 EventScript_RivalCianwood_Move5
	waitmovement 0x0
	hidesprite 0x3
	pause 0x3
	msgbox gText_RivalCianwood_String14 0xA @"Ethan"
	msgbox gText_RivalCianwood_String13 MSG_KEEPOPEN @"Gosh, I don@t know what to do. Not..." 0XB
	pause 0x6
	giveitem ITEM_DESTINY_KNOT 0x1 MSG_OBTAIN
	msgbox gText_RivalCianwood_String11 MSG_NORMAL
	applymovement 0x4 EventScript_RivalCianwood_Move6
	waitmovement 0x0
	sound 0x9
	hidesprite 0x4
	checksound
	pause 0x5
	setflag 0x9CB
	setflag 0x9CC
	setflag 0x9CD
	clearflag 0x9CE
	setvar 0x5039 0x1
	releaseall
	end

@-----------
	@ Movements
	@-----------
	
EventScript_RivalCianwood_Move1:
.byte 0x10
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0xFE

EventScript_RivalCianwood_Move2:
.byte 0x64
.byte 0xFE

EventScript_RivalCianwood_Move3:
.byte 0x62
.byte 0xFE

EventScript_RivalCianwood_Move4:
.byte 0x13
.byte 0x1
.byte 0xFE

EventScript_RivalCianwood_Move5:
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0xFE

EventScript_RivalCianwood_Move6:
.byte 0x11
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0xFE
