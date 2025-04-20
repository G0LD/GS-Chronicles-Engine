#pragma once

#include "../global.h"

/**
 * \file cmd49_battle_scripts.h
 * \brief A file to be included only be "src/battle_transition.c". Contains several
 *		  declarations and constants for pre-battle mugshots.
 */

//MUGSHOT_BIG tiles
extern const u16 Big_MugshotTiles[];
extern const u16 Big_MugshotPal[];
extern const u16 Big_MugshotMap[];

//MUGSHOT_DP Tiles
extern const u16 DP_MugshotTiles[];
extern const u16 DP_MugshotPal[];
extern const u16 DP_MugshotMap[];

//MUGSHOT_TWO_BARS Tiles
#define TwoBars_MugshotTiles ((const u16*) 0x83F8F60)
#define TwoBars_MugshotPal ((const u16*) 0x83FA660)
#define TwoBars_MugshotMap ((const u16*) 0x83FAC34)

#define sOpponentMugshotsPals ((const u16**) 0x83FA740)
#define sPlayerMugshotsPals ((const u16**) 0x83FA754)
#define sMugshotsTrainerPicIDsTable ((const u8*) 0x3FA494)
extern const s16 sMugshotsOpponentCoords[][2];
extern const s16 sMugshotsOpponentRotationScales[][2];

extern const u8 VS_SpriteTiles[];
extern const u8 VS_SpritePal[];

extern const u8 Male_MugshotTiles[];
extern const u8 Male_MugshotPal[];
extern const u8 Female_MugshotTiles[];
extern const u8 Female_MugshotPal[];
extern const u8 Ethan_MugshotTiles[];
extern const u8 Ethan_MugshotPal[];
extern const u8 Kris_MugshotTiles[];
extern const u8 Kris_MugshotPal[];
extern const u8 Silver_MugshotTiles[];
extern const u8 Silver_MugshotPal[];
extern const u8 Falkner_MugshotTiles[];
extern const u8 Falkner_MugshotPal[];
extern const u8 Bugsy_MugshotTiles[];
extern const u8 Bugsy_MugshotPal[];
extern const u8 Whitney_MugshotTiles[];
extern const u8 Whitney_MugshotPal[];
extern const u8 Morty_MugshotTiles[];
extern const u8 Morty_MugshotPal[];
extern const u8 Chuck_MugshotTiles[];
extern const u8 Chuck_MugshotPal[];
extern const u8 Jasmine_MugshotTiles[];
extern const u8 Jasmine_MugshotPal[];
extern const u8 Lorelei_MugshotTiles[];
extern const u8 Lorelei_MugshotPal[];
extern const u8 Clair_MugshotTiles[];
extern const u8 Clair_MugshotPal[];
extern const u8 Pryce_MugshotTiles[];
extern const u8 Pryce_MugshotPal[];
extern const u8 Proton_MugshotTiles[];
extern const u8 Proton_MugshotPal[];
extern const u8 Petrel_MugshotTiles[];
extern const u8 Petrel_MugshotPal[];
extern const u8 Archer_MugshotTiles[];
extern const u8 Archer_MugshotPal[];
extern const u8 Ariana_MugshotTiles[];
extern const u8 Ariana_MugshotPal[];
extern const u8 Will_MugshotTiles[];
extern const u8 Will_MugshotPal[];
extern const u8 Aile_MugshotTiles[];
extern const u8 Aile_MugshotPal[];
extern const u8 Koga_MugshotTiles[];
extern const u8 Koga_MugshotPal[];
extern const u8 Karen_MugshotTiles[];
extern const u8 Karen_MugshotPal[];
extern const u8 Elm_MugshotTiles[];
extern const u8 Elm_MugshotPal[];
extern const u8 KimonoGirl_MugshotTiles[];
extern const u8 KimonoGirl_MugshotPal[];

//Big Mugshot Pals
extern const u16 Big_Mugshot_BlackPal[];
extern const u16 Big_Mugshot_Dark_GrayPal[];
extern const u16 Big_Mugshot_Dark_PurplePal[];
extern const u16 Big_Mugshot_GreenPal[];
extern const u16 Big_Mugshot_Icy_BluePal[];
extern const u16 Big_Mugshot_Light_BrownPal[];
extern const u16 Big_Mugshot_Light_GreenPal[];
extern const u16 Big_Mugshot_Pearly_WhitePal[];
extern const u16 Big_Mugshot_PinkPal[];
extern const u16 Big_Mugshot_PurplePal[];
extern const u16 Big_Mugshot_Royal_BluePal[];
extern const u16 Big_Mugshot_Sky_BluePal[];
extern const u16 Big_Mugshot_Steel_GrayPal[];
extern const u16 Big_Mugshot_Yellow_GrayPal[];

//DP/Two Bars Pals
extern const u16 DP_Mugshot_BlackPal[];
extern const u16 DP_Mugshot_Dark_GrayPal[];
extern const u16 DP_Mugshot_Dark_GreenPal[];
extern const u16 DP_Mugshot_Dark_PurplePal[];
extern const u16 DP_Mugshot_Dark_RedPal[];
extern const u16 DP_Mugshot_Icy_BluePal[];
extern const u16 DP_Mugshot_Light_BrownPal[];
extern const u16 DP_Mugshot_Light_GreenPal[];
extern const u16 DP_Mugshot_PinkPal[];
extern const u16 DP_Mugshot_Royal_BluePal[];
extern const u16 DP_Mugshot_Sky_BluePal[];
extern const u16 DP_Mugshot_Steel_GrayPal[];
extern const u16 DP_Mugshot_WhitePal[];
extern const u16 DP_Mugshot_YellowPal[];


struct MugshotTable
{
	const u8* sprite;
	const u8* pal;
	u16 size;
	s16 x;
	s16 y;
};
