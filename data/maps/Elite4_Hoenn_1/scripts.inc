Elite4_Hoenn_1_MapScripts::
	.byte 0


Elite4_Hoenn_1_EventScript_MSceptile::
# 6 "data/maps/Elite4_Hoenn_1/scripts.pory"
	trainerbattle_single TRAINER_MEGASCEPTILE, Elite4_Hoenn_1_EventScript_MSceptile_Text_0, Elite4_Hoenn_1_EventScript_MSceptile_Text_0
# 7 "data/maps/Elite4_Hoenn_1/scripts.pory"
	msgbox Elite4_Hoenn_1_EventScript_MSceptile_Text_0, MSGBOX_AUTOCLOSE
# 8 "data/maps/Elite4_Hoenn_1/scripts.pory"
	waitmessage
	end


Elite4_Hoenn_1_EventScript_MSceptile_Text_0:
# 6 "data/maps/Elite4_Hoenn_1/scripts.pory"
	.string "test.$"
