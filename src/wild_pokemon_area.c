#include "defines.h"
#include "defines_battle.h"
#include "../include/event_data.h"
#include "../include/wild_encounter.h"
#include "../include/wild_pokemon_area.h"

#include "../include/constants/maps.h"
#include "../include/constants/region_map_sections.h"
#include "../include/constants/vars.h"

#include "../include/new/dns.h"

// Taken data from decomp: https://github.com/pret/pokefirered/blob/master/src/wild_pokemon_area.c

extern const struct WildPokemonHeader gWildMonMorningHeaders[];
extern const struct WildPokemonHeader gWildMonNightHeaders[];

static const u16 sDexAreas_Kanto[][2] = {
    { MAPSEC_PALLET_TOWN,          1 },
    { MAPSEC_VIRIDIAN_CITY,        2 },
    { MAPSEC_PEWTER_CITY,          3 },
    { MAPSEC_CERULEAN_CITY,        4 },
    { MAPSEC_LAVENDER_TOWN,        5 },
    { MAPSEC_VERMILION_CITY,       6 },
    { MAPSEC_CELADON_CITY,         7 },
    { MAPSEC_FUCHSIA_CITY,         8 },
    { MAPSEC_CINNABAR_ISLAND,      9 },
    { MAPSEC_INDIGO_PLATEAU,      10 },
    { MAPSEC_SAFFRON_CITY,        11 },
    { MAPSEC_ROUTE_4_FLYDUP,      15 },
    { MAPSEC_ROUTE_10_FLYDUP,     21 },
    { MAPSEC_ROUTE_1,             12 },
    { MAPSEC_ROUTE_2,             13 },
    { MAPSEC_ROUTE_3,             14 },
    { MAPSEC_ROUTE_4,             15 },
    { MAPSEC_ROUTE_5,             16 },
    { MAPSEC_ROUTE_6,             17 },
    { MAPSEC_ROUTE_7,             18 },
    { MAPSEC_ROUTE_8,             19 },
    { MAPSEC_ROUTE_9,             20 },
    { MAPSEC_ROUTE_10,            21 },
    { MAPSEC_ROUTE_11,            22 },
    { MAPSEC_ROUTE_12,            23 },
    { MAPSEC_ROUTE_13,            24 },
    { MAPSEC_ROUTE_14,            25 },
    { MAPSEC_ROUTE_15,            26 },
    { MAPSEC_ROUTE_16,            27 },
    { MAPSEC_ROUTE_17,            28 },
    { MAPSEC_ROUTE_18,            29 },
    { MAPSEC_ROUTE_19,            30 },
    { MAPSEC_ROUTE_20,            31 },
    { MAPSEC_ROUTE_21,            32 },
    { MAPSEC_ROUTE_22,            33 },
    { MAPSEC_ROUTE_23,            34 },
    { MAPSEC_ROUTE_24,            35 },
    { MAPSEC_ROUTE_25,            36 },
    { MAPSEC_VIRIDIAN_FOREST,     37 },
    { MAPSEC_MT_MOON,             39 },
    { MAPSEC_S_S_ANNE,             6 },
    { MAPSEC_UNDERGROUND_PATH,    11 },
    { MAPSEC_UNDERGROUND_PATH_2,  11 },
    { MAPSEC_DIGLETTS_CAVE,       38 },
    { MAPSEC_KANTO_VICTORY_ROAD,  47 },
    { MAPSEC_ROCKET_HIDEOUT,       7 },
    { MAPSEC_SILPH_CO,            11 },
    { MAPSEC_POKEMON_MANSION,     46 },
    { MAPSEC_KANTO_SAFARI_ZONE,   44 },
    { MAPSEC_POKEMON_LEAGUE,      47 },
    { MAPSEC_ROCK_TUNNEL,         41 },
    { MAPSEC_SEAFOAM_ISLANDS,     45 },
    { MAPSEC_POKEMON_TOWER,       43 },
    { MAPSEC_CERULEAN_CAVE,       40 },
    { MAPSEC_POWER_PLANT,         42 }
};

static const u16 sDexAreas_Sevii1[][2] = {
	{ MAPSEC_KINDLE_ROAD,    55 },
	{ MAPSEC_TREASURE_BEACH, 56 },
	{ MAPSEC_ONE_ISLAND,     48 },
	{ MAPSEC_MT_EMBER,       72 }    
};

static const u16 sDexAreas_Sevii2[][2] = {
	{ MAPSEC_CAPE_BRINK, 57 },
	{ MAPSEC_TWO_ISLAND, 49 }    
};

static const u16 sDexAreas_Sevii3[][2] = {
	{ MAPSEC_BOND_BRIDGE,     58 },
	{ MAPSEC_THREE_ISLE_PORT, 59 },
	{ MAPSEC_THREE_ISLAND,    50 },
	{ MAPSEC_BERRY_FOREST,    73 },
	{ MAPSEC_THREE_ISLE_PATH, 59 }    
};

static const u16 sDexAreas_Sevii4[][2] = {
	{ MAPSEC_FOUR_ISLAND,  51 },
	{ MAPSEC_ICEFALL_CAVE, 74 }    
};

static const u16 sDexAreas_Sevii5[][2] = {
	{ MAPSEC_RESORT_GORGEOUS,  60 },
	{ MAPSEC_WATER_LABYRINTH,  61 },
	{ MAPSEC_FIVE_ISLE_MEADOW, 62 },
	{ MAPSEC_MEMORIAL_PILLAR,  63 },
	{ MAPSEC_FIVE_ISLAND,      52 },
	{ MAPSEC_ROCKET_WAREHOUSE, 62 },
	{ MAPSEC_LOST_CAVE,        75 }    
};

static const u16 sDexAreas_Sevii6[][2] = {
	{ MAPSEC_OUTCAST_ISLAND, 64 },
	{ MAPSEC_GREEN_PATH,     65 },
	{ MAPSEC_WATER_PATH,     66 },
	{ MAPSEC_RUIN_VALLEY,    67 },
	{ MAPSEC_DOTTED_HOLE,    78 },
	{ MAPSEC_PATTERN_BUSH,   77 },
	{ MAPSEC_ALTERING_CAVE,  76 }    
};

static const u16 sDexAreas_Sevii7[][2] = {
	{ MAPSEC_TRAINER_TOWER,   68 },
	{ MAPSEC_CANYON_ENTRANCE, 69 },
	{ MAPSEC_SEVAULT_CANYON,  70 },
	{ MAPSEC_TANOBY_RUINS,    71 },
	{ MAPSEC_MONEAN_CHAMBER,  79 },
	{ MAPSEC_LIPTOO_CHAMBER,  79 },
	{ MAPSEC_WEEPTH_CHAMBER,  79 },
	{ MAPSEC_DILFORD_CHAMBER, 79 },
	{ MAPSEC_SCUFIB_CHAMBER,  79 },
	{ MAPSEC_RIXY_CHAMBER,    79 },
	{ MAPSEC_VIAPOIS_CHAMBER, 79 }    
};

static const struct
{
    const u16 (*table)[2];
    s32 count;
} sSeviiDexAreas[] = {
    { sDexAreas_Sevii1, ARRAY_COUNT(sDexAreas_Sevii1) },
    { sDexAreas_Sevii2, ARRAY_COUNT(sDexAreas_Sevii2) },
    { sDexAreas_Sevii3, ARRAY_COUNT(sDexAreas_Sevii3) },
    { sDexAreas_Sevii4, ARRAY_COUNT(sDexAreas_Sevii4) },
    { sDexAreas_Sevii5, ARRAY_COUNT(sDexAreas_Sevii5) },
    { sDexAreas_Sevii6, ARRAY_COUNT(sDexAreas_Sevii6) },
    { sDexAreas_Sevii7, ARRAY_COUNT(sDexAreas_Sevii7) }
};

// Scans for the given species and populates 'subsprites' with the area markers.
// Returns the number of areas where the species was found.
// Revised for time-based and CFRU injected encounters.
s32 GetSpeciesPokedexAreaMarkers(u16 species, struct Subsprite * subsprites)
{
    s32 areaCount;
    s32 mapSecId;
    u16 dexArea;
    s32 tableIndex;
    s32 seviiAreas = GetUnlockedSeviiAreas();
    s32 alteringCaveCount = 0;
    s32 alteringCaveNum = VarGet(VAR_ALTERING_CAVE_WILD_SET);
    u32 i, j;

    const struct WildPokemonHeader* headerTable = NULL;
    
    if (GetRoamerIndex(species) >= 0)
        return GetRoamerPokedexAreaMarkers(species, subsprites);

    if (alteringCaveNum >= NUM_ALTERING_CAVE_TABLES){
        alteringCaveNum = 0;
    }

	if (IsNightTime() || IsEvening()){
		headerTable = gWildMonNightHeaders;
    }else if (IsMorning() || IsDayTime()){
		headerTable = gWildMonMorningHeaders;
    }

    for (i = 0, areaCount = 0; headerTable[i].mapGroup != MAP_GROUP(UNDEFINED); i++)
    {
        mapSecId = GetMapSecIdFromWildMonHeader(&headerTable[i]);
        if (mapSecId == MAPSEC_ALTERING_CAVE)
        {
            alteringCaveCount++;
            if (alteringCaveNum != alteringCaveCount - 1)
                continue;
        }
        if (IsSpeciesOnMap(&headerTable[i], species))
        {
            // Search for all dex areas associated with this MAPSEC.
            // In the vanilla game each MAPSEC only has at most one DEX_AREA.
            tableIndex = 0;
            while (FindDexAreaByMapSec(mapSecId, sDexAreas_Kanto, ARRAY_COUNT(sDexAreas_Kanto), &tableIndex, &dexArea))
            {
                if (dexArea != DEX_AREA_NONE)
                    GetAreaMarkerSubsprite(areaCount++, dexArea, subsprites);
            }

            for (j = 0; j < ARRAY_COUNT(sSeviiDexAreas); j++)
            {
                if ((seviiAreas >> j) & 1)
                {
                    // Search for all dex areas associated with this MAPSEC in this unlocked Sevii Island
                    tableIndex = 0;
                    while (FindDexAreaByMapSec(mapSecId, sSeviiDexAreas[j].table, sSeviiDexAreas[j].count, &tableIndex, &dexArea))
                    {
                        if (dexArea != DEX_AREA_NONE)
                            GetAreaMarkerSubsprite(areaCount++, dexArea, subsprites);
                    }
                }
            }
        }
    }

    return areaCount;
}
