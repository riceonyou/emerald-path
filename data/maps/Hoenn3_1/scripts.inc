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
	call Act3BirchBag
# 36 "data/maps/Hoenn3_1/scripts.pory"
	removeobject HOENN3_1_BIRCHBAG
# 37 "data/maps/Hoenn3_1/scripts.pory"
	setflag FLAG_BIRCHBAG_3_1
# 40 "data/maps/Hoenn3_1/scripts.pory"
	waitmessage
# 41 "data/maps/Hoenn3_1/scripts.pory"
	releaseall
	end


Hoenn3_5_EventScript_BirchBag::
# 48 "data/maps/Hoenn3_1/scripts.pory"
	lockall
# 49 "data/maps/Hoenn3_1/scripts.pory"
	call Act3BirchBag
# 51 "data/maps/Hoenn3_1/scripts.pory"
	removeobject HOENN3_5_BIRCHBAG
# 52 "data/maps/Hoenn3_1/scripts.pory"
	setflag FLAG_BIRCHBAG_3_5
# 55 "data/maps/Hoenn3_1/scripts.pory"
	waitmessage
# 56 "data/maps/Hoenn3_1/scripts.pory"
	releaseall
	end


Hoenn3_1_Vibrava_Text_0:
# 11 "data/maps/Hoenn3_1/scripts.pory"
	.string "test$"
