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
    {3, 3, SPECIES_POOCHYENA},
    {3, 3, SPECIES_HOOTHOOT},
    {3, 3, SPECIES_KRICKETOT},
    {3, 3, SPECIES_KRICKETOT},
    {2, 2, SPECIES_HOPPIP},
    {2, 2, SPECIES_HOPPIP},
    {3, 3, SPECIES_POOCHYENA},
    {3, 3, SPECIES_HOOTHOOT},
    {4, 4, SPECIES_SPINARAK},
    {4, 4, SPECIES_SEEDOT},
    {5, 5, SPECIES_SPINARAK},
    {4, 4, SPECIES_SEEDOT},
};

const struct WildPokemonInfo gRoute29_LandMonsInfoNight = {21, gRoute29_LandMonsNight};

const struct WildPokemon gRoute30_LandMonsNight[] =
{
    {3, 3, SPECIES_RATTATA_A},
    {3, 3, SPECIES_SPEAROW},
    {4, 4, SPECIES_ZIGZAGOON_G},
    {4, 4, SPECIES_ZIGZAGOON_G},
    {2, 2, SPECIES_WINGULL},
    {2, 2, SPECIES_WINGULL},
    {5, 5, SPECIES_RATTATA_A},
    {5, 5, SPECIES_SPEAROW},
    {4, 4, SPECIES_WURMPLE},
    {4, 4, SPECIES_WEEDLE},
    {5, 5, SPECIES_WURMPLE},
    {5, 5, SPECIES_WEEDLE},
};

const struct WildPokemonInfo gRoute30_LandMonsInfoNight = {21, gRoute30_LandMonsNight};

const struct WildPokemon gRoute31_LandMonsNight[] =
{
    {3, 6, SPECIES_NIDORAN_M},
    {4, 6, SPECIES_CACNEA},
    {3, 6, SPECIES_SURSKIT},
    {4, 6, SPECIES_SURSKIT},
    {4, 6, SPECIES_SKITTY},
    {4, 7, SPECIES_SKITTY},
    {4, 7, SPECIES_NIDORAN_M},
    {5, 7, SPECIES_CACNEA},
    {5, 7, SPECIES_ODDISH},
    {5, 7, SPECIES_MANTYKE},
    {5, 7, SPECIES_ODDISH},
    {5, 7, SPECIES_MANTYKE},
};

const struct WildPokemonInfo gRoute31_LandMonsInfoNight = {21, gRoute31_LandMonsNight};

const struct WildPokemon gSprout_Tower_LandMonsNight[] =

{
    {3, 6, SPECIES_GASTLY},
    {3, 6, SPECIES_DUSKULL},
    {4, 6, SPECIES_GASTLY},
    {4, 6, SPECIES_DUSKULL},
    {5, 7, SPECIES_BRONZOR},
    {6, 8, SPECIES_MURKROW},
    {6, 8, SPECIES_BRONZOR},
    {5, 8, SPECIES_MURKROW},
    {5, 8, SPECIES_ELEKID},
    {5, 8, SPECIES_MAGBY},
    {6, 8, SPECIES_ELEKID},
    {6, 8, SPECIES_MAGBY},
};

const struct WildPokemonInfo gSprout_Tower_LandMonsInfoNight = {6, gSprout_Tower_LandMonsNight};

const struct WildPokemon gRoute32_LandMonsNight[] =

{
    {7, 9, SPECIES_SHINX},
    {7, 9, SPECIES_POLIWAG},
    {7, 9, SPECIES_NATU},
    {7, 9, SPECIES_NATU},
    {8, 10, SPECIES_BUNEARY},
    {8, 10, SPECIES_BUNEARY},
    {8, 10, SPECIES_SHINX},
    {8, 10, SPECIES_POLIWAG},
    {9, 11, SPECIES_WYNAUT},
    {9, 11, SPECIES_PICHU},
    {9, 11, SPECIES_WYNAUT},
    {10, 12, SPECIES_PICHU},
};

const struct WildPokemonInfo gRoute32_LandMonsInfoNight = {21,gRoute32_LandMonsNight};

const struct WildPokemon gRoute33_LandMonsNight[] =

{
    {8, 10, SPECIES_HOUNDOUR},
    {8, 10, SPECIES_MACHOP},
    {8, 10, SPECIES_MINUN},
    {8, 10, SPECIES_MINUN},
    {9, 11, SPECIES_ILLUMISE},
    {9, 11, SPECIES_ILLUMISE},
    {9, 11, SPECIES_HOUNDOUR},
    {9, 11, SPECIES_MACHOP},
    {10, 12, SPECIES_MUNCHLAX},
    {10, 12, SPECIES_CLEFFA},
    {10, 12, SPECIES_MUNCHLAX},
    {10, 12, SPECIES_CLEFFA},
};

const struct WildPokemonInfo gRoute33_LandMonsInfoNight = {21,gRoute33_LandMonsNight};

const struct WildPokemon gRoute34_LandMonsNight[] =

{
    {10, 13, SPECIES_DITTO},
    {10, 13, SPECIES_DITTO},
    {10, 13, SPECIES_MIME_JR},
    {10, 13, SPECIES_PICHU},
    {13, 15, SPECIES_CHINGLING},
    {13, 15, SPECIES_BONSLY},
    {13, 15, SPECIES_CLEFFA},
    {13, 15, SPECIES_CLEFFA},
    {14, 16, SPECIES_WYNAUT},
    {14, 16, SPECIES_WYNAUT},
    {14, 16, SPECIES_MUNCHLAX},
    {14, 16, SPECIES_MUNCHLAX},
};

const struct WildPokemonInfo gRoute34_LandMonsInfoNight = {21,gRoute34_LandMonsNight};

const struct WildPokemon gRoute35_LandMonsNight[] =

{
    {15, 17, SPECIES_PONYTA_G},
    {15, 17, SPECIES_DROWZEE},
    {15, 17, SPECIES_ELECTRIKE},
    {15, 17, SPECIES_ELECTRIKE},
    {16, 18, SPECIES_TEDDIURSA},
    {16, 18, SPECIES_TEDDIURSA},
    {16, 18, SPECIES_PONYTA_G},
    {16, 18, SPECIES_DROWZEE},
    {17, 19, SPECIES_GLIGAR},
    {17, 19, SPECIES_LICKITUNG},
    {17, 19, SPECIES_GLIGAR},
    {17, 19, SPECIES_LICKITUNG},
};

const struct WildPokemonInfo gRoute35_LandMonsInfoNight = {21,gRoute35_LandMonsNight};

const struct WildPokemon gRoute36_LandMonsNight[] =

{
    {5, 7, SPECIES_VULPIX_A},
    {5, 7, SPECIES_SKORUPI},
    {5, 7, SPECIES_KAKUNA},
    {5, 7, SPECIES_KAKUNA},
    {6, 8, SPECIES_CASCOON},
    {6, 8, SPECIES_CASCOON},
    {6, 8, SPECIES_VULPIX_A},
    {6, 8, SPECIES_SKORUPI},
    {7, 9, SPECIES_BURMY},
    {7, 9, SPECIES_CHINGLING},
    {7, 9, SPECIES_BURMY},
    {7, 10, SPECIES_CHINGLING},
};

const struct WildPokemonInfo gRoute36_LandMonsInfoNight = {21,gRoute36_LandMonsNight};

const struct WildPokemon gIlex_Forest_LandMonsNight[] =

{
    {5, 12, SPECIES_SHROOMISH},
    {5, 12, SPECIES_VENONAT},
    {5, 12, SPECIES_BEEDRILL},
    {5, 12, SPECIES_BEEDRILL},
    {10, 13, SPECIES_DUSTOX},
    {10, 13, SPECIES_DUSTOX},
    {10, 13, SPECIES_SHROOMISH},
    {10, 13, SPECIES_VENONAT},
    {11, 14, SPECIES_FARFETCHD_G},
    {11, 14, SPECIES_PACHIRISU},
    {11, 14, SPECIES_FARFETCHD_G},
    {11, 14, SPECIES_PACHIRISU},
};

const struct WildPokemonInfo gIlex_Forest_LandMonsInfoNight = {10,gIlex_Forest_LandMonsNight};

const struct WildPokemon gDark_Cave_1F_LandMonsNight[] =

{
    {4, 6, SPECIES_GEODUDE_A},
    {4, 6, SPECIES_ZUBAT},
    {4, 6, SPECIES_WOOPER},
    {4, 6, SPECIES_DUNSPARCE},
    {5, 7, SPECIES_GEODUDE},
    {5, 7, SPECIES_ZUBAT},
    {5, 7, SPECIES_WOOPER},
    {5, 7, SPECIES_DUNSPARCE},
    {6, 8, SPECIES_CLEFFA},
    {6, 8, SPECIES_IGGLYBUFF},
    {6, 8, SPECIES_CLEFFA},
    {6, 8, SPECIES_IGGLYBUFF},
};

const struct WildPokemonInfo gDark_Cave_1F_LandMonsInfoNight = {8,gDark_Cave_1F_LandMonsNight};

const struct WildPokemon gDark_Cave_2F_LandMonsNight[] =

{
    {28, 32, SPECIES_WEEZING},
    {28, 32, SPECIES_MUK},
    {28, 32, SPECIES_GASTRODON},
    {28, 32, SPECIES_GASTRODON},
    {29, 33, SPECIES_MAGCARGO},
    {29, 33, SPECIES_CAMERUPT},
    {29, 33, SPECIES_SHUCKLE},
    {29, 33, SPECIES_PERRSERKER},
    {30, 34, SPECIES_CLEFABLE},
    {30, 34, SPECIES_WIGGLYTUFF},
    {30, 34, SPECIES_CLEFABLE},
    {30, 34, SPECIES_WIGGLYTUFF},
};

const struct WildPokemonInfo gDark_Cave_2F_LandMonsInfoNight = {8,gDark_Cave_2F_LandMonsNight};

const struct WildPokemon gUnion_Cave_1F_LandMonsNight[] =

{
    {8, 10, SPECIES_ZUBAT},
    {8, 10, SPECIES_GEODUDE},
    {8, 10, SPECIES_NOSEPASS},
    {8, 10, SPECIES_ONIX},
    {9, 11, SPECIES_GEODUDE},
    {9, 11, SPECIES_ZUBAT},
    {9, 11, SPECIES_NOSEPASS},
    {9, 11, SPECIES_ONIX},
    {10, 12, SPECIES_SANDSHREW},
    {10, 12, SPECIES_DIGLETT},
    {10, 12, SPECIES_SANDSHREW},
    {10, 12, SPECIES_DIGLETT},
};

const struct WildPokemonInfo gUnion_Cave_1F_LandMonsInfoNight = {8,gUnion_Cave_1F_LandMonsNight};

const struct WildPokemon gUnion_Cave_B1F_LandMonsNight[] =

{
    {8, 10, SPECIES_ZUBAT},
    {8, 10, SPECIES_GEODUDE},
    {8, 10, SPECIES_NOSEPASS},
    {8, 10, SPECIES_ONIX},
    {9, 11, SPECIES_GEODUDE},
    {9, 11, SPECIES_ZUBAT},
    {9, 11, SPECIES_NOSEPASS},
    {9, 11, SPECIES_ONIX},
    {10, 12, SPECIES_RHYHORN},
    {10, 12, SPECIES_ARON},
    {10, 12, SPECIES_RHYHORN},
    {10, 12, SPECIES_ARON},
};

const struct WildPokemonInfo gUnion_Cave_B1F_LandMonsInfoNight = {8,gUnion_Cave_B1F_LandMonsNight};

const struct WildPokemon gRoute36_Grotto_LandMonsNight[] =

{
    {7, 9, SPECIES_SHROOMISH},
    {7, 9, SPECIES_SLAKOTH},
    {7, 9, SPECIES_DRIFLOON},
    {7, 9, SPECIES_DRIFLOON},
    {8, 11, SPECIES_SHUPPET},
    {8, 11, SPECIES_SHUPPET},
    {8, 11, SPECIES_SHROOMISH},
    {8, 11, SPECIES_SHROOMISH},
    {10, 13, SPECIES_ZANGOOSE},
    {10, 13, SPECIES_MIME_JR},
    {10, 13, SPECIES_ZANGOOSE},
    {10, 13, SPECIES_MIME_JR},
};

const struct WildPokemonInfo gRoute36_Grotto_LandMonsInfoNight = {21,gRoute36_Grotto_LandMonsNight};

const struct WildPokemon gNational_Park_LandMonsNight[] =

{
    {12, 15, SPECIES_SKIPLOOM},
    {12, 15, SPECIES_DODUO},
    {12, 15, SPECIES_SKIPLOOM},
    {12, 15, SPECIES_DODUO},
    {13, 16, SPECIES_HIPPOPOTAS},
    {13, 16, SPECIES_BURMY_TRASH},
    {13, 16, SPECIES_HIPPOPOTAS},
    {13, 16, SPECIES_BURMY_TRASH},
    {14, 18, SPECIES_KIRLIA},
    {14, 18, SPECIES_CLEFAIRY},
    {14, 18, SPECIES_KIRLIA},
    {14, 18, SPECIES_CLEFAIRY},
};

const struct WildPokemonInfo gNational_Park_LandMonsInfoNight = {21,gNational_Park_LandMonsNight};

const struct WildPokemon gNational_Park_Contest_LandMonsNight[] =

{
    {12, 16, SPECIES_BEEDRILL},
    {12, 16, SPECIES_DUSTOX},
    {12, 16, SPECIES_KRICKETUNE},
    {12, 16, SPECIES_PARASECT},
    {13, 18, SPECIES_ILLUMISE},
    {13, 18, SPECIES_VENOMOTH},
    {13, 18, SPECIES_KRICKETUNE},
    {13, 18, SPECIES_VESPIQUEN},
    {15, 20, SPECIES_ARIADOS},
    {15, 20, SPECIES_PINSIR},
    {15, 20, SPECIES_ARIADOS},
    {15, 20, SPECIES_PINSIR},
};

const struct WildPokemonInfo gNational_Park_Contest_LandMonsInfoNight = {21,gNational_Park_Contest_LandMonsNight};

const struct WildPokemon gRoute37_LandMonsNight[] =

{
    {18, 22, SPECIES_NOCTOWL},
    {18, 22, SPECIES_LINOONE_G},
    {18, 22, SPECIES_LUXIO},
    {18, 22, SPECIES_LUXIO},
    {19, 23, SPECIES_MIGHTYENA},
    {19, 23, SPECIES_MIGHTYENA},
    {19, 23, SPECIES_NOCTOWL},
    {19, 23, SPECIES_LINOONE_G},
    {20, 24, SPECIES_GLOOM},
    {20, 24, SPECIES_WOBBUFFET},
    {20, 24, SPECIES_GLOOM},
    {20, 24, SPECIES_WOBBUFFET},
};

const struct WildPokemonInfo gRoute37_LandMonsInfoNight = {21,gRoute37_LandMonsNight};

const struct WildPokemon gRoute38_LandMonsNight[] =

{
    {21, 25, SPECIES_NIDORINO},
    {21, 25, SPECIES_POLIWHIRL},
    {21, 25, SPECIES_MACHOKE},
    {21, 25, SPECIES_MACHOKE},
    {22, 26, SPECIES_TANGELA},
    {22, 26, SPECIES_TANGELA},
    {22, 26, SPECIES_NIDORINO},
    {22, 26, SPECIES_POLIWHIRL},
    {23, 27, SPECIES_GLOOM},
    {23, 27, SPECIES_CHIMECHO},
    {23, 27, SPECIES_GLOOM},
    {23, 27, SPECIES_CHIMECHO},
};

const struct WildPokemonInfo gRoute38_LandMonsInfoNight = {21,gRoute38_LandMonsNight};

const struct WildPokemon gRoute39_LandMonsNight[] =

{
    {21, 25, SPECIES_JUMPLUFF},
    {21, 25, SPECIES_FEAROW},
    {21, 25, SPECIES_PERSIAN_A},
    {21, 25, SPECIES_PERSIAN_A},
    {22, 26, SPECIES_VIGOROTH},
    {22, 26, SPECIES_VIGOROTH},
    {22, 26, SPECIES_JUMPLUFF},
    {22, 26, SPECIES_FEAROW},
    {23, 27, SPECIES_TAUROS},
    {23, 27, SPECIES_CARNIVINE},
    {23, 27, SPECIES_TAUROS},
    {23, 27, SPECIES_CARNIVINE},
};

const struct WildPokemonInfo gRoute39_LandMonsInfoNight = {21,gRoute39_LandMonsNight};

const struct WildPokemon gRoute42_LandMonsNight[] =

{
    {21, 25, SPECIES_PRIMEAPE},
    {21, 25, SPECIES_BANETTE},
    {21, 25, SPECIES_DELCATTY},
    {21, 25, SPECIES_DELCATTY},
    {22, 26, SPECIES_MAROWAK_A},
    {22, 26, SPECIES_MAROWAK_A},
    {22, 26, SPECIES_PRIMEAPE},
    {22, 26, SPECIES_BANETTE},
    {23, 27, SPECIES_MR_MIME},
    {23, 27, SPECIES_TROPIUS},
    {23, 27, SPECIES_MR_MIME},
    {23, 27, SPECIES_TROPIUS},
};

const struct WildPokemonInfo gRoute42_LandMonsInfoNight = {21,gRoute42_LandMonsNight};

const struct WildPokemon gRoute43_LandMonsNight[] =

{
    {30, 34, SPECIES_XATU},
    {30, 34, SPECIES_DODRIO},
    {30, 34, SPECIES_URSARING},
    {30, 34, SPECIES_URSARING},
    {31, 35, SPECIES_CACTURNE},
    {31, 35, SPECIES_CACTURNE},
    {31, 35, SPECIES_XATU},
    {31, 35, SPECIES_DODRIO},
    {32, 36, SPECIES_SKARMORY},
    {32, 36, SPECIES_LUNATONE},
    {32, 36, SPECIES_SKARMORY},
    {32, 36, SPECIES_LUNATONE},
};

const struct WildPokemonInfo gRoute43_LandMonsInfoNight = {21,gRoute43_LandMonsNight};

const struct WildPokemon gLakeofRage_LandMonsNight[] =

{
    {30, 34, SPECIES_ABSOL},
    {30, 34, SPECIES_BRELOOM},
    {30, 34, SPECIES_CORSOLA_G},
    {30, 34, SPECIES_CORSOLA_G},
    {31, 35, SPECIES_WEEZING_G},
    {31, 35, SPECIES_WEEZING_G},
    {31, 35, SPECIES_ABSOL},
    {31, 35, SPECIES_BRELOOM},
    {32, 36, SPECIES_SIRFETCHD},
    {32, 36, SPECIES_SPIRITOMB},
    {32, 36, SPECIES_SIRFETCHD},
    {32, 36, SPECIES_SPIRITOMB},
};

const struct WildPokemonInfo gLakeofRage_LandMonsInfoNight = {21,gRoute43_LandMonsNight};

const struct WildPokemon gRoute44_LandMonsNight[] =

{
    {35, 39, SPECIES_MANECTRIC},
    {35, 39, SPECIES_SKUNTANK},
    {35, 39, SPECIES_LOPUNNY},
    {35, 39, SPECIES_LOPUNNY},
    {36, 40, SPECIES_HYPNO},
    {36, 40, SPECIES_HYPNO},
    {36, 40, SPECIES_MANECTRIC},
    {36, 40, SPECIES_SKUNTANK},
    {37, 41, SPECIES_VILEPLUME},
    {37, 41, SPECIES_RAICHU_A},
    {37, 41, SPECIES_VILEPLUME},
    {37, 41, SPECIES_RAICHU_A},
};

const struct WildPokemonInfo gRoute44_LandMonsInfoNight = {21,gRoute44_LandMonsNight};

const struct WildPokemon gRoute45_LandMonsNight[] =

{
    {36, 40, SPECIES_HAUNTER},
    {36, 40, SPECIES_NIDOKING},
    {36, 40, SPECIES_DRIFBLIM},
    {36, 40, SPECIES_DRIFBLIM},
    {37, 41, SPECIES_GLISCOR},
    {37, 41, SPECIES_GLISCOR},
    {37, 41, SPECIES_HAUNTER},
    {37, 41, SPECIES_NIDOKING},
    {38, 42, SPECIES_KANGASKHAN},
    {38, 42, SPECIES_EXPLOUD},
    {38, 42, SPECIES_KANGASKHAN},
    {38, 42, SPECIES_EXPLOUD},
};

const struct WildPokemonInfo gRoute45_LandMonsInfoNight = {21,gRoute45_LandMonsNight};

const struct WildPokemon gRoute46_LandMonsNight[] =

{
    {2, 4, SPECIES_MANKEY},
    {2, 4, SPECIES_BURMY_SANDY},
    {2, 4, SPECIES_BALTOY},
    {2, 4, SPECIES_BALTOY},
    {3, 5, SPECIES_MEOWTH_A},
    {3, 5, SPECIES_MEOWTH_A},
    {3, 5, SPECIES_MANKEY},
    {3, 5, SPECIES_BURMY_SANDY},
    {4, 6, SPECIES_RALTS},
    {4, 6, SPECIES_WYNAUT},
    {4, 6, SPECIES_RALTS},
    {4, 6, SPECIES_WYNAUT},
};

const struct WildPokemonInfo gRoute46_LandMonsInfoNight = {21,gRoute46_LandMonsNight};

const struct WildPokemon gRoute47_LandMonsNight[] =

{
    {41, 45, SPECIES_STARAPTOR},
    {41, 45, SPECIES_LUXRAY},
    {41, 45, SPECIES_RAPIDASH_G},
    {41, 45, SPECIES_RAPIDASH_G},
    {43, 47, SPECIES_HOUNDOOM},
    {43, 47, SPECIES_HOUNDOOM},
    {43, 47, SPECIES_STARAPTOR},
    {43, 47, SPECIES_LUXRAY},
    {45, 49, SPECIES_GALLADE},
    {45, 49, SPECIES_GARDEVOIR},
    {45, 50, SPECIES_GALLADE},
    {45, 50, SPECIES_GARDEVOIR},
};

const struct WildPokemonInfo gRoute47_LandMonsInfoNight = {21,gRoute47_LandMonsNight};

const struct WildPokemon gRoute48_LandMonsNight[] =

{
    {41, 45, SPECIES_DRAPION},
    {41, 45, SPECIES_NINETALES_A},
    {41, 45, SPECIES_POLIWRATH},
    {41, 45, SPECIES_POLIWRATH},
    {43, 47, SPECIES_SHUCKLE},
    {43, 47, SPECIES_SHUCKLE},
    {43, 47, SPECIES_DRAPION},
    {43, 47, SPECIES_NINETALES_A},
    {45, 50, SPECIES_LICKILICKY},
    {45, 50, SPECIES_SNORLAX},
    {45, 50, SPECIES_LICKILICKY},
    {45, 50, SPECIES_SNORLAX},
};

const struct WildPokemonInfo gRoute48_LandMonsInfoNight = {21,gRoute48_LandMonsNight};

const struct WildPokemon gIcePath_1F_LandMonsNight[] =

{
    {35, 39, SPECIES_GOLEM},
    {35, 39, SPECIES_CROBAT},
    {35, 39, SPECIES_DUGTRIO},
    {35, 39, SPECIES_ABOMASNOW},
    {36, 40, SPECIES_GOLEM},
    {36, 40, SPECIES_CROBAT},
    {36, 40, SPECIES_DUGTRIO},
    {36, 40, SPECIES_ABOMASNOW},
    {37, 41, SPECIES_SANDSLASH},
    {37, 41, SPECIES_RHYDON},
    {37, 41, SPECIES_SANDSLASH},
    {37, 41, SPECIES_RHYDON},
};

const struct WildPokemonInfo gIcePath_1F_LandMonsInfoNight = {8,gIcePath_1F_LandMonsNight};

const struct WildPokemon gIcePath_2F_LandMonsNight[] =

{
    {35, 39, SPECIES_GOLEM},
    {35, 39, SPECIES_CROBAT},
    {35, 39, SPECIES_DUGTRIO},
    {35, 39, SPECIES_ABOMASNOW},
    {36, 40, SPECIES_GOLEM},
    {36, 40, SPECIES_CROBAT},
    {36, 40, SPECIES_DUGTRIO},
    {36, 40, SPECIES_ABOMASNOW},
    {37, 41, SPECIES_MR_MIME_G},
    {37, 41, SPECIES_SANDSLASH_A},
    {37, 41, SPECIES_MR_MIME_G},
    {37, 41, SPECIES_SANDSLASH_A},
};

const struct WildPokemonInfo gIcePath_2F_LandMonsInfoNight = {8,gIcePath_2F_LandMonsNight};

const struct WildPokemon gIcePath_3F_LandMonsNight[] =

{
    {35, 39, SPECIES_GOLEM},
    {35, 39, SPECIES_CROBAT},
    {35, 39, SPECIES_DUGTRIO_A},
    {35, 39, SPECIES_ABOMASNOW},
    {36, 40, SPECIES_GOLEM},
    {36, 40, SPECIES_CROBAT},
    {36, 40, SPECIES_DUGTRIO_A},
    {36, 40, SPECIES_ABOMASNOW},
    {37, 41, SPECIES_SLOWBRO_G},
    {37, 41, SPECIES_SLOWKING_G},
    {37, 41, SPECIES_SLOWBRO_G},
    {37, 41, SPECIES_SLOWKING_G},
};

const struct WildPokemonInfo gIcePath_3F_LandMonsInfoNight = {8,gIcePath_3F_LandMonsNight};

const struct WildPokemon gIcePath_4F_LandMonsNight[] =

{
    {35, 39, SPECIES_GOLEM},
    {35, 39, SPECIES_CROBAT},
    {35, 39, SPECIES_DUGTRIO_A},
    {35, 39, SPECIES_ABOMASNOW},
    {36, 40, SPECIES_GOLEM},
    {36, 40, SPECIES_CROBAT},
    {36, 40, SPECIES_DUGTRIO_A},
    {36, 40, SPECIES_ABOMASNOW},
    {37, 41, SPECIES_GLALIE},
    {37, 41, SPECIES_FROSLASS},
    {37, 41, SPECIES_GLALIE},
    {37, 41, SPECIES_FROSLASS},
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
        .mapGroup = MAP_GROUP(SAFFRON_CITY_CLASSIC),
        .mapNum = MAP_NUM(SAFFRON_CITY_CLASSIC),
        .landMonsInfo = &gLakeofRage_LandMonsInfoNight,
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
