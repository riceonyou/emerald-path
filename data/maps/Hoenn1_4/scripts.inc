Hoenn1_4_MapScripts::
	.byte 0


Hoenn1_4_EventScript_Wingull::
# 6 "data/maps/Hoenn1_4/scripts.pory"
	trainerbattle_single TRAINER_HOENN1_4_WINGULL, Hoenn1_4_EventScript_Wingull_Text_0, Hoenn1_4_EventScript_Wingull_Text_1
# 7 "data/maps/Hoenn1_4/scripts.pory"
	msgbox Hoenn1_4_EventScript_Wingull_Text_2, MSGBOX_AUTOCLOSE
# 8 "data/maps/Hoenn1_4/scripts.pory"
	waitmessage
	end


Hoenn1_4_EventScript_Wingull_Text_0:
# 6 "data/maps/Hoenn1_4/scripts.pory"
	.string "Howdy. I'm wingull. Let's battle!$"

Hoenn1_4_EventScript_Wingull_Text_1:
# 6 "data/maps/Hoenn1_4/scripts.pory"
	.string "More like losegull. Squawk :($"

Hoenn1_4_EventScript_Wingull_Text_2:
# 7 "data/maps/Hoenn1_4/scripts.pory"
	.string "Check out this cool flying trick!$"
