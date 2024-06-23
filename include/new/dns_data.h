#pragma once

#include "../global.h"

/**
 * \file dns_data.h
 * \brief A file to be included only by "src/dns.c". It contains constants and
 *		  data structures relating to the palette fading of the day/night system.
 */

//Change These
//Overworld Palettes
#define OW_BG_PAL_0 TRUE
#define OW_BG_PAL_1 TRUE
#define OW_BG_PAL_2 TRUE
#define OW_BG_PAL_3 TRUE
#define OW_BG_PAL_4 TRUE
#define OW_BG_PAL_5 TRUE
#define OW_BG_PAL_6 TRUE
#define OW_BG_PAL_7 TRUE
#define OW_BG_PAL_8 TRUE
#define OW_BG_PAL_9 TRUE
#define OW_BG_PAL_10 TRUE
#define OW_BG_PAL_11 TRUE
#define OW_BG_PAL_12 TRUE
#define OW_BG_PAL_13 FALSE
#define OW_BG_PAL_14 FALSE
#define OW_BG_PAL_15 FALSE

#define OW_SPRITE_PAL_0 TRUE
#define OW_SPRITE_PAL_1 TRUE
#define OW_SPRITE_PAL_2 TRUE
#define OW_SPRITE_PAL_3 TRUE
#define OW_SPRITE_PAL_4 TRUE
#define OW_SPRITE_PAL_5 TRUE
#define OW_SPRITE_PAL_6 TRUE
#define OW_SPRITE_PAL_7 TRUE
#define OW_SPRITE_PAL_8 TRUE
#define OW_SPRITE_PAL_9 TRUE
#define OW_SPRITE_PAL_10 TRUE
#define OW_SPRITE_PAL_11 TRUE
#define OW_SPRITE_PAL_12 TRUE
#define OW_SPRITE_PAL_13 TRUE
#define OW_SPRITE_PAL_14 TRUE
#define OW_SPRITE_PAL_15 TRUE

//Battle Palettes
#define BBG_PAL_0 FALSE
#define BBG_PAL_1 FALSE
#define BBG_PAL_2 TRUE
#define BBG_PAL_3 TRUE
#define BBG_PAL_4 TRUE
#define BBG_PAL_5 FALSE
#define BBG_PAL_6 FALSE
#define BBG_PAL_7 FALSE
#define BBG_PAL_8 FALSE
#define BBG_PAL_9 FALSE
#define BBG_PAL_10 FALSE
#define BBG_PAL_11 FALSE
#define BBG_PAL_12 FALSE
#define BBG_PAL_13 FALSE
#define BBG_PAL_14 FALSE
#define BBG_PAL_15 FALSE

#define B_SPRITE_PAL_0 FALSE
#define B_SPRITE_PAL_1 FALSE
#define B_SPRITE_PAL_2 FALSE
#define B_SPRITE_PAL_3 FALSE
#define B_SPRITE_PAL_4 FALSE
#define B_SPRITE_PAL_5 FALSE
#define B_SPRITE_PAL_6 FALSE
#define B_SPRITE_PAL_7 FALSE
#define B_SPRITE_PAL_8 FALSE
#define B_SPRITE_PAL_9 FALSE
#define B_SPRITE_PAL_10 FALSE
#define B_SPRITE_PAL_11 FALSE
#define B_SPRITE_PAL_12 FALSE
#define B_SPRITE_PAL_13 FALSE
#define B_SPRITE_PAL_14 FALSE
#define B_SPRITE_PAL_15 FALSE
//The above values are set to only change the battle background.

//DON"T TOUCH THESE
#define OBG_SHI(num) (OW_BG_PAL_##num << num)
#define OSP_SHI(num) (OW_SPRITE_PAL_##num << (num + 16))
#define BBG_SHI(num) (BBG_PAL_##num << num)
#define BSP_SHI(num) (B_SPRITE_PAL_##num << (num + 16))

#define OW_DNS_PAL_FADE (OW_DNS_BG_PAL_FADE | OW_DNS_SPRITE_PAL_FADE)

#define OW_DNS_BG_PAL_FADE (OBG_SHI(0) | OBG_SHI(1) | OBG_SHI(2) | OBG_SHI(3) | OBG_SHI(4) | OBG_SHI(5) 	\
						 | OBG_SHI(6) | OBG_SHI(7) | OBG_SHI(8) | OBG_SHI(9) | OBG_SHI(10) | OBG_SHI(11) 	\
						 | OBG_SHI(12))

#define OW_DNS_SPRITE_PAL_FADE (OSP_SHI(0) | OSP_SHI(1) | OSP_SHI(2) | OSP_SHI(3) | OSP_SHI(4) | OSP_SHI(5) \
						 | OSP_SHI(6) | OSP_SHI(7) | OSP_SHI(8) | OSP_SHI(9) | OSP_SHI(10) | OSP_SHI(11) 	\
						 | OSP_SHI(12) | OSP_SHI(13) | OSP_SHI(14) | OSP_SHI(15))

#define BATTLE_DNS_PAL_FADE (BBG_SHI(0) | BBG_SHI(1) | BBG_SHI(2) | BBG_SHI(3) | BBG_SHI(4) | BBG_SHI(5) 	\
						 | BBG_SHI(6) | BBG_SHI(7) | BBG_SHI(8) | BBG_SHI(9) | BBG_SHI(10) | BBG_SHI(11) 	\
						 | BBG_SHI(12) | BBG_SHI(13) | BBG_SHI(14) | BBG_SHI(15)							\
						 | BSP_SHI(0) | BSP_SHI(1) | BSP_SHI(2) | BSP_SHI(3) | BSP_SHI(4) | BSP_SHI(5) 		\
						 | BSP_SHI(6) | BSP_SHI(7) | BSP_SHI(8) | BSP_SHI(9) | BSP_SHI(10) | BSP_SHI(11)	\
						 | BSP_SHI(12) | BSP_SHI(13) | BSP_SHI(14) | BSP_SHI(15))

//The max value for the coefficients (right number) is 16. DO NOT SET ABOVE THIS NUMBER!
const struct DNSPalFade gDNSNightFadingByTime[24][6] =
{
	[0]  = {
			{RGB(1, 0, 17), 6},		//12:00 AM
			{RGB(1, 0, 17), 6},		//12:10 AM
			{RGB(1, 0, 17), 6},		//12:20 AM
			{RGB(1, 0, 17), 6},		//12:30 AM
			{RGB(1, 0, 17), 6},		//12:40 AM
			{RGB(1, 0, 17), 6},		//12:50 AM
		   },

	[1]  = {
			{RGB(1, 0, 17), 6},		//1:00 AM
			{RGB(1, 0, 17), 6},		//1:10 AM
			{RGB(1, 0, 17), 6},		//1:20 AM
			{RGB(1, 0, 17), 6},		//1:30 AM
			{RGB(1, 0, 17), 6},		//1:40 AM
			{RGB(1, 0, 17), 6},		//1:50 AM
		   },

	[2]  = {
			{RGB(1, 0, 17), 6},		//2:00 AM
			{RGB(1, 0, 17), 6},		//2:10 AM
			{RGB(1, 0, 17), 6},		//2:20 AM
			{RGB(1, 0, 17), 6},		//2:30 AM
			{RGB(1, 0, 17), 6},		//2:40 AM
			{RGB(1, 0, 17), 6},		//2:50 AM
		   },

	[3]  = {
			{RGB(1, 0, 17), 5},		//3:00 AM
			{RGB(1, 0, 17), 5},		//3:10 AM
			{RGB(1, 0, 17), 5},		//3:20 AM
			{RGB(1, 0, 17), 5},		//3:30 AM
			{RGB(1, 0, 17), 5},		//3:40 AM
			{RGB(1, 0, 17), 5},		//3:50 AM
		   },

	[4]  = {
			{RGB(0, 6, 16), 4},		//4:00 AM
			{RGB(0, 7, 16), 4},		//4:10 AM
			{RGB(0, 8, 16), 4},		//4:20 AM
			{RGB(0, 9, 16), 4},		//4:30 AM
			{RGB(0, 10, 16), 4},	//4:40 AM
			{RGB(0, 11, 16), 4},	//4:50 AM
		   },

	[5]  = {
			{RGB(0, 12, 16), 3},	//5:00 AM
			{RGB(0, 13, 16), 3},	//5:10 AM
			{RGB(0, 14, 16), 3},	//5:20 AM
			{RGB(0, 15, 16), 3},	//5:30 AM
			{RGB(0, 16, 16), 3},	//5:40 AM
			{RGB(0, 17, 16), 3},	//5:50 AM
		   },

	[6]  = {
			{RGB(0, 18, 16), 2},	//6:00 AM
			{RGB(0, 19, 16), 2},	//6:10 AM
			{RGB(0, 20, 16), 2},	//6:20 AM
			{RGB(0, 21, 16), 2},	//6:30 AM
			{RGB(0, 22, 16), 2},	//6:40 AM
			{RGB(0, 23, 16), 2},	//6:50 AM
		   },

	[7]  = {
			{RGB(0, 24, 16), 1},	//7:00 AM
			{RGB(0, 24, 16), 1},	//7:10 AM
			{RGB(0, 24, 16), 1},	//7:20 AM
			{RGB(0, 24, 16), 1},	//7:30 AM
			{RGB(0, 24, 16), 1},	//7:40 AM
			{RGB(0, 24, 16), 1},	//7:50 AM
		   },

//Day has no fade

	[17]  = {
			{RGB(19, 0, 10), 1},	//5:00 PM
			{RGB(19, 0, 10), 1},	//5:10 PM
			{RGB(19, 0, 10), 1},	//5:20 PM
			{RGB(19, 0, 10), 1},	//5:30 PM
			{RGB(19, 0, 10), 1},	//5:40 PM
			{RGB(19, 0, 10), 1},	//5:50 PM
		   },


	[18]  = {
			{RGB(18, 0, 11), 2},	//6:00 PM
			{RGB(17, 0, 12), 2},	//6:10 PM
			{RGB(16, 0, 13), 2},	//6:20 PM
			{RGB(15, 0, 14), 2},	//6:30 PM
			{RGB(14, 0, 15), 2},	//6:40 PM
			{RGB(13, 0, 16), 2},	//6:50 PM
		   },

	[19]  = {
			{RGB(12, 0, 17), 3},	//7:00 PM
			{RGB(11, 0, 17), 3},	//7:10 PM
			{RGB(10, 0, 18), 3},	//7:20 PM
			{RGB(9, 0, 18), 3},		//7:30 PM
			{RGB(8, 0, 19), 3},		//7:40 PM
			{RGB(7, 0, 19), 3},		//7:50 PM
		   },

	[20]  = {
			{RGB(5, 0, 21), 3},		//8:00 PM
			{RGB(5, 0, 21), 3},		//8:10 PM
			{RGB(5, 0, 21), 3},		//8:20 PM
			{RGB(5, 0, 21), 3},		//8:30 PM
			{RGB(5, 0, 21), 3},		//8:40 PM
			{RGB(5, 0, 21), 3},		//8:50 PM
		   },

	[21]  = {
			{RGB(5, 0, 21), 4},		//9:00 PM
			{RGB(5, 0, 21), 4},		//9:10 PM
			{RGB(5, 0, 21), 4},		//9:20 PM
			{RGB(4, 0, 20), 4},		//9:30 PM
			{RGB(4, 0, 20), 4},		//9:40 PM
			{RGB(4, 0, 20), 4},		//9:50 PM
		   },

	[22]  = {
			{RGB(3, 0, 19), 5},		//10:00 PM
			{RGB(3, 0, 19), 5},		//10:10 PM
			{RGB(3, 0, 19), 5},		//10:20 PM
			{RGB(2, 0, 18), 5},		//10:30 PM
			{RGB(2, 0, 18), 5},		//10:40 PM
			{RGB(2, 0, 18), 5},		//10:50 PM
		   },

	[23]  = {
			{RGB(1, 0, 17), 5},		//11:00 PM
			{RGB(1, 0, 17), 5},		//11:10 PM
			{RGB(1, 0, 17), 5},		//11:20 PM
			{RGB(1, 0, 17), 5},		//11:30 PM
			{RGB(1, 0, 17), 5},		//11:40 PM
			{RGB(1, 0, 17), 5},		//11:50 PM
		   },
};

#define TILESET_PAL_FADE_END {0xFF, 0x0}

#ifndef UNBOUND //Change This

const struct SpecificTilesetFade gSpecificTilesetFades[] =
{
	{ //Main tileset windows and doors
		.tilesetPointer = 0x82D4A94, //Tileset 0
		.paletteNumToFade = 6,
		.paletteIndicesToFade =
		{
			{1,  RGB(31, 31, 20)},
			{2,  RGB(29, 29, 9)},
			{6,  RGB(26, 26, 8)},
			{7,  RGB(31, 31, 28)},
			TILESET_PAL_FADE_END
		},
	},
	{ //New Bark Town Player and small Houses
		.tilesetPointer = 0x82D4AAC, //Tileset 1
		.paletteNumToFade = 8,
		.paletteIndicesToFade =
		{
			{7,   RGB(29, 29, 9)},
			{9,   RGB(31, 31, 20)},
			{13,  RGB(26, 26, 8)},
			TILESET_PAL_FADE_END
		},
	},
	{ //New Bark Town - Prof. Elm House
		.tilesetPointer = 0x82D4AAC, //Tileset 1
		.paletteNumToFade = 10,
		.paletteIndicesToFade =
		{
			{7,  RGB(29, 29, 9)},
			{8,  RGB(26, 26, 8)},
			{9,  RGB(31, 31, 20)},
			TILESET_PAL_FADE_END
		},
	},
	{ //Cherrygrove City Pink Houses
		.tilesetPointer = 0x82D4AAC, //Tileset 1
		.paletteNumToFade = 11,
		.paletteIndicesToFade =
		{
			{4,   RGB(31, 31, 20)},
			{14,  RGB(29, 29, 9)},
			{15,  RGB(26, 26, 8)},
			TILESET_PAL_FADE_END
		},
	},
	{ //Violet City - Houses and School
		.tilesetPointer = 0x82D4B24, //Tileset 6
		.paletteNumToFade = 7,
		.paletteIndicesToFade =
		{
			{5,  RGB(29, 29, 9)},
			TILESET_PAL_FADE_END
		},
	},
	{ //Violet City - Sprout Tower
		.tilesetPointer = 0x82D4B24, //Tileset 6
		.paletteNumToFade = 10,
		.paletteIndicesToFade =
		{
			{12,  RGB(29, 29, 9)},
			TILESET_PAL_FADE_END
		},
	},
	{ //Azalea Town Houses
		.tilesetPointer = 0x82D4AF4, //Tileset 4
		.paletteNumToFade = 8,
		.paletteIndicesToFade =
		{
			{1,  RGB(31, 31, 20)},
			{4,  RGB(29, 29, 9)},
			TILESET_PAL_FADE_END
		},
	},
	{ //Goldenrod City - Gray Buildings
		.tilesetPointer = 0x82D4B9C, //Tileset 11
		.paletteNumToFade = 7,
		.paletteIndicesToFade =
		{
			{4,  RGB(31, 31, 20)},
			{7,  RGB(29, 29, 9)},
			TILESET_PAL_FADE_END
		},
	},
	{ //Goldenrod City - Medium Buildings and cabin
		.tilesetPointer = 0x82D4B9C, //Tileset 11
		.paletteNumToFade = 9,
		.paletteIndicesToFade =
		{
			{1,  RGB(31, 31, 20)},
			{2,  RGB(29, 29, 9)},
			TILESET_PAL_FADE_END
		},
	},
	{ //Goldenrod City - Radio Tower
		.tilesetPointer = 0x82D4AC4, //Tileset 2
		.paletteNumToFade = 8,
		.paletteIndicesToFade =
		{
			{4,   RGB(29, 29, 9)},
			{11,  RGB(31, 31, 20)},
			TILESET_PAL_FADE_END
		},
	},
	{ //Ecruteak City - Small Houses
		.tilesetPointer = 0x82D4B3C, //Tileset 7
		.paletteNumToFade = 7,
		.paletteIndicesToFade =
		{
			{9,  RGB(29, 29, 9)},
			TILESET_PAL_FADE_END
		},
	},
	{ //Ecruteak City - Shrine
		.tilesetPointer = 0x82D4B3C, //Tileset 7
		.paletteNumToFade = 8,
		.paletteIndicesToFade =
		{
			{13,  RGB(29, 29, 9)},
			TILESET_PAL_FADE_END
		},
	},
	{ //Mahogany Town - Houses
		.tilesetPointer = 0x82D4ADC, //Tileset 3
		.paletteNumToFade = 8,
		.paletteIndicesToFade =
		{
			{6,  RGB(31, 31, 20)},
			{7,  RGB(29, 29, 9)},
			TILESET_PAL_FADE_END
		},
	},
	{ //Cianwood City Windows
		.tilesetPointer = 0x82D4B0C, //Tileset 5
		.paletteNumToFade = 11,
		.paletteIndicesToFade =
		{
			{1,  RGB(31, 31, 20)},
			{2,  RGB(29, 29, 9)},
			{6,  RGB(26, 26, 8)},
			TILESET_PAL_FADE_END
		},
	},
	{ //Olivine City - Lighthouse
		.tilesetPointer = 0x82D4B54, //Tileset 8
		.paletteNumToFade = 9,
		.paletteIndicesToFade =
		{
			{1,  RGB(31, 31, 20)},
			{2,  RGB(29, 29, 9)},
			TILESET_PAL_FADE_END
		},
	},
	{ //Olivine City - Lighthouse
		.tilesetPointer = 0x82D4B54, //Tileset 8
		.paletteNumToFade = 12,
		.paletteIndicesToFade =
		{
			{7,  RGB(31, 31, 20)},
			{8,  RGB(29, 29, 9)},
			TILESET_PAL_FADE_END
		},
	},
	{ //Blackthorn City Houses
		.tilesetPointer = 0x82D4B6C, //Tileset 9
		.paletteNumToFade = 7,
		.paletteIndicesToFade =
		{
			{8,  RGB(31, 31, 20)},
			{9,  RGB(29, 29, 9)},
			TILESET_PAL_FADE_END
		},
	},
};

#else //For Pokemon Unbound - Feel free to remove


#endif
