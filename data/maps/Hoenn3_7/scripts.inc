Hoenn3_7_MapScripts::
	.byte 0


Hoenn3_7_Wigglytuff::
# 5 "data/maps/Hoenn3_7/scripts.pory"
	trainerbattle_single TRAINER_WIGGLYTUFF, Hoenn3_7_Wigglytuff_Text_0, Hoenn3_7_Wigglytuff_Text_0
# 6 "data/maps/Hoenn3_7/scripts.pory"
	msgbox Hoenn3_7_Wigglytuff_Text_0, MSGBOX_AUTOCLOSE
# 7 "data/maps/Hoenn3_7/scripts.pory"
	waitmessage
	end


Hoenn3_7_Sandslash::
# 12 "data/maps/Hoenn3_7/scripts.pory"
	trainerbattle_single TRAINER_SANDSLASH, Hoenn3_7_Wigglytuff_Text_0, Hoenn3_7_Wigglytuff_Text_0
# 13 "data/maps/Hoenn3_7/scripts.pory"
	msgbox Hoenn3_7_Wigglytuff_Text_0, MSGBOX_AUTOCLOSE
# 14 "data/maps/Hoenn3_7/scripts.pory"
	waitmessage
	end


Hoenn3_7_Slaking::
# 19 "data/maps/Hoenn3_7/scripts.pory"
	trainerbattle_single TRAINER_SLAKING, Hoenn3_7_Wigglytuff_Text_0, Hoenn3_7_Wigglytuff_Text_0, Hoenn3_7_Slaking_Defeated
# 20 "data/maps/Hoenn3_7/scripts.pory"
	msgbox Hoenn3_7_Wigglytuff_Text_0, MSGBOX_AUTOCLOSE
# 21 "data/maps/Hoenn3_7/scripts.pory"
	waitmessage
	end


Hoenn3_7_Slaking_Defeated::
# 27 "data/maps/Hoenn3_7/scripts.pory"
	setflag FLAG_DEFEATED_PATH_3_LEADER
# 28 "data/maps/Hoenn3_7/scripts.pory"
	msgbox Hoenn3_7_Slaking_Defeated_Text_0, MSGBOX_AUTOCLOSE
# 29 "data/maps/Hoenn3_7/scripts.pory"
	waitmessage
	end


Hoenn3_7_AbraTeleport::
# 34 "data/maps/Hoenn3_7/scripts.pory"
	lockall
# 35 "data/maps/Hoenn3_7/scripts.pory"
	goto_if_unset FLAG_DEFEATED_PATH_3_LEADER, Hoenn3_7_AbraTeleport_1
# 40 "data/maps/Hoenn3_7/scripts.pory"
	msgbox Hoenn3_7_AbraTeleport_Text_1, MSGBOX_YESNO
# 41 "data/maps/Hoenn3_7/scripts.pory"
	switch VAR_RESULT
# 42 "data/maps/Hoenn3_7/scripts.pory"
	case YES, Hoenn3_7_AbraTeleport_5
# 45 "data/maps/Hoenn3_7/scripts.pory"
	case NO, Hoenn3_7_AbraTeleport_6
	return

Hoenn3_7_AbraTeleport_1:
# 36 "data/maps/Hoenn3_7/scripts.pory"
	msgbox Hoenn3_7_AbraTeleport_Text_0
# 37 "data/maps/Hoenn3_7/scripts.pory"
	releaseall
	return

Hoenn3_7_AbraTeleport_5:
# 43 "data/maps/Hoenn3_7/scripts.pory"
	msgbox Hoenn3_7_AbraTeleport_Text_2
# 44 "data/maps/Hoenn3_7/scripts.pory"
	special WarpToNextAncient
	return

Hoenn3_7_AbraTeleport_6:
# 46 "data/maps/Hoenn3_7/scripts.pory"
	msgbox Hoenn3_7_AbraTeleport_Text_3
# 47 "data/maps/Hoenn3_7/scripts.pory"
	releaseall
	return


Hoenn3_7_Wigglytuff_Text_0:
# 5 "data/maps/Hoenn3_7/scripts.pory"
	.string "test$"

Hoenn3_7_Slaking_Defeated_Text_0:
# 28 "data/maps/Hoenn3_7/scripts.pory"
	.string "test.$"

Hoenn3_7_AbraTeleport_Text_0:
# 36 "data/maps/Hoenn3_7/scripts.pory"
	.string "You'll have to defeat the leader first\nbefore I can teleport you\lto the next act.$"

Hoenn3_7_AbraTeleport_Text_1:
# 40 "data/maps/Hoenn3_7/scripts.pory"
	.string "Would you like to teleport\nto the next act?$"

Hoenn3_7_AbraTeleport_Text_2:
# 43 "data/maps/Hoenn3_7/scripts.pory"
	.string "Alright then! Here we go!$"

Hoenn3_7_AbraTeleport_Text_3:
# 46 "data/maps/Hoenn3_7/scripts.pory"
	.string "Okay! Let me know when you're ready.$"
