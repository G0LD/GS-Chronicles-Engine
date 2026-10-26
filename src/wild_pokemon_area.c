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
    { MAPSEC_NEW_BARK_TOWN,        1 },
    { MAPSEC_CHERRYGROVE_CITY,     2 },
    { MAPSEC_VIOLET_CITY,          3 },
    { MAPSEC_AZALEA_TOWN,          4 },
    { MAPSEC_GOLDENROD_CITY,       5 },
    { MAPSEC_ECRUTEAK_CITY,        6 },
    { MAPSEC_OLIVINE_CITY,         7 },
    { MAPSEC_CIANWOOD_CITY,        8 },
    { MAPSEC_MAHOGANY_TOWN,        9 },
    { MAPSEC_LAKE_OF_RAGE,        10 },
    { MAPSEC_BLACKTHORN_CITY,     11 },
    { MAPSEC_POKEMON_LEAGUE,      12 },
    { MAPSEC_ROUTE_29,            13 },
    { MAPSEC_ROUTE_30,            14 },
    { MAPSEC_ROUTE_31,            15 },
    { MAPSEC_ROUTE_32,            16 },
    { MAPSEC_ROUTE_32_FLYDUP,     16 },
    { MAPSEC_ROUTE_33,            17 },
    { MAPSEC_ROUTE_34,            18 },
    { MAPSEC_ROUTE_35,            19 },
    { MAPSEC_ROUTE_36,            20 },
    { MAPSEC_ROUTE_37,            21 },
    { MAPSEC_ROUTE_38,            22 },
    { MAPSEC_ROUTE_39,            23 },
    { MAPSEC_ROUTE_40,            24 },
    { MAPSEC_ROUTE_41,            25 },
    { MAPSEC_ROUTE_42,            26 },
    { MAPSEC_ROUTE_43,            27 },
    { MAPSEC_ROUTE_44,            28 },
    { MAPSEC_ROUTE_45,            29 },
    { MAPSEC_ROUTE_46,            30 },
    { MAPSEC_ROUTE_47,            31 },
    { MAPSEC_ROUTE_48,            32 },
    { MAPSEC_BELL_TOWER,          33 },
    { MAPSEC_DRAGONS_DEN,         34 },
    { MAPSEC_ROUTE_27,            35 },
    { MAPSEC_TOHJO_FALLS,         35 },
    { MAPSEC_ROUTE_28,            36 },
    { MAPSEC_MT_SILVER,           37 },
    { MAPSEC_MT_SILVER_CAVE,      37 },
    { MAPSEC_DARK_CAVE,           29 },
    { MAPSEC_ILEX_FOREST,         18 },
    { MAPSEC_S_S_AQUA,             7 },
    { MAPSEC_ROCKET_HQ,           38 },
    { MAPSEC_ICE_PATH,            28 },
    { MAPSEC_SPROUT_TOWER,         3 },
    { MAPSEC_JOHTO_VICTORY_ROAD,  32 },
    { MAPSEC_SLOWPOKE_WELL,        4 },
    { MAPSEC_GOLDENROD_TOWER,     39 },
    { MAPSEC_BURNED_TOWER,         6 },
    { MAPSEC_NATIONAL_PARK,       19 },
    { MAPSEC_UNION_CAVE,          15 },
    { MAPSEC_WHIRL_ISLANDS,       25 },
    { MAPSEC_RUINS_OF_ALPH,       40 },
    { MAPSEC_MT_MORTAR,           26 },
    { MAPSEC_GOLDENROD_SEWERS,     5 },
    { MAPSEC_CLIFF_CAVE,          31 },
    { MAPSEC_LIGHTHOUSE,           7 }
};

static const u16 sDexAreas_Sevii1[][2] = {
	{ MAPSEC_PALLET_TOWN,         41 },
    { MAPSEC_VIRIDIAN_CITY,       42 },
    { MAPSEC_PEWTER_CITY,         43 },
    { MAPSEC_CERULEAN_CITY,       44 },
    { MAPSEC_VERMILION_CITY,      45 },
    { MAPSEC_CELADON_CITY,        46 },
    { MAPSEC_LAVENDER_TOWN,       47 },
    { MAPSEC_FUCHSIA_CITY,        48 },
    { MAPSEC_CINNABAR_ISLAND,     49 },
    { MAPSEC_INDIGO_PLATEAU,      50 },
    { MAPSEC_SAFFRON_CITY,        51 },
    { MAPSEC_ROUTE_1,             52 },
    { MAPSEC_ROUTE_2,             53 },
    { MAPSEC_ROUTE_3,             54 },
    { MAPSEC_ROUTE_4,             55 },
    { MAPSEC_ROUTE_5,             56 },
    { MAPSEC_ROUTE_6,             57 },
    { MAPSEC_ROUTE_7,             58 },
    { MAPSEC_ROUTE_8,             59 },
    { MAPSEC_ROUTE_9,             60 },
    { MAPSEC_ROUTE_10,            61 },
    { MAPSEC_ROUTE_11,            62 },
    { MAPSEC_ROUTE_12,            63 },
    { MAPSEC_ROUTE_13,            64 },
    { MAPSEC_ROUTE_14,            65 },
    { MAPSEC_ROUTE_15,            66 },
    { MAPSEC_ROUTE_16,            67 },
    { MAPSEC_ROUTE_17,            68 },
    { MAPSEC_ROUTE_18,            69 },
    { MAPSEC_ROUTE_19,            70 },
    { MAPSEC_ROUTE_20,            71 },
    { MAPSEC_ROUTE_21,            72 },
    { MAPSEC_ROUTE_22,            73 },
    { MAPSEC_ROUTE_23,            74 },
    { MAPSEC_ROUTE_24,            75 },
    { MAPSEC_ROUTE_25,            76 },
    { MAPSEC_ROUTE_26,            77 },
    { MAPSEC_VIRIDIAN_FOREST,     53 },
    { MAPSEC_MT_MOON,             54 },
    { MAPSEC_CERULEAN_CAVE,       44 },
    { MAPSEC_DIGLETTS_CAVE,       62 },
    { MAPSEC_ROCK_TUNNEL,         61 },
    { MAPSEC_KANTO_SAFARI_ZONE,   48 },
    { MAPSEC_SEAFOAM_ISLANDS,     71 },
    { MAPSEC_MEMORIAL_HOUSE,      47 },
    { MAPSEC_KANTO_VICTORY_ROAD,  74 }
};

static const u16 sDexAreas_Sevii2[][2] = {
	{ MAPSEC_SINJOH_RUINS, 78 },
	{ MAPSEC_UNUSED_C4,    79 }    
};

static const u16 sDexAreas_Sevii3[][2] = {
	{ MAPSEC_SINJOH_RUINS, 78 },
	{ MAPSEC_UNUSED_C4,    79 }       
};

static const u16 sDexAreas_Sevii4[][2] = {
	{ MAPSEC_SINJOH_RUINS, 78 },
	{ MAPSEC_UNUSED_C4,    79 }       
};

static const u16 sDexAreas_Sevii5[][2] = {
	{ MAPSEC_SINJOH_RUINS, 78 },
	{ MAPSEC_UNUSED_C4,    79 }      
};

static const u16 sDexAreas_Sevii6[][2] = {
	{ MAPSEC_SINJOH_RUINS, 78 },
	{ MAPSEC_UNUSED_C4,    79 }       
};

static const u16 sDexAreas_Sevii7[][2] = {
	{ MAPSEC_SINJOH_RUINS, 78 },
	{ MAPSEC_UNUSED_C4,    79 }        
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

// Music region index: 0 = Johto, 1 = Kanto, 2-7 = other area tables.
u8 GetBattleMusicDexRegion(u16 mapSection)
{
    u32 i, j;

    for (i = 0; i < ARRAY_COUNT(sDexAreas_Kanto); ++i)
    {
        if (sDexAreas_Kanto[i][0] == mapSection)
            return 0; // Johto
    }

    for (i = 0; i < ARRAY_COUNT(sSeviiDexAreas); ++i)
    {
        for (j = 0; j < (u32)sSeviiDexAreas[i].count; ++j)
        {
            if (sSeviiDexAreas[i].table[j][0] == mapSection)
                return i + 1; // Kanto and Sevii 2-7
        }
    }

    return 0xFF;
}

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
        if (mapSecId == MAPSEC_UNUSED_C4)
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
