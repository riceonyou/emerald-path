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
	setflag FLAG_DEFEATED_PATH_1_LEADER
# 31 "data/maps/Hoenn1_8/scripts.pory"
	msgbox Hoenn1_8_EventScript_Taillow_Text_0, MSGBOX_AUTOCLOSE
# 32 "data/maps/Hoenn1_8/scripts.pory"
	waitmessage
	end


EventScript_AbraTeleport1::
# 37 "data/maps/Hoenn1_8/scripts.pory"
	lockall
# 38 "data/maps/Hoenn1_8/scripts.pory"
	goto_if_unset FLAG_DEFEATED_PATH_1_LEADER, EventScript_AbraTeleport1_1
# 43 "data/maps/Hoenn1_8/scripts.pory"
	msgbox EventScript_AbraTeleport1_Text_1, MSGBOX_YESNO
# 44 "data/maps/Hoenn1_8/scripts.pory"
	switch VAR_RESULT
# 45 "data/maps/Hoenn1_8/scripts.pory"
	case YES, EventScript_AbraTeleport1_5
# 53 "data/maps/Hoenn1_8/scripts.pory"
	case NO, EventScript_AbraTeleport1_6
	return

EventScript_AbraTeleport1_1:
# 39 "data/maps/Hoenn1_8/scripts.pory"
	msgbox EventScript_AbraTeleport1_Text_0
# 40 "data/maps/Hoenn1_8/scripts.pory"
	releaseall
	return

EventScript_AbraTeleport1_5:
# 46 "data/maps/Hoenn1_8/scripts.pory"
	msgbox EventScript_AbraTeleport1_Text_2
# 47 "data/maps/Hoenn1_8/scripts.pory"
	random 1
# 48 "data/maps/Hoenn1_8/scripts.pory"
	switch VAR_RESULT
# 49 "data/maps/Hoenn1_8/scripts.pory"
	case 0, EventScript_AbraTeleport1_8
	return

EventScript_AbraTeleport1_6:
# 54 "data/maps/Hoenn1_8/scripts.pory"
	msgbox EventScript_AbraTeleport1_Text_3
# 55 "data/maps/Hoenn1_8/scripts.pory"
	releaseall
	return

EventScript_AbraTeleport1_8:
# 50 "data/maps/Hoenn1_8/scripts.pory"
	warp MAP_ANCIENT_REGIS, 8, 12
	return


Hoenn1_8_EventScript_Taillow_Text_0:
# 6 "data/maps/Hoenn1_8/scripts.pory"
	.string "test.$"

EventScript_AbraTeleport1_Text_0:
# 39 "data/maps/Hoenn1_8/scripts.pory"
	.string "You'll have to defeat the leader first\nbefore I can teleport you\lto the next act.$"

EventScript_AbraTeleport1_Text_1:
# 43 "data/maps/Hoenn1_8/scripts.pory"
	.string "Would you like to teleport\nto the next act?$"

EventScript_AbraTeleport1_Text_2:
# 46 "data/maps/Hoenn1_8/scripts.pory"
	.string "Alright then! Here we go!$"

EventScript_AbraTeleport1_Text_3:
# 54 "data/maps/Hoenn1_8/scripts.pory"
	.string "Okay! Let me know when you're ready.$"
