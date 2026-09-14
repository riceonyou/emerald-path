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
	trainerbattle_single TRAINER_PELIPPER, Hoenn2_1_Pelipper_Text_0, Hoenn2_1_Pelipper_Text_1
# 13 "data/maps/Hoenn2_1/scripts.pory"
	msgbox Hoenn2_1_Pelipper_Text_2, MSGBOX_AUTOCLOSE
# 14 "data/maps/Hoenn2_1/scripts.pory"
	waitmessage
	end


Hoenn2_1_Wailmer::
# 21 "data/maps/Hoenn2_1/scripts.pory"
	trainerbattle_single TRAINER_WAILMER, Hoenn2_1_Wailmer_Text_0, Hoenn2_1_Wailmer_Text_0
# 22 "data/maps/Hoenn2_1/scripts.pory"
	msgbox Hoenn2_1_Wailmer_Text_0, MSGBOX_AUTOCLOSE
# 23 "data/maps/Hoenn2_1/scripts.pory"
	waitmessage
	end


Hoenn2_1_Sharpedo::
# 30 "data/maps/Hoenn2_1/scripts.pory"
	trainerbattle_single TRAINER_SHARPEDO, Hoenn2_1_Wailmer_Text_0, Hoenn2_1_Wailmer_Text_0
# 31 "data/maps/Hoenn2_1/scripts.pory"
	msgbox Hoenn2_1_Wailmer_Text_0, MSGBOX_AUTOCLOSE
# 32 "data/maps/Hoenn2_1/scripts.pory"
	waitmessage
	end


Hoenn2_1_Crawdaunt::
# 39 "data/maps/Hoenn2_1/scripts.pory"
	trainerbattle_single TRAINER_CRAWDAUNT, Hoenn2_1_Wailmer_Text_0, Hoenn2_1_Wailmer_Text_0
# 40 "data/maps/Hoenn2_1/scripts.pory"
	msgbox Hoenn2_1_Wailmer_Text_0, MSGBOX_AUTOCLOSE
# 41 "data/maps/Hoenn2_1/scripts.pory"
	waitmessage
	end


Hoenn2_1_Dusclops::
# 48 "data/maps/Hoenn2_1/scripts.pory"
	trainerbattle_single TRAINER_DUSCLOPS, Hoenn2_1_Wailmer_Text_0, Hoenn2_1_Wailmer_Text_0
# 49 "data/maps/Hoenn2_1/scripts.pory"
	msgbox Hoenn2_1_Wailmer_Text_0, MSGBOX_AUTOCLOSE
# 50 "data/maps/Hoenn2_1/scripts.pory"
	waitmessage
	end


Hoenn2_1_EventScript_BirchBag::
# 57 "data/maps/Hoenn2_1/scripts.pory"
	lockall
# 58 "data/maps/Hoenn2_1/scripts.pory"
	call Act2BirchBag
# 60 "data/maps/Hoenn2_1/scripts.pory"
	removeobject HOENN2_1_BIRCHBAG
# 61 "data/maps/Hoenn2_1/scripts.pory"
	setflag FLAG_BIRCHBAG_2_1
# 64 "data/maps/Hoenn2_1/scripts.pory"
	waitmessage
# 65 "data/maps/Hoenn2_1/scripts.pory"
	releaseall
	end


Hoenn2_2_EventScript_BirchBag::
# 72 "data/maps/Hoenn2_1/scripts.pory"
	lockall
# 73 "data/maps/Hoenn2_1/scripts.pory"
	call Act2BirchBag
# 75 "data/maps/Hoenn2_1/scripts.pory"
	removeobject HOENN2_2_BIRCHBAG
# 76 "data/maps/Hoenn2_1/scripts.pory"
	setflag FLAG_BIRCHBAG_2_2
# 79 "data/maps/Hoenn2_1/scripts.pory"
	waitmessage
# 80 "data/maps/Hoenn2_1/scripts.pory"
	releaseall
	end


Hoenn2_3_EventScript_BirchBag::
# 87 "data/maps/Hoenn2_1/scripts.pory"
	lockall
# 88 "data/maps/Hoenn2_1/scripts.pory"
	call Act2BirchBag
# 90 "data/maps/Hoenn2_1/scripts.pory"
	removeobject HOENN2_3_BIRCHBAG
# 91 "data/maps/Hoenn2_1/scripts.pory"
	setflag FLAG_BIRCHBAG_2_3
# 94 "data/maps/Hoenn2_1/scripts.pory"
	waitmessage
# 95 "data/maps/Hoenn2_1/scripts.pory"
	releaseall
	end


Hoenn2_4_Itemball_1::
# 101 "data/maps/Hoenn2_1/scripts.pory"
	lockall
# 102 "data/maps/Hoenn2_1/scripts.pory"
	call GiveCommonItem
# 103 "data/maps/Hoenn2_1/scripts.pory"
	removeobject Hoenn2_Ball1
# 104 "data/maps/Hoenn2_1/scripts.pory"
	setflag FLAG_ITEM_2_1
# 105 "data/maps/Hoenn2_1/scripts.pory"
	releaseall
	end


Hoenn2_4_Itemball_2::
# 110 "data/maps/Hoenn2_1/scripts.pory"
	lockall
# 111 "data/maps/Hoenn2_1/scripts.pory"
	call GiveUncommonItem
# 112 "data/maps/Hoenn2_1/scripts.pory"
	removeobject Hoenn2_Ball2
# 113 "data/maps/Hoenn2_1/scripts.pory"
	setflag FLAG_ITEM_2_2
# 114 "data/maps/Hoenn2_1/scripts.pory"
	releaseall
	end


Hoenn2_1_Pelipper_Text_0:
# 12 "data/maps/Hoenn2_1/scripts.pory"
	.string "I used to deliver mail for work, but I\n"
	.string "retired and took up battling!$"

Hoenn2_1_Pelipper_Text_1:
# 12 "data/maps/Hoenn2_1/scripts.pory"
	.string "That was exhilarating!$"

Hoenn2_1_Pelipper_Text_2:
# 13 "data/maps/Hoenn2_1/scripts.pory"
	.string "Fly you to the next path? No thanks!$"

Hoenn2_1_Wailmer_Text_0:
# 21 "data/maps/Hoenn2_1/scripts.pory"
	.string "test$"
