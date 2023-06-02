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

    [TRAINER_PICKNICKER_DAHLIA] = {
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


    [TRAINER_LEADER_BUGSY_1] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BUGSY,
        .trainerName = {_B, _u, _g, _s, _y, _END},
        .items = {ITEM_SUPER_POTION, ITEM_FULL_HEAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_SETUP_FIRST_TURN | AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .partySize = NELEMS(sParty_PasserbyBoyChikorita),
        .party = {.NoItemDefaultMoves = sParty_PasserbyBoyChikorita}
    },*/
};
