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
# 11 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	faceplayer
# 13 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	playmoncry SPECIES_MANAPHY, CRY_MODE_ENCOUNTER
# 14 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	waitmoncry
# 15 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	msgbox ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_0
# 16 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	waitmessage
# 17 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	fadescreen FADE_TO_BLACK
# 18 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	setvar VAR_0x8000, 29
# 19 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	special LoadBirchBagPoolById
# 20 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 21 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	waitstate
# 23 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	msgbox ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_1
# 24 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	giveitem ITEM_TM_RAIN_DANCE, 1
# 25 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	waitmessage
# 26 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	msgbox ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_2
# 27 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	giveitem ITEM_PHIONE_EGG_CHARM, 1
# 28 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	waitmessage
# 29 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 30 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	msgbox ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_3
# 31 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	msgbox ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_4
# 32 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	applymovement 1, ANCIENT_MANAPHY_EventScript_TalkToManaphy_Movement_0
# 35 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	waitmovement
# 37 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	special WarpToNextAct
# 38 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	releaseall
	return


# 32 "data/maps/ANCIENT_MANAPHY/scripts.pory"
ANCIENT_MANAPHY_EventScript_TalkToManaphy_Movement_0:
# 33 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	jump_in_place_left_right
	step_end

ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_0:
# 15 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	.string "Heya!\nGood job on beating the first path!\lI've got a bunch of goodies to give you!\lHere's a water pokemon!$"

ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_1:
# 23 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	.string "And a Rain Dance TM!$"

ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_2:
# 26 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	.string "And a Phione Egg!\lThe egg will hatch into a phione\lafter you complete the next act!\lPhione is a great rain pokemon!$"

ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_3:
# 30 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	.string "The level cap has been raised to 30$"

ANCIENT_MANAPHY_EventScript_TalkToManaphy_Text_4:
# 31 "data/maps/ANCIENT_MANAPHY/scripts.pory"
	.string "That's all from me!\lNow lets get ya to the next path!$"
