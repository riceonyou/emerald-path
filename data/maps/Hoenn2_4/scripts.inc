Hoenn2_4_MapScripts::
	.byte 0


Hoenn2_4_KecShop_Sign::
# 5 "data/maps/Hoenn2_4/scripts.pory"
	call KecShop_Sign
	return


Hoenn2_4_KecShop::
# 9 "data/maps/Hoenn2_4/scripts.pory"
	call KecShop
	return


Hoenn2_4_KecShop_Shiny::
# 13 "data/maps/Hoenn2_4/scripts.pory"
	call KecShop_Shiny
	return


Hoenn2_4_Azumarill::
# 17 "data/maps/Hoenn2_4/scripts.pory"
	trainerbattle_single TRAINER_AZUMARILL, Hoenn2_4_Azumarill_Text_0, Hoenn2_4_Azumarill_Text_0
# 18 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_Azumarill_Text_0, MSGBOX_AUTOCLOSE
# 19 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
	end


Hoenn2_4_Doduo::
# 24 "data/maps/Hoenn2_4/scripts.pory"
	trainerbattle_single TRAINER_DODUO, Hoenn2_4_Azumarill_Text_0, Hoenn2_4_Azumarill_Text_0
# 25 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_Azumarill_Text_0, MSGBOX_AUTOCLOSE
# 26 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
	end


Hoenn2_4_Loudred::
# 31 "data/maps/Hoenn2_4/scripts.pory"
	trainerbattle_single TRAINER_LOUDRED, Hoenn2_4_Azumarill_Text_0, Hoenn2_4_Azumarill_Text_0
# 32 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_Azumarill_Text_0, MSGBOX_AUTOCLOSE
# 33 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
	end


Hoenn2_4_Volbeat::
# 38 "data/maps/Hoenn2_4/scripts.pory"
	trainerbattle_double TRAINER_VOLBEATILLUMISE, Hoenn2_4_Azumarill_Text_0, Hoenn2_4_Azumarill_Text_0, Hoenn2_4_Volbeat_Text_0
# 39 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_Azumarill_Text_0, MSGBOX_AUTOCLOSE
# 40 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
	end


Hoenn2_4_Illumise::
# 44 "data/maps/Hoenn2_4/scripts.pory"
	trainerbattle_double TRAINER_VOLBEATILLUMISE, Hoenn2_4_Azumarill_Text_0, Hoenn2_4_Azumarill_Text_0, Hoenn2_4_Volbeat_Text_0
# 45 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_Azumarill_Text_0, MSGBOX_AUTOCLOSE
# 46 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
	end


Hoenn2_4_Plusle::
# 51 "data/maps/Hoenn2_4/scripts.pory"
	trainerbattle_double TRAINER_PLUSLEMINUN, Hoenn2_4_Azumarill_Text_0, Hoenn2_4_Azumarill_Text_0, Hoenn2_4_Azumarill_Text_0
# 52 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_Azumarill_Text_0, MSGBOX_AUTOCLOSE
# 53 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
	end


Hoenn2_4_Minun::
# 57 "data/maps/Hoenn2_4/scripts.pory"
	trainerbattle_double TRAINER_PLUSLEMINUN, Hoenn2_4_Azumarill_Text_0, Hoenn2_4_Azumarill_Text_0, Hoenn2_4_Azumarill_Text_0
# 58 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_Azumarill_Text_0, MSGBOX_AUTOCLOSE
# 59 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
	end


Hoenn2_4_Rival::
# 64 "data/maps/Hoenn2_4/scripts.pory"
	call RivalFight2
	return


Hoenn2_4_EventScript_BirchBag::
# 69 "data/maps/Hoenn2_4/scripts.pory"
	lockall
# 70 "data/maps/Hoenn2_4/scripts.pory"
	playse SE_CLICK
# 71 "data/maps/Hoenn2_4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 72 "data/maps/Hoenn2_4/scripts.pory"
	setvar VAR_0x8000, 34
# 73 "data/maps/Hoenn2_4/scripts.pory"
	special LoadBirchBagPoolById
# 74 "data/maps/Hoenn2_4/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 75 "data/maps/Hoenn2_4/scripts.pory"
	waitstate
# 77 "data/maps/Hoenn2_4/scripts.pory"
	removeobject HOENN2_4_BIRCHBAG
# 78 "data/maps/Hoenn2_4/scripts.pory"
	setflag FLAG_BIRCHBAG_2_4
# 79 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_EventScript_BirchBag_Text_0
# 81 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
# 82 "data/maps/Hoenn2_4/scripts.pory"
	releaseall
	end


Hoenn2_5_EventScript_BirchBag::
# 89 "data/maps/Hoenn2_4/scripts.pory"
	lockall
# 90 "data/maps/Hoenn2_4/scripts.pory"
	playse SE_CLICK
# 91 "data/maps/Hoenn2_4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 92 "data/maps/Hoenn2_4/scripts.pory"
	setvar VAR_0x8000, 34
# 93 "data/maps/Hoenn2_4/scripts.pory"
	special LoadBirchBagPoolById
# 94 "data/maps/Hoenn2_4/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 95 "data/maps/Hoenn2_4/scripts.pory"
	waitstate
# 97 "data/maps/Hoenn2_4/scripts.pory"
	removeobject HOENN2_5_BIRCHBAG
# 98 "data/maps/Hoenn2_4/scripts.pory"
	setflag FLAG_BIRCHBAG_2_5
# 99 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_EventScript_BirchBag_Text_0
# 101 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
# 102 "data/maps/Hoenn2_4/scripts.pory"
	releaseall
	end


Hoenn2_6_EventScript_BirchBag::
# 109 "data/maps/Hoenn2_4/scripts.pory"
	lockall
# 110 "data/maps/Hoenn2_4/scripts.pory"
	playse SE_CLICK
# 111 "data/maps/Hoenn2_4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 112 "data/maps/Hoenn2_4/scripts.pory"
	setvar VAR_0x8000, 34
# 113 "data/maps/Hoenn2_4/scripts.pory"
	special LoadBirchBagPoolById
# 114 "data/maps/Hoenn2_4/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 115 "data/maps/Hoenn2_4/scripts.pory"
	waitstate
# 117 "data/maps/Hoenn2_4/scripts.pory"
	removeobject HOENN2_6_BIRCHBAG
# 118 "data/maps/Hoenn2_4/scripts.pory"
	setflag FLAG_BIRCHBAG_2_6
# 119 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_EventScript_BirchBag_Text_0
# 121 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
# 122 "data/maps/Hoenn2_4/scripts.pory"
	releaseall
	end


Hoenn2_7_EventScript_BirchBag::
# 129 "data/maps/Hoenn2_4/scripts.pory"
	lockall
# 130 "data/maps/Hoenn2_4/scripts.pory"
	playse SE_CLICK
# 131 "data/maps/Hoenn2_4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 132 "data/maps/Hoenn2_4/scripts.pory"
	setvar VAR_0x8000, 34
# 133 "data/maps/Hoenn2_4/scripts.pory"
	special LoadBirchBagPoolById
# 134 "data/maps/Hoenn2_4/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 135 "data/maps/Hoenn2_4/scripts.pory"
	waitstate
# 137 "data/maps/Hoenn2_4/scripts.pory"
	removeobject HOENN2_7_BIRCHBAG
# 138 "data/maps/Hoenn2_4/scripts.pory"
	setflag FLAG_BIRCHBAG_2_7
# 139 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_EventScript_BirchBag_Text_0
# 141 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
# 142 "data/maps/Hoenn2_4/scripts.pory"
	releaseall
	end


Hoenn2_4_Azumarill_Text_0:
# 17 "data/maps/Hoenn2_4/scripts.pory"
	.string "test$"

Hoenn2_4_Volbeat_Text_0:
# 38 "data/maps/Hoenn2_4/scripts.pory"
	.string "text$"

Hoenn2_4_EventScript_BirchBag_Text_0:
# 79 "data/maps/Hoenn2_4/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"
