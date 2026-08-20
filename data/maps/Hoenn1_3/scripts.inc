Hoenn1_3_MapScripts::
	.byte 0


Hoenn1_3_EventScript_Poochyena::
# 6 "data/maps/Hoenn1_3/scripts.pory"
	trainerbattle_single TRAINER_POOCHYENA, Poochyena_Intro, Poochyena_Outro
# 7 "data/maps/Hoenn1_3/scripts.pory"
	msgbox PostBattle_Poochyena, MSGBOX_AUTOCLOSE
# 8 "data/maps/Hoenn1_3/scripts.pory"
	waitmessage
	end


Hoenn1_3_EventScript_Lotad::
# 27 "data/maps/Hoenn1_3/scripts.pory"
	trainerbattle_single TRAINER_LOTAD, Hoenn1_3_EventScript_Lotad_Text_0, Hoenn1_3_EventScript_Lotad_Text_1
# 28 "data/maps/Hoenn1_3/scripts.pory"
	msgbox Hoenn1_3_EventScript_Lotad_Text_2, MSGBOX_AUTOCLOSE
# 29 "data/maps/Hoenn1_3/scripts.pory"
	waitmessage
	end


Hoenn1_BirchBag_4::
# 36 "data/maps/Hoenn1_3/scripts.pory"
	lockall
# 37 "data/maps/Hoenn1_3/scripts.pory"
	playse SE_CLICK
# 38 "data/maps/Hoenn1_3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 39 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8000, 33
# 40 "data/maps/Hoenn1_3/scripts.pory"
	special LoadBirchBagPoolById
# 41 "data/maps/Hoenn1_3/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 42 "data/maps/Hoenn1_3/scripts.pory"
	waitstate
# 44 "data/maps/Hoenn1_3/scripts.pory"
	removeobject HOENN1_4_BIRCHBAG
# 45 "data/maps/Hoenn1_3/scripts.pory"
	setflag FLAG_BIRCHBAG_1_4
# 46 "data/maps/Hoenn1_3/scripts.pory"
	playfanfare MUS_EVOLVED
# 47 "data/maps/Hoenn1_3/scripts.pory"
	msgbox Hoenn1_BirchBag_4_Text_0
# 49 "data/maps/Hoenn1_3/scripts.pory"
	waitmessage
# 50 "data/maps/Hoenn1_3/scripts.pory"
	releaseall
	end


Hoenn1_4_EventScript_Wingull::
# 57 "data/maps/Hoenn1_3/scripts.pory"
	trainerbattle_single TRAINER_WINGULL, Hoenn1_4_EventScript_Wingull_Text_0, Hoenn1_4_EventScript_Wingull_Text_1
# 58 "data/maps/Hoenn1_3/scripts.pory"
	msgbox Hoenn1_4_EventScript_Wingull_Text_2, MSGBOX_AUTOCLOSE
# 59 "data/maps/Hoenn1_3/scripts.pory"
	waitmessage
	end


Hoenn1_4_EventScript_Seedot::
# 66 "data/maps/Hoenn1_3/scripts.pory"
	trainerbattle_single TRAINER_SEEDOT, Hoenn1_4_EventScript_Wingull_Text_0, Hoenn1_4_EventScript_Wingull_Text_1
# 67 "data/maps/Hoenn1_3/scripts.pory"
	msgbox Hoenn1_4_EventScript_Wingull_Text_2, MSGBOX_AUTOCLOSE
# 68 "data/maps/Hoenn1_3/scripts.pory"
	waitmessage
	end


Hoenn1_BirchBag_5::
# 76 "data/maps/Hoenn1_3/scripts.pory"
	lockall
# 77 "data/maps/Hoenn1_3/scripts.pory"
	playse SE_CLICK
# 78 "data/maps/Hoenn1_3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 79 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8000, 33
# 80 "data/maps/Hoenn1_3/scripts.pory"
	special LoadBirchBagPoolById
# 81 "data/maps/Hoenn1_3/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 82 "data/maps/Hoenn1_3/scripts.pory"
	waitstate
# 84 "data/maps/Hoenn1_3/scripts.pory"
	removeobject HOENN1_5_BIRCHBAG
# 85 "data/maps/Hoenn1_3/scripts.pory"
	setflag FLAG_BIRCHBAG_1_5
# 86 "data/maps/Hoenn1_3/scripts.pory"
	playfanfare MUS_EVOLVED
# 87 "data/maps/Hoenn1_3/scripts.pory"
	msgbox Hoenn1_BirchBag_4_Text_0
# 89 "data/maps/Hoenn1_3/scripts.pory"
	waitmessage
# 90 "data/maps/Hoenn1_3/scripts.pory"
	releaseall
	end


Hoenn1_BirchBag_6::
# 97 "data/maps/Hoenn1_3/scripts.pory"
	lockall
# 98 "data/maps/Hoenn1_3/scripts.pory"
	playse SE_CLICK
# 99 "data/maps/Hoenn1_3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 100 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8000, 33
# 101 "data/maps/Hoenn1_3/scripts.pory"
	special LoadBirchBagPoolById
# 102 "data/maps/Hoenn1_3/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 103 "data/maps/Hoenn1_3/scripts.pory"
	waitstate
# 105 "data/maps/Hoenn1_3/scripts.pory"
	removeobject HOENN1_6_BIRCHBAG
# 106 "data/maps/Hoenn1_3/scripts.pory"
	setflag FLAG_BIRCHBAG_1_6
# 107 "data/maps/Hoenn1_3/scripts.pory"
	playfanfare MUS_EVOLVED
# 108 "data/maps/Hoenn1_3/scripts.pory"
	msgbox Hoenn1_BirchBag_4_Text_0
# 110 "data/maps/Hoenn1_3/scripts.pory"
	waitmessage
# 111 "data/maps/Hoenn1_3/scripts.pory"
	releaseall
	end


Hoenn1_3_EventScript_Lotad_Text_0:
# 27 "data/maps/Hoenn1_3/scripts.pory"
	.string "Hola. Me llamo Lotad.$"

Hoenn1_3_EventScript_Lotad_Text_1:
# 27 "data/maps/Hoenn1_3/scripts.pory"
	.string "He perdido.$"

Hoenn1_3_EventScript_Lotad_Text_2:
# 28 "data/maps/Hoenn1_3/scripts.pory"
	.string "Que pasa amigo.$"

Hoenn1_BirchBag_4_Text_0:
# 47 "data/maps/Hoenn1_3/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

Hoenn1_4_EventScript_Wingull_Text_0:
# 57 "data/maps/Hoenn1_3/scripts.pory"
	.string "Howdy. I'm wingull. Let's battle!$"

Hoenn1_4_EventScript_Wingull_Text_1:
# 57 "data/maps/Hoenn1_3/scripts.pory"
	.string "More like losegull. Squawk :($"

Hoenn1_4_EventScript_Wingull_Text_2:
# 58 "data/maps/Hoenn1_3/scripts.pory"
	.string "Check out this cool flying trick!$"

Poochyena_Intro::
# 13 "data/maps/Hoenn1_3/scripts.pory"
	.string "Ruff Ruff! Yena!$"

Poochyena_Outro::
# 17 "data/maps/Hoenn1_3/scripts.pory"
	.string "whimpers$"

PostBattle_Poochyena::
# 21 "data/maps/Hoenn1_3/scripts.pory"
	.string "Yena Poo Poo.$"
