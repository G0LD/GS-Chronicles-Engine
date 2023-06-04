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

const struct TrainerMonNoItemDefaultMoves sParty_PokefanCarter[] = {
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
        .species = SPECIES_HOUNDOOM,
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

/*
const struct TrainerMonNoItemDefaultMoves sParty_[] = {
    {
        .iv = 0,
        .lvl = ,
        .species = SPECIES_,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = {},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_SuperNerdAkira),
        .party = {.NoItemDefaultMoves = sParty_SuperNerdAkira}
    },

    [TRAINER_FIREBREATHER_RONNIE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FIRE_BREATHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = {_O, _w, _e, _n, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_YoungsterOwen),
        .party = {.NoItemDefaultMoves = sParty_YoungsterOwen}
    },

    [TRAINER_POKE_FAN_M_CARTER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = {_C, _a, _r, _t, _e, _r, _END},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PokefanCarter),
        .party = {.NoItemDefaultMoves = sParty_PokefanCarter}
    },

    [TRAINER_PICNICKER_SHARONA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = {},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_LassArlene),
        .party = {.NoItemDefaultMoves = sParty_LassArlene}
    },

    [TRAINER_BEAUTY_LORETTA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PROTON,
        .trainerName = {_P, _r, _o, _t, _o, _n, _END},
        .items = {ITEM_SUPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_ExecutiveProton2),
        .party = {.NoItemCustomMoves = sParty_ExecutiveProton2}
    },


    /*
    [TRAINER_] = {
        .partyFlags = 0,
        .trainerClass = CLASS_,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_,
        .trainerName = {},
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_),
        .party = {.NoItemDefaultMoves = sParty_}
    },
*/
};
