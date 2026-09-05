Hoenn1_Alt_3_MapScripts::
	.byte 0


Hoenn1_Alt_3_EventScript_Aron::
# 6 "data/maps/Hoenn1_Alt_3/scripts.pory"
	trainerbattle_single TRAINER_ARON, Hoenn1_Alt_3_EventScript_Aron_Text_0, Hoenn1_Alt_3_EventScript_Aron_Text_0
# 7 "data/maps/Hoenn1_Alt_3/scripts.pory"
	msgbox Hoenn1_Alt_3_EventScript_Aron_Text_0, MSGBOX_AUTOCLOSE
# 8 "data/maps/Hoenn1_Alt_3/scripts.pory"
	waitmessage
	end


Hoenn1_Alt_3_EventScript_Zubat::
# 13 "data/maps/Hoenn1_Alt_3/scripts.pory"
	trainerbattle_single TRAINER_ZUBAT, Hoenn1_Alt_3_EventScript_Aron_Text_0, Hoenn1_Alt_3_EventScript_Aron_Text_0
# 14 "data/maps/Hoenn1_Alt_3/scripts.pory"
	msgbox Hoenn1_Alt_3_EventScript_Aron_Text_0, MSGBOX_AUTOCLOSE
# 15 "data/maps/Hoenn1_Alt_3/scripts.pory"
	waitmessage
	end


Hoenn1_Alt_3_EventScript_Spoink::
# 19 "data/maps/Hoenn1_Alt_3/scripts.pory"
	trainerbattle_single TRAINER_SPOINK, Hoenn1_Alt_3_EventScript_Aron_Text_0, Hoenn1_Alt_3_EventScript_Aron_Text_0
# 20 "data/maps/Hoenn1_Alt_3/scripts.pory"
	msgbox Hoenn1_Alt_3_EventScript_Aron_Text_0, MSGBOX_AUTOCLOSE
# 21 "data/maps/Hoenn1_Alt_3/scripts.pory"
	waitmessage
	end


Hoenn1_Alt_3_EventScript_Mawile::
# 25 "data/maps/Hoenn1_Alt_3/scripts.pory"
	trainerbattle_double TRAINER_MAWILESABELEYE, Hoenn1_Alt_3_EventScript_Aron_Text_0, Hoenn1_Alt_3_EventScript_Aron_Text_0, Hoenn1_Alt_3_EventScript_Aron_Text_0
# 26 "data/maps/Hoenn1_Alt_3/scripts.pory"
	msgbox Hoenn1_Alt_3_EventScript_Aron_Text_0, MSGBOX_AUTOCLOSE
# 27 "data/maps/Hoenn1_Alt_3/scripts.pory"
	waitmessage
	end


Hoenn1_Alt_3_EventScript_Sabeleye::
# 31 "data/maps/Hoenn1_Alt_3/scripts.pory"
	trainerbattle_double TRAINER_MAWILESABELEYE, Hoenn1_Alt_3_EventScript_Aron_Text_0, Hoenn1_Alt_3_EventScript_Aron_Text_0, Hoenn1_Alt_3_EventScript_Aron_Text_0
# 32 "data/maps/Hoenn1_Alt_3/scripts.pory"
	msgbox Hoenn1_Alt_3_EventScript_Aron_Text_0, MSGBOX_AUTOCLOSE
# 33 "data/maps/Hoenn1_Alt_3/scripts.pory"
	waitmessage
	end


Hoenn1_Alt_3_EventScript_BirchBag_7::
# 40 "data/maps/Hoenn1_Alt_3/scripts.pory"
	lockall
# 42 "data/maps/Hoenn1_Alt_3/scripts.pory"
	call Act1BirchBag
# 44 "data/maps/Hoenn1_Alt_3/scripts.pory"
	removeobject HOENN1_ALT_7_BIRCHBAG
# 45 "data/maps/Hoenn1_Alt_3/scripts.pory"
	setflag FLAG_BIRCHBAG_1_7
# 48 "data/maps/Hoenn1_Alt_3/scripts.pory"
	waitmessage
# 49 "data/maps/Hoenn1_Alt_3/scripts.pory"
	releaseall
	end


Hoenn1_Alt_3_Itemball_4::
# 55 "data/maps/Hoenn1_Alt_3/scripts.pory"
	lockall
# 56 "data/maps/Hoenn1_Alt_3/scripts.pory"
	call GiveCommonItem
# 57 "data/maps/Hoenn1_Alt_3/scripts.pory"
	removeobject HOENN1_ALT_ITEM_4
# 58 "data/maps/Hoenn1_Alt_3/scripts.pory"
	setflag FLAG_ITEM_1_4
# 59 "data/maps/Hoenn1_Alt_3/scripts.pory"
	releaseall
	end


Hoenn1_Alt_3_Itemball_5::
# 64 "data/maps/Hoenn1_Alt_3/scripts.pory"
	lockall
# 65 "data/maps/Hoenn1_Alt_3/scripts.pory"
	call GiveCommonItem
# 66 "data/maps/Hoenn1_Alt_3/scripts.pory"
	removeobject HOENN1_ALT_ITEM_5
# 67 "data/maps/Hoenn1_Alt_3/scripts.pory"
	setflag FLAG_ITEM_1_5
# 68 "data/maps/Hoenn1_Alt_3/scripts.pory"
	releaseall
	end


Hoenn1_Alt_3_EventScript_Aron_Text_0:
# 6 "data/maps/Hoenn1_Alt_3/scripts.pory"
	.string "test$"
