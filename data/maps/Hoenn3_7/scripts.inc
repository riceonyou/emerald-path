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
	setflag FLAG_DEFEATED_PATH_LEADER
# 28 "data/maps/Hoenn3_7/scripts.pory"
	msgbox Hoenn3_7_Slaking_Defeated_Text_0, MSGBOX_AUTOCLOSE
# 29 "data/maps/Hoenn3_7/scripts.pory"
	waitmessage
	end


Hoenn3_7_AbraTeleport::
# 34 "data/maps/Hoenn3_7/scripts.pory"
	call AbraTeleport
	return


Hoenn3_7_Wigglytuff_Text_0:
# 5 "data/maps/Hoenn3_7/scripts.pory"
	.string "test$"

Hoenn3_7_Slaking_Defeated_Text_0:
# 28 "data/maps/Hoenn3_7/scripts.pory"
	.string "test.$"
