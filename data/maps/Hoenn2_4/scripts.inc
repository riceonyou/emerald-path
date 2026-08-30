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
	playfanfare MUS_EVOLVED
# 80 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_EventScript_BirchBag_Text_0
# 82 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
# 83 "data/maps/Hoenn2_4/scripts.pory"
	releaseall
	end


Hoenn2_5_EventScript_BirchBag::
# 90 "data/maps/Hoenn2_4/scripts.pory"
	lockall
# 91 "data/maps/Hoenn2_4/scripts.pory"
	playse SE_CLICK
# 92 "data/maps/Hoenn2_4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 93 "data/maps/Hoenn2_4/scripts.pory"
	setvar VAR_0x8000, 34
# 94 "data/maps/Hoenn2_4/scripts.pory"
	special LoadBirchBagPoolById
# 95 "data/maps/Hoenn2_4/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 96 "data/maps/Hoenn2_4/scripts.pory"
	waitstate
# 98 "data/maps/Hoenn2_4/scripts.pory"
	removeobject HOENN2_5_BIRCHBAG
# 99 "data/maps/Hoenn2_4/scripts.pory"
	setflag FLAG_BIRCHBAG_2_5
# 100 "data/maps/Hoenn2_4/scripts.pory"
	playfanfare MUS_EVOLVED
# 101 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_EventScript_BirchBag_Text_0
# 103 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
# 104 "data/maps/Hoenn2_4/scripts.pory"
	releaseall
	end


Hoenn2_6_EventScript_BirchBag::
# 111 "data/maps/Hoenn2_4/scripts.pory"
	lockall
# 112 "data/maps/Hoenn2_4/scripts.pory"
	playse SE_CLICK
# 113 "data/maps/Hoenn2_4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 114 "data/maps/Hoenn2_4/scripts.pory"
	setvar VAR_0x8000, 34
# 115 "data/maps/Hoenn2_4/scripts.pory"
	special LoadBirchBagPoolById
# 116 "data/maps/Hoenn2_4/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 117 "data/maps/Hoenn2_4/scripts.pory"
	waitstate
# 119 "data/maps/Hoenn2_4/scripts.pory"
	removeobject HOENN2_6_BIRCHBAG
# 120 "data/maps/Hoenn2_4/scripts.pory"
	setflag FLAG_BIRCHBAG_2_6
# 121 "data/maps/Hoenn2_4/scripts.pory"
	playfanfare MUS_EVOLVED
# 122 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_EventScript_BirchBag_Text_0
# 124 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
# 125 "data/maps/Hoenn2_4/scripts.pory"
	releaseall
	end


Hoenn2_7_EventScript_BirchBag::
# 132 "data/maps/Hoenn2_4/scripts.pory"
	lockall
# 133 "data/maps/Hoenn2_4/scripts.pory"
	playse SE_CLICK
# 134 "data/maps/Hoenn2_4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 135 "data/maps/Hoenn2_4/scripts.pory"
	setvar VAR_0x8000, 34
# 136 "data/maps/Hoenn2_4/scripts.pory"
	special LoadBirchBagPoolById
# 137 "data/maps/Hoenn2_4/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 138 "data/maps/Hoenn2_4/scripts.pory"
	waitstate
# 140 "data/maps/Hoenn2_4/scripts.pory"
	removeobject HOENN2_7_BIRCHBAG
# 141 "data/maps/Hoenn2_4/scripts.pory"
	setflag FLAG_BIRCHBAG_2_7
# 142 "data/maps/Hoenn2_4/scripts.pory"
	playfanfare MUS_EVOLVED
# 143 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_EventScript_BirchBag_Text_0
# 145 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
# 146 "data/maps/Hoenn2_4/scripts.pory"
	releaseall
	end


Hoenn2_4_Azumarill_Text_0:
# 17 "data/maps/Hoenn2_4/scripts.pory"
	.string "test$"

Hoenn2_4_Volbeat_Text_0:
# 38 "data/maps/Hoenn2_4/scripts.pory"
	.string "text$"

Hoenn2_4_EventScript_BirchBag_Text_0:
# 80 "data/maps/Hoenn2_4/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"
