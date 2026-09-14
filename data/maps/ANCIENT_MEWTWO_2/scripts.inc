ANCIENT_MEWTWO_2_MapScripts::
# 2 "data/maps/ANCIENT_MEWTWO_2/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ANCIENT_MEWTWO_2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

ANCIENT_MEWTWO_2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 2 "data/maps/ANCIENT_MEWTWO_2/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ANCIENT_MEWTWO_ONWARP
	.2byte 0


ANCIENT_MEWTWO_ONWARP::
# 5 "data/maps/ANCIENT_MEWTWO_2/scripts.pory"
	setvar VAR_TEMP_1, 1
# 6 "data/maps/ANCIENT_MEWTWO_2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	return


ANCIENT_MEWTWO_EventScript_TalkToMewtwo::
# 10 "data/maps/ANCIENT_MEWTWO_2/scripts.pory"
	lockall
# 11 "data/maps/ANCIENT_MEWTWO_2/scripts.pory"
	faceplayer
# 13 "data/maps/ANCIENT_MEWTWO_2/scripts.pory"
	msgbox ANCIENT_MEWTWO_EventScript_TalkToMewtwo_Text_0
# 20 "data/maps/ANCIENT_MEWTWO_2/scripts.pory"
	waitmessage
# 21 "data/maps/ANCIENT_MEWTWO_2/scripts.pory"
	giveitem ITEM_CLONING_CHARM, 1
# 22 "data/maps/ANCIENT_MEWTWO_2/scripts.pory"
	setvar VAR_CLONING_CHARM_COUNT, 3
# 23 "data/maps/ANCIENT_MEWTWO_2/scripts.pory"
	waitmessage
# 24 "data/maps/ANCIENT_MEWTWO_2/scripts.pory"
	msgbox ANCIENT_MEWTWO_EventScript_TalkToMewtwo_Text_1
# 30 "data/maps/ANCIENT_MEWTWO_2/scripts.pory"
	waitmessage
# 31 "data/maps/ANCIENT_MEWTWO_2/scripts.pory"
	giveitem ITEM_TM_PSYCHIC, 1
# 32 "data/maps/ANCIENT_MEWTWO_2/scripts.pory"
	waitmessage
# 33 "data/maps/ANCIENT_MEWTWO_2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 34 "data/maps/ANCIENT_MEWTWO_2/scripts.pory"
	msgbox ANCIENT_MEWTWO_EventScript_TalkToMewtwo_Text_2
# 36 "data/maps/ANCIENT_MEWTWO_2/scripts.pory"
	msgbox ANCIENT_MEWTWO_EventScript_TalkToMewtwo_Text_3
# 38 "data/maps/ANCIENT_MEWTWO_2/scripts.pory"
	special WarpToNextAct
# 39 "data/maps/ANCIENT_MEWTWO_2/scripts.pory"
	releaseall
	return


ANCIENT_MEWTWO_EventScript_TalkToMewtwo_Text_0:
# 13 "data/maps/ANCIENT_MEWTWO_2/scripts.pory"
	.string "You have done well to get this far.\n"
	.string "And for that, I have some rewards\l"
	.string "for you.\p"
	.string "I have gained an interest in\n"
	.string "the science behind cloning and have\l"
	.string "managed to develop this item.$"

ANCIENT_MEWTWO_EventScript_TalkToMewtwo_Text_1:
# 24 "data/maps/ANCIENT_MEWTWO_2/scripts.pory"
	.string "This charm allows you to clone the\n"
	.string "next 3 pokemon you choose.\l"
	.string "Be sure to choose them wisely.\p"
	.string "And as an extra gift for you,\n"
	.string "I shall give you this Psychic TM.$"

ANCIENT_MEWTWO_EventScript_TalkToMewtwo_Text_2:
# 34 "data/maps/ANCIENT_MEWTWO_2/scripts.pory"
	.string "The level cap has been raised to 42$"

ANCIENT_MEWTWO_EventScript_TalkToMewtwo_Text_3:
# 36 "data/maps/ANCIENT_MEWTWO_2/scripts.pory"
	.string "I wish you well on your next path.$"
