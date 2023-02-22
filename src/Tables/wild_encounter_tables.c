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

const u16 gSwarmTableLength = NELEMS(gSwarmTable);
