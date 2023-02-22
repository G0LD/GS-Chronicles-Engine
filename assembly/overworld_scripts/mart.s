.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"


	@---------------
	.global EventScript_mart_Start
EventScript_mart_Start:
	lock
	faceplayer
	preparemsg 0x8C0BCB5 @"Hi, there!\nMay I help you?"
	waitmsg
	pokemart EventScript_mart_Mart
	goto EventScript_mart_Snippet10

	@---------------
EventScript_mart_Snippet10:
	msgbox 0x8C0BCD2 MSG_KEEPOPEN @"Please come again!"
	release
	end

	@-----------
	@ MartItems
	@-----------
EventScript_mart_Mart:
.byte 0x2B
.byte 0x01
.byte 0x32
.byte 0x01
.byte 0x34
.byte 0x01
.byte 0x2F
.byte 0x01
.byte 0x51
.byte 0x01
.byte 0x87
.byte 0x01
.byte 0x98
.byte 0x01
.byte 0xA3
.byte 0x01
.byte 0xAA
.byte 0x01
.byte 0xB5
.byte 0x01
.byte 0x0

