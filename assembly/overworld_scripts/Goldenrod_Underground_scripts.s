.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

.global EventScript_Goldenrod_Ability_hidden
EventScript_Goldenrod_Ability_hidden:
    lock
    faceplayer
    msgbox gText_Saffron_Nerd MSG_YESNO
    compare LASTRESULT 0
    if equal _goto NahImGood
    checkitem ITEM_BOTTLE_CAP 0x1
    compare 0x800D 0x1
    if lessthan _goto YouDontHave
    setvar 0x8003 0x0 
    special 0x9F 
    waitstate 
    compare 0x8004 0x6
    if greaterorequal _goto NahImGood
    pause 0x6
    compare LASTRESULT 0x0 
    if equal _goto DontHaveHidden
    msgbox gText_AbilityCapsuleOfferChange MSG_YESNO 
    compare LASTRESULT NO 
    if equal _goto NahImGood
    pause 0x6
    msgbox gText_Saffron_NerdGiveItem MSG_FACE
    msgbox gText_Saffron_NerdAfter MSG_FACE
    removeitem ITEM_BOTTLE_CAP 0x1
    release
    end

NahImGood:
    release
    end

YouDontHave:
    msgbox gText_Saffron_NerdReject MSG_FACE
    release
    end

DontHaveHidden: 
    msgbox gText_SaffronNerd_NoHidden MSG_FACE 
    release 
    end 

.global EventScript_Goldenrod_Haircut_guy
    EventScript_Goldenrod_Haircut_guy:
	lock
	faceplayer
	setvar 0x8000 0x50F6
	setvar 0x8001 0x0
	special2 LASTRESULT 0xA0
	compare LASTRESULT 0x0
	if equal _goto EventScript_Goldenrod_Haircut_guy_Done
	showmoney 0x0 0x0 0x0
	updatemoney 0x0 0x0 0x0
	msgbox gText_Goldenrod_Haircut_guy_T1 MSG_YESNO
	compare LASTRESULT 0x1
	if lessthan _goto EventScript_Goldenrod_Haircut_guy_Nope
	msgbox gText_Goldenrod_Haircut_guy_T2 MSG_NORMAL
	hidemoney 0x0 0x0
	pause 0x2
	special 0x9F
	waitstate
	compare 0x8004 0x6
	if greaterorequal _goto EventScript_Goldenrod_Haircut_guy_Nope
	special2 LASTRESULT 0x147
	compare LASTRESULT 0x19C
	if equal _goto 0x8C5F300
	special 0x7C
	showmoney 0x0 0x0 0x0
	updatemoney 0x0 0x0 0x0
	msgbox gText_Goldenrod_Haircut_guy_T3 MSG_NORMAL
	removemoney 0x7D0 0x0
	updatemoney 0x0 0x0 0x0
	hidemoney 0x0 0x0
    pause 0x5
	fadescreen 0x1
	fanfare 0x100
	waitfanfare
	pause 0x5
	setvar 0x8003 0x0
	setvar 0x8006 0x50
	special 0x13
	fadescreen 0x0
	msgbox gText_Goldenrod_Haircut_guy_T4 MSG_NORMAL
	setvar 0x8000 0x50F6
	special 0xA1
	release
	end

EventScript_Goldenrod_Haircut_guy_Nope:
	msgbox gText_Goldenrod_Haircut_guy_T5 MSG_NORMAL
	hidemoney 0x0 0x0
	release
	end

EventScript_Goldenrod_Haircut_guy_Done:
	msgbox gText_Goldenrod_Haircut_guy_T6 MSG_NORMAL
	release
	end
