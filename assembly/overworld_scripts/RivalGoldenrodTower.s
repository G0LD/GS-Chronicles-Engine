.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

.equ ETHAN, 0x6
.equ KRIS, 0x4
.equ OAK, 0x3
.equ BIRCH, 0x2
.equ ASPRYUS, 0x1

EventScript_RivalGoldenrodTower:
	lockall
	checkflag 0x92E
	if 0x1 _goto EventScript_RivalGoldenrodTower_Snippet1
	applymovement 0x1 EventScript_RivalGoldenrodTower_Move1
	waitmovement 0x0
	pause 0xF
	getplayerpos 0x8004 0x8005
	compare 0x8005 0x3
	if 0x1 _goto EventScript_RivalGoldenrodTower_Snippet2
	compare 0x8005 0x4
	if 0x1 _goto EventScript_RivalGoldenrodTower_Snippet3
	end

	@---------------
EventScript_RivalGoldenrodTower_Snippet1:
	releaseall
	end

	@---------------
EventScript_RivalGoldenrodTower_Snippet2:
	applymovement 0x1 EventScript_RivalGoldenrodTower_Move2
	waitmovement 0x0
	pause 0xF
	call EventScript_RivalGoldenrodTower_Snippet4
	msgbox gText_RivalGoldenrodTower_String1 MSG_NORMAL @"Hey! you must be [player], right?\..."
	callstd 0xB
	applymovement 0x1 EventScript_RivalGoldenrodTower_Move3
	applymovement PLAYER EventScript_RivalGoldenrodTower_Move4
	waitmovement 0x0
	goto EventScript_RivalGoldenrodTower_Snippet5

	@---------------
EventScript_RivalGoldenrodTower_Snippet3:
	applymovement 0x1 EventScript_RivalGoldenrodTower_Move5
	waitmovement 0x0
	pause 0xF
	call EventScript_RivalGoldenrodTower_Snippet4
	msgbox gText_RivalGoldenrodTower_String1 MSG_NORMAL @"Hey! you must be [player], right?\..." 
	callstd 0xB
	applymovement 0x1 EventScript_RivalGoldenrodTower_Move6
	applymovement PLAYER EventScript_RivalGoldenrodTower_Move7
	waitmovement 0x0
	goto EventScript_RivalGoldenrodTower_Snippet5

	@---------------
EventScript_RivalGoldenrodTower_Snippet4:
	msgbox gText_RivalGoldenrodTower_String2 0xA @"Business Man"
	return

	@---------------
EventScript_RivalGoldenrodTower_Snippet5:
	spriteface 0x1 0x1
	spriteface 0xFF 0x2
	call EventScript_RivalGoldenrodTower_Snippet4
	msgbox gText_RivalGoldenrodTower_String3 MSG_KEEPOPEN @"Allow me to introduce myself.\nMy ..." 
	callstd 0xB
	pause 0x30
	spriteface ASPRYUS RIGHT
	spriteface PLAYER RIGHT
	call EventScript_RivalGoldenrodTower_Snippet6
	msgbox gText_RivalGoldenrodTower_String4 MSG_KEEPOPEN @"Hello! Nice to meet you,\n[player]..."
	pause 0x30
	callstd 0xB
	call EventScript_RivalGoldenrodTower_Snippet7
	msgbox gText_RivalGoldenrodTower_String5 MSG_NORMAL @"I heard you were coming to\nGolden..." 
	callstd 0xB
	checkgender
	compare LASTRESULT 0x0
	if 0x1 _goto EventScript_RivalGoldenrodTower_Snippet8
	compare LASTRESULT 0x1
	if 0x1 _goto EventScript_RivalGoldenrodTower_Snippet9
	end

	@---------------
EventScript_RivalGoldenrodTower_Snippet6:
	msgbox gText_RivalGoldenrodTower_String6 0xA @"Prof. Birch"
	return

	@---------------
EventScript_RivalGoldenrodTower_Snippet7:
	msgbox gText_RivalGoldenrodTower_String7 0xA @"Prof. Oak"
	return

	@---------------
EventScript_RivalGoldenrodTower_Snippet8: @Kris
	showsprite 0x4
	applymovement 0x4 EventScript_RivalGoldenrodTower_Move8
	waitmovement 0x0
	pause 0x20
	spriteface ASPRYUS UP
	spriteface BIRCH UP
	spriteface PLAYER UP
	spriteface OAK UP
	call EventScript_RivalGoldenrodTower_Snippet10
	msgbox gText_RivalGoldenrodTower_String8 MSG_NORMAL @"Hi! I@m sorry for being late.\nI h..." 
	callstd 0xB
	spriteface 0x4 0x3
	pause 0x12
	call EventScript_RivalGoldenrodTower_Snippet10
	msgbox gText_RivalGoldenrodTower_String9 MSG_NORMAL @"Ah, it@s you, dad. I didn@t expect..." 
	callstd 0xB
	pause 0x12
	applymovement 0x1 EventScript_RivalGoldenrodTower_Move9
	waitmovement 0x0
	call EventScript_RivalGoldenrodTower_Snippet11
	msgbox gText_RivalGoldenrodTower_String10 MSG_NORMAL @"Oh! It@s my sweetie girl!\nYou don..." 
	callstd 0xB
	pause 0x20
	applymovement 0x4 EventScript_RivalGoldenrodTower_Move10
	waitmovement 0x0
	spriteface 0x2 0x4
	spriteface 0x3 0x4
	spriteface 0xFF 0x4
	spriteface 0x1 0x1
	call EventScript_RivalGoldenrodTower_Snippet10
	msgbox gText_RivalGoldenrodTower_String11 MSG_NORMAL @"As I said before. Here are the\nre..." 
	callstd 0xB
	applymovement 0x4 EventScript_RivalGoldenrodTower_Move11
	waitmovement 0x0
	spriteface ASPRYUS UP
	spriteface BIRCH UP
	spriteface PLAYER UP
	spriteface OAK UP
	call EventScript_RivalGoldenrodTower_Snippet10
	msgbox gText_RivalGoldenrodTower_String12 MSG_NORMAL @"I@m sorry but I@ve to go.\nI just ..." 
	callstd 0xB
	pause 0x12
	applymovement 0x4 EventScript_RivalGoldenrodTower_Move12
	waitmovement 0x0
	hidesprite 0x4
	pause 0x20
	spriteface ASPRYUS DOWN
	call EventScript_RivalGoldenrodTower_Snippet11
	msgbox gText_RivalGoldenrodTower_String13 MSG_NORMAL @"I don@t know what is wrong with\nh..." 
	callstd 0xB
	goto EventScript_RivalGoldenrodTower_Snippet12

	@---------------
EventScript_RivalGoldenrodTower_Snippet9: @Ethan
	showsprite 0x6
	applymovement 0x6 EventScript_RivalGoldenrodTower_Move8
	waitmovement 0x0
	pause 0x20
	spriteface ASPRYUS UP
	spriteface BIRCH UP
	spriteface PLAYER UP
	spriteface OAK UP
	call EventScript_RivalGoldenrodTower_Snippet13
	msgbox gText_RivalGoldenrodTower_String8 MSG_NORMAL @"Hi! I@m sorry for being late.\nI h..." 
	callstd 0xB
	spriteface 0x6 0x3
	pause 0x12
	call EventScript_RivalGoldenrodTower_Snippet13
	msgbox gText_RivalGoldenrodTower_String9 MSG_NORMAL @"Ah, it@s you, dad. I didn@t expect..." 
	callstd 0xB
	pause 0x20
	applymovement 0x1 EventScript_RivalGoldenrodTower_Move9
	waitmovement 0x0
	call EventScript_RivalGoldenrodTower_Snippet11
	msgbox gText_RivalGoldenrodTower_String14 MSG_NORMAL @"Oh! It@s my little champ boy!\nYou..." 
	callstd 0xB
	pause 0x12
	applymovement 0x6 EventScript_RivalGoldenrodTower_Move10
	waitmovement 0x0
	spriteface 0x2 0x4
	spriteface 0x3 0x4
	spriteface 0xFF 0x4
	spriteface 0x1 0x1
	call EventScript_RivalGoldenrodTower_Snippet13
	msgbox gText_RivalGoldenrodTower_String11 MSG_NORMAL @"As I said before. Here are the\nre..." 
	callstd 0xB
	applymovement 0x6 EventScript_RivalGoldenrodTower_Move11
	waitmovement 0x0
	spriteface ASPRYUS UP
	spriteface BIRCH UP
	spriteface PLAYER UP
	spriteface OAK UP
	call EventScript_RivalGoldenrodTower_Snippet13
	msgbox gText_RivalGoldenrodTower_String12 MSG_NORMAL @"I@m sorry but I@ve to go.\nI just ..." 
	callstd 0xB
	pause 0x12
	applymovement 0x6 EventScript_RivalGoldenrodTower_Move12
	waitmovement 0x0
	hidesprite 0x6
	pause 0x20
	spriteface ASPRYUS DOWN
	call EventScript_RivalGoldenrodTower_Snippet11
	msgbox gText_RivalGoldenrodTower_String15 MSG_NORMAL @"I don@t know what is wrong with\nh..." 
	callstd 0xB
	goto EventScript_RivalGoldenrodTower_Snippet12

	@---------------
EventScript_RivalGoldenrodTower_Snippet10:
	msgbox gText_RivalGoldenrodTower_String16 0xA @"Kris"
	return

	@---------------
EventScript_RivalGoldenrodTower_Snippet11:
	msgbox gText_RivalGoldenrodTower_String17 0xA @"Aspryus"
	return

	@---------------
EventScript_RivalGoldenrodTower_Snippet12:
	applymovement 0x1 EventScript_RivalGoldenrodTower_Move13
	waitmovement 0x0
	spriteface ASPRYUS DOWN
	spriteface BIRCH LEFT
	spriteface PLAYER UP
	spriteface OAK LEFT
	call EventScript_RivalGoldenrodTower_Snippet11
	msgbox gText_RivalGoldenrodTower_String18 MSG_NORMAL @"By the way, The main reason to\nin..." 
	callstd 0xB
	pause 0x12
	applymovement 0x1 EventScript_RivalGoldenrodTower_Move14
	waitmovement 0x0
	hidesprite 0x1
	pause 0x22
	applymovement PLAYER EventScript_RivalGoldenrodTower_Move15
	waitmovement 0x0
	spriteface 0x2 0x4
	spriteface 0x3 0x4
	pause 0x12
	call EventScript_RivalGoldenrodTower_Snippet7
	msgbox gText_RivalGoldenrodTower_String19 MSG_KEEPOPEN @"[player], I was checking your\nPok..."
	pause 0x12
	callstd 0xB
	fanfare 0x13D
	msgbox gText_RivalGoldenrodTower_String20 MSG_KEEPOPEN @"Professor Oak@s Phone number was\n..."
	waitfanfare
	closeonkeypress
	pause 0xC
	applymovement 0x2 EventScript_RivalGoldenrodTower_Move16
	waitmovement 0x0
	spriteface 0xFF 0x2
	call EventScript_RivalGoldenrodTower_Snippet6
	msgbox gText_RivalGoldenrodTower_String21 MSG_KEEPOPEN @"I see you@re a reliable person\nso..."
	pause 0x12
	callstd 0xB
	fanfare 0x102
	msgbox gText_RivalGoldenrodTower_String22 MSG_KEEPOPEN @"You got a DexNav card\ninserted in..."
	waitfanfare
	pause 0xC
	call EventScript_RivalGoldenrodTower_Snippet6
	msgbox gText_RivalGoldenrodTower_String23 MSG_NORMAL @"Be careful to not run when you\nse..." 
	callstd 0xB
	pause 0x12
	applymovement 0x2 EventScript_RivalGoldenrodTower_Move17
	waitmovement 0x0
	hidesprite 0x2
	pause 0x12
	spriteface 0x3 0x3
	setflag 0x92E
	releaseall
	end

	@---------------
EventScript_RivalGoldenrodTower_Snippet13:
	msgbox gText_RivalGoldenrodTower_String24 0xA @"Ethan"
	return

	@-----------
	@ Movements
	@-----------
EventScript_RivalGoldenrodTower_Move1:
.byte 0x62
.byte 0xFE

EventScript_RivalGoldenrodTower_Move2:
.byte 0x11
.byte 0x11
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0xFE

EventScript_RivalGoldenrodTower_Move3:
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x10
.byte 0x10
.byte 0x3
.byte 0xFE

EventScript_RivalGoldenrodTower_Move4:
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x10
.byte 0x10
.byte 0x10
.byte 0x13
.byte 0xFE

EventScript_RivalGoldenrodTower_Move5:
.byte 0x11
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0xFE

EventScript_RivalGoldenrodTower_Move6:
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x10
.byte 0x3
.byte 0xFE

EventScript_RivalGoldenrodTower_Move7:
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x10
.byte 0x10
.byte 0x13
.byte 0xFE

EventScript_RivalGoldenrodTower_Move8:
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte 0x12
.byte walk_down
.byte 0xFE

EventScript_RivalGoldenrodTower_Move9:
.byte 0x11
.byte 0x13
.byte 0xFE

EventScript_RivalGoldenrodTower_Move10:
.byte 0x13
.byte 0x13
.byte 0x10
.byte 0x10
.byte 0x2
.byte 0xFE

EventScript_RivalGoldenrodTower_Move11:
.byte 0x11
.byte 0x11
.byte 0x11
.byte 0x0
.byte 0xFE

EventScript_RivalGoldenrodTower_Move12:
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x60
.byte 0xFE

EventScript_RivalGoldenrodTower_Move13:
.byte 0x12
.byte 0x10
.byte 0xFE

EventScript_RivalGoldenrodTower_Move14:
.byte 0x11
.byte 0x11
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x60
.byte 0xFE

EventScript_RivalGoldenrodTower_Move15:
.byte 0x10
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x11
.byte 0x2
.byte 0xFE

EventScript_RivalGoldenrodTower_Move16:
.byte 0x13
.byte 0x0
.byte 0xFE

EventScript_RivalGoldenrodTower_Move17:
.byte 0x11
.byte 0x11
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0x13
.byte 0xFE
