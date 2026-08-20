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
	msgbox ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_0
# 14 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	waitmessage
# 15 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	fadescreen FADE_TO_BLACK
# 16 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	setvar VAR_0x8000, 29
# 17 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	special LoadBirchBagPoolById
# 18 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 19 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	waitstate
# 20 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	playfanfare MUS_EVOLVED
# 21 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	msgbox ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_1
# 23 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	waitmessage
# 24 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	msgbox ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_2
# 25 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	special UpdateLevelCap
# 26 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	msgbox ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_3
# 28 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	special WarpToNextAct
# 29 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	releaseall
	return


ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_0:
# 13 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	.string "Take a water pokemon with you!$"

ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_1:
# 21 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_2:
# 24 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	.string "The level cap has been raised to 30$"

ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_3:
# 26 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	.string "Boop beep boop.\lNow time to get you to the next\nstage.$"
