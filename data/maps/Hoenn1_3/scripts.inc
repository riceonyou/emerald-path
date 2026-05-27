Hoenn1_3_MapScripts::
	.byte 0


Hoenn1_3_EventScript_Poochyena::
# 6 "data/maps/Hoenn1_3/scripts.pory"
	trainerbattle_single TRAINER_HOENN1_3_POOCHYENA, Poochyena_Intro, Poochyena_Outro
# 7 "data/maps/Hoenn1_3/scripts.pory"
	msgbox PostBattle_Poochyena, MSGBOX_AUTOCLOSE
# 8 "data/maps/Hoenn1_3/scripts.pory"
	waitmessage
	end


Hoenn1_3_EventScript_Lotad::
# 27 "data/maps/Hoenn1_3/scripts.pory"
	trainerbattle_single TRAINER_HOENN1_3_LOTAD, Hoenn1_3_EventScript_Lotad_Text_0, Hoenn1_3_EventScript_Lotad_Text_1
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
	special ResetBirchBagWeightedPool
# 41 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8000, SPECIES_SLAKOTH
# 42 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8001, 15
# 43 "data/maps/Hoenn1_3/scripts.pory"
	special AddBirchBagWeightedChoice
# 44 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8000, SPECIES_SKIDDO
# 45 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8001, 15
# 46 "data/maps/Hoenn1_3/scripts.pory"
	special AddBirchBagWeightedChoice
# 47 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8000, SPECIES_SURSKIT
# 48 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8001, 15
# 49 "data/maps/Hoenn1_3/scripts.pory"
	special AddBirchBagWeightedChoice
# 50 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8000, SPECIES_YANMA
# 51 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8001, 10
# 52 "data/maps/Hoenn1_3/scripts.pory"
	special AddBirchBagWeightedChoice
# 53 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8000, SPECIES_SHROOMISH
# 54 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8001, 25
# 55 "data/maps/Hoenn1_3/scripts.pory"
	special AddBirchBagWeightedChoice
# 56 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8000, SPECIES_EXEGGCUTE
# 57 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8001, 15
# 58 "data/maps/Hoenn1_3/scripts.pory"
	special AddBirchBagWeightedChoice
# 59 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8000, SPECIES_LOTAD
# 60 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8001, 30
# 61 "data/maps/Hoenn1_3/scripts.pory"
	special AddBirchBagWeightedChoice
# 62 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8000, SPECIES_SEEDOT
# 63 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8001, 30
# 64 "data/maps/Hoenn1_3/scripts.pory"
	special AddBirchBagWeightedChoice
# 65 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8000, SPECIES_SENTRET
# 66 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8001, 5
# 67 "data/maps/Hoenn1_3/scripts.pory"
	special AddBirchBagWeightedChoice
# 68 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8000, SPECIES_APPLIN
# 69 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8001, 5
# 70 "data/maps/Hoenn1_3/scripts.pory"
	special AddBirchBagWeightedChoice
# 71 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8000, SPECIES_CAPSAKID
# 72 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8001, 2
# 73 "data/maps/Hoenn1_3/scripts.pory"
	special AddBirchBagWeightedChoice
# 74 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8000, SPECIES_SCYTHER
# 75 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8001, 2
# 76 "data/maps/Hoenn1_3/scripts.pory"
	special AddBirchBagWeightedChoice
# 79 "data/maps/Hoenn1_3/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 80 "data/maps/Hoenn1_3/scripts.pory"
	waitstate
# 82 "data/maps/Hoenn1_3/scripts.pory"
	removeobject HOENN1_3_BIRCHBAG
# 83 "data/maps/Hoenn1_3/scripts.pory"
	setflag FLAG_HOENN1_3_BIRCHBAG
# 84 "data/maps/Hoenn1_3/scripts.pory"
	playfanfare MUS_EVOLVED
# 85 "data/maps/Hoenn1_3/scripts.pory"
	msgbox Hoenn1_3_EventScript_BirchBag_Text_0
# 87 "data/maps/Hoenn1_3/scripts.pory"
	waitmessage
# 88 "data/maps/Hoenn1_3/scripts.pory"
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
# 85 "data/maps/Hoenn1_3/scripts.pory"
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
