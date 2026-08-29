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
	turnobject LOCALID_PLAYER, DIR_EAST
# 8 "data/maps/Hoenn1_1/scripts.pory"
	call AfterWarpIntoNewAct
	return


Hoenn1_1_EventScript_BirchBag::
# 13 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 15 "data/maps/Hoenn1_1/scripts.pory"
	playse SE_CLICK
# 16 "data/maps/Hoenn1_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 17 "data/maps/Hoenn1_1/scripts.pory"
	setvar VAR_0x8000, 33
# 18 "data/maps/Hoenn1_1/scripts.pory"
	special LoadBirchBagPoolById
# 19 "data/maps/Hoenn1_1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 20 "data/maps/Hoenn1_1/scripts.pory"
	waitstate
# 22 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_1_BIRCHBAG
# 23 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_BIRCHBAG_1_1
# 24 "data/maps/Hoenn1_1/scripts.pory"
	playfanfare MUS_EVOLVED
# 25 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_BirchBag_Text_0
# 27 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 28 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Hoenn1_2_EventScript_Zigzagoon::
# 35 "data/maps/Hoenn1_1/scripts.pory"
	trainerbattle_single TRAINER_ZIGZAGOON, Zigzagoon_Intro, Zigzagoon_Outro
# 36 "data/maps/Hoenn1_1/scripts.pory"
	msgbox PostBattle_Zigzagoon, MSGBOX_AUTOCLOSE
# 37 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
	end


Hoenn1_2_EventScript_BirchBag::
# 55 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 56 "data/maps/Hoenn1_1/scripts.pory"
	playse SE_CLICK
# 57 "data/maps/Hoenn1_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 58 "data/maps/Hoenn1_1/scripts.pory"
	setvar VAR_0x8000, 33
# 59 "data/maps/Hoenn1_1/scripts.pory"
	special LoadBirchBagPoolById
# 60 "data/maps/Hoenn1_1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 61 "data/maps/Hoenn1_1/scripts.pory"
	waitstate
# 63 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_2_BIRCHBAG
# 64 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_BIRCHBAG_1_2
# 65 "data/maps/Hoenn1_1/scripts.pory"
	playfanfare MUS_EVOLVED
# 66 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_BirchBag_Text_0
# 68 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 69 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Hoenn1_3_EventScript_BirchBag::
# 76 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 77 "data/maps/Hoenn1_1/scripts.pory"
	playse SE_CLICK
# 78 "data/maps/Hoenn1_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 79 "data/maps/Hoenn1_1/scripts.pory"
	setvar VAR_0x8000, 33
# 80 "data/maps/Hoenn1_1/scripts.pory"
	special LoadBirchBagPoolById
# 81 "data/maps/Hoenn1_1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 82 "data/maps/Hoenn1_1/scripts.pory"
	waitstate
# 84 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_3_BIRCHBAG
# 85 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_BIRCHBAG_1_3
# 86 "data/maps/Hoenn1_1/scripts.pory"
	playfanfare MUS_EVOLVED
# 87 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_BirchBag_Text_0
# 89 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 90 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Hoenn1_1_Itemball_1::
# 96 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 97 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 1
# 98 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_1_ITEM
# 99 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_ITEM_1_1
# 100 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Hoenn1_1_Itemball_2::
# 105 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 106 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
# 107 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_2_ITEM
# 108 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_ITEM_1_2
# 109 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


Hoenn1_1_EventScript_BirchBag_Text_0:
# 25 "data/maps/Hoenn1_1/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

Zigzagoon_Intro::
# 41 "data/maps/Hoenn1_1/scripts.pory"
	.string "I'm Zigzagoon. I like to go in zigzags.$"

Zigzagoon_Outro::
# 45 "data/maps/Hoenn1_1/scripts.pory"
	.string "Zagoon :($"

PostBattle_Zigzagoon::
# 49 "data/maps/Hoenn1_1/scripts.pory"
	.string "Goon Goon!$"
