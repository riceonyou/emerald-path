Hoenn4_1_MapScripts::
# 2 "data/maps/Hoenn4_1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Hoenn4_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Hoenn4_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 2 "data/maps/Hoenn4_1/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Hoenn4_1_ONFRAME
	.2byte 0


Hoenn4_1_ONFRAME::
# 6 "data/maps/Hoenn4_1/scripts.pory"
	setvar VAR_TEMP_1, 1
# 7 "data/maps/Hoenn4_1/scripts.pory"
	call AfterWarpIntoNewAct
	return

