.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"
	
	@---------------
EventScript_asdf_0XC40000:
	lockall
	compare 0x406E 0x2
	if 0x1 _goto EventScript_asdf_Snippet1 @Safari Zone
	checkflag 0x829
	if 0x1 _goto EventScript_asdf_Snippet2 @Pokedex
	compare 0x40FA 0x1
	if 0x1 _goto EventScript_asdf_Snippet3 @Pokegear
	checkflag 0x828
	if 0x1 _goto EventScript_asdf_Snippet4 @Pokemon
	setvar 0x8004 0x0
	callasm 0x8F1A191
	goto EventScript_asdf_Snippet5 @New Game

	@---------------
EventScript_asdf_Snippet1:
	setvar 0x8004 0x12
	callasm 0x8F1A191
	callasm 0x806EE7D
	goto EventScript_asdf_Snippet6

	@---------------
EventScript_asdf_Snippet2:
	setvar 0x8004 0xC
	callasm 0x8F1A191
	goto EventScript_asdf_Snippet7

	@---------------
EventScript_asdf_Snippet3:
	setvar 0x8004 0x5
	callasm 0x8F1A191
	goto EventScript_asdf_Snippet8

	@---------------
EventScript_asdf_Snippet4:
	setvar 0x8004 0x14
	callasm 0x8F1A191
	goto EventScript_asdf_Snippet9

	@---------------
EventScript_asdf_Snippet5:
	setvar 0x8004 0x0
	callasm 0x8F1A191
	goto EventScript_asdf_Snippet10

	@---------------
EventScript_asdf_Snippet6:
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x13
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet11
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet11
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet11
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet11
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet11
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet12
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet13
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet15

	@---------------
EventScript_asdf_Snippet7:
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0xD
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet16
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet16
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet16
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet16
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet16
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet17
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet18
	compare 0x8000 0x80
	if 0x1 _goto EventScript_asdf_Snippet19
	compare 0x8000 0x40
	if 0x1 _goto EventScript_asdf_Snippet19
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet20

	@---------------
EventScript_asdf_Snippet8:
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x6
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet21
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet21
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet21
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet21
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet21
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet22
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet23
	compare 0x8000 0x80
	if 0x1 _goto EventScript_asdf_Snippet24
	compare 0x8000 0x40
	if 0x1 _goto EventScript_asdf_Snippet24
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet25

	@---------------
EventScript_asdf_Snippet9:
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x15
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet26
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet26
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet26
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet26
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet26
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet27
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet28
	compare 0x8000 0x80
	if 0x1 _goto EventScript_asdf_Snippet29
	compare 0x8000 0x40
	if 0x1 _goto EventScript_asdf_Snippet29
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet30

	@---------------
EventScript_asdf_Snippet10:
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x1
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet31
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet31
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet31
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet31
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet31
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet32
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet33
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet34

	@---------------
EventScript_asdf_Snippet11:
	sound 0x37
	callasm 0x8F1A215
	callasm 0x806F555
	waitstate
	goto EventScript_asdf_Snippet15

	@---------------
EventScript_asdf_Snippet12:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x14
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet35
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet35
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet35
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet35
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet35
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet36
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet15
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet12

	@---------------
EventScript_asdf_Snippet13:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x18
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet37
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet37
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet37
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet37
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet37
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet15
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet38
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet13

	@---------------
EventScript_asdf_Snippet14:
	sound 0x3A
	callasm 0x8F1A215
	release
	return

	@---------------
EventScript_asdf_Snippet15:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x13
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet11
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet11
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet11
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet11
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet11
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet12
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet13
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet15

	@---------------
EventScript_asdf_Snippet16:
	sound 0x37
	callasm 0x8F1A215
	callasm 0x806F411
	waitstate
	goto EventScript_asdf_Snippet20

	@---------------
EventScript_asdf_Snippet17:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0xE
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet39
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet39
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet39
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet39
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet39
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet40
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet20
	compare 0x8000 0x80
	if 0x1 _goto EventScript_asdf_Snippet41
	compare 0x8000 0x40
	if 0x1 _goto EventScript_asdf_Snippet41
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet17

	@---------------
EventScript_asdf_Snippet18:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x13
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet42
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet42
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet42
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet42
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet42
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet20
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet41
	compare 0x8000 0x80
	if 0x1 _goto EventScript_asdf_Snippet40
	compare 0x8000 0x40
	if 0x1 _goto EventScript_asdf_Snippet40
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet18

	@---------------
EventScript_asdf_Snippet19:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x11
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet43
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet43
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet43
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet43
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet43
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet41
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet44
	compare 0x8000 0x80
	if 0x1 _goto EventScript_asdf_Snippet20
	compare 0x8000 0x40
	if 0x1 _goto EventScript_asdf_Snippet20
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet19

	@---------------
EventScript_asdf_Snippet20:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0xD
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet16
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet16
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet16
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet16
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet16
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet17
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet18
	compare 0x8000 0x80
	if 0x1 _goto EventScript_asdf_Snippet19
	compare 0x8000 0x40
	if 0x1 _goto EventScript_asdf_Snippet19
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet20

	@---------------
EventScript_asdf_Snippet21:
	sound 0x37
	callasm 0x8F1A215
	callasm 0x806F44D
	waitstate
	goto EventScript_asdf_Snippet25

	@---------------
EventScript_asdf_Snippet22:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x7
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet45
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet45
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet45
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet45
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet45
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet46
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet25
	compare 0x8000 0x80
	if 0x1 _goto EventScript_asdf_Snippet47
	compare 0x8000 0x40
	if 0x1 _goto EventScript_asdf_Snippet47
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet22

	@---------------
EventScript_asdf_Snippet23:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0xB
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet48
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet48
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet48
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet48
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet48
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet25
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet47
	compare 0x8000 0x80
	if 0x1 _goto EventScript_asdf_Snippet46
	compare 0x8000 0x40
	if 0x1 _goto EventScript_asdf_Snippet46
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet23

	@---------------
EventScript_asdf_Snippet24:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x9
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet49
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet49
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet49
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet49
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet49
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet47
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet46
	compare 0x8000 0x80
	if 0x1 _goto EventScript_asdf_Snippet25
	compare 0x8000 0x40
	if 0x1 _goto EventScript_asdf_Snippet25
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet24

	@---------------
EventScript_asdf_Snippet25:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x6
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet21
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet21
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet21
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet21
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet21
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet22
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet23
	compare 0x8000 0x80
	if 0x1 _goto EventScript_asdf_Snippet24
	compare 0x8000 0x40
	if 0x1 _goto EventScript_asdf_Snippet24
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet25

	@---------------
EventScript_asdf_Snippet26:
	sound 0x37
	callasm 0x8F1A215
	callasm 0x806F44D
	waitstate
	goto EventScript_asdf_Snippet30

	@---------------
EventScript_asdf_Snippet27:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x16
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet50
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet50
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet50
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet50
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet50
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet51
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet30
	compare 0x8000 0x80
	if 0x1 _goto EventScript_asdf_Snippet29
	compare 0x8000 0x40
	if 0x1 _goto EventScript_asdf_Snippet29
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet27

	@---------------
EventScript_asdf_Snippet28:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x19
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet52
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet52
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet52
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet52
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet52
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet30
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet29
	compare 0x8000 0x80
	if 0x1 _goto EventScript_asdf_Snippet51
	compare 0x8000 0x40
	if 0x1 _goto EventScript_asdf_Snippet51
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet28

	@---------------
EventScript_asdf_Snippet29:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x18
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet53
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet53
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet53
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet53
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet53
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet28
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet51
	compare 0x8000 0x80
	if 0x1 _goto EventScript_asdf_Snippet27
	compare 0x8000 0x40
	if 0x1 _goto EventScript_asdf_Snippet27
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet29

	@---------------
EventScript_asdf_Snippet30:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x15
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet26
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet26
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet26
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet26
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet26
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet27
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet28
	compare 0x8000 0x80
	if 0x1 _goto EventScript_asdf_Snippet29
	compare 0x8000 0x40
	if 0x1 _goto EventScript_asdf_Snippet29
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet30

	@---------------
EventScript_asdf_Snippet31:
	sound 0x37
	callasm 0x8F1A215
	fadescreen 0x1
	callasm 0x806F481
	waitstate
	goto EventScript_asdf_Snippet34

	@---------------
EventScript_asdf_Snippet32:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x2
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet54
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet54
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet54
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet54
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet54
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet55
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet34
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet32

	@---------------
EventScript_asdf_Snippet33:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x4
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet56
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet56
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet56
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet56
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet56
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet34
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet55
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet33

	@---------------
EventScript_asdf_Snippet34:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x1
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet31
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet31
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet31
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet31
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet31
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet32
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet33
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet34

	@---------------
EventScript_asdf_Snippet35:
	sound 0x37
	callasm 0x8F1A215
	callasm 0x806F411
	waitstate
	goto EventScript_asdf_Snippet12

	@---------------
EventScript_asdf_Snippet36:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x15
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet57
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet57
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet57
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet57
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet57
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet58
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet12
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet36

	@---------------
EventScript_asdf_Snippet37:
	sound 0x37
	fadescreen 0x1
	callasm 0x8F1A215
	callasm 0x806F4FD
	waitstate
	goto EventScript_asdf_Snippet13

	@---------------
EventScript_asdf_Snippet38:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x17
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet59
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet59
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet59
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet59
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet59
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet13
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet58
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet38

	@---------------
EventScript_asdf_Snippet39:
	sound 0x37
	callasm 0x8F1A215
	callasm 0x806F44D
	waitstate
	goto EventScript_asdf_Snippet17

	@---------------
EventScript_asdf_Snippet40:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0xF
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet60
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet60
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet60
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet60
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet60
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet44
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet17
	compare 0x8000 0x80
	if 0x1 _goto EventScript_asdf_Snippet18
	compare 0x8000 0x40
	if 0x1 _goto EventScript_asdf_Snippet18
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet40

	@---------------
EventScript_asdf_Snippet41:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x12
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet61
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet61
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet61
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet61
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet61
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet18
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet19
	compare 0x8000 0x80
	if 0x1 _goto EventScript_asdf_Snippet17
	compare 0x8000 0x40
	if 0x1 _goto EventScript_asdf_Snippet17
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet41

	@---------------
EventScript_asdf_Snippet42:
	sound 0x37
	callasm 0x8F1A215
	callasm 0x806F4FD
	waitstate
	goto EventScript_asdf_Snippet18

	@---------------
EventScript_asdf_Snippet43:
	sound 0x37
	callasm 0x8F1A215
	callasm 0x806F4B5
	waitstate
	goto EventScript_asdf_Snippet19

	@---------------
EventScript_asdf_Snippet44:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x10
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet62
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet62
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet62
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet62
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet62
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet19
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet40
	compare 0x8000 0x80
	if 0x1 _goto EventScript_asdf_Snippet18
	compare 0x8000 0x40
	if 0x1 _goto EventScript_asdf_Snippet18
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet44

	@---------------
EventScript_asdf_Snippet45:
	sound 0x37
	callasm 0x8F1A215
	fadescreen 0x1
	callasm 0x806F481
	waitstate
	goto EventScript_asdf_Snippet22

	@---------------
EventScript_asdf_Snippet46:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x8
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet63
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet63
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet63
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet63
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet63
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet24
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet22
	compare 0x8000 0x80
	if 0x1 _goto EventScript_asdf_Snippet23
	compare 0x8000 0x40
	if 0x1 _goto EventScript_asdf_Snippet23
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet46

	@---------------
EventScript_asdf_Snippet47:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0xA
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet64
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet64
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet64
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet64
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet64
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet23
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet24
	compare 0x8000 0x80
	if 0x1 _goto EventScript_asdf_Snippet22
	compare 0x8000 0x40
	if 0x1 _goto EventScript_asdf_Snippet22
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet47

	@---------------
EventScript_asdf_Snippet48:
	sound 0x37
	callasm 0x8F1A215
	callasm 0x806F4FD
	waitstate
	goto EventScript_asdf_Snippet23

	@---------------
EventScript_asdf_Snippet49:
	sound 0x37
	callasm 0x8F1A215
	callasm 0x806F4B5
	waitstate
	goto EventScript_asdf_Snippet24

	@---------------
EventScript_asdf_Snippet50:
	sound 0x37
	callasm 0x8F1A215
	fadescreen 0x1
	callasm 0x806F481
	waitstate
	goto EventScript_asdf_Snippet27

	@---------------
EventScript_asdf_Snippet51:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x17
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet65
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet65
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet65
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet65
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet65
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet29
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet27
	compare 0x8000 0x80
	if 0x1 _goto EventScript_asdf_Snippet28
	compare 0x8000 0x40
	if 0x1 _goto EventScript_asdf_Snippet28
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet51

	@---------------
EventScript_asdf_Snippet52:
	sound 0x37
	callasm 0x8F1A215
	callasm 0x806F4FD
	waitstate
	goto EventScript_asdf_Snippet28

	@---------------
EventScript_asdf_Snippet53:
	sound 0x37
	callasm 0x8F1A215
	lockall
	special 0x23
	waitstate
	releaseall
	goto EventScript_asdf_Snippet29

	@---------------
EventScript_asdf_Snippet54:
	sound 0x37
	callasm 0x8F1A215
	callasm 0x806F4B5
	waitstate
	goto EventScript_asdf_Snippet32

	@---------------
EventScript_asdf_Snippet55:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x3
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet66
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet66
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet66
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet66
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet66
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet33
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet32
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet55

	@---------------
EventScript_asdf_Snippet56:
	sound 0x37
	callasm 0x8F1A215
	callasm 0x806F4FD
	waitstate
	goto EventScript_asdf_Snippet33

	@---------------
EventScript_asdf_Snippet57:
	sound 0x37
	callasm 0x8F1A215
	callasm 0x806F44D
	waitstate
	goto EventScript_asdf_Snippet36

	@---------------
EventScript_asdf_Snippet58:
	sound 0x37
	callasm 0x8F1D001
	pause 0x1
	setvar 0x8004 0x16
	callasm 0x8F1A191
	waitkeypress
	compare 0x8000 0x81
	if 0x1 _goto EventScript_asdf_Snippet67
	compare 0x8000 0x41
	if 0x1 _goto EventScript_asdf_Snippet67
	compare 0x8000 0x21
	if 0x1 _goto EventScript_asdf_Snippet67
	compare 0x8000 0x11
	if 0x1 _goto EventScript_asdf_Snippet67
	compare 0x8000 0x1
	if 0x1 _goto EventScript_asdf_Snippet67
	compare 0x8000 0x10
	if 0x1 _goto EventScript_asdf_Snippet38
	compare 0x8000 0x20
	if 0x1 _goto EventScript_asdf_Snippet36
	compare 0x8000 0x2
	if 0x1 _goto EventScript_asdf_Snippet14
	compare 0x8000 0x8
	if 0x1 _goto EventScript_asdf_Snippet14
	goto EventScript_asdf_Snippet58

	@---------------
EventScript_asdf_Snippet59:
	sound 0x37
	fadescreen 0x1
	callasm 0x8F1A215
	callasm 0x806F4B5
	waitstate
	goto EventScript_asdf_Snippet38

	@---------------
EventScript_asdf_Snippet60:
	sound 0x37
	callasm 0x8F1A215
	fadescreen 0x1
	callasm 0x806F481
	waitstate
	goto EventScript_asdf_Snippet40

	@---------------
EventScript_asdf_Snippet61:
	sound 0x37
	callasm 0x8F1A215
	lockall
	special 0x23
	waitstate
	releaseall
	goto EventScript_asdf_Snippet41

	@---------------
EventScript_asdf_Snippet62:
	sound 0x37
	callasm 0x8F1A215
	fadescreen 0x1
	callasm 0x8F1A4A1
	waitstate
	goto EventScript_asdf_Snippet44

	@---------------
EventScript_asdf_Snippet63:
	sound 0x37
	callasm 0x8F1A215
	fadescreen 0x1
	callasm 0x8F1A4A1
	waitstate
	goto EventScript_asdf_Snippet46

	@---------------
EventScript_asdf_Snippet64:
	sound 0x37
	callasm 0x8F1A215
	lockall
	special 0x23
	waitstate
	releaseall
	goto EventScript_asdf_Snippet47

	@---------------
EventScript_asdf_Snippet65:
	sound 0x37
	callasm 0x8F1A215
	callasm 0x806F4B5
	waitstate
	goto EventScript_asdf_Snippet51

	@---------------
EventScript_asdf_Snippet66:
	sound 0x37
	callasm 0x8F1A215
	lockall
	special 0x23
	waitstate
	releaseall
	goto EventScript_asdf_Snippet55

	@---------------
EventScript_asdf_Snippet67:
	sound 0x37
	fadescreen 0x1
	callasm 0x8F1A215
	callasm 0x806F481
	waitstate
	goto EventScript_asdf_Snippet58
