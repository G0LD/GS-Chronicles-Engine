#include "../defines_battle.h"
#include "../../include/battle.h"
#include "../../include/constants/trainer_classes.h"
#include "../../include/constants/trainers.h"
#include "../../include/constants/opponents.h"
#include "../../include/constants/battle_ai.h"
#include "../../include/constants/items.h"
#include "../../include/easy_text.h"
#include "../../include/new/build_pokemon.h"
#include "../../include/new/build_pokemon_2.h"



const struct TrainerMonNoItemDefaultMoves sParty_PasserbyBoyChikorita[] = {
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_CHIKORITA,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PasserbyBoyCyndaquil[] = {
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_CYNDAQUIL,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PasserbyBoyTotodile[] = {
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_TOTODILE,
    },
};

const struct TrainerMonNoItemCustomMoves sParty_KrisEthanRoute29[] = {
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_SHINX,
        .moves = {
            MOVE_TACKLE,
            MOVE_LEER,
            MOVE_CHARGE,
            MOVE_NONE,
        },
        .ability = 1
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdMick[] = {
    {
        .iv = 0,
        .lvl = 7,
        .species = SPECIES_AIPOM,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SageBaseTeam1[] = {
    {
        .iv = 0,
        .lvl = 4,
        .species = SPECIES_BELLSPROUT,
    },
    {
        .iv = 0,
        .lvl = 4,
        .species = SPECIES_BELLSPROUT,
    },
    {
        .iv = 0,
        .lvl = 4,
        .species = SPECIES_BELLSPROUT,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SageBaseTeam2[] = {
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_BELLSPROUT,
    },
    {
        .iv = 0,
        .lvl = 6,
        .species = SPECIES_BELLSPROUT,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SageBaseTeam3[] = {
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_BELLSPROUT,
    },
    {
        .iv = 0,
        .lvl = 6,
        .species = SPECIES_BELLSPROUT,
    },
    {
        .iv = 0,
        .lvl = 7,
        .species = SPECIES_HOOTHOOT,
    },
};

const struct TrainerMonNoItemCustomMoves sParty_ElderLi[] = {
    {
        .iv = 0,
        .lvl = 8,
        .species = SPECIES_BELLSPROUT,
        .moves = {
            MOVE_VINEWHIP,
            MOVE_GROWTH,
            MOVE_RETURN,
            MOVE_NONE,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_HOOTHOOT,
        .moves = {
            MOVE_TACKLE,
            MOVE_FORESIGHT,
            MOVE_PECK,
            MOVE_HYPNOSIS,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 9,
        .species = SPECIES_GASTLY,
        .moves = {
            MOVE_HYPNOSIS,
            MOVE_LICK,
            MOVE_SPITE,
            MOVE_NONE,
        },
        .ability = 1
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_YoungsterJoey[] = {
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_RATTATA,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_YoungsterMikey[] = {
    {
        .iv = 0,
        .lvl = 3,
        .species = SPECIES_LEDYBA,
    },
    {
        .iv = 0,
        .lvl = 4,
        .species = SPECIES_SENTRET,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherDon[] = {
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_CATERPIE,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_WEEDLE,
    },
};

const struct TrainerMonNoItemCustomMoves sParty_LassChika[] = {
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_IGGLYBUFF,
        .moves = {
            MOVE_SING,
            MOVE_RETURN,
            MOVE_DIZZYPUNCH,
            MOVE_NONE,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_CLEFFA,
        .moves = {
            MOVE_CHARM,
            MOVE_RETURN,
            MOVE_DIZZYPUNCH,
            MOVE_NONE,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_MIME_JR,
        .moves = {
            MOVE_COPYCAT,
            MOVE_RETURN,
            MOVE_DIZZYPUNCH,
            MOVE_NONE,
        },
        .ability = 1
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherWade[] = {
    {
        .iv = 0,
        .lvl = 4,
        .species = SPECIES_KRICKETOT,
    },
    {
        .iv = 0,
        .lvl = 4,
        .species = SPECIES_SPINARAK,
    },
    {
        .iv = 0,
        .lvl = 4,
        .species = SPECIES_WURMPLE,
    },
    {
        .iv = 0,
        .lvl = 4,
        .species = SPECIES_BURMY,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperAbe[] = {
    {
        .iv = 0,
        .lvl = 9,
        .species = SPECIES_SPEAROW,
    },
    {
        .iv = 0,
        .lvl = 9,
        .species = SPECIES_STARLY,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperRyleigh[] = {
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_TAILLOW,
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_NATU,
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_SWABLU,
    },
};

const struct TrainerMonItemCustomMoves sParty_LeaderFalkner1[] = {
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_PIDGEY,
        .heldItem = ITEM_NONE,
        .moves = {
            MOVE_PLUCK,
            MOVE_SANDATTACK,
            MOVE_QUICKATTACK,
            MOVE_ROOST,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_HOOTHOOT,
        .heldItem = ITEM_ORAN_BERRY,
        .moves = {
            MOVE_PECK,
            MOVE_HYPNOSIS,
            MOVE_ROOST,
            MOVE_FORESIGHT,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_MURKROW,
        .heldItem = ITEM_NONE,
        .moves = {
            MOVE_PECK,
            MOVE_LEER,
            MOVE_ASTONISH,
            MOVE_NONE,
        },
        .ability = 1
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PicknickerDahlia[] = {
    {
        .iv = 0,
        .lvl = 9,
        .species = SPECIES_ELEKID,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacJim[] = {
    {
        .iv = 0,
        .lvl = 7,
        .species = SPECIES_CUBONE,
    },
    {
        .iv = 0,
        .lvl = 9,
        .species = SPECIES_LICKITUNG,
    },
};

const struct TrainerMonItemCustomMoves sParty_RocketGrunt1[] = {
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_MISDREAVUS,
        .heldItem = ITEM_ORAN_BERRY,
        .moves = {
            MOVE_PSYWAVE,
            MOVE_SCREECH,
            MOVE_SPITE,
            MOVE_ASTONISH,
        },
        .ability = 1
    },
};

const struct TrainerMonItemCustomMoves sParty_EthanRoute32[] = {
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_SPINARAK,
        .heldItem = ITEM_NONE,
        .moves = {
            MOVE_SCARYFACE,
            MOVE_BUGBITE,
            MOVE_ABSORB,
            MOVE_POISONSTING,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_SHINX,
        .heldItem = ITEM_NONE,
        .moves = {
            MOVE_LEER,
            MOVE_CHARGE,
            MOVE_BABYDOLLEYES,
            MOVE_SPARK,
        },
        .ability = 2
    },
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_GROWLITHE,
        .heldItem = ITEM_ORAN_BERRY,
        .moves = {
            MOVE_BITE,
            MOVE_HOWL,
            MOVE_FLAMECHARGE,
            MOVE_DIG,
        },
        .ability = 1
    },
};

const struct TrainerMonItemCustomMoves sParty_KrisRoute32[] = {
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_LEDYBA,
        .heldItem = ITEM_NONE,
        .moves = {
            MOVE_COMETPUNCH,
            MOVE_SUPERSONIC,
            MOVE_ATTRACT,
            MOVE_DRAINPUNCH,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_SHINX,
        .heldItem = ITEM_NONE,
        .moves = {
            MOVE_LEER,
            MOVE_CHARGE,
            MOVE_BABYDOLLEYES,
            MOVE_SPARK,
        },
        .ability = 2
    },
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_VULPIX,
        .heldItem = ITEM_ORAN_BERRY,
        .moves = {
            MOVE_BITE,
            MOVE_CONFUSERAY,
            MOVE_INCINERATE,
            MOVE_DIG,
        },
        .ability = 1
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_YoungsterJeffrey[] = {
    {
        .iv = 0,
        .lvl = 9,
        .species = SPECIES_ZIGZAGOON,
    },
    {
        .iv = 0,
        .lvl = 9,
        .species = SPECIES_ZIGZAGOON_G,
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_EKANS,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PicknickerRoxanne[] = {
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_MAREEP,
    },
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_NIDORAN_F,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_CamperBrawly[] = {
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_ELECTRIKE,
    },
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_NIDORAN_M,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_FishermanCole[] = {
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_BARBOACH,
    },
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_POLIWAG,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_FishermanRon[] = {
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 0,
        .lvl = 7,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 0,
        .lvl = 9,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_MAGIKARP,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_FishermanJarvis[] = {
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_GOLDEEN,
    },
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_CHINCHOU,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_LassRiley[] = {
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_SKITTY,
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_CUBONE,
    },
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_MEOWTH_A,
    },
};

const struct TrainerMonNoItemCustomMoves sParty_PsychicJenny[] = {
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_BALTOY,
        .moves = {
            MOVE_ROCKTOMB,
            MOVE_CONFUSION,
            MOVE_RAPIDSPIN,
            MOVE_MUDSLAP,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_STANTLER,
        .moves = {
            MOVE_HYPNOSIS,
            MOVE_ASTONISH,
            MOVE_HEADBUTT,
            MOVE_NIGHTMARE,
        },
        .ability = 1
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperJack[] = {
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_STARLY,
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_WINGULL,
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_DODUO,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt2[] = {
    {
        .iv = 0,
        .lvl = 9,
        .species = SPECIES_GRIMER,
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_GRIMER_A,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_FireBreatherKeane[] = {
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_MAGBY,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_HikerRussel[] = {
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_SANDSHREW,
    },
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_RHYHORN,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_HikerTravis[] = {
    {
        .iv = 0,
        .lvl = 6,
        .species = SPECIES_GEODUDE,
    },
    {
        .iv = 0,
        .lvl = 8,
        .species = SPECIES_GEODUDE,
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_GEODUDE,
    },
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_GEODUDE_A,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_FireBreatherTheo[] = {
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_KOFFING,
    },
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_NUMEL,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdAkira[] = {
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_SLOWPOKE,
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_PIKACHU,
    },
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_QWILFISH,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_FireBreatherRonnie[] = {
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_CYNDAQUIL,
    },
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_CHARMANDER,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BlackBeltKojiro[] = {
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_TAUROS_P,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_HikerJimbo[] = {
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_SHELLOS,
    },
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_ONIX,
    },
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_MACHOP,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt3[] = {
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_DUNSPARCE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt4[] = {
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_GLAMEOW,
    },
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_EKANS,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt5[] = {
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_ZUBAT,
    },
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_HIPPOPOTAS,
    },
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_CORSOLA_G,
    },
};

const struct TrainerMonItemCustomMoves sParty_ExecutiveProton1[] = {
    {
        .iv = 0,
        .lvl = 16,
        .heldItem = ITEM_ORAN_BERRY,
        .species = SPECIES_NIDORINO,
        .moves = {
            MOVE_AERIALACE,
            MOVE_DOUBLEKICK,
            MOVE_TOXIC,
            MOVE_VENOSHOCK,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 15,
        .heldItem = ITEM_CHARCOAL,
        .species = SPECIES_MAGMAR,
        .moves = {
            MOVE_SMOKESCREEN,
            MOVE_FIREPUNCH,
            MOVE_THUNDERPUNCH,
            MOVE_FEINTATTACK,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 16,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_BUIZEL,
        .moves = {
            MOVE_SCALD,
            MOVE_ROCKTOMB,
            MOVE_QUICKATTACK,
            MOVE_BRICKBREAK,
        },
        .ability = 1
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherColton[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_HERACROSS,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_TwinsMaryAndSue[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_LEDYBA,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_SPINARAK,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_CamperKenta[] = {
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_PINECO,
    },
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_NINCADA,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_VENONAT,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PicnickerJuliet[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_DUSTOX,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_BEAUTIFLY,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherMoe[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_PINSIR,
    },
};

const struct TrainerMonItemCustomMoves sParty_LeaderBugsy1[] = {
    {
        .iv = 0,
        .lvl = 18,
        .heldItem = ITEM_NONE,
        .species = SPECIES_SKORUPI,
        .moves = {
            MOVE_POISONFANG,
            MOVE_BITE,
            MOVE_TOXICSPIKES,
            MOVE_BUGBITE,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 18,
        .heldItem = ITEM_NONE,
        .species = SPECIES_YANMA,
        .moves = {
            MOVE_QUICKATTACK,
            MOVE_SUPERSONIC,
            MOVE_DOUBLETEAM,
            MOVE_UTURN,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 20,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_SCYTHER,
        .moves = {
            MOVE_UTURN,
            MOVE_PURSUIT,
            MOVE_FURYCUTTER,
            MOVE_DOUBLETEAM,
        },
        .ability = 0
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt6[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_STUNKY,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_SHUPPET,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BreederDrake[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_TYROGUE,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_AZURILL,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_BONSLY,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BeautyBritney[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_SMOOCHUM,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_FLAAFFY,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PicnickerJoan[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_MEOWTH_G,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_JIGGLYPUFF,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_FINNEON,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherConnor[] = {
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_PARAS,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_BEEDRILL,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_BUTTERFREE,
    },
};

const struct TrainerMonItemCustomMoves sParty_RivalKrisRoute34[] = {
    {
        .iv = 0,
        .lvl = 18,
        .heldItem = ITEM_QUICK_CLAW,
        .species = SPECIES_LEDYBA,
        .moves = {
            MOVE_DIZZYPUNCH,
            MOVE_REFLECT,
            MOVE_UTURN,
            MOVE_MACHPUNCH,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 18,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_EEVEE,
        .moves = {
            MOVE_BITE,
            MOVE_BABYDOLLEYES,
            MOVE_COVET,
            MOVE_FACADE,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 20,
        .heldItem = ITEM_MAGNET,
        .species = SPECIES_LUXIO,
        .moves = {
            MOVE_SNARL,
            MOVE_SPARK,
            MOVE_BITE,
            MOVE_PLAYROUGH,
        },
        .ability = 2
    },
    {
        .iv = 0,
        .lvl = 21,
        .heldItem = ITEM_EVIOLITE,
        .species = SPECIES_VULPIX,
        .moves = {
            MOVE_INCINERATE,
            MOVE_CONFUSERAY,
            MOVE_HEX,
            MOVE_FEINTATTACK,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_RivalEthanRoute34[] = {
    {
        .iv = 0,
        .lvl = 18,
        .heldItem = ITEM_QUICK_CLAW,
        .species = SPECIES_SPINARAK,
        .moves = {
            MOVE_UTURN,
            MOVE_VENOSHOCK,
            MOVE_MEGADRAIN,
            MOVE_NIGHTSHADE,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 18,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_EEVEE,
        .moves = {
            MOVE_BITE,
            MOVE_BABYDOLLEYES,
            MOVE_COVET,
            MOVE_FACADE,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 20,
        .heldItem = ITEM_MAGNET,
        .species = SPECIES_LUXIO,
        .moves = {
            MOVE_SNARL,
            MOVE_SPARK,
            MOVE_BITE,
            MOVE_PLAYROUGH,
        },
        .ability = 2
    },
    {
        .iv = 0,
        .lvl = 21,
        .heldItem = ITEM_EVIOLITE,
        .species = SPECIES_GROWLITHE,
        .moves = {
            MOVE_FIREFANG,
            MOVE_BITE,
            MOVE_DIG,
            MOVE_REVERSAL,
        },
        .ability = 1
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_YoungsterOwen[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_RATTATA_A,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_CACNEA,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_SQUIRTLE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PokefanDevon[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_SNUBBULL,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_PACHIRISU,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PicnickerSharona[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_BUDEW,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_SUNKERN,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_CHIKORITA,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_BULBASAUR,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_HexManiacStella[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_DRIFLOON,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_SABLEYE,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_DUSKULL,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BreederJacob[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_CHINGLING,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_HAPPINY,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_SMOOCHUM,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_MANTYKE,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_MUNCHLAX,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_YoungsterChris[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_PSYDUCK,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_NUZLEAF,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_OfficerPeterParker[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_HOUNDOUR,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_GROWLITHE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_LassArlene[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_JIGGLYPUFF,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_MARILL,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BeautyLoretta[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_MIME_JR,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_KIRLIA,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_MR_MIME,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PicnickerAllie[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_TOGEPI,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_SNUBBULL,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PokefanVera[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_SNUBBULL,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_SNUBBULL,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_MAWILE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PokefanEric[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_AZUMARILL,
    },
};

const struct TrainerMonItemCustomMoves sParty_LeaderWhitney1[] = {
    {
        .iv = 0,
        .lvl = 24,
        .heldItem = ITEM_LUM_BERRY,
        .species = SPECIES_GRANBULL,
        .moves = {
            MOVE_CHARM,
            MOVE_THUNDERFANG,
            MOVE_PLAYROUGH,
            MOVE_PSYCHICFANGS,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 25,
        .heldItem = ITEM_APICOT_BERRY,
        .species = SPECIES_CLEFAIRY,
        .moves = {
            MOVE_PLAYROUGH,
            MOVE_ATTRACT,
            MOVE_FACADE,
            MOVE_CAPTIVATE,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 27,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_MILTANK,
        .moves = {
            MOVE_ZENHEADBUTT,
            MOVE_PLAYROUGH,
            MOVE_ROLLOUT,
            MOVE_MILKDRINK,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 25,
        .heldItem = ITEM_EVIOLITE,
        .species = SPECIES_TOGETIC,
        .moves = {
            MOVE_YAWN,
            MOVE_DRAININGKISS,
            MOVE_DREAMEATER,
            MOVE_FACADE,
        },
        .ability = 2
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdBonji[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_EXEGGCUTE,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_SHROOMISH,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_JugglerGlenn[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_VOLTORB,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_ELECTRIKE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacOscar[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_ARON,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdMatt[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_CLAMPERL,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_VULPIX_A,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BattleGirlShelly[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_MAKUHITA,
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_RIOLU,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_TAUROS_P,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_CamperTimmy[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_KOFFING_G,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_FURRET,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PicnickerCourtney[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_CHERUBI,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_ROSELIA,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_YoungsterCarlos[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_PHANPY,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_TEDDIURSA,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_LOMBRE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_FireBreatherScourge[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_NUMEL,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_MONFERNO,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_COMBUSKEN,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_JugglerNoland[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_VOLTORB,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_GEODUDE_A,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_VOLTORB,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_MAGNEMITE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherLouis[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_VENONAT,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_SURSKIT,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperMike[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_STARAVIA,
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_SWABLU,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_LassJackie[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_CUBONE,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_ILLUMISE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PokeFanLarissa[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_MEOWTH_G,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_GLAMEOW,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_LassGina[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_CORSOLA,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_VOLBEAT,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacCalvin[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_RHYHORN,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PicnickerLillie[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_ZIGZAGOON,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_PONYTA_G,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_WOOPER_P,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PokeFanLucas[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_PLUSLE,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_MINUN,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PsychicVizzio[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_KADABRA,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_BRONZOR,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SchoolKidDonny[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_TANGELA,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_LassBeatrice[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_GLAMEOW,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_SANDSHREW_A,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_VESPIQUEN,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt7[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_ROSELIA,
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_CORPHISH,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt8[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_SHUPPET,
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_DIGLETT_A,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_DROWZEE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt9[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_MEOWTH,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_SPOINK,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt10[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_GRIMER,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_CROAGUNK,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt11[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_NIDORINA,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_SABLEYE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt12[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_POOCHYENA,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_FARFETCHD_G,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt13[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_DROWZEE,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_SLUGMA,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_KECLEON,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt14[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_DUSTOX,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_WAILMER,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_GLOOM,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt15[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_MEDITITE,
    },
};

const struct TrainerMonNoItemCustomMoves sParty_ExecutiveProton2[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_NIDORINO,
        .moves = {
            MOVE_BITE,
            MOVE_DOUBLEKICK,
            MOVE_POISONFANG,
            MOVE_SMARTSTRIKE,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_PINSIR,
        .moves = {
            MOVE_UTURN,
            MOVE_DETECT,
            MOVE_REVENGE,
            MOVE_THROATCHOP,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_BUIZEL,
        .moves = {
            MOVE_AQUAJET,
            MOVE_BITE,
            MOVE_ICEFANG,
            MOVE_DIG,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_MAGMAR,
        .moves = {
            MOVE_FEINTATTACK,
            MOVE_BRICKBREAK,
            MOVE_THUNDERPUNCH,
            MOVE_FIREPUNCH,
        },
        .ability = 1
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_ChannelerUsagi[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_GASTLY,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_GASTLY,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_GASTLY,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_GASTLY,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_GASTLY,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SageAiso[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_DUSKULL,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_HAUNTER,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_ChannelerRumiko[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_SHUPPET,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_HAUNTER,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_DRIFLOON,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_HexManiacLina[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_SABLEYE,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_MISDREAVUS,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_HAUNTER,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SageGendo[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_SHEDINJA,
    },
};

const struct TrainerMonItemCustomMoves sParty_LeaderMorty1[] = {
    {
        .iv = 0,
        .lvl = 29,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_MISDREAVUS,
        .moves = {
            MOVE_CURSE,
            MOVE_PSYBEAM,
            MOVE_CONFUSERAY,
            MOVE_HEX,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 30,
        .heldItem = ITEM_WIDE_LENS,
        .species = SPECIES_HAUNTER,
        .moves = {
            MOVE_TOXIC,
            MOVE_VENOSHOCK,
            MOVE_SHADOWSNEAK,
            MOVE_SHADOWBALL,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 32,
        .heldItem = ITEM_WIDE_LENS,
        .species = SPECIES_GENGAR,
        .moves = {
            MOVE_HYPNOSIS,
            MOVE_DREAMEATER,
            MOVE_SHADOWBALL,
            MOVE_SLUDGEBOMB,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 31,
        .heldItem = ITEM_THICK_CLUB,
        .species = SPECIES_MAROWAK_A,
        .moves = {
            MOVE_STOMPINGTANTRUM,
            MOVE_SHADOWBONE,
            MOVE_FLAMEWHEEL,
            MOVE_WILLOWISP,
        },
        .ability = 1
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_TwinsMeiandRei[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_MEOWTH_A,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_MEOWTH_G,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PsychicJemina[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_MR_MIME_G,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_CHIMECHO,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_GIRAFARIG,
    },
};

const struct TrainerMonItemCustomMoves sParty_ExecutiveAriana1[] = {
    {
        .iv = 0,
        .lvl = 30,
        .heldItem = ITEM_EVIOLITE,
        .species = SPECIES_MURKROW,
        .moves = {
            MOVE_FOULPLAY,
            MOVE_TAILWIND,
            MOVE_FEATHERDANCE,
            MOVE_ROOST,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 30,
        .heldItem = ITEM_MAGNET,
        .species = SPECIES_MANECTRIC,
        .moves = {
            MOVE_THUNDERBOLT,
            MOVE_ICEFANG,
            MOVE_THUNDERWAVE,
            MOVE_SNARL,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 32,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_NIDOQUEEN,
        .moves = {
            MOVE_ICYWIND,
            MOVE_SURF,
            MOVE_SLUDGEWAVE,
            MOVE_EARTHPOWER,
        },
        .ability = 0
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt16[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_GLOOM,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_RATICATE_A,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_MIGHTYENA,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BurglarGordon[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_PONYTA,
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_TORKOAL,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SailorSamson[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_SHELLOS_EAST,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_QUAGSIRE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BeautyRobin[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_IVYSAUR,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_BAYLEEF,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_GROVYLE,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_GROTLE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PicnickerCrissy[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_VULPIX_A,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_PELIPPER,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_FLAAFFY,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperDarius[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_SWELLOW,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PsychicWade[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_MR_MIME,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BeautyReli[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_LEAFEON,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_GLACEON,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PsychicMorris[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_SLOWPOKE_G,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_BRONZOR,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_PONYTA_G,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PokeFanGiovanna[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_RAICHU,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PokeFanGiorno[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_RAICHU_A,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SailorSaibot[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_MAKUHITA,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_MACHOKE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerDavis[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_CRANIDOS,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_PROBOPASS,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_GentlemanByron[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_NOCTOWL,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_PURUGLY,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SailorHudson[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_POLIWHIRL,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_VIGOROTH,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_FARFETCHD_G,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperSteve[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_SWELLOW,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_STARAVIA,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_PELIPPER,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_GentlemanAndre[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_MIGHTYENA,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_LassKayla[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_CORSOLA,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_WORMADAM,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SailorLino[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_MEDITITE,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_POLITOED,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PokeManiacEdmond[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_LICKITUNG,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_RHYHORN,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SailorTrevor[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_MACHOKE,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_TENTACOOL,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_TuberLenora[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_CLAMPERL,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SailorDuncan[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_GOREBYSS,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_SHELLDER,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_HUNTAIL,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_FishermanHuey[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_STARYU,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_MANTINE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SwimmerDylan[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_FINNEON,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_GOLDEEN,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SwimmerBrianna[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_CHINCHOU,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_TuberDwayne[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_REMORAID,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_WARTORTLE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SwimmerLiam[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_WAILMER,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_CROCONAW,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SwimmerJanice[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_PRINPLUP,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_FLOATZEL,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_TuberErnestine[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_MARSHTOMP,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_HikerRicky[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_ONIX,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_KABUTO,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_HikerJeff[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_VIBRAVA,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_DUGTRIO_A,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdRoy[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_SLUGMA,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_LOUDRED,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_GROWLITHE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdTommy[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_LINOONE_G,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_TORKOAL,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PsychicBea[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_NATU,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_SPOINK,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_BALTOY,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_HYPNO,
    },
};

const struct TrainerMonNoItemCustomMoves sParty_PokeFanDiana[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_PERSIAN_A,
        .moves = {
            MOVE_DARKPULSE,
            MOVE_NASTYPLOT,
            MOVE_SHADOWBALL,
            MOVE_POWERGEM,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_PERSIAN,
        .moves = {
            MOVE_SHADOWCLAW,
            MOVE_SLASH,
            MOVE_TAUNT,
            MOVE_FAKEOUT,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_SMEARGLE,
        .moves = {
            MOVE_TOXIC,
            MOVE_SUBSTITUTE,
            MOVE_RECOVER,
            MOVE_LEECHSEED,
        },
        .ability = 1
    },
};

const struct TrainerMonItemCustomMoves sParty_LeaderChuck1[] = {
    {
        .iv = 61,
        .lvl = 36,
        .heldItem = ITEM_COBA_BERRY,
        .species = SPECIES_HERACROSS,
        .moves = {
            MOVE_SWORDSDANCE,
            MOVE_SMARTSTRIKE,
            MOVE_NIGHTSLASH,
            MOVE_CLOSECOMBAT,
        },
        .ability = 0
    },
    {
        .iv = 92,
        .lvl = 37,
        .heldItem = ITEM_CHOICE_SCARF,
        .species = SPECIES_BRELOOM,
        .moves = {
            MOVE_MACHPUNCH,
            MOVE_BULLETSEED,
            MOVE_SPORE,
            MOVE_GUNKSHOT,
        },
        .ability = 1
    },
    {
        .iv = 61,
        .lvl = 36,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_HARIYAMA,
        .moves = {
            MOVE_BODYPRESS,
            MOVE_POISONJAB,
            MOVE_FEINTATTACK,
            MOVE_BELLYDRUM,
        },
        .ability = 0
    },
    {
        .iv = 34,
        .lvl = 38,
        .heldItem = ITEM_WIDE_LENS,
        .species = SPECIES_POLIWRATH,
        .moves = {
            MOVE_ICEPUNCH,
            MOVE_WATERFALL,
            MOVE_HYPNOSIS,
            MOVE_POWERUPPUNCH,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_LeaderJasmine1[] = {
    {
        .iv = 3,
        .lvl = 40,
        .heldItem = ITEM_AIR_BALLOON,
        .species = SPECIES_MAGNETON,
        .moves = {
            MOVE_MIRRORSHOT,
            MOVE_THUNDERWAVE,
            MOVE_CHARGEBEAM,
            MOVE_TRICKROOM,
        },
        .ability = 1
    },
    {
        .iv = 121,
        .lvl = 40,
        .heldItem = ITEM_CHOPLE_BERRY,
        .species = SPECIES_PERRSERKER,
        .moves = {
            MOVE_IRONHEAD,
            MOVE_PLAYROUGH,
            MOVE_AERIALACE,
            MOVE_IRONDEFENSE,
        },
        .ability = 0
    },
    {
        .iv = 121,
        .lvl = 41,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_BASTIODON,
        .moves = {
            MOVE_IRONDEFENSE,
            MOVE_SMARTSTRIKE,
            MOVE_CURSE,
            MOVE_STEALTHROCK,
        },
        .ability = 1
    },
    {
        .iv = 121,
        .lvl = 42,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_STEELIX,
        .moves = {
            MOVE_SMARTSTRIKE,
            MOVE_GYROBALL,
            MOVE_HIGHHORSEPOWER,
            MOVE_PSYCHICFANGS,
        },
        .ability = 2
    },
};

const struct TrainerMonItemCustomMoves sParty_LeaderLorelei1[] = {
    {
        .iv = 33,
        .lvl = 46,
        .heldItem = ITEM_NEVER_MELT_ICE,
        .species = SPECIES_GLACEON,
        .moves = {
            MOVE_HAIL,
            MOVE_FREEZEDRY,
            MOVE_WATERPULSE,
            MOVE_AURORAVEIL,
        },
        .ability = 0
    },
    {
        .iv = 121,
        .lvl = 46,
        .heldItem = ITEM_FOCUS_SASH,
        .species = SPECIES_SANDSLASH_A,
        .moves = {
            MOVE_ICICLESPEAR,
            MOVE_SMARTSTRIKE,
            MOVE_SHADOWCLAW,
            MOVE_BULLDOZE,
        },
        .ability = 1
    },
    {
        .iv = 99,
        .lvl = 47,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_LAPRAS,
        .moves = {
            MOVE_FREEZEDRY,
            MOVE_HAIL,
            MOVE_SCALD,
            MOVE_PSYCHIC,
        },
        .ability = 1
    },
    {
        .iv = 33,
        .lvl = 48,
        .heldItem = ITEM_ICIUM_Z,
        .species = SPECIES_FROSLASS,
        .moves = {
            MOVE_BLIZZARD,
            MOVE_OMINOUSWIND,
            MOVE_WILLOWISP,
            MOVE_WATERPULSE,
        },
        .ability = 1
    },
    {
        .iv = 33,
        .lvl = 47,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_MR_RIME,
        .moves = {
            MOVE_FREEZEDRY,
            MOVE_PSYSHOCK,
            MOVE_DAZZLINGGLEAM,
            MOVE_STOMPINGTANTRUM,
        },
        .ability = 1
    },
};

const struct TrainerMonItemCustomMoves sParty_LeaderClair1[] = {
    {
        .iv = 92,
        .lvl = 50,
        .heldItem = ITEM_LUM_BERRY,
        .species = SPECIES_DRAGONAIR,
        .moves = {
            MOVE_HURRICANE,
            MOVE_DRAGONTAIL,
            MOVE_THUNDERWAVE,
            MOVE_SMARTSTRIKE,
        },
        .ability = 1
    },
    {
        .iv = 96,
        .lvl = 51,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_ALTARIA,
        .moves = {
            MOVE_TAILWIND,
            MOVE_HURRICANE,
            MOVE_MOONBLAST,
            MOVE_DRAGONRUSH,
        },
        .ability = 2
    },
    {
        .iv = 2,
        .lvl = 51,
        .heldItem = ITEM_ROSELI_BERRY,
        .species = SPECIES_FLYGON,
        .moves = {
            MOVE_EARTHQUAKE,
            MOVE_DRAGONDANCE,
            MOVE_DRAGONRUSH,
            MOVE_ROCKSLIDE,
        },
        .ability = 1
    },
    {
        .iv = 93,
        .lvl = 53,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_KINGDRA,
        .moves = {
            MOVE_SLUDGEWAVE,
            MOVE_BLIZZARD,
            MOVE_SCALD,
            MOVE_DRAGONPULSE,
        },
        .ability = 2
    },
    {
        .iv = 2,
        .lvl = 52,
        .heldItem = ITEM_GYARADOSITE,
        .species = SPECIES_GYARADOS,
        .moves = {
            MOVE_DRAGONTAIL,
            MOVE_AQUATAIL,
            MOVE_CRUNCH,
            MOVE_DRAGONDANCE,
        },
        .ability = 1
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SwimmerCaitlin[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_HORSEA,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_LUMINEON,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_LANTURN,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SwimmerHarold[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_SEEL,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_KRABBY,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SwimmerDuncan[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_AZURILL,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_SPHEAL,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SwimmerSofia[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_LUDICOLO,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_POLIWHIRL,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_TAUROS_AQUA_P,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMartha[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_PSYDUCK,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_REMORAID,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SwimmerBryce[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_BARBOACH,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_CORPHISH,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SwimmerHannah[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_PSYDUCK,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_CHINCHOU,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_FINNEON,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_CORPHISH,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_CARVANHA,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMark[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_RELICANTH,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_FLOATZEL,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SwimmerEmma[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_WHISCASH,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_STARMIE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_FishermanCooper[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_SEAKING,
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_QUAGSIRE,
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_SLOWBRO,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdSteve[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_ANORITH,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_LILEEP,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_HikerWinston[] = {
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_HIPPOPOTAS,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_DONPHAN,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_DUGTRIO_A,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacDawson[] = {
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_LAPRAS,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_EXPLOUD,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_LICKILICKY,
    },
};

const struct TrainerMonItemCustomMoves sParty_ReporterCiel1[] = {
    {
        .iv = 0,
        .lvl = 31,
        .heldItem = ITEM_SILK_SCARF,
        .species = SPECIES_DELCATTY,
        .moves = {
            MOVE_FAKEOUT,
            MOVE_GIGAIMPACT,
            MOVE_ATTRACT,
            MOVE_PLAYROUGH,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 32,
        .heldItem = ITEM_EVIOLITE,
        .species = SPECIES_CHANSEY,
        .moves = {
            MOVE_SUBSTITUTE,
            MOVE_SOFTBOILED,
            MOVE_TOXIC,
            MOVE_SEISMICTOSS,
        },
        .ability = 1
    },
};

const struct TrainerMonItemCustomMoves sParty_RivalKrisUnused[] = {
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_NONE,
        .species = SPECIES_UNOWN,
        .moves = {
            MOVE_NONE,
            MOVE_NONE,
            MOVE_NONE,
            MOVE_NONE,
        },
        .ability = 1
    },
};

const struct TrainerMonItemCustomMoves sParty_RivalEthanUnused[] = {
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_NONE,
        .species = SPECIES_UNOWN,
        .moves = {
            MOVE_NONE,
            MOVE_NONE,
            MOVE_NONE,
            MOVE_NONE,
        },
        .ability = 1
    },
};

const struct TrainerMonItemCustomMoves sParty_MysticalManEusine[] = {
    {
        .iv = 0,
        .lvl = 34,
        .heldItem = ITEM_EVIOLITE,
        .species = SPECIES_DROWZEE,
        .moves = {
            MOVE_HYPNOSIS,
            MOVE_DREAMEATER,
            MOVE_PSYSHOCK,
            MOVE_DRAINPUNCH,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 34,
        .heldItem = ITEM_OCCA_BERRY,
        .species = SPECIES_JUMPLUFF,
        .moves = {
            MOVE_SLEEPPOWDER,
            MOVE_SEEDBOMB,
            MOVE_LEECHSEED,
            MOVE_COTTONGUARD,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 36,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_ELECTRODE,
        .moves = {
            MOVE_SCREECH,
            MOVE_THUNDER,
            MOVE_ELECTRICTERRAIN,
            MOVE_HIDDENPOWER,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 34,
        .heldItem = ITEM_FOCUS_SASH,
        .species = SPECIES_GENGAR,
        .moves = {
            MOVE_TOXIC,
            MOVE_CONFUSERAY,
            MOVE_VENOSHOCK,
            MOVE_SHADOWSNEAK,
        },
        .ability = 1
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BlackBeltGlenn[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_PRIMEAPE,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_MEDITITE,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_RIOLU,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BattleGirlLashawna[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_HITMONCHAN,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BlackBeltBrando[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_PRIMEAPE,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_MACHOKE,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_CROAGUNK,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BattleGirlSharon[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_MAKUHITA,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_TAUROS_BLAZE_P,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BlackBeltDimaggio[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_HITMONLEE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BlackBeltErik[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_PRIMEAPE,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_HITMONTOP,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_CROAGUNK,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_JugglerAvery[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_MAGNETON,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_DIGLETT_A,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_FORRETRESS,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdDerek[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_BRONZONG,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_GentlemanZachary[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_WORMADAM,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_MEOWTH_G,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_LassSonya[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_MAWILE,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_LAIRON,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_OfficerFranklin[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_POOCHYENA,
    },
};

const struct TrainerMonItemCustomMoves sParty_RivalKrisShrine[] = {
    {
        .iv = 0,
        .lvl = 41,
        .heldItem = ITEM_OCCA_BERRY,
        .species = SPECIES_LEDIAN,
        .moves = {
            MOVE_SHADOWPUNCH,
            MOVE_STARDUST_PUNCH,
            MOVE_BULKUP,
            MOVE_BRICKBREAK,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 41,
        .heldItem = ITEM_GHOST_GEM,
        .species = SPECIES_MISMAGIUS,
        .moves = {
            MOVE_SHADOWBALL,
            MOVE_POWERGEM,
            MOVE_PSYCHIC,
            MOVE_MYSTICALFIRE,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 42,
        .heldItem = ITEM_LUM_BERRY,
        .species = SPECIES_SYLVEON,
        .moves = {
            MOVE_MISTYTERRAIN,
            MOVE_MOONBLAST,
            MOVE_HYPERVOICE,
            MOVE_MYSTICALFIRE,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 42,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_NINETALES,
        .moves = {
            MOVE_MOONBLAST,
            MOVE_FLAMETHROWER,
            MOVE_CONFUSERAY,
            MOVE_ENERGYBALL,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 41,
        .heldItem = ITEM_HEAT_ROCK,
        .species = SPECIES_SUNFLORA,
        .moves = {
            MOVE_LEECHSEED,
            MOVE_GIGADRAIN,
            MOVE_TOXIC,
            MOVE_SUNNYDAY,
        },
        .ability = 0
    },
    {
        .iv = 129,
        .lvl = 43,
        .heldItem = ITEM_MAGNET,
        .species = SPECIES_LUXRAY,
        .moves = {
            MOVE_CRUNCH,
            MOVE_PSYCHOCUT,
            MOVE_SWAGGER,
            MOVE_ZINGZAP,
        },
        .ability = 2
    },
};

const struct TrainerMonItemCustomMoves sParty_RivalEthanShrine[] = {
    {
        .iv = 0,
        .lvl = 41,
        .heldItem = ITEM_OCCA_BERRY,
        .species = SPECIES_ARIADOS,
        .moves = {
            MOVE_VENOSHOCK,
            MOVE_SHADOWBALL,
            MOVE_TOXICTHREAD,
            MOVE_LEECHLIFE,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 41,
        .heldItem = ITEM_GHOST_GEM,
        .species = SPECIES_DRIFBLIM,
        .moves = {
            MOVE_WILLOWISP,
            MOVE_HURRICANE,
            MOVE_SHADOWBALL,
            MOVE_TAILWIND,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 42,
        .heldItem = ITEM_LUM_BERRY,
        .species = SPECIES_SYLVEON,
        .moves = {
            MOVE_MISTYTERRAIN,
            MOVE_MOONBLAST,
            MOVE_HYPERVOICE,
            MOVE_MYSTICALFIRE,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 42,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_ARCANINE,
        .moves = {
            MOVE_FLAREBLITZ,
            MOVE_WILDCHARGE,
            MOVE_CRUNCH,
            MOVE_EXTREMESPEED,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 41,
        .heldItem = ITEM_HEAT_ROCK,
        .species = SPECIES_SUNFLORA,
        .moves = {
            MOVE_LEECHSEED,
            MOVE_GIGADRAIN,
            MOVE_TOXIC,
            MOVE_SUNNYDAY,
        },
        .ability = 0
    },
    {
        .iv = 129,
        .lvl = 43,
        .heldItem = ITEM_MAGNET,
        .species = SPECIES_LUXRAY,
        .moves = {
            MOVE_CRUNCH,
            MOVE_PSYCHOCUT,
            MOVE_SWAGGER,
            MOVE_ZINGZAP,
        },
        .ability = 2
    },
};

const struct TrainerMonNoItemCustomMoves sParty_BlackBeltKiyo[] = {
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_HITMONLEE,
        .moves = {
            MOVE_BRICKBREAK,
            MOVE_HIGHJUMPKICK,
            MOVE_ROCKSLIDE,
            MOVE_BULKUP,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_HITMONTOP,
        .moves = {
            MOVE_ROLLINGKICK,
            MOVE_DRILLRUN,
            MOVE_SWAGGER,
            MOVE_SMARTSTRIKE,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_HITMONCHAN,
        .moves = {
            MOVE_BULLETPUNCH,
            MOVE_THUNDERPUNCH,
            MOVE_ICEPUNCH,
            MOVE_FIREPUNCH,
        },
        .ability = 1
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_CamperSpencer[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_SANDSLASH,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_CACNEA,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_GOLBAT,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PicnickerTiffany[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_CHIMECHO,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_CLEFAIRY,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacBrent[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_NIDORINA,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_NIDORINO,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacBecket[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_LAIRON,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_SLOWBRO,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_LICKILICKY,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacRon[] = {
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_RHYDON,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_FishermanWade[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_WAILMER,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt17[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_GOLBAT,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt18[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_GRUMPIG,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_SWALOT,
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_RATICATE_A,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt19[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_LINOONE_G,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_GRAVELER,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt20[] = {
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_MOTHIM,
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_MIGHTYENA,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_SKORUPI,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt21[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_WHISCASH,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_MASQUERAIN,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt22[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_SHARPEDO,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketScientist1[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_BRONZOR,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_MAGNETON,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_ELECTRODE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt23[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_BEAUTIFLY,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_BELLOSSOM,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt24[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_PERSIAN_A,
    },
};

const struct TrainerMonItemCustomMoves sParty_AdminBerkel1[] = {
    {
        .iv = 0,
        .lvl = 39,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_CLAYDOL,
        .moves = {
            MOVE_PSYCHICTERRAIN,
            MOVE_COSMICPOWER,
            MOVE_PSYCHIC,
            MOVE_EARTHPOWER,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 40,
        .heldItem = ITEM_AIR_BALLOON,
        .species = SPECIES_MAGNEZONE,
        .moves = {
            MOVE_METALSOUND,
            MOVE_DISCHARGE,
            MOVE_FLASHCANNON,
            MOVE_SIGNALBEAM,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 41,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_ROTOM_WASH,
        .moves = {
            MOVE_HYDROPUMP,
            MOVE_VOLTSWITCH,
            MOVE_PAINSPLIT,
            MOVE_WILLOWISP,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 42,
        .heldItem = ITEM_METAL_COAT,
        .species = SPECIES_BRONZONG,
        .moves = {
            MOVE_HYPNOSIS,
            MOVE_PSYCHIC,
            MOVE_IRONDEFENSE,
            MOVE_REST,
        },
        .ability = 1
    },
};

const struct TrainerMonItemCustomMoves sParty_ExecutivePetrel1[] = {
    {
        .iv = 0,
        .lvl = 40,
        .heldItem = ITEM_PAYAPA_BERRY,
        .species = SPECIES_WEEZING_G,
        .moves = {
            MOVE_TOXIC,
            MOVE_TOXICSPIKES,
            MOVE_STRANGESTEAM,
            MOVE_VENOSHOCK,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 41,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_SKUNTANK,
        .moves = {
            MOVE_BELCH,
            MOVE_TOXIC,
            MOVE_SUCKERPUNCH,
            MOVE_FLAMETHROWER,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 42,
        .heldItem = ITEM_BLACK_SLUDGE,
        .species = SPECIES_TOXICROAK,
        .moves = {
            MOVE_VENOMDRENCH,
            MOVE_POISONJAB,
            MOVE_TOXIC,
            MOVE_POWERUPPUNCH,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_ExecutiveAriana2[] = {
    {
        .iv = 0,
        .lvl = 40,
        .heldItem = ITEM_LUM_BERRY,
        .species = SPECIES_HONCHKROW,
        .moves = {
            MOVE_ROOST,
            MOVE_DARKPULSE,
            MOVE_HURRICANE,
            MOVE_NASTYPLOT,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 41,
        .heldItem = ITEM_MAGNET,
        .species = SPECIES_MANECTRIC,
        .moves = {
            MOVE_ODORSLEUTH,
            MOVE_CRUNCH,
            MOVE_WILDCHARGE,
            MOVE_SNARL,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 42,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_NIDOQUEEN,
        .moves = {
            MOVE_SLUDGEWAVE,
            MOVE_ICEBEAM,
            MOVE_TOXIC,
            MOVE_EARTHPOWER,
        },
        .ability = 0
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BoarderNicholas[] = {
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_DEWGONG,
    },
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_CLOYSTER,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BoarderJaxon[] = {
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_VULPIX_A,
    },
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_SANDSHREW_A,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BoarderWilliam[] = {
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_SEALEO,
    },
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_DELIBIRD,
    },
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_JYNX,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SkierLina[] = {
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_SNORUNT,
    },
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_SWINUB,
    },
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_SNEASEL,
    },
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_PILOSWINE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SkierBjorn[] = {
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_SNOVER,
    },
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_ABOMASNOW,
    },
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_SNOVER,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SkierElaine[] = {
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_MR_MIME_G,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_FishermanBojack[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_CORSOLA,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_OCTILLERY,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_FishermanDino[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_WHISCASH,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_FishermanDwayne[] = {
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_FLOATZEL,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_MANTINE,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_AZUMARILL,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdMackey[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_FLAAFFY,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_GLIGAR,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_NOCTOWL,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerTetra[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_EMPOLEON,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerNed[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_COMBUSKEN,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_BAYLEEF,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_MARSHTOMP,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_QUILAVA,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_GROVYLE,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_CROCONAW,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerJaden[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_PUPITAR,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_OMASTAR,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerIris[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_MEDICHAM,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_TROPIUS,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerGene[] = {
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_EXEGGUTOR_A,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_FishermanLewis[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_GASTRODON_EAST,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_GASTRODON,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacBaily[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_MAROWAK,
    },
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_EXPLOUD,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_FishermanBraxton[] = {
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_OCTILLERY,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperBernie[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_SWELLOW,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_PIDGEOT,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_DODRIO,
    },
};

const struct TrainerMonItemCustomMoves sParty_KrisBlackthornCity[] = {
    {
        .iv = 91,
        .lvl = 46,
        .heldItem = ITEM_OCCA_BERRY,
        .species = SPECIES_LEDIAN,
        .moves = {
            MOVE_BRICKBREAK,
            MOVE_BULLDOZE,
            MOVE_REFLECT,
            MOVE_STARDUST_PUNCH,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 47,
        .heldItem = ITEM_MAGNET,
        .species = SPECIES_LUXRAY,
        .moves = {
            MOVE_THUNDERFANG,
            MOVE_SWAGGER,
            MOVE_PSYCHICFANGS,
            MOVE_ICEFANG,
        },
        .ability = 2
    },
    {
        .iv = 0,
        .lvl = 46,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_SYLVEON,
        .moves = {
            MOVE_MOONBLAST,
            MOVE_MYSTICALFIRE,
            MOVE_HYPERVOICE,
            MOVE_MOONLIGHT,
        },
        .ability = 0
    },
    {
        .iv = 4,
        .lvl = 47,
        .heldItem = ITEM_LUM_BERRY,
        .species = SPECIES_MISMAGIUS,
        .moves = {
            MOVE_SHADOWBALL,
            MOVE_POWERGEM,
            MOVE_DAZZLINGGLEAM,
            MOVE_MYSTICALFIRE,
        },
        .ability = 1
    },
    {
        .iv = 122,
        .lvl = 46,
        .heldItem = ITEM_MIRACLE_SEED,
        .species = SPECIES_SUNFLORA,
        .moves = {
            MOVE_LIGHTSCREEN,
            MOVE_GIGADRAIN,
            MOVE_FLAMETHROWER,
            MOVE_MORNINGSUN,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 48,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_NINETALES,
        .moves = {
            MOVE_INCINERATE,
            MOVE_EXTRASENSORY,
            MOVE_ENERGYBALL,
            MOVE_DAZZLINGGLEAM,
        },
        .ability = 1
    },
};

const struct TrainerMonItemCustomMoves sParty_EthanBlackthornCity[] = {
    {
        .iv = 93,
        .lvl = 46,
        .heldItem = ITEM_OCCA_BERRY,
        .species = SPECIES_ARIADOS,
        .moves = {
            MOVE_TOXICTHREAD,
            MOVE_DARKPULSE,
            MOVE_XSCISSOR,
            MOVE_DOUBLETEAM,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 47,
        .heldItem = ITEM_MAGNET,
        .species = SPECIES_LUXRAY,
        .moves = {
            MOVE_THUNDERFANG,
            MOVE_SWAGGER,
            MOVE_PSYCHICFANGS,
            MOVE_ICEFANG,
        },
        .ability = 2
    },
    {
        .iv = 0,
        .lvl = 46,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_SYLVEON,
        .moves = {
            MOVE_MOONBLAST,
            MOVE_MYSTICALFIRE,
            MOVE_HYPERVOICE,
            MOVE_MOONLIGHT,
        },
        .ability = 0
    },
    {
        .iv = 63,
        .lvl = 47,
        .heldItem = ITEM_LUM_BERRY,
        .species = SPECIES_DRIFBLIM,
        .moves = {
            MOVE_HURRICANE,
            MOVE_DARKPULSE,
            MOVE_FLAMETHROWER,
            MOVE_PHANTOMFORCE,
        },
        .ability = 1
    },
    {
        .iv = 122,
        .lvl = 46,
        .heldItem = ITEM_MIRACLE_SEED,
        .species = SPECIES_SUNFLORA,
        .moves = {
            MOVE_LIGHTSCREEN,
            MOVE_GIGADRAIN,
            MOVE_FLAMETHROWER,
            MOVE_MORNINGSUN,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 48,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_ARCANINE,
        .moves = {
            MOVE_WILDCHARGE,
            MOVE_FLAREBLITZ,
            MOVE_ROAR,
            MOVE_EXTREMESPEED,
        },
        .ability = 1
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt25[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_CACTURNE,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_FURRET,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt26[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_SANDSLASH,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_GOLBAT,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt27[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_BRELOOM,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_WEEZING,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt28[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_KINGLER,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_ABSOL,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_ELECTRODE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt29[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_NINJASK,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_MIGHTYENA,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_DUSCLOPS,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt30[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_QUAGSIRE,
    },
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_EXEGGUTOR,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketScientist2[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_MAGNETON,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_RELICANTH,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_PROBOPASS,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt31[] = {
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_SEVIPER,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_TENTACRUEL,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt32[] = {
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_ZANGOOSE,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_GOLEM,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt33[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_MASQUERAIN,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_KABUTOPS,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt34[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_DUSTOX,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_AERODACTYL,
    },
};

const struct TrainerMonItemDefaultMoves sParty_RocketScientist3[] = {
    {
        .iv = 0,
        .lvl = 44,
        .heldItem = ITEM_EVIOLITE,
        .species = SPECIES_PORYGON,
    },
    {
        .iv = 0,
        .lvl = 44,
        .heldItem = ITEM_EVIOLITE,
        .species = SPECIES_PORYGON2,
    },
};

const struct TrainerMonItemCustomMoves sParty_AdminBerkel2[] = {
    {
        .iv = 130,
        .lvl = 47,
        .heldItem = ITEM_BRIGHT_POWDER,
        .species = SPECIES_DITTO,
        .moves = {
            MOVE_TRANSFORM,
            MOVE_NONE,
            MOVE_NONE,
            MOVE_NONE,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 46,
        .heldItem = ITEM_AIR_BALLOON,
        .species = SPECIES_MAGNEZONE,
        .moves = {
            MOVE_FOCUSBLAST,
            MOVE_FLASHCANNON,
            MOVE_METALSOUND,
            MOVE_DISCHARGE,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 46,
        .heldItem = ITEM_CHOPLE_BERRY,
        .species = SPECIES_PORYGON_Z,
        .moves = {
            MOVE_SIGNALBEAM,
            MOVE_FOCUSBLAST,
            MOVE_DISCHARGE,
            MOVE_PSYCHIC,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 47,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_CLAYDOL,
        .moves = {
            MOVE_TRICKROOM,
            MOVE_FOCUSBLAST,
            MOVE_EARTHPOWER,
            MOVE_PSYCHIC,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 47,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_BRONZONG,
        .moves = {
            MOVE_FLASHCANNON,
            MOVE_TRICKROOM,
            MOVE_PSYCHIC,
            MOVE_DESTINYBOND,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 48,
        .heldItem = ITEM_CHOICE_SPECS,
        .species = SPECIES_ROTOM_WASH,
        .moves = {
            MOVE_THUNDERWAVE,
            MOVE_HYDROPUMP,
            MOVE_THUNDER,
            MOVE_SHADOWBALL,
        },
        .ability = 1
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt35[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_LINOONE,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_CARNIVINE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BurglarDavid[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_BIBAREL,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_MIGHTYENA,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_NOCTOWL,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BurglarTony[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_WEEZING,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_CHARIZARD,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt36[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_CLOYSTER,
    },
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_GOREBYSS,
    },
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_VESPIQUEN,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt37[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_TAUROS,
    },
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_CORSOLA_G,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt38[] = {
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_PURUGLY,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt39[] = {
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_STARAPTOR,
    },
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_PRIMEAPE,
    },
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_SABLEYE,
    },
};

const struct TrainerMonItemCustomMoves sParty_ExecutivePetrel2[] = {
    {
        .iv = 0,
        .lvl = 47,
        .heldItem = ITEM_QUICK_CLAW,
        .species = SPECIES_SMEARGLE,
        .moves = {
            MOVE_STEALTHROCK,
            MOVE_LEECHSEED,
            MOVE_SUBSTITUTE,
            MOVE_TOXIC,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 46,
        .heldItem = ITEM_PAYAPA_BERRY,
        .species = SPECIES_WEEZING_G,
        .moves = {
            MOVE_STRANGESTEAM,
            MOVE_SLUDGEBOMB,
            MOVE_DESTINYBOND,
            MOVE_GYROBALL,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 46,
        .heldItem = ITEM_JABOCA_BERRY,
        .species = SPECIES_SKUNTANK,
        .moves = {
            MOVE_BELCH,
            MOVE_TOXIC,
            MOVE_SUCKERPUNCH,
            MOVE_FLAMETHROWER,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 47,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_CLODSIRE,
        .moves = {
            MOVE_AMNESIA,
            MOVE_EARTHQUAKE,
            MOVE_POISONJAB,
            MOVE_LIQUIDATION,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 48,
        .heldItem = ITEM_CHOICE_SPECS,
        .species = SPECIES_TOXICROAK,
        .moves = {
            MOVE_POISONJAB,
            MOVE_TOXIC,
            MOVE_CLOSECOMBAT,
            MOVE_SUCKERPUNCH,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_ExecutiveProton3[] = {
    {
        .iv = 0,
        .lvl = 46,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_PINSIR,
        .moves = {
            MOVE_THROATCHOP,
            MOVE_SWORDSDANCE,
            MOVE_SUPERPOWER,
            MOVE_XSCISSOR,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 47,
        .heldItem = ITEM_FLAME_ORB,
        .species = SPECIES_OBSTAGOON,
        .moves = {
            MOVE_BABYDOLLEYES,
            MOVE_NIGHTSLASH,
            MOVE_OBSTRUCT,
            MOVE_DOUBLEEDGE,
        },
        .ability = 2
    },
    {
        .iv = 0,
        .lvl = 46,
        .heldItem = ITEM_FOCUS_SASH,
        .species = SPECIES_AGGRON,
        .moves = {
            MOVE_STONEEDGE,
            MOVE_SUPERPOWER,
            MOVE_STEALTHROCK,
            MOVE_CURSE,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 47,
        .heldItem = ITEM_LIFE_ORB,
        .species = SPECIES_NIDOKING,
        .moves = {
            MOVE_POISONJAB,
            MOVE_DRAGONTAIL,
            MOVE_SMARTSTRIKE,
            MOVE_EARTHQUAKE,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 48,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_MAGMORTAR,
        .moves = {
            MOVE_THUNDERPUNCH,
            MOVE_LAVAPLUME,
            MOVE_SUNNYDAY,
            MOVE_ROCKSLIDE,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_ExecutiveAriana3[] = {
    {
        .iv = 0,
        .lvl = 47,
        .heldItem = ITEM_WACAN_BERRY,
        .species = SPECIES_CURSOLA,
        .moves = {
            MOVE_SHADOWBALL,
            MOVE_WILLOWISP,
            MOVE_STRENGTHSAP,
            MOVE_POWERGEM,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 46,
        .heldItem = ITEM_MAGNET,
        .species = SPECIES_MANECTRIC,
        .moves = {
            MOVE_CRUNCH,
            MOVE_VOLTSWITCH,
            MOVE_THUNDERWAVE,
            MOVE_DISCHARGE,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 47,
        .heldItem = ITEM_LIFE_ORB,
        .species = SPECIES_VILEPLUME,
        .moves = {
            MOVE_POWERWHIP,
            MOVE_SLUDGEWAVE,
            MOVE_SLEEPPOWDER,
            MOVE_TOXIC,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 46,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_NIDOQUEEN,
        .moves = {
            MOVE_SLUDGEWAVE,
            MOVE_BLIZZARD,
            MOVE_TOXIC,
            MOVE_EARTHPOWER,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 48,
        .heldItem = ITEM_SHARP_BEAK,
        .species = SPECIES_HONCHKROW,
        .moves = {
            MOVE_DARKPULSE,
            MOVE_SHADOWBALL,
            MOVE_NASTYPLOT,
            MOVE_HURRICANE,
        },
        .ability = 1
    },
};

const struct TrainerMonItemCustomMoves sParty_ExecutiveArcher[] = {
    {
        .iv = 34,
        .lvl = 49,
        .heldItem = ITEM_CHOICE_SPECS,
        .species = SPECIES_YANMEGA,
        .moves = {
            MOVE_BUGBUZZ,
            MOVE_DRAGONPULSE,
            MOVE_DRAGONDANCE,
            MOVE_PSYCHOCUT,
        },
        .ability = 0
    },
    {
        .iv = 116,
        .lvl = 49,
        .heldItem = ITEM_TOXIC_ORB,
        .species = SPECIES_GLISCOR,
        .moves = {
            MOVE_NIGHTSLASH,
            MOVE_FACADE,
            MOVE_ROOST,
            MOVE_SWORDSDANCE,
        },
        .ability = 0
    },
    {
        .iv = 95,
        .lvl = 50,
        .heldItem = ITEM_CHOICE_BAND,
        .species = SPECIES_DUSKNOIR,
        .moves = {
            MOVE_CONFUSERAY,
            MOVE_EARTHQUAKE,
            MOVE_PHANTOMFORCE,
            MOVE_SHADOWSNEAK,
        },
        .ability = 0
    },
    {
        .iv = 101,
        .lvl = 50,
        .heldItem = ITEM_OCCA_BERRY,
        .species = SPECIES_SKARMORY,
        .moves = {
            MOVE_IRONDEFENSE,
            MOVE_BRAVEBIRD,
            MOVE_DRILLRUN,
            MOVE_ROOST,
        },
        .ability = 0
    },
    {
        .iv = 95,
        .lvl = 50,
        .heldItem = ITEM_FIGY_BERRY,
        .species = SPECIES_SPIRITOMB,
        .moves = {
            MOVE_SHADOWBALL,
            MOVE_NASTYPLOT,
            MOVE_SLUDGEWAVE,
            MOVE_DARKPULSE,
        },
        .ability = 1
    },
    {
        .iv = 94,
        .lvl = 51,
        .heldItem = ITEM_HOUNDOOMINITE,
        .species = SPECIES_HOUNDOOM,
        .moves = {
            MOVE_SUNNYDAY,
            MOVE_SLUDGEBOMB,
            MOVE_DARKPULSE,
            MOVE_FLAMETHROWER,
        },
        .ability = 0
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt40[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_LANTURN,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_VICTREEBEL,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_RAPIDASH,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt41[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_GOLEM_A,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_AMPHAROS,
    },
};

const struct TrainerMonItemCustomMoves sParty_ElderMokai[] = {
    {
        .iv = 0,
        .lvl = 48,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_SIRFETCHD,
        .moves = {
            MOVE_SWORDSDANCE,
            MOVE_BRUTALSWING,
            MOVE_CLOSECOMBAT,
            MOVE_AERIALACE,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 48,
        .heldItem = ITEM_SABLENITE,
        .species = SPECIES_SABLEYE,
        .moves = {
            MOVE_SHADOWCLAW,
            MOVE_POWERGEM,
            MOVE_MOONLIGHT,
            MOVE_TOXIC,
        },
        .ability = 0
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerRaul[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_EXEGGUTOR_A,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_GYARADOS,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerIsaiah[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_GYARADOS,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerLena[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_CHARIZARD,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_AMPHAROS,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerJoanne[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_GABITE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerCorey[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_SHELGON,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerChase[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_FLYGON,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerBertha[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_DRAGONAIR,
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_SHELGON,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_TwinsLuaAndLuca[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_DRAGONAIR,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_SHELGON,
    },
};

const struct TrainerMonItemCustomMoves sParty_KimonoGirlZuki[] = {
    {
        .iv = 0,
        .lvl = 50,
        .heldItem = ITEM_NONE,
        .species = SPECIES_NOCTOWL,
        .moves = {
            MOVE_AIRSLASH,
            MOVE_SHADOWBALL,
            MOVE_HYPERVOICE,
            MOVE_PSYCHIC,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 52,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_UMBREON,
        .moves = {
            MOVE_MOONLIGHT,
            MOVE_CONFUSERAY,
            MOVE_MEANLOOK,
            MOVE_DARKPULSE,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_KimonoGirlNaoko[] = {
    {
        .iv = 0,
        .lvl = 50,
        .heldItem = ITEM_NONE,
        .species = SPECIES_NOCTOWL,
        .moves = {
            MOVE_AIRSLASH,
            MOVE_DREAMEATER,
            MOVE_HYPNOSIS,
            MOVE_SHADOWSNEAK,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 52,
        .heldItem = ITEM_LUM_BERRY,
        .species = SPECIES_ESPEON,
        .moves = {
            MOVE_MORNINGSUN,
            MOVE_PSYCHIC,
            MOVE_BITE,
            MOVE_FOCUSBLAST,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_KimonoGirlMiki[] = {
    {
        .iv = 0,
        .lvl = 50,
        .heldItem = ITEM_NONE,
        .species = SPECIES_NOCTOWL,
        .moves = {
            MOVE_HYPNOSIS,
            MOVE_NIGHTMARE,
            MOVE_HURRICANE,
            MOVE_FOCUSBLAST,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 52,
        .heldItem = ITEM_PASSHO_BERRY,
        .species = SPECIES_FLAREON,
        .moves = {
            MOVE_TOXIC,
            MOVE_SUNNYDAY,
            MOVE_SOLARBLADE,
            MOVE_FLAREBLITZ,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_KimonoGirlSayo[] = {
    {
        .iv = 0,
        .lvl = 50,
        .heldItem = ITEM_NONE,
        .species = SPECIES_NOCTOWL,
        .moves = {
            MOVE_HURRICANE,
            MOVE_RAINDANCE,
            MOVE_HYPERVOICE,
            MOVE_SHADOWBALL,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 52,
        .heldItem = ITEM_CHOICE_SPECS,
        .species = SPECIES_JOLTEON,
        .moves = {
            MOVE_THUNDERWAVE,
            MOVE_PINMISSILE,
            MOVE_SPIKES,
            MOVE_THUNDER,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_KimonoGirlKuni[] = {
    {
        .iv = 0,
        .lvl = 50,
        .heldItem = ITEM_NONE,
        .species = SPECIES_NOCTOWL,
        .moves = {
            MOVE_RAINDANCE,
            MOVE_HURRICANE,
            MOVE_SHADOWSNEAK,
            MOVE_DARKPULSE,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 52,
        .heldItem = ITEM_WACAN_BERRY,
        .species = SPECIES_VAPOREON,
        .moves = {
            MOVE_TOXIC,
            MOVE_ICEBEAM,
            MOVE_BABYDOLLEYES,
            MOVE_HYDROPUMP,
        },
        .ability = 0
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerWilliam[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_MAGNETON,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_RAPIDASH_G,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerTanya[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_VICTREEBEL,
    },
    {
        .iv = 0,
        .lvl = 51,
        .species = SPECIES_SHARPEDO,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerRonnie[] = {
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_SCIZOR,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SwimmerJoe/*mama hahaha someone kill me plz*/[] = {
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_HUNTAIL,
    },
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_RELICANTH,
    },
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_GOREBYSS,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SwimmerSheila[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_CLOYSTER,
    },
    {
        .iv = 0,
        .lvl = 51,
        .species = SPECIES_LANTURN,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_GentlemanTerrance[] = {
    {
        .iv = 0,
        .lvl = 53,
        .species = SPECIES_STARAPTOR,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerNora[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_ZANGOOSE,
    },
    {
        .iv = 0,
        .lvl = 51,
        .species = SPECIES_CAMERUPT,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerGibson[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_SEVIPER,
    },
    {
        .iv = 0,
        .lvl = 51,
        .species = SPECIES_SHARPEDO,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SwimmerGrace[] = {
    {
        .iv = 0,
        .lvl = 51,
        .species = SPECIES_FLOATZEL,
    },
    {
        .iv = 0,
        .lvl = 51,
        .species = SPECIES_CORSOLA,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_YoungCoupleJoeyAndMai[] = {
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_NIDOKING,
    },
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_NIDOQUEEN,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerRobbie[] = {
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_SLAKING,
    },
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_SLOWBRO_G,
    },
    {
        .iv = 0,
        .lvl = 54,
        .species = SPECIES_RHYPERIOR,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerArnold[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_FLYGON,
    },
    {
        .iv = 0,
        .lvl = 51,
        .species = SPECIES_ARBOK,
    },
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_SWAMPERT,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperDante[] = {
    {
        .iv = 0,
        .lvl = 51,
        .species = SPECIES_PELIPPER,
    },
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_ALTARIA,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerConnie[] = {
    {
        .iv = 0,
        .lvl = 51,
        .species = SPECIES_HIPPOWDON,
    },
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_PERRSERKER,
    },
    {
        .iv = 0,
        .lvl = 53,
        .species = SPECIES_VENOMOTH,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_HikerDarius[] = {
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_GOLEM,
    },
    {
        .iv = 0,
        .lvl = 51,
        .species = SPECIES_PROBOPASS,
    },
    {
        .iv = 0,
        .lvl = 53,
        .species = SPECIES_GOLEM_A,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerZossie[] = {
    {
        .iv = 0,
        .lvl = 53,
        .species = SPECIES_PERSIAN_A,
    },
    {
        .iv = 0,
        .lvl = 53,
        .species = SPECIES_NINETALES_A,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_HikerTyron[] = {
    {
        .iv = 0,
        .lvl = 53,
        .species = SPECIES_RHYDON,
    },
    {
        .iv = 0,
        .lvl = 54,
        .species = SPECIES_PUPITAR,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerCameron[] = {
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_PILOSWINE,
    },
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_BANETTE,
    },
    {
        .iv = 0,
        .lvl = 53,
        .species = SPECIES_BRELOOM,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdPreston[] = {
    {
        .iv = 0,
        .lvl = 55,
        .species = SPECIES_AGGRON,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerRandall[] = {
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_ELECTRODE,
    },
    {
        .iv = 0,
        .lvl = 53,
        .species = SPECIES_MAROWAK,
    },
    {
        .iv = 0,
        .lvl = 53,
        .species = SPECIES_HERACROSS,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerLuca[] = {
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_PARASECT,
    },
    {
        .iv = 0,
        .lvl = 53,
        .species = SPECIES_INFERNAPE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RockerJimi[] = {
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_ELECTABUZZ,
    },
    {
        .iv = 0,
        .lvl = 54,
        .species = SPECIES_EXPLOUD,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerAnya[] = {
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_SEAKING,
    },
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_RAICHU_A,
    },
    {
        .iv = 0,
        .lvl = 53,
        .species = SPECIES_TAUROS_AQUA_P,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceCoupleBenAndKai[] = {
    {
        .iv = 0,
        .lvl = 51,
        .species = SPECIES_GYARADOS,
    },
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_CLOYSTER,
    },
    {
        .iv = 0,
        .lvl = 51,
        .species = SPECIES_HARIYAMA,
    },
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_MAWILE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_JugglerShawn[] = {
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_GIRAFARIG,
    },
    {
        .iv = 0,
        .lvl = 53,
        .species = SPECIES_EXEGGUTOR_A,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerGregory[] = {
    {
        .iv = 0,
        .lvl = 55,
        .species = SPECIES_MACHAMP,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerKatrina[] = {
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_BELLOSSOM,
    },
    {
        .iv = 0,
        .lvl = 53,
        .species = SPECIES_PURUGLY,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerKayden[] = {
    {
        .iv = 0,
        .lvl = 54,
        .species = SPECIES_MAGCARGO,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerNate[] = {
    {
        .iv = 0,
        .lvl = 53,
        .species = SPECIES_MEGANIUM,
    },
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_POLITOED,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerPriscilla[] = {
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_TORTERRA,
    },
    {
        .iv = 0,
        .lvl = 54,
        .species = SPECIES_QWILFISH,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerMina[] = {
    {
        .iv = 0,
        .lvl = 54,
        .species = SPECIES_CLEFABLE,
    },
    {
        .iv = 0,
        .lvl = 54,
        .species = SPECIES_AZUMARILL,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerJason[] = {
    {
        .iv = 0,
        .lvl = 55,
        .species = SPECIES_TORKOAL,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_FishermanCorey[] = {
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_BLASTOISE,
    },
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_FERALIGATR,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerTrina[] = {
    {
        .iv = 0,
        .lvl = 53,
        .species = SPECIES_PERSIAN,
    },
    {
        .iv = 0,
        .lvl = 53,
        .species = SPECIES_WOBBUFFET,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BoarderJohn[] = {
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_GLALIE,
    },
    {
        .iv = 0,
        .lvl = 53,
        .species = SPECIES_DEWGONG,
    },
};

const struct TrainerMonItemCustomMoves sParty_LeaderPryce1[] = {
    {
        .iv = 43,
        .lvl = 56,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_DEWGONG,
        .moves = {
            MOVE_PERISHSONG,
            MOVE_HAIL,
            MOVE_BLIZZARD,
            MOVE_WHIRLPOOL,
        },
        .ability = 0
    },
    {
        .iv = 131,
        .lvl = 57,
        .heldItem = ITEM_CHOICE_BAND,
        .species = SPECIES_NINETALES_A,
        .moves = {
            MOVE_DAZZLINGGLEAM,
            MOVE_BLIZZARD,
            MOVE_CALMMIND,
            MOVE_IRONTAIL,
        },
        .ability = 0
    },
    {
        .iv = 43,
        .lvl = 57,
        .heldItem = ITEM_ICE_GEM,
        .species = SPECIES_WALREIN,
        .moves = {
            MOVE_SUPERFANG,
            MOVE_TOXIC,
            MOVE_SURF,
            MOVE_BLIZZARD,
        },
        .ability = 1
    },
    {
        .iv = 91,
        .lvl = 59,
        .heldItem = ITEM_LIFE_ORB,
        .species = SPECIES_MAMOSWINE,
        .moves = {
            MOVE_PSYCHICFANGS,
            MOVE_EARTHQUAKE,
            MOVE_BLIZZARD,
            MOVE_HAIL,
        },
        .ability = 0
    },
    {
        .iv = 33,
        .lvl = 58,
        .heldItem = ITEM_ABOMASITE,
        .species = SPECIES_ABOMASNOW,
        .moves = {
            MOVE_ICEHAMMER,
            MOVE_GIGADRAIN,
            MOVE_WOODHAMMER,
            MOVE_EARTHQUAKE,
        },
        .ability = 1
    },
};

const struct TrainerMonItemCustomMoves sParty_ChampionKris[] = {
    {
        .iv = 91,
        .lvl = 70,
        .heldItem = ITEM_OCCA_BERRY,
        .species = SPECIES_LEDIAN,
        .moves = {
            MOVE_STARDUST_PUNCH,
            MOVE_FIRSTIMPRESSION,
            MOVE_CLOSECOMBAT,
            MOVE_BULLETPUNCH,
        },
        .ability = 0
    },
    {
        .iv = 123,
        .lvl = 71,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_MILOTIC,
        .moves = {
            MOVE_SURF,
            MOVE_AQUARING,
            MOVE_DAZZLINGGLEAM,
            MOVE_BLIZZARD,
        },
        .ability = 1
    },
    {
        .iv = 53,
        .lvl = 72,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_SUNFLORA,
        .moves = {
            MOVE_SUBSTITUTE,
            MOVE_LEECHSEED,
            MOVE_SEEDFLARE,
            MOVE_FLAMETHROWER,
        },
        .ability = 1
    },
    {
        .iv = 93,
        .lvl = 71,
        .heldItem = ITEM_CHOICE_SPECS,
        .species = SPECIES_NINETALES,
        .moves = {
            MOVE_OVERHEAT,
            MOVE_DAZZLINGGLEAM,
            MOVE_WILLOWISP,
            MOVE_ENERGYBALL,
        },
        .ability = 0
    },
    {
        .iv = 34,
        .lvl = 72,
        .heldItem = ITEM_COLBUR_BERRY,
        .species = SPECIES_MISMAGIUS,
        .moves = {
            MOVE_SHADOWBALL,
            MOVE_POWERGEM,
            MOVE_DARKPULSE,
            MOVE_WILLOWISP,
        },
        .ability = 1
    },
    {
        .iv = 61,
        .lvl = 73,
        .heldItem = ITEM_LUXRANITE,
        .species = SPECIES_LUXRAY,
        .moves = {
            MOVE_PSYCHICFANGS,
            MOVE_WILDCHARGE,
            MOVE_PLAYROUGH,
            MOVE_ICEFANG,
        },
        .ability = 2
    },
};

const struct TrainerMonItemCustomMoves sParty_ChampionEthan[] = {
    {
        .iv = 93,
        .lvl = 70,
        .heldItem = ITEM_OCCA_BERRY,
        .species = SPECIES_ARIADOS,
        .moves = {
            MOVE_POISONJAB,
            MOVE_FIRSTIMPRESSION,
            MOVE_LEECHLIFE,
            MOVE_PSYCHIC,
        },
        .ability = 0
    },
    {
        .iv = 123,
        .lvl = 71,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_MILOTIC,
        .moves = {
            MOVE_SURF,
            MOVE_AQUARING,
            MOVE_DAZZLINGGLEAM,
            MOVE_BLIZZARD,
        },
        .ability = 1
    },
    {
        .iv = 53,
        .lvl = 72,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_SUNFLORA,
        .moves = {
            MOVE_SUBSTITUTE,
            MOVE_LEECHSEED,
            MOVE_SEEDFLARE,
            MOVE_FLAMETHROWER,
        },
        .ability = 1
    },
    {
        .iv = 31,
        .lvl = 71,
        .heldItem = ITEM_LIFE_ORB,
        .species = SPECIES_ARCANINE,
        .moves = {
            MOVE_ROAR,
            MOVE_FLAREBLITZ,
            MOVE_WILDCHARGE,
            MOVE_EXTREMESPEED,
        },
        .ability = 1
    },
    {
        .iv = 63,
        .lvl = 72,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_DRIFBLIM,
        .moves = {
            MOVE_SHADOWBALL,
            MOVE_ENERGYBALL,
            MOVE_HURRICANE,
            MOVE_WILLOWISP,
        },
        .ability = 2
    },
    {
        .iv = 61,
        .lvl = 73,
        .heldItem = ITEM_LUXRANITE,
        .species = SPECIES_LUXRAY,
        .moves = {
            MOVE_PSYCHICFANGS,
            MOVE_WILDCHARGE,
            MOVE_PLAYROUGH,
            MOVE_ICEFANG,
        },
        .ability = 2
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SkierLenora[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_MR_MIME_G,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BoarderBenny[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_PILOSWINE,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_SEALEO,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SkierBrenda[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_DEWGONG,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_ABOMASNOW,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BoarderChester[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_DEWGONG,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_SEALEO,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_GLALIE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_HikerWilton[] = {
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_HIPPOPOTAS_F,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_GOLEM,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdFlynn[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_EXPLOUD,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_HikerJacob[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_GLIGAR,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_GRAVELER,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_SLUGMA,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_DUGTRIO_A,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerRoger[] = {
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_KECLEON,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_ELECTRODE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_HikerReed[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_DUGTRIO,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_GASTRODON,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerMelina[] = {
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_FARFETCHD,
    },
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_FARFETCHD_G,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PokeFanCarter[] = {
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_CLEFABLE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BeautyTaylor[] = {
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_SPINDA,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_BANETTE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_HikerBeck[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_CAMERUPT,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_TORKOAL,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_HikerMarlon[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_CRADILY,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_NOSEPASS,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_RAMPARDOS,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_HikerBenson[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_RHYDON,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_MAGCARGO,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_CamperMike[] = {
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_TROPIUS,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_CACTURNE,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_LUDICOLO,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_CamperStanley[] = {
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_MOTHIM,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_HUNTAIL,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PicnickerWendy[] = {
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_WORMADAM,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_GOREBYSS,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_BlackBeltAtsushi[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_PRIMEAPE,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_FARFETCHD_G,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt42[] = {
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_AIPOM,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt43[] = {
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_CARNIVINE,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_FURRET,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt44[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_ELECTRODE,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_MIGHTYENA,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketGrunt45[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_LINOONE_G,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_DUGTRIO,
    },
};

const struct TrainerMonItemCustomMoves sParty_Silver2Quilava[] = {
    {
        .iv = 0,
        .lvl = 16,
        .heldItem = ITEM_NONE,
        .species = SPECIES_GASTLY,
        .moves = {
            MOVE_HYPNOSIS,
            MOVE_NIGHTSHADE,
            MOVE_CURSE,
            MOVE_PSYWAVE,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 17,
        .heldItem = ITEM_NONE,
        .species = SPECIES_ZUBAT,
        .moves = {
            MOVE_ASTONISH,
            MOVE_TOXIC,
            MOVE_WINGATTACK,
            MOVE_VENOSHOCK,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 18,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_QUILAVA,
        .moves = {
            MOVE_EMBER,
            MOVE_QUICKATTACK,
            MOVE_DIG,
            MOVE_SMOKESCREEN,
        },
        .ability = 1
    },
};

const struct TrainerMonItemCustomMoves sParty_Silver2Croconaw[] = {
    {
        .iv = 0,
        .lvl = 16,
        .heldItem = ITEM_NONE,
        .species = SPECIES_GASTLY,
        .moves = {
            MOVE_HYPNOSIS,
            MOVE_NIGHTSHADE,
            MOVE_CURSE,
            MOVE_PSYWAVE,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 17,
        .heldItem = ITEM_NONE,
        .species = SPECIES_ZUBAT,
        .moves = {
            MOVE_ASTONISH,
            MOVE_TOXIC,
            MOVE_WINGATTACK,
            MOVE_VENOSHOCK,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 18,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_CROCONAW,
        .moves = {
            MOVE_WATERGUN,
            MOVE_BITE,
            MOVE_SCARYFACE,
            MOVE_CUT,
        },
        .ability = 1
    },
};

const struct TrainerMonItemCustomMoves sParty_Silver2Bayleef[] = {
    {
        .iv = 0,
        .lvl = 16,
        .heldItem = ITEM_NONE,
        .species = SPECIES_GASTLY,
        .moves = {
            MOVE_HYPNOSIS,
            MOVE_NIGHTSHADE,
            MOVE_CURSE,
            MOVE_PSYWAVE,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 17,
        .heldItem = ITEM_NONE,
        .species = SPECIES_ZUBAT,
        .moves = {
            MOVE_ASTONISH,
            MOVE_TOXIC,
            MOVE_WINGATTACK,
            MOVE_VENOSHOCK,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 18,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_BAYLEEF,
        .moves = {
            MOVE_RAZORLEAF,
            MOVE_POISONPOWDER,
            MOVE_LEECHSEED,
            MOVE_REFLECT,
        },
        .ability = 1
    },
};

const struct TrainerMonItemCustomMoves sParty_RivalSilver3Quilava[] = {
    {
        .iv = 0,
        .lvl = 25,
        .heldItem = ITEM_NONE,
        .species = SPECIES_HAUNTER,
        .moves = {
            MOVE_CURSE,
            MOVE_SHADOWSNEAK,
            MOVE_CONFUSERAY,
            MOVE_SLUDGEBOMB,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 24,
        .heldItem = ITEM_EVIOLITE,
        .species = SPECIES_SNEASEL,
        .moves = {
            MOVE_ICEPUNCH,
            MOVE_PURSUIT,
            MOVE_DOUBLETEAM,
            MOVE_METALCLAW,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 26,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_QUILAVA,
        .moves = {
            MOVE_BULLDOZE,
            MOVE_INCINERATE,
            MOVE_ROLLOUT,
            MOVE_DEFENSECURL,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 25,
        .heldItem = ITEM_NONE,
        .species = SPECIES_GOLBAT,
        .moves = {
            MOVE_BITE,
            MOVE_WINGATTACK,
            MOVE_CONFUSERAY,
            MOVE_TOXIC,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_RivalSilver3Croconaw[] = {
    {
        .iv = 0,
        .lvl = 25,
        .heldItem = ITEM_NONE,
        .species = SPECIES_HAUNTER,
        .moves = {
            MOVE_CURSE,
            MOVE_SHADOWSNEAK,
            MOVE_CONFUSERAY,
            MOVE_SLUDGEBOMB,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 24,
        .heldItem = ITEM_EVIOLITE,
        .species = SPECIES_SNEASEL,
        .moves = {
            MOVE_ICEPUNCH,
            MOVE_PURSUIT,
            MOVE_DOUBLETEAM,
            MOVE_METALCLAW,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 26,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_CROCONAW,
        .moves = {
            MOVE_BITE,
            MOVE_ICEFANG,
            MOVE_WATERPULSE,
            MOVE_BRICKBREAK,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 25,
        .heldItem = ITEM_NONE,
        .species = SPECIES_GOLBAT,
        .moves = {
            MOVE_BITE,
            MOVE_WINGATTACK,
            MOVE_CONFUSERAY,
            MOVE_TOXIC,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_RivalSilver3Bayleef[] = {
    {
        .iv = 0,
        .lvl = 25,
        .heldItem = ITEM_NONE,
        .species = SPECIES_HAUNTER,
        .moves = {
            MOVE_CURSE,
            MOVE_SHADOWSNEAK,
            MOVE_CONFUSERAY,
            MOVE_SLUDGEBOMB,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 24,
        .heldItem = ITEM_EVIOLITE,
        .species = SPECIES_SNEASEL,
        .moves = {
            MOVE_ICEPUNCH,
            MOVE_PURSUIT,
            MOVE_DOUBLETEAM,
            MOVE_METALCLAW,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 26,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_BAYLEEF,
        .moves = {
            MOVE_MAGICALLEAF,
            MOVE_POISONPOWDER,
            MOVE_LEECHSEED,
            MOVE_FAIRYWIND,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 25,
        .heldItem = ITEM_NONE,
        .species = SPECIES_GOLBAT,
        .moves = {
            MOVE_BITE,
            MOVE_WINGATTACK,
            MOVE_CONFUSERAY,
            MOVE_TOXIC,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_RivalSilver4Typhlosion[] = {
    {
        .iv = 0,
        .lvl = 46,
        .heldItem = ITEM_EVIOLITE,
        .species = SPECIES_GOLBAT,
        .moves = {
            MOVE_LEECHLIFE,
            MOVE_PSYCHICFANGS,
            MOVE_CROSSPOISON,
            MOVE_ACROBATICS,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 46,
        .heldItem = ITEM_LUM_BERRY,
        .species = SPECIES_WEAVILE,
        .moves = {
            MOVE_NIGHTSLASH,
            MOVE_ICICLECRASH,
            MOVE_UTURN,
            MOVE_DOUBLETEAM,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 47,
        .heldItem = ITEM_LIFE_ORB,
        .species = SPECIES_ELECTABUZZ,
        .moves = {
            MOVE_THUNDERWAVE,
            MOVE_THUNDERPUNCH,
            MOVE_ICEPUNCH,
            MOVE_BRICKBREAK,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 47,
        .heldItem = ITEM_EVIOLITE,
        .species = SPECIES_KADABRA,
        .moves = {
            MOVE_SIGNALBEAM,
            MOVE_CALMMIND,
            MOVE_PSYCHIC,
            MOVE_DARKPULSE,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 48,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_TYPHLOSION,
        .moves = {
            MOVE_EARTHPOWER,
            MOVE_NASTYPLOT,
            MOVE_MAGMA_GEYSER,
            MOVE_DOUBLEEDGE,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_RivalSilver4Feraligatr[] = {
    {
        .iv = 0,
        .lvl = 46,
        .heldItem = ITEM_EVIOLITE,
        .species = SPECIES_GOLBAT,
        .moves = {
            MOVE_LEECHLIFE,
            MOVE_PSYCHICFANGS,
            MOVE_CROSSPOISON,
            MOVE_ACROBATICS,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 46,
        .heldItem = ITEM_LUM_BERRY,
        .species = SPECIES_WEAVILE,
        .moves = {
            MOVE_NIGHTSLASH,
            MOVE_ICICLECRASH,
            MOVE_UTURN,
            MOVE_DOUBLETEAM,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 47,
        .heldItem = ITEM_LIFE_ORB,
        .species = SPECIES_ELECTABUZZ,
        .moves = {
            MOVE_THUNDERWAVE,
            MOVE_THUNDERPUNCH,
            MOVE_ICEPUNCH,
            MOVE_BRICKBREAK,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 47,
        .heldItem = ITEM_EVIOLITE,
        .species = SPECIES_KADABRA,
        .moves = {
            MOVE_SIGNALBEAM,
            MOVE_CALMMIND,
            MOVE_PSYCHIC,
            MOVE_DARKPULSE,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 48,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_FERALIGATR,
        .moves = {
            MOVE_DRAGONCLAW,
            MOVE_AQUA_SCALES,
            MOVE_ICEFANG,
            MOVE_DRAGONDANCE,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_RivalSilver4Meganium[] = {
    {
        .iv = 0,
        .lvl = 46,
        .heldItem = ITEM_EVIOLITE,
        .species = SPECIES_GOLBAT,
        .moves = {
            MOVE_LEECHLIFE,
            MOVE_PSYCHICFANGS,
            MOVE_CROSSPOISON,
            MOVE_ACROBATICS,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 46,
        .heldItem = ITEM_LUM_BERRY,
        .species = SPECIES_WEAVILE,
        .moves = {
            MOVE_NIGHTSLASH,
            MOVE_ICICLECRASH,
            MOVE_UTURN,
            MOVE_DOUBLETEAM,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 47,
        .heldItem = ITEM_LIFE_ORB,
        .species = SPECIES_ELECTABUZZ,
        .moves = {
            MOVE_THUNDERWAVE,
            MOVE_THUNDERPUNCH,
            MOVE_ICEPUNCH,
            MOVE_BRICKBREAK,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 47,
        .heldItem = ITEM_EVIOLITE,
        .species = SPECIES_KADABRA,
        .moves = {
            MOVE_SIGNALBEAM,
            MOVE_CALMMIND,
            MOVE_PSYCHIC,
            MOVE_DARKPULSE,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 48,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_MEGANIUM,
        .moves = {
            MOVE_DAZZLINGGLEAM,
            MOVE_LIGHTSCREEN,
            MOVE_FLORAL_STREAM,
            MOVE_ANCIENTPOWER,
        },
        .ability = 0
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PartnerLance[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_AERODACTYL,
    },
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_CHARIZARD,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_PartnerSilver[] = {
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_GOLBAT,
    },
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_WEAVILE,
    },
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_ELECTABUZZ,
    },
};

const struct TrainerMonItemCustomMoves sParty_EliteFourAile1[] = {
    {
        .iv = 124,
        .lvl = 65,
        .heldItem = ITEM_FLAME_ORB,
        .species = SPECIES_URSARING,
        .moves = {
            MOVE_FACADE,
            MOVE_SWORDSDANCE,
            MOVE_CLOSECOMBAT,
            MOVE_ROCKSLIDE,
        },
        .ability = 1
    },
    {
        .iv = 62,
        .lvl = 65,
        .heldItem = ITEM_SILK_SCARF,
        .species = SPECIES_DELCATTY,
        .moves = {
            MOVE_SUCKERPUNCH,
            MOVE_FAKEOUT,
            MOVE_HEALBELL,
            MOVE_GUNKSHOT,
        },
        .ability = 2
    },
    {
        .iv = 54,
        .lvl = 66,
        .heldItem = ITEM_FIGY_BERRY,
        .species = SPECIES_SNORLAX,
        .moves = {
            MOVE_CURSE,
            MOVE_RECYCLE,
            MOVE_DARKESTLARIAT,
            MOVE_FACADE,
        },
        .ability = 1
    },
    {
        .iv = 41,
        .lvl = 66,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_BLISSEY,
        .moves = {
            MOVE_SEISMICTOSS,
            MOVE_TOXIC,
            MOVE_SOFTBOILED,
            MOVE_HEALBELL,
        },
        .ability = 1
    },
    {
        .iv = 31,
        .lvl = 68,
        .heldItem = ITEM_KANGASKHANITE,
        .species = SPECIES_KANGASKHAN,
        .moves = {
            MOVE_SHADOWCLAW,
            MOVE_FAKEOUT,
            MOVE_ZENHEADBUTT,
            MOVE_BODYSLAM,
        },
        .ability = 1
    },
};

const struct TrainerMonItemCustomMoves sParty_EliteFourWill1[] = {
    {
        .iv = 117,
        .lvl = 65,
        .heldItem = ITEM_ROCKY_HELMET,
        .species = SPECIES_XATU,
        .moves = {
            MOVE_PSYSHOCK,
            MOVE_ROOST,
            MOVE_HEATWAVE,
            MOVE_UTURN,
        },
        .ability = 0
    },
    {
        .iv = 126,
        .lvl = 65,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_BRONZONG,
        .moves = {
            MOVE_GYROBALL,
            MOVE_TRICKROOM,
            MOVE_EARTHQUAKE,
            MOVE_EXPLOSION,
        },
        .ability = 0
    },
    {
        .iv = 92,
        .lvl = 66,
        .heldItem = ITEM_LIFE_ORB,
        .species = SPECIES_RAPIDASH_G,
        .moves = {
            MOVE_ZENHEADBUTT,
            MOVE_PLAYROUGH,
            MOVE_CHARM,
            MOVE_MEGAHORN,
        },
        .ability = 0
    },
    {
        .iv = 101,
        .lvl = 66,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_SLOWKING,
        .moves = {
            MOVE_SCALD,
            MOVE_SLACKOFF,
            MOVE_CALMMIND,
            MOVE_PSYSHOCK,
        },
        .ability = 0
    },
    {
        .iv = 94,
        .lvl = 68,
        .heldItem = ITEM_GARDEVOIRITE,
        .species = SPECIES_GARDEVOIR,
        .moves = {
            MOVE_HYPERVOICE,
            MOVE_PSYSHOCK,
            MOVE_WILLOWISP,
            MOVE_FOCUSBLAST,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_EliteFourKoga1[] = {
    {
        .iv = 34,
        .lvl = 65,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_ROSERADE,
        .moves = {
            MOVE_GIGADRAIN,
            MOVE_SLUDGEBOMB,
            MOVE_TOXICSPIKES,
            MOVE_SLEEPPOWDER,
        },
        .ability = 1
    },
    {
        .iv = 74,
        .lvl = 65,
        .heldItem = ITEM_BLACK_SLUDGE,
        .species = SPECIES_MUK,
        .moves = {
            MOVE_MINIMIZE,
            MOVE_GUNKSHOT,
            MOVE_TOXIC,
            MOVE_VENOMDRENCH,
        },
        .ability = 2
    },
    {
        .iv = 34,
        .lvl = 66,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_SLOWKING_G,
        .moves = {
            MOVE_EERIESPELL,
            MOVE_DARKPULSE,
            MOVE_TOXIC,
            MOVE_SLUDGEWAVE,
        },
        .ability = 1
    },
    {
        .iv = 32,
        .lvl = 66,
        .heldItem = ITEM_SHARP_BEAK,
        .species = SPECIES_CROBAT,
        .moves = {
            MOVE_BRAVEBIRD,
            MOVE_SUPERFANG,
            MOVE_DOUBLETEAM,
            MOVE_ROOST,
        },
        .ability = 1
    },
    {
        .iv = 32,
        .lvl = 68,
        .heldItem = ITEM_BEEDRILLITE,
        .species = SPECIES_BEEDRILL,
        .moves = {
            MOVE_UTURN,
            MOVE_POISONJAB,
            MOVE_DRILLRUN,
            MOVE_KNOCKOFF,
        },
        .ability = 1
    },
};

const struct TrainerMonItemCustomMoves sParty_EliteFourKaren1[] = {
    {
        .iv = 13,
        .lvl = 65,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_UMBREON,
        .moves = {
            MOVE_WISH,
            MOVE_PROTECT,
            MOVE_TOXIC,
            MOVE_FOULPLAY,
        },
        .ability = 1
    },
    {
        .iv = 45,
        .lvl = 65,
        .heldItem = ITEM_CHOICE_SCARF,
        .species = SPECIES_SHIFTRY,
        .moves = {
            MOVE_LEAFBLADE,
            MOVE_ROCKSLIDE,
            MOVE_FOCUSBLAST,
            MOVE_HEATWAVE,
        },
        .ability = 1
    },
    {
        .iv = 62,
        .lvl = 66,
        .heldItem = ITEM_BLACK_SLUDGE,
        .species = SPECIES_DRAPION,
        .moves = {
            MOVE_SWORDSDANCE,
            MOVE_CRUNCH,
            MOVE_EARTHPOWER,
            MOVE_POISONJAB,
        },
        .ability = 2
    },
    {
        .iv = 19,
        .lvl = 66,
        .heldItem = ITEM_LIFE_ORB,
        .species = SPECIES_HOUNDOOM,
        .moves = {
            MOVE_PURSUIT,
            MOVE_SUCKERPUNCH,
            MOVE_FLAMETHROWER,
            MOVE_ENERGYBALL,
        },
        .ability = 1
    },
    {
        .iv = 127,
        .lvl = 68,
        .heldItem = ITEM_TYRANITARITE,
        .species = SPECIES_TYRANITAR,
        .moves = {
            MOVE_STONEEDGE,
            MOVE_PURSUIT,
            MOVE_EARTHQUAKE,
            MOVE_FIREPUNCH,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_LeaderFalkner2[] = {
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_STARAPTOR,
        .moves = {
            MOVE_CLOSECOMBAT,
            MOVE_ROOST,
            MOVE_BRAVEBIRD,
            MOVE_TAILWIND,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_SHARP_BEAK,
        .species = SPECIES_CROBAT,
        .moves = {
            MOVE_BRAVEBIRD,
            MOVE_ROOST,
            MOVE_TAUNT,
            MOVE_SUPERFANG,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_CHOICE_SCARF,
        .species = SPECIES_HONCHKROW,
        .moves = {
            MOVE_BRAVEBIRD,
            MOVE_NIGHTSLASH,
            MOVE_HEATWAVE,
            MOVE_ICYWIND,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_ROCKY_HELMET,
        .species = SPECIES_SKARMORY,
        .moves = {
            MOVE_SPIKES,
            MOVE_ROOST,
            MOVE_IRONDEFENSE,
            MOVE_IRONHEAD,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_PIDGEOTITE,
        .species = SPECIES_PIDGEOT,
        .moves = {
            MOVE_HURRICANE,
            MOVE_ROOST,
            MOVE_HEATWAVE,
            MOVE_UTURN,
        },
        .ability = 1
    },
};

const struct TrainerMonItemCustomMoves sParty_LeaderBugsy2[] = {
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_ROCKY_HELMET,
        .species = SPECIES_SHUCKLE,
        .moves = {
            MOVE_POWERSPLIT,
            MOVE_TOXIC,
            MOVE_STONEEDGE,
            MOVE_CURSE,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_QUICK_CLAW,
        .species = SPECIES_ARMALDO,
        .moves = {
            MOVE_SWORDSDANCE,
            MOVE_XSCISSOR,
            MOVE_STONEEDGE,
            MOVE_EARTHQUAKE,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_CHOICE_BAND,
        .species = SPECIES_HERACROSS,
        .moves = {
            MOVE_SHADOWCLAW,
            MOVE_MEGAHORN,
            MOVE_STONEEDGE,
            MOVE_CLOSECOMBAT,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_FOCUS_SASH,
        .species = SPECIES_SHEDINJA,
        .moves = {
            MOVE_XSCISSOR,
            MOVE_SHADOWSNEAK,
            MOVE_WILLOWISP,
            MOVE_SWORDSDANCE,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_SCIZORITE,
        .species = SPECIES_SCIZOR,
        .moves = {
            MOVE_SWORDSDANCE,
            MOVE_BULLETPUNCH,
            MOVE_ROOST,
            MOVE_KNOCKOFF,
        },
        .ability = 1
    },
};

const struct TrainerMonItemCustomMoves sParty_LeaderWhitney2[] = {
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_LIFE_ORB,
        .species = SPECIES_GRANBULL,
        .moves = {
            MOVE_SUPERFANG,
            MOVE_CRUNCH,
            MOVE_PLAYROUGH,
            MOVE_HEALBELL,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_CLEFABLE,
        .moves = {
            MOVE_MOONBLAST,
            MOVE_SOFTBOILED,
            MOVE_LIGHTSCREEN,
            MOVE_THUNDERWAVE,
        },
        .ability = 2
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_LIFE_ORB,
        .species = SPECIES_TOGEKISS,
        .moves = {
            MOVE_NASTYPLOT,
            MOVE_AIRSLASH,
            MOVE_ROOST,
            MOVE_HEALBELL,
        },
        .ability = 2
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_LUM_BERRY,
        .species = SPECIES_MILTANK,
        .moves = {
            MOVE_BRICKBREAK,
            MOVE_ZENHEADBUTT,
            MOVE_PLAYROUGH,
            MOVE_MILKDRINK,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_MAWILITE,
        .species = SPECIES_MAWILE,
        .moves = {
            MOVE_SWORDSDANCE,
            MOVE_PLAYROUGH,
            MOVE_SUCKERPUNCH,
            MOVE_KNOCKOFF,
        },
        .ability = 1
    },
};

const struct TrainerMonItemCustomMoves sParty_LeaderMorty2[] = {
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_DRIFBLIM,
        .moves = {
            MOVE_SUBSTITUTE,
            MOVE_CALMMIND,
            MOVE_SHADOWBALL,
            MOVE_AURASPHERE,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_THICK_CLUB,
        .species = SPECIES_MAROWAK_A,
        .moves = {
            MOVE_WILLOWISP,
            MOVE_SHADOWBONE,
            MOVE_BONEMERANG,
            MOVE_FLAREBLITZ,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_KASIB_BERRY,
        .species = SPECIES_MISMAGIUS,
        .moves = {
            MOVE_SHADOWBALL,
            MOVE_POWERGEM,
            MOVE_PERISHSONG,
            MOVE_PAINSPLIT,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_BLACK_SLUDGE,
        .species = SPECIES_GENGAR,
        .moves = {
            MOVE_SUBSTITUTE,
            MOVE_NASTYPLOT,
            MOVE_SHADOWBALL,
            MOVE_DAZZLINGGLEAM,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_SABLENITE,
        .species = SPECIES_SABLEYE,
        .moves = {
            MOVE_KNOCKOFF,
            MOVE_WILLOWISP,
            MOVE_PROTECT,
            MOVE_RECOVER,
        },
        .ability = 1
    },
};

const struct TrainerMonItemCustomMoves sParty_LeaderChuck2[] = {
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_CHOICE_SCARF,
        .species = SPECIES_SIRFETCHD,
        .moves = {
            MOVE_SWORDSDANCE,
            MOVE_METEORASSAULT,
            MOVE_BRAVEBIRD,
            MOVE_ROOST,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_LIFE_ORB,
        .species = SPECIES_LUCARIO,
        .moves = {
            MOVE_CLOSECOMBAT,
            MOVE_METEORMASH,
            MOVE_EXTREMESPEED,
            MOVE_DARKPULSE,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_HARIYAMA,
        .moves = {
            MOVE_BELLYDRUM,
            MOVE_DRAINPUNCH,
            MOVE_THUNDERPUNCH,
            MOVE_POISONJAB,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_WATER_GEM,
        .species = SPECIES_POLIWRATH,
        .moves = {
            MOVE_WAVECRASH,
            MOVE_CLOSECOMBAT,
            MOVE_ICEPUNCH,
            MOVE_DARKESTLARIAT,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_GALLADITE,
        .species = SPECIES_GALLADE,
        .moves = {
            MOVE_SWORDSDANCE,
            MOVE_CLOSECOMBAT,
            MOVE_ZENHEADBUTT,
            MOVE_KNOCKOFF,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_LeaderJasmine2[] = {
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_AIR_BALLOON,
        .species = SPECIES_MAGNEZONE,
        .moves = {
            MOVE_IRONDEFENSE,
            MOVE_THUNDERBOLT,
            MOVE_BODYPRESS,
            MOVE_STEELBEAM,
        },
        .ability = 2
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_CHOICE_BAND,
        .species = SPECIES_AGGRON,
        .moves = {
            MOVE_HEADSMASH,
            MOVE_LOWKICK,
            MOVE_BODYPRESS,
            MOVE_HEATCRASH,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_PERRSERKER,
        .moves = {
            MOVE_IRONHEAD,
            MOVE_FAKEOUT,
            MOVE_SWAGGER,
            MOVE_PLAYROUGH,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_WATER_GEM,
        .species = SPECIES_EMPOLEON,
        .moves = {
            MOVE_SCALD,
            MOVE_TOXIC,
            MOVE_KNOCKOFF,
            MOVE_STEELBEAM,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_STEELIXITE,
        .species = SPECIES_STEELIX,
        .moves = {
            MOVE_GYROBALL,
            MOVE_EARTHQUAKE,
            MOVE_CURSE,
            MOVE_BODYPRESS,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_LeaderClair2[] = {
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_LIFE_ORB,
        .species = SPECIES_AMPHAROS,
        .moves = {
            MOVE_VOLTSWITCH,
            MOVE_HEALBELL,
            MOVE_THUNDERWAVE,
            MOVE_DRACOMETEOR,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_CHESTO_BERRY,
        .species = SPECIES_KINGDRA,
        .moves = {
            MOVE_REST,
            MOVE_WATERFALL,
            MOVE_DRAGONDANCE,
            MOVE_OUTRAGE,
        },
        .ability = 2
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_CHOICE_SCARF,
        .species = SPECIES_FLYGON,
        .moves = {
            MOVE_EARTHQUAKE,
            MOVE_OUTRAGE,
            MOVE_UTURN,
            MOVE_DRAGONCLAW,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_ALTARIA,
        .moves = {
            MOVE_DRAGONDANCE,
            MOVE_FACADE,
            MOVE_ROOST,
            MOVE_DRAGONPULSE,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 100,
        .heldItem = ITEM_GYARADOSITE,
        .species = SPECIES_GYARADOS,
        .moves = {
            MOVE_DRAGONDANCE,
            MOVE_CRUNCH,
            MOVE_EARTHQUAKE,
            MOVE_SUBSTITUTE,
        },
        .ability = 1
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_HexManiacBlair[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_DRIFLOON,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_HAUNTER,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerAlexia[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_BELLOSSOM,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_LANTURN,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerRiley[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_ARBOK,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_DUGTRIO_A,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_AceTrainerAndriy[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_RELICANTH,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_STARAVIA,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_HikerDerek[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_RHYDON,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_RAMPARDOS,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_HexManiacGermana[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_MISDREAVUS,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_DUSCLOPS,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_RocketScientist4[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_MUK_A,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_WEEZING_G,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_MR_MIME_G,
    },
};

const struct TrainerMonItemCustomMoves sParty_ChallengerJoey1[] = {
    {
        .iv = 115,
        .lvl = 85,
        .heldItem = ITEM_ROCKY_HELMET,
        .species = SPECIES_SABLEYE,
        .moves = {
            MOVE_WILLOWISP,
            MOVE_ENCORE,
            MOVE_KNOCKOFF,
            MOVE_RECOVER,
        },
        .ability = 0
    },
    {
        .iv = 90,
        .lvl = 85,
        .heldItem = ITEM_FLAME_ORB,
        .species = SPECIES_RATICATE,
        .moves = {
            MOVE_SUPERFANG,
            MOVE_SKITTERSMACK,
            MOVE_SUCKERPUNCH,
            MOVE_UTURN,
        },
        .ability = 2
    },
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_CHOICE_SCARF,
        .species = SPECIES_STARAPTOR,
        .moves = {
            MOVE_BRAVEBIRD,
            MOVE_CLOSECOMBAT,
            MOVE_UTURN,
            MOVE_DOUBLEEDGE,
        },
        .ability = 1
    },
    {
        .iv = 33,
        .lvl = 85,
        .heldItem = ITEM_CHOICE_SPECS,
        .species = SPECIES_CHIMECHO,
        .moves = {
            MOVE_PSYCHIC,
            MOVE_BOOMBURST,
            MOVE_CALMMIND,
            MOVE_THUNDERWAVE,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_LIFE_ORB,
        .species = SPECIES_TAUROS_BLAZE_P,
        .moves = {
            MOVE_RAGINGBULL,
            MOVE_CLOSECOMBAT,
            MOVE_OUTRAGE,
            MOVE_BULKUP,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_FIGHTINIUM_Z,
        .species = SPECIES_BRELOOM,
        .moves = {
            MOVE_SPORE,
            MOVE_MACHPUNCH,
            MOVE_BULLETSEED,
            MOVE_BULLETPUNCH,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_ChallengerSayo1[] = {
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_CHERRIM,
        .moves = {
            MOVE_SUNNYDAY,
            MOVE_SYNTHESIS,
            MOVE_SEEDFLARE,
            MOVE_DAZZLINGGLEAM,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_MISMAGIUS,
        .moves = {
            MOVE_NASTYPLOT,
            MOVE_SHADOWBALL,
            MOVE_DRAININGKISS,
            MOVE_TAUNT,
        },
        .ability = 1
    },
    {
        .iv = 32,
        .lvl = 85,
        .heldItem = ITEM_FLAME_ORB,
        .species = SPECIES_URSALUNA,
        .moves = {
            MOVE_HEADLONGRUSH,
            MOVE_FACADE,
            MOVE_ICEPUNCH,
            MOVE_PLAYROUGH,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_CHOICE_SCARF,
        .species = SPECIES_MASQUERAIN,
        .moves = {
            MOVE_QUIVERDANCE,
            MOVE_SURF,
            MOVE_BUGBUZZ,
            MOVE_STICKYWEB,
        },
        .ability = 1
    },
    {
        .iv = 66,
        .lvl = 85,
        .heldItem = ITEM_ASSAULT_VEST,
        .species = SPECIES_AZUMARILL,
        .moves = {
            MOVE_PLAYROUGH,
            MOVE_AQUAJET,
            MOVE_WAVECRASH,
            MOVE_SUPERPOWER,
        },
        .ability = 2
    },
    {
        .iv = 93,
        .lvl = 85,
        .heldItem = ITEM_CHOICE_SPECS,
        .species = SPECIES_ESPEON,
        .moves = {
            MOVE_PSYCHIC,
            MOVE_DAZZLINGGLEAM,
            MOVE_SHADOWBALL,
            MOVE_TRICK,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_ChallengerLorelei1[] = {
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_NEVER_MELT_ICE,
        .species = SPECIES_SANDSLASH_A,
        .moves = {
            MOVE_SWORDSDANCE,
            MOVE_ICESHARD,
            MOVE_SMARTSTRIKE,
            MOVE_DIG,
        },
        .ability = 1
    },
    {
        .iv = 93,
        .lvl = 85,
        .heldItem = ITEM_CHOICE_SCARF,
        .species = SPECIES_FROSLASS,
        .moves = {
            MOVE_SHADOWBALL,
            MOVE_SPIKES,
            MOVE_DESTINYBOND,
            MOVE_ICYWIND,
        },
        .ability = 0
    },
    {
        .iv = 41,
        .lvl = 85,
        .heldItem = ITEM_CHESTO_BERRY,
        .species = SPECIES_LAPRAS,
        .moves = {
            MOVE_FREEZEDRY,
            MOVE_SURF,
            MOVE_REST,
            MOVE_BODYPRESS,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_CHOICE_SPECS,
        .species = SPECIES_GLACEON,
        .moves = {
            MOVE_CALMMIND,
            MOVE_FREEZEDRY,
            MOVE_WATERPULSE,
            MOVE_SHADOWBALL,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_ICIUM_Z,
        .species = SPECIES_GLALIE,
        .moves = {
            MOVE_SHEERCOLD,
            MOVE_FREEZEDRY,
            MOVE_TAUNT,
            MOVE_PROTECT,
        },
        .ability = 0
    },
    {
        .iv = 33,
        .lvl = 85,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_MR_RIME,
        .moves = {
            MOVE_PSYCHIC,
            MOVE_FREEZEDRY,
            MOVE_STOMPINGTANTRUM,
            MOVE_DAZZLINGGLEAM,
        },
        .ability = 1
    },
};

const struct TrainerMonItemCustomMoves sParty_ChallengerClair1[] = {
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_LIFE_ORB,
        .species = SPECIES_AMPHAROS,
        .moves = {
            MOVE_DISCHARGE,
            MOVE_CHARGE,
            MOVE_DRAGONPULSE,
            MOVE_FOCUSBLAST,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_AGGRON,
        .moves = {
            MOVE_STEALTHROCK,
            MOVE_HEAVYSLAM,
            MOVE_EARTHQUAKE,
            MOVE_FIREPUNCH,
        },
        .ability = 2
    },
    {
        .iv = 91,
        .lvl = 85,
        .heldItem = ITEM_CHESTO_BERRY,
        .species = SPECIES_ANNIHILAPE,
        .moves = {
            MOVE_BULKUP,
            MOVE_REST,
            MOVE_RAGEFIST,
            MOVE_DRAINPUNCH,
        },
        .ability = 0
    },
    {
        .iv = 33,
        .lvl = 85,
        .heldItem = ITEM_CHOICE_SPECS,
        .species = SPECIES_KINGDRA,
        .moves = {
            MOVE_SURF,
            MOVE_HURRICANE,
            MOVE_DRACOMETEOR,
            MOVE_AQUARING,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_ASSAULT_VEST,
        .species = SPECIES_SALAMENCE,
        .moves = {
            MOVE_DRACOMETEOR,
            MOVE_DUALWINGBEAT,
            MOVE_FLAMETHROWER,
            MOVE_EARTHQUAKE,
        },
        .ability = 1
    },
    {
        .iv = 32,
        .lvl = 85,
        .heldItem = ITEM_GYARADOSITE,
        .species = SPECIES_GYARADOS,
        .moves = {
            MOVE_DRAGONDANCE,
            MOVE_CRUNCH,
            MOVE_EARTHQUAKE,
            MOVE_BOUNCE,
        },
        .ability = 1
    },
};

const struct TrainerMonItemCustomMoves sParty_ChallengerElm1Typhlosion[] = {
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_LIFE_ORB,
        .species = SPECIES_AMBIPOM,
        .moves = {
            MOVE_FAKEOUT,
            MOVE_UTURN,
            MOVE_THIEF,
            MOVE_GRASSYGLIDE,
        },
        .ability = 1
    },
    {
        .iv = 71,
        .lvl = 85,
        .heldItem = ITEM_ROCKY_HELMET,
        .species = SPECIES_SKARMORY,
        .moves = {
            MOVE_SPIKES,
            MOVE_IRONDEFENSE,
            MOVE_BODYPRESS,
            MOVE_ROOST,
        },
        .ability = 2
    },
    {
        .iv = 35,
        .lvl = 85,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_WYRDEER,
        .moves = {
            MOVE_PSYSHIELDBASH,
            MOVE_HIGHHORSEPOWER,
            MOVE_REFLECT,
            MOVE_LIGHTSCREEN,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_FARIGIRAF,
        .moves = {
            MOVE_STOREDPOWER,
            MOVE_NASTYPLOT,
            MOVE_AGILITY,
            MOVE_TWINBEAM,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_CHOICE_SPECS,
        .species = SPECIES_TOGEKISS,
        .moves = {
            MOVE_AIRSLASH,
            MOVE_NASTYPLOT,
            MOVE_AURASPHERE,
            MOVE_ROOST,
        },
        .ability = 1
    },
    {
        .iv = 93,
        .lvl = 85,
        .heldItem = ITEM_TYPHLOSIONITE,
        .species = SPECIES_TYPHLOSION,
        .moves = {
            MOVE_NASTYPLOT,
            MOVE_SHARP_FLINT,
            MOVE_MAGMA_GEYSER,
            MOVE_PLAYROUGH,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_ChallengerElm1Feraligatr[] = {
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_LIFE_ORB,
        .species = SPECIES_AMBIPOM,
        .moves = {
            MOVE_FAKEOUT,
            MOVE_UTURN,
            MOVE_THIEF,
            MOVE_GRASSYGLIDE,
        },
        .ability = 1
    },
    {
        .iv = 71,
        .lvl = 85,
        .heldItem = ITEM_ROCKY_HELMET,
        .species = SPECIES_SKARMORY,
        .moves = {
            MOVE_SPIKES,
            MOVE_IRONDEFENSE,
            MOVE_BODYPRESS,
            MOVE_ROOST,
        },
        .ability = 2
    },
    {
        .iv = 35,
        .lvl = 85,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_WYRDEER,
        .moves = {
            MOVE_PSYSHIELDBASH,
            MOVE_HIGHHORSEPOWER,
            MOVE_REFLECT,
            MOVE_LIGHTSCREEN,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_FARIGIRAF,
        .moves = {
            MOVE_STOREDPOWER,
            MOVE_NASTYPLOT,
            MOVE_AGILITY,
            MOVE_TWINBEAM,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_CHOICE_SPECS,
        .species = SPECIES_TOGEKISS,
        .moves = {
            MOVE_AIRSLASH,
            MOVE_NASTYPLOT,
            MOVE_AURASPHERE,
            MOVE_ROOST,
        },
        .ability = 1
    },
    {
        .iv = 32,
        .lvl = 85,
        .heldItem = ITEM_FERALIGATITE,
        .species = SPECIES_FERALIGATR,
        .moves = {
            MOVE_BULKUP,
            MOVE_AQUA_SCALES,
            MOVE_DRAGON_CRUSH,
            MOVE_ICEPUNCH,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_ChallengerElm1Meganium[] = {
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_LIFE_ORB,
        .species = SPECIES_AMBIPOM,
        .moves = {
            MOVE_FAKEOUT,
            MOVE_UTURN,
            MOVE_THIEF,
            MOVE_GRASSYGLIDE,
        },
        .ability = 1
    },
    {
        .iv = 71,
        .lvl = 85,
        .heldItem = ITEM_ROCKY_HELMET,
        .species = SPECIES_SKARMORY,
        .moves = {
            MOVE_SPIKES,
            MOVE_IRONDEFENSE,
            MOVE_BODYPRESS,
            MOVE_ROOST,
        },
        .ability = 2
    },
    {
        .iv = 35,
        .lvl = 85,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_WYRDEER,
        .moves = {
            MOVE_PSYSHIELDBASH,
            MOVE_HIGHHORSEPOWER,
            MOVE_REFLECT,
            MOVE_LIGHTSCREEN,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_FARIGIRAF,
        .moves = {
            MOVE_STOREDPOWER,
            MOVE_NASTYPLOT,
            MOVE_AGILITY,
            MOVE_TWINBEAM,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_CHOICE_SPECS,
        .species = SPECIES_TOGEKISS,
        .moves = {
            MOVE_AIRSLASH,
            MOVE_NASTYPLOT,
            MOVE_AURASPHERE,
            MOVE_ROOST,
        },
        .ability = 1
    },
    {
        .iv = 103,
        .lvl = 85,
        .heldItem = ITEM_MEGANIUMITE,
        .species = SPECIES_MEGANIUM,
        .moves = {
            MOVE_FLORAL_STREAM,
            MOVE_SHINING_BEAM,
            MOVE_SYNTHESIS,
            MOVE_SLEEPPOWDER,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_RivalSilver5Typhlosion[] = {
    {
        .iv = 32,
        .lvl = 61,
        .heldItem = ITEM_CHOICE_BAND,
        .species = SPECIES_WEAVILE,
        .moves = {
            MOVE_NIGHTSLASH,
            MOVE_ICICLECRASH,
            MOVE_AGILITY,
            MOVE_CRUSHCLAW,
        },
        .ability = 1
    },
    {
        .iv = 93,
        .lvl = 63,
        .heldItem = ITEM_CHOICE_SPECS,
        .species = SPECIES_ALAKAZAM,
        .moves = {
            MOVE_NASTYPLOT,
            MOVE_PSYCHIC,
            MOVE_DAZZLINGGLEAM,
            MOVE_FOCUSBLAST,
        },
        .ability = 0
    },
    {
        .iv = 93,
        .lvl = 62,
        .heldItem = ITEM_BLACK_SLUDGE,
        .species = SPECIES_CROBAT,
        .moves = {
            MOVE_ACROBATICS,
            MOVE_TOXIC,
            MOVE_CROSSPOISON,
            MOVE_ROOST,
        },
        .ability = 0
    },
    {
        .iv = 93,
        .lvl = 62,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_GENGAR,
        .moves = {
            MOVE_WILLOWISP,
            MOVE_SHADOWBALL,
            MOVE_FOCUSBLAST,
            MOVE_SUBSTITUTE,
        },
        .ability = 0
    },
    {
        .iv = 46,
        .lvl = 63,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_ELECTIVIRE,
        .moves = {
            MOVE_ELECTRICTERRAIN,
            MOVE_WILDCHARGE,
            MOVE_ICEPUNCH,
            MOVE_THUNDERWAVE,
        },
        .ability = 1
    },
    {
        .iv = 93,
        .lvl = 65,
        .heldItem = ITEM_TYPHLOSIONITE,
        .species = SPECIES_TYPHLOSION,
        .moves = {
            MOVE_MAGMA_GEYSER,
            MOVE_SOLARBEAM,
            MOVE_SHARP_FLINT,
            MOVE_NASTYPLOT,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_RivalSilver5Feraligatr[] = {
    {
        .iv = 32,
        .lvl = 61,
        .heldItem = ITEM_CHOICE_BAND,
        .species = SPECIES_WEAVILE,
        .moves = {
            MOVE_NIGHTSLASH,
            MOVE_ICICLECRASH,
            MOVE_AGILITY,
            MOVE_CRUSHCLAW,
        },
        .ability = 1
    },
    {
        .iv = 93,
        .lvl = 63,
        .heldItem = ITEM_CHOICE_SPECS,
        .species = SPECIES_ALAKAZAM,
        .moves = {
            MOVE_NASTYPLOT,
            MOVE_PSYCHIC,
            MOVE_DAZZLINGGLEAM,
            MOVE_FOCUSBLAST,
        },
        .ability = 0
    },
    {
        .iv = 93,
        .lvl = 62,
        .heldItem = ITEM_BLACK_SLUDGE,
        .species = SPECIES_CROBAT,
        .moves = {
            MOVE_ACROBATICS,
            MOVE_TOXIC,
            MOVE_CROSSPOISON,
            MOVE_ROOST,
        },
        .ability = 0
    },
    {
        .iv = 93,
        .lvl = 62,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_GENGAR,
        .moves = {
            MOVE_WILLOWISP,
            MOVE_SHADOWBALL,
            MOVE_FOCUSBLAST,
            MOVE_SUBSTITUTE,
        },
        .ability = 0
    },
    {
        .iv = 46,
        .lvl = 63,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_ELECTIVIRE,
        .moves = {
            MOVE_ELECTRICTERRAIN,
            MOVE_WILDCHARGE,
            MOVE_ICEPUNCH,
            MOVE_THUNDERWAVE,
        },
        .ability = 1
    },
    {
        .iv = 101,
        .lvl = 65,
        .heldItem = ITEM_FERALIGATITE,
        .species = SPECIES_FERALIGATR,
        .moves = {
            MOVE_AQUA_SCALES,
            MOVE_DRAGON_CRUSH,
            MOVE_SCREECH,
            MOVE_IRONTAIL,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_RivalSilver5Meganium[] = {
    {
        .iv = 32,
        .lvl = 61,
        .heldItem = ITEM_CHOICE_BAND,
        .species = SPECIES_WEAVILE,
        .moves = {
            MOVE_NIGHTSLASH,
            MOVE_ICICLECRASH, 
            MOVE_AGILITY,
            MOVE_CRUSHCLAW,
        },
        .ability = 1
    },
    {
        .iv = 93,
        .lvl = 63,
        .heldItem = ITEM_CHOICE_SPECS,
        .species = SPECIES_ALAKAZAM,
        .moves = {
            MOVE_NASTYPLOT,
            MOVE_PSYCHIC,
            MOVE_DAZZLINGGLEAM,
            MOVE_FOCUSBLAST,
        },
        .ability = 0
    },
    {
        .iv = 93,
        .lvl = 62,
        .heldItem = ITEM_BLACK_SLUDGE,
        .species = SPECIES_CROBAT,
        .moves = {
            MOVE_ACROBATICS,
            MOVE_TOXIC,
            MOVE_CROSSPOISON,
            MOVE_ROOST,
        },
        .ability = 0
    },
    {
        .iv = 93,
        .lvl = 62,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_GENGAR,
        .moves = {
            MOVE_WILLOWISP,
            MOVE_SHADOWBALL,
            MOVE_FOCUSBLAST,
            MOVE_SUBSTITUTE,
        },
        .ability = 0
    },
    {
        .iv = 46,
        .lvl = 63,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_ELECTIVIRE,
        .moves = {
            MOVE_ELECTRICTERRAIN,
            MOVE_WILDCHARGE,
            MOVE_ICEPUNCH,
            MOVE_THUNDERWAVE,
        },
        .ability = 1
    },
    {
        .iv = 101,
        .lvl = 65,
        .heldItem = ITEM_MEGANIUMITE,
        .species = SPECIES_MEGANIUM,
        .moves = {
            MOVE_SHINING_BEAM,
            MOVE_FLORAL_STREAM,
            MOVE_SYNTHESIS,
            MOVE_REFLECT,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_ChallengerSilver5Typhlosion[] = {
    {
        .iv = 32,
        .lvl = 85,
        .heldItem = ITEM_CHOICE_BAND,
        .species = SPECIES_WEAVILE,
        .moves = {
            MOVE_NIGHTSLASH,
            MOVE_ICICLECRASH,
            MOVE_AGILITY,
            MOVE_CRUSHCLAW,
        },
        .ability = 1
    },
    {
        .iv = 93,
        .lvl = 85,
        .heldItem = ITEM_CHOICE_SPECS,
        .species = SPECIES_ALAKAZAM,
        .moves = {
            MOVE_NASTYPLOT,
            MOVE_PSYCHIC,
            MOVE_DAZZLINGGLEAM,
            MOVE_FOCUSBLAST,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_BLACK_SLUDGE,
        .species = SPECIES_CROBAT,
        .moves = {
            MOVE_ACROBATICS,
            MOVE_TOXIC,
            MOVE_CROSSPOISON,
            MOVE_ROOST,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_GENGAR,
        .moves = {
            MOVE_WILLOWISP,
            MOVE_SHADOWBALL,
            MOVE_FOCUSBLAST,
            MOVE_SUBSTITUTE,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_ELECTIVIRE,
        .moves = {
            MOVE_ELECTRICTERRAIN,
            MOVE_WILDCHARGE,
            MOVE_ICEPUNCH,
            MOVE_THUNDERWAVE,
        },
        .ability = 1
    },
    {
        .iv = 93,
        .lvl = 65,
        .heldItem = ITEM_TYPHLOSIONITE,
        .species = SPECIES_TYPHLOSION,
        .moves = {
            MOVE_MAGMA_GEYSER,
            MOVE_SOLARBEAM,
            MOVE_SHARP_FLINT,
            MOVE_NASTYPLOT,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_ChallengerSilver5Feraligatr[] = {
    {
        .iv = 32,
        .lvl = 85,
        .heldItem = ITEM_CHOICE_BAND,
        .species = SPECIES_WEAVILE,
        .moves = {
            MOVE_NIGHTSLASH,
            MOVE_ICICLECRASH,
            MOVE_AGILITY,
            MOVE_CRUSHCLAW,
        },
        .ability = 1
    },
    {
        .iv = 93,
        .lvl = 85,
        .heldItem = ITEM_CHOICE_SPECS,
        .species = SPECIES_ALAKAZAM,
        .moves = {
            MOVE_NASTYPLOT,
            MOVE_PSYCHIC,
            MOVE_DAZZLINGGLEAM,
            MOVE_FOCUSBLAST,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_BLACK_SLUDGE,
        .species = SPECIES_CROBAT,
        .moves = {
            MOVE_ACROBATICS,
            MOVE_TOXIC,
            MOVE_CROSSPOISON,
            MOVE_ROOST,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_GENGAR,
        .moves = {
            MOVE_WILLOWISP,
            MOVE_SHADOWBALL,
            MOVE_FOCUSBLAST,
            MOVE_SUBSTITUTE,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_ELECTIVIRE,
        .moves = {
            MOVE_ELECTRICTERRAIN,
            MOVE_WILDCHARGE,
            MOVE_ICEPUNCH,
            MOVE_THUNDERWAVE,
        },
        .ability = 1
    },
    {
        .iv = 101,
        .lvl = 85,
        .heldItem = ITEM_FERALIGATITE,
        .species = SPECIES_FERALIGATR,
        .moves = {
            MOVE_AQUA_SCALES,
            MOVE_DRAGON_CRUSH,
            MOVE_SCREECH,
            MOVE_IRONTAIL,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_ChallengerSilver5Meganium[] = {
    {
        .iv = 32,
        .lvl = 85,
        .heldItem = ITEM_CHOICE_BAND,
        .species = SPECIES_WEAVILE,
        .moves = {
            MOVE_NIGHTSLASH,
            MOVE_ICICLECRASH, 
            MOVE_AGILITY,
            MOVE_CRUSHCLAW,
        },
        .ability = 1
    },
    {
        .iv = 93,
        .lvl = 85,
        .heldItem = ITEM_CHOICE_SPECS,
        .species = SPECIES_ALAKAZAM,
        .moves = {
            MOVE_NASTYPLOT,
            MOVE_PSYCHIC,
            MOVE_DAZZLINGGLEAM,
            MOVE_FOCUSBLAST,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_BLACK_SLUDGE,
        .species = SPECIES_CROBAT,
        .moves = {
            MOVE_ACROBATICS,
            MOVE_TOXIC,
            MOVE_CROSSPOISON,
            MOVE_ROOST,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_GENGAR,
        .moves = {
            MOVE_WILLOWISP,
            MOVE_SHADOWBALL,
            MOVE_FOCUSBLAST,
            MOVE_SUBSTITUTE,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl = 85,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_ELECTIVIRE,
        .moves = {
            MOVE_ELECTRICTERRAIN,
            MOVE_WILDCHARGE,
            MOVE_ICEPUNCH,
            MOVE_THUNDERWAVE,
        },
        .ability = 1
    },
    {
        .iv = 101,
        .lvl = 85,
        .heldItem = ITEM_MEGANIUMITE,
        .species = SPECIES_MEGANIUM,
        .moves = {
            MOVE_SHINING_BEAM,
            MOVE_FLORAL_STREAM,
            MOVE_SYNTHESIS,
            MOVE_REFLECT,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_EliteFourAile2[] = {
    {
        .iv = 93,
        .lvl = 80,
        .heldItem = ITEM_CHOICE_SCARF,
        .species = SPECIES_DRAMPA,
        .moves = {
            MOVE_HYPERVOICE,
            MOVE_DRAGONBREATH,
            MOVE_FOCUSBLAST,
            MOVE_ENERGYBALL,
        },
        .ability = 0
    },
    {
        .iv = 62,
        .lvl = 80,
        .heldItem = ITEM_SILK_SCARF,
        .species = SPECIES_DELCATTY,
        .moves = {
            MOVE_SUCKERPUNCH,
            MOVE_FAKEOUT,
            MOVE_HEALBELL,
            MOVE_GUNKSHOT,
        },
        .ability = 2
    },
    {
        .iv = 54,
        .lvl = 80,
        .heldItem = ITEM_FIGY_BERRY,
        .species = SPECIES_SNORLAX,
        .moves = {
            MOVE_CURSE,
            MOVE_RECYCLE,
            MOVE_DARKESTLARIAT,
            MOVE_BODYSLAM,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 80,
        .heldItem = ITEM_CHOICE_SPECS,
        .species = SPECIES_ZOROARK_H,
        .moves = {
            MOVE_SHADOWBALL,
            MOVE_HYPERVOICE,
            MOVE_UTURN,
            MOVE_FLAMETHROWER,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl = 82,
        .heldItem = ITEM_LOPUNNITE,
        .species = SPECIES_LOPUNNY,
        .moves = {
            MOVE_HIGHJUMPKICK,
            MOVE_FAKEOUT,
            MOVE_ICEPUNCH,
            MOVE_RETURN,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_EliteFourWill2[] = {
    {
        .iv = 125,
        .lvl = 80,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_HATTERENE,
        .moves = {
            MOVE_CALMMIND,
            MOVE_DRAININGKISS,
            MOVE_NUZZLE,
            MOVE_PSYSHOCK,
        },
        .ability = 0
    },
    {
        .iv = 98,
        .lvl = 80,
        .heldItem = ITEM_LIFE_ORB,
        .species = SPECIES_BRAVIARY_H,
        .moves = {
            MOVE_AGILITY,
            MOVE_HURRICANE,
            MOVE_HEATWAVE,
            MOVE_ESPERWING,
        },
        .ability = 0
    },
    {
        .iv = 92,
        .lvl = 80,
        .heldItem = ITEM_LIFE_ORB,
        .species = SPECIES_RAPIDASH_G,
        .moves = {
            MOVE_ZENHEADBUTT,
            MOVE_PLAYROUGH,
            MOVE_CHARM,
            MOVE_MEGAHORN,
        },
        .ability = 0
    },
    {
        .iv = 101,
        .lvl = 80,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_SLOWKING,
        .moves = {
            MOVE_SCALD,
            MOVE_SLACKOFF,
            MOVE_CALMMIND,
            MOVE_PSYSHOCK,
        },
        .ability = 0
    },
    {
        .iv = 122,
        .lvl = 82,
        .heldItem = ITEM_METAGROSSITE,
        .species = SPECIES_METAGROSS,
        .moves = {
            MOVE_METEORMASH,
            MOVE_ICEPUNCH,
            MOVE_THUNDERPUNCH,
            MOVE_BULLETPUNCH,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_EliteFourKoga2[] = {
    {
        .iv = 91,
        .lvl = 80,
        .heldItem = ITEM_QUICK_CLAW,
        .species = SPECIES_SNEASLER,
        .moves = {
            MOVE_DIRECLAW,
            MOVE_DOUBLETEAM,
            MOVE_TOXICSPIKES,
            MOVE_FAKEOUT,
        },
        .ability = 0
    },
    {
        .iv = 93,
        .lvl = 80,
        .heldItem = ITEM_BLACK_SLUDGE,
        .species = SPECIES_TOXTRICITY,
        .moves = {
            MOVE_SHIFTGEAR,
            MOVE_BOOMBURST,
            MOVE_OVERDRIVE,
            MOVE_SLUDGEBOMB,
        },
        .ability = 1
    },
    {
        .iv = 34,
        .lvl = 80,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_SLOWKING_G,
        .moves = {
            MOVE_EERIESPELL,
            MOVE_DARKPULSE,
            MOVE_TOXIC,
            MOVE_SLUDGEWAVE,
        },
        .ability = 1
    },
    {
        .iv = 32,
        .lvl = 80,
        .heldItem = ITEM_SHARP_BEAK,
        .species = SPECIES_CROBAT,
        .moves = {
            MOVE_BRAVEBIRD,
            MOVE_SUPERFANG,
            MOVE_DOUBLETEAM,
            MOVE_ROOST,
        },
        .ability = 1
    },
    {
        .iv = 99,
        .lvl = 82,
        .heldItem = ITEM_VENUSAURITE,
        .species = SPECIES_VENUSAUR,
        .moves = {
            MOVE_LEECHSEED,
            MOVE_TOXIC,
            MOVE_VENOSHOCK,
            MOVE_GRASSKNOT,
        },
        .ability = 0
    },
};

const struct TrainerMonItemCustomMoves sParty_EliteFourKaren2[] = {
    {
        .iv = 13,
        .lvl = 80,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_UMBREON,
        .moves = {
            MOVE_MOONLIGHT,
            MOVE_PROTECT,
            MOVE_TOXIC,
            MOVE_FOULPLAY,
        },
        .ability = 1
    },
    {
        .iv = 91,
        .lvl =  80,
        .heldItem = ITEM_FOCUS_SASH,
        .species = SPECIES_SAMUROTT_H,
        .moves = {
            MOVE_CEASELESSEDGE,
            MOVE_RAZORSHELL,
            MOVE_SACREDSWORD,
            MOVE_KNOCKOFF,
        },
        .ability = 2
    },
    {
        .iv = 93,
        .lvl = 80,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_HYDREIGON,
        .moves = {
            MOVE_DRACOMETEOR,
            MOVE_NASTYPLOT,
            MOVE_EARTHPOWER,
            MOVE_DARKPULSE,
        },
        .ability = 1
    },
    {
        .iv = 19,
        .lvl = 80,
        .heldItem = ITEM_LIFE_ORB,
        .species = SPECIES_HOUNDOOM,
        .moves = {
            MOVE_PURSUIT,
            MOVE_SUCKERPUNCH,
            MOVE_FLAMETHROWER,
            MOVE_ENERGYBALL,
        },
        .ability = 1
    },
    {
        .iv = 127,
        .lvl = 82,
        .heldItem = ITEM_TYRANITARITE,
        .species = SPECIES_TYRANITAR,
        .moves = {
            MOVE_STONEEDGE,
            MOVE_PURSUIT,
            MOVE_EARTHQUAKE,
            MOVE_FIREPUNCH,
        },
        .ability = 0
    },
};
/*Kanto Team Rosters Starts Here*/
const struct TrainerMonNoItemDefaultMoves sParty_JugglerGatto[] = {
    {
        .iv = 252,
        .lvl =73,
        .species = SPECIES_ELECTIVIRE,
    },
    {
        .iv = 0,
        .lvl =73,
        .species = SPECIES_TOGEDEMARU,
    },
    {
        .iv = 0,
        .lvl =75,
        .species = SPECIES_ELECTRODE,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_GuitaristCarlos[] = {
    {
        .iv = 252,
        .lvl =73,
        .species = SPECIES_AMPHAROS,
    },
    {
        .iv = 0,
        .lvl =74,
        .species = SPECIES_EMOLGA,
    },
    {
        .iv = 0,
        .lvl =75,
        .species = SPECIES_TOXTRICITY,
    },
};

const struct TrainerMonNoItemDefaultMoves sParty_GentlemanRyan[] = {
    {
        .iv = 252,
        .lvl =75,
        .species = SPECIES_ZEBSTRIKA,
    },
    {
        .iv = 0,
        .lvl =76,
        .species = SPECIES_MANECTRIC,
    },
};


const struct TrainerMonItemCustomMoves sParty_LeaderSurge1[] = {
    {
        .iv = 0,
        .lvl =78,
        .heldItem = ITEM_SHUCA_BERRY,
        .species = SPECIES_LANTURN,
        .moves = {
            MOVE_SURF,
            MOVE_THUNDERBOLT,
            MOVE_RAINDANCE,
            MOVE_THUNDERWAVE,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl =80,
        .heldItem = ITEM_THROAT_SPRAY,
        .species = SPECIES_TOXTRICITY_LOW_KEY,
        .moves = {
            MOVE_OVERDRIVE,
            MOVE_BOOMBURST,
            MOVE_NUZZLE,
            MOVE_ICEPUNCH,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl =81,
        .heldItem = ITEM_AIR_BALLOON,
        .species = SPECIES_JOLTEON,
        .moves = {
            MOVE_DOUBLETEAM,
            MOVE_LIGHTSCREEN,
            MOVE_REFLECT,
            MOVE_THUNDERBOLT,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl =82,
        .heldItem = ITEM_ELECTRIC_GEM,
        .species = SPECIES_EELEKTROSS,
        .moves = {
            MOVE_LIQUIDATION,
            MOVE_VOLTSWITCH,
            MOVE_STOMPINGTANTRUM,
            MOVE_GRASSKNOT,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl =83,
        .heldItem = ITEM_ELECTRIUM_Z,
        .species = SPECIES_RAICHU,
        .moves = {
            MOVE_VOLTTACKLE,
            MOVE_IRONTAIL,
            MOVE_NUZZLE,
            MOVE_KNOCKOFF,
        },
        .ability = 1
    },
};

const struct TrainerMonItemCustomMoves sParty_LeaderSurge2[] = {
    {
        .iv = 0,
        .lvl =88,
        .heldItem = ITEM_SHUCA_BERRY,
        .species = SPECIES_LANTURN,
        .moves = {
            MOVE_SURF,
            MOVE_THUNDERBOLT,
            MOVE_RAINDANCE,
            MOVE_THUNDERWAVE,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl =90,
        .heldItem = ITEM_LUM_BERRY,
        .species = SPECIES_EELEKTROSS,
        .moves = {
            MOVE_LIQUIDATION,
            MOVE_VOLTSWITCH,
            MOVE_STOMPINGTANTRUM,
            MOVE_GRASSKNOT,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl =91,
        .heldItem = ITEM_AIR_BALLOON,
        .species = SPECIES_ELECTRODE_H,
        .moves = {
            MOVE_CHLOROBLAST,
            MOVE_THUNDERBOLT,
            MOVE_THUNDERWAVE,
            MOVE_SPORE,
        },
        .ability = 0
    },
    {
        .iv = 0,
        .lvl =92,
        .heldItem = ITEM_ELECTRIC_GEM,
        .species = SPECIES_ROTOM_FAN,
        .moves = {
            MOVE_AIRSLASH,
            MOVE_ICYWIND,
            MOVE_THUNDERBOLT,
            MOVE_WILLOWISP,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl =93,
        .heldItem = ITEM_ELECTRIUM_Z,
        .species = SPECIES_RAICHU,
        .moves = {
            MOVE_VOLTTACKLE,
            MOVE_IRONTAIL,
            MOVE_NUZZLE,
            MOVE_KNOCKOFF,
        },
        .ability = 1
    },
};
const struct TrainerMonItemDefaultMoves sParty_PokefanHoward[] = {
    {
        .iv = 0,
        .lvl =62,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_WIGGLYTUFF,
    },
    {
        .iv = 0,
        .lvl =64,
        .heldItem = ITEM_NORMAL_GEM,
        .species = SPECIES_PURUGLY,
    },
};
const struct TrainerMonNoItemDefaultMoves sParty_TwinsMayMei[] = {
    {
        .iv = 0,
        .lvl =64,
        .species = SPECIES_SOLROCK,
    },
    {
        .iv = 0,
        .lvl =64,
        .species = SPECIES_LUNATONE,
    },
};
const struct TrainerMonNoItemDefaultMoves sParty_FirebreatherBarnes[] = {
    {
        .iv = 0,
        .lvl =61,
        .species = SPECIES_TORKOAL,
    },
    {
        .iv = 0,
        .lvl =61,
        .species = SPECIES_MUK_A,
    },
    {
        .iv = 0,
        .lvl =63,
        .species = SPECIES_INFERNAPE,
    },
};
const struct TrainerMonNoItemDefaultMoves sParty_HikerQuinton[] = {
    {
        .iv = 0,
        .lvl =60,
        .species = SPECIES_DONPHAN,
    },
    {
        .iv = 0,
        .lvl =62,
        .species = SPECIES_GOLEM_A,
    },
    {
        .iv = 0,
        .lvl =63,
        .species = SPECIES_FLYGON,
    },
};
const struct TrainerMonNoItemDefaultMoves sParty_SailorHandsome[] = {
    {
        .iv = 0,
        .lvl =65,
        .species = SPECIES_CROAGUNK,
    },
};
const struct TrainerMonNoItemDefaultMoves sParty_PicnickerJeannie[] = {
    {
        .iv = 0,
        .lvl =60,
        .species = SPECIES_LINOONE,
    },
    {
        .iv = 0,
        .lvl =61,
        .species = SPECIES_PACHIRISU,
    },
    {
        .iv = 0,
        .lvl =63,
        .species = SPECIES_URSARING,
    },
};
const struct TrainerMonNoItemDefaultMoves sParty_JugglerGarret[] = {
    {
        .iv = 0,
        .lvl =61,
        .species = SPECIES_ELECTRODE,
    },
    {
        .iv = 0,
        .lvl =61,
        .species = SPECIES_ELECTRODE,
    },
    {
        .iv = 0,
        .lvl =63,
        .species = SPECIES_MAGNEZONE,
    },
    {
        .iv = 0,
        .lvl =62,
        .species = SPECIES_FORRETRESS,
    },
};
const struct TrainerMonNoItemDefaultMoves sParty_SailorPete[] = {
    {
        .iv = 0,
        .lvl =63,
        .species = SPECIES_HARIYAMA,
    },
    {
        .iv = 0,
        .lvl =63,
        .species = SPECIES_POLITOED,
    },
};
const struct TrainerMonItemCustomMoves sParty_BurglarCooper[] = {
    {
        .iv = 0,
        .lvl =64,
        .heldItem = ITEM_LIFE_ORB,
        .species = SPECIES_PERSIAN,
        .moves = {
            MOVE_NIGHTSLASH,
            MOVE_FAKEOUT,
            MOVE_COVET,
            MOVE_UTURN,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl =64,
        .heldItem = ITEM_LEFTOVERS,
        .species = SPECIES_ABSOL,
        .moves = {
            MOVE_NIGHTSLASH,
            MOVE_SUCKERPUNCH,
            MOVE_WILLOWISP,
            MOVE_IRONTAIL,
        },
        .ability = 1
    },
    {
        .iv = 0,
        .lvl =67,
        .heldItem = ITEM_DARK_GEM,
        .species = SPECIES_THIEVUL,
        .moves = {
            MOVE_DARKPULSE,
            MOVE_NASTYPLOT,
            MOVE_ROAR,
            MOVE_PSYCHIC,
        },
        .ability = 0
    },
};


/*
const struct TrainerMonNoItemDefaultMoves sParty_[] = {
    {
        .iv = 0,
        .lvl =,
        .species = SPECIES_,
    },
};

const struct TrainerMonItemCustomMoves sParty_[] = {
    {
        .iv = 0,
        .lvl =,
        .heldItem = ITEM_,
        .species = SPECIES_,
        .moves = {
            MOVE_,
            MOVE_,
            MOVE_,
            MOVE_,
        },
        .ability = 1
    },
};

*/

#define NO_NAME {_END, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE, _SPACE}
#define RIVAL_NAME {_S, _i, _l, _v, _e, _r, _END}


const struct Trainer gTrainers[] = {
    [TRAINER_NONE] = {
        .trainerName = NO_NAME,
    },

    [TRAINER_PASSERBY_BOY_CHIKORITA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PASSERBY_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = RIVAL_NAME,
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PasserbyBoyChikorita),
        .party = {.NoItemDefaultMoves = sParty_PasserbyBoyChikorita}
    },

    [TRAINER_PASSERBY_BOY_CYNDAQUIL] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PASSERBY_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = RIVAL_NAME,
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PasserbyBoyCyndaquil),
        .party = {.NoItemDefaultMoves = sParty_PasserbyBoyCyndaquil}
    },

    [TRAINER_PASSERBY_BOY_TOTODILE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PASSERBY_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = RIVAL_NAME,
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PasserbyBoyTotodile),
        .party = {.NoItemDefaultMoves = sParty_PasserbyBoyTotodile}
    },

    [TRAINER_RIVAL_KRIS_ROUTE29] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_RIVAL_KRIS_ETHAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_KRIS,
        .trainerName = {_K, _r, _i, _s, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_KrisEthanRoute29),
        .party = {.NoItemCustomMoves = sParty_KrisEthanRoute29}
    },

    [TRAINER_RIVAL_ETHAN_ROUTE29] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_RIVAL_KRIS_ETHAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ETHAN,
        .trainerName = {_E, _t, _h, _a, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_KrisEthanRoute29),
        .party = {.NoItemCustomMoves = sParty_KrisEthanRoute29}
    },
    [TRAINER_SUPER_NERD_MICK] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SUPER_NERD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = {_M, _i, _c, _k, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SuperNerdMick),
        .party = {.NoItemDefaultMoves = sParty_SuperNerdMick}
    },

    [TRAINER_SAGE_CHINNEN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SAGE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = {_C, _h, _i, _n, _n, _e, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SageBaseTeam1),
        .party = {.NoItemDefaultMoves = sParty_SageBaseTeam1}
    },

    [TRAINER_SAGE_MOKUNEN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SAGE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = {_M, _o, _k, _u, _n, _e, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SageBaseTeam1),
        .party = {.NoItemDefaultMoves = sParty_SageBaseTeam1}
    },

    [TRAINER_SAGE_EISO] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SAGE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = {_E, _i, _s, _o, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SageBaseTeam1),
        .party = {.NoItemDefaultMoves = sParty_SageBaseTeam1}
    },

    [TRAINER_SAGE_SONEN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SAGE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = {_S, _o, _n, _e, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SageBaseTeam2),
        .party = {.NoItemDefaultMoves = sParty_SageBaseTeam2}
    },

    [TRAINER_SAGE_KAKUNEN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SAGE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = {_K, _a, _k, _u, _n, _e, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SageBaseTeam2),
        .party = {.NoItemDefaultMoves = sParty_SageBaseTeam2}
    },

    [TRAINER_SAGE_KAINEN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SAGE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = {_K, _a, _i, _n, _e, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SageBaseTeam3),
        .party = {.NoItemDefaultMoves = sParty_SageBaseTeam3}
    },

    [TRAINER_ELDER_LI] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_ELDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ELDER,
        .trainerName = {_L, _i, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ElderLi),
        .party = {.NoItemCustomMoves = sParty_ElderLi}
    },

    [TRAINER_YOUNGSTER_JOEY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = {_J, _o, _e, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_YoungsterJoey),
        .party = {.NoItemDefaultMoves = sParty_YoungsterJoey}
    },

    [TRAINER_YOUNGSTER_MIKEY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = {_M, _i, _k, _e, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_YoungsterMikey),
        .party = {.NoItemDefaultMoves = sParty_YoungsterMikey}
    },

    [TRAINER_BUG_CATCHER_DON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = {_D, _o, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BugCatcherDon),
        .party = {.NoItemDefaultMoves = sParty_BugCatcherDon}
    },

    [TRAINER_LASS_CHIKA] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = {_C, _h, _i, _k, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .partySize = NELEMS(sParty_LassChika),
        .party = {.NoItemCustomMoves = sParty_LassChika}
    },

    [TRAINER_BUG_CATCHER_WADE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = {_W, _a, _d, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BugCatcherWade),
        .party = {.NoItemDefaultMoves = sParty_BugCatcherWade}
    },

    [TRAINER_BIRD_KEEPER_ABE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = {_A, _b, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BirdKeeperAbe),
        .party = {.NoItemDefaultMoves = sParty_BirdKeeperAbe}
    },

    [TRAINER_BIRD_KEEPER_RYLEIGH] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = {_R, _y, _l, _e, _i, _g, _h, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BirdKeeperRyleigh),
        .party = {.NoItemDefaultMoves = sParty_BirdKeeperRyleigh}
    },

    [TRAINER_LEADER_FALKNER_1] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_FALKNER,
        .trainerName = {_F, _a, _l, _k, _n, _e, _r, _END},
        .items = {ITEM_POTION, ITEM_FULL_HEAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LeaderFalkner1),
        .party = {.ItemCustomMoves = sParty_LeaderFalkner1}
    },

    [TRAINER_PICNICKER_DAHLIA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = {_D, _a, _h, _l, _i, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PicknickerDahlia),
        .party = {.NoItemDefaultMoves = sParty_PicknickerDahlia}
    },

    [TRAINER_POKEMANIAC_JIM] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = {_J, _i, _m, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PokemaniacJim),
        .party = {.NoItemDefaultMoves = sParty_PokemaniacJim}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_1] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt1),
        .party = {.ItemCustomMoves = sParty_RocketGrunt1}
    },

    [TRAINER_RIVAL_ETHAN_ROUTE32] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL_KRIS_ETHAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ETHAN,
        .trainerName = {_E, _t, _h, _a, _n, _END},
        .items = {ITEM_POTION, ITEM_FULL_HEAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_EthanRoute32),
        .party = {.ItemCustomMoves = sParty_EthanRoute32}
    },

    [TRAINER_RIVAL_KRIS_ROUTE32] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL_KRIS_ETHAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_KRIS,
        .trainerName = {_K, _r, _i, _s, _END},
        .items = {ITEM_POTION, ITEM_FULL_HEAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_KrisRoute32),
        .party = {.ItemCustomMoves = sParty_KrisRoute32}
    },

    [TRAINER_YOUNGSTER_JEFFREY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = {_J, _e, _f, _f, _r, _e, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_YoungsterJeffrey),
        .party = {.NoItemDefaultMoves = sParty_YoungsterJeffrey}
    },

    [TRAINER_PICNICKER_ROXANNE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = {_R, _o, _x, _a, _n, _n, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PicknickerRoxanne),
        .party = {.NoItemDefaultMoves = sParty_PicknickerRoxanne}
    },

    [TRAINER_CAMPER_BRAWLY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = {_B, _r, _a, _w, _l, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_CamperBrawly),
        .party = {.NoItemDefaultMoves = sParty_CamperBrawly}
    },

    [TRAINER_FISHERMAN_COLE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = {_C, _o, _l, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_FishermanCole),
        .party = {.NoItemDefaultMoves = sParty_FishermanCole}
    },

    [TRAINER_FISHERMAN_RON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = {_R, _o, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_FishermanRon),
        .party = {.NoItemDefaultMoves = sParty_FishermanRon}
    },

    [TRAINER_FISHERMAN_JARVIS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = {_J, _a, _r, _v, _i, _s, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_FishermanJarvis),
        .party = {.NoItemDefaultMoves = sParty_FishermanJarvis}
    },

    [TRAINER_LASS_RILEY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = {_R, _i, _l, _e, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LassRiley),
        .party = {.NoItemDefaultMoves = sParty_LassRiley}
    },

    [TRAINER_PSYCHIC_F_JENNY] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = {_J, _e, _n, _n, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PsychicJenny),
        .party = {.NoItemCustomMoves = sParty_PsychicJenny}
    },

    [TRAINER_BIRD_KEEPER_JACK] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = {_J, _a, _c, _k, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BirdKeeperJack),
        .party = {.NoItemDefaultMoves = sParty_BirdKeeperJack}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt2),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt2}
    },

    [TRAINER_FIREBREATHER_KEANE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FIRE_BREATHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = {_K, _e, _a, _n, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_FireBreatherKeane),
        .party = {.NoItemDefaultMoves = sParty_FireBreatherKeane}
    },

    [TRAINER_HIKER_RUSSEL] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = {_R, _u, _s, _s, _e, _l, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_HikerRussel),
        .party = {.NoItemDefaultMoves = sParty_HikerRussel}
    },

    [TRAINER_HIKER_TRAVIS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = {_T, _r, _a, _v, _i, _s, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_HikerTravis),
        .party = {.NoItemDefaultMoves = sParty_HikerTravis}
    },

    [TRAINER_FIREBREATHER_THEO] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FIRE_BREATHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = {_T, _h, _e, _o, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_FireBreatherTheo),
        .party = {.NoItemDefaultMoves = sParty_FireBreatherTheo}
    },

    [TRAINER_SUPER_NERD_AKIRA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SUPER_NERD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = {_A, _k, _i, _r, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SuperNerdAkira),
        .party = {.NoItemDefaultMoves = sParty_SuperNerdAkira}
    },

    [TRAINER_FIREBREATHER_RONNIE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FIRE_BREATHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = {_R, _o, _n, _n, _i, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_FireBreatherRonnie),
        .party = {.NoItemDefaultMoves = sParty_FireBreatherRonnie}
    },

    [TRAINER_BLACK_BELT_KOJIRO] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = {_K, _o, _j, _i, _r, _o, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BlackBeltKojiro),
        .party = {.NoItemDefaultMoves = sParty_BlackBeltKojiro}
    },

    [TRAINER_HIKER_JIMBO] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = {_J, _i, _m, _b, _o, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_HikerJimbo),
        .party = {.NoItemDefaultMoves = sParty_HikerJimbo}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt3),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt3}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_4] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt4),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt4}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_5] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt5),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt5}
    },

    [TRAINER_ROCKET_EXECUTIVE_PROTON_1] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ROCKET_EXECUTIVE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PROTON,
        .trainerName = {_P, _r, _o, _t, _o, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ExecutiveProton1),
        .party = {.ItemCustomMoves = sParty_ExecutiveProton1}
    },

    [TRAINER_BUG_CATCHER_COLTON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = {_C, _o, _l, _t, _o, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BugCatcherColton),
        .party = {.NoItemDefaultMoves = sParty_BugCatcherColton}
    },

    [TRAINER_TWINS_MARY_AND_SUE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = {_M, _a, _r, _y, _AMPERSAND, _S, _u, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_TwinsMaryAndSue),
        .party = {.NoItemDefaultMoves = sParty_TwinsMaryAndSue}
    },

    [TRAINER_CAMPER_KENTA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = {_K, _e, _n, _t, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_CamperKenta),
        .party = {.NoItemDefaultMoves = sParty_CamperKenta}
    },

    [TRAINER_PICNICKER_JULIET] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = {_J, _u, _l, _i, _e, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PicnickerJuliet),
        .party = {.NoItemDefaultMoves = sParty_PicnickerJuliet}
    },

    [TRAINER_BUG_CATCHER_MOE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = {_M, _o, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BugCatcherMoe),
        .party = {.NoItemDefaultMoves = sParty_BugCatcherMoe}
    },

    [TRAINER_LEADER_BUGSY_1] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_BUGSY,
        .trainerName = {_B, _u, _g, _s, _y, _END},
        .items = {ITEM_SUPER_POTION, ITEM_FULL_HEAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LeaderBugsy1),
        .party = {.ItemCustomMoves = sParty_LeaderBugsy1}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_6] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt6),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt6}
    },

    [TRAINER_PKMN_BREEDER_M_DRAKE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PKMN_BREEDER_M,
        .trainerName = {_D, _r, _a, _k, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BreederDrake),
        .party = {.NoItemDefaultMoves = sParty_BreederDrake}
    },

    [TRAINER_BEAUTY_BRITNEY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = {_B, _r, _i, _t, _n, _e, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BeautyBritney),
        .party = {.NoItemDefaultMoves = sParty_BeautyBritney}
    },

    [TRAINER_PICNICKER_JOAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = {_J, _o, _a, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PicnickerJoan),
        .party = {.NoItemDefaultMoves = sParty_PicnickerJoan}
    },

    [TRAINER_BUG_CATCHER_CONNOR] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = {_C, _o, _n, _n, _o, _r, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BugCatcherConnor),
        .party = {.NoItemDefaultMoves = sParty_BugCatcherConnor}
    },

    [TRAINER_RIVAL_KRIS_ROUTE34] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL_KRIS_ETHAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_KRIS,
        .trainerName = {_K, _r, _i, _s, _END},
        .items = {ITEM_SUPER_POTION, ITEM_FULL_HEAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RivalKrisRoute34),
        .party = {.ItemCustomMoves = sParty_RivalKrisRoute34}
    },

    [TRAINER_RIVAL_ETHAN_ROUTE34] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL_KRIS_ETHAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ETHAN,
        .trainerName = {_E, _t, _h, _a, _n, _END},
        .items = {ITEM_SUPER_POTION, ITEM_FULL_HEAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RivalEthanRoute34),
        .party = {.ItemCustomMoves = sParty_RivalEthanRoute34}
    },

    [TRAINER_YOUNGSTER_OWEN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = {_O, _w, _e, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_YoungsterOwen),
        .party = {.NoItemDefaultMoves = sParty_YoungsterOwen}
    },

    [TRAINER_POKE_FAN_M_DEVON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = {_D, _e, _v, _o, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PokefanDevon),
        .party = {.NoItemDefaultMoves = sParty_PokefanDevon}
    },

    [TRAINER_PICNICKER_SHARONA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = {_S, _h, _a, _r, _o, _n, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PicnickerSharona),
        .party = {.NoItemDefaultMoves = sParty_PicnickerSharona}
    },

    [TRAINER_HEX_MANIAC_STELLA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HEX_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = {_S, _t, _e, _l, _l, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_HexManiacStella),
        .party = {.NoItemDefaultMoves = sParty_HexManiacStella}
    },

    [TRAINER_PKMN_BREEDER_M_JACOB] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PKMN_BREEDER_M,
        .trainerName = {_J, _a, _c, _o, _b, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BreederJacob),
        .party = {.NoItemDefaultMoves = sParty_BreederJacob}
    },

    [TRAINER_YOUNGSTER_CHRIS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = {_C, _h, _r, _i, _s, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_YoungsterChris),
        .party = {.NoItemDefaultMoves = sParty_YoungsterChris}
    },

    [TRAINER_OFFICER_PETER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_OFFICER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_OFFICER,
        .trainerName = {_P, _e, _t, _e, _r, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_OfficerPeterParker),
        .party = {.NoItemDefaultMoves = sParty_OfficerPeterParker}
    },

    [TRAINER_OFFICER_PARKER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_OFFICER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_OFFICER,
        .trainerName = {_P, _a, _r, _k, _e, _r, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_OfficerPeterParker),
        .party = {.NoItemDefaultMoves = sParty_OfficerPeterParker}
    },

    [TRAINER_LASS_ARLENE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = {_A, _r, _l, _e, _n, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LassArlene),
        .party = {.NoItemDefaultMoves = sParty_LassArlene}
    },

    [TRAINER_BEAUTY_LORETTA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = {_L, _o, _r, _e, _r, _t, _t, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BeautyLoretta),
        .party = {.NoItemDefaultMoves = sParty_BeautyLoretta}
    },

    [TRAINER_PICNICKER_ALLIE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = {_A, _l, _l, _i, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PicnickerAllie),
        .party = {.NoItemDefaultMoves = sParty_PicnickerAllie}
    },

    [TRAINER_POKE_FAN_F_VERA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = {_V, _e, _r, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PokefanVera),
        .party = {.NoItemDefaultMoves = sParty_PokefanVera}
    },

    [TRAINER_POKE_FAN_M_ERIC] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = {_E, _r, _i, _c, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PokefanEric),
        .party = {.NoItemDefaultMoves = sParty_PokefanEric}
    },

    [TRAINER_LEADER_WHITNEY_1] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_WHITNEY,
        .trainerName = {_W, _h, _i, _t, _n, _e, _y, _END},
        .items = {ITEM_SUPER_POTION, ITEM_FULL_HEAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LeaderWhitney1),
        .party = {.ItemCustomMoves = sParty_LeaderWhitney1}
    },

    [TRAINER_SUPER_NERD_BONJI] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SUPER_NERD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = {_B, _o, _n, _j, _i, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SuperNerdBonji),
        .party = {.NoItemDefaultMoves = sParty_SuperNerdBonji}
    },

    [TRAINER_JUGGLER_GLENN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_JUGGLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_JUGGLER,
        .trainerName = {_G, _l, _e, _n, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_JugglerGlenn),
        .party = {.NoItemDefaultMoves = sParty_JugglerGlenn}
    },

    [TRAINER_POKEMANIAC_OSCAR] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = {_O, _s, _c, _a, _r, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PokemaniacOscar),
        .party = {.NoItemDefaultMoves = sParty_PokemaniacOscar}
    },

    [TRAINER_SUPER_NERD_MATT] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SUPER_NERD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = {_M, _a, _t, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SuperNerdMatt),
        .party = {.NoItemDefaultMoves = sParty_SuperNerdMatt}
    },

    [TRAINER_BATTLE_GIRL_SHELLY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BATTLE_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = {_S, _h, _e, _l, _l, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BattleGirlShelly),
        .party = {.NoItemDefaultMoves = sParty_BattleGirlShelly}
    },

    [TRAINER_CAMPER_TIMMY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = {_T, _i, _m, _m, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_CamperTimmy),
        .party = {.NoItemDefaultMoves = sParty_CamperTimmy}
    },

    [TRAINER_PICNICKER_COURTNEY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = {_C, _o, _u, _r, _t, _n, _e, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PicnickerCourtney),
        .party = {.NoItemDefaultMoves = sParty_PicnickerCourtney}
    },

    [TRAINER_YOUNGSTER_CARLOS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = {_C, _a, _r, _l, _o, _s, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_YoungsterCarlos),
        .party = {.NoItemDefaultMoves = sParty_YoungsterCarlos}
    },

    [TRAINER_FIREBREATHER_SCOURGE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FIRE_BREATHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = {_S, _c, _o, _u, _r, _g, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_FireBreatherScourge),
        .party = {.NoItemDefaultMoves = sParty_FireBreatherScourge}
    },

    [TRAINER_JUGGLER_NOLAND] = {
        .partyFlags = 0,
        .trainerClass = CLASS_JUGGLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_JUGGLER,
        .trainerName = {_N, _o, _l, _a, _n, _d, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_JugglerNoland),
        .party = {.NoItemDefaultMoves = sParty_JugglerNoland}
    },

    [TRAINER_BUG_CATCHER_LOUIS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = {_L, _o, _u, _i, _s, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BugCatcherLouis),
        .party = {.NoItemDefaultMoves = sParty_BugCatcherLouis}
    },

    [TRAINER_BIRD_KEEPER_MIKE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = {_M, _i, _k, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BirdKeeperMike),
        .party = {.NoItemDefaultMoves = sParty_BirdKeeperMike}
    },

    [TRAINER_LASS_JACKIE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = {_J, _a, _c, _k, _i, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LassJackie),
        .party = {.NoItemDefaultMoves = sParty_LassJackie}
    },

    [TRAINER_POKE_FAN_F_LARISSA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = {_L, _a, _r, _i, _s, _s, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PokeFanLarissa),
        .party = {.NoItemDefaultMoves = sParty_PokeFanLarissa}
    },

    [TRAINER_LASS_GINA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = {_G, _i, _n, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LassGina),
        .party = {.NoItemDefaultMoves = sParty_LassGina}
    },

    [TRAINER_POKEMANIAC_CALVIN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = {_C, _a, _l, _v, _i, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PokemaniacCalvin),
        .party = {.NoItemDefaultMoves = sParty_PokemaniacCalvin}
    },

    [TRAINER_PICNICKER_LILLIE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = {_L, _i, _l, _l, _i, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PicnickerLillie),
        .party = {.NoItemDefaultMoves = sParty_PicnickerLillie}
    },

    [TRAINER_POKE_FAN_M_LUCAS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = {_L, _u, _c, _a, _s, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PokeFanLucas),
        .party = {.NoItemDefaultMoves = sParty_PokeFanLucas}
    },

    [TRAINER_PSYCHIC_M_VIZZIO] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = {_V, _i, _z, _z, _i, _o, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PsychicVizzio),
        .party = {.NoItemDefaultMoves = sParty_PsychicVizzio}
    },

    [TRAINER_SCHOOL_KID_DONNY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SCHOOL_KID,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SCHOOL_BOY,
        .trainerName = {_D, _o, _n, _n, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SchoolKidDonny),
        .party = {.NoItemDefaultMoves = sParty_SchoolKidDonny}
    },

    [TRAINER_LASS_BEATRICE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = {_B, _e, _a, _t, _r, _i, _c, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LassBeatrice),
        .party = {.NoItemDefaultMoves = sParty_LassBeatrice}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_7] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt7),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt7}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_8] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt8),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt8}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_9] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt9),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt9}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_10] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt10),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt10}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_11] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt11),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt11}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_12] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt12),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt12}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_13] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt13),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt13}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_14] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt14),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt14}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_15] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt15),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt15}
    },

    [TRAINER_ROCKET_EXECUTIVE_PROTON_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_ROCKET_EXECUTIVE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PROTON,
        .trainerName = {_P, _r, _o, _t, _o, _n, _END},
        .items = {ITEM_SUPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ExecutiveProton2),
        .party = {.NoItemCustomMoves = sParty_ExecutiveProton2}
    },

    [TRAINER_CHANNELER_USAGI] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        .trainerName = {_U, _s, _a, _g, _i, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ChannelerUsagi),
        .party = {.NoItemDefaultMoves = sParty_ChannelerUsagi}
    },

    [TRAINER_SAGE_AISO] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SAGE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = {_A, _i, _s, _o, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SageAiso),
        .party = {.NoItemDefaultMoves = sParty_SageAiso}
    },

    [TRAINER_CHANNELER_RUMIKO] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        .trainerName = {_R, _u, _m, _i, _k, _o, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ChannelerRumiko),
        .party = {.NoItemDefaultMoves = sParty_ChannelerRumiko}
    },

    [TRAINER_HEX_MANIAC_LINA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HEX_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = {_L, _i, _n, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_HexManiacLina),
        .party = {.NoItemDefaultMoves = sParty_HexManiacLina}
    },

    [TRAINER_SAGE_GENDO] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SAGE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = {_G, _e, _n, _d, _o, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SageGendo),
        .party = {.NoItemDefaultMoves = sParty_SageGendo}
    },

    [TRAINER_LEADER_MORTY_1] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MORTY,
        .trainerName = {_M, _o, _r, _t, _y, _END},
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LeaderMorty1),
        .party = {.ItemCustomMoves = sParty_LeaderMorty1}
    },

    [TRAINER_TWINS_MEI_AND_REI] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = {_M, _e, _i, _AMPERSAND, _R, _e, _i, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_TwinsMeiandRei),
        .party = {.NoItemDefaultMoves = sParty_TwinsMeiandRei}
    },

    [TRAINER_PSYCHIC_F_JEMINA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = {_J, _e, _m, _i, _n, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PsychicJemina),
        .party = {.NoItemDefaultMoves = sParty_PsychicJemina}
    },

    [TRAINER_ROCKET_EXECUTIVE_ARIANA_1] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ROCKET_EXECUTIVE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ARIANA,
        .trainerName = {_A, _r, _i, _a, _n, _a, _END},
        .items = {ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ExecutiveAriana1),
        .party = {.ItemCustomMoves = sParty_ExecutiveAriana1}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_16] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt16),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt16}
    },

    [TRAINER_BURGLAR_GORDON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BURGLAR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BURGLAR,
        .trainerName = {_G, _o, _r, _d, _o, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BurglarGordon),
        .party = {.NoItemDefaultMoves = sParty_BurglarGordon}
    },

    [TRAINER_SAILOR_SAMSON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = {_S, _a, _m, _s, _o, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SailorSamson),
        .party = {.NoItemDefaultMoves = sParty_SailorSamson}
    },

    [TRAINER_BEAUTY_ROBIN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = {_R, _o, _b, _i, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BeautyRobin),
        .party = {.NoItemDefaultMoves = sParty_BeautyRobin}
    },

    [TRAINER_PICNICKER_CRISSY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = {_C, _r, _i, _s, _s, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PicnickerCrissy),
        .party = {.NoItemDefaultMoves = sParty_PicnickerCrissy}
    },

    [TRAINER_BIRD_KEEPER_DARIUS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = {_D, _a, _r, _i, _u, _s, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BirdKeeperDarius),
        .party = {.NoItemDefaultMoves = sParty_BirdKeeperDarius}
    },

    [TRAINER_PSYCHIC_M_WADE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = {_W, _a, _d, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PsychicWade),
        .party = {.NoItemDefaultMoves = sParty_PsychicWade}
    },

    [TRAINER_BEAUTY_RELI] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = {_R, _e, _l, _i, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BeautyReli),
        .party = {.NoItemDefaultMoves = sParty_BeautyReli}
    },

    [TRAINER_PSYCHIC_M_MORRIS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = {_M, _o, _r, _r, _i, _s, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PsychicMorris),
        .party = {.NoItemDefaultMoves = sParty_PsychicMorris}
    },

    [TRAINER_POKE_FAN_F_GIOVANNA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = {_G, _i, _o, _v, _a, _n, _n, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PokeFanGiovanna),
        .party = {.NoItemDefaultMoves = sParty_PokeFanGiovanna}
    },

    [TRAINER_POKE_FAN_M_GIORNO] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = {_G, _i, _o, _r, _n, _o, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PokeFanGiorno),
        .party = {.NoItemDefaultMoves = sParty_PokeFanGiorno}
    },

    [TRAINER_SAILOR_SAIBOT] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = {_S, _a, _i, _b, _o, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SailorSaibot),
        .party = {.NoItemDefaultMoves = sParty_SailorSaibot}
    },

    [TRAINER_ACE_TRAINER_M_DAVIS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_M,
        .trainerName = {_D, _a, _v, _i, _s, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerDavis),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerDavis}
    },

    [TRAINER_GENTLEMAN_BYRON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = {_B, _y, _r, _o, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_GentlemanByron),
        .party = {.NoItemDefaultMoves = sParty_GentlemanByron}
    },

    [TRAINER_SAILOR_HUDSON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = {_H, _u, _d, _s, _o, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SailorHudson),
        .party = {.NoItemDefaultMoves = sParty_SailorHudson}
    },

    [TRAINER_BIRD_KEEPER_STEVE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = {_S, _t, _e, _v, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BirdKeeperSteve),
        .party = {.NoItemDefaultMoves = sParty_BirdKeeperSteve}
    },

    [TRAINER_GENTLEMAN_ANDRE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = {_A, _n, _d, _r, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_GentlemanAndre),
        .party = {.NoItemDefaultMoves = sParty_GentlemanAndre}
    },

    [TRAINER_LASS_KAYLA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = {_K, _a, _y, _l, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LassKayla),
        .party = {.NoItemDefaultMoves = sParty_LassKayla}
    },

    [TRAINER_SAILOR_LINO] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = {_L, _i, _n, _o, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SailorLino),
        .party = {.NoItemDefaultMoves = sParty_SailorLino}
    },

    [TRAINER_POKEMANIAC_EDMOND] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = {_E, _d, _m, _o, _m, _d, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PokeManiacEdmond),
        .party = {.NoItemDefaultMoves = sParty_PokeManiacEdmond}
    },

    [TRAINER_SAILOR_TREVOR] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = {_T, _r, _e, _v, _o, _r, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SailorTrevor),
        .party = {.NoItemDefaultMoves = sParty_SailorTrevor}
    },

    [TRAINER_TUBER_F_LENORA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TUBER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = {_L, _e, _n, _o, _r, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_TuberLenora),
        .party = {.NoItemDefaultMoves = sParty_TuberLenora}
    },

    [TRAINER_SAILOR_DUNCAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = {_D, _u, _n, _c, _a, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SailorDuncan),
        .party = {.NoItemDefaultMoves = sParty_SailorDuncan}
    },

    [TRAINER_FISHERMAN_HUEY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = {_H, _u, _e, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_FishermanHuey),
        .party = {.NoItemDefaultMoves = sParty_FishermanHuey}
    },

    [TRAINER_SWIMMER_M_DYLAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = {_D, _y, _l, _a, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SwimmerDylan),
        .party = {.NoItemDefaultMoves = sParty_SwimmerDylan}
    },

    [TRAINER_SWIMMER_F_BRIANNA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = {_B, _r, _i, _a, _n, _n, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SwimmerBrianna),
        .party = {.NoItemDefaultMoves = sParty_SwimmerBrianna}
    },

    [TRAINER_TUBER_M_DWAYNE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TUBER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = {_D, _w, _a, _y, _n, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_TuberDwayne),
        .party = {.NoItemDefaultMoves = sParty_TuberDwayne}
    },

    [TRAINER_SWIMMER_M_LIAM] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = {_L, _i, _a, _m, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SwimmerLiam),
        .party = {.NoItemDefaultMoves = sParty_SwimmerLiam}
    },

    [TRAINER_SWIMMER_F_JANICE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = {_J, _a, _n, _i, _c, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SwimmerJanice),
        .party = {.NoItemDefaultMoves = sParty_SwimmerJanice}
    },

    [TRAINER_TUBER_F_ERNESTINE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TUBER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = {_E, _r, _n, _e, _s, _t, _i, _n, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_TuberErnestine),
        .party = {.NoItemDefaultMoves = sParty_TuberErnestine}
    },

    [TRAINER_HIKER_RICKY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = {_R, _i, _c, _k, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_HikerRicky),
        .party = {.NoItemDefaultMoves = sParty_HikerRicky}
    },

    [TRAINER_HIKER_JEFF] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = {_J, _e, _f, _f, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_HikerJeff),
        .party = {.NoItemDefaultMoves = sParty_HikerJeff}
    },

    [TRAINER_SUPER_NERD_ROY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SUPER_NERD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = {_R, _o, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SuperNerdRoy),
        .party = {.NoItemDefaultMoves = sParty_SuperNerdRoy}
    },

    [TRAINER_SUPER_NERD_TOMMY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SUPER_NERD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = {_T, _o, _m, _m, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SuperNerdTommy),
        .party = {.NoItemDefaultMoves = sParty_SuperNerdTommy}
    },

    [TRAINER_PSYCHIC_F_BEA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = {_B, _e, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PsychicBea),
        .party = {.NoItemDefaultMoves = sParty_PsychicBea}
    },

    [TRAINER_POKE_FAN_F_DIANA] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = {_D, _i, _a, _n, _a, _END},
        .items = {ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PokeFanDiana),
        .party = {.NoItemCustomMoves = sParty_PokeFanDiana}
    },

    [TRAINER_LEADER_CHUCK_1] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CHUCK,
        .trainerName = {_C, _h, _u, _c, _k, _END},
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_HEAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LeaderChuck1),
        .party = {.ItemCustomMoves = sParty_LeaderChuck1}
    },

    [TRAINER_LEADER_JASMINE_1] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_JASMINE,
        .trainerName = {_J, _a, _s, _m, _i, _n, _e, _END},
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_HEAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LeaderJasmine1),
        .party = {.ItemCustomMoves = sParty_LeaderJasmine1}
    },

    [TRAINER_LEADER_LORELEI_1] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LORELEI,
        .trainerName = {_L, _o, _r, _e, _l, _e, _i, _END},
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_HEAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LeaderLorelei1),
        .party = {.ItemCustomMoves = sParty_LeaderLorelei1}
    },

    [TRAINER_LEADER_CLAIR_1] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CLAIR,
        .trainerName = {_C, _l, _a, _i, _r, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_MEGA_EARING},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LeaderClair1),
        .party = {.ItemCustomMoves = sParty_LeaderClair1}
    },

    [TRAINER_SWIMMER_F_CAITLIN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = {_C, _a, _i, _t, _l, _i, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SwimmerCaitlin),
        .party = {.NoItemDefaultMoves = sParty_SwimmerCaitlin}
    },

    [TRAINER_SWIMMER_M_HAROLD] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = {_H, _a, _r, _o, _l, _d, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SwimmerHarold),
        .party = {.NoItemDefaultMoves = sParty_SwimmerHarold}
    },

    [TRAINER_SWIMMER_M_DUNCAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = {_D, _u, _n, _c, _a, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SwimmerDuncan),
        .party = {.NoItemDefaultMoves = sParty_SwimmerDuncan}
    },

    [TRAINER_SWIMMER_F_SOFIA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = {_S, _o, _f, _i, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SwimmerSofia),
        .party = {.NoItemDefaultMoves = sParty_SwimmerSofia}
    },

    [TRAINER_SWIMMER_F_MARTHA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = {_M, _a, _r, _t, _h, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SwimmerMartha),
        .party = {.NoItemDefaultMoves = sParty_SwimmerMartha}
    },

    [TRAINER_SWIMMER_M_BRYCE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = {_B, _r, _y, _c, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SwimmerBryce),
        .party = {.NoItemDefaultMoves = sParty_SwimmerBryce}
    },

    [TRAINER_SWIMMER_F_HANNAH] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = {_H, _a, _n, _n, _a, _h, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SwimmerHannah),
        .party = {.NoItemDefaultMoves = sParty_SwimmerHannah}
    },

    [TRAINER_SWIMMER_M_MARK] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = {_M, _a, _r, _k, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SwimmerMark),
        .party = {.NoItemDefaultMoves = sParty_SwimmerMark}
    },

    [TRAINER_SWIMMER_F_EMMA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = {_E, _m, _m, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SwimmerEmma),
        .party = {.NoItemDefaultMoves = sParty_SwimmerEmma}
    },

    [TRAINER_FISHERMAN_COOPER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = {_C, _o, _o, _p, _e, _r, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_FishermanCooper),
        .party = {.NoItemDefaultMoves = sParty_FishermanCooper}
    },

    [TRAINER_SUPER_NERD_STEVE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SUPER_NERD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = {_S, _t, _e, _v, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SuperNerdSteve),
        .party = {.NoItemDefaultMoves = sParty_SuperNerdSteve}
    },

    [TRAINER_HIKER_WINSTON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = {_W, _i, _n, _s, _t, _o, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_HikerWinston),
        .party = {.NoItemDefaultMoves = sParty_HikerWinston}
    },

    [TRAINER_POKEMANIAC_DAWSON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = {_D, _a,_w, _s, _o, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PokemaniacDawson),
        .party = {.NoItemDefaultMoves = sParty_PokemaniacDawson}
    },

    [TRAINER_REPORTER_CIEL_1] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_REPORTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_REPORTER,
        .trainerName = {_C, _i, _e, _l, _END},
        .items = {ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ReporterCiel1),
        .party = {.ItemCustomMoves = sParty_ReporterCiel1}
    },

    [TRAINER_RIVAL_KRIS_UNUSED] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL_KRIS_ETHAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_KRIS,
        .trainerName = {_K, _r, _i, _s, _END},
        .items = {ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RivalKrisUnused),
        .party = {.ItemCustomMoves = sParty_RivalKrisUnused}
    },

    [TRAINER_RIVAL_ETHAN_UNUSED] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL_KRIS_ETHAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ETHAN,
        .trainerName = {_E, _t, _h, _a, _n, _END},
        .items = {ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RivalEthanUnused),
        .party = {.ItemCustomMoves = sParty_RivalEthanUnused}
    },

    [TRAINER_MYSTICAL_MAN_EUSINE] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_MYSTICAL_MAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_EUSINE,
        .trainerName = {_E, _u, _s, _i, _n, _e, _END},
        .items = {ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_MysticalManEusine),
        .party = {.ItemCustomMoves = sParty_MysticalManEusine}
    },

    [TRAINER_BLACK_BELT_GLENN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = {_G, _l, _e, _n, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BlackBeltGlenn),
        .party = {.NoItemDefaultMoves = sParty_BlackBeltGlenn}
    },

    [TRAINER_BATTLE_GIRL_LASHAWNA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BATTLE_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = {_L, _a, _s, _h, _a, _w, _n, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BattleGirlLashawna),
        .party = {.NoItemDefaultMoves = sParty_BattleGirlLashawna}
    },

    [TRAINER_BLACK_BELT_BRANDO] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = {_B, _r, _a, _n, _d, _o, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BlackBeltBrando),
        .party = {.NoItemDefaultMoves = sParty_BlackBeltBrando}
    },

    [TRAINER_BATTLE_GIRL_SHARON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BATTLE_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = {_S, _h, _a, _r, _o, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BattleGirlSharon),
        .party = {.NoItemDefaultMoves = sParty_BattleGirlSharon}
    },

    [TRAINER_BLACK_BELT_DIMAGGIO] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = {_D, _i, _M, _a, _g, _g, _i, _o, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BlackBeltDimaggio),
        .party = {.NoItemDefaultMoves = sParty_BlackBeltDimaggio}
    },

    [TRAINER_BLACK_BELT_ERIK] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = {_E, _r,_i, _k, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BlackBeltErik),
        .party = {.NoItemDefaultMoves = sParty_BlackBeltErik}
    },

    [TRAINER_JUGGLER_AVERY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_JUGGLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_JUGGLER,
        .trainerName = {_A, _v, _e, _r, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_JugglerAvery),
        .party = {.NoItemDefaultMoves = sParty_JugglerAvery}
    },

    [TRAINER_SUPER_NERD_DEREK] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SUPER_NERD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = {_D, _e, _r, _e, _k, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SuperNerdDerek),
        .party = {.NoItemDefaultMoves = sParty_SuperNerdDerek}
    },

    [TRAINER_GENTLEMAN_ZACHARY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = {_Z, _a, _c, _h, _a, _r, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_GentlemanZachary),
        .party = {.NoItemDefaultMoves = sParty_GentlemanZachary}
    },

    [TRAINER_LASS_SONYA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = {_S, _o, _n, _y, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LassSonya),
        .party = {.NoItemDefaultMoves = sParty_LassSonya}
    },

    [TRAINER_OFFICER_FRANKLIN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_OFFICER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_OFFICER,
        .trainerName = {_F, _r, _a, _n, _k, _l, _i, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_OfficerFranklin),
        .party = {.NoItemDefaultMoves = sParty_OfficerFranklin}
    },

    [TRAINER_RIVAL_KRIS_ECRUTEAKSHRINE] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL_KRIS_ETHAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_KRIS,
        .trainerName = {_K, _r, _i, _s, _END},
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RivalKrisShrine),
        .party = {.ItemCustomMoves = sParty_RivalKrisShrine}
    },

    [TRAINER_RIVAL_ETHAN_ECRUTEAKSHRINE] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL_KRIS_ETHAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ETHAN,
        .trainerName = {_E, _t, _h, _a, _n, _END},
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RivalEthanShrine),
        .party = {.ItemCustomMoves = sParty_RivalEthanShrine}
    },

    [TRAINER_BLACK_BELT_KIYO] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_KIYO,
        .trainerName = {_K, _i, _y, _o, _END},
        .items = {ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BlackBeltKiyo),
        .party = {.NoItemCustomMoves = sParty_BlackBeltKiyo}
    },

    [TRAINER_CAMPER_SPENCER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = {_S, _p, _e, _n, _c, _e, _r, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_CamperSpencer),
        .party = {.NoItemDefaultMoves = sParty_CamperSpencer}
    },

    [TRAINER_PICNICKER_TIFFANY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = {_T, _i, _f, _f, _a, _n, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PicnickerTiffany),
        .party = {.NoItemDefaultMoves = sParty_PicnickerTiffany}
    },

    [TRAINER_POKEMANIAC_BRENT] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = {_B, _r, _e, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PokemaniacBrent),
        .party = {.NoItemDefaultMoves = sParty_PokemaniacBrent}
    },

    [TRAINER_POKEMANIAC_BECKET] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = {_B, _e, _c, _k, _e, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PokemaniacBecket),
        .party = {.NoItemDefaultMoves = sParty_PokemaniacBecket}
    },

    [TRAINER_POKEMANIAC_RON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = {_R, _o, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PokemaniacRon),
        .party = {.NoItemDefaultMoves = sParty_PokemaniacRon}
    },

    [TRAINER_FISHERMAN_WADE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = {_W, _a, _d, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_FishermanWade),
        .party = {.NoItemDefaultMoves = sParty_FishermanWade}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_17] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt17),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt17}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_18] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt18),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt18}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_19] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt19),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt19}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_20] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt20),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt20}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_21] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt21),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt21}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_22] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt22),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt22}
    },

    [TRAINER_TEAM_ROCKET_SCIENTIST_1] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SCIENTIST_M,
        .trainerName = {_S, _c, _i, _e, _n, _t, _i, _s, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketScientist1),
        .party = {.NoItemDefaultMoves = sParty_RocketScientist1}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_23] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt23),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt23}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_24] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt24),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt24}
    },

    [TRAINER_ROCKET_ADMIN_BERKEL_1] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ROCKET_ADMIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BERKEL,
        .trainerName = {_B, _e, _r, _k, _e, _l, _END},
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AdminBerkel1),
        .party = {.ItemCustomMoves = sParty_AdminBerkel1}
    },

    [TRAINER_ROCKET_EXECUTIVE_PETREL_1] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ROCKET_EXECUTIVE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PETREL,
        .trainerName = {_P, _e, _t, _r, _e, _l, _END},
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ExecutivePetrel1),
        .party = {.ItemCustomMoves = sParty_ExecutivePetrel1}
    },

    [TRAINER_ROCKET_EXECUTIVE_ARIANA_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ROCKET_EXECUTIVE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ARIANA,
        .trainerName = {_A, _r, _i, _a, _n, _a, _END},
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ExecutiveAriana2),
        .party = {.ItemCustomMoves = sParty_ExecutiveAriana2}
    },

    [TRAINER_BOARDER_NICHOLAS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BOARDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BOARDER,
        .trainerName = {_N, _i, _c, _h, _o, _l, _a, _s, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BoarderNicholas),
        .party = {.NoItemDefaultMoves = sParty_BoarderNicholas}
    },

    [TRAINER_BOARDER_JAXON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BOARDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BOARDER,
        .trainerName = {_J, _a, _x, _o, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BoarderJaxon),
        .party = {.NoItemDefaultMoves = sParty_BoarderJaxon}
    },

    [TRAINER_BOARDER_WILLIAM] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BOARDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BOARDER,
        .trainerName = {_W, _i, _l, _l, _i, _a, _m, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BoarderWilliam),
        .party = {.NoItemDefaultMoves = sParty_BoarderWilliam}
    },

    [TRAINER_SKIER_LINA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SKIER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SKIER,
        .trainerName = {_L, _i, _n, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SkierLina),
        .party = {.NoItemDefaultMoves = sParty_SkierLina}
    },

    [TRAINER_SKIER_BJORN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SKIER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SKIER,
        .trainerName = {_B, _j, _o, _r, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SkierBjorn),
        .party = {.NoItemDefaultMoves = sParty_SkierBjorn}
    },

    [TRAINER_SKIER_ELAINE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SKIER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SKIER,
        .trainerName = {_E, _l, _a, _i, _n, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SkierElaine),
        .party = {.NoItemDefaultMoves = sParty_SkierElaine}
    },

    [TRAINER_FISHERMAN_BOJACK] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = {_B, _o, _j, _a, _c, _k, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_FishermanBojack),
        .party = {.NoItemDefaultMoves = sParty_FishermanBojack}
    },

    [TRAINER_FISHERMAN_DINO] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = {_D, _i, _n, _o, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_FishermanDino),
        .party = {.NoItemDefaultMoves = sParty_FishermanDino}
    },

    [TRAINER_FISHERMAN_DWAYNE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = {_D, _w, _a, _y, _n, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_FishermanDwayne),
        .party = {.NoItemDefaultMoves = sParty_FishermanDwayne}
    },

    [TRAINER_SUPER_NERD_MACKEY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SUPER_NERD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = {_M, _a, _c, _k, _e, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SuperNerdMackey),
        .party = {.NoItemDefaultMoves = sParty_SuperNerdMackey}
    },

    [TRAINER_ACE_TRAINER_F_TETRA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_F,
        .trainerName = {_T, _e, _t, _r, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerTetra),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerTetra}
    },

    [TRAINER_ACE_TRAINER_M_NED] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_M,
        .trainerName = {_N, _e, _d, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerNed),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerNed}
    },

    [TRAINER_ACE_TRAINER_M_JADEN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_M,
        .trainerName = {_J, _a, _d, _e, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerJaden),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerJaden}
    },

    [TRAINER_ACE_TRAINER_F_IRIS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_F,
        .trainerName = {_I, _r, _i, _s, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerIris),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerIris}
    },

    [TRAINER_ACE_TRAINER_M_GENE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_F,
        .trainerName = {_G, _e, _n, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerGene),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerGene}
    },

    [TRAINER_FISHERMAN_LEWIS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = {_L, _e, _w, _i, _s, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_FishermanLewis),
        .party = {.NoItemDefaultMoves = sParty_FishermanLewis}
    },

    [TRAINER_POKEMANIAC_BAILY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = {_B, _a, _i, _l, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PokemaniacBaily),
        .party = {.NoItemDefaultMoves = sParty_PokemaniacBaily}
    },

    [TRAINER_FISHERMAN_BRAXTON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = {_B, _r, _a, _x, _t, _o, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_FishermanBraxton),
        .party = {.NoItemDefaultMoves = sParty_FishermanBraxton}
    },

    [TRAINER_BIRD_KEEPER_BERNIE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = {_B, _e, _r, _n, _i, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BirdKeeperBernie),
        .party = {.NoItemDefaultMoves = sParty_BirdKeeperBernie}
    },

    [TRAINER_RIVAL_KRIS_BLACKTHORNCITY] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL_KRIS_ETHAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_KRIS,
        .trainerName = {_K, _r, _i, _s, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_KrisBlackthornCity),
        .party = {.ItemCustomMoves = sParty_KrisBlackthornCity}
    },

    [TRAINER_RIVAL_ETHAN_BLACKTHORNCITY] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL_KRIS_ETHAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ETHAN,
        .trainerName = {_E, _t, _h, _a, _n, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_EthanBlackthornCity),
        .party = {.ItemCustomMoves = sParty_EthanBlackthornCity}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_25] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt25),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt25}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_26] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt26),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt26}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_27] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt27),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt27}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_28] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt28),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt28}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_29] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt29),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt29}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_30] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt30),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt30}
    },

    [TRAINER_TEAM_ROCKET_SCIENTIST_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SCIENTIST_M,
        .trainerName = {_S, _c, _i, _e, _n, _t, _i, _s, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketScientist2),
        .party = {.NoItemDefaultMoves = sParty_RocketScientist2}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_31] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt31),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt31}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_32] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt32),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt32}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_33] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt33),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt33}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_34] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt34),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt34}
    },

    [TRAINER_TEAM_ROCKET_SCIENTIST_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SCIENTIST_M,
        .trainerName = {_S, _c, _i, _e, _n, _t, _i, _s, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketScientist3),
        .party = {.ItemDefaultMoves = sParty_RocketScientist3}
    },

    [TRAINER_ROCKET_ADMIN_BERKEL_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ROCKET_ADMIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BERKEL,
        .trainerName = {_B, _e, _r, _k, _e, _l, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AdminBerkel2),
        .party = {.ItemCustomMoves = sParty_AdminBerkel2}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_35] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt35),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt35}
    },

    [TRAINER_BURGLAR_DAVID] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BURGLAR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BURGLAR,
        .trainerName = {_D, _a, _v, _i, _d, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BurglarDavid),
        .party = {.NoItemDefaultMoves = sParty_BurglarDavid}
    },

    [TRAINER_BURGLAR_TONY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BURGLAR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BURGLAR,
        .trainerName = {_T, _o, _n, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BurglarDavid),
        .party = {.NoItemDefaultMoves = sParty_BurglarDavid}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_36] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt36),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt36}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_37] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt37),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt37}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_38] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt38),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt38}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_39] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt39),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt39}
    },

    [TRAINER_ROCKET_EXECUTIVE_PETREL_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ROCKET_EXECUTIVE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PETREL,
        .trainerName = {_P, _e, _t, _r, _e, _l, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ExecutivePetrel2),
        .party = {.ItemCustomMoves = sParty_ExecutivePetrel2}
    },

    [TRAINER_ROCKET_EXECUTIVE_PROTON_3] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ROCKET_EXECUTIVE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PROTON,
        .trainerName = {_P, _r, _o, _t, _o, _n, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ExecutiveProton3),
        .party = {.ItemCustomMoves = sParty_ExecutiveProton3}
    },

    [TRAINER_ROCKET_EXECUTIVE_ARIANA_3] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ROCKET_EXECUTIVE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ARIANA,
        .trainerName = {_A, _r, _i, _a, _n, _a, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ExecutiveAriana3),
        .party = {.ItemCustomMoves = sParty_ExecutiveAriana3}
    },

    [TRAINER_ROCKET_EXECUTIVE_ARCHER_1] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ROCKET_EXECUTIVE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ARCHER,
        .trainerName = {_A, _r, _c, _h, _e, _r, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_RADIO_AMPLIFIER},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ExecutiveArcher),
        .party = {.ItemCustomMoves = sParty_ExecutiveArcher}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_40] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt40),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt40}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_41] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt41),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt41}
    },

    [TRAINER_ELDER_MOKAI] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ELDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ELDER,
        .trainerName = {_M, _o, _k, _a, _i, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_KEYSTONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ElderMokai),
        .party = {.ItemCustomMoves = sParty_ElderMokai}
    },

    [TRAINER_ACE_TRAINER_M_RAUL] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_M,
        .trainerName = {_R, _a, _u, _l, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerRaul),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerRaul}
    },

    [TRAINER_ACE_TRAINER_M_ISAIAH] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_M,
        .trainerName = {_I, _s, _a, _i, _a, _h, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerIsaiah),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerIsaiah}
    },

    [TRAINER_ACE_TRAINER_F_LENA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_F,
        .trainerName = {_L, _e, _n, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerLena),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerLena}
    },

    [TRAINER_ACE_TRAINER_F_JOANNE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_F,
        .trainerName = {_J, _o, _a, _n, _n, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerJoanne),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerJoanne}
    },

    [TRAINER_ACE_TRAINER_M_COREY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_M,
        .trainerName = {_C, _o, _r, _e, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerCorey),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerCorey}
    },

    [TRAINER_ACE_TRAINER_M_CHASE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_M,
        .trainerName = {_C, _h, _a, _s, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerChase),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerChase}
    },

    [TRAINER_ACE_TRAINER_F_BERTHA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_F,
        .trainerName = {_B, _e, _r, _t, _h, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerBertha),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerBertha}
    },

    [TRAINER_TWINS_LUA_AND_LUCA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = {_L, _u, _a, _AMPERSAND, _L, _u, _c, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_TwinsLuaAndLuca),
        .party = {.NoItemDefaultMoves = sParty_TwinsLuaAndLuca}
    },

    [TRAINER_KIMONO_GIRL_ZUKI] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_KIMONO_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .trainerName = {_Z, _u, _k, _i, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_KimonoGirlZuki),
        .party = {.ItemCustomMoves = sParty_KimonoGirlZuki}
    },

    [TRAINER_KIMONO_GIRL_NAOKO] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_KIMONO_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .trainerName = {_N, _a, _o, _k, _o, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_KimonoGirlNaoko),
        .party = {.ItemCustomMoves = sParty_KimonoGirlNaoko}
    },

    [TRAINER_KIMONO_GIRL_MIKI] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_KIMONO_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .trainerName = {_M, _i, _k, _i, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_KimonoGirlMiki),
        .party = {.ItemCustomMoves = sParty_KimonoGirlMiki}
    },

    [TRAINER_KIMONO_GIRL_SAYO] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_KIMONO_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .trainerName = {_S, _a, _y, _o, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_KimonoGirlSayo),
        .party = {.ItemCustomMoves = sParty_KimonoGirlSayo}
    },

    [TRAINER_KIMONO_GIRL_KUNI] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_KIMONO_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .trainerName = {_K, _u, _n, _i, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_KimonoGirlKuni),
        .party = {.ItemCustomMoves = sParty_KimonoGirlKuni}
    },

    [TRAINER_ACE_TRAINER_M_WILLIAM] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_M,
        .trainerName = {_W, _i, _l, _l, _i, _a, _m, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerWilliam),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerWilliam}
    },

    [TRAINER_ACE_TRAINER_F_TANYA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_F,
        .trainerName = {_T, _a, _n, _y, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerTanya),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerTanya}
    },

    [TRAINER_ACE_TRAINER_M_RONNIE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_M,
        .trainerName = {_R, _o, _n, _n, _i, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerRonnie),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerRonnie}
    },

    [TRAINER_SWIMMER_M_JOE/*mama Bv*/] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = {_J, _o, _e, _END/*mama xD*/},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SwimmerJoe/*mama hahahaha*/),
        .party = {.NoItemDefaultMoves = sParty_SwimmerJoe/*mama hahaha this is so unfunny xD*/}
    },

    [TRAINER_SWIMMER_F_SHEILA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = {_S, _h, _e, _i, _l, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SwimmerSheila),
        .party = {.NoItemDefaultMoves = sParty_SwimmerSheila}
    },

    [TRAINER_GENTLEMAN_TERRANCE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = {_T, _e, _r, _r, _a, _n, _c, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_GentlemanTerrance),
        .party = {.NoItemDefaultMoves = sParty_GentlemanTerrance}
    },

    [TRAINER_ACE_TRAINER_F_NORA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_F,
        .trainerName = {_N, _o, _r, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerNora),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerNora}
    },

    [TRAINER_ACE_TRAINER_M_GIBSON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_M,
        .trainerName = {_G, _i, _b, _s, _o, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerGibson),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerGibson}
    },

    [TRAINER_SWIMMER_F_GRACE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = {_G, _r, _a, _c, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SwimmerGrace),
        .party = {.NoItemDefaultMoves = sParty_SwimmerGrace}
    },

    [TRAINER_YOUNG_COUPLE_JOEY_AND_MAI] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNG_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = {_J, _o, _e, _y, _AMPERSAND, _M, _a, _i, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_YoungCoupleJoeyAndMai),
        .party = {.NoItemDefaultMoves = sParty_YoungCoupleJoeyAndMai}
    },

    [TRAINER_ACE_TRAINER_M_ROBBIE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_M,
        .trainerName = {_R, _o, _b, _b, _i, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerRobbie),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerRobbie}
    },

    [TRAINER_ACE_TRAINER_M_ARNOLD] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_M,
        .trainerName = {_A, _r, _n, _o, _l, _d, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerArnold),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerArnold}
    },

    [TRAINER_BIRD_KEEPER_DANTE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = {_D, _a, _n, _t, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BirdKeeperDante),
        .party = {.NoItemDefaultMoves = sParty_BirdKeeperDante}
    },

    [TRAINER_ACE_TRAINER_F_CONNIE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_F,
        .trainerName = {_C, _o, _n, _n, _i, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerConnie),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerConnie}
    },

    [TRAINER_HIKER_DARIUS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = {_D, _a, _r, _i, _u, _s, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_HikerDarius),
        .party = {.NoItemDefaultMoves = sParty_HikerDarius}
    },

    [TRAINER_ACE_TRAINER_F_ZOSSIE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_F,
        .trainerName = {_Z, _o, _s, _s, _i, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerZossie),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerZossie}
    },

    [TRAINER_HIKER_TYRON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = {_T, _y, _r, _o, _n, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_HikerTyron),
        .party = {.NoItemDefaultMoves = sParty_HikerTyron}
    },

    [TRAINER_ACE_TRAINER_M_CAMERON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_M,
        .trainerName = {_C, _a, _m, _e, _r, _o, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerCameron),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerCameron}
    },

    [TRAINER_SUPER_NERD_PRESTON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SUPER_NERD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = {_P, _r, _e, _s, _t, _o, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SuperNerdPreston),
        .party = {.NoItemDefaultMoves = sParty_SuperNerdPreston}
    },

    [TRAINER_ACE_TRAINER_M_RANDALL] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_M,
        .trainerName = {_R, _a, _n, _d, _a, _l, _l, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerRandall),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerRandall}
    },

    [TRAINER_ACE_TRAINER_M_LUCA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_M,
        .trainerName = {_L, _u, _c, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerLuca),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerLuca}
    },

    [TRAINER_ROCKER_JIMI] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ROCKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKER,
        .trainerName = {_J, _i, _m, _i, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RockerJimi),
        .party = {.NoItemDefaultMoves = sParty_RockerJimi}
    },

    [TRAINER_ACE_TRAINER_F_ANYA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_F,
        .trainerName = {_A, _n, _y, _a,_END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerAnya),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerAnya}
    },

    [TRAINER_ACE_COUPLE_BENNY_AND_KAI] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ACE_COUPLE,
        .trainerName = {_B, _e, _n, _AMPERSAND, _K, _a, _i, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceCoupleBenAndKai),
        .party = {.NoItemDefaultMoves = sParty_AceCoupleBenAndKai}
    },

    [TRAINER_JUGGLER_SHAWN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_JUGGLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_JUGGLER,
        .trainerName = {_S, _h, _a, _w, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_JugglerShawn),
        .party = {.NoItemDefaultMoves = sParty_JugglerShawn}
    },

    [TRAINER_ACE_TRAINER_M_GREGORY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_M,
        .trainerName = {_G, _r, _e, _g, _o, _r, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerGregory),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerGregory}
    },

    [TRAINER_ACE_TRAINER_F_KATRINA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_F,
        .trainerName = {_K, _a, _t, _r, _i, _n, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerKatrina),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerKatrina}
    },

    [TRAINER_ACE_TRAINER_M_KAYDEN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_M,
        .trainerName = {_K, _a, _y, _d, _e, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerKayden),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerKayden}
    },

    [TRAINER_ACE_TRAINER_M_NATE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_M,
        .trainerName = {_N, _a, _t, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerNate),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerNate}
    },

    [TRAINER_ACE_TRAINER_F_PRISCILLA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_F,
        .trainerName = {_P, _r, _i, _s, _c, _i, _l, _l, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerPriscilla),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerPriscilla}
    },

    [TRAINER_ACE_TRAINER_F_MINA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_F,
        .trainerName = {_M, _i, _n, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerMina),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerMina}
    },

    [TRAINER_ACE_TRAINER_M_JASON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_M,
        .trainerName = {_J, _a, _s, _o, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerJason),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerJason}
    },

    [TRAINER_FISHERMAN_COREY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = {_C, _o, _r, _e, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_FishermanCorey),
        .party = {.NoItemDefaultMoves = sParty_FishermanCorey}
    },

    [TRAINER_ACE_TRAINER_F_TRINA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_F,
        .trainerName = {_T, _r, _i, _n, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerTrina),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerTrina}
    },

    [TRAINER_BOARDER_JOHN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BOARDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BOARDER,
        .trainerName = {_J, _o, _h, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BoarderJohn),
        .party = {.NoItemDefaultMoves = sParty_BoarderJohn}
    },

    [TRAINER_LEADER_PRYCE_1] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PRYCE,
        .trainerName = {_P, _r, _y, _c, _e, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_KEYSTONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LeaderPryce1),
        .party = {.ItemCustomMoves = sParty_LeaderPryce1}
    },

        [TRAINER_SILVER_LEAGUE_TYPHLOSION] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = {_T, _E, _R, _R, _Y, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_MEGA_RING},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RivalSilver5Typhlosion),
        .party = {.ItemCustomMoves = sParty_RivalSilver5Typhlosion}
    },

    [TRAINER_SILVER_LEAGUE_FERALIGATR] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = {_T, _E, _R, _R, _Y, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_MEGA_RING},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RivalSilver5Feraligatr),
        .party = {.ItemCustomMoves = sParty_RivalSilver5Feraligatr}
    },

    [TRAINER_SILVER_LEAGUE_MEGANIUM] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = {_T, _E, _R, _R, _Y, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_MEGA_RING},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RivalSilver5Meganium),
        .party = {.ItemCustomMoves = sParty_RivalSilver5Meganium}
    },


    [TRAINER_PKMN_TRAINER_KRIS] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CHAMPION_KE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHAMP_KRIS,
        .trainerName = {_K, _r, _i, _s, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_MEGA_RING},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ChampionKris),
        .party = {.ItemCustomMoves = sParty_ChampionKris}
    },

    [TRAINER_PKMN_TRAINER_ETHAN] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CHAMPION_KE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CHAMP_ETHAN,
        .trainerName = {_E, _t, _h, _a, _n, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_MEGA_RING},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ChampionEthan),
        .party = {.ItemCustomMoves = sParty_ChampionEthan}
    },

    [TRAINER_SKIER_LENORA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SKIER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SKIER,
        .trainerName = {_L, _e, _n, _o, _r, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SkierLenora),
        .party = {.NoItemDefaultMoves = sParty_SkierLenora}
    },

    [TRAINER_BOARDER_BENNY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BOARDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BOARDER,
        .trainerName = {_B, _e, _n, _n, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BoarderBenny),
        .party = {.NoItemDefaultMoves = sParty_BoarderBenny}
    },

    [TRAINER_SKIER_BRENDA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SKIER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SKIER,
        .trainerName = {_B, _r, _e, _n, _d, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SkierBrenda),
        .party = {.NoItemDefaultMoves = sParty_SkierBrenda}
    },

    [TRAINER_BOARDER_CHESTER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BOARDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BOARDER,
        .trainerName = {_C, _h, _e, _s, _t, _e, _r, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BoarderChester),
        .party = {.NoItemDefaultMoves = sParty_BoarderChester}
    },

    [TRAINER_HIKER_WILTON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = {_W, _i, _l, _t, _o, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_HikerWilton),
        .party = {.NoItemDefaultMoves = sParty_HikerWilton}
    },

    [TRAINER_SUPER_NERD_FLYNN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SUPER_NERD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = {_F, _l, _y, _n, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SuperNerdFlynn),
        .party = {.NoItemDefaultMoves = sParty_SuperNerdFlynn}
    },

    [TRAINER_HIKER_JACOB] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = {_J, _a, _c, _o, _b, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_HikerJacob),
        .party = {.NoItemDefaultMoves = sParty_HikerJacob}
    },

    [TRAINER_ACE_TRAINER_M_ROGER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_M,
        .trainerName = {_R, _o, _g, _e, _r, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerRoger),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerRoger}
    },

    [TRAINER_HIKER_REED] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = {_R, _e, _e, _d, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_HikerReed),
        .party = {.NoItemDefaultMoves = sParty_HikerReed}
    },

    [TRAINER_ACE_TRAINER_F_MELINA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_F,
        .trainerName = {_M, _e, _l, _i, _n, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerMelina),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerMelina}
    },

    [TRAINER_POKE_FAN_M_CARTER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = {_C, _a, _r, _t, _e, _r, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PokeFanCarter),
        .party = {.NoItemDefaultMoves = sParty_PokeFanCarter}
    },

    [TRAINER_BEAUTY_TAYLOR] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = {_T, _a, _y, _l, _o, _r, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BeautyTaylor),
        .party = {.NoItemDefaultMoves = sParty_BeautyTaylor}
    },

    [TRAINER_HIKER_BECK] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = {_B, _e, _c, _k, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_HikerBeck),
        .party = {.NoItemDefaultMoves = sParty_HikerBeck}
    },

    [TRAINER_HIKER_MARLON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = {_M, _a, _r, _l, _o, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_HikerMarlon),
        .party = {.NoItemDefaultMoves = sParty_HikerMarlon}
    },

    [TRAINER_HIKER_BENSON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = {_B, _e, _n, _s, _o, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_HikerBenson),
        .party = {.NoItemDefaultMoves = sParty_HikerBenson}
    },

    [TRAINER_CAMPER_MIKE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = {_M, _i, _k, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_CamperMike),
        .party = {.NoItemDefaultMoves = sParty_CamperMike}
    },

    [TRAINER_CAMPER_STANLEY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = {_S, _t, _a, _n, _l, _e, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_CamperStanley),
        .party = {.NoItemDefaultMoves = sParty_CamperStanley}
    },
    
    [TRAINER_PICNICKER_WENDY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = {_W, _e, _n, _d, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PicnickerWendy),
        .party = {.NoItemDefaultMoves = sParty_PicnickerWendy}
    },

    [TRAINER_BLACK_BELT_ATSUSHI/*Pending to confirm where it is used*/] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = {_A, _t, _s, _u, _s, _h, _i, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BlackBeltAtsushi),
        .party = {.NoItemDefaultMoves = sParty_BlackBeltAtsushi}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_42] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt42),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt42}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_43] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt43),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt43}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_44] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt44),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt44}
    },

    [TRAINER_SILVER_ILEXFOREST_QUILAVA] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = {_T, _E, _R, _R, _Y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_Silver2Quilava),
        .party = {.ItemCustomMoves = sParty_Silver2Quilava}
    },

    [TRAINER_SILVER_ILEXFOREST_CROCONAW] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = {_T, _E, _R, _R, _Y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_Silver2Croconaw),
        .party = {.ItemCustomMoves = sParty_Silver2Croconaw}
    },

    [TRAINER_SILVER_ILEXFOREST_BAYLEEF] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = {_T, _E, _R, _R, _Y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_Silver2Bayleef),
        .party = {.ItemCustomMoves = sParty_Silver2Bayleef}
    },

    [TRAINER_SILVER_BURNEDTOWER_QUILAVA] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = {_T, _E, _R, _R, _Y, _END},
        .items = {ITEM_SUPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RivalSilver3Quilava),
        .party = {.ItemCustomMoves = sParty_RivalSilver3Quilava}
    },

    [TRAINER_SILVER_BURNEDTOWER_CROCONAW] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = {_T, _E, _R, _R, _Y, _END},
        .items = {ITEM_SUPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RivalSilver3Croconaw),
        .party = {.ItemCustomMoves = sParty_RivalSilver3Croconaw}
    },

    [TRAINER_SILVER_BURNEDTOWER_BAYLEEF] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = {_T, _E, _R, _R, _Y, _END},
        .items = {ITEM_SUPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RivalSilver3Bayleef),
        .party = {.ItemCustomMoves = sParty_RivalSilver3Bayleef}
    },

    [TRAINER_SILVER_GOLDENROD_TYPHLOSION] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = {_T, _E, _R, _R, _Y, _END},
        .items = {ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RivalSilver4Typhlosion),
        .party = {.ItemCustomMoves = sParty_RivalSilver4Typhlosion}
    },

    [TRAINER_SILVER_GOLDENROD_FERALIGATR] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = {_T, _E, _R, _R, _Y, _END},
        .items = {ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RivalSilver4Feraligatr),
        .party = {.ItemCustomMoves = sParty_RivalSilver4Feraligatr}
    },

    [TRAINER_SILVER_GOLDENROD_MEGANIUM] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = {_T, _E, _R, _R, _Y, _END},
        .items = {ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RivalSilver4Meganium),
        .party = {.ItemCustomMoves = sParty_RivalSilver4Meganium}
    },

    [TRAINER_PKMN_TRAINER_LANCE_PARTNER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PKMN_TRAINER_1,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LANCE,
        .trainerName = {_L, _a, _n, _c, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PartnerLance),
        .party = {.NoItemDefaultMoves = sParty_PartnerLance}
    },

    [TRAINER_SILVER_GOLDENROD_PARTNER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = {_T, _E, _R, _R, _Y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PartnerSilver),
        .party = {.NoItemDefaultMoves = sParty_PartnerSilver}
    },

    [TRAINER_ELITE_FOUR_AILE] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ELITE_4,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_AILE,
        .trainerName = {_A, _i, _l, _e, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_MEGA_RIBBON},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_EliteFourAile1),
        .party = {.ItemCustomMoves = sParty_EliteFourAile1}
    },

    [TRAINER_ELITE_FOUR_WILL] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ELITE_4,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_WILL,
        .trainerName = {_W, _i, _l, _l, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_MEGA_BUTTON},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_EliteFourWill1),
        .party = {.ItemCustomMoves = sParty_EliteFourWill1}
    },

    [TRAINER_ELITE_FOUR_KOGA] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ELITE_4,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_KOGA,
        .trainerName = {_K, _o, _g, _a, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_MEGA_SCARF},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_EliteFourKoga1),
        .party = {.ItemCustomMoves = sParty_EliteFourKoga1}
    },

    [TRAINER_ELITE_FOUR_KAREN] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ELITE_4,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_KAREN,
        .trainerName = {_K, _a, _r, _e, _n, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_MEGA_EARING},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_EliteFourKaren1),
        .party = {.ItemCustomMoves = sParty_EliteFourKaren1}
    },

    [TRAINER_LEADER_FALKNER_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_FALKNER,
        .trainerName = {_F, _a, _l, _k, _n, _e, _r, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_KEYSTONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LeaderFalkner2),
        .party = {.ItemCustomMoves = sParty_LeaderFalkner2}
    },

    [TRAINER_LEADER_BUGSY_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_BUGSY,
        .trainerName = {_B, _u, _g, _s, _y, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_KEYSTONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LeaderBugsy2),
        .party = {.ItemCustomMoves = sParty_LeaderBugsy2}
    },

    [TRAINER_LEADER_WHITNEY_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_WHITNEY,
        .trainerName = {_W, _h, _i, _t, _n, _e, _y, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_KEYSTONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LeaderWhitney2),
        .party = {.ItemCustomMoves = sParty_LeaderWhitney2}
    },

    [TRAINER_LEADER_MORTY_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MORTY,
        .trainerName = {_M, _o, _r, _t, _y, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_KEYSTONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LeaderMorty2),
        .party = {.ItemCustomMoves = sParty_LeaderMorty2}
    },

    [TRAINER_LEADER_CHUCK_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CHUCK,
        .trainerName = {_C, _h, _u, _c, _k, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_KEYSTONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LeaderChuck2),
        .party = {.ItemCustomMoves = sParty_LeaderChuck2}
    },

    [TRAINER_LEADER_JASMINE_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_JASMINE,
        .trainerName = {_J, _a, _s, _m, _i, _n, _e, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_KEYSTONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LeaderJasmine2),
        .party = {.ItemCustomMoves = sParty_LeaderJasmine2}
    },

    [TRAINER_LEADER_PRYCE_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PRYCE,
        .trainerName = {_P, _r, _y, _c, _e, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_KEYSTONE},
        .doubleBattle = FALSE,
        .aiFlags =  AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LeaderPryce1),
        .party = {.ItemCustomMoves = sParty_LeaderPryce1}
    },

    [TRAINER_LEADER_CLAIR_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CLAIR,
        .trainerName = {_C, _l, _a, _i, _r, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_KEYSTONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LeaderClair2),
        .party = {.ItemCustomMoves = sParty_LeaderClair2}
    },

    [TRAINER_HEX_MANIAC_BLAIR] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HEX_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = {_B, _l, _a, _i, _r, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_HexManiacBlair),
        .party = {.NoItemDefaultMoves = sParty_HexManiacBlair}
    },

    [TRAINER_ACE_TRAINER_F_ALEXIA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_F,
        .trainerName = {_A, _l, _e, _x, _i, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerAlexia),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerAlexia}
    },

    [TRAINER_ACE_TRAINER_F_RILEY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_F,
        .trainerName = {_R, _i, _l, _e, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerRiley),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerRiley}
    },

    [TRAINER_ACE_TRAINER_M_ANDRIY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ACE_TRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ACETRAINER_M,
        .trainerName = {_A, _n, _d, _r, _i, _y, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_AceTrainerAndriy),
        .party = {.NoItemDefaultMoves = sParty_AceTrainerAndriy}
    },

    [TRAINER_HIKER_DEREK] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = {_D, _e, _r, _e, _k, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_HikerDerek),
        .party = {.NoItemDefaultMoves = sParty_HikerDerek}
    },

    [TRAINER_HEX_MANIAC_GERMANA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HEX_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = {_G, _e, _r, _m, _a, _n, _a, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_HexManiacGermana),
        .party = {.NoItemDefaultMoves = sParty_HexManiacGermana}
    },

    [TRAINER_TEAM_ROCKET_GRUNT_45] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketGrunt45),
        .party = {.NoItemDefaultMoves = sParty_RocketGrunt45}
    },

    [TRAINER_TEAM_ROCKET_SCIENTIST_4] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SCIENTIST_M,
        .trainerName = {_G, _r, _u, _n, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_RocketScientist4),
        .party = {.NoItemDefaultMoves = sParty_RocketScientist4}
    },

    [TRAINER_CHALLENGER_SILVER_TYPHLOSION] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CHALLENGER_2,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = {_T, _E, _R, _R, _Y, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_MEGA_RING},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ChallengerSilver5Typhlosion),
        .party = {.ItemCustomMoves = sParty_ChallengerSilver5Typhlosion}
    },

    [TRAINER_CHALLENGER_SILVER_FERALIGATR] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CHALLENGER_2,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = {_T, _E, _R, _R, _Y, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_MEGA_RING},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ChallengerSilver5Feraligatr),
        .party = {.ItemCustomMoves = sParty_ChallengerSilver5Feraligatr}
    },

    [TRAINER_CHALLENGER_SILVER_MEGANIUM] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CHALLENGER_2,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = {_T, _E, _R, _R, _Y, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_MEGA_RING},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ChallengerSilver5Meganium),
        .party = {.ItemCustomMoves = sParty_ChallengerSilver5Meganium}
    },

    [TRAINER_CHALLENGER_JOEY] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CHALLENGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = {_J, _o, _e, _y, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ChallengerJoey1),
        .party = {.ItemCustomMoves = sParty_ChallengerJoey1}
    },

    [TRAINER_CHALLENGER_SAYO] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CHALLENGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .trainerName = {_S, _a, _y, _o, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ChallengerSayo1),
        .party = {.ItemCustomMoves = sParty_ChallengerSayo1}
    },

    [TRAINER_CHALLENGER_LORELEI] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CHALLENGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LORELEI,
        .trainerName = {_L, _o, _r, _e, _l, _e, _i, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ChallengerLorelei1),
        .party = {.ItemCustomMoves = sParty_ChallengerLorelei1}
    },

    [TRAINER_CHALLENGER_CLAIR] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CHALLENGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CLAIR,
        .trainerName = {_C, _l, _a, _i, _r, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_MEGA_GLOVE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ChallengerClair1),
        .party = {.ItemCustomMoves = sParty_ChallengerClair1}
    },

    [TRAINER_CHALLENGER_PROF_ELM_TYPHLOSION] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CHALLENGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PROFELM,
        .trainerName = {_P, _r, _o, _f, _PERIOD, _SPACE, _E, _l, _m, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_KEYSTONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ChallengerElm1Typhlosion),
        .party = {.ItemCustomMoves = sParty_ChallengerElm1Typhlosion}
    },

    [TRAINER_CHALLENGER_PROF_ELM_FERALIGATR] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CHALLENGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PROFELM,
        .trainerName = {_P, _r, _o, _f, _PERIOD, _SPACE, _E, _l, _m, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_KEYSTONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ChallengerElm1Feraligatr),
        .party = {.ItemCustomMoves = sParty_ChallengerElm1Feraligatr}
    },

    [TRAINER_CHALLENGER_PROF_ELM_MEGANIUM] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CHALLENGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PROFELM,
        .trainerName = {_P, _r, _o, _f, _PERIOD, _SPACE, _E, _l, _m, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_KEYSTONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ChallengerElm1Meganium),
        .party = {.ItemCustomMoves = sParty_ChallengerElm1Meganium}
    },

    [TRAINER_ELITE_FOUR_AILE_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ELITE_4,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_AILE,
        .trainerName = {_A, _i, _l, _e, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_MEGA_RIBBON},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_EliteFourAile2),
        .party = {.ItemCustomMoves = sParty_EliteFourAile2}
    },

    [TRAINER_ELITE_FOUR_WILL_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ELITE_4,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_WILL,
        .trainerName = {_W, _i, _l, _l, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_MEGA_BUTTON},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_EliteFourWill2),
        .party = {.ItemCustomMoves = sParty_EliteFourWill2}
    },

    [TRAINER_ELITE_FOUR_KOGA_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ELITE_4,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_KOGA,
        .trainerName = {_K, _o, _g, _a, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_MEGA_SCARF},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_EliteFourKoga2),
        .party = {.ItemCustomMoves = sParty_EliteFourKoga2}
    },

    [TRAINER_ELITE_FOUR_KAREN_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ELITE_4,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_KAREN,
        .trainerName = {_K, _a, _r, _e, _n, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_MEGA_EARING},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_EliteFourKaren2),
        .party = {.ItemCustomMoves = sParty_EliteFourKaren2}
    },

/*Kanto Trainer battles start here*/

    [TRAINER_LEADER_LT_SURGE_1] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER_KANTO,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LT_SURGE,
        .trainerName = {_L, _t, _PERIOD, _SPACE, _S, _u, _r, _g, _e, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LeaderSurge1),
        .party = {.ItemCustomMoves = sParty_LeaderSurge1}
    },

    [TRAINER_LEADER_LT_SURGE_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER_KANTO,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LT_SURGE,
        .trainerName = {_L, _t, _PERIOD, _SPACE, _S, _u, _r, _g, _e, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LeaderFalkner2),
        .party = {.ItemCustomMoves = sParty_LeaderSurge2}
    },

    [TRAINER_JUGGLER_GATTO] = {
        .partyFlags = 0,
        .trainerClass = CLASS_JUGGLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_JUGGLER,
        .trainerName = {_G, _a, _t, _t, _o, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_JugglerGatto),
        .party = {.NoItemDefaultMoves = sParty_JugglerGatto}
    },
    [TRAINER_GUITARIST_CARLOS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = {_C, _a, _r, _l, _o, _s, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_GuitaristCarlos),
        .party = {.NoItemDefaultMoves = sParty_GuitaristCarlos}
    },

    [TRAINER_GENTLEMAN_RYAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = {_R, _y, _a, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_GentlemanRyan),
        .party = {.NoItemDefaultMoves = sParty_GentlemanRyan}
    },

    [TRAINER_POKE_FAN_M_HOWARD] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = {_H, _o, _w, _a, _r, _d, _END},
        .items = {ITEM_FULL_HEAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PokefanHoward),
        .party = {.ItemDefaultMoves = sParty_PokefanHoward}
    },

    [TRAINER_TWINS_MAY_AND_MEI] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = {_M, _a, _y, _AMPERSAND, _M, _e, _i, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_TwinsMayMei),
        .party = {.NoItemDefaultMoves = sParty_TwinsMayMei}
    },

    [TRAINER_FIREBREATHER_BARNES] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FIRE_BREATHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = {_B, _a, _r, _n, _e, _s, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_FirebreatherBarnes),
        .party = {.NoItemDefaultMoves = sParty_FirebreatherBarnes}
    },

    [TRAINER_HIKER_QUINTON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = {_Q, _u, _i, _n, _t, _o, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_HikerQuinton),
        .party = {.NoItemDefaultMoves = sParty_HikerQuinton}
    },

    [TRAINER_SAILOR_HANDSOME] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = {_H, _a, _n, _d, _s, _o, _m, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SailorHandsome),
        .party = {.NoItemDefaultMoves = sParty_SailorHandsome}
    },

    [TRAINER_PICNICKER_JEANNIE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = {_J, _e, _a, _n, _n, _i, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PicnickerJeannie),
        .party = {.NoItemDefaultMoves = sParty_PicnickerJeannie}
    },

    [TRAINER_JUGGLER_GARRET] = {
        .partyFlags = 0,
        .trainerClass = CLASS_JUGGLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_JUGGLER,
        .trainerName = {_G, _a, _r, _r, _e, _t, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_JugglerGarret),
        .party = {.NoItemDefaultMoves = sParty_JugglerGarret}
    },

    [TRAINER_SAILOR_PETE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = {_P, _e, _t, _e, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SailorPete),
        .party = {.NoItemDefaultMoves = sParty_SailorPete}
    },

    [TRAINER_BURGLAR_COOPER] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_BURGLAR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BURGLAR,
        .trainerName = {_C, _o, _o, _p, _e, _r, _END},
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_BurglarCooper),
        .party = {.ItemCustomMoves = sParty_BurglarCooper}
    },

    /*
    [TRAINER_] = {
        .partyFlags = 0,
        .trainerClass = CLASS_,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_,
        .trainerName = {_, _, _, _, _, _, _, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_),
        .party = {.NoItemDefaultMoves = sParty_}
    },
*/
};
