.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

.global EventScript_NatureChanger
EventScript_NatureChanger:
    lock
    faceplayer
    msgbox gtext_NatureChanger1 MSG_KEEPOPEN
    pause 0xF
    setvar 0x8000 0x2
    setvar 0x8001 0x4
    setvar 0x8004 0x0
    special 0x158
    waitstate
    compare LASTRESULT 0x0
    if 0x1 _goto EventScript_Atkmint
    compare LASTRESULT 0x1
    if 0x1 _goto EventScript_Defmint
    compare LASTRESULT 0x2
    if 0x1 _goto EventScript_Spemint
    compare LASTRESULT 0x3
    if 0x1 _goto EventScript_Spamint
    compare LASTRESULT 0x4
    if 0x1 _goto EventScript_Spdmint
    compare LASTRESULT 0x5
    if 0x1 _goto EventScript_Neumint
    goto CancelThis 
    end 

EventScript_Atkmint:
    checkitem ITEM_RED_MINT 0x1
    setvar 0x8008 ITEM_RED_MINT
    compare LASTRESULT 0x1
    if 0x0 _goto EventScript_NoMint
    msgbox gText_NatureChangerATK MSG_NORMAL
    setvar 0x8003 0x0
    special 0x9F 
    waitstate 
    copyvar 0x8009 0x8004
    compare 0x8004 0x6
    if greaterorequal _goto CancelThis
    pause 0xF
    msgbox gText_NatureChanger2 MSG_KEEPOPEN
    setvar 0x8000 0x3
    setvar 0x8001 0x4
    setvar 0x8004 0x0
    special 0x158
    waitstate
    copyvar 0x8004 0x8009
    compare LASTRESULT 0x0
    if 0x1 _goto Lonely
    compare LASTRESULT 0x1
    if 0x1 _goto Brave
    compare LASTRESULT 0x2
    if 0x1 _goto Adamant
    compare LASTRESULT 0x3
    if 0x1 _goto Naughty
    goto CancelThis 
    end 

EventScript_Defmint:
    checkitem ITEM_BLUE_MINT 0x1
    setvar 0x8008 ITEM_BLUE_MINT
    compare LASTRESULT 0x1
    if 0x0 _goto EventScript_NoMint
    msgbox gText_NatureChangerDEF MSG_NORMAL
    setvar 0x8003 0x0 
    special 0x9F 
    waitstate 
    copyvar 0x8009 0x8004
    compare 0x8004 0x6
    if greaterorequal _goto CancelThis
    pause 0xF
    msgbox gText_NatureChanger2 MSG_KEEPOPEN
    setvar 0x8000 0x4
    setvar 0x8001 0x4
    setvar 0x8004 0x0
    special 0x158
    waitstate
    copyvar 0x8004 0x8009
    compare LASTRESULT 0x0
    if 0x1 _goto Bold
    compare LASTRESULT 0x1
    if 0x1 _goto Relaxed
    compare LASTRESULT 0x2
    if 0x1 _goto Impish
    compare LASTRESULT 0x3
    if 0x1 _goto Lax
    goto CancelThis 
    end 

EventScript_Spemint:
    checkitem ITEM_GREEN_MINT 0x1
    setvar 0x8008 ITEM_GREEN_MINT
    compare LASTRESULT 0x1
    if 0x0 _goto EventScript_NoMint
    msgbox gText_NatureChangerSPE MSG_NORMAL
    setvar 0x8003 0x0 
    special 0x9F 
    waitstate 
    copyvar 0x8009 0x8004
    compare 0x8004 0x6
    if greaterorequal _goto CancelThis
    pause 0xF
    msgbox gText_NatureChanger2 MSG_KEEPOPEN
    setvar 0x8000 0x5
    setvar 0x8001 0x4
    setvar 0x8004 0x0
    special 0x158
    waitstate
    copyvar 0x8004 0x8009
    compare LASTRESULT 0x0
    if 0x1 _goto Timid
    compare LASTRESULT 0x1
    if 0x1 _goto Hasty
    compare LASTRESULT 0x2
    if 0x1 _goto Jolly
    compare LASTRESULT 0x3
    if 0x1 _goto Naive
    goto CancelThis 
    end 

EventScript_Spamint:
    checkitem ITEM_AZURE_MINT 0x1
    setvar 0x8008 ITEM_AZURE_MINT
    compare LASTRESULT 0x1
    if 0x0 _goto EventScript_NoMint
    msgbox gText_NatureChangerSPA MSG_NORMAL
    setvar 0x8003 0x0 
    special 0x9F 
    waitstate 
    copyvar 0x8009 0x8004
    compare 0x8004 0x6
    if greaterorequal _goto CancelThis
    pause 0xF
    msgbox gText_NatureChanger2 MSG_KEEPOPEN
    setvar 0x8000 0x6
    setvar 0x8001 0x4
    setvar 0x8004 0x0
    special 0x158
    waitstate
    copyvar 0x8004 0x8009
    compare LASTRESULT 0x0
    if 0x1 _goto Modest
    compare LASTRESULT 0x1
    if 0x1 _goto Mild
    compare LASTRESULT 0x2
    if 0x1 _goto Quiet
    compare LASTRESULT 0x3
    if 0x1 _goto Rash
    goto CancelThis 
    end 

EventScript_Spdmint:
    checkitem ITEM_ROSEATE_MINT 0x1
    setvar 0x8008 ITEM_ROSEATE_MINT
    compare LASTRESULT 0x1
    if 0x0 _goto EventScript_NoMint
    msgbox gText_NatureChangerSPD MSG_NORMAL
    setvar 0x8003 0x0 
    special 0x9F 
    waitstate 
    copyvar 0x8009 0x8004
    compare 0x8004 0x6
    if greaterorequal _goto CancelThis
    pause 0xF
    msgbox gText_NatureChanger2 MSG_KEEPOPEN
    setvar 0x8000 0x7
    setvar 0x8001 0x4
    setvar 0x8004 0x0
    special 0x158
    waitstate
    copyvar 0x8004 0x8009
    compare LASTRESULT 0x0
    if 0x1 _goto Calm
    compare LASTRESULT 0x1
    if 0x1 _goto Gentle
    compare LASTRESULT 0x2
    if 0x1 _goto Sassy
    compare LASTRESULT 0x3
    if 0x1 _goto Careful
    goto CancelThis 
    end 

EventScript_Neumint:
    checkitem ITEM_YELLOW_MINT 0x1
    setvar 0x8008 ITEM_YELLOW_MINT
    compare LASTRESULT 0x1
    if 0x0 _goto EventScript_NoMint
    msgbox gText_NatureChangerNEU MSG_NORMAL
    setvar 0x8003 0x0 
    special 0x9F 
    waitstate 
    copyvar 0x8009 0x8004
    compare 0x8004 0x6
    if greaterorequal _goto CancelThis
    pause 0xF
    copyvar 0x8004 0x8009
    msgbox gText_NatureChanger3 MSG_YESNO
    compare LASTRESULT 0x1
    if 0x1 _goto Bashful
    goto CancelThis 
    end 

EventScript_Warning:
	signmsg
    msgbox gText_Warning MSG_YESNO
    normalmsg
    compare LASTRESULT 0x0
    if 0x1 _goto CancelThis
    closeonkeypress
    return

EventScript_NoMint:
    msgbox gText_NoMint MSG_NORMAL
    goto CancelThis

Lonely:
	call EventScript_Warning
    callasm SwitchMonNatureLonely + 1
    goto EndThisScript 

Brave:
	call EventScript_Warning
	callasm SwitchMonNatureBrave + 1
    goto EndThisScript 

Adamant:
	call EventScript_Warning
    callasm SwitchMonNatureAdamant + 1
    goto EndThisScript 

Naughty:
	call EventScript_Warning
	callasm SwitchMonNatureNaughty + 1
    goto EndThisScript 

Bold:
	call EventScript_Warning
	callasm SwitchMonNatureBold + 1
    goto EndThisScript 

Relaxed:
	call EventScript_Warning
	callasm SwitchMonNatureRelaxed + 1
    goto EndThisScript 

Impish:
	call EventScript_Warning
	callasm SwitchMonNatureImpish + 1
    goto EndThisScript 

Lax:
	call EventScript_Warning
	callasm SwitchMonNatureLax + 1
    goto EndThisScript    

Timid:
	call EventScript_Warning
	callasm SwitchMonNatureTimid + 1
    goto EndThisScript 

Hasty:
	call EventScript_Warning
	callasm SwitchMonNatureHasty + 1
    goto EndThisScript 

Jolly:
	call EventScript_Warning
	callasm SwitchMonNatureJolly + 1
    goto EndThisScript 

Naive:
	call EventScript_Warning
	callasm SwitchMonNatureNaive + 1
    goto EndThisScript 

Modest:
	call EventScript_Warning
	callasm SwitchMonNatureModest + 1
    goto EndThisScript 

Mild:
	call EventScript_Warning
	callasm SwitchMonNatureMild + 1
    goto EndThisScript 

Quiet:
	call EventScript_Warning
	callasm SwitchMonNatureQuiet + 1
    goto EndThisScript 

Rash:
	call EventScript_Warning
	callasm SwitchMonNatureRash + 1
    goto EndThisScript 

Calm:
	call EventScript_Warning
	callasm SwitchMonNatureCalm + 1
    goto EndThisScript 

Gentle:
	call EventScript_Warning
	callasm SwitchMonNatureGentle + 1
    goto EndThisScript 

Sassy:
	call EventScript_Warning
	callasm SwitchMonNatureSassy + 1
    goto EndThisScript 

Careful:
	call EventScript_Warning
	callasm SwitchMonNatureCareful + 1
    goto EndThisScript 

Bashful:
	call EventScript_Warning
	callasm SwitchMonNatureBashful + 1
    goto EndThisScript 

CancelThis:
	setvar 0x8000 0x0
    setvar 0x8001 0x0
    setvar 0x8004 0x0
    release 
	end 

EndThisScript: 
	msgbox gText_NatureChanger4 MSG_KEEPOPEN
    pause 0x20
    msgbox gText_NatureChanger4.1 MSG_KEEPOPEN
    pause 0x20
    msgbox gText_NatureChanger4.2 MSG_KEEPOPEN
    pause 0x20
    sound 0x31
    msgbox gText_NatureChanger5 MSG_KEEPOPEN
    checksound
    msgbox gText_NatureChanger6 MSG_NORMAL
    removeitem 0x8008 0x1
    setvar 0x8000 0x0
    setvar 0x8001 0x0
    setvar 0x8004 0x0
	release
	end 
    