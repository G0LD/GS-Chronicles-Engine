.text
.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

.global Eventscript_Mom
Eventscript_Mom:
	lock
	faceplayer
	checkflag 0x828
	if false _goto Eventscript_MomElmWaiting
	compare 0x40FA 0x0
	if equal _goto Eventscript_MomIntroduction
    checkflag 0x288
    if 0x1 _goto EventScript_mom_savings
	msgbox gText_MomJourney MSG_NORMAL
	release
	end

Eventscript_MomElmWaiting:
	msgbox gText_MomElmWaiting MSG_NORMAL
	release
	end

Eventscript_MomIntroduction:
	msgbox gText_MomIntroduction MSG_KEEPOPEN
	checkgender
	compare LASTRESULT 0x1
	if equal _goto Eventscript_MomFemale
	compare LASTRESULT 0x0
	if equal _goto Eventscript_MomMale
	end

Eventscript_MomKanto:
	msgbox gText_MomKanto MSG_NORMAL
	end

Eventscript_MomFemale:
	giveitem 0xF2 0x0 0xD
	msgbox gText_MomPokegear MSG_KEEPOPEN
	setvar 0x40FA 0x1
	setflag 0x288
    pause 0xF
    msgbox gText_Momasksaving MSG_YESNO
    compare LASTRESULT 0x1
    if equal _goto Eventscript_MomOktosave
    msgbox gText_ChangeFarewell MSG_NORMAL
	end

Eventscript_MomMale:
	setvar LASTRESULT 0x1
	giveitem 0xF4 0x0 0xD
	msgbox gText_MomPokegear MSG_KEEPOPEN
	setvar 0x40FA 0x1
	setflag 0x288
    pause 0xF
    msgbox gText_Momasksaving MSG_YESNO
    compare LASTRESULT 0x1
    if equal _goto Eventscript_MomOktosave
    msgbox gText_ChangeFarewell MSG_NORMAL
	end

Eventscript_MomOktosave:
    setflag 0x1446
    msgbox gText_Momoktosaving MSG_NORMAL
    releaseall
    end
