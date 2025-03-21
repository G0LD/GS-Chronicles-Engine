.thumb
.text
.align 2

.include "../asm_defines.s"
/*
move_tables.s
	table of battle move data pointers
*/

.equ MOVE_TABLES_TERMIN, 0xFEFE

.global gGravityBannedMoves
.global gMeFirstBannedMoves
.global gCopycatBannedMoves
.global gInstructBannedMoves
.global gMetronomeBannedMoves
.global gAssistBannedMoves
.global gMimicBannedMoves
.global gSleepTalkBannedMoves
.global gParentalBondBannedMoves
.global gSkyBattleBannedMoves
.global gRaidBattleBannedMoves
.global gRaidBattleBannedRaidMonMoves
.global gDynamaxBannedMoves
.global gSheerForceBoostedMoves
.global gRecklessBoostedMoves
.global gPunchingMoves
.global gPulseAuraMoves
.global gBitingMoves
.global gBallBombMoves
.global gDanceMoves
.global gPowderMoves
.global gSoundMoves
.global gSubstituteBypassMoves
.global gTypeChangeExceptionMoves
.global gIgnoreStatChangesMoves
.global gHighCriticalChanceMoves
.global gAlwaysCriticalMoves
.global gMovesThatCallOtherMoves
.global gMovesThatRequireRecharging
.global gAlwaysHitWhenMinimizedMoves
.global gMoldBreakerMoves
.global gFlinchChanceMoves
.global gMovesCanUnfreezeAttacker
.global gMovesCanUnfreezeTarget
.global gMovesThatChangePhysicality
.global gTwoToFiveStrikesMoves
.global gTwoStrikesMoves
.global gPercent25RecoilMoves
.global gPercent33RecoilMoves
.global gPercent50RecoilMoves
.global gPercent66RecoilMoves
.global gPercent75RecoilMoves
.global gPercent100RecoilMoves
.global gIgnoreInAirMoves
.global gIgnoreUndergoundMoves
.global gIgnoreUnderwaterMoves
.global gAlwaysHitInRainMoves
.global gSpecialAttackPhysicalDamageMoves
.global gSpecialWholeFieldMoves
.global gAromaVeilProtectedMoves
.global gMovesThatLiftProtectTable
.global gMovesWithQuietBGM

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gGravityBannedMoves:
.hword MOVE_FLY
.hword MOVE_JUMPKICK
.hword MOVE_HIGHJUMPKICK
.hword MOVE_SPLASH
.hword MOVE_BOUNCE
.hword MOVE_MAGNETRISE
.hword MOVE_TELEKINESIS
.hword MOVE_SKYDROP
.hword MOVE_FLYINGPRESS
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gMeFirstBannedMoves:
.hword MOVE_STRUGGLE
.hword MOVE_BELCH
.hword MOVE_CHATTER
.hword MOVE_COVET
.hword MOVE_THIEF
.hword MOVE_FOCUSPUNCH
.hword MOVE_SHELLTRAP
.hword MOVE_BEAKBLAST
.hword MOVE_COUNTER
.hword MOVE_MIRRORCOAT
.hword MOVE_METALBURST
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gCopycatBannedMoves:
.hword MOVE_ASSIST
.hword MOVE_BANEFULBUNKER
.hword MOVE_BEAKBLAST
.hword MOVE_BESTOW
.hword MOVE_CELEBRATE
.hword MOVE_CHATTER
.hword MOVE_CIRCLETHROW
.hword MOVE_COPYCAT
.hword MOVE_COUNTER
.hword MOVE_COVET
.hword MOVE_DESTINYBOND
.hword MOVE_DETECT
.hword MOVE_DRAGONTAIL
.hword MOVE_ENDURE
.hword MOVE_FEINT
.hword MOVE_FOCUSPUNCH
.hword MOVE_FOLLOWME
.hword MOVE_HELPINGHAND
.hword MOVE_HOLDHANDS
.hword MOVE_KINGSSHIELD
.hword MOVE_MATBLOCK
.hword MOVE_MEFIRST
.hword MOVE_METRONOME
.hword MOVE_MIMIC
.hword MOVE_MIRRORCOAT
.hword MOVE_MIRRORMOVE
.hword MOVE_PROTECT
.hword MOVE_RAGEPOWDER
.hword MOVE_ROAR
.hword MOVE_SHELLTRAP
.hword MOVE_SKETCH
.hword MOVE_SLEEPTALK
.hword MOVE_SNATCH
.hword MOVE_STRUGGLE
.hword MOVE_SPIKYSHIELD
.hword MOVE_SPOTLIGHT
.hword MOVE_SWITCHEROO
.hword MOVE_THIEF
.hword MOVE_TRANSFORM
.hword MOVE_TRICK
.hword MOVE_WHIRLWIND
.hword MOVE_OBSTRUCT
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gInstructBannedMoves:
.hword MOVE_INSTRUCT
.hword MOVE_BIDE
.hword MOVE_FOCUSPUNCH
.hword MOVE_BEAKBLAST
.hword MOVE_SHELLTRAP
.hword MOVE_SKETCH
.hword MOVE_TRANSFORM
.hword MOVE_MIMIC
.hword MOVE_KINGSSHIELD
.hword MOVE_STRUGGLE
.hword MOVE_BOUNCE
.hword MOVE_DIG
.hword MOVE_DIVE
.hword MOVE_FLY
.hword MOVE_FREEZESHOCK
.hword MOVE_GEOMANCY
.hword MOVE_ICEBURN
.hword MOVE_PHANTOMFORCE
.hword MOVE_RAZORWIND
.hword MOVE_SHADOWFORCE
.hword MOVE_SKULLBASH
.hword MOVE_SKYATTACK
.hword MOVE_SKYDROP
.hword MOVE_SOLARBEAM
.hword MOVE_SOLARBLADE
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gMetronomeBannedMoves:
.hword MOVE_COUNTER
.hword MOVE_MIMIC
.hword MOVE_METRONOME
.hword MOVE_MIRRORMOVE
.hword MOVE_TRANSFORM
.hword MOVE_STRUGGLE
.hword MOVE_SKETCH
.hword MOVE_THIEF
.hword MOVE_SNORE
.hword MOVE_PROTECT
.hword MOVE_DESTINYBOND
.hword MOVE_DETECT
.hword MOVE_ENDURE
.hword MOVE_SLEEPTALK
.hword MOVE_MIRRORCOAT
.hword MOVE_FOCUSPUNCH
.hword MOVE_FOLLOWME
.hword MOVE_NATUREPOWER
.hword MOVE_HELPINGHAND
.hword MOVE_TRICK
.hword MOVE_ASSIST
.hword MOVE_SNATCH
.hword MOVE_COVET
.hword MOVE_FEINT
.hword MOVE_MEFIRST
.hword MOVE_COPYCAT
.hword MOVE_SWITCHEROO
.hword MOVE_CHATTER
.hword MOVE_WIDEGUARD
.hword MOVE_RAGEPOWDER
.hword MOVE_AFTERYOU
.hword MOVE_QUICKGUARD
.hword MOVE_QUASH
.hword MOVE_BESTOW
.hword MOVE_TECHNOBLAST
.hword MOVE_RELICSONG
.hword MOVE_SECRETSWORD
.hword MOVE_FREEZESHOCK
.hword MOVE_ICEBURN
.hword MOVE_SNARL
.hword MOVE_VCREATE
.hword MOVE_MATBLOCK
.hword MOVE_BELCH
.hword MOVE_CRAFTYSHIELD
.hword MOVE_KINGSSHIELD
.hword MOVE_DIAMONDSTORM
.hword MOVE_STEAMERUPTION
.hword MOVE_HYPERSPACEHOLE
.hword MOVE_SPIKYSHIELD
.hword MOVE_CELEBRATE
.hword MOVE_HOLDHANDS
.hword MOVE_THOUSANDARROWS
.hword MOVE_THOUSANDWAVES
.hword MOVE_LIGHTOFRUIN
.hword MOVE_ORIGINPULSE
.hword MOVE_PRECIPICEBLADES
.hword MOVE_DRAGONASCENT
.hword MOVE_HYPERSPACEFURY
.hword MOVE_BANEFULBUNKER
.hword MOVE_SPOTLIGHT
.hword MOVE_INSTRUCT
.hword MOVE_BEAKBLAST
.hword MOVE_SHELLTRAP
.hword MOVE_FLEURCANNON
.hword MOVE_SPECTRALTHIEF
.hword MOVE_SUNSTEELSTRIKE
.hword MOVE_MOONGEISTBEAM
.hword MOVE_NATURESMADNESS
.hword MOVE_MINDBLOWN
.hword MOVE_PLASMAFISTS
.hword MOVE_PHOTONGEYSER
.hword MOVE_DOUBLEIRONBASH
.hword MOVE_DYNAMAXCANNON
.hword MOVE_CLANGOROUSSOUL
.hword MOVE_BODYPRESS
.hword MOVE_DECORATE
.hword MOVE_DRUMBEATING
.hword MOVE_SNAPTRAP
.hword MOVE_PYROBALL
.hword MOVE_BEHEMOTHBLADE
.hword MOVE_BEHEMOTHBASH
.hword MOVE_AURAWHEEL
.hword MOVE_BREAKINGSWIPE
.hword MOVE_BRANCHPOKE
.hword MOVE_OVERDRIVE
.hword MOVE_APPLEACID
.hword MOVE_GRAVAPPLE
.hword MOVE_SPIRITBREAK
.hword MOVE_STRANGESTEAM
.hword MOVE_LIFEDEW
.hword MOVE_OBSTRUCT
.hword MOVE_FALSESURRENDER
.hword MOVE_METEORASSAULT
.hword MOVE_ETERNABEAM
.hword MOVE_STEELBEAM
.hword MOVE_DARKVOID
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gAssistBannedMoves:
.hword MOVE_ASSIST
.hword MOVE_BANEFULBUNKER
.hword MOVE_BEAKBLAST
.hword MOVE_BELCH
.hword MOVE_BESTOW
.hword MOVE_BOUNCE
.hword MOVE_CELEBRATE
.hword MOVE_CHATTER
.hword MOVE_CIRCLETHROW
.hword MOVE_COPYCAT
.hword MOVE_COUNTER
.hword MOVE_COVET
.hword MOVE_DESTINYBOND
.hword MOVE_DETECT
.hword MOVE_DIG
.hword MOVE_DIVE
.hword MOVE_DRAGONTAIL
.hword MOVE_ENDURE
.hword MOVE_FEINT
.hword MOVE_FLY
.hword MOVE_FOCUSPUNCH
.hword MOVE_FOLLOWME
.hword MOVE_HELPINGHAND
.hword MOVE_HOLDHANDS
.hword MOVE_KINGSSHIELD
.hword MOVE_MATBLOCK
.hword MOVE_MEFIRST
.hword MOVE_METRONOME
.hword MOVE_MIMIC
.hword MOVE_MIRRORCOAT
.hword MOVE_MIRRORMOVE
.hword MOVE_NATUREPOWER
.hword MOVE_PHANTOMFORCE
.hword MOVE_PROTECT
.hword MOVE_RAGEPOWDER
.hword MOVE_ROAR
.hword MOVE_SHADOWFORCE
.hword MOVE_SHELLTRAP
.hword MOVE_SKETCH
.hword MOVE_SKYDROP
.hword MOVE_SLEEPTALK
.hword MOVE_SNATCH
.hword MOVE_SPIKYSHIELD
.hword MOVE_SPOTLIGHT
.hword MOVE_STRUGGLE
.hword MOVE_SWITCHEROO
.hword MOVE_THIEF
.hword MOVE_TRANSFORM
.hword MOVE_TRICK
.hword MOVE_WHIRLWIND
.hword MOVE_OBSTRUCT
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gMimicBannedMoves:
.hword MOVE_METRONOME
.hword MOVE_STRUGGLE
.hword MOVE_SKETCH
.hword MOVE_MIMIC
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gSleepTalkBannedMoves:
.hword MOVE_ASSIST
.hword MOVE_BIDE
.hword MOVE_BELCH
.hword MOVE_BEAKBLAST
.hword MOVE_BOUNCE
.hword MOVE_COPYCAT
.hword MOVE_DIG
.hword MOVE_DIVE
.hword MOVE_FREEZESHOCK
.hword MOVE_FLY
.hword MOVE_FOCUSPUNCH
.hword MOVE_GEOMANCY
.hword MOVE_ICEBURN
.hword MOVE_MEFIRST
.hword MOVE_METRONOME
.hword MOVE_MIRRORMOVE
.hword MOVE_MIMIC
.hword MOVE_PHANTOMFORCE
.hword MOVE_RAZORWIND
.hword MOVE_SHADOWFORCE
.hword MOVE_SHELLTRAP
.hword MOVE_SKETCH
.hword MOVE_SKULLBASH
.hword MOVE_SKYATTACK
.hword MOVE_SKYDROP
.hword MOVE_SLEEPTALK
.hword MOVE_SOLARBLADE
.hword MOVE_SOLARBEAM
.hword MOVE_UPROAR
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gParentalBondBannedMoves:
.hword MOVE_FLING
.hword MOVE_SELFDESTRUCT
.hword MOVE_EXPLOSION
.hword MOVE_FINALGAMBIT
.hword MOVE_ENDEAVOR
.hword MOVE_UPROAR
.hword MOVE_ICEBALL
.hword MOVE_ROLLOUT
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gSkyBattleBannedMoves:
.hword MOVE_SLAM
.hword MOVE_STOMP
.hword MOVE_BODYSLAM
.hword MOVE_SURF
.hword MOVE_SEISMICTOSS
.hword MOVE_EARTHQUAKE
.hword MOVE_FISSURE
.hword MOVE_DIG
.hword MOVE_SUBSTITUTE
.hword MOVE_SPIKES
.hword MOVE_MAGNITUDE
.hword MOVE_INGRAIN
.hword MOVE_DIVE
.hword MOVE_MUDSPORT
.hword MOVE_MUDDYWATER
.hword MOVE_FRENZYPLANT
.hword MOVE_WATERSPORT
.hword MOVE_GRAVITY
.hword MOVE_TOXICSPIKES
.hword MOVE_EARTHPOWER
.hword MOVE_GRASSKNOT
.hword MOVE_SMACKDOWN
.hword MOVE_HEAVYSLAM
.hword MOVE_WATERPLEDGE
.hword MOVE_FIREPLEDGE
.hword MOVE_GRASSPLEDGE
.hword MOVE_BULLDOZE
.hword MOVE_HEATCRASH
.hword MOVE_FLYINGPRESS
.hword MOVE_MATBLOCK
.hword MOVE_ROTOTILLER
.hword MOVE_GRASSYTERRAIN
.hword MOVE_MISTYTERRAIN
.hword MOVE_GEOMANCY
.hword MOVE_ELECTRICTERRAIN
.hword MOVE_THOUSANDARROWS
.hword MOVE_THOUSANDWAVES
.hword MOVE_LANDSWRATH
.hword MOVE_PRECIPICEBLADES
.hword MOVE_PSYCHICTERRAIN
.hword MOVE_SHARP_FLINT
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gRaidBattleBannedMoves:
.hword MOVE_BUGBITE
.hword MOVE_COVET
.hword MOVE_CURSE
.hword MOVE_DESTINYBOND
.hword MOVE_EXPLOSION
.hword MOVE_INCINERATE
.hword MOVE_KNOCKOFF
.hword MOVE_PERISHSONG
.hword MOVE_PLUCK
.hword MOVE_SELFDESTRUCT
.hword MOVE_SUPERFANG
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gRaidBattleBannedRaidMonMoves:
.hword MOVE_MEMENTO
.hword MOVE_HEALINGWISH
.hword MOVE_LUNARDANCE
.hword MOVE_FINALGAMBIT
.hword MOVE_MINDBLOWN
.hword MOVE_STEELBEAM
.hword MOVE_PAINSPLIT
.hword MOVE_ENDEAVOR
.hword MOVE_FOCUSPUNCH @Must be executed as Max Moves b/c intros don't play
.hword MOVE_SHELLTRAP
.hword MOVE_BEAKBLAST
.hword MOVE_PROTECT
.hword MOVE_DETECT
.hword MOVE_QUICKGUARD
.hword MOVE_WIDEGUARD
.hword MOVE_KINGSSHIELD
.hword MOVE_SPIKYSHIELD
.hword MOVE_BANEFULBUNKER
.hword MOVE_MATBLOCK
.hword MOVE_OBSTRUCT
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gDynamaxBannedMoves:
.hword MOVE_GRASSKNOT
.hword MOVE_HEATCRASH
.hword MOVE_HEAVYSLAM
.hword MOVE_LOWKICK
.hword MOVE_ROAR
.hword MOVE_WHIRLWIND
.hword MOVE_SKYDROP
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gSheerForceBoostedMoves:
.hword MOVE_ACID
.hword MOVE_ACIDSPRAY
.hword MOVE_AIRSLASH
.hword MOVE_ANCHORSHOT
.hword MOVE_ANCIENTPOWER
.hword MOVE_APPLEACID
.hword MOVE_ASTONISH
.hword MOVE_AURORABEAM
.hword MOVE_BITE
.hword MOVE_BLAZEKICK
.hword MOVE_BLIZZARD
.hword MOVE_BLUEFLARE
.hword MOVE_BODYSLAM
.hword MOVE_BOLTSTRIKE
.hword MOVE_BONECLUB
.hword MOVE_BOUNCE
.hword MOVE_BUBBLE
.hword MOVE_BUBBLEBEAM
.hword MOVE_BUGBUZZ
.hword MOVE_BULLDOZE
.hword MOVE_BURNINGJEALOUSY
.hword MOVE_CHARGEBEAM
.hword MOVE_CHATTER
.hword MOVE_CLANGOROUS_SOULBLAZE
.hword MOVE_CONFUSION
.hword MOVE_CONSTRICT
.hword MOVE_CROSSPOISON
.hword MOVE_CRUNCH
.hword MOVE_CRUSHCLAW
.hword MOVE_DARKPULSE
.hword MOVE_DIAMONDSTORM
.hword MOVE_DISCHARGE
.hword MOVE_DIZZYPUNCH
.hword MOVE_DOUBLEIRONBASH
.hword MOVE_DRAGONBREATH
.hword MOVE_DRAGONRUSH
.hword MOVE_DRUMBEATING
.hword MOVE_DYNAMICPUNCH
.hword MOVE_EARTHPOWER
.hword MOVE_ELECTROWEB
.hword MOVE_EMBER
.hword MOVE_ENERGYBALL
.hword MOVE_EXTRASENSORY
.hword MOVE_FAKEOUT
.hword MOVE_FIERYDANCE
.hword MOVE_FIREBLAST
.hword MOVE_FIREFANG
.hword MOVE_FIRELASH
.hword MOVE_FIREPUNCH
.hword MOVE_FLAMECHARGE
.hword MOVE_FLAMEWHEEL
.hword MOVE_FLAMETHROWER
.hword MOVE_FLAREBLITZ
.hword MOVE_FLASHCANNON
.hword MOVE_FOCUSBLAST
.hword MOVE_FORCEPALM
.hword MOVE_FREEZESHOCK
.hword MOVE_FREEZEDRY
.hword MOVE_GENESIS_SUPERNOVA
.hword MOVE_GLACIATE
.hword MOVE_GRAVAPPLE
.hword MOVE_GUNKSHOT
.hword MOVE_HEADBUTT
.hword MOVE_HEARTSTAMP
.hword MOVE_HEATWAVE
.hword MOVE_HURRICANE
.hword MOVE_HYPERFANG
.hword MOVE_ICEBEAM
.hword MOVE_ICEBURN
.hword MOVE_ICEFANG
.hword MOVE_ICEPUNCH
.hword MOVE_ICICLECRASH
.hword MOVE_ICYWIND
.hword MOVE_INFERNO
.hword MOVE_IRONHEAD
.hword MOVE_IRONTAIL
.hword MOVE_LAVAPLUME
.hword MOVE_LEAFTORNADO
.hword MOVE_LICK
.hword MOVE_LIQUIDATION
.hword MOVE_LOWSWEEP
.hword MOVE_LUNGE
.hword MOVE_LUSTERPURGE
.hword MOVE_METALCLAW
.hword MOVE_METEORMASH
.hword MOVE_MIRRORSHOT
.hword MOVE_MISTBALL
.hword MOVE_MOONBLAST
.hword MOVE_MUDBOMB
.hword MOVE_MUDSHOT
.hword MOVE_MUDDYWATER
.hword MOVE_MUDSLAP
.hword MOVE_MYSTICALFIRE
.hword MOVE_NEEDLEARM
.hword MOVE_NIGHTDAZE
.hword MOVE_NUZZLE
.hword MOVE_OCTAZOOKA
.hword MOVE_OMINOUSWIND
.hword MOVE_PLAYROUGH
.hword MOVE_POISONFANG
.hword MOVE_POISONJAB
.hword MOVE_POISONSTING
.hword MOVE_POISONTAIL
.hword MOVE_POWDERSNOW
.hword MOVE_POWERUPPUNCH
.hword MOVE_PSYBEAM
.hword MOVE_PSYCHIC
.hword MOVE_PYROBALL
.hword MOVE_RAZORSHELL
.hword MOVE_RELICSONG
.hword MOVE_ROCKCLIMB
.hword MOVE_ROCKSLIDE
.hword MOVE_ROCKSMASH
.hword MOVE_ROCKTOMB
.hword MOVE_ROLLINGKICK
.hword MOVE_SACREDFIRE
.hword MOVE_SCALD
.hword MOVE_SCALESHOT
.hword MOVE_SCORCHINGSANDS
.hword MOVE_SEARINGSHOT
.hword MOVE_SECRETPOWER
.hword MOVE_SEEDFLARE
.hword MOVE_SHADOWBALL
.hword MOVE_SHADOWBONE
.hword MOVE_SIGNALBEAM
.hword MOVE_SILVERWIND
.hword MOVE_SKITTERSMACK
.hword MOVE_SKYATTACK
.hword MOVE_SLUDGE
.hword MOVE_SLUDGEBOMB
.hword MOVE_SLUDGEWAVE
.hword MOVE_SMOG
.hword MOVE_SNARL
.hword MOVE_SNORE
.hword MOVE_SPARK
.hword MOVE_SPARKLINGARIA
.hword MOVE_SPIRITBREAK
.hword MOVE_SPIRITSHACKLE
.hword MOVE_STEAMERUPTION
.hword MOVE_STEAMROLLER
.hword MOVE_STEELWING
.hword MOVE_STOKED_SPARKSURFER
.hword MOVE_STOMP
.hword MOVE_STRANGESTEAM
.hword MOVE_STRUGGLEBUG
.hword MOVE_THROATCHOP
.hword MOVE_THUNDER
.hword MOVE_THUNDERFANG
.hword MOVE_THUNDERPUNCH
.hword MOVE_THUNDERSHOCK
.hword MOVE_THUNDERBOLT
.hword MOVE_TRIATTACK
.hword MOVE_TROPKICK
.hword MOVE_TWINEEDLE
.hword MOVE_TWISTER
.hword MOVE_VOLTTACKLE
.hword MOVE_WATERPULSE
.hword MOVE_WATERFALL
.hword MOVE_ZAPCANNON
.hword MOVE_ZENHEADBUTT
.hword MOVE_ZINGZAP
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gRecklessBoostedMoves:
.hword MOVE_BRAVEBIRD
.hword MOVE_DOUBLEEDGE
.hword MOVE_FLAREBLITZ
.hword MOVE_HEADCHARGE
.hword MOVE_HEADSMASH
.hword MOVE_HIGHJUMPKICK
.hword MOVE_JUMPKICK
.hword MOVE_LIGHTOFRUIN
.hword MOVE_SUBMISSION
.hword MOVE_TAKEDOWN
.hword MOVE_VOLTTACKLE
.hword MOVE_WOODHAMMER
.hword MOVE_WILDCHARGE
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gPunchingMoves:
.hword MOVE_COMETPUNCH
.hword MOVE_MEGAPUNCH
.hword MOVE_FIREPUNCH
.hword MOVE_ICEPUNCH
.hword MOVE_THUNDERPUNCH
.hword MOVE_DIZZYPUNCH
.hword MOVE_MACHPUNCH
.hword MOVE_DYNAMICPUNCH
.hword MOVE_FOCUSPUNCH
.hword MOVE_METEORMASH
.hword MOVE_SHADOWPUNCH
.hword MOVE_SKYUPPERCUT
.hword MOVE_HAMMERARM
.hword MOVE_DRAINPUNCH
.hword MOVE_BULLETPUNCH
.hword MOVE_POWERUPPUNCH
.hword MOVE_ICEHAMMER
.hword MOVE_PLASMAFISTS
.hword MOVE_DOUBLEIRONBASH
.hword MOVE_STARDUST_PUNCH
.hword MOVE_RAGEFIST
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gPulseAuraMoves:
.hword MOVE_AURASPHERE
.hword MOVE_DARKPULSE
.hword MOVE_DRAGONPULSE
.hword MOVE_HEALPULSE
.hword MOVE_ORIGINPULSE
.hword MOVE_TERRAINPULSE
.hword MOVE_WATERPULSE
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gBitingMoves:
.hword MOVE_BITE
.hword MOVE_CRUNCH
.hword MOVE_FIREFANG
.hword MOVE_HYPERFANG
.hword MOVE_ICEFANG
.hword MOVE_POISONFANG
.hword MOVE_PSYCHICFANGS
.hword MOVE_THUNDERFANG
.hword MOVE_JAWLOCK
.hword MOVE_FISHIOUSREND
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gBallBombMoves:
.hword MOVE_ACIDSPRAY
.hword MOVE_AURASPHERE
.hword MOVE_BARRAGE
.hword MOVE_BEAKBLAST
.hword MOVE_BULLETSEED
.hword MOVE_EGGBOMB
.hword MOVE_ELECTROBALL
.hword MOVE_ENERGYBALL
.hword MOVE_FOCUSBLAST
.hword MOVE_GYROBALL
.hword MOVE_ICEBALL
.hword MOVE_MAGNETBOMB
.hword MOVE_MISTBALL
.hword MOVE_MUDBOMB
.hword MOVE_OCTAZOOKA
.hword MOVE_POLLENPUFF
.hword MOVE_PYROBALL
.hword MOVE_ROCKBLAST
.hword MOVE_ROCKWRECKER
.hword MOVE_SEARINGSHOT
.hword MOVE_SEEDBOMB
.hword MOVE_SHADOWBALL
.hword MOVE_SLUDGEBOMB
.hword MOVE_WEATHERBALL
.hword MOVE_ZAPCANNON
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gDanceMoves:
.hword MOVE_SWORDSDANCE
.hword MOVE_PETALDANCE
.hword MOVE_FEATHERDANCE
.hword MOVE_TEETERDANCE
.hword MOVE_DRAGONDANCE
.hword MOVE_LUNARDANCE
.hword MOVE_QUIVERDANCE
.hword MOVE_FIERYDANCE
.hword MOVE_REVELATIONDANCE
.hword MOVE_CLANGOROUSSOUL
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gPowderMoves:
.hword MOVE_COTTONSPORE
.hword MOVE_MAGICPOWDER
.hword MOVE_POISONPOWDER
.hword MOVE_POWDER
.hword MOVE_RAGEPOWDER
.hword MOVE_SLEEPPOWDER
.hword MOVE_SPORE
.hword MOVE_STUNSPORE
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gSoundMoves:
.hword MOVE_GROWL
.hword MOVE_ROAR
.hword MOVE_SING
.hword MOVE_SUPERSONIC
.hword MOVE_SCREECH
.hword MOVE_SNORE
.hword MOVE_PERISHSONG
.hword MOVE_HEALBELL
.hword MOVE_UPROAR
.hword MOVE_HYPERVOICE
.hword MOVE_METALSOUND
.hword MOVE_GRASSWHISTLE
.hword MOVE_HOWL
.hword MOVE_BUGBUZZ
.hword MOVE_CHATTER
.hword MOVE_ROUND
.hword MOVE_ECHOEDVOICE
.hword MOVE_RELICSONG
.hword MOVE_SNARL
.hword MOVE_NOBLEROAR
.hword MOVE_DISARMINGVOICE
.hword MOVE_PARTINGSHOT
.hword MOVE_BOOMBURST
.hword MOVE_CONFIDE
.hword MOVE_SPARKLINGARIA
.hword MOVE_CLANGINGSCALES
.hword MOVE_CLANGOROUS_SOULBLAZE
.hword MOVE_CLANGOROUSSOUL
.hword MOVE_OVERDRIVE
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gSubstituteBypassMoves:
.hword MOVE_WHIRLWIND
.hword MOVE_DISABLE
.hword MOVE_MIMIC
.hword MOVE_HAZE
.hword MOVE_SKETCH
.hword MOVE_CURSE
.hword MOVE_CONVERSION2
.hword MOVE_SPITE
.hword MOVE_FORESIGHT
.hword MOVE_DESTINYBOND
.hword MOVE_ATTRACT
.hword MOVE_ENCORE
.hword MOVE_PSYCHUP
.hword MOVE_TORMENT
.hword MOVE_TAUNT
.hword MOVE_HELPINGHAND
.hword MOVE_ROLEPLAY
.hword MOVE_SKILLSWAP
.hword MOVE_IMPRISON
.hword MOVE_GRUDGE
.hword MOVE_SNATCH
.hword MOVE_ODORSLEUTH
.hword MOVE_MIRACLEEYE
.hword MOVE_MEFIRST
.hword MOVE_POWERSWAP
.hword MOVE_GUARDSWAP
.hword MOVE_HEARTSWAP
.hword MOVE_DEFOG
.hword MOVE_AFTERYOU
.hword MOVE_REFLECTTYPE
.hword MOVE_BESTOW
.hword MOVE_FAIRYLOCK
.hword MOVE_PLAYNICE
.hword MOVE_HYPERSPACEHOLE
.hword MOVE_AROMATICMIST
.hword MOVE_POWDER
.hword MOVE_MAGNETICFLUX
.hword MOVE_HOLDHANDS
.hword MOVE_HYPERSPACEFURY
.hword MOVE_GEARUP
.hword MOVE_SPEEDSWAP
.hword MOVE_INSTRUCT
.hword MOVE_SPECTRALTHIEF
.hword MOVE_TEATIME
.hword MOVE_LIFEDEW
.hword MOVE_JUNGLEHEALING
.hword MOVE_STEALTHROCK
.hword MOVE_STICKYWEB
.hword MOVE_SPIKES
.hword MOVE_TOXICSPIKES
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gTypeChangeExceptionMoves:
.hword MOVE_HIDDENPOWER
.hword MOVE_JUDGMENT
.hword MOVE_NATURALGIFT
.hword MOVE_REVELATIONDANCE
.hword MOVE_STRUGGLE
.hword MOVE_TECHNOBLAST
.hword MOVE_WEATHERBALL
.hword MOVE_MULTIATTACK
.hword MOVE_AURAWHEEL
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gIgnoreStatChangesMoves:
.hword MOVE_SACREDSWORD
.hword MOVE_CHIPAWAY
.hword MOVE_DARKESTLARIAT
.hword MOVE_STARDUST_PUNCH
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gHighCriticalChanceMoves:
.hword MOVE_KARATECHOP
.hword MOVE_RAZORWIND
.hword MOVE_RAZORLEAF
.hword MOVE_SKYATTACK
.hword MOVE_CRABHAMMER
.hword MOVE_SLASH
.hword MOVE_AEROBLAST
.hword MOVE_CROSSCHOP
.hword MOVE_BLAZEKICK
.hword MOVE_AIRCUTTER
.hword MOVE_POISONTAIL
.hword MOVE_LEAFBLADE
.hword MOVE_NIGHTSLASH
.hword MOVE_SHADOWCLAW
.hword MOVE_PSYCHOCUT
.hword MOVE_CROSSPOISON
.hword MOVE_STONEEDGE
.hword MOVE_ATTACKORDER
.hword MOVE_SPACIALREND
.hword MOVE_DRILLRUN
.hword MOVE_SNIPESHOT
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gAlwaysCriticalMoves:
.hword MOVE_STORMTHROW
.hword MOVE_FROSTBREATH
.hword MOVE_SURGINGSTRIKES
.hword MOVE_WICKEDBLOW
.hword MOVE_DRAGON_CRUSH
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gMovesThatCallOtherMoves:
.hword MOVE_ASSIST
.hword MOVE_COPYCAT
.hword MOVE_MEFIRST
.hword MOVE_METRONOME
.hword MOVE_MIRRORMOVE
.hword MOVE_NATUREPOWER
.hword MOVE_SLEEPTALK
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gMovesThatRequireRecharging:
.hword MOVE_HYPERBEAM
.hword MOVE_BLASTBURN
.hword MOVE_HYDROCANNON
.hword MOVE_FRENZYPLANT
.hword MOVE_GIGAIMPACT
.hword MOVE_ROCKWRECKER
.hword MOVE_ROAROFTIME
.hword MOVE_PRISMATICLASER
.hword MOVE_METEORASSAULT
.hword MOVE_ETERNABEAM
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gAlwaysHitWhenMinimizedMoves:
.hword MOVE_BODYSLAM
.hword MOVE_DRAGONRUSH
.hword MOVE_FLYINGPRESS
.hword MOVE_HEATCRASH
.hword MOVE_STEAMROLLER
.hword MOVE_STOMP
.hword MOVE_HEAVYSLAM
.hword MOVE_MALICIOUS_MOONSAULT
.hword MOVE_DOUBLEIRONBASH
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gMoldBreakerMoves:
.hword MOVE_MOONGEISTBEAM
.hword MOVE_PHOTONGEYSER
.hword MOVE_SUNSTEELSTRIKE
.hword MOVE_LIGHT_THAT_BURNS_THE_SKY
.hword MOVE_MENACING_MOONRAZE_MAELSTROM

.hword MOVE_SEARING_SUNRAZE_SMASH
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gFlinchChanceMoves:
.hword MOVE_STOMP @30
.hword MOVE_ROLLINGKICK @30
.hword MOVE_HEADBUTT @30
.hword MOVE_BITE @30
.hword MOVE_BONECLUB @10
.hword MOVE_WATERFALL @20
.hword MOVE_SKYATTACK @30
.hword MOVE_ROCKSLIDE @30
.hword MOVE_HYPERFANG @10
.hword MOVE_SNORE @30
.hword MOVE_TWISTER @20
.hword MOVE_FAKEOUT @100
.hword MOVE_NEEDLEARM @30
.hword MOVE_ASTONISH @30
.hword MOVE_EXTRASENSORY @10
.hword MOVE_DARKPULSE @20
.hword MOVE_AIRSLASH @30
.hword MOVE_DRAGONRUSH @20
.hword MOVE_THUNDERFANG @10
.hword MOVE_ICEFANG @10
.hword MOVE_FIREFANG @10
.hword MOVE_ZENHEADBUTT @20
.hword MOVE_IRONHEAD @30
.hword MOVE_HEARTSTAMP @30
.hword MOVE_STEAMROLLER @30
.hword MOVE_ICICLECRASH @30
.hword MOVE_ZINGZAP @30
.hword MOVE_DOUBLEIRONBASH @30
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gMovesCanUnfreezeAttacker:
.hword MOVE_FLAMEWHEEL
.hword MOVE_SACREDFIRE
.hword MOVE_FLAREBLITZ
.hword MOVE_SCALD
.hword MOVE_SCORCHINGSANDS
.hword MOVE_FUSIONFLARE
.hword MOVE_STEAMERUPTION
.hword MOVE_BURNUP
.hword MOVE_PYROBALL
.hword MOVE_MAGMA_GEYSER
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gMovesCanUnfreezeTarget:
.hword MOVE_SCALD
.hword MOVE_STEAMERUPTION
.hword MOVE_SCORCHINGSANDS
.hword MOVE_MAGMA_GEYSER
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gMovesThatChangePhysicality:
.hword MOVE_PHOTONGEYSER
.hword MOVE_LIGHT_THAT_BURNS_THE_SKY
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gTwoToFiveStrikesMoves:
.hword MOVE_ARMTHRUST
.hword MOVE_BARRAGE
.hword MOVE_BONERUSH
.hword MOVE_BULLETSEED
.hword MOVE_COMETPUNCH
.hword MOVE_DOUBLESLAP
.hword MOVE_FURYATTACK
.hword MOVE_FURYSWIPES
.hword MOVE_ICICLESPEAR
.hword MOVE_PINMISSILE
.hword MOVE_ROCKBLAST
.hword MOVE_SCALESHOT
.hword MOVE_SPIKECANNON
.hword MOVE_TAILSLAP
.hword MOVE_WATERSHURIKEN
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gTwoStrikesMoves:
.hword MOVE_BONEMERANG
.hword MOVE_DOUBLEHIT
.hword MOVE_DOUBLEIRONBASH
.hword MOVE_DOUBLEKICK
.hword MOVE_DRAGONDARTS
.hword MOVE_DUALCHOP
.hword MOVE_DUALWINGBEAT
.hword MOVE_GEARGRIND
.hword MOVE_TWINEEDLE
.hword MOVE_TWINBEAM
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gPercent25RecoilMoves:
.hword MOVE_TAKEDOWN
.hword MOVE_SUBMISSION
.hword MOVE_WILDCHARGE
.hword MOVE_HEADCHARGE
.hword MOVE_TABLES_TERMIN

gPercent33RecoilMoves:
.hword MOVE_DOUBLEEDGE
.hword MOVE_VOLTTACKLE
.hword MOVE_FLAREBLITZ
.hword MOVE_BRAVEBIRD
.hword MOVE_WOODHAMMER
.hword MOVE_TABLES_TERMIN

gPercent50RecoilMoves:
.hword MOVE_HEADSMASH
.hword MOVE_LIGHTOFRUIN
.hword MOVE_TABLES_TERMIN

gPercent66RecoilMoves:
.hword MOVE_TABLES_TERMIN

gPercent75RecoilMoves:
.hword MOVE_TABLES_TERMIN

gPercent100RecoilMoves:
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gIgnoreInAirMoves:
.hword MOVE_GUST
.hword MOVE_TWISTER
.hword MOVE_THUNDER
.hword MOVE_SKYUPPERCUT
.hword MOVE_HURRICANE
.hword MOVE_SMACKDOWN
.hword MOVE_THOUSANDARROWS
.hword MOVE_TABLES_TERMIN

gIgnoreUndergoundMoves:
.hword MOVE_EARTHQUAKE
.hword MOVE_MAGNITUDE
.hword MOVE_FISSURE
.hword MOVE_TABLES_TERMIN

gIgnoreUnderwaterMoves:
.hword MOVE_SURF
.hword MOVE_WHIRLPOOL
.hword MOVE_TABLES_TERMIN

gAlwaysHitInRainMoves:
.hword MOVE_THUNDER
.hword MOVE_HURRICANE
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gSpecialAttackPhysicalDamageMoves:
.hword MOVE_PSYSHOCK
.hword MOVE_PSYSTRIKE
.hword MOVE_SECRETSWORD
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gSpecialWholeFieldMoves:
.hword MOVE_MAGNETICFLUX
.hword MOVE_GEARUP
.hword MOVE_FLOWERSHIELD
.hword MOVE_ROTOTILLER
.hword MOVE_GRAVITY
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gAromaVeilProtectedMoves:
.hword MOVE_DISABLE
.hword MOVE_ATTRACT
.hword MOVE_ENCORE
.hword MOVE_TORMENT
.hword MOVE_TAUNT
.hword MOVE_HEALBLOCK
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gMovesThatLiftProtectTable:
.hword MOVE_FEINT
.hword MOVE_HYPERSPACEFURY
.hword MOVE_HYPERSPACEHOLE
.hword MOVE_PHANTOMFORCE
.hword MOVE_SHADOWFORCE
.hword MOVE_TABLES_TERMIN

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

gMovesWithQuietBGM:
.hword MOVE_SING
@.hword MOVE_PERISHSONG
.hword MOVE_GRASSWHISTLE
.hword MOVE_RELICSONG
.hword MOVE_ROUND
@.hword MOVE_DARKPULSE
.hword 0xFFFF
