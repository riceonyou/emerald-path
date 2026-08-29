Elite4_Hoenn_1_MapScripts::
# 2 "data/maps/Elite4_Hoenn_1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Elite4_Hoenn_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Elite4_Hoenn_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 2 "data/maps/Elite4_Hoenn_1/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Elite4_Hoenn_1_ONFRAME
	.2byte 0


Elite4_Hoenn_1_ONFRAME::
# 6 "data/maps/Elite4_Hoenn_1/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


Elite4_Hoenn_1_EventScript_MSceptile::
# 12 "data/maps/Elite4_Hoenn_1/scripts.pory"
	trainerbattle_single TRAINER_MEGASCEPTILE, Elite4_Hoenn_1_EventScript_MSceptile_Text_0, Elite4_Hoenn_1_EventScript_MSceptile_Text_0
# 13 "data/maps/Elite4_Hoenn_1/scripts.pory"
	msgbox Elite4_Hoenn_1_EventScript_MSceptile_Text_0, MSGBOX_AUTOCLOSE
# 14 "data/maps/Elite4_Hoenn_1/scripts.pory"
	waitmessage
	end


Elite4_Hoenn_1_EventScript_MSceptile_Text_0:
# 12 "data/maps/Elite4_Hoenn_1/scripts.pory"
	.string "test.$"
