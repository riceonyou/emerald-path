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
	setflag FLAG_DEFEATED_PATH_LEADER
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
	call AbraTeleport
	return


Hoenn2_6_Roselia_Text_0:
# 5 "data/maps/Hoenn2_6/scripts.pory"
	.string "test$"

Hoenn2_6_Manectric_Defeated_Text_0:
# 27 "data/maps/Hoenn2_6/scripts.pory"
	.string "test.$"
