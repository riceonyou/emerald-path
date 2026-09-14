ANCIENT_HOOH_MapScripts::
# 2 "data/maps/ANCIENT_HOOH/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ANCIENT_HOOH_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

ANCIENT_HOOH_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 2 "data/maps/ANCIENT_HOOH/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ANCIENT_HOOH_ONWARP
	.2byte 0


ANCIENT_HOOH_ONWARP::
# 5 "data/maps/ANCIENT_HOOH/scripts.pory"
	setvar VAR_TEMP_1, 1
# 6 "data/maps/ANCIENT_HOOH/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	return


ANCIENT_HOOH_EventScript_TalkToHOOH::
# 10 "data/maps/ANCIENT_HOOH/scripts.pory"
	lockall
# 11 "data/maps/ANCIENT_HOOH/scripts.pory"
	faceplayer
# 12 "data/maps/ANCIENT_HOOH/scripts.pory"
	msgbox ANCIENT_HOOH_EventScript_TalkToHOOH_Text_0
# 13 "data/maps/ANCIENT_HOOH/scripts.pory"
	waitmessage
# 14 "data/maps/ANCIENT_HOOH/scripts.pory"
	applymovement 1, ANCIENT_HOOH_EventScript_TalkToHOOH_Movement_0
# 17 "data/maps/ANCIENT_HOOH/scripts.pory"
	waitmovement
# 18 "data/maps/ANCIENT_HOOH/scripts.pory"
	releaseall
	return


ANCIENT_HOOH_EventScript_Sign::
# 22 "data/maps/ANCIENT_HOOH/scripts.pory"
	lockall
# 24 "data/maps/ANCIENT_HOOH/scripts.pory"
	playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
# 25 "data/maps/ANCIENT_HOOH/scripts.pory"
	waitmoncry
# 26 "data/maps/ANCIENT_HOOH/scripts.pory"
	msgbox ANCIENT_HOOH_EventScript_Sign_Text_0
# 27 "data/maps/ANCIENT_HOOH/scripts.pory"
	waitmessage
# 28 "data/maps/ANCIENT_HOOH/scripts.pory"
	applymovement 1, ANCIENT_HOOH_EventScript_Sign_Movement_0
# 31 "data/maps/ANCIENT_HOOH/scripts.pory"
	waitmovement
# 32 "data/maps/ANCIENT_HOOH/scripts.pory"
	fadescreen FADE_TO_BLACK
# 33 "data/maps/ANCIENT_HOOH/scripts.pory"
	setvar VAR_0x8000, 37
# 34 "data/maps/ANCIENT_HOOH/scripts.pory"
	special LoadBirchBagPoolById
# 35 "data/maps/ANCIENT_HOOH/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 36 "data/maps/ANCIENT_HOOH/scripts.pory"
	waitstate
# 37 "data/maps/ANCIENT_HOOH/scripts.pory"
	msgbox ANCIENT_HOOH_EventScript_Sign_Text_1
# 38 "data/maps/ANCIENT_HOOH/scripts.pory"
	waitmessage
# 39 "data/maps/ANCIENT_HOOH/scripts.pory"
	applymovement 1, ANCIENT_HOOH_EventScript_Sign_Movement_0
# 42 "data/maps/ANCIENT_HOOH/scripts.pory"
	waitmovement
# 43 "data/maps/ANCIENT_HOOH/scripts.pory"
	giveitem ITEM_HOOH_FEATHER_CHARM, 1
# 44 "data/maps/ANCIENT_HOOH/scripts.pory"
	waitmessage
# 45 "data/maps/ANCIENT_HOOH/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 47 "data/maps/ANCIENT_HOOH/scripts.pory"
	msgbox ANCIENT_HOOH_EventScript_Sign_Text_2
# 48 "data/maps/ANCIENT_HOOH/scripts.pory"
	msgbox ANCIENT_HOOH_EventScript_Sign_Text_3
# 50 "data/maps/ANCIENT_HOOH/scripts.pory"
	special WarpToNextAct
# 51 "data/maps/ANCIENT_HOOH/scripts.pory"
	releaseall
	return


# 14 "data/maps/ANCIENT_HOOH/scripts.pory"
ANCIENT_HOOH_EventScript_TalkToHOOH_Movement_0:
# 15 "data/maps/ANCIENT_HOOH/scripts.pory"
	face_down
	step_end

# 28 "data/maps/ANCIENT_HOOH/scripts.pory"
ANCIENT_HOOH_EventScript_Sign_Movement_0:
# 29 "data/maps/ANCIENT_HOOH/scripts.pory"
	walk_in_place_down
# 29 "data/maps/ANCIENT_HOOH/scripts.pory"
	walk_in_place_down
	step_end

ANCIENT_HOOH_EventScript_TalkToHOOH_Text_0:
# 12 "data/maps/ANCIENT_HOOH/scripts.pory"
	.string "Ermm...\p"
	.string "It's a bit awkward talking you from\n"
	.string "there. How about you talk to me from\l"
	.string "the below the altar?$"

ANCIENT_HOOH_EventScript_Sign_Text_0:
# 26 "data/maps/ANCIENT_HOOH/scripts.pory"
	.string "You've done well to complete the first\n"
	.string "path. Please take a pokemon with you.$"

ANCIENT_HOOH_EventScript_Sign_Text_1:
# 37 "data/maps/ANCIENT_HOOH/scripts.pory"
	.string "And a special gift. A freshly plucked\n"
	.string "feather of my own. When you lose a fight\l"
	.string "while you have this, instead of losing\l"
	.string "the run, you will get another chance.$"

ANCIENT_HOOH_EventScript_Sign_Text_2:
# 47 "data/maps/ANCIENT_HOOH/scripts.pory"
	.string "The level cap has been raised to 30$"

ANCIENT_HOOH_EventScript_Sign_Text_3:
# 48 "data/maps/ANCIENT_HOOH/scripts.pory"
	.string "I wish you well on your journey.$"
