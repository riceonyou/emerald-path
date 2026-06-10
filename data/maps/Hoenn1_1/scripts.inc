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


Hoenn1_2_EventScript_Treecko::
# 47 "data/maps/Hoenn1_1/scripts.pory"
	trainerbattle_single TRAINER_TREECKO, Treecko_Intro, Treecko_Outro
# 48 "data/maps/Hoenn1_1/scripts.pory"
	msgbox PostBattle_Treecko, MSGBOX_AUTOCLOSE
# 49 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
	end


Hoenn1_2_EventScript_Zigzagoon::
# 68 "data/maps/Hoenn1_1/scripts.pory"
	trainerbattle_single TRAINER_ZIGZAGOON, Zigzagoon_Intro, Zigzagoon_Outro
# 69 "data/maps/Hoenn1_1/scripts.pory"
	msgbox PostBattle_Zigzagoon, MSGBOX_AUTOCLOSE
# 70 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
	end


Hoenn1_2_EventScript_BirchBag::
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
	removeobject HOENN1_2_BIRCHBAG
# 98 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_BIRCHBAG_1_2
# 99 "data/maps/Hoenn1_1/scripts.pory"
	playfanfare MUS_EVOLVED
# 100 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_0
# 102 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 103 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Hoenn1_1_EventScript_Pokeball_Text_0:
# 36 "data/maps/Hoenn1_1/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

Treecko_Intro::
# 54 "data/maps/Hoenn1_1/scripts.pory"
	.string "Yo I'm Treecko. Grrr.$"

Treecko_Outro::
# 58 "data/maps/Hoenn1_1/scripts.pory"
	.string "Damn you got me.$"

PostBattle_Treecko::
# 62 "data/maps/Hoenn1_1/scripts.pory"
	.string "I'll get you next time.$"

Zigzagoon_Intro::
# 75 "data/maps/Hoenn1_1/scripts.pory"
	.string "I'm Zigzagoon. I like to go in zigzags.$"

Zigzagoon_Outro::
# 79 "data/maps/Hoenn1_1/scripts.pory"
	.string "Zagoon :($"

PostBattle_Zigzagoon::
# 83 "data/maps/Hoenn1_1/scripts.pory"
	.string "Goon Goon!$"
