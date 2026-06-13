ANCIENT_MANAPHY_MapScripts::
# 2 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ANCIENT_MANAPHY_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

ANCIENT_MANAPHY_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 2 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ANCIENT_MANAPHY_ONWARP
	.2byte 0


ANCIENT_MANAPHY_ONWARP::
# 5 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	setvar VAR_TEMP_1, 1
# 6 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	return


ANCIENT_MANAPHY_EventScript_TalkToManaphy::
# 10 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	lockall
# 13 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	random 1
# 14 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 15 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	switch VAR_0x8004
# 16 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	case 0, ANCIENT_MANAPHY_EventScript_TalkToManaphy_3
ANCIENT_MANAPHY_EventScript_TalkToManaphy_1:
# 23 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	msgbox ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_1
# 24 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	waitmessage
# 25 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	fadescreen FADE_TO_BLACK
# 26 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	setvar VAR_0x8000, 29
# 27 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	special LoadBirchBagPoolById
# 28 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 29 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	waitstate
# 30 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	playfanfare MUS_EVOLVED
# 31 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	msgbox ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_2
# 33 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	waitmessage
# 34 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	msgbox ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_3
# 35 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	addvar VAR_CURRENT_ACT, 1
# 36 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	special UpdateLevelCap
# 37 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	msgbox ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_4
# 39 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	switch VAR_0x8004
# 40 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	case 0, ANCIENT_MANAPHY_EventScript_TalkToManaphy_6
ANCIENT_MANAPHY_EventScript_TalkToManaphy_4:
# 45 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	releaseall
	return

ANCIENT_MANAPHY_EventScript_TalkToManaphy_3:
# 17 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	msgbox ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_0
# 18 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	waitmessage
	goto ANCIENT_MANAPHY_EventScript_TalkToManaphy_1

ANCIENT_MANAPHY_EventScript_TalkToManaphy_6:
# 41 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	msgbox ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_5
# 42 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	warp MAP_HOENN3_1, 3, 7
	goto ANCIENT_MANAPHY_EventScript_TalkToManaphy_4


ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_0:
# 17 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	.string "Heyo!\lThe next act will be\nthe PETALBURG path!$"

ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_1:
# 23 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	.string "Take a water pokemon with you!$"

ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_2:
# 31 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_3:
# 34 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	.string "The level cap has been raised to 30$"

ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_4:
# 37 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	.string "Boop beep boop.\lNow time to get you to the next\nstage.$"

ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_5:
# 41 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	.string "About to warp to HOENN3_1$"
