Hub1_MapScripts::
# 2 "data/maps/Hub1/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Hub1_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 3 "data/maps/Hub1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Hub1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Hub1_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 2 "data/maps/Hub1/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, HUB1_ONWARP
	.2byte 0

Hub1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Hub1/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, HUB1_ONFRAME
	.2byte 0


HUB1_ONWARP::
# 8 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


HUB1_ONFRAME::
# 13 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_2, 1
# 14 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SYS_NEW_GAME, HUB1_ONFRAME_1
	return

HUB1_ONFRAME_1:
# 15 "data/maps/Hub1/scripts.pory"
	lockall
# 16 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_ONFRAME_Text_0
# 17 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CANDY_JAR
# 18 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SYS_NEW_GAME
# 19 "data/maps/Hub1/scripts.pory"
	waitmessage
# 20 "data/maps/Hub1/scripts.pory"
	releaseall
	return


Hub_Event_Script_Birch::
# 25 "data/maps/Hub1/scripts.pory"
	lockall
# 26 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_0, MSGBOX_YESNO
# 27 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 28 "data/maps/Hub1/scripts.pory"
	case YES, Hub_Event_Script_Birch_2
# 36 "data/maps/Hub1/scripts.pory"
	case NO, Hub_Event_Script_Birch_3
	return

Hub_Event_Script_Birch_2:
# 29 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_1
# 30 "data/maps/Hub1/scripts.pory"
	random 1
# 31 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 32 "data/maps/Hub1/scripts.pory"
	case 0, Hub_Event_Script_Birch_5
	return

Hub_Event_Script_Birch_3:
# 37 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_2
# 38 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Birch_5:
# 33 "data/maps/Hub1/scripts.pory"
	warp MAP_HOENN1_1, 1, 8
	return


HUB1_ONFRAME_Text_0:
# 16 "data/maps/Hub1/scripts.pory"
	.string "Welcome to Pokemon Path!\lTo start a run, talk to\nProfessor Birch up ahead.$"

Hub_Event_Script_Birch_Text_0:
# 26 "data/maps/Hub1/scripts.pory"
	.string "Would you like to start a run?$"

Hub_Event_Script_Birch_Text_1:
# 29 "data/maps/Hub1/scripts.pory"
	.string "Alright then! Here we go!$"

Hub_Event_Script_Birch_Text_2:
# 37 "data/maps/Hub1/scripts.pory"
	.string "Okay! Let me know when you're ready.$"
