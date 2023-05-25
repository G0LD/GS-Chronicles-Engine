#pragma once

#include "global.h"

#define DEX_AREA_NONE 0
#define NUM_ALTERING_CAVE_TABLES 9

void __attribute__((long_call)) GetAreaMarkerSubsprite(s32 i, s32 whichArea, struct Subsprite * subsprites);
u8 __attribute__((long_call)) GetUnlockedSeviiAreas(void);
s32 __attribute__((long_call)) GetRoamerIndex(u16 species);
s32 __attribute__((long_call)) GetRoamerPokedexAreaMarkers(u16 species, struct Subsprite * subsprites);

bool32 __attribute__((long_call)) IsSpeciesInEncounterTable(const struct WildPokemonInfo *info, s32 species, s32 count);
bool32 __attribute__((long_call)) IsSpeciesOnMap(const struct WildPokemonHeader *header, s32 species);
u16 __attribute__((long_call)) GetMapSecIdFromWildMonHeader(const struct WildPokemonHeader *header);
bool32 __attribute__((long_call)) FindDexAreaByMapSec(u16 mapSecId, const u16 (*table)[2], s32 count, s32 * index, u16 * dexArea);

s32 GetSpeciesPokedexAreaMarkers(u16 species, struct Subsprite * subsprites);
