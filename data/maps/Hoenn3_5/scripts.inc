Hoenn3_5_MapScripts::
	.byte 0


Hoenn3_5_Cradily::
# 5 "data/maps/Hoenn3_5/scripts.pory"
	trainerbattle_single TRAINER_CRADILY, Hoenn3_5_Cradily_Text_0, Hoenn3_5_Cradily_Text_0
# 6 "data/maps/Hoenn3_5/scripts.pory"
	msgbox Hoenn3_5_Cradily_Text_0, MSGBOX_AUTOCLOSE
# 7 "data/maps/Hoenn3_5/scripts.pory"
	waitmessage
	end


Hoenn3_5_Armaldo::
# 12 "data/maps/Hoenn3_5/scripts.pory"
	trainerbattle_single TRAINER_ARMALDO, Hoenn3_5_Cradily_Text_0, Hoenn3_5_Cradily_Text_0
# 13 "data/maps/Hoenn3_5/scripts.pory"
	msgbox Hoenn3_5_Cradily_Text_0, MSGBOX_AUTOCLOSE
# 14 "data/maps/Hoenn3_5/scripts.pory"
	waitmessage
	end


Hoenn3_5_Linoone::
# 19 "data/maps/Hoenn3_5/scripts.pory"
	trainerbattle_single TRAINER_LINOONE, Hoenn3_5_Cradily_Text_0, Hoenn3_5_Cradily_Text_0
# 20 "data/maps/Hoenn3_5/scripts.pory"
	msgbox Hoenn3_5_Cradily_Text_0, MSGBOX_AUTOCLOSE
# 21 "data/maps/Hoenn3_5/scripts.pory"
	waitmessage
	end


Hoenn3_5_Rival::
# 26 "data/maps/Hoenn3_5/scripts.pory"
	call RivalFight3
	return


Hoenn3_6_EventScript_BirchBag::
# 31 "data/maps/Hoenn3_5/scripts.pory"
	lockall
# 32 "data/maps/Hoenn3_5/scripts.pory"
	call Act3BirchBag
# 34 "data/maps/Hoenn3_5/scripts.pory"
	removeobject HOENN3_6_BIRCHBAG
# 35 "data/maps/Hoenn3_5/scripts.pory"
	setflag FLAG_BIRCHBAG_3_6
# 38 "data/maps/Hoenn3_5/scripts.pory"
	waitmessage
# 39 "data/maps/Hoenn3_5/scripts.pory"
	releaseall
	end


Hoenn3_7_EventScript_BirchBag::
# 46 "data/maps/Hoenn3_5/scripts.pory"
	lockall
# 47 "data/maps/Hoenn3_5/scripts.pory"
	call Act3BirchBag
# 49 "data/maps/Hoenn3_5/scripts.pory"
	removeobject HOENN3_7_BIRCHBAG
# 50 "data/maps/Hoenn3_5/scripts.pory"
	setflag FLAG_BIRCHBAG_3_7
# 53 "data/maps/Hoenn3_5/scripts.pory"
	waitmessage
# 54 "data/maps/Hoenn3_5/scripts.pory"
	releaseall
	end


Hoenn3_5_Cradily_Text_0:
# 5 "data/maps/Hoenn3_5/scripts.pory"
	.string "test$"
