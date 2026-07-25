Hoenn1_1_MapScripts::
# 2 "data/maps/Hoenn1_1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Hoenn1_1_OnLoad
# 3 "data/maps/Hoenn1_1/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Hoenn1_1_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 4 "data/maps/Hoenn1_1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Hoenn1_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Hoenn1_1_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/Hoenn1_1/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Hoenn1_1_ONWARP
	.2byte 0

Hoenn1_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Hoenn1_1/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, Hoenn1_1_ONFRAME
	.2byte 0


Hoenn1_1_ONWARP::
# 8 "data/maps/Hoenn1_1/scripts.pory"
	setvar VAR_TEMP_1, 1
# 9 "data/maps/Hoenn1_1/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	return


Hoenn1_1_ONFRAME::
# 13 "data/maps/Hoenn1_1/scripts.pory"
	setvar VAR_TEMP_2, 1
	return


Hoenn1_1_OnLoad::
# 17 "data/maps/Hoenn1_1/scripts.pory"
	setvar VAR_CURRENT_ACT, 1
# 18 "data/maps/Hoenn1_1/scripts.pory"
	special UpdateLevelCap
	return


Hoenn1_1_EventScript_Pokeball::
# 24 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 26 "data/maps/Hoenn1_1/scripts.pory"
	playse SE_CLICK
# 27 "data/maps/Hoenn1_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 28 "data/maps/Hoenn1_1/scripts.pory"
	setvar VAR_0x8000, 0
# 29 "data/maps/Hoenn1_1/scripts.pory"
	special LoadBirchBagPoolById
# 30 "data/maps/Hoenn1_1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 31 "data/maps/Hoenn1_1/scripts.pory"
	waitstate
# 33 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_1_BIRCHBAG
# 34 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_BIRCHBAG_1_1
# 35 "data/maps/Hoenn1_1/scripts.pory"
	playfanfare MUS_EVOLVED
# 36 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_0
# 38 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 39 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Hoenn1_2_EventScript_Zigzagoon::
# 47 "data/maps/Hoenn1_1/scripts.pory"
	trainerbattle_single TRAINER_ZIGZAGOON, Zigzagoon_Intro, Zigzagoon_Outro
# 48 "data/maps/Hoenn1_1/scripts.pory"
	msgbox PostBattle_Zigzagoon, MSGBOX_AUTOCLOSE
# 49 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
	end


Hoenn1_2_EventScript_BirchBag::
# 68 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 69 "data/maps/Hoenn1_1/scripts.pory"
	playse SE_CLICK
# 70 "data/maps/Hoenn1_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 71 "data/maps/Hoenn1_1/scripts.pory"
	setvar VAR_0x8000, 1
# 72 "data/maps/Hoenn1_1/scripts.pory"
	special LoadBirchBagPoolById
# 73 "data/maps/Hoenn1_1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 74 "data/maps/Hoenn1_1/scripts.pory"
	waitstate
# 76 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_2_BIRCHBAG
# 77 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_BIRCHBAG_1_2
# 78 "data/maps/Hoenn1_1/scripts.pory"
	playfanfare MUS_EVOLVED
# 79 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_0
# 81 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 82 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Hoenn1_3_EventScript_BirchBag::
# 89 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 90 "data/maps/Hoenn1_1/scripts.pory"
	playse SE_CLICK
# 91 "data/maps/Hoenn1_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 92 "data/maps/Hoenn1_1/scripts.pory"
	setvar VAR_0x8000, 1
# 93 "data/maps/Hoenn1_1/scripts.pory"
	special LoadBirchBagPoolById
# 94 "data/maps/Hoenn1_1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 95 "data/maps/Hoenn1_1/scripts.pory"
	waitstate
# 97 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_3_BIRCHBAG
# 98 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_BIRCHBAG_1_3
# 99 "data/maps/Hoenn1_1/scripts.pory"
	playfanfare MUS_EVOLVED
# 100 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_0
# 102 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 103 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Hoenn1_1_Itemball_1::
# 109 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 110 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 10
# 111 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_1_ITEM
# 112 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_ITEM_1_1
# 113 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Hoenn1_1_Itemball_2::
# 118 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 119 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_LUM_BERRY, 5
# 120 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_2_ITEM
# 121 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_ITEM_1_2
# 122 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Hoenn1_1_EventScript_Pokeball_Text_0:
# 36 "data/maps/Hoenn1_1/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

Zigzagoon_Intro::
# 54 "data/maps/Hoenn1_1/scripts.pory"
	.string "I'm Zigzagoon. I like to go in zigzags.$"

Zigzagoon_Outro::
# 58 "data/maps/Hoenn1_1/scripts.pory"
	.string "Zagoon :($"

PostBattle_Zigzagoon::
# 62 "data/maps/Hoenn1_1/scripts.pory"
	.string "Goon Goon!$"
