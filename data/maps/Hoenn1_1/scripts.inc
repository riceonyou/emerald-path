Hoenn1_1_MapScripts::
# 2 "data/maps/Hoenn1_1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Hoenn1_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Hoenn1_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 2 "data/maps/Hoenn1_1/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Hoenn1_1_ONFRAME
	.2byte 0


Hoenn1_1_ONFRAME::
# 6 "data/maps/Hoenn1_1/scripts.pory"
	setvar VAR_TEMP_1, 1
# 7 "data/maps/Hoenn1_1/scripts.pory"
	call AfterWarpIntoNewAct
	return


Hoenn1_1_EventScript_BirchBag::
# 12 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 14 "data/maps/Hoenn1_1/scripts.pory"
	call Act1BirchBag
# 16 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_1_BIRCHBAG
# 17 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_BIRCHBAG_1_1
# 20 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 21 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Hoenn1_2_EventScript_Zigzagoon::
# 28 "data/maps/Hoenn1_1/scripts.pory"
	trainerbattle_single TRAINER_ZIGZAGOON, Zigzagoon_Intro, Zigzagoon_Outro
# 29 "data/maps/Hoenn1_1/scripts.pory"
	msgbox PostBattle_Zigzagoon, MSGBOX_AUTOCLOSE
# 30 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
	end


Hoenn1_2_EventScript_BirchBag::
# 48 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 49 "data/maps/Hoenn1_1/scripts.pory"
	call Act1BirchBag
# 51 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_2_BIRCHBAG
# 52 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_BIRCHBAG_1_2
# 55 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 56 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Hoenn1_3_EventScript_BirchBag::
# 63 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 64 "data/maps/Hoenn1_1/scripts.pory"
	call Act1BirchBag
# 66 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_3_BIRCHBAG
# 67 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_BIRCHBAG_1_3
# 70 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 71 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Hoenn1_1_Itemball_1::
# 77 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 78 "data/maps/Hoenn1_1/scripts.pory"
	call GiveCommonItem
# 79 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_1_ITEM
# 80 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_ITEM_1_1
# 81 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Hoenn1_1_Itemball_2::
# 86 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 87 "data/maps/Hoenn1_1/scripts.pory"
	call GiveCommonItem
# 88 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_2_ITEM
# 89 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_ITEM_1_2
# 90 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Zigzagoon_Intro::
# 34 "data/maps/Hoenn1_1/scripts.pory"
	.string "I'm Zigzagoon. I like to go in zigzags.$"

Zigzagoon_Outro::
# 38 "data/maps/Hoenn1_1/scripts.pory"
	.string "You beat me :(\p"
	.string "Don't worry about healing your pokemon\n"
	.string "though. They get automatically healed\l"
	.string "after every fight.$"

PostBattle_Zigzagoon::
# 42 "data/maps/Hoenn1_1/scripts.pory"
	.string "Goon Goon!$"
