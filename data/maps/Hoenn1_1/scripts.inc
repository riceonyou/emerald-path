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
	playfanfare MUS_EVOLVED
# 24 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_BirchBag_Text_0
# 26 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 27 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Hoenn1_2_EventScript_Zigzagoon::
# 34 "data/maps/Hoenn1_1/scripts.pory"
	trainerbattle_single TRAINER_ZIGZAGOON, Zigzagoon_Intro, Zigzagoon_Outro
# 35 "data/maps/Hoenn1_1/scripts.pory"
	msgbox PostBattle_Zigzagoon, MSGBOX_AUTOCLOSE
# 36 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
	end


Hoenn1_2_EventScript_BirchBag::
# 54 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 55 "data/maps/Hoenn1_1/scripts.pory"
	playse SE_CLICK
# 56 "data/maps/Hoenn1_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 57 "data/maps/Hoenn1_1/scripts.pory"
	setvar VAR_0x8000, 33
# 58 "data/maps/Hoenn1_1/scripts.pory"
	special LoadBirchBagPoolById
# 59 "data/maps/Hoenn1_1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 60 "data/maps/Hoenn1_1/scripts.pory"
	waitstate
# 62 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_2_BIRCHBAG
# 63 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_BIRCHBAG_1_2
# 64 "data/maps/Hoenn1_1/scripts.pory"
	playfanfare MUS_EVOLVED
# 65 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_BirchBag_Text_0
# 67 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 68 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Hoenn1_3_EventScript_BirchBag::
# 75 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 76 "data/maps/Hoenn1_1/scripts.pory"
	playse SE_CLICK
# 77 "data/maps/Hoenn1_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 78 "data/maps/Hoenn1_1/scripts.pory"
	setvar VAR_0x8000, 33
# 79 "data/maps/Hoenn1_1/scripts.pory"
	special LoadBirchBagPoolById
# 80 "data/maps/Hoenn1_1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 81 "data/maps/Hoenn1_1/scripts.pory"
	waitstate
# 83 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_3_BIRCHBAG
# 84 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_BIRCHBAG_1_3
# 85 "data/maps/Hoenn1_1/scripts.pory"
	playfanfare MUS_EVOLVED
# 86 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_BirchBag_Text_0
# 88 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 89 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Hoenn1_1_Itemball_1::
# 95 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 96 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 1
# 97 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_1_ITEM
# 98 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_ITEM_1_1
# 99 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Hoenn1_1_Itemball_2::
# 104 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 105 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
# 106 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_2_ITEM
# 107 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_ITEM_1_2
# 108 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Hoenn1_1_EventScript_BirchBag_Text_0:
# 24 "data/maps/Hoenn1_1/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

Zigzagoon_Intro::
# 40 "data/maps/Hoenn1_1/scripts.pory"
	.string "I'm Zigzagoon. I like to go in zigzags.$"

Zigzagoon_Outro::
# 44 "data/maps/Hoenn1_1/scripts.pory"
	.string "Goon :($"

PostBattle_Zigzagoon::
# 48 "data/maps/Hoenn1_1/scripts.pory"
	.string "Goon Goon!$"
