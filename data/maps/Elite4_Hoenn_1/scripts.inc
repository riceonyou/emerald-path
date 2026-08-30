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


Elite4_Hoenn_1_Sign::
# 10 "data/maps/Elite4_Hoenn_1/scripts.pory"
	call KecShop_Sign
	return


Elite4_Hoenn_1_KecShop::
# 14 "data/maps/Elite4_Hoenn_1/scripts.pory"
	call KecShop
	return


Elite4_Hoenn_1_KecShop_Shiny::
# 18 "data/maps/Elite4_Hoenn_1/scripts.pory"
	call KecShop_Shiny
	return


Elite4_Hoenn_1_EventScript_MSceptile::
# 22 "data/maps/Elite4_Hoenn_1/scripts.pory"
	call RivalFight4
	return

