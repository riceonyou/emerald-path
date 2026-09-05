Hoenn1_Alt_4_MapScripts::
	.byte 0


Hoenn1_Alt_4_KecShop_Sign::
# 6 "data/maps/Hoenn1_Alt_4/scripts.pory"
	call KecShop_Sign
	return


Hoenn1_Alt_4_KecShop::
# 10 "data/maps/Hoenn1_Alt_4/scripts.pory"
	call KecShop
	return


Hoenn1_Alt_4_KecShop_Shiny::
# 14 "data/maps/Hoenn1_Alt_4/scripts.pory"
	call KecShop_Shiny
	return


Hoenn1_Alt_4_EventScript_Rival::
# 18 "data/maps/Hoenn1_Alt_4/scripts.pory"
	call RivalFight1
	return


Hoenn1_Alt_4_EventScript_Trapinch::
# 22 "data/maps/Hoenn1_Alt_4/scripts.pory"
	trainerbattle_single TRAINER_TRAPINCH, Hoenn1_Alt_4_EventScript_Trapinch_Text_0, Hoenn1_Alt_4_EventScript_Trapinch_Text_0
# 23 "data/maps/Hoenn1_Alt_4/scripts.pory"
	msgbox Hoenn1_Alt_4_EventScript_Trapinch_Text_0, MSGBOX_AUTOCLOSE
# 24 "data/maps/Hoenn1_Alt_4/scripts.pory"
	waitmessage
	end


Hoenn1_Alt_4_EventScript_Meditite::
# 29 "data/maps/Hoenn1_Alt_4/scripts.pory"
	trainerbattle_single TRAINER_MEDITITE, Hoenn1_Alt_4_EventScript_Trapinch_Text_0, Hoenn1_Alt_4_EventScript_Trapinch_Text_0
# 30 "data/maps/Hoenn1_Alt_4/scripts.pory"
	msgbox Hoenn1_Alt_4_EventScript_Trapinch_Text_0, MSGBOX_AUTOCLOSE
# 31 "data/maps/Hoenn1_Alt_4/scripts.pory"
	waitmessage
	end


Hoenn1_Alt_4_EventScript_BirchBag_8::
# 37 "data/maps/Hoenn1_Alt_4/scripts.pory"
	lockall
# 39 "data/maps/Hoenn1_Alt_4/scripts.pory"
	call Act1BirchBag
# 41 "data/maps/Hoenn1_Alt_4/scripts.pory"
	removeobject HOENN1_ALT_8_BIRCHBAG
# 42 "data/maps/Hoenn1_Alt_4/scripts.pory"
	setflag FLAG_BIRCHBAG_1_8
# 45 "data/maps/Hoenn1_Alt_4/scripts.pory"
	waitmessage
# 46 "data/maps/Hoenn1_Alt_4/scripts.pory"
	releaseall
	end


Hoenn1_Alt_4_EventScript_BirchBag_9::
# 53 "data/maps/Hoenn1_Alt_4/scripts.pory"
	lockall
# 55 "data/maps/Hoenn1_Alt_4/scripts.pory"
	call Act1BirchBag
# 57 "data/maps/Hoenn1_Alt_4/scripts.pory"
	removeobject HOENN1_ALT_9_BIRCHBAG
# 58 "data/maps/Hoenn1_Alt_4/scripts.pory"
	setflag FLAG_BIRCHBAG_1_9
# 61 "data/maps/Hoenn1_Alt_4/scripts.pory"
	waitmessage
# 62 "data/maps/Hoenn1_Alt_4/scripts.pory"
	releaseall
	end


Hoenn1_Alt_4_EventScript_Trapinch_Text_0:
# 22 "data/maps/Hoenn1_Alt_4/scripts.pory"
	.string "test$"
