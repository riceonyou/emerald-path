#include "starter_choose.h"
#include "choose_random_pool_all_raw.h"

enum BirchBagPoolId {
    BIRCH_BAG_POOL_STARTERS,
    BIRCH_BAG_POOL_HOENN1_EARLY_MONS,
    BIRCH_BAG_POOL_HOENN1_BEFORE_WOODS,
    BIRCH_BAG_POOL_HOENN1_BEACH_FLYING_TYPES,
    BIRCH_BAG_POOL_HOENN1_INSIDE_WOODS,
    BIRCH_BAG_POOL_HOENN1_AFTER_WOODS,
    BIRCH_BAG_POOL_HOENN1_RUSTBORO,
    BIRCH_BAG_POOL_HOENN2_BEACH,
    BIRCH_BAG_POOL_HOENN2_2,
    BIRCH_BAG_POOL_HOENN2_3,
    BIRCH_BAG_POOL_HOENN2_4,
    BIRCH_BAG_POOL_HOENN2_5,
    BIRCH_BAG_POOL_HOENN2_6,
    BIRCH_BAG_POOL_HOENN2_7,
    BIRCH_BAG_POOL_HOENN3_1,
    BIRCH_BAG_POOL_HOENN3_2,
    BIRCH_BAG_POOL_HOENN3_3,
    BIRCH_BAG_POOL_HOENN3_4,
    BIRCH_BAG_POOL_HOENN3_5,
    BIRCH_BAG_POOL_HOENN3_6,
    BIRCH_BAG_POOL_HOENN3_7,
    BIRCH_BAG_POOL_HOENN4_1,
    BIRCH_BAG_POOL_HOENN4_2,
    BIRCH_BAG_POOL_HOENN4_3,
    BIRCH_BAG_POOL_HOENN4_4,
    BIRCH_BAG_POOL_HOENN4_5,
    BIRCH_BAG_POOL_HOENN4_6,
    BIRCH_BAG_POOL_HOENN4_7,
    BIRCH_BAG_POOL_FOSSILS,
    BIRCH_BAG_POOL_MANAPHY,
    BIRCH_BAG_POOL_GROUDON,
    BIRCH_BAG_POOL_REGISTEEL,
    BIRCH_BAG_POOL_REGICE,
    BIRCH_BAG_POOL_ALL_BASE_EVOLVING,
    BIRCH_BAG_POOL_ALL_MIDDLE_OR_SINGLE,
    BIRCH_BAG_POOL_ALL_FINAL,
    BIRCH_BAG_POOL_SHAYMIN,
    BIRCH_BAG_POOL_HOOH,
    BIRCH_BAG_POOL_LUGIA,
    BIRCH_BAG_POOL_KYOGRE,
};

static const struct BirchBagWeightedChoice Registeel_Pool[] = {
    {SPECIES_ARON,1},
    {SPECIES_MAWILE,1},
    {SPECIES_BRONZOR,1},
    {SPECIES_SKARMORY,1},
    {SPECIES_BELDUM,1},
    {SPECIES_RIOLU,1},
    {SPECIES_PAWNIARD,1},
    {SPECIES_HONEDGE,1},
    {SPECIES_TINKATINK,1},
    {SPECIES_VAROOM,1},
    {SPECIES_KLINK,1},
    {SPECIES_MEOWTH_GALAR,1},
    {SPECIES_MELTAN,1},
    {SPECIES_CUFANT,1},
    {SPECIES_KLEFKI,1},
};

static const struct BirchBagWeightedChoice Hooh_Pool[] = {
    {SPECIES_GROWLITHE,1},
    {SPECIES_VULPIX,1},
    {SPECIES_PONYTA,1},
    {SPECIES_HOUNDOUR,1},
    {SPECIES_EEVEE,1},
    {SPECIES_TOGEPI,1},
    {SPECIES_SWABLU,1},
    {SPECIES_CHARCADET,1},
    {SPECIES_LARVESTA,99},
    {SPECIES_FUECOCO,1},
    {SPECIES_LITWICK,1},
    {SPECIES_CHARMANDER,1},
    {SPECIES_CYNDAQUIL,1},
    {SPECIES_TORCHIC,1},
    {SPECIES_CHIMCHAR,1},
    {SPECIES_TEPIG,1},
    {SPECIES_FENNEKIN,1},
    {SPECIES_LITTEN,1},
    {SPECIES_SCORBUNNY,1},
    {SPECIES_FUECOCO,1},
};

static const struct BirchBagWeightedChoice Lugia_Pool[] = {
    {SPECIES_ARON,1},
    {SPECIES_MAWILE,1},
    {SPECIES_BRONZOR,1},
    {SPECIES_SKARMORY,1},
    {SPECIES_BELDUM,1},
    {SPECIES_RIOLU,1},
    {SPECIES_PAWNIARD,1},
    {SPECIES_HONEDGE,1},
    {SPECIES_TINKATINK,1},
    {SPECIES_VAROOM,1},
    {SPECIES_KLINK,1},
    {SPECIES_MEOWTH_GALAR,1},
    {SPECIES_MELTAN,1},
    {SPECIES_CUFANT,1},
    {SPECIES_KLEFKI,1},
};

static const struct BirchBagWeightedChoice Regice_Pool[] = {
    {SPECIES_VANILLITE,1},
    {SPECIES_CUBCHOO,1},
    {SPECIES_BERGMITE,1},
    {SPECIES_SNORUNT,1},
    {SPECIES_SPHEAL,1},
    {SPECIES_SNEASEL,1},
    {SPECIES_VULPIX_ALOLA,1},
    {SPECIES_SANDSHREW_ALOLA,1},
    {SPECIES_SNOM,1},
    {SPECIES_CRYOGONAL,1},
    {SPECIES_CETODDLE,1},
    {SPECIES_DELIBIRD,1},
    {SPECIES_DARUMAKA_GALAR,1},
    {SPECIES_EISCUE,1},
    {SPECIES_SMOOCHUM,1},
    {SPECIES_SWINUB,1},
    {SPECIES_SNOVER,1},
    {SPECIES_FRIGIBAX,1},
};

const struct BirchBagWeightedChoice Starters_Pool[] = {
    {SPECIES_BULBASAUR, 2},
    {SPECIES_CHARMANDER, 2},
    {SPECIES_SQUIRTLE, 2},
    {SPECIES_CHIKORITA, 2},
    {SPECIES_CYNDAQUIL, 2},
    {SPECIES_TOTODILE, 2},
    {SPECIES_TREECKO, 2},
    {SPECIES_TORCHIC, 2},
    {SPECIES_MUDKIP, 2},
    {SPECIES_TURTWIG, 2},
    {SPECIES_CHIMCHAR, 2},
    {SPECIES_PIPLUP, 2},
    {SPECIES_SNIVY, 2},
    {SPECIES_TEPIG, 2},
    {SPECIES_OSHAWOTT, 2},
    {SPECIES_CHESPIN, 2},
    {SPECIES_FENNEKIN, 2},
    {SPECIES_FROAKIE, 2},
    {SPECIES_ROWLET, 2},
    {SPECIES_LITTEN, 2},
    {SPECIES_POPPLIO, 2},
    {SPECIES_GROOKEY, 2},
    {SPECIES_SCORBUNNY, 2},
    {SPECIES_SOBBLE, 2},
    {SPECIES_SPRIGATITO, 2},
    {SPECIES_FUECOCO, 2},
    {SPECIES_QUAXLY, 2},
    {SPECIES_EEVEE, 2},
};

static const struct BirchBagWeightedChoice Hoenn1_Early_Mons_Pool[] = {
    {SPECIES_RATTATA, 2},
    {SPECIES_PIDGEY, 2},
    {SPECIES_CATERPIE, 2},
    {SPECIES_WEEDLE, 2},
    {SPECIES_SENTRET, 2},
    {SPECIES_HOOTHOOT, 2},
    {SPECIES_ZIGZAGOON, 6},
    {SPECIES_POOCHYENA, 6},
    {SPECIES_WURMPLE, 2},
    {SPECIES_TAILLOW, 3},
    {SPECIES_RALTS, 2},
    {SPECIES_BIDOOF, 2},
    {SPECIES_STARLY, 2},
    {SPECIES_KRICKETOT, 3},
    {SPECIES_SHINX, 3},
    {SPECIES_PATRAT, 2},
    {SPECIES_PIDOVE, 2},
    {SPECIES_LILLIPUP, 2},
    {SPECIES_PURRLOIN, 2},
    {SPECIES_BUNNELBY, 2},
    {SPECIES_FLETCHLING, 2},
    {SPECIES_SCATTERBUG, 2},
    {SPECIES_YUNGOOS, 2},
    {SPECIES_PIKIPEK, 2},
    {SPECIES_GRUBBIN, 2},
    {SPECIES_SKWOVET, 2},
    {SPECIES_ROOKIDEE, 2},
    {SPECIES_BLIPBUG, 2},
    {SPECIES_WOOLOO, 2},
    {SPECIES_LECHONK, 2},
    {SPECIES_TAROUNTULA, 2},
    {SPECIES_NYMBLE, 2},
    {SPECIES_HELIOPTILE, 2},
    {SPECIES_SMOLIV, 2},
    {SPECIES_STANTLER, 1},
    {SPECIES_ZIGZAGOON_GALAR, 4},
};

static const struct BirchBagWeightedChoice Fossil_Pool[] = {
    {SPECIES_OMANYTE,5},
    {SPECIES_KABUTO,5},
    {SPECIES_AERODACTYL,4},
    {SPECIES_LILEEP,5},
    {SPECIES_ANORITH,5},
    {SPECIES_CRANIDOS,5},
    {SPECIES_SHIELDON,5},
    {SPECIES_TIRTOUGA,5},
    {SPECIES_ARCHEN,5},
    {SPECIES_TYRUNT,5},
    {SPECIES_AMAURA,5},
    {SPECIES_DRACOZOLT,2},
    {SPECIES_ARCTOZOLT,2},
    {SPECIES_DRACOVISH,2},
    {SPECIES_ARCTOVISH,2},
};

static const struct BirchBagWeightedChoice Groudon_Pool[] = {
    {SPECIES_CHARIZARD_MEGA_Y,2},
    {SPECIES_NINETALES,9},
    {SPECIES_BELLOSSOM,9},
    {SPECIES_FLAREON,9},
    {SPECIES_MOLTRES,1},
    {SPECIES_TYPHLOSION,7},
    {SPECIES_SUNFLORA,9},
    {SPECIES_ENTEI,1},
    {SPECIES_CAMERUPT,9},
    {SPECIES_TORKOAL,9},
    {SPECIES_SOLROCK,9},
    {SPECIES_HEATMOR,1},
    {SPECIES_HELIOLISK,9},
    {SPECIES_CENTISKORCH,9},
    {SPECIES_GOUGING_FIRE,1},
};

static const struct BirchBagWeightedChoice Hoenn1_Before_Woods_Pool[] = {
    {SPECIES_SLAKOTH, 15},
    {SPECIES_SKIDDO, 15},
    {SPECIES_SURSKIT, 15},
    {SPECIES_YANMA, 10},
    {SPECIES_SHROOMISH, 25},
    {SPECIES_EXEGGCUTE, 15},
    {SPECIES_LOTAD, 30},
    {SPECIES_SEEDOT, 30},
    {SPECIES_SENTRET, 5},
    {SPECIES_APPLIN, 5},
    {SPECIES_CAPSAKID, 2},
    {SPECIES_SCYTHER, 2},
};

static const struct BirchBagWeightedChoice Hoenn1_Beach_Flying_Types_Pool[] = {
    {SPECIES_WINGULL, 40},
    {SPECIES_CHATOT, 15},
    {SPECIES_FLETCHLING, 15},
    {SPECIES_NATU, 15},
    {SPECIES_STARLY, 15},
    {SPECIES_TAILLOW, 25},
    {SPECIES_DUCKLETT, 15},
    {SPECIES_ROOKIDEE, 15},
    {SPECIES_HOOTHOOT, 15},
    {SPECIES_WATTREL, 20},
    {SPECIES_SWABLU, 15},
    {SPECIES_RUFFLET,10},
    {SPECIES_VULLABY,10},
    {SPECIES_GLIGAR, 2},
    {SPECIES_DODUO, 2},
    {SPECIES_SQUAWKABILLY, 1},
    {SPECIES_MURKROW, 1},
    {SPECIES_FARFETCHD, 1},
    {SPECIES_FARFETCHD_GALAR, 1},
};

static const struct BirchBagWeightedChoice Hoenn1_Inside_Woods_Pool[] = {
    {SPECIES_ODDISH, 20},
    {SPECIES_BELLSPROUT, 10},
    {SPECIES_WURMPLE, 20},
    {SPECIES_WEEDLE, 10},
    {SPECIES_CATERPIE, 10},
    {SPECIES_COTTONEE, 8},
    {SPECIES_PETILIL, 8},
    {SPECIES_RELLOR, 8},
    {SPECIES_TANGELA, 2},
    {SPECIES_AIPOM, 2},
    {SPECIES_TAROUNTULA, 8},
    {SPECIES_NYMBLE, 8},
    {SPECIES_SHROOMISH, 8},
    {SPECIES_SEWADDLE, 8},
    {SPECIES_SPINARAK, 8},
    {SPECIES_PARAS, 5},
    {SPECIES_PANSAGE, 5},
    {SPECIES_PANPOUR, 5},
    {SPECIES_PANSEAR, 5},
};

static const struct BirchBagWeightedChoice Hoenn1_After_Woods_Pool[] = {
    {SPECIES_AZURILL, 30},
    {SPECIES_BUDEW, 30},
    {SPECIES_FLABEBE, 20},
    {SPECIES_SUNKERN, 20},
    {SPECIES_CHERUBI, 20},
    {SPECIES_MORELULL, 10},
    {SPECIES_GOSSIFLEUR, 20},
    {SPECIES_SEWADDLE, 20},
    {SPECIES_BURMY_PLANT, 20},
    {SPECIES_CUTIEFLY, 20},
    {SPECIES_LOTAD, 25},
    {SPECIES_SEEDOT, 25},
    {SPECIES_FOMANTIS, 20},
    {SPECIES_SNUBBULL, 20},
    {SPECIES_COMFEY, 5},
    {SPECIES_MIME_JR, 5},
    {SPECIES_TOGEPI,5},
    {SPECIES_SKIDDO,10},
    {SPECIES_DEERLING,10},
    {SPECIES_MINCCINO,10},
};

static const struct BirchBagWeightedChoice Hoenn1_Rustboro_Pool[] = {
    {SPECIES_MEOWTH, 25},
    {SPECIES_GLAMEOW, 25},
    {SPECIES_MEOWTH_ALOLA, 25},
    {SPECIES_MEOWTH_GALAR, 25},
    {SPECIES_SKITTY, 30},
    {SPECIES_ESPURR, 20},
    {SPECIES_PURRLOIN, 20},
    {SPECIES_MEOWSTIC, 10},
    {SPECIES_SHINX, 15},
    {SPECIES_LITLEO, 15},
    {SPECIES_LITTEN, 15},
    {SPECIES_EEVEE, 15},
};

static const struct BirchBagWeightedChoice Manaphy_Pool[] = {
    {SPECIES_FEEBAS,1},
    {SPECIES_HORSEA,1},
    {SPECIES_MANTYKE,1},
    {SPECIES_RELICANTH,1},
    {SPECIES_REMORAID,1},
    {SPECIES_RELICANTH,1},
    {SPECIES_LUVDISC,1},
    {SPECIES_POLIWAG,1},
    {SPECIES_PSYDUCK,1},
    {SPECIES_GOLDEEN,1},
    {SPECIES_FINNEON,1},
    {SPECIES_CLAMPERL,2},
    {SPECIES_ARROKUDA},
    {SPECIES_BASCULIN_WHITE_STRIPED,1},
    {SPECIES_WIGLETT,1},
    {SPECIES_ALOMOMOLA,1},
    {SPECIES_BUIZEL,1},
    {SPECIES_PYUKUMUKU,1},
    {SPECIES_WISHIWASHI,1},
    {SPECIES_DONDOZO,1},
};

static const struct BirchBagWeightedChoice Hoenn2_Beach_Pool[] = {
    {SPECIES_WINGULL, 3},
    {SPECIES_TENTACOOL, 3},
    {SPECIES_SHELLDER, 3},
    {SPECIES_STARYU, 3},
    {SPECIES_CORPHISH, 3},
    {SPECIES_CLAMPERL, 3},
    {SPECIES_CHINCHOU, 3},
    {SPECIES_MANTYKE, 3},
    {SPECIES_WAILMER,1},
    {SPECIES_SANDYGAST,3},
    {SPECIES_CRABRAWLER,3},
    {SPECIES_BINACLE,3},
    {SPECIES_SKRELP,3},
    {SPECIES_CLAUNCHER,3},
    {SPECIES_DHELMISE,3},
};

static const struct BirchBagWeightedChoice Shaymin_Pool[] = {
    {SPECIES_TANGELA, 1},
    {SPECIES_SUNKERN, 1},
    {SPECIES_ODDISH, 1},
    {SPECIES_SEEDOT, 1},
    {SPECIES_CACNEA, 1},
    {SPECIES_CHERUBI, 1},
    {SPECIES_CARNIVINE, 1},
    {SPECIES_PETILIL, 1},
    {SPECIES_MARACTUS,1},
    {SPECIES_SKIDDO,1},
    {SPECIES_FOMANTIS,1},
    {SPECIES_BOUNSWEET,1},
    {SPECIES_GOSSIFLEUR,1},
    {SPECIES_FOONGUS,1},
    {SPECIES_BUDEW,1},
    {SPECIES_HOPPIP,1},
    {SPECIES_EXEGGCUTE,1},
    {SPECIES_SNOVER,1},
    {SPECIES_COTTONEE,1},
    {SPECIES_FERROSEED,1},
    {SPECIES_MORELULL,1},
    {SPECIES_APPLIN,1},
    {SPECIES_SMOLIV,1},
    {SPECIES_BRAMBLIN,1},
    {SPECIES_CAPSAKID,1},
    {SPECIES_LOTAD,1},
    {SPECIES_DEERLING,1},
    {SPECIES_PUMPKABOO,1},
    {SPECIES_TOEDSCOOL,1},
};

static const struct BirchBagWeightedChoice Kyogre_Pool[] = {
    {SPECIES_POLITOED, 10},
    {SPECIES_VAPOREON, 10},
    {SPECIES_ZAPDOS, 1},
    {SPECIES_SUICUNE, 1},
    {SPECIES_SWAMPERT, 8},
    {SPECIES_PELIPPER, 10},
    {SPECIES_MASQUERAIN, 10},
    {SPECIES_WAILORD, 10},
    {SPECIES_LUMINEON, 10},
    {SPECIES_PHIONE, 1},
    {SPECIES_SWANNA, 10},
};

void LoadBirchBagPoolById(void)
{
    u8 poolId = gSpecialVar_0x8000;
    
    ResetBirchBagWeightedPool();
    
    switch (poolId)
    {
    case BIRCH_BAG_POOL_STARTERS:
        SetBirchBagWeightedChoices(Starters_Pool, ARRAY_COUNT(Starters_Pool));
        break;
    case BIRCH_BAG_POOL_HOENN1_EARLY_MONS:
        SetBirchBagWeightedChoices(Hoenn1_Early_Mons_Pool, ARRAY_COUNT(Hoenn1_Early_Mons_Pool));
        break;
    case BIRCH_BAG_POOL_HOENN1_BEFORE_WOODS:
        SetBirchBagWeightedChoices(Hoenn1_Before_Woods_Pool, ARRAY_COUNT(Hoenn1_Before_Woods_Pool));
        break;
    case BIRCH_BAG_POOL_HOENN1_BEACH_FLYING_TYPES:
        SetBirchBagWeightedChoices(Hoenn1_Beach_Flying_Types_Pool, ARRAY_COUNT(Hoenn1_Beach_Flying_Types_Pool));
        break;
    case BIRCH_BAG_POOL_HOENN1_INSIDE_WOODS:
        SetBirchBagWeightedChoices(Hoenn1_Inside_Woods_Pool, ARRAY_COUNT(Hoenn1_Inside_Woods_Pool));
        break;
    case BIRCH_BAG_POOL_HOENN1_AFTER_WOODS:
        SetBirchBagWeightedChoices(Hoenn1_After_Woods_Pool, ARRAY_COUNT(Hoenn1_After_Woods_Pool));
        break;
    case BIRCH_BAG_POOL_HOENN1_RUSTBORO:
        SetBirchBagWeightedChoices(Hoenn1_Rustboro_Pool, ARRAY_COUNT(Hoenn1_Rustboro_Pool));
        break;
    case BIRCH_BAG_POOL_FOSSILS:
        SetBirchBagWeightedChoices(Fossil_Pool, ARRAY_COUNT(Fossil_Pool));
        break;
    case BIRCH_BAG_POOL_MANAPHY:
        SetBirchBagWeightedChoices(Manaphy_Pool, ARRAY_COUNT(Manaphy_Pool));
        break;
    case BIRCH_BAG_POOL_GROUDON:
        SetBirchBagWeightedChoices(Groudon_Pool, ARRAY_COUNT(Groudon_Pool));
        break;
    case BIRCH_BAG_POOL_REGISTEEL:
        SetBirchBagWeightedChoices(Registeel_Pool, ARRAY_COUNT(Registeel_Pool));
        break;
    case BIRCH_BAG_POOL_REGICE:
        SetBirchBagWeightedChoices(Regice_Pool, ARRAY_COUNT(Regice_Pool));
        break;
    case BIRCH_BAG_POOL_HOENN2_BEACH:
        SetBirchBagWeightedChoices(Hoenn2_Beach_Pool, ARRAY_COUNT(Hoenn2_Beach_Pool));
        break;
    case BIRCH_BAG_POOL_ALL_BASE_EVOLVING:
        SetBirchBagWeightedChoices(AllBaseEvolving_Pool, ARRAY_COUNT(AllBaseEvolving_Pool));
        break;
    case BIRCH_BAG_POOL_ALL_MIDDLE_OR_SINGLE:
        SetBirchBagWeightedChoices(AllMiddleOrSingle_Pool, ARRAY_COUNT(AllMiddleOrSingle_Pool));
        break;
    case BIRCH_BAG_POOL_ALL_FINAL:
        SetBirchBagWeightedChoices(AllFinal_Pool, ARRAY_COUNT(AllFinal_Pool));
        break;
    case BIRCH_BAG_POOL_SHAYMIN:
        SetBirchBagWeightedChoices(Shaymin_Pool, ARRAY_COUNT(Shaymin_Pool));
        break;
    case BIRCH_BAG_POOL_HOOH:
        SetBirchBagWeightedChoices(Hooh_Pool, ARRAY_COUNT(Hooh_Pool));
        break;
    case BIRCH_BAG_POOL_LUGIA:
        SetBirchBagWeightedChoices(Lugia_Pool, ARRAY_COUNT(Lugia_Pool));
        break;
    case BIRCH_BAG_POOL_KYOGRE:
        SetBirchBagWeightedChoices(Kyogre_Pool, ARRAY_COUNT(Kyogre_Pool));
        break;
    }
}