.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

	@---------------
EventScript_Randomevent01:
	trainerbattle2 0x2 0x167 0x0 gText_Randomevent01_Text1 gText_Randomevent01_Text2 EventScript_Randomevent01_Ending
	end

EventScript_Randomevent01_Ending:
	msgbox gText_Randomevent01_Text3 MSG_NORMAL
	fadescreen 0x1
	pause 0x40
	setflag 0x300
	checkflag 0x103B
	if 0x1 _call EventScript_Randomevent01_Cando
	hidesprite LASTTALKED
	pause 0x10
	fadescreen 0x0
	pause 0x10
	msgbox gText_Randomevent01_Text4 MSG_TRANSPARENT
	release
	end

EventScript_Randomevent01_Cando:
	clearflag 0x4F
	return

	@---------------
EventScript_RandomEvent02:
	faceplayer
	setvar 0x8001 0x0
	special2 LASTRESULT 0xAD
	compare LASTRESULT 0x3
	if 0x1 _goto EventScript_RandomEvent02_Snippet1
	msgbox gText_RandomEvent02_String1 MSG_FACE @"A report sent to us states that\nT..."
	end

	@---------------
EventScript_RandomEvent02_Snippet1:
	msgbox gText_RandomEvent02_String2 MSG_KEEPOPEN @"A report sent to us states that\nT..."
	pause 0xF
	closeonkeypress
	sound 0x15
	applymovement LASTTALKED 0x8C2EE68
	waitmovement 0x0
	checksound
	pause 0xF
	msgbox gText_RandomEvent02_String3 MSG_NORMAL
	spriteface LASTTALKED 0x2
	pause 0xF
	msgbox gText_RandomEvent02_String4 MSG_NORMAL
	pause 0x40
	msgbox gText_RandomEvent02_String5 MSG_NORMAL
	pause 0x5
	faceplayer
	msgbox gText_RandomEvent02_String6 MSG_TRANSPARENT
	pause 0x40
	cry 0x3FB 0x2
	waitcry
	pause 0x20
	msgbox gText_RandomEvent02_String7 MSG_NORMAL
	cry 0x3FB 0x2
	waitcry
	pause 0x20
	setflag 0x1443
	wildbattle 0x3FB 0x32 0x0
	clearflag 0x1443
	msgbox gText_RandomEvent02_String8 MSG_NORMAL
	fadescreen 0x1
	pause 0x20
	hidesprite LASTTALKED
	setflag 0x4F
	setflag 0x301
	pause 0x20
	fadescreen 0x0
	release
	end

@---------------
EventScript_Randomevent03:
	lock
	faceplayer
	checkflag 0x1500
	if equal _goto EventScript_Randomevent03_Snippet1
	msgbox gText_RandomEvent03_String1 MSG_NORMAL
	release
	end

EventScript_Randomevent03_Snippet1:
	checkflag 0x305
	if equal _goto  EventScript_Randomevent03_Snippet2
	compare 0x4029 0x2
	if greaterorequal _goto EventScript_Randomevent03_Snippet3
	msgbox gText_RandomEvent03_String2 MSG_NORMAL
	release
	end
	

EventScript_Randomevent03_Snippet2:
	msgbox gText_RandomEvent03_String3 MSG_NORMAL
	release
	end

EventScript_Randomevent03_Snippet3:
	msgbox gText_RandomEvent03_String4 MSG_KEEPOPEN
	pause 0x10
	giveitem ITEM_SHINY_CHARM 0x1 MSG_OBTAIN
	msgbox gText_RandomEvent03_String5 MSG_NORMAL
	setflag 0x305
	release
	end
