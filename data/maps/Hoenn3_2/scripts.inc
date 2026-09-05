Hoenn3_2_MapScripts::
	.byte 0


Hoenn3_2_KecShop_Sign::
# 5 "data/maps/Hoenn3_2/scripts.pory"
	call KecShop_Sign
	return


Hoenn3_2_KecShop::
# 9 "data/maps/Hoenn3_2/scripts.pory"
	call KecShop
	return


Hoenn3_2_KecShop_Shiny::
# 13 "data/maps/Hoenn3_2/scripts.pory"
	call KecShop_Shiny
	return


Hoenn3_2_Skarmory::
# 17 "data/maps/Hoenn3_2/scripts.pory"
	trainerbattle_single TRAINER_SKARMORY, Hoenn3_2_Skarmory_Text_0, Hoenn3_2_Skarmory_Text_0
# 18 "data/maps/Hoenn3_2/scripts.pory"
	msgbox Hoenn3_2_Skarmory_Text_0, MSGBOX_AUTOCLOSE
# 19 "data/maps/Hoenn3_2/scripts.pory"
	waitmessage
	end


Hoenn3_2_Zangoose::
# 24 "data/maps/Hoenn3_2/scripts.pory"
	trainerbattle_single TRAINER_ZANGOOSE, Hoenn3_2_Skarmory_Text_0, Hoenn3_2_Skarmory_Text_0
# 25 "data/maps/Hoenn3_2/scripts.pory"
	msgbox Hoenn3_2_Skarmory_Text_0, MSGBOX_AUTOCLOSE
# 26 "data/maps/Hoenn3_2/scripts.pory"
	waitmessage
	end


Hoenn3_2_Seviper::
# 31 "data/maps/Hoenn3_2/scripts.pory"
	trainerbattle_single TRAINER_SEVIPER, Hoenn3_2_Skarmory_Text_0, Hoenn3_2_Skarmory_Text_0
# 32 "data/maps/Hoenn3_2/scripts.pory"
	msgbox Hoenn3_2_Skarmory_Text_0, MSGBOX_AUTOCLOSE
# 33 "data/maps/Hoenn3_2/scripts.pory"
	waitmessage
	end


Hoenn3_2_Spinda::
# 38 "data/maps/Hoenn3_2/scripts.pory"
	trainerbattle_single TRAINER_SPINDA, Hoenn3_2_Skarmory_Text_0, Hoenn3_2_Skarmory_Text_0
# 39 "data/maps/Hoenn3_2/scripts.pory"
	msgbox Hoenn3_2_Skarmory_Text_0, MSGBOX_AUTOCLOSE
# 40 "data/maps/Hoenn3_2/scripts.pory"
	waitmessage
	end


Hoenn3_2_Ninetales::
# 45 "data/maps/Hoenn3_2/scripts.pory"
	trainerbattle_single TRAINER_NINETALES, Hoenn3_2_Skarmory_Text_0, Hoenn3_2_Skarmory_Text_0
# 46 "data/maps/Hoenn3_2/scripts.pory"
	msgbox Hoenn3_2_Skarmory_Text_0, MSGBOX_AUTOCLOSE
# 47 "data/maps/Hoenn3_2/scripts.pory"
	waitmessage
	end


Hoenn3_2_EventScript_BirchBag::
# 53 "data/maps/Hoenn3_2/scripts.pory"
	lockall
# 54 "data/maps/Hoenn3_2/scripts.pory"
	call Act3BirchBag
# 56 "data/maps/Hoenn3_2/scripts.pory"
	removeobject HOENN3_2_BIRCHBAG
# 57 "data/maps/Hoenn3_2/scripts.pory"
	setflag FLAG_BIRCHBAG_3_2
# 60 "data/maps/Hoenn3_2/scripts.pory"
	waitmessage
# 61 "data/maps/Hoenn3_2/scripts.pory"
	releaseall
	end


Hoenn3_3_EventScript_BirchBag::
# 68 "data/maps/Hoenn3_2/scripts.pory"
	lockall
# 69 "data/maps/Hoenn3_2/scripts.pory"
	call Act3BirchBag
# 71 "data/maps/Hoenn3_2/scripts.pory"
	removeobject HOENN3_3_BIRCHBAG
# 72 "data/maps/Hoenn3_2/scripts.pory"
	setflag FLAG_BIRCHBAG_3_3
# 75 "data/maps/Hoenn3_2/scripts.pory"
	waitmessage
# 76 "data/maps/Hoenn3_2/scripts.pory"
	releaseall
	end


Hoenn3_4_EventScript_BirchBag::
# 83 "data/maps/Hoenn3_2/scripts.pory"
	lockall
# 84 "data/maps/Hoenn3_2/scripts.pory"
	call Act3BirchBag
# 86 "data/maps/Hoenn3_2/scripts.pory"
	removeobject HOENN3_4_BIRCHBAG
# 87 "data/maps/Hoenn3_2/scripts.pory"
	setflag FLAG_BIRCHBAG_3_4
# 90 "data/maps/Hoenn3_2/scripts.pory"
	waitmessage
# 91 "data/maps/Hoenn3_2/scripts.pory"
	releaseall
	end


Hoenn3_2_Skarmory_Text_0:
# 17 "data/maps/Hoenn3_2/scripts.pory"
	.string "test$"
