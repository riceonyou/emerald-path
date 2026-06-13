Hoenn4_5_MapScripts::
	.byte 0


Hoenn4_5_Farigiraf::
# 5 "data/maps/Hoenn4_5/scripts.pory"
	trainerbattle_single TRAINER_FARIGIRAF, Hoenn4_5_Farigiraf_Text_0, Hoenn4_5_Farigiraf_Text_0
# 6 "data/maps/Hoenn4_5/scripts.pory"
	msgbox Hoenn4_5_Farigiraf_Text_0, MSGBOX_AUTOCLOSE
# 7 "data/maps/Hoenn4_5/scripts.pory"
	waitmessage
	end


Hoenn4_5_Kingdra::
# 12 "data/maps/Hoenn4_5/scripts.pory"
	trainerbattle_single TRAINER_KINGDRA, Hoenn4_5_Farigiraf_Text_0, Hoenn4_5_Farigiraf_Text_0
# 13 "data/maps/Hoenn4_5/scripts.pory"
	msgbox Hoenn4_5_Farigiraf_Text_0, MSGBOX_AUTOCLOSE
# 14 "data/maps/Hoenn4_5/scripts.pory"
	waitmessage
	end


Hoenn4_5_Metagross::
# 19 "data/maps/Hoenn4_5/scripts.pory"
	trainerbattle_single TRAINER_METAGROSS, Hoenn4_5_Farigiraf_Text_0, Hoenn4_5_Farigiraf_Text_0
# 20 "data/maps/Hoenn4_5/scripts.pory"
	msgbox Hoenn4_5_Farigiraf_Text_0, MSGBOX_AUTOCLOSE
# 21 "data/maps/Hoenn4_5/scripts.pory"
	waitmessage
	end


Hoenn4_5_Latios::
# 26 "data/maps/Hoenn4_5/scripts.pory"
	trainerbattle_double TRAINER_LATIOS_LATIAS, Hoenn4_5_Farigiraf_Text_0, Hoenn4_5_Farigiraf_Text_0, Hoenn4_5_Latios_Latias_Defeated
# 27 "data/maps/Hoenn4_5/scripts.pory"
	msgbox Hoenn4_5_Farigiraf_Text_0, MSGBOX_AUTOCLOSE
# 28 "data/maps/Hoenn4_5/scripts.pory"
	waitmessage
	end


Hoenn4_5_Latias::
# 33 "data/maps/Hoenn4_5/scripts.pory"
	trainerbattle_double TRAINER_LATIOS_LATIAS, Hoenn4_5_Farigiraf_Text_0, Hoenn4_5_Farigiraf_Text_0, Hoenn4_5_Latios_Latias_Defeated
# 34 "data/maps/Hoenn4_5/scripts.pory"
	msgbox Hoenn4_5_Farigiraf_Text_0, MSGBOX_AUTOCLOSE
# 35 "data/maps/Hoenn4_5/scripts.pory"
	waitmessage
	end


Hoenn4_5_Latios_Latias_Defeated::
# 40 "data/maps/Hoenn4_5/scripts.pory"
	setflag FLAG_DEFEATED_PATH_4_LEADER
# 41 "data/maps/Hoenn4_5/scripts.pory"
	msgbox Hoenn4_5_Latios_Latias_Defeated_Text_0, MSGBOX_AUTOCLOSE
# 42 "data/maps/Hoenn4_5/scripts.pory"
	waitmessage
	end


Hoenn4_5_Farigiraf_Text_0:
# 5 "data/maps/Hoenn4_5/scripts.pory"
	.string "test$"

Hoenn4_5_Latios_Latias_Defeated_Text_0:
# 41 "data/maps/Hoenn4_5/scripts.pory"
	.string "test.$"
