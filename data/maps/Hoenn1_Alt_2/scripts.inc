Hoenn1_Alt_2_MapScripts::
	.byte 0


Hoenn1_Alt_2_EventScript_Boat::
# 7 "data/maps/Hoenn1_Alt_2/scripts.pory"
	lock
# 8 "data/maps/Hoenn1_Alt_2/scripts.pory"
	warp MAP_HOENN1_ALT_1, 9, 11
# 9 "data/maps/Hoenn1_Alt_2/scripts.pory"
	waitstate
# 10 "data/maps/Hoenn1_Alt_2/scripts.pory"
	release
	end


Hoenn1_Alt_2_EventScript_Azurill::
# 16 "data/maps/Hoenn1_Alt_2/scripts.pory"
	trainerbattle_single TRAINER_AZURILL, Hoenn1_Alt_2_EventScript_Azurill_Text_0, Hoenn1_Alt_2_EventScript_Azurill_Text_0
# 17 "data/maps/Hoenn1_Alt_2/scripts.pory"
	msgbox Hoenn1_Alt_2_EventScript_Azurill_Text_0, MSGBOX_AUTOCLOSE
# 18 "data/maps/Hoenn1_Alt_2/scripts.pory"
	waitmessage
	end


Hoenn1_Alt_2_EventScript_Budew::
# 23 "data/maps/Hoenn1_Alt_2/scripts.pory"
	trainerbattle_single TRAINER_BUDEW, Hoenn1_Alt_2_EventScript_Azurill_Text_0, Hoenn1_Alt_2_EventScript_Azurill_Text_0
# 24 "data/maps/Hoenn1_Alt_2/scripts.pory"
	msgbox Hoenn1_Alt_2_EventScript_Azurill_Text_0, MSGBOX_AUTOCLOSE
# 25 "data/maps/Hoenn1_Alt_2/scripts.pory"
	waitmessage
	end


Hoenn1_Alt_2_EventScript_Barboach::
# 30 "data/maps/Hoenn1_Alt_2/scripts.pory"
	trainerbattle_single TRAINER_BARBOACH, Hoenn1_Alt_2_EventScript_Azurill_Text_0, Hoenn1_Alt_2_EventScript_Azurill_Text_0
# 31 "data/maps/Hoenn1_Alt_2/scripts.pory"
	msgbox Hoenn1_Alt_2_EventScript_Azurill_Text_0, MSGBOX_AUTOCLOSE
# 32 "data/maps/Hoenn1_Alt_2/scripts.pory"
	waitmessage
	end


Hoenn1_Alt_2_EventScript_BirchBag_4::
# 38 "data/maps/Hoenn1_Alt_2/scripts.pory"
	lockall
# 40 "data/maps/Hoenn1_Alt_2/scripts.pory"
	call Act1BirchBag
# 42 "data/maps/Hoenn1_Alt_2/scripts.pory"
	removeobject HOENN1_ALT_4_BIRCHBAG
# 43 "data/maps/Hoenn1_Alt_2/scripts.pory"
	setflag FLAG_BIRCHBAG_1_4
# 46 "data/maps/Hoenn1_Alt_2/scripts.pory"
	waitmessage
# 47 "data/maps/Hoenn1_Alt_2/scripts.pory"
	releaseall
	end


Hoenn1_Alt_2_EventScript_BirchBag_5::
# 54 "data/maps/Hoenn1_Alt_2/scripts.pory"
	lockall
# 56 "data/maps/Hoenn1_Alt_2/scripts.pory"
	call Act1BirchBag
# 58 "data/maps/Hoenn1_Alt_2/scripts.pory"
	removeobject HOENN1_ALT_5_BIRCHBAG
# 59 "data/maps/Hoenn1_Alt_2/scripts.pory"
	setflag FLAG_BIRCHBAG_1_5
# 62 "data/maps/Hoenn1_Alt_2/scripts.pory"
	waitmessage
# 63 "data/maps/Hoenn1_Alt_2/scripts.pory"
	releaseall
	end


Hoenn1_Alt_2_EventScript_BirchBag_6::
# 70 "data/maps/Hoenn1_Alt_2/scripts.pory"
	lockall
# 72 "data/maps/Hoenn1_Alt_2/scripts.pory"
	call Act1BirchBag
# 74 "data/maps/Hoenn1_Alt_2/scripts.pory"
	removeobject HOENN1_ALT_6_BIRCHBAG
# 75 "data/maps/Hoenn1_Alt_2/scripts.pory"
	setflag FLAG_BIRCHBAG_1_6
# 78 "data/maps/Hoenn1_Alt_2/scripts.pory"
	waitmessage
# 79 "data/maps/Hoenn1_Alt_2/scripts.pory"
	releaseall
	end


Hoenn1_Alt_2_EventScript_Azurill_Text_0:
# 16 "data/maps/Hoenn1_Alt_2/scripts.pory"
	.string "test$"
