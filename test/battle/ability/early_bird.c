#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Early Bird wakes up if 1 sleep turn is preset")
{
    GIVEN {
        PLAYER(SPECIES_DODUO) { Ability(ABILITY_EARLY_BIRD); Status1(STATUS1_SLEEP_TURN(1)); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        MESSAGE("Doduo woke up!");
        STATUS_ICON(player, none: TRUE);
        MESSAGE("Doduo used Celebrate!");
    }
}

SINGLE_BATTLE_TEST("Early Bird wakes up immediately from a preset sleep")
{
    GIVEN {
        PLAYER(SPECIES_DODUO) { Ability(ABILITY_EARLY_BIRD); Status1(STATUS1_SLEEP_TURN(3)); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        MESSAGE("Doduo woke up!");
        STATUS_ICON(player, none: TRUE);
        MESSAGE("Doduo used Celebrate!");
    }
}

SINGLE_BATTLE_TEST("Early Bird wakes up immediately from Rest sleep")
{
    GIVEN {
        PLAYER(SPECIES_DODUO) { Ability(ABILITY_EARLY_BIRD); MaxHP(99); HP(66); Moves(MOVE_REST, MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_REST); }
        TURN { MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        MESSAGE("Doduo woke up!");
        STATUS_ICON(player, none: TRUE);
        MESSAGE("Doduo used Celebrate!");
    }
}
