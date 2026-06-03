Hub1_MapScripts::
	.byte 0


Hub_Event_Script_Birch::
# 5 "data/maps/Hub1/scripts.pory"
	lockall
# 6 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_0, MSGBOX_YESNO
# 7 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 8 "data/maps/Hub1/scripts.pory"
	case YES, Hub_Event_Script_Birch_2
# 16 "data/maps/Hub1/scripts.pory"
	case NO, Hub_Event_Script_Birch_3
	return

Hub_Event_Script_Birch_2:
# 9 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_1
# 10 "data/maps/Hub1/scripts.pory"
	random 1
# 11 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 12 "data/maps/Hub1/scripts.pory"
	case 0, Hub_Event_Script_Birch_5
	return

Hub_Event_Script_Birch_3:
# 17 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_2
# 18 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Birch_5:
# 13 "data/maps/Hub1/scripts.pory"
	warp MAP_HOENN1_1, 1, 8
	return


Hub_Event_Script_Birch_Text_0:
# 6 "data/maps/Hub1/scripts.pory"
	.string "Would you like to start a run?$"

Hub_Event_Script_Birch_Text_1:
# 9 "data/maps/Hub1/scripts.pory"
	.string "Alright then! Here we go!$"

Hub_Event_Script_Birch_Text_2:
# 17 "data/maps/Hub1/scripts.pory"
	.string "Okay! Let me know when you're ready.$"
