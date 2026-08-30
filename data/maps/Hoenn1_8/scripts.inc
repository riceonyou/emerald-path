Hoenn1_8_MapScripts::
	.byte 0


Hoenn1_8_EventScript_Taillow::
# 6 "data/maps/Hoenn1_8/scripts.pory"
	trainerbattle_single TRAINER_TAILLOW, Hoenn1_8_EventScript_Taillow_Text_0, Hoenn1_8_EventScript_Taillow_Text_0
# 7 "data/maps/Hoenn1_8/scripts.pory"
	msgbox Hoenn1_8_EventScript_Taillow_Text_0, MSGBOX_AUTOCLOSE
# 8 "data/maps/Hoenn1_8/scripts.pory"
	waitmessage
	end


Hoenn1_8_EventScript_Whismur::
# 15 "data/maps/Hoenn1_8/scripts.pory"
	trainerbattle_single TRAINER_WHISMUR, Hoenn1_8_EventScript_Taillow_Text_0, Hoenn1_8_EventScript_Taillow_Text_0
# 16 "data/maps/Hoenn1_8/scripts.pory"
	msgbox Hoenn1_8_EventScript_Taillow_Text_0, MSGBOX_AUTOCLOSE
# 17 "data/maps/Hoenn1_8/scripts.pory"
	waitmessage
	end


Hoenn1_8_EventScript_Nosepass::
# 23 "data/maps/Hoenn1_8/scripts.pory"
	trainerbattle_single TRAINER_LEADER_NOSEPASS, Hoenn1_8_EventScript_Taillow_Text_0, Hoenn1_8_EventScript_Taillow_Text_0, Hoenn1_8_EventScript_Nosepass_Defeated
# 24 "data/maps/Hoenn1_8/scripts.pory"
	msgbox Hoenn1_8_EventScript_Taillow_Text_0, MSGBOX_AUTOCLOSE
# 25 "data/maps/Hoenn1_8/scripts.pory"
	waitmessage
	end


Hoenn1_8_EventScript_Nosepass_Defeated::
# 30 "data/maps/Hoenn1_8/scripts.pory"
	setflag FLAG_DEFEATED_PATH_LEADER
# 31 "data/maps/Hoenn1_8/scripts.pory"
	msgbox Hoenn1_8_EventScript_Taillow_Text_0, MSGBOX_AUTOCLOSE
# 32 "data/maps/Hoenn1_8/scripts.pory"
	waitmessage
	end


EventScript_AbraTeleport1::
# 37 "data/maps/Hoenn1_8/scripts.pory"
	call AbraTeleport
	return


Hoenn1_8_EventScript_Taillow_Text_0:
# 6 "data/maps/Hoenn1_8/scripts.pory"
	.string "test.$"
