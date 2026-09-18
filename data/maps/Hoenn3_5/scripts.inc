Hoenn3_5_MapScripts::
	.byte 0


Hoenn3_5_Cradily::
# 5 "data/maps/Hoenn3_5/scripts.pory"
	trainerbattle_single TRAINER_CRADILY, Hoenn3_5_Cradily_Text_0, Hoenn3_5_Cradily_Text_1
# 6 "data/maps/Hoenn3_5/scripts.pory"
	msgbox Hoenn3_5_Cradily_Text_2, MSGBOX_AUTOCLOSE
# 7 "data/maps/Hoenn3_5/scripts.pory"
	waitmessage
	end


Hoenn3_5_Armaldo::
# 12 "data/maps/Hoenn3_5/scripts.pory"
	trainerbattle_single TRAINER_ARMALDO, Hoenn3_5_Armaldo_Text_0, Hoenn3_5_Armaldo_Text_1
# 13 "data/maps/Hoenn3_5/scripts.pory"
	msgbox Hoenn3_5_Armaldo_Text_2, MSGBOX_AUTOCLOSE
# 14 "data/maps/Hoenn3_5/scripts.pory"
	waitmessage
	end


Hoenn3_5_Linoone::
# 19 "data/maps/Hoenn3_5/scripts.pory"
	trainerbattle_single TRAINER_LINOONE, Hoenn3_5_Linoone_Text_0, Hoenn3_5_Linoone_Text_1
# 20 "data/maps/Hoenn3_5/scripts.pory"
	msgbox Hoenn3_5_Linoone_Text_2, MSGBOX_AUTOCLOSE
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
	.string "Fossil pokemon in this game evolve at\n"
	.string "level 32, after the second path. It\l"
	.string "might feel a bit late but they got buffs\l"
	.string "to compensate!$"

Hoenn3_5_Cradily_Text_1:
# 5 "data/maps/Hoenn3_5/scripts.pory"
	.string "Chuuu.$"

Hoenn3_5_Cradily_Text_2:
# 6 "data/maps/Hoenn3_5/scripts.pory"
	.string "All fossil pokemon also have an ability\n"
	.string "like shell armor or battle armor that\l"
	.string "stops critical hits.$"

Hoenn3_5_Armaldo_Text_0:
# 12 "data/maps/Hoenn3_5/scripts.pory"
	.string "Hi. I'm Armando the Armaldo. It's a\n"
	.string "pleasure to meet you.$"

Hoenn3_5_Armaldo_Text_1:
# 12 "data/maps/Hoenn3_5/scripts.pory"
	.string "Well played.$"

Hoenn3_5_Armaldo_Text_2:
# 13 "data/maps/Hoenn3_5/scripts.pory"
	.string "Check out this watch. It cost me an\n"
	.string "armando leg.\l"
	.string "Haha. Get it?$"

Hoenn3_5_Linoone_Text_0:
# 19 "data/maps/Hoenn3_5/scripts.pory"
	.string "Don't think I can't put up a fight just\n"
	.string "because Obstagoon is stronger than me,\l"
	.string "linoone!$"

Hoenn3_5_Linoone_Text_1:
# 19 "data/maps/Hoenn3_5/scripts.pory"
	.string "Noone linoone :($"

Hoenn3_5_Linoone_Text_2:
# 20 "data/maps/Hoenn3_5/scripts.pory"
	.string "Linoone noone noone.\p"
	.string "Someone, anyone.$"
