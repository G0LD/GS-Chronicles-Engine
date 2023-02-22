#include "../config.h"
#include "../../include/global.h"
#include "../../include/constants/maps.h"
#include "../../include/wild_encounter.h"
#include "../../include/constants/region_map_sections.h"
#include "../../include/constants/species.h"

/*
wild_encounter_tables.c
	day/night and/or regular map wild encounter species

tables to edit:
	gWildMonMorningHeaders
	gWildMonEveningHeaders
	gWildMonNightHeaders
	gSwarmTable

*/

const struct WildPokemon gRoute29_LandMonsNight[] =
{
    {3, 3, SPECIES_HOOTHOOT},
    {3, 3, SPECIES_RATTATA},
    {3, 3, SPECIES_HOOTHOOT},
    {3, 3, SPECIES_RATTATA},
    {2, 2, SPECIES_POOCHYENA},
    {2, 2, SPECIES_POOCHYENA},
    {3, 3, SPECIES_SHINX},
    {3, 3, SPECIES_SHINX},
    {4, 4, SPECIES_ZUBAT},
    {4, 4, SPECIES_HOOTHOOT},
    {5, 5, SPECIES_ZUBAT},
    {4, 4, SPECIES_HOOTHOOT},
};

const struct WildPokemonInfo gRoute29_LandMonsInfoNight = {21, gRoute29_LandMonsNight};

const struct WildPokemon gRoute30_LandMonsNight[] =
{
    {3, 3, SPECIES_WEEDLE},
    {3, 3, SPECIES_HOOTHOOT},
    {4, 4, SPECIES_WEEDLE},
    {4, 4, SPECIES_HOOTHOOT},
    {2, 2, SPECIES_RALTS},
    {2, 2, SPECIES_RALTS},
    {5, 5, SPECIES_SPINARAK},
    {5, 5, SPECIES_SPINARAK},
    {4, 4, SPECIES_RATTATA},
    {4, 4, SPECIES_NINCADA},
    {5, 5, SPECIES_RATTATA},
    {5, 5, SPECIES_NINCADA},
};

const struct WildPokemonInfo gRoute30_LandMonsInfoNight = {21, gRoute30_LandMonsNight};

const struct WildPokemon gRoute31_LandMonsNight[] =
{
    {3, 6, SPECIES_NIDORAN_F},
    {4, 6, SPECIES_HOOTHOOT},
    {3, 6, SPECIES_NIDORAN_M},
    {4, 6, SPECIES_HOOTHOOT},
    {4, 6, SPECIES_BELLSPROUT},
    {4, 7, SPECIES_BELLSPROUT},
    {4, 7, SPECIES_CLEFFA},
    {5, 7, SPECIES_CLEFFA},
    {5, 7, SPECIES_ABRA},
    {5, 7, SPECIES_NINCADA},
    {5, 7, SPECIES_ABRA},
    {5, 7, SPECIES_NINCADA},
};

const struct WildPokemonInfo gRoute31_LandMonsInfoNight = {21, gRoute31_LandMonsNight};

const struct WildPokemon gSprout_Tower_LandMonsNight[] =

{
    {3, 6, SPECIES_GASTLY},
    {3, 6, SPECIES_RATTATA},
    {4, 6, SPECIES_GASTLY},
    {4, 6, SPECIES_RATTATA},
    {5, 7, SPECIES_DUSKULL},
    {6, 8, SPECIES_DUSKULL},
    {6, 8, SPECIES_GASTLY},
    {5, 8, SPECIES_GASTLY},
    {5, 8, SPECIES_BRONZOR},
    {5, 8, SPECIES_RATTATA},
    {6, 8, SPECIES_BRONZOR},
    {6, 8, SPECIES_RATTATA},
};

const struct WildPokemonInfo gSprout_Tower_LandMonsInfoNight = {6, gSprout_Tower_LandMonsNight};

const struct WildPokemon gRoute32_LandMonsNight[] =

{
    {7, 9, SPECIES_ODDISH},
    {7, 9, SPECIES_RATTATA},
    {7, 9, SPECIES_ODDISH},
    {7, 9, SPECIES_RATTATA},
    {8, 10, SPECIES_HOOTHOOT},
    {8, 10, SPECIES_HOOTHOOT},
    {8, 10, SPECIES_GASTLY},
    {8, 10, SPECIES_GASTLY},
    {9, 11, SPECIES_RALTS},
    {9, 11, SPECIES_POLIWAG},
    {9, 11, SPECIES_RALTS},
    {10, 12, SPECIES_POLIWAG},
};

const struct WildPokemonInfo gRoute32_LandMonsInfoNight = {21,gRoute32_LandMonsNight};

const struct WildPokemon gRoute33_LandMonsNight[] =

{
    {8, 10, SPECIES_ODDISH},
    {8, 10, SPECIES_BELLSPROUT},
    {8, 10, SPECIES_ODDISH},
    {8, 10, SPECIES_BELLSPROUT},
    {9, 11, SPECIES_HOOTHOOT},
    {9, 11, SPECIES_HOOTHOOT},
    {9, 11, SPECIES_MEOWTH},
    {9, 11, SPECIES_MEOWTH},
    {10, 12, SPECIES_MURKROW},
    {10, 12, SPECIES_HOUNDOUR},
    {10, 12, SPECIES_MURKROW},
    {10, 12, SPECIES_HOUNDOUR},
};

const struct WildPokemonInfo gRoute33_LandMonsInfoNight = {21,gRoute33_LandMonsNight};

const struct WildPokemon gRoute34_LandMonsNight[] =

{
    {10, 13, SPECIES_HOOTHOOT},
    {10, 13, SPECIES_DROWZEE},
    {10, 13, SPECIES_HOOTHOOT},
    {10, 13, SPECIES_DROWZEE},
    {13, 15, SPECIES_VOLBEAT},
    {13, 15, SPECIES_ILLUMISE},
    {13, 15, SPECIES_DITTO},
    {13, 15, SPECIES_DITTO},
    {14, 16, SPECIES_POOCHYENA},
    {14, 16, SPECIES_SHUPPET},
    {14, 16, SPECIES_MURKROW},
    {14, 16, SPECIES_POOCHYENA},
};

const struct WildPokemonInfo gRoute34_LandMonsInfoNight = {21,gRoute34_LandMonsNight};

const struct WildPokemon gRoute35_LandMonsNight[] =

{
    {15, 17, SPECIES_KRICKETUNE},
    {15, 17, SPECIES_HOOTHOOT},
    {15, 17, SPECIES_KRICKETUNE},
    {15, 17, SPECIES_HOOTHOOT},
    {16, 18, SPECIES_SURSKIT},
    {16, 18, SPECIES_SURSKIT},
    {16, 18, SPECIES_MEOWTH},
    {16, 18, SPECIES_MEOWTH},
    {17, 19, SPECIES_EXEGGCUTE},
    {17, 19, SPECIES_SHUPPET},
    {17, 19, SPECIES_EXEGGCUTE},
    {17, 19, SPECIES_SHUPPET},
};

const struct WildPokemonInfo gRoute35_LandMonsInfoNight = {21,gRoute35_LandMonsNight};

const struct WildPokemon gRoute36_LandMonsNight[] =

{
    {5, 7, SPECIES_SHINX},
    {5, 7, SPECIES_HOOTHOOT},
    {5, 7, SPECIES_SHINX},
    {5, 7, SPECIES_HOOTHOOT},
    {6, 8, SPECIES_ZUBAT},
    {6, 8, SPECIES_ZUBAT},
    {6, 8, SPECIES_MEOWTH},
    {6, 8, SPECIES_MEOWTH},
    {7, 9, SPECIES_KRICKETOT},
    {7, 9, SPECIES_NINCADA},
    {7, 9, SPECIES_KRICKETOT},
    {7, 10, SPECIES_NINCADA},
};

const struct WildPokemonInfo gRoute36_LandMonsInfoNight = {21,gRoute36_LandMonsNight};

const struct WildPokemon gIlex_Forest_LandMonsNight[] =

{
    {5, 12, SPECIES_WEEDLE},
    {5, 12, SPECIES_SPINARAK},
    {5, 12, SPECIES_KAKUNA},
    {5, 12, SPECIES_SPINARAK},
    {10, 13, SPECIES_ODDISH},
    {10, 13, SPECIES_ODDISH},
    {10, 13, SPECIES_NINCADA},
    {10, 13, SPECIES_NINCADA},
    {11, 14, SPECIES_KRICKETOT},
    {11, 14, SPECIES_PSYDUCK},
    {11, 14, SPECIES_KRICKETOT},
    {11, 14, SPECIES_PSYDUCK},
};

const struct WildPokemonInfo gIlex_Forest_LandMonsInfoNight = {10,gIlex_Forest_LandMonsNight};

const struct WildPokemon gDark_Cave_1F_LandMonsNight[] =

{
    {4, 6, SPECIES_GEODUDE},
    {4, 6, SPECIES_ZUBAT},
    {4, 6, SPECIES_GEODUDE},
    {4, 6, SPECIES_ZUBAT},
    {5, 7, SPECIES_GEODUDE},
    {5, 7, SPECIES_GEODUDE},
    {5, 7, SPECIES_ZUBAT},
    {5, 7, SPECIES_ZUBAT},
    {6, 8, SPECIES_WYNAUT},
    {6, 8, SPECIES_DUNSPARCE},
    {6, 8, SPECIES_WYNAUT},
    {6, 8, SPECIES_DUNSPARCE},
};

const struct WildPokemonInfo gDark_Cave_1F_LandMonsInfoNight = {8,gDark_Cave_1F_LandMonsNight};

const struct WildPokemon gDark_Cave_2F_LandMonsNight[] =

{
    {28, 32, SPECIES_GOLBAT},
    {28, 32, SPECIES_ARON},
    {28, 32, SPECIES_LOUDRED},
    {28, 32, SPECIES_LAIRON},
    {29, 33, SPECIES_GRAVELER},
    {29, 33, SPECIES_HIPPOPOTAS},
    {29, 33, SPECIES_WOBBUFFET},
    {29, 33, SPECIES_WOBBUFFET},
    {30, 34, SPECIES_DUNSPARCE},
    {30, 34, SPECIES_GIBLE},
    {30, 34, SPECIES_DUNSPARCE},
    {30, 34, SPECIES_GIBLE},
};

const struct WildPokemonInfo gDark_Cave_2F_LandMonsInfoNight = {8,gDark_Cave_2F_LandMonsNight};

const struct WildPokemon gUnion_Cave_1F_LandMonsNight[] =

{
    {8, 10, SPECIES_WOOPER},
    {8, 10, SPECIES_GEODUDE},
    {8, 10, SPECIES_WOOPER},
    {8, 10, SPECIES_GEODUDE},
    {9, 11, SPECIES_ONIX},
    {9, 11, SPECIES_ONIX},
    {9, 11, SPECIES_ZUBAT},
    {9, 11, SPECIES_ZUBAT},
    {10, 12, SPECIES_ARON},
    {10, 12, SPECIES_SHELLOS},
    {10, 12, SPECIES_ARON},
    {10, 12, SPECIES_SHELLOS},
};

const struct WildPokemonInfo gUnion_Cave_1F_LandMonsInfoNight = {8,gUnion_Cave_1F_LandMonsNight};

const struct WildPokemon gUnion_Cave_B1F_LandMonsNight[] =

{
    {8, 10, SPECIES_WOOPER},
    {8, 10, SPECIES_GEODUDE},
    {8, 10, SPECIES_WOOPER},
    {8, 10, SPECIES_GEODUDE},
    {9, 11, SPECIES_ONIX},
    {9, 11, SPECIES_ONIX},
    {9, 11, SPECIES_ZUBAT},
    {9, 11, SPECIES_ZUBAT},
    {10, 12, SPECIES_ARON},
    {10, 12, SPECIES_SHELLOS},
    {10, 12, SPECIES_ARON},
    {10, 12, SPECIES_SHELLOS},
};

const struct WildPokemonInfo gUnion_Cave_B1F_LandMonsInfoNight = {8,gUnion_Cave_B1F_LandMonsNight};

const struct WildPokemon gRoute36_Grotto_LandMonsNight[] =

{
    {7, 9, SPECIES_EXEGGCUTE},
    {7, 9, SPECIES_PINECO},
    {7, 9, SPECIES_EXEGGCUTE},
    {7, 9, SPECIES_PINECO},
    {8, 11, SPECIES_KRICKETOT},
    {8, 11, SPECIES_KRICKETOT},
    {8, 11, SPECIES_BELLSPROUT},
    {8, 11, SPECIES_BELLSPROUT},
    {10, 13, SPECIES_MURKROW},
    {10, 13, SPECIES_MISDREAVUS},
    {10, 13, SPECIES_MURKROW},
    {10, 13, SPECIES_SEVIPER},
};

const struct WildPokemonInfo gRoute36_Grotto_LandMonsInfoNight = {21,gRoute36_Grotto_LandMonsNight};

const struct WildPokemon gNational_Park_LandMonsNight[] =

{
    {12, 15, SPECIES_VENONAT},
    {12, 15, SPECIES_SPOINK},
    {12, 15, SPECIES_VENONAT},
    {12, 15, SPECIES_SPOINK},
    {13, 16, SPECIES_HOOTHOOT},
    {13, 16, SPECIES_HOOTHOOT},
    {13, 16, SPECIES_MEOWTH},
    {13, 16, SPECIES_GLAMEOW},
    {14, 18, SPECIES_NIDORAN_F},
    {14, 18, SPECIES_NIDORAN_M},
    {14, 18, SPECIES_NIDORAN_F},
    {14, 18, SPECIES_NIDORAN_M},
};

const struct WildPokemonInfo gNational_Park_LandMonsInfoNight = {21,gNational_Park_LandMonsNight};

const struct WildPokemon gNational_Park_Contest_LandMonsNight[] =

{
    {12, 16, SPECIES_VENONAT},
    {12, 16, SPECIES_VOLBEAT},
    {12, 16, SPECIES_VENONAT},
    {12, 16, SPECIES_ILLUMISE},
    {13, 18, SPECIES_KAKUNA},
    {13, 18, SPECIES_BEEDRILL},
    {13, 18, SPECIES_NINCADA},
    {13, 18, SPECIES_NINCADA},
    {15, 20, SPECIES_YANMA},
    {15, 20, SPECIES_HERACROSS},
    {15, 20, SPECIES_YANMA},
    {15, 20, SPECIES_HERACROSS},
};

const struct WildPokemonInfo gNational_Park_Contest_LandMonsInfoNight = {21,gNational_Park_Contest_LandMonsNight};

const struct WildPokemon gRoute37_LandMonsNight[] =

{
    {18, 22, SPECIES_DRIFLOON},
    {18, 22, SPECIES_HOOTHOOT},
    {18, 22, SPECIES_DRIFLOON},
    {18, 22, SPECIES_HOOTHOOT},
    {19, 23, SPECIES_SPINARAK},
    {19, 23, SPECIES_SPINARAK},
    {19, 23, SPECIES_VENONAT},
    {19, 23, SPECIES_VENONAT},
    {20, 24, SPECIES_STANTLER},
    {20, 24, SPECIES_ARIADOS},
    {20, 24, SPECIES_STANTLER},
    {20, 24, SPECIES_NOCTOWL},
};

const struct WildPokemonInfo gRoute37_LandMonsInfoNight = {21,gRoute37_LandMonsNight};

const struct WildPokemon gRoute38_LandMonsNight[] =

{
    {21, 25, SPECIES_MAGNEMITE},
    {21, 25, SPECIES_RATTATA},
    {21, 25, SPECIES_MAGNEMITE},
    {21, 25, SPECIES_RATICATE},
    {22, 26, SPECIES_MEOWTH},
    {22, 26, SPECIES_MEOWTH},
    {22, 26, SPECIES_ABRA},
    {22, 26, SPECIES_KADABRA},
    {23, 27, SPECIES_HOUNDOUR},
    {23, 27, SPECIES_CARNIVINE},
    {23, 27, SPECIES_HOUNDOUR},
    {23, 27, SPECIES_CARNIVINE},
};

const struct WildPokemonInfo gRoute38_LandMonsInfoNight = {21,gRoute38_LandMonsNight};

const struct WildPokemon gRoute39_LandMonsNight[] =

{
    {21, 25, SPECIES_MAGNEMITE},
    {21, 25, SPECIES_POOCHYENA},
    {21, 25, SPECIES_MAGNEMITE},
    {21, 25, SPECIES_MIGHTYENA},
    {22, 26, SPECIES_MEOWTH},
    {22, 26, SPECIES_MEOWTH},
    {22, 26, SPECIES_SABLEYE},
    {22, 26, SPECIES_SABLEYE},
    {23, 27, SPECIES_MURKROW},
    {23, 27, SPECIES_CARNIVINE},
    {23, 27, SPECIES_MURKROW},
    {23, 27, SPECIES_CARNIVINE},
};

const struct WildPokemonInfo gRoute39_LandMonsInfoNight = {21,gRoute39_LandMonsNight};

const struct WildPokemon gRoute42_LandMonsNight[] =

{
    {21, 25, SPECIES_SHUPPET},
    {21, 25, SPECIES_VENONAT},
    {21, 25, SPECIES_SHUPPET},
    {21, 25, SPECIES_VENOMOTH},
    {22, 26, SPECIES_EKANS},
    {22, 26, SPECIES_ARBOK},
    {22, 26, SPECIES_CLEFAIRY},
    {22, 26, SPECIES_CLEFAIRY},
    {23, 27, SPECIES_POLIWAG},
    {23, 27, SPECIES_NATU},
    {23, 27, SPECIES_POLIWHIRL},
    {23, 27, SPECIES_NATU},
};

const struct WildPokemonInfo gRoute42_LandMonsInfoNight = {21,gRoute42_LandMonsNight};

const struct WildPokemon gRoute43_LandMonsNight[] =

{
    {30, 34, SPECIES_NOCTOWL},
    {30, 34, SPECIES_VENONAT},
    {30, 34, SPECIES_NOCTOWL},
    {30, 34, SPECIES_VENOMOTH},
    {31, 35, SPECIES_ABSOL},
    {31, 35, SPECIES_ABSOL},
    {31, 35, SPECIES_LUXIO},
    {31, 35, SPECIES_LUXIO},
    {32, 36, SPECIES_GIRAFARIG},
    {32, 36, SPECIES_LUNATONE},
    {32, 36, SPECIES_GIRAFARIG},
    {32, 36, SPECIES_LUNATONE},
};

const struct WildPokemonInfo gRoute43_LandMonsInfoNight = {21,gRoute43_LandMonsNight};

const struct WildPokemon gRoute44_LandMonsNight[] =

{
    {35, 39, SPECIES_GLOOM},
    {35, 39, SPECIES_NIDORINA},
    {35, 39, SPECIES_WEEPINBELL},
    {35, 39, SPECIES_NIDORINO},
    {36, 40, SPECIES_SHELLOS_EAST},
    {36, 40, SPECIES_GASTRODON_EAST},
    {36, 40, SPECIES_MISDREAVUS},
    {36, 40, SPECIES_MISDREAVUS},
    {37, 41, SPECIES_GLAMEOW},
    {37, 41, SPECIES_MR_MIME},
    {37, 41, SPECIES_PURUGLY},
    {37, 41, SPECIES_MR_MIME},
};

const struct WildPokemonInfo gRoute44_LandMonsInfoNight = {21,gRoute44_LandMonsNight};

const struct WildPokemon gRoute45_LandMonsNight[] =

{
    {36, 40, SPECIES_GRAVELER},
    {36, 40, SPECIES_CACNEA},
    {36, 40, SPECIES_GRAVELER},
    {36, 40, SPECIES_CACTURNE},
    {37, 41, SPECIES_SKARMORY},
    {37, 41, SPECIES_SKARMORY},
    {37, 41, SPECIES_GLIGAR},
    {37, 41, SPECIES_GLIGAR},
    {38, 42, SPECIES_WOBBUFFET},
    {38, 42, SPECIES_ABSOL},
    {38, 42, SPECIES_WOBBUFFET},
    {38, 42, SPECIES_ABSOL},
};

const struct WildPokemonInfo gRoute45_LandMonsInfoNight = {21,gRoute45_LandMonsNight};

const struct WildPokemon gRoute46_LandMonsNight[] =

{
    {2, 4, SPECIES_ZUBAT},
    {2, 4, SPECIES_POOCHYENA},
    {2, 4, SPECIES_ZUBAT},
    {2, 4, SPECIES_POOCHYENA},
    {3, 5, SPECIES_CLEFFA},
    {3, 5, SPECIES_CLEFFA},
    {3, 5, SPECIES_GEODUDE},
    {3, 5, SPECIES_GEODUDE},
    {4, 6, SPECIES_SEEDOT},
    {4, 6, SPECIES_SEEDOT},
    {4, 6, SPECIES_SEEDOT},
    {4, 6, SPECIES_SEEDOT},
};

const struct WildPokemonInfo gRoute46_LandMonsInfoNight = {21,gRoute46_LandMonsNight};

const struct WildPokemon gRoute47_LandMonsNight[] =

{
    {41, 45, SPECIES_CACTURNE},
    {41, 45, SPECIES_DRAPION},
    {41, 45, SPECIES_CACTURNE},
    {41, 45, SPECIES_DRAPION},
    {43, 47, SPECIES_NOCTOWL},
    {43, 47, SPECIES_NOCTOWL},
    {43, 47, SPECIES_AZUMARILL},
    {43, 47, SPECIES_AZUMARILL},
    {45, 49, SPECIES_HOUNDOOM},
    {45, 49, SPECIES_MAWILE},
    {45, 50, SPECIES_HOUNDOOM},
    {45, 50, SPECIES_MAWILE},
};

const struct WildPokemonInfo gRoute47_LandMonsInfoNight = {21,gRoute47_LandMonsNight};

const struct WildPokemon gRoute48_LandMonsNight[] =

{
    {41, 45, SPECIES_PARASECT},
    {41, 45, SPECIES_LUXRAY},
    {41, 45, SPECIES_PARASECT},
    {41, 45, SPECIES_LUXRAY},
    {43, 47, SPECIES_BANETTE},
    {43, 47, SPECIES_DUSCLOPS},
    {43, 47, SPECIES_XATU},
    {43, 47, SPECIES_XATU},
    {45, 50, SPECIES_STANTLER},
    {45, 50, SPECIES_SABLEYE},
    {45, 50, SPECIES_STANTLER},
    {45, 50, SPECIES_SABLEYE},
};

const struct WildPokemonInfo gRoute48_LandMonsInfoNight = {21,gRoute48_LandMonsNight};

const struct WildPokemon gIcePath_1F_LandMonsNight[] =

{
    {35, 39, SPECIES_SNORUNT},
    {35, 39, SPECIES_SNEASEL},
    {35, 39, SPECIES_SNORUNT},
    {35, 39, SPECIES_SNEASEL},
    {36, 40, SPECIES_SNOVER},
    {36, 40, SPECIES_SNOVER},
    {36, 40, SPECIES_ZUBAT},
    {36, 40, SPECIES_GOLBAT},
    {37, 41, SPECIES_JYNX},
    {37, 41, SPECIES_DELIBIRD},
    {37, 41, SPECIES_JYNX},
    {37, 41, SPECIES_DELIBIRD},
};

const struct WildPokemonInfo gIcePath_1F_LandMonsInfoNight = {8,gIcePath_1F_LandMonsNight};

const struct WildPokemon gIcePath_2F_LandMonsNight[] =

{
    {35, 39, SPECIES_SNORUNT},
    {35, 39, SPECIES_SNEASEL},
    {35, 39, SPECIES_SNORUNT},
    {35, 39, SPECIES_SNEASEL},
    {36, 40, SPECIES_SNOVER},
    {36, 40, SPECIES_SNOVER},
    {36, 40, SPECIES_ZUBAT},
    {36, 40, SPECIES_GOLBAT},
    {37, 41, SPECIES_JYNX},
    {37, 41, SPECIES_DELIBIRD},
    {37, 41, SPECIES_JYNX},
    {37, 41, SPECIES_DELIBIRD},
};

const struct WildPokemonInfo gIcePath_2F_LandMonsInfoNight = {8,gIcePath_2F_LandMonsNight};

const struct WildPokemon gIcePath_3F_LandMonsNight[] =

{
    {35, 39, SPECIES_SNORUNT},
    {35, 39, SPECIES_SNEASEL},
    {35, 39, SPECIES_SNORUNT},
    {35, 39, SPECIES_SNEASEL},
    {36, 40, SPECIES_SNOVER},
    {36, 40, SPECIES_SNOVER},
    {36, 40, SPECIES_ZUBAT},
    {36, 40, SPECIES_GOLBAT},
    {37, 41, SPECIES_JYNX},
    {37, 41, SPECIES_DELIBIRD},
    {37, 41, SPECIES_JYNX},
    {37, 41, SPECIES_DELIBIRD},
};

const struct WildPokemonInfo gIcePath_3F_LandMonsInfoNight = {8,gIcePath_3F_LandMonsNight};

const struct WildPokemon gIcePath_4F_LandMonsNight[] =

{
    {35, 39, SPECIES_SNORUNT},
    {35, 39, SPECIES_SNEASEL},
    {35, 39, SPECIES_SNORUNT},
    {35, 39, SPECIES_SNEASEL},
    {36, 40, SPECIES_SNOVER},
    {36, 40, SPECIES_SNOVER},
    {36, 40, SPECIES_ZUBAT},
    {36, 40, SPECIES_GOLBAT},
    {37, 41, SPECIES_JYNX},
    {37, 41, SPECIES_DELIBIRD},
    {37, 41, SPECIES_JYNX},
    {37, 41, SPECIES_DELIBIRD},
};

const struct WildPokemonInfo gIcePath_4F_LandMonsInfoNight = {8,gIcePath_4F_LandMonsNight};

const struct WildPokemonHeader gWildMonMorningHeaders[] =
{
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	}
};

const struct WildPokemonHeader gWildMonEveningHeaders[] =
{
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	}
};

const struct WildPokemonHeader gWildMonNightHeaders[] =
{
	{
        .mapGroup = MAP_GROUP(ROUTE_1),
        .mapNum = MAP_NUM(ROUTE_1),
        .landMonsInfo = &gRoute29_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = MAP_GROUP(ROUTE_2),
        .mapNum = MAP_NUM(ROUTE_2),
        .landMonsInfo = &gRoute30_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = MAP_GROUP(ROUTE_3),
        .mapNum = MAP_NUM(ROUTE_3),
        .landMonsInfo = &gRoute31_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = MAP_GROUP(DIGLETTS_CAVE_B1F),
        .mapNum = MAP_NUM(DIGLETTS_CAVE_B1F),
        .landMonsInfo = &gSprout_Tower_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = MAP_GROUP(ROUTE_4),
        .mapNum = MAP_NUM(ROUTE_4),
        .landMonsInfo = &gRoute32_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = MAP_GROUP(ROUTE_5),
        .mapNum = MAP_NUM(ROUTE_5),
        .landMonsInfo = &gRoute33_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = MAP_GROUP(ROUTE_6),
        .mapNum = MAP_NUM(ROUTE_6),
        .landMonsInfo = &gRoute34_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = MAP_GROUP(ROUTE_7),
        .mapNum = MAP_NUM(ROUTE_7),
        .landMonsInfo = &gRoute35_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = MAP_GROUP(ROUTE_8),
        .mapNum = MAP_NUM(ROUTE_8),
        .landMonsInfo = &gRoute36_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = MAP_GROUP(ROUTE_9),
        .mapNum = MAP_NUM(ROUTE_9),
        .landMonsInfo = &gRoute37_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = MAP_GROUP(ROUTE_10),
        .mapNum = MAP_NUM(ROUTE_10),
        .landMonsInfo = &gRoute38_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = MAP_GROUP(ROUTE_11),
        .mapNum = MAP_NUM(ROUTE_11),
        .landMonsInfo = &gRoute39_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = MAP_GROUP(ROUTE_14),
        .mapNum = MAP_NUM(ROUTE_14),
        .landMonsInfo = &gRoute42_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = MAP_GROUP(ROUTE_15),
        .mapNum = MAP_NUM(ROUTE_15),
        .landMonsInfo = &gRoute43_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = MAP_GROUP(ROUTE_16),
        .mapNum = MAP_NUM(ROUTE_16),
        .landMonsInfo = &gRoute44_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = MAP_GROUP(ROUTE_17),
        .mapNum = MAP_NUM(ROUTE_17),
        .landMonsInfo = &gRoute45_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = MAP_GROUP(ROUTE_18),
        .mapNum = MAP_NUM(ROUTE_18),
        .landMonsInfo = &gRoute46_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = MAP_GROUP(ROUTE_19),
        .mapNum = MAP_NUM(ROUTE_19),
        .landMonsInfo = &gRoute47_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = MAP_GROUP(ROUTE_20),
        .mapNum = MAP_NUM(ROUTE_20),
        .landMonsInfo = &gRoute48_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = MAP_GROUP(VIRIDIAN_FOREST),
        .mapNum = MAP_NUM(VIRIDIAN_FOREST),
        .landMonsInfo = &gIlex_Forest_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = MAP_GROUP(MT_MOON_1F),
        .mapNum = MAP_NUM(MT_MOON_1F),
        .landMonsInfo = &gDark_Cave_1F_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(MT_MOON_B1F),
        .mapNum = MAP_NUM(MT_MOON_B1F),
        .landMonsInfo = &gDark_Cave_2F_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = MAP_GROUP(UNDERGROUND_PATH_NORTH_ENTRANCE),
        .mapNum = MAP_NUM(UNDERGROUND_PATH_NORTH_ENTRANCE),
        .landMonsInfo = &gUnion_Cave_1F_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = MAP_GROUP(UNDERGROUND_PATH_NORTH_SOUTH_TUNNEL),
        .mapNum = MAP_NUM(UNDERGROUND_PATH_NORTH_SOUTH_TUNNEL),
        .landMonsInfo = &gUnion_Cave_B1F_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = MAP_GROUP(DIGLETTS_CAVE_NORTH_ENTRANCE),
        .mapNum = MAP_NUM(DIGLETTS_CAVE_NORTH_ENTRANCE),
        .landMonsInfo = &gRoute36_Grotto_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = MAP_GROUP(DIGLETTS_CAVE_SOUTH_ENTRANCE),
        .mapNum = MAP_NUM(DIGLETTS_CAVE_SOUTH_ENTRANCE),
        .landMonsInfo = &gNational_Park_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(SSANNE_1F_ROOM1),
        .mapNum = MAP_NUM(SSANNE_1F_ROOM1),
        .landMonsInfo = &gNational_Park_Contest_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
        .mapGroup = MAP_GROUP(UNDERGROUND_PATH_WEST_ENTRANCE),
        .mapNum = MAP_NUM(UNDERGROUND_PATH_WEST_ENTRANCE),
        .landMonsInfo = &gIcePath_1F_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(UNDERGROUND_PATH_EAST_WEST_TUNNEL),
        .mapNum = MAP_NUM(UNDERGROUND_PATH_EAST_WEST_TUNNEL),
        .landMonsInfo = &gIcePath_2F_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(UNDERGROUND_PATH_EAST_ENTRANCE),
        .mapNum = MAP_NUM(UNDERGROUND_PATH_EAST_ENTRANCE),
        .landMonsInfo = &gIcePath_3F_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
    {
        .mapGroup = MAP_GROUP(SAFARI_ZONE_BUILDING1),
        .mapNum = MAP_NUM(SAFARI_ZONE_BUILDING1),
        .landMonsInfo = &gIcePath_4F_LandMonsInfoNight,
        .waterMonsInfo = NULL,
        .rockSmashMonsInfo = NULL,
        .fishingMonsInfo = NULL,
    },
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	}
};

const struct SwarmData gSwarmTable[] =
{
	/*{
		.mapName = 0xFF,
		.species = 0xFFFF,
	},*/
};

#ifdef SWARM_CHANGE_HOURLY
const u8 gSwarmOrders[31][24] =
{
	{2, 1, 14, 21, 5, 16, 3, 23, 7, 4, 18, 19, 13, 17, 6, 0, 8, 9, 20, 22, 10, 11, 15, 12},
	{16, 19, 13, 23, 7, 9, 21, 17, 22, 8, 4, 3, 6, 0, 11, 20, 12, 1, 10, 2, 15, 14, 18, 5},
	{17, 8, 16, 6, 12, 19, 18, 3, 14, 22, 13, 11, 23, 2, 7, 21, 20, 10, 5, 15, 9, 0, 1, 4},
	{13, 6, 15, 3, 14, 12, 0, 18, 10, 5, 2, 17, 16, 7, 9, 1, 4, 19, 11, 23, 21, 8, 20, 22},
	{12, 7, 18, 13, 10, 2, 5, 14, 11, 23, 20, 22, 8, 15, 17, 4, 19, 16, 0, 6, 21, 1, 9, 3},
	{8, 18, 12, 15, 20, 0, 1, 13, 5, 11, 14, 21, 17, 10, 4, 16, 22, 6, 2, 19, 23, 3, 7, 9},
	{13, 11, 7, 20, 22, 3, 14, 10, 18, 6, 5, 12, 15, 23, 19, 17, 21, 0, 9, 8, 2, 16, 4, 1},
	{11, 20, 4, 2, 16, 17, 13, 12, 0, 10, 15, 14, 1, 19, 5, 8, 9, 18, 7, 21, 3, 6, 22, 23},
	{22, 18, 11, 17, 2, 9, 20, 16, 0, 13, 1, 6, 3, 14, 15, 10, 5, 8, 23, 4, 12, 21, 19, 7},
	{2, 5, 11, 7, 3, 23, 19, 1, 9, 16, 13, 15, 21, 8, 20, 12, 18, 4, 14, 10, 6, 17, 22, 0},
	{10, 18, 5, 1, 13, 15, 22, 2, 4, 3, 17, 9, 19, 21, 0, 8, 16, 11, 12, 14, 7, 23, 6, 20},
	{6, 13, 0, 4, 22, 10, 23, 17, 8, 1, 5, 11, 2, 3, 12, 19, 15, 20, 18, 9, 14, 7, 21, 16},
	{0, 22, 17, 11, 8, 15, 9, 4, 2, 7, 21, 13, 12, 6, 14, 18, 10, 23, 1, 3, 5, 20, 16, 19},
	{15, 16, 20, 5, 4, 6, 2, 21, 3, 19, 7, 8, 14, 13, 10, 23, 11, 18, 22, 0, 17, 12, 1, 9},
	{7, 12, 2, 0, 18, 4, 16, 8, 20, 17, 22, 23, 9, 1, 5, 14, 6, 21, 15, 3, 13, 19, 10, 11},
	{21, 4, 8, 14, 15, 7, 17, 19, 6, 0, 9, 1, 20, 11, 2, 23, 12, 18, 3, 16, 22, 13, 5, 10},
	{5, 3, 9, 19, 6, 14, 15, 10, 21, 7, 12, 0, 20, 16, 23, 13, 1, 22, 8, 11, 4, 2, 17, 18},
	{18, 0, 1, 19, 16, 21, 4, 5, 2, 9, 23, 7, 20, 12, 22, 15, 3, 6, 8, 11, 13, 17, 14, 10},
	{15, 16, 21, 9, 19, 6, 12, 20, 13, 18, 8, 0, 10, 22, 3, 7, 23, 5, 4, 17, 11, 2, 14, 1},
	{3, 14, 20, 16, 15, 13, 8, 4, 1, 21, 10, 5, 12, 9, 23, 6, 0, 17, 19, 7, 11, 22, 2, 18},
	{9, 7, 23, 12, 0, 1, 4, 15, 19, 17, 10, 2, 22, 5, 16, 11, 3, 6, 21, 13, 20, 18, 8, 14},
	{1, 21, 19, 17, 15, 23, 10, 6, 9, 12, 11, 0, 4, 3, 8, 22, 7, 14, 16, 20, 18, 5, 13, 2},
	{4, 9, 22, 12, 23, 11, 7, 5, 6, 2, 21, 20, 18, 14, 1, 10, 3, 15, 13, 17, 16, 19, 8, 0},
	{1, 2, 3, 10, 17, 5, 4, 22, 12, 20, 14, 9, 0, 18, 23, 15, 7, 13, 21, 11, 8, 19, 16, 6},
	{20, 23, 0, 19, 8, 18, 11, 22, 15, 14, 6, 2, 4, 12, 13, 3, 17, 7, 21, 16, 1, 9, 5, 10},
	{23, 10, 17, 19, 9, 14, 6, 7, 16, 12, 15, 18, 0, 4, 11, 2, 1, 3, 8, 5, 20, 22, 13, 21},
	{15, 21, 6, 18, 11, 22, 8, 4, 1, 7, 19, 16, 5, 20, 3, 10, 14, 2, 17, 12, 0, 9, 23, 13},
	{14, 17, 10, 9, 1, 8, 11, 7, 23, 15, 0, 5, 20, 19, 2, 16, 13, 3, 6, 18, 22, 4, 12, 21},
	{19, 15, 6, 22, 0, 20, 23, 11, 17, 14, 13, 16, 10, 1, 21, 9, 2, 12, 4, 7, 18, 5, 3, 8},
	{6, 4, 19, 16, 21, 22, 23, 9, 8, 20, 3, 10, 11, 12, 18, 5, 14, 2, 13, 1, 7, 15, 0, 17},
	{3, 18, 22, 8, 6, 1, 2, 0, 12, 14, 16, 4, 7, 9, 5, 13, 23, 17, 21, 20, 19, 10, 11, 15},
};
#endif

const u16 gSwarmTableLength = NELEMS(gSwarmTable);
