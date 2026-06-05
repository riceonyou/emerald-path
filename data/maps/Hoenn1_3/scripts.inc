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


Hoenn1_3_EventScript_BirchBag::
# 36 "data/maps/Hoenn1_3/scripts.pory"
	lockall
# 37 "data/maps/Hoenn1_3/scripts.pory"
	playse SE_CLICK
# 38 "data/maps/Hoenn1_3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 39 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8000, 2
# 40 "data/maps/Hoenn1_3/scripts.pory"
	special LoadBirchBagPoolById
# 41 "data/maps/Hoenn1_3/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 42 "data/maps/Hoenn1_3/scripts.pory"
	waitstate
# 44 "data/maps/Hoenn1_3/scripts.pory"
	removeobject HOENN1_3_BIRCHBAG
# 45 "data/maps/Hoenn1_3/scripts.pory"
	setflag FLAG_BIRCHBAG_1_3
# 46 "data/maps/Hoenn1_3/scripts.pory"
	playfanfare MUS_EVOLVED
# 47 "data/maps/Hoenn1_3/scripts.pory"
	msgbox Hoenn1_3_EventScript_BirchBag_Text_0
# 49 "data/maps/Hoenn1_3/scripts.pory"
	waitmessage
# 50 "data/maps/Hoenn1_3/scripts.pory"
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

Hoenn1_3_EventScript_BirchBag_Text_0:
# 47 "data/maps/Hoenn1_3/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

Poochyena_Intro::
# 13 "data/maps/Hoenn1_3/scripts.pory"
	.string "Ruff Ruff! Yena!$"

Poochyena_Outro::
# 17 "data/maps/Hoenn1_3/scripts.pory"
	.string "whimpers$"

PostBattle_Poochyena::
# 21 "data/maps/Hoenn1_3/scripts.pory"
	.string "Yena Poo Poo.$"
