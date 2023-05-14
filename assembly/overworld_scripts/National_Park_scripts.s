.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

.equ ROUTINE_ONE, 0x8A84808
.equ ROUTINE_TWO, 0x8A84860

.global EventScript_bugcatching_guard
EventScript_bugcatching_guard:
	lock
	checkflag 0x1850
	if 0x1 _goto EventScript_bugscript_done
	special2 LASTRESULT 0xDA
	compare LASTRESULT 0x2
	if 0x1 _call EventScript_bugscript_Tuesday
	compare LASTRESULT 0x4
	if 0x1 _call EventScript_bugscript_Thursday
	compare LASTRESULT 0x6
	if 0x1 _call EventScript_bugscript_Saturday
	msgbox gText_bugscript_T1 MSG_YESNO
	compare LASTRESULT 0x1
	if 0x0 _goto EventScript_bugscript_Nope
	clearflag 0x1850
	countpokemon
	callasm ROUTINE_ONE + 1
	compare LASTRESULT 0x1
	if 0x5 _goto EventScript_bugscript_Snippet1
	msgbox gText_bugscript_String1 MSG_NORMAL
	call EventScript_bugscript_Snippet2
	callasm ROUTINE_TWO + 1
	bufferpartypokemon 0x0 0x0
	bufferboxname 0x1 0x4035
	checkflag 0x834
	if 0x0 _goto EventScript_bugscript_Snippet3
	msgbox gText_bugscript_String2 MSG_NORMAL
	goto EventScript_bugscript_Snippet4

	@---------------
EventScript_bugscript_Snippet1:
	msgbox gText_bugscript_String3 MSG_NORMAL
	release
	end

	@---------------
EventScript_bugscript_Snippet2:
	special 0x9F
	waitstate
	special2 LASTRESULT 0x147
	compare LASTRESULT 0x19C
	if 0x1 _goto EventScript_bugscript_Egg
	compare 0x8004 0x5
	if 0x2 _goto EventScript_bugscript_Nope
	return

	@---------------
EventScript_bugscript_Snippet3:
	msgbox gText_bugscript_String4 MSG_NORMAL
	goto EventScript_bugscript_Snippet4

	@---------------
EventScript_bugscript_Snippet4:
	playsong 0x175 0x0
	msgbox gText_bugscript_T3 MSG_NORMAL
	pause 0x5
	warpmuted 0x1 0xC 0x0 0x12 0x22
	end

EventScript_bugscript_done:
	msgbox gText_bugscript_String7 MSG_NORMAL
	end

EventScript_bugscript_Egg:
	msgbox gText_bugscript_T4 MSG_NORMAL
	release
	end

EventScript_bugscript_Tuesday:
	bufferstring 0x0 gText_bugscript_Tue
	return

EventScript_bugscript_Thursday:
	bufferstring 0x0 gText_bugscript_Thu
	return

EventScript_bugscript_Saturday:
	bufferstring 0x0 gText_bugscript_Sat
	return

EventScript_bugscript_Nope:
	msgbox gText_bugscript_T2 MSG_NORMAL
	release
	end
