#include "starter_choose.h"

enum BirchBagPoolId {
    BIRCH_BAG_POOL_HOENN1_1,
    BIRCH_BAG_POOL_HOENN1_2,
    BIRCH_BAG_POOL_HOENN1_3,
    BIRCH_BAG_POOL_HOENN1_4,
    BIRCH_BAG_POOL_HOENN1_5,
    BIRCH_BAG_POOL_HOENN1_6,
    BIRCH_BAG_POOL_HOENN1_7,
    BIRCH_BAG_POOL_HOENN2_1,
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
};



const struct BirchBagWeightedChoice Hoenn1_1_Pool[] = {
    {SPECIES_BULBASAUR, 20},
    {SPECIES_CHARMANDER, 20},
    {SPECIES_SQUIRTLE, 20},
    {SPECIES_CHIKORITA, 20},
    {SPECIES_CYNDAQUIL, 20},
    {SPECIES_TOTODILE, 20},
    {SPECIES_TREECKO, 60},
    {SPECIES_TORCHIC, 60},
    {SPECIES_MUDKIP, 60},
    {SPECIES_TURTWIG, 20},
    {SPECIES_CHIMCHAR, 20},
    {SPECIES_PIPLUP, 20},
    {SPECIES_SNIVY, 20},
    {SPECIES_TEPIG, 20},
    {SPECIES_OSHAWOTT, 20},
    {SPECIES_CHESPIN, 20},
    {SPECIES_FENNEKIN, 20},
    {SPECIES_FROAKIE, 20},
    {SPECIES_ROWLET, 20},
    {SPECIES_LITTEN, 20},
    {SPECIES_POPPLIO, 20},
    {SPECIES_GROOKEY, 20},
    {SPECIES_SCORBUNNY, 20},
    {SPECIES_SOBBLE, 20},
    {SPECIES_SPRIGATITO, 20},
    {SPECIES_FUECOCO, 20},
    {SPECIES_QUAXLY, 20},
    {SPECIES_EEVEE, 20},
};

static const struct BirchBagWeightedChoice Hoenn1_2_Pool[] = {
    {SPECIES_ZIGZAGOON, 30},
    {SPECIES_POOCHYENA, 30},
    {SPECIES_ZIGZAGOON_GALAR, 20},
    {SPECIES_BIDOOF, 10},
    {SPECIES_WOOLOO, 10},
    {SPECIES_BUNNELBY, 10},
    {SPECIES_LILLIPUP, 10},
    {SPECIES_TAILLOW, 10},
    {SPECIES_RALTS, 10},
    {SPECIES_STANTLER, 1},
};

static const struct BirchBagWeightedChoice Hoenn1_3_Pool[] = {
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

static const struct BirchBagWeightedChoice Hoenn1_4_Pool[] = {
    {SPECIES_WINGULL, 40},
    {SPECIES_CHATOT, 15},
    {SPECIES_FLETCHLING, 15},
    {SPECIES_NATU, 10},
    {SPECIES_STARLY, 15},
    {SPECIES_TAILLOW, 25},
    {SPECIES_DUCKLETT, 15},
    {SPECIES_ROOKIDEE, 15},
    {SPECIES_WATTREL, 15},
    {SPECIES_SWABLU, 15},
    {SPECIES_SQUAWKABILLY, 2},
    {SPECIES_MURKROW, 2},
};

static const struct BirchBagWeightedChoice Hoenn1_5_Pool[] = {
    {SPECIES_ODDISH, 20},
    {SPECIES_BELLSPROUT, 10},
    {SPECIES_WURMPLE, 20},
    {SPECIES_WEEDLE, 10},
    {SPECIES_CATERPIE, 10},
    {SPECIES_COTTONEE, 8},
    {SPECIES_PETILIL, 8},
    {SPECIES_RELLOR, 8},
    {SPECIES_TANGELA, 2},
    {SPECIES_PANSAGE, 5},
    {SPECIES_AIPOM, 2},
    {SPECIES_TAROUNTULA, 8},
    {SPECIES_NYMBLE, 8},
};

static const struct BirchBagWeightedChoice Hoenn1_6_Pool[] = {
    {SPECIES_AZURILL, 20},
    {SPECIES_BUDEW, 20},
    {SPECIES_FLABEBE, 20},
    {SPECIES_SUNKERN, 20},
    {SPECIES_CHERUBI, 20},
    {SPECIES_GOSSIFLEUR, 20},
    {SPECIES_SEWADDLE, 20},
    {SPECIES_BURMY_PLANT, 20},
    {SPECIES_CUTIEFLY, 20},
    {SPECIES_LOTAD, 25},
    {SPECIES_SEEDOT, 25},
    {SPECIES_FOMANTIS, 20},
    {SPECIES_COMFEY, 5},
};

static const struct BirchBagWeightedChoice Hoenn1_7_Pool[] = {
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
    {SPECIES_LITTEN, 5},
    {SPECIES_EEVEE, 5},
};

void LoadBirchBagPoolById(void)
{
    u8 poolId = gSpecialVar_0x8000;
    
    ResetBirchBagWeightedPool();
    
    switch (poolId)
    {
    case BIRCH_BAG_POOL_HOENN1_1:
        SetBirchBagWeightedChoices(Hoenn1_1_Pool, ARRAY_COUNT(Hoenn1_1_Pool));
        break;
    case BIRCH_BAG_POOL_HOENN1_2:
        SetBirchBagWeightedChoices(Hoenn1_2_Pool, ARRAY_COUNT(Hoenn1_2_Pool));
        break;
    case BIRCH_BAG_POOL_HOENN1_3:
        SetBirchBagWeightedChoices(Hoenn1_3_Pool, ARRAY_COUNT(Hoenn1_3_Pool));
        break;
    case BIRCH_BAG_POOL_HOENN1_4:
        SetBirchBagWeightedChoices(Hoenn1_4_Pool, ARRAY_COUNT(Hoenn1_4_Pool));
        break;
    case BIRCH_BAG_POOL_HOENN1_5:
        SetBirchBagWeightedChoices(Hoenn1_5_Pool, ARRAY_COUNT(Hoenn1_5_Pool));
        break;
    case BIRCH_BAG_POOL_HOENN1_6:
        SetBirchBagWeightedChoices(Hoenn1_6_Pool, ARRAY_COUNT(Hoenn1_6_Pool));
        break;
    case BIRCH_BAG_POOL_HOENN1_7:
        SetBirchBagWeightedChoices(Hoenn1_7_Pool, ARRAY_COUNT(Hoenn1_7_Pool));
        break;
    }
}