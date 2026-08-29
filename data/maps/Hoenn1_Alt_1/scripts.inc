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
	turnobject LOCALID_PLAYER, DIR_WEST
# 8 "data/maps/Hoenn1_Alt_1/scripts.pory"
	call AfterWarpIntoNewAct
	return


Hoenn1_Alt_1_EventScript_Boat::
# 13 "data/maps/Hoenn1_Alt_1/scripts.pory"
	lock
# 14 "data/maps/Hoenn1_Alt_1/scripts.pory"
	warp MAP_HOENN1_ALT_2, 32, 7
# 15 "data/maps/Hoenn1_Alt_1/scripts.pory"
	waitstate
# 16 "data/maps/Hoenn1_Alt_1/scripts.pory"
	release
	end

