.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"
	
	@---------------
EventScript_Hypertrainer:
	lock
	msgbox gText_Hypertrainer_String1 MSG_YESNO @"You look kinda strong, I must say...."
	compare LASTRESULT 0x1
	if 0x0 _goto EventScript_Hypertrainer_NoHT
	call EventScript_Hypertrainer_Ask
	goto EventScript_Hypertrainer_NoHT
	end

EventScript_Hypertrainer_Ask:
	msgbox gText_Hypertrainer_String2 MSG_KEEPOPEN
	multichoice 0x0 0x0 0x4C 0x0
	compare LASTRESULT 0x0
	if 0x1 _goto EventScript_Hypertrainer_BottleCap
	compare LASTRESULT 0x1
	if 0x1 _goto EventScript_Hypertrainer_GoldCap
	compare LASTRESULT 0x7F
	if 0x1 _goto EventScript_Hypertrainer_NoHT
	return


EventScript_Hypertrainer_BottleCap:
	checkitem ITEM_BOTTLE_CAP 0x1
	setvar 0x8008 ITEM_BOTTLE_CAP
	compare LASTRESULT 0x0
	if 0x1 _goto EventScript_Hypertrainer_NoCaps
	setvar 0x8003 0x0
	msgbox gText_Hypertrainer_String3 MSG_NORMAL
	special 0x9F
	waitstate
	compare 0x8004 0x6
	if 0x4 _goto EventScript_Hypertrainer_NoHT
	special2 LASTRESULT 0x147
	compare LASTRESULT 0x19C
	if 0x1 _goto EventScript_Hypertrainer_Egg
	special 0x7C
	copyvar 0x8009 0x8004
	msgbox gText_Hypertrainer_String4 MSG_KEEPOPEN
	setvar 0x8000 0x8
    setvar 0x8001 0x4
    setvar 0x8004 0x0
    special 0x158
    waitstate
	copyvar 0x8004 0x8009
	compare LASTRESULT 0x0
	if 0x1 _goto EventScript_Hypertrainer_HP
	compare LASTRESULT 0x1
	if 0x1 _goto EventScript_Hypertrainer_ATK
	compare LASTRESULT 0x2
	if 0x1 _goto EventScript_Hypertrainer_DEF
	compare LASTRESULT 0x3
	if 0x1 _goto EventScript_Hypertrainer_SPA
	compare LASTRESULT 0x4
	if 0x1 _goto EventScript_Hypertrainer_SPD
	compare LASTRESULT 0x5
	if 0x1 _goto EventScript_Hypertrainer_SPE
	goto EventScript_Hypertrainer_NoHT
	end

EventScript_Hypertrainer_HP:
	msgbox gText_Hypertrainer_String5 MSG_NORMAL
	setvar 0x8005 0x0
	setvar 0x8006 0x1F
	special 0x10
	goto EventScript_Hypertrainer_End

EventScript_Hypertrainer_ATK:
	msgbox gText_Hypertrainer_String5 MSG_NORMAL
	setvar 0x8005 0x1
	setvar 0x8006 0x1F
	special 0x10
	goto EventScript_Hypertrainer_End

EventScript_Hypertrainer_DEF:
	msgbox gText_Hypertrainer_String5 MSG_NORMAL
	setvar 0x8005 0x2
	setvar 0x8006 0x1F
	special 0x10
	goto EventScript_Hypertrainer_End

EventScript_Hypertrainer_SPA:
	msgbox gText_Hypertrainer_String5 MSG_NORMAL
	setvar 0x8005 0x4
	setvar 0x8006 0x1F
	special 0x10
	goto EventScript_Hypertrainer_End

EventScript_Hypertrainer_SPD:
	msgbox gText_Hypertrainer_String5 MSG_NORMAL
	setvar 0x8005 0x5
	setvar 0x8006 0x1F
	special 0x10
	goto EventScript_Hypertrainer_End

EventScript_Hypertrainer_SPE:
	msgbox gText_Hypertrainer_String5 MSG_NORMAL
	setvar 0x8005 0x3
	setvar 0x8006 0x1F
	special 0x10
	goto EventScript_Hypertrainer_End

EventScript_Hypertrainer_GoldCap:
	checkitem ITEM_GOLD_BOTTLE_CAP 0x1
	setvar 0x8008 ITEM_GOLD_BOTTLE_CAP
	compare LASTRESULT 0x0
	if 0x1 _goto EventScript_Hypertrainer_NoCaps
	setvar 0x8003 0x0
	msgbox gText_Hypertrainer_String6 MSG_NORMAL
	special 0x9F
	waitstate
	compare 0x8004 0x6
	if 0x4 _goto EventScript_Hypertrainer_NoHT
	special2 LASTRESULT 0x147
	compare LASTRESULT 0x19C
	if 0x1 _goto EventScript_Hypertrainer_Egg
	special 0x7C
	msgbox gText_Hypertrainer_String5 MSG_NORMAL
	setvar 0x8005 0x0
	setvar 0x8006 0x1F
	special 0x10
	setvar 0x8005 0x1
	setvar 0x8006 0x1F
	special 0x10
	setvar 0x8005 0x2
	setvar 0x8006 0x1F
	special 0x10
	setvar 0x8005 0x3
	setvar 0x8006 0x1F
	special 0x10
	setvar 0x8005 0x4
	setvar 0x8006 0x1F
	special 0x10
	setvar 0x8005 0x5
	setvar 0x8006 0x1F
	special 0x10
	goto EventScript_Hypertrainer_End

EventScript_Hypertrainer_End:
	pause 0x5
	fadescreen 0x1
	sound 0x58
	checksound
	pause 0x3
	sound 0x58
	checksound
	pause 0x3
	sound 0x58
	checksound
	pause 0xF
	fadescreen 0x0
	removeitem 0x8008 0x1
	msgbox gText_Hypertrainer_String7 MSG_YESNO
	compare LASTRESULT 0x1
	if 0x1 _goto EventScript_Hypertrainer_Ask
	goto EventScript_Hypertrainer_NoMoreHT
	end

	@---------------
EventScript_Hypertrainer_NoHT:
    setvar 0x8004 0x0
	msgbox gText_Hypertrainer_String8 MSG_NORMAL @"Then get away from here if you@re\..."
	release
	end

	@---------------
EventScript_Hypertrainer_NoCaps:
	setvar 0x8004 0x0
	msgbox gText_Hypertrainer_String9 MSG_NORMAL @"You ain@t have any Big Nugget!\nAr..."
	release
	end

	@---------------
EventScript_Hypertrainer_Egg:
	setvar 0x8004 0x0
	msgbox gText_Hypertrainer_String10 MSG_NORMAL @"Hol@ up, that@s a Pok�mon Egg,\nWh..."
	release
	end

EventScript_Hypertrainer_NoMoreHT:
	setvar 0x8004 0x0
	release
	end








