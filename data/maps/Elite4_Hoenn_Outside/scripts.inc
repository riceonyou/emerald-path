Elite4_Hoenn_Outside_MapScripts::
# 2 "data/maps/Elite4_Hoenn_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Elite4_Hoenn_Outside_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Elite4_Hoenn_Outside_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 2 "data/maps/Elite4_Hoenn_Outside/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Elite4_Hoenn_Outside_ONFRAME
	.2byte 0


Elite4_Hoenn_Outside_ONFRAME::
# 6 "data/maps/Elite4_Hoenn_Outside/scripts.pory"
	setvar VAR_TEMP_1, 1
# 7 "data/maps/Elite4_Hoenn_Outside/scripts.pory"
	call AfterWarpIntoNewAct
	return

