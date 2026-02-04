


    [SPECIES_PIQUSELLE] =
    {
        .baseHP        = 57,
        .baseAttack    = 86,
        .baseDefense   = 57,
        .baseSpeed     = 134,
        .baseSpAttack  = 86,
        .baseSpDefense = 57,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_FAIRY),
        .catchRate = 45,
        .expYield = 200,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_MULTISCALE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Piquselle"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_PIQUSELLE,
        .categoryName = _("Unknown"),
        .height = 10,
        .weight = 100,
        .description = COMPOUND_STRING(
            "Ancient tales warn of flickering lights in the forest at dusk. Piquselle means no harm-it simply can't resist a good prank and a bewildered audience.\n"
            "Piquselle nests in foxglove blooms and emerges at twilight to dance through misty glens. The static in its wings crackles like tiny giggles.\n"
            "Its gleeful sparks have misled countless travelers. It always returns to guide them home-eventually."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Piquselle,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Piquselle,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Piquselle,
        .shinyPalette = gMonShinyPalette_Piquselle,
        .iconSprite = gMonIcon_Piquselle,
        .iconPalIndex = 1,
        FOOTPRINT(Piquselle)

        .levelUpLearnset = sPiquselleLevelUpLearnset,
        .teachableLearnset = sPiquselleTeachableLearnset,
    },
