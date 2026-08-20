Hoenn1_Alt_1_MapScripts::
# 2 "data/maps/Hoenn1_Alt_1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Hoenn1_1_OnLoad
# 3 "data/maps/Hoenn1_Alt_1/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Hoenn1_Alt_1_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 4 "data/maps/Hoenn1_Alt_1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Hoenn1_Alt_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Hoenn1_Alt_1_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/Hoenn1_Alt_1/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Hoenn1_1_ONWARP
	.2byte 0

Hoenn1_Alt_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Hoenn1_Alt_1/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, Hoenn1_1_ONFRAME
	.2byte 0


Hoenn1_Alt_1_ONWARP::
# 8 "data/maps/Hoenn1_Alt_1/scripts.pory"
	setvar VAR_TEMP_1, 1
# 9 "data/maps/Hoenn1_Alt_1/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
	return


Hoenn1_Alt_1_ONFRAME::
# 13 "data/maps/Hoenn1_Alt_1/scripts.pory"
	setvar VAR_TEMP_2, 1
	return


Hoenn1_Alt_1_OnLoad::
# 17 "data/maps/Hoenn1_Alt_1/scripts.pory"
	setvar VAR_CURRENT_ACT, 1
# 18 "data/maps/Hoenn1_Alt_1/scripts.pory"
	special UpdateLevelCap
	return


Hoenn1_Alt_1_EventScript_Boat::
# 23 "data/maps/Hoenn1_Alt_1/scripts.pory"
	lock
# 24 "data/maps/Hoenn1_Alt_1/scripts.pory"
	warp MAP_HOENN1_ALT_2, 32, 7
# 25 "data/maps/Hoenn1_Alt_1/scripts.pory"
	waitstate
# 26 "data/maps/Hoenn1_Alt_1/scripts.pory"
	release
	end

