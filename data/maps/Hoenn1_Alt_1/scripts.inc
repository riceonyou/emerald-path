Hoenn1_Alt_1_MapScripts::
# 2 "data/maps/Hoenn1_Alt_1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Hoenn1_Alt_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Hoenn1_Alt_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 2 "data/maps/Hoenn1_Alt_1/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Hoenn1_Alt_1_ONFRAME
	.2byte 0


Hoenn1_Alt_1_ONFRAME::
# 6 "data/maps/Hoenn1_Alt_1/scripts.pory"
	setvar VAR_TEMP_1, 1
# 7 "data/maps/Hoenn1_Alt_1/scripts.pory"
	call AfterWarpIntoNewAct
	return


Hoenn1_Alt_1_EventScript_Boat::
# 12 "data/maps/Hoenn1_Alt_1/scripts.pory"
	lock
# 13 "data/maps/Hoenn1_Alt_1/scripts.pory"
	warp MAP_HOENN1_ALT_2, 32, 7
# 14 "data/maps/Hoenn1_Alt_1/scripts.pory"
	waitstate
# 15 "data/maps/Hoenn1_Alt_1/scripts.pory"
	release
	end


Hoenn1_Alt_1_Sign::
# 21 "data/maps/Hoenn1_Alt_1/scripts.pory"
	lockall
# 23 "data/maps/Hoenn1_Alt_1/scripts.pory"
	msgbox Hoenn1_Alt_1_Sign_Text_0
# 24 "data/maps/Hoenn1_Alt_1/scripts.pory"
	waitmessage
# 26 "data/maps/Hoenn1_Alt_1/scripts.pory"
	releaseall
	return


Hoenn1_Alt_1_EventScript_Rattata::
# 30 "data/maps/Hoenn1_Alt_1/scripts.pory"
	trainerbattle_single TRAINER_RATTATA, Hoenn1_Alt_1_EventScript_Rattata_Text_0, Hoenn1_Alt_1_EventScript_Rattata_Text_1
# 31 "data/maps/Hoenn1_Alt_1/scripts.pory"
	msgbox Hoenn1_Alt_1_EventScript_Rattata_Text_2, MSGBOX_AUTOCLOSE
# 32 "data/maps/Hoenn1_Alt_1/scripts.pory"
	waitmessage
	end


Hoenn1_Alt_1_EventScript_BirchBag_1::
# 38 "data/maps/Hoenn1_Alt_1/scripts.pory"
	lockall
# 40 "data/maps/Hoenn1_Alt_1/scripts.pory"
	call Act1BirchBag
# 42 "data/maps/Hoenn1_Alt_1/scripts.pory"
	removeobject HOENN1_ALT_1_BIRCHBAG
# 43 "data/maps/Hoenn1_Alt_1/scripts.pory"
	setflag FLAG_BIRCHBAG_1_1
# 46 "data/maps/Hoenn1_Alt_1/scripts.pory"
	waitmessage
# 47 "data/maps/Hoenn1_Alt_1/scripts.pory"
	releaseall
	end


Hoenn1_Alt_1_EventScript_BirchBag_2::
# 54 "data/maps/Hoenn1_Alt_1/scripts.pory"
	lockall
# 56 "data/maps/Hoenn1_Alt_1/scripts.pory"
	call Act1BirchBag
# 58 "data/maps/Hoenn1_Alt_1/scripts.pory"
	removeobject HOENN1_ALT_2_BIRCHBAG
# 59 "data/maps/Hoenn1_Alt_1/scripts.pory"
	setflag FLAG_BIRCHBAG_1_2
# 62 "data/maps/Hoenn1_Alt_1/scripts.pory"
	waitmessage
# 63 "data/maps/Hoenn1_Alt_1/scripts.pory"
	releaseall
	end


Hoenn1_Alt_1_EventScript_BirchBag_3::
# 70 "data/maps/Hoenn1_Alt_1/scripts.pory"
	lockall
# 72 "data/maps/Hoenn1_Alt_1/scripts.pory"
	call Act1BirchBag
# 74 "data/maps/Hoenn1_Alt_1/scripts.pory"
	removeobject HOENN1_ALT_3_BIRCHBAG
# 75 "data/maps/Hoenn1_Alt_1/scripts.pory"
	setflag FLAG_BIRCHBAG_1_3
# 78 "data/maps/Hoenn1_Alt_1/scripts.pory"
	waitmessage
# 79 "data/maps/Hoenn1_Alt_1/scripts.pory"
	releaseall
	end


Hoenn1_Alt_1_House_Itemball_2::
# 85 "data/maps/Hoenn1_Alt_1/scripts.pory"
	lockall
# 86 "data/maps/Hoenn1_Alt_1/scripts.pory"
	call GiveCommonItem
# 87 "data/maps/Hoenn1_Alt_1/scripts.pory"
	removeobject HOENN1_ALT_1_ITEM_2
# 88 "data/maps/Hoenn1_Alt_1/scripts.pory"
	setflag FLAG_ITEM_1_2
# 89 "data/maps/Hoenn1_Alt_1/scripts.pory"
	releaseall
	end


Hoenn1_Alt_1_House_Itemball_3::
# 94 "data/maps/Hoenn1_Alt_1/scripts.pory"
	lockall
# 95 "data/maps/Hoenn1_Alt_1/scripts.pory"
	call GiveCommonItem
# 96 "data/maps/Hoenn1_Alt_1/scripts.pory"
	removeobject HOENN1_ALT_1_ITEM_3
# 97 "data/maps/Hoenn1_Alt_1/scripts.pory"
	setflag FLAG_ITEM_1_3
# 98 "data/maps/Hoenn1_Alt_1/scripts.pory"
	releaseall
	end


Hoenn1_Alt_1_Sign_Text_0:
# 23 "data/maps/Hoenn1_Alt_1/scripts.pory"
	.string "Talk to the boat to progress!$"

Hoenn1_Alt_1_EventScript_Rattata_Text_0:
# 30 "data/maps/Hoenn1_Alt_1/scripts.pory"
	.string "Hey there.\p"
	.string "...What am I doing here in Hoenn?\l"
	.string "Well I was born here... My parents moved\l"
	.string "here from Kanto.$"

Hoenn1_Alt_1_EventScript_Rattata_Text_1:
# 30 "data/maps/Hoenn1_Alt_1/scripts.pory"
	.string "Yeah you beat me.$"

Hoenn1_Alt_1_EventScript_Rattata_Text_2:
# 31 "data/maps/Hoenn1_Alt_1/scripts.pory"
	.string "Whatever.$"
