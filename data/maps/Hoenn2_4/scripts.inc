Hoenn2_4_MapScripts::
	.byte 0


Hoenn2_4_Azumarill::
# 5 "data/maps/Hoenn2_4/scripts.pory"
	trainerbattle_single TRAINER_AZUMARILL, Hoenn2_4_Azumarill_Text_0, Hoenn2_4_Azumarill_Text_0
# 6 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_Azumarill_Text_0, MSGBOX_AUTOCLOSE
# 7 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
	end


Hoenn2_4_Doduo::
# 12 "data/maps/Hoenn2_4/scripts.pory"
	trainerbattle_single TRAINER_DODUO, Hoenn2_4_Azumarill_Text_0, Hoenn2_4_Azumarill_Text_0
# 13 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_Azumarill_Text_0, MSGBOX_AUTOCLOSE
# 14 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
	end


Hoenn2_4_Loudred::
# 19 "data/maps/Hoenn2_4/scripts.pory"
	trainerbattle_single TRAINER_LOUDRED, Hoenn2_4_Azumarill_Text_0, Hoenn2_4_Azumarill_Text_0
# 20 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_Azumarill_Text_0, MSGBOX_AUTOCLOSE
# 21 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
	end


Hoenn2_4_Volbeat::
# 26 "data/maps/Hoenn2_4/scripts.pory"
	trainerbattle_double TRAINER_VOLBEATILLUMISE, Hoenn2_4_Azumarill_Text_0, Hoenn2_4_Azumarill_Text_0, Hoenn2_4_Volbeat_Text_0
# 27 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_Azumarill_Text_0, MSGBOX_AUTOCLOSE
# 28 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
	end


Hoenn2_4_Illumise::
# 32 "data/maps/Hoenn2_4/scripts.pory"
	trainerbattle_double TRAINER_VOLBEATILLUMISE, Hoenn2_4_Azumarill_Text_0, Hoenn2_4_Azumarill_Text_0, Hoenn2_4_Volbeat_Text_0
# 33 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_Azumarill_Text_0, MSGBOX_AUTOCLOSE
# 34 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
	end


Hoenn2_4_Plusle::
# 39 "data/maps/Hoenn2_4/scripts.pory"
	trainerbattle_double TRAINER_PLUSLEMINUN, Hoenn2_4_Azumarill_Text_0, Hoenn2_4_Azumarill_Text_0, Hoenn2_4_Azumarill_Text_0
# 40 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_Azumarill_Text_0, MSGBOX_AUTOCLOSE
# 41 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
	end


Hoenn2_4_Minun::
# 45 "data/maps/Hoenn2_4/scripts.pory"
	trainerbattle_double TRAINER_PLUSLEMINUN, Hoenn2_4_Azumarill_Text_0, Hoenn2_4_Azumarill_Text_0, Hoenn2_4_Azumarill_Text_0
# 46 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_Azumarill_Text_0, MSGBOX_AUTOCLOSE
# 47 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
	end


Hoenn2_4_Rival::
# 52 "data/maps/Hoenn2_4/scripts.pory"
	switch VAR_CURRENT_RIVAL
# 53 "data/maps/Hoenn2_4/scripts.pory"
	case 0, Hoenn2_4_Rival_2
# 58 "data/maps/Hoenn2_4/scripts.pory"
	case 1, Hoenn2_4_Rival_3
	return

Hoenn2_4_Rival_2:
# 54 "data/maps/Hoenn2_4/scripts.pory"
	trainerbattle_single TRAINER_GROVYLE, Hoenn2_4_Rival_Text_0, Hoenn2_4_Rival_Text_1
# 55 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_Rival_Text_2, MSGBOX_AUTOCLOSE
# 56 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
	end

Hoenn2_4_Rival_3:
# 59 "data/maps/Hoenn2_4/scripts.pory"
	trainerbattle_single TRAINER_COMBUSKEN, Hoenn2_4_Rival_Text_3, Hoenn2_4_Rival_Text_1
# 60 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_Rival_Text_2, MSGBOX_AUTOCLOSE
# 61 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
	end


Hoenn2_4_EventScript_BirchBag::
# 68 "data/maps/Hoenn2_4/scripts.pory"
	lockall
# 69 "data/maps/Hoenn2_4/scripts.pory"
	playse SE_CLICK
# 70 "data/maps/Hoenn2_4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 71 "data/maps/Hoenn2_4/scripts.pory"
	setvar VAR_0x8000, 34
# 72 "data/maps/Hoenn2_4/scripts.pory"
	special LoadBirchBagPoolById
# 73 "data/maps/Hoenn2_4/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 74 "data/maps/Hoenn2_4/scripts.pory"
	waitstate
# 76 "data/maps/Hoenn2_4/scripts.pory"
	removeobject HOENN2_4_BIRCHBAG
# 77 "data/maps/Hoenn2_4/scripts.pory"
	setflag FLAG_BIRCHBAG_2_4
# 78 "data/maps/Hoenn2_4/scripts.pory"
	playfanfare MUS_EVOLVED
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
	playfanfare MUS_EVOLVED
# 100 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_EventScript_BirchBag_Text_0
# 102 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
# 103 "data/maps/Hoenn2_4/scripts.pory"
	releaseall
	end


Hoenn2_6_EventScript_BirchBag::
# 110 "data/maps/Hoenn2_4/scripts.pory"
	lockall
# 111 "data/maps/Hoenn2_4/scripts.pory"
	playse SE_CLICK
# 112 "data/maps/Hoenn2_4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 113 "data/maps/Hoenn2_4/scripts.pory"
	setvar VAR_0x8000, 34
# 114 "data/maps/Hoenn2_4/scripts.pory"
	special LoadBirchBagPoolById
# 115 "data/maps/Hoenn2_4/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 116 "data/maps/Hoenn2_4/scripts.pory"
	waitstate
# 118 "data/maps/Hoenn2_4/scripts.pory"
	removeobject HOENN2_6_BIRCHBAG
# 119 "data/maps/Hoenn2_4/scripts.pory"
	setflag FLAG_BIRCHBAG_2_6
# 120 "data/maps/Hoenn2_4/scripts.pory"
	playfanfare MUS_EVOLVED
# 121 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_EventScript_BirchBag_Text_0
# 123 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
# 124 "data/maps/Hoenn2_4/scripts.pory"
	releaseall
	end


Hoenn2_7_EventScript_BirchBag::
# 131 "data/maps/Hoenn2_4/scripts.pory"
	lockall
# 132 "data/maps/Hoenn2_4/scripts.pory"
	playse SE_CLICK
# 133 "data/maps/Hoenn2_4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 134 "data/maps/Hoenn2_4/scripts.pory"
	setvar VAR_0x8000, 34
# 135 "data/maps/Hoenn2_4/scripts.pory"
	special LoadBirchBagPoolById
# 136 "data/maps/Hoenn2_4/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 137 "data/maps/Hoenn2_4/scripts.pory"
	waitstate
# 139 "data/maps/Hoenn2_4/scripts.pory"
	removeobject HOENN2_7_BIRCHBAG
# 140 "data/maps/Hoenn2_4/scripts.pory"
	setflag FLAG_BIRCHBAG_2_7
# 141 "data/maps/Hoenn2_4/scripts.pory"
	playfanfare MUS_EVOLVED
# 142 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_EventScript_BirchBag_Text_0
# 144 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
# 145 "data/maps/Hoenn2_4/scripts.pory"
	releaseall
	end


Hoenn2_4_Azumarill_Text_0:
# 5 "data/maps/Hoenn2_4/scripts.pory"
	.string "test$"

Hoenn2_4_Volbeat_Text_0:
# 26 "data/maps/Hoenn2_4/scripts.pory"
	.string "text$"

Hoenn2_4_Rival_Text_0:
# 54 "data/maps/Hoenn2_4/scripts.pory"
	.string "Yo I'm Treecko. Grrr.$"

Hoenn2_4_Rival_Text_1:
# 54 "data/maps/Hoenn2_4/scripts.pory"
	.string "Damn you got me.$"

Hoenn2_4_Rival_Text_2:
# 55 "data/maps/Hoenn2_4/scripts.pory"
	.string "I'll get you next time.$"

Hoenn2_4_Rival_Text_3:
# 59 "data/maps/Hoenn2_4/scripts.pory"
	.string "Yo I'm Torchic. Grrr.$"

Hoenn2_4_EventScript_BirchBag_Text_0:
# 79 "data/maps/Hoenn2_4/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"
