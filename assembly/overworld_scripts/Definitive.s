.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"
EventScript_Definitive:
	lock
	faceplayer
	bufferfirstpokemon 0x0
	msgbox 0x81A46C6 MSG_KEEPOPEN @"I perfected the ultimate move of\n..."
	setvar 0x8003 0x0
	setvar 0x8004 0x0
	special2 LASTRESULT 0x18
	compare LASTRESULT SPECIES_VENUSAUR
	if 0x1 _goto EventScript_Definitive_Frenzyplant
	compare LASTRESULT SPECIES_MEGANIUM
	if 0x1 _goto EventScript_Definitive_Frenzyplant
	compare LASTRESULT SPECIES_SCEPTILE
	if 0x1 _goto EventScript_Definitive_Frenzyplant
	compare LASTRESULT SPECIES_TORTERRA
	if 0x1 _goto EventScript_Definitive_Frenzyplant
	compare LASTRESULT SPECIES_SERPERIOR
	if 0x1 _goto EventScript_Definitive_Frenzyplant
	compare LASTRESULT SPECIES_CHESNAUGHT
	if 0x1 _goto EventScript_Definitive_Frenzyplant
	compare LASTRESULT SPECIES_DECIDUEYE
	if 0x1 _goto EventScript_Definitive_Frenzyplant
	compare LASTRESULT SPECIES_DECIDUEYE_H
	if 0x1 _goto EventScript_Definitive_Frenzyplant
	compare LASTRESULT SPECIES_RILLABOOM
	if 0x1 _goto EventScript_Definitive_Frenzyplant
	compare LASTRESULT SPECIES_CHARIZARD
	if 0x1 _goto EventScript_Definitive_Blastburn
	compare LASTRESULT SPECIES_TYPHLOSION
	if 0x1 _goto EventScript_Definitive_Blastburn
	compare LASTRESULT SPECIES_BLAZIKEN
	if 0x1 _goto EventScript_Definitive_Blastburn
	compare LASTRESULT SPECIES_INFERNAPE
	if 0x1 _goto EventScript_Definitive_Blastburn
	compare LASTRESULT SPECIES_EMBOAR
	if 0x1 _goto EventScript_Definitive_Blastburn
	compare LASTRESULT SPECIES_DELPHOX
	if 0x1 _goto EventScript_Definitive_Blastburn
	compare LASTRESULT SPECIES_INCINEROAR
	if 0x1 _goto EventScript_Definitive_Blastburn
	compare LASTRESULT SPECIES_TYPHLOSION_H
	if 0x1 _goto EventScript_Definitive_Blastburn
	compare LASTRESULT SPECIES_CINDERACE
	if 0x1 _goto EventScript_Definitive_Blastburn
	compare LASTRESULT SPECIES_BLASTOISE
	if 0x1 _goto EventScript_Definitive_Hydrocannon
	compare LASTRESULT SPECIES_FERALIGATR
	if 0x1 _goto EventScript_Definitive_Hydrocannon
	compare LASTRESULT SPECIES_MARSHTOMP
	if 0x1 _goto EventScript_Definitive_Hydrocannon
	compare LASTRESULT SPECIES_EMPOLEON
	if 0x1 _goto EventScript_Definitive_Hydrocannon
	compare LASTRESULT SPECIES_SAMUROTT
	if 0x1 _goto EventScript_Definitive_Hydrocannon
	compare LASTRESULT SPECIES_GRENINJA
	if 0x1 _goto EventScript_Definitive_Hydrocannon
	compare LASTRESULT SPECIES_PRIMARINA
	if 0x1 _goto EventScript_Definitive_Hydrocannon
	compare LASTRESULT SPECIES_SAMUROTT_H
	if 0x1 _goto EventScript_Definitive_Hydrocannon
	compare LASTRESULT SPECIES_INTELEON
	if 0x1 _goto EventScript_Definitive_Hydrocannon
	goto 0x81C4F26

EventScript_Definitive_Frenzyplant:
	compare PLAYERFACING 0x2
	if 0x1 _call 0x81C4EF0
	compare PLAYERFACING 0x1
	if 0x1 _call 0x81C4EFB
	compare PLAYERFACING 0x4
	if 0x1 _call 0x81C4F06
	compare PLAYERFACING 0x3
	if 0x1 _call 0x81C4F11
	bufferattack 0x1 MOVE_FRENZYPLANT
	msgbox 0x81A4751 MSG_YESNO @"Oh! This is the one!\nThis is the ..."
	compare LASTRESULT 0x0
	if 0x1 _goto 0x81C4F1C
	call 0x81C4F37
	compare LASTRESULT 0x0
	if 0x1 _goto 0x81C4F1C
	msgbox 0x81A4814 MSG_KEEPOPEN @"You will allow it?\pThen, let me c..."
	closeonkeypress
	fadescreen 0x1
	setvar 0x8005 0x3D
	call EventScript_Definitive_Learnit
	goto EventScript_Definitive_End

EventScript_Definitive_Blastburn:
	compare PLAYERFACING 0x2
	if 0x1 _call 0x81C4EF0
	compare PLAYERFACING 0x1
	if 0x1 _call 0x81C4EFB
	compare PLAYERFACING 0x4
	if 0x1 _call 0x81C4F06
	compare PLAYERFACING 0x3
	if 0x1 _call 0x81C4F11
	bufferattack 0x1 MOVE_BLASTBURN
	msgbox 0x81A4751 MSG_YESNO @"Oh! This is the one!\nThis is the ..."
	compare LASTRESULT 0x0
	if 0x1 _goto 0x81C4F1C
	call 0x81C4F37
	compare LASTRESULT 0x0
	if 0x1 _goto 0x81C4F1C
	msgbox 0x81A4814 MSG_KEEPOPEN @"You will allow it?\pThen, let me c..."
	closeonkeypress
	fadescreen 0x1
	setvar 0x8005 0x3E
	call EventScript_Definitive_Learnit
	goto EventScript_Definitive_End

EventScript_Definitive_Hydrocannon:
	compare PLAYERFACING 0x2
	if 0x1 _call 0x81C4EF0
	compare PLAYERFACING 0x1
	if 0x1 _call 0x81C4EFB
	compare PLAYERFACING 0x4
	if 0x1 _call 0x81C4F06
	compare PLAYERFACING 0x3
	if 0x1 _call 0x81C4F11
	bufferattack 0x1 MOVE_HYDROCANNON
	msgbox 0x81A4751 MSG_YESNO @"Oh! This is the one!\nThis is the ..."
	compare LASTRESULT 0x0
	if 0x1 _goto 0x81C4F1C
	call 0x81C4F37
	compare LASTRESULT 0x0
	if 0x1 _goto 0x81C4F1C
	msgbox 0x81A4814 MSG_KEEPOPEN @"You will allow it?\pThen, let me c..."
	closeonkeypress
	fadescreen 0x1
	setvar 0x8005 0x3F
	call EventScript_Definitive_Learnit
	goto EventScript_Definitive_End

EventScript_Definitive_Learnit:
	special 0x18D
	waitstate
	lock
	faceplayer
	return

EventScript_Definitive_End:
	msgbox 0x81A48F3 MSG_KEEPOPEN @"Gasp, gasp, gasp[.]\pI have no reg..."
	release
	end
