.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

.equ TRAINER_ELITE_FOUR_WILL_2, 351
.equ TRAINER_ELITE_FOUR_KOGA_2, 352
.equ TRAINER_ELITE_FOUR_AILE_2, 350
.equ TRAINER_ELITE_FOUR_KAREN_2, 353

EventScript_E4Rematches_Will:
    lock
    faceplayer
    checkflag 0x1500 @"checks if you're already a champion"
    if lessthan _goto 0x8C533FA
    checkflag 0x104C
    if equal _goto 0x8C534D0
    compare 0x5080 0x0
    if equal _goto EventScript_E4Rematches_Will_Snippet1
    msgbox 0x8C5356A 0xA @"Will"
    msgbox gText_E4Rematches_Will1 MSG_KEEPOPEN
    msgbox gText_E4Rematches_Will2 MSG_KEEPOPEN
    goto EventScript_E4Rematches_Will_Snippet2

EventScript_E4Rematches_Will_Snippet1:
    msgbox gText_E4Rematches_Will3 MSG_KEEPOPEN
    msgbox gText_E4Rematches_Will2 MSG_KEEPOPEN
    goto EventScript_E4Rematches_Will_Snippet2

EventScript_E4Rematches_Will_Snippet2:
    pause 0x9
    closeonkeypress
    callstd 0xB
    setvar 0x40EF 0x19D
    setvar 0x40F7 0x1B
    trainerbattle3 0x3 TRAINER_ELITE_FOUR_WILL_2 0xC00 gText_E4Rematches_Will4
    addvar 0x5080 0x1
    msgbox 0x8C5356A 0xA @"Will"
    msgbox gText_E4Rematches_Will5 MSG_KEEPOPEN @"Even though I was defeated, I\nwon..."
    compare 0x5080 0x4
    if equal _goto EventScript_E4Rematches_Will_Snippet3
    msgbox gText_E4Rematches_Will6 MSG_NORMAL @"Now move on and experience the\ntr..."
    goto EventScript_E4Rematches_Will_Snippet4

 EventScript_E4Rematches_Will_Snippet3:
    msgbox gText_E4Rematches_Will7 MSG_NORMAL @"You already managed to beat\nall E..."
    goto EventScript_E4Rematches_Will_Snippet4
    

EventScript_E4Rematches_Will_Snippet4:
    callstd 0xB
    setmaptile 0x5 0x2 0x25A 0x1
    setmaptile 0x6 0x2 0x25B 0x1
    setmaptile 0x7 0x2 0x25C 0x1
    setmaptile 0x5 0x3 0x262 0x1
    setmaptile 0x6 0x3 0x263 0x0
    setmaptile 0x7 0x3 0x264 0x1
    special 0x8E
    sound 0x26
    pause 0xF
    setflag 0x104C
    setvar 0x40EF 0x161
    setvar 0x40F7 0x0
    releaseall
    end

    @---------------

EventScript_E4Rematches_Koga:
    lock
    faceplayer
    checkflag 0x1500 @"checks if you're already a champion"
    if lessthan _goto 0x8C5385E
    checkflag 0x104D
    if equal _goto 0x8C53934
    msgbox 0x8C539CE 0xA @"Koga"
    msgbox gText_E4Rematches_Koga1 MSG_KEEPOPEN
    msgbox gText_E4Rematches_Koga2 MSG_KEEPOPEN
    goto EventScript_E4Rematches_Koga_Snippet1

EventScript_E4Rematches_Koga_Snippet1:
    pause 0x9
    closeonkeypress
    callstd 0xB
    setvar 0x40EF 0x19C
    setvar 0x40F7 0x14
    trainerbattle3 0x3 TRAINER_ELITE_FOUR_KOGA_2 0x500 gText_E4Rematches_Koga3
    addvar 0x5080 0x1
    msgbox 0x8C539CE 0xA @"Koga"
    msgbox gText_E4Rematches_Koga4 MSG_KEEPOPEN @"I subjected you to everything I\nc..."
    compare 0x5080 0x4
    if equal _goto EventScript_E4Rematches_Koga_Snippet2
    msgbox gText_E4Rematches_Koga5 MSG_NORMAL @"Go on to the next room, and put\ny..."
    goto EventScript_E4Rematches_Koga_Snippet3

 EventScript_E4Rematches_Koga_Snippet2:
    msgbox gText_E4Rematches_Koga6 MSG_NORMAL @"You already managed to beat\nall E..."
    goto EventScript_E4Rematches_Koga_Snippet3

EventScript_E4Rematches_Koga_Snippet3:
    callstd 0xB
    setmaptile 0x5 0x2 0x25A 0x1
    setmaptile 0x6 0x2 0x25B 0x1
    setmaptile 0x7 0x2 0x25C 0x1
    setmaptile 0x5 0x3 0x262 0x1
    setmaptile 0x6 0x3 0x263 0x0
    setmaptile 0x7 0x3 0x264 0x1
    special 0x8E
    sound 0x26
    pause 0xF
    setflag 0x104D
    setvar 0x40EF 0x164
    setvar 0x40F7 0x0
    releaseall
    end

    @---------------

EventScript_E4Rematches_Aile:
    lock
    faceplayer
    checkflag 0x1500 @"checks if you're already a champion"
    if lessthan _goto 0x8C53C92
    checkflag 0x104E
    if equal _goto 0x8C53D68
    msgbox 0x8C53E02 0xA @"Aile"
    msgbox gText_E4Rematches_Aile1 MSG_KEEPOPEN @"It's now my turn to battle\nwith y...
    msgbox gText_E4Rematches_Aile2 MSG_KEEPOPEN @"I am Aile. Olivine City is my\nhom..."
    goto EventScript_E4Rematches_Aile_Snippet1

EventScript_E4Rematches_Aile_Snippet1:
    pause 0x9
    closeonkeypress
    callstd 0xB
    setvar 0x40EF 0x19B
    setvar 0x40F7 0x15
    trainerbattle3 0x3 TRAINER_ELITE_FOUR_AILE_2 0xD00 gText_E4Rematches_Aile3
    addvar 0x5080 0x1
    msgbox 0x8C53E02 0xA @"Aile"
    msgbox gText_E4Rematches_Aile4 MSG_KEEPOPEN @"In my experience of becoming a\nfa..."
    compare 0x5080 0x4
    if equal _goto EventScript_E4Rematches_Aile_Snippet2
    msgbox gText_E4Rematches_Aile5 MSG_NORMAL @"Your journey isn't over yet.\nPlea..."
    goto EventScript_E4Rematches_Aile_Snippet3

EventScript_E4Rematches_Aile_Snippet2:
    msgbox gText_E4Rematches_Aile6 MSG_NORMAL @"Did you defeat all Elite Four\nalr..."
    goto EventScript_E4Rematches_Aile_Snippet3

EventScript_E4Rematches_Aile_Snippet3:
    callstd 0xB
    setmaptile 0x5 0x2 0x25A 0x1
    setmaptile 0x6 0x2 0x25B 0x1
    setmaptile 0x7 0x2 0x25C 0x1
    setmaptile 0x5 0x3 0x262 0x1
    setmaptile 0x6 0x3 0x263 0x0
    setmaptile 0x7 0x3 0x264 0x1
    special 0x8E
    sound 0x26
    pause 0xF
    setflag 0x104E
    setvar 0x40EF 0x164
    setvar 0x40F7 0x0
    releaseall
    end

    @---------------

EventScript_E4Rematches_Karen:
    lock
    faceplayer
    checkflag 0x1500 @"checks if you're already a champion"
    if lessthan _goto 0x8C541DE
    checkflag 0x104F
    if equal _goto 0x8C542B4
    msgbox 0x8C5434E 0xA @"Karen"
    msgbox gText_E4Rematches_Karen1 MSG_KEEPOPEN @"So you learned about how tough\nth..."
    msgbox gText_E4Rematches_Karen2 MSG_KEEPOPEN @"I am Aile. Olivine City is my\nhom..."
    goto EventScript_E4Rematches_Karen_Snippet1

EventScript_E4Rematches_Karen_Snippet1:
    pause 0x9
    closeonkeypress
    callstd 0xB
    setvar 0x40EF 0x19E
    setvar 0x40F7 0x16
    trainerbattle3 0x3 TRAINER_ELITE_FOUR_KAREN_2 0x300 gText_E4Rematches_Karen3
    addvar 0x5080 0x1
    msgbox 0x8C5434E 0xA @"Karen"
    msgbox gText_E4Rematches_Karen4 MSG_KEEPOPEN @"Strong Pokémon. Weak Pokémon.\pTha..."
    compare 0x5080 0x4
    if equal _goto EventScript_E4Rematches_Karen_Snippet2
    msgbox gText_E4Rematches_Karen5 MSG_NORMAL @"Your journey isn't over yet.\nPlea..."
    goto EventScript_E4Rematches_Karen_Snippet3

EventScript_E4Rematches_Karen_Snippet2:
    msgbox gText_E4Rematches_Karen6 MSG_NORMAL @"Did you defeat all Elite Four\nalr..."
    goto EventScript_E4Rematches_Karen_Snippet3

EventScript_E4Rematches_Karen_Snippet3:
    callstd 0xB
    setmaptile 0x5 0x2 0x25A 0x1
    setmaptile 0x6 0x2 0x25B 0x1
    setmaptile 0x7 0x2 0x25C 0x1
    setmaptile 0x5 0x3 0x262 0x1
    setmaptile 0x6 0x3 0x263 0x0
    setmaptile 0x7 0x3 0x264 0x1
    special 0x8E
    sound 0x26
    pause 0xF
    setflag 0x104F
    setvar 0x40EF 0x164
    setvar 0x40F7 0x0
    releaseall
    end
    