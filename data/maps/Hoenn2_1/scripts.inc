Hoenn2_1_MapScripts::
# 2 "data/maps/Hoenn2_1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Hoenn2_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Hoenn2_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 2 "data/maps/Hoenn2_1/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Hoenn2_1_ONFRAME
	.2byte 0


Hoenn2_1_ONFRAME::
# 6 "data/maps/Hoenn2_1/scripts.pory"
	setvar VAR_TEMP_1, 1
# 7 "data/maps/Hoenn2_1/scripts.pory"
	call AfterWarpIntoNewAct
	return


Hoenn2_1_Pelipper::
# 12 "data/maps/Hoenn2_1/scripts.pory"
	trainerbattle_single TRAINER_PELIPPER, Hoenn2_1_Pelipper_Text_0, Hoenn2_1_Pelipper_Text_0
# 13 "data/maps/Hoenn2_1/scripts.pory"
	msgbox Hoenn2_1_Pelipper_Text_0, MSGBOX_AUTOCLOSE
# 14 "data/maps/Hoenn2_1/scripts.pory"
	waitmessage
	end


Hoenn2_1_Wailmer::
# 21 "data/maps/Hoenn2_1/scripts.pory"
	trainerbattle_single TRAINER_WAILMER, Hoenn2_1_Pelipper_Text_0, Hoenn2_1_Pelipper_Text_0
# 22 "data/maps/Hoenn2_1/scripts.pory"
	msgbox Hoenn2_1_Pelipper_Text_0, MSGBOX_AUTOCLOSE
# 23 "data/maps/Hoenn2_1/scripts.pory"
	waitmessage
	end


Hoenn2_1_Sharpedo::
# 30 "data/maps/Hoenn2_1/scripts.pory"
	trainerbattle_single TRAINER_SHARPEDO, Hoenn2_1_Pelipper_Text_0, Hoenn2_1_Pelipper_Text_0
# 31 "data/maps/Hoenn2_1/scripts.pory"
	msgbox Hoenn2_1_Pelipper_Text_0, MSGBOX_AUTOCLOSE
# 32 "data/maps/Hoenn2_1/scripts.pory"
	waitmessage
	end


Hoenn2_1_Crawdaunt::
# 39 "data/maps/Hoenn2_1/scripts.pory"
	trainerbattle_single TRAINER_CRAWDAUNT, Hoenn2_1_Pelipper_Text_0, Hoenn2_1_Pelipper_Text_0
# 40 "data/maps/Hoenn2_1/scripts.pory"
	msgbox Hoenn2_1_Pelipper_Text_0, MSGBOX_AUTOCLOSE
# 41 "data/maps/Hoenn2_1/scripts.pory"
	waitmessage
	end


Hoenn2_1_EventScript_BirchBag::
# 48 "data/maps/Hoenn2_1/scripts.pory"
	lockall
# 49 "data/maps/Hoenn2_1/scripts.pory"
	playse SE_CLICK
# 50 "data/maps/Hoenn2_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 51 "data/maps/Hoenn2_1/scripts.pory"
	setvar VAR_0x8000, 34
# 52 "data/maps/Hoenn2_1/scripts.pory"
	special LoadBirchBagPoolById
# 53 "data/maps/Hoenn2_1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 54 "data/maps/Hoenn2_1/scripts.pory"
	waitstate
# 56 "data/maps/Hoenn2_1/scripts.pory"
	removeobject HOENN2_1_BIRCHBAG
# 57 "data/maps/Hoenn2_1/scripts.pory"
	setflag FLAG_BIRCHBAG_2_1
# 58 "data/maps/Hoenn2_1/scripts.pory"
	playfanfare MUS_EVOLVED
# 59 "data/maps/Hoenn2_1/scripts.pory"
	msgbox Hoenn2_1_EventScript_BirchBag_Text_0
# 61 "data/maps/Hoenn2_1/scripts.pory"
	waitmessage
# 62 "data/maps/Hoenn2_1/scripts.pory"
	releaseall
	end


Hoenn2_2_EventScript_BirchBag::
# 69 "data/maps/Hoenn2_1/scripts.pory"
	lockall
# 70 "data/maps/Hoenn2_1/scripts.pory"
	playse SE_CLICK
# 71 "data/maps/Hoenn2_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 72 "data/maps/Hoenn2_1/scripts.pory"
	setvar VAR_0x8000, 34
# 73 "data/maps/Hoenn2_1/scripts.pory"
	special LoadBirchBagPoolById
# 74 "data/maps/Hoenn2_1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 75 "data/maps/Hoenn2_1/scripts.pory"
	waitstate
# 77 "data/maps/Hoenn2_1/scripts.pory"
	removeobject HOENN2_2_BIRCHBAG
# 78 "data/maps/Hoenn2_1/scripts.pory"
	setflag FLAG_BIRCHBAG_2_2
# 79 "data/maps/Hoenn2_1/scripts.pory"
	playfanfare MUS_EVOLVED
# 80 "data/maps/Hoenn2_1/scripts.pory"
	msgbox Hoenn2_1_EventScript_BirchBag_Text_0
# 82 "data/maps/Hoenn2_1/scripts.pory"
	waitmessage
# 83 "data/maps/Hoenn2_1/scripts.pory"
	releaseall
	end


Hoenn2_3_EventScript_BirchBag::
# 90 "data/maps/Hoenn2_1/scripts.pory"
	lockall
# 91 "data/maps/Hoenn2_1/scripts.pory"
	playse SE_CLICK
# 92 "data/maps/Hoenn2_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 93 "data/maps/Hoenn2_1/scripts.pory"
	setvar VAR_0x8000, 34
# 94 "data/maps/Hoenn2_1/scripts.pory"
	special LoadBirchBagPoolById
# 95 "data/maps/Hoenn2_1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 96 "data/maps/Hoenn2_1/scripts.pory"
	waitstate
# 98 "data/maps/Hoenn2_1/scripts.pory"
	removeobject HOENN2_3_BIRCHBAG
# 99 "data/maps/Hoenn2_1/scripts.pory"
	setflag FLAG_BIRCHBAG_2_3
# 100 "data/maps/Hoenn2_1/scripts.pory"
	playfanfare MUS_EVOLVED
# 101 "data/maps/Hoenn2_1/scripts.pory"
	msgbox Hoenn2_1_EventScript_BirchBag_Text_0
# 103 "data/maps/Hoenn2_1/scripts.pory"
	waitmessage
# 104 "data/maps/Hoenn2_1/scripts.pory"
	releaseall
	end


Hoenn2_1_Pelipper_Text_0:
# 12 "data/maps/Hoenn2_1/scripts.pory"
	.string "test$"

Hoenn2_1_EventScript_BirchBag_Text_0:
# 59 "data/maps/Hoenn2_1/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"
