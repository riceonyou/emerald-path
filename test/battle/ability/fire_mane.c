#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Fire Mane boosts Fire-type move damage by 1.5x", s16 damage)
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_NONE; }
    PARAMETRIZE { ability = ABILITY_FIRE_MANE; }
    GIVEN {
        PLAYER(SPECIES_FLAREON) { Ability(ability); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_FLAMETHROWER); }
    } SCENE {
        MESSAGE("Flareon used Flamethrower!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLAMETHROWER, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Fire Mane does not boost non-Fire move damage", s16 damage)
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_NONE; }
    PARAMETRIZE { ability = ABILITY_FIRE_MANE; }
    GIVEN {
        PLAYER(SPECIES_FLAREON) { Ability(ability); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_QUICK_ATTACK); }
    } SCENE {
        MESSAGE("Flareon used Quick Attack!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_QUICK_ATTACK, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_EQ(results[0].damage, results[1].damage);
    }
}
