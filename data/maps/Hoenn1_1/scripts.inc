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
	playse SE_CLICK
# 15 "data/maps/Hoenn1_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 16 "data/maps/Hoenn1_1/scripts.pory"
	setvar VAR_0x8000, 33
# 17 "data/maps/Hoenn1_1/scripts.pory"
	special LoadBirchBagPoolById
# 18 "data/maps/Hoenn1_1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 19 "data/maps/Hoenn1_1/scripts.pory"
	waitstate
# 21 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_1_BIRCHBAG
# 22 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_BIRCHBAG_1_1
# 23 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_BirchBag_Text_0
# 25 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 26 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Hoenn1_2_EventScript_Zigzagoon::
# 33 "data/maps/Hoenn1_1/scripts.pory"
	trainerbattle_single TRAINER_ZIGZAGOON, Zigzagoon_Intro, Zigzagoon_Outro
# 34 "data/maps/Hoenn1_1/scripts.pory"
	msgbox PostBattle_Zigzagoon, MSGBOX_AUTOCLOSE
# 35 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
	end


Hoenn1_2_EventScript_BirchBag::
# 53 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 54 "data/maps/Hoenn1_1/scripts.pory"
	playse SE_CLICK
# 55 "data/maps/Hoenn1_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 56 "data/maps/Hoenn1_1/scripts.pory"
	setvar VAR_0x8000, 33
# 57 "data/maps/Hoenn1_1/scripts.pory"
	special LoadBirchBagPoolById
# 58 "data/maps/Hoenn1_1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 59 "data/maps/Hoenn1_1/scripts.pory"
	waitstate
# 61 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_2_BIRCHBAG
# 62 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_BIRCHBAG_1_2
# 63 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_BirchBag_Text_0
# 65 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 66 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Hoenn1_3_EventScript_BirchBag::
# 73 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 74 "data/maps/Hoenn1_1/scripts.pory"
	playse SE_CLICK
# 75 "data/maps/Hoenn1_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 76 "data/maps/Hoenn1_1/scripts.pory"
	setvar VAR_0x8000, 33
# 77 "data/maps/Hoenn1_1/scripts.pory"
	special LoadBirchBagPoolById
# 78 "data/maps/Hoenn1_1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 79 "data/maps/Hoenn1_1/scripts.pory"
	waitstate
# 81 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_3_BIRCHBAG
# 82 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_BIRCHBAG_1_3
# 83 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_BirchBag_Text_0
# 85 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 86 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Hoenn1_1_Itemball_1::
# 92 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 93 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 1
# 94 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_1_ITEM
# 95 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_ITEM_1_1
# 96 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Hoenn1_1_Itemball_2::
# 101 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 102 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
# 103 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_2_ITEM
# 104 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_ITEM_1_2
# 105 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Hoenn1_1_EventScript_BirchBag_Text_0:
# 23 "data/maps/Hoenn1_1/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

Zigzagoon_Intro::
# 39 "data/maps/Hoenn1_1/scripts.pory"
	.string "I'm Zigzagoon. I like to go in zigzags.$"

Zigzagoon_Outro::
# 43 "data/maps/Hoenn1_1/scripts.pory"
	.string "Goon :($"

PostBattle_Zigzagoon::
# 47 "data/maps/Hoenn1_1/scripts.pory"
	.string "Goon Goon!$"
