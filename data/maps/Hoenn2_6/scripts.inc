Hoenn2_6_MapScripts::
	.byte 0


Hoenn2_6_Roselia::
# 5 "data/maps/Hoenn2_6/scripts.pory"
	trainerbattle_single TRAINER_ROSELIA, Hoenn2_6_Roselia_Text_0, Hoenn2_6_Roselia_Text_0
# 6 "data/maps/Hoenn2_6/scripts.pory"
	msgbox Hoenn2_6_Roselia_Text_0, MSGBOX_AUTOCLOSE
# 7 "data/maps/Hoenn2_6/scripts.pory"
	waitmessage
	end


Hoenn2_6_Swalot::
# 12 "data/maps/Hoenn2_6/scripts.pory"
	trainerbattle_single TRAINER_SWALOT, Hoenn2_6_Roselia_Text_0, Hoenn2_6_Roselia_Text_0
# 13 "data/maps/Hoenn2_6/scripts.pory"
	msgbox Hoenn2_6_Roselia_Text_0, MSGBOX_AUTOCLOSE
# 14 "data/maps/Hoenn2_6/scripts.pory"
	waitmessage
	end


Hoenn2_6_Manectric::
# 19 "data/maps/Hoenn2_6/scripts.pory"
	trainerbattle_single TRAINER_LEADER_MANECTRIC, Hoenn2_6_Roselia_Text_0, Hoenn2_6_Roselia_Text_0, Hoenn2_6_Manectric_Defeated
# 20 "data/maps/Hoenn2_6/scripts.pory"
	msgbox Hoenn2_6_Roselia_Text_0, MSGBOX_AUTOCLOSE
# 21 "data/maps/Hoenn2_6/scripts.pory"
	waitmessage
	end


Hoenn2_6_Manectric_Defeated::
# 26 "data/maps/Hoenn2_6/scripts.pory"
	setflag FLAG_DEFEATED_PATH_2_LEADER
# 27 "data/maps/Hoenn2_6/scripts.pory"
	msgbox Hoenn2_6_Manectric_Defeated_Text_0, MSGBOX_AUTOCLOSE
# 28 "data/maps/Hoenn2_6/scripts.pory"
	waitmessage
	end


Hoenn2_6_Magneton::
# 33 "data/maps/Hoenn2_6/scripts.pory"
	trainerbattle_single TRAINER_MAGNETON, Hoenn2_6_Roselia_Text_0, Hoenn2_6_Roselia_Text_0
# 34 "data/maps/Hoenn2_6/scripts.pory"
	msgbox Hoenn2_6_Roselia_Text_0, MSGBOX_AUTOCLOSE
# 35 "data/maps/Hoenn2_6/scripts.pory"
	waitmessage
	end


Hoenn2_6_AbraTeleport::
# 40 "data/maps/Hoenn2_6/scripts.pory"
	lockall
# 41 "data/maps/Hoenn2_6/scripts.pory"
	goto_if_unset FLAG_DEFEATED_PATH_2_LEADER, Hoenn2_6_AbraTeleport_1
# 46 "data/maps/Hoenn2_6/scripts.pory"
	msgbox Hoenn2_6_AbraTeleport_Text_1, MSGBOX_YESNO
# 47 "data/maps/Hoenn2_6/scripts.pory"
	switch VAR_RESULT
# 48 "data/maps/Hoenn2_6/scripts.pory"
	case YES, Hoenn2_6_AbraTeleport_5
# 51 "data/maps/Hoenn2_6/scripts.pory"
	case NO, Hoenn2_6_AbraTeleport_6
	return

Hoenn2_6_AbraTeleport_1:
# 42 "data/maps/Hoenn2_6/scripts.pory"
	msgbox Hoenn2_6_AbraTeleport_Text_0
# 43 "data/maps/Hoenn2_6/scripts.pory"
	releaseall
	return

Hoenn2_6_AbraTeleport_5:
# 49 "data/maps/Hoenn2_6/scripts.pory"
	msgbox Hoenn2_6_AbraTeleport_Text_2
# 50 "data/maps/Hoenn2_6/scripts.pory"
	special WarpToNextAncient
	return

Hoenn2_6_AbraTeleport_6:
# 52 "data/maps/Hoenn2_6/scripts.pory"
	msgbox Hoenn2_6_AbraTeleport_Text_3
# 53 "data/maps/Hoenn2_6/scripts.pory"
	releaseall
	return


Hoenn2_6_Roselia_Text_0:
# 5 "data/maps/Hoenn2_6/scripts.pory"
	.string "test$"

Hoenn2_6_Manectric_Defeated_Text_0:
# 27 "data/maps/Hoenn2_6/scripts.pory"
	.string "test.$"

Hoenn2_6_AbraTeleport_Text_0:
# 42 "data/maps/Hoenn2_6/scripts.pory"
	.string "You'll have to defeat the leader first\nbefore I can teleport you\lto the next act.$"

Hoenn2_6_AbraTeleport_Text_1:
# 46 "data/maps/Hoenn2_6/scripts.pory"
	.string "Would you like to teleport\nto the next act?$"

Hoenn2_6_AbraTeleport_Text_2:
# 49 "data/maps/Hoenn2_6/scripts.pory"
	.string "Alright then! Here we go!$"

Hoenn2_6_AbraTeleport_Text_3:
# 52 "data/maps/Hoenn2_6/scripts.pory"
	.string "Okay! Let me know when you're ready.$"
