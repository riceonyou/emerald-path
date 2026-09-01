Hoenn3_1_MapScripts::
# 2 "data/maps/Hoenn3_1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Hoenn3_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Hoenn3_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 2 "data/maps/Hoenn3_1/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Hoenn3_1_ONFRAME
	.2byte 0


Hoenn3_1_ONFRAME::
# 6 "data/maps/Hoenn3_1/scripts.pory"
	setvar VAR_TEMP_1, 1
# 7 "data/maps/Hoenn3_1/scripts.pory"
	call AfterWarpIntoNewAct
	return


Hoenn3_1_Vibrava::
# 11 "data/maps/Hoenn3_1/scripts.pory"
	trainerbattle_single TRAINER_FLYGON, Hoenn3_1_Vibrava_Text_0, Hoenn3_1_Vibrava_Text_0
# 12 "data/maps/Hoenn3_1/scripts.pory"
	msgbox Hoenn3_1_Vibrava_Text_0, MSGBOX_AUTOCLOSE
# 13 "data/maps/Hoenn3_1/scripts.pory"
	waitmessage
	end


Hoenn3_1_Cacturne::
# 18 "data/maps/Hoenn3_1/scripts.pory"
	trainerbattle_single TRAINER_CACTURNE, Hoenn3_1_Vibrava_Text_0, Hoenn3_1_Vibrava_Text_0
# 19 "data/maps/Hoenn3_1/scripts.pory"
	msgbox Hoenn3_1_Vibrava_Text_0, MSGBOX_AUTOCLOSE
# 20 "data/maps/Hoenn3_1/scripts.pory"
	waitmessage
	end


Hoenn3_1_Claydol::
# 25 "data/maps/Hoenn3_1/scripts.pory"
	trainerbattle_single TRAINER_CLAYDOL, Hoenn3_1_Vibrava_Text_0, Hoenn3_1_Vibrava_Text_0
# 26 "data/maps/Hoenn3_1/scripts.pory"
	msgbox Hoenn3_1_Vibrava_Text_0, MSGBOX_AUTOCLOSE
# 27 "data/maps/Hoenn3_1/scripts.pory"
	waitmessage
	end


Hoenn3_1_EventScript_BirchBag::
# 33 "data/maps/Hoenn3_1/scripts.pory"
	lockall
# 34 "data/maps/Hoenn3_1/scripts.pory"
	playse SE_CLICK
# 35 "data/maps/Hoenn3_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 36 "data/maps/Hoenn3_1/scripts.pory"
	setvar VAR_0x8000, 35
# 37 "data/maps/Hoenn3_1/scripts.pory"
	special LoadBirchBagPoolById
# 38 "data/maps/Hoenn3_1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 39 "data/maps/Hoenn3_1/scripts.pory"
	waitstate
# 41 "data/maps/Hoenn3_1/scripts.pory"
	removeobject HOENN3_1_BIRCHBAG
# 42 "data/maps/Hoenn3_1/scripts.pory"
	setflag FLAG_BIRCHBAG_3_1
# 43 "data/maps/Hoenn3_1/scripts.pory"
	msgbox Hoenn3_1_EventScript_BirchBag_Text_0
# 45 "data/maps/Hoenn3_1/scripts.pory"
	waitmessage
# 46 "data/maps/Hoenn3_1/scripts.pory"
	releaseall
	end


Hoenn3_1_Vibrava_Text_0:
# 11 "data/maps/Hoenn3_1/scripts.pory"
	.string "test$"

Hoenn3_1_EventScript_BirchBag_Text_0:
# 43 "data/maps/Hoenn3_1/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"
