Hoenn1_5_MapScripts::
	.byte 0


Hoenn1_5_EventScript_Oddish::
# 6 "data/maps/Hoenn1_5/scripts.pory"
	trainerbattle_single TRAINER_ODDISH, Hoenn1_5_EventScript_Oddish_Text_0, Hoenn1_5_EventScript_Oddish_Text_1
# 7 "data/maps/Hoenn1_5/scripts.pory"
	msgbox Hoenn1_5_EventScript_Oddish_Text_2, MSGBOX_AUTOCLOSE
# 8 "data/maps/Hoenn1_5/scripts.pory"
	waitmessage
	end


Hoenn1_5_EventScript_Wurmple::
# 15 "data/maps/Hoenn1_5/scripts.pory"
	trainerbattle_single TRAINER_WURMPLE, Hoenn1_5_EventScript_Wurmple_Text_0, Hoenn1_5_EventScript_Wurmple_Text_1
# 16 "data/maps/Hoenn1_5/scripts.pory"
	msgbox Hoenn1_5_EventScript_Wurmple_Text_2, MSGBOX_AUTOCLOSE
# 17 "data/maps/Hoenn1_5/scripts.pory"
	waitmessage
	end


Hoenn1_5_EventScript_BirchBag::
# 24 "data/maps/Hoenn1_5/scripts.pory"
	lockall
# 25 "data/maps/Hoenn1_5/scripts.pory"
	playse SE_CLICK
# 26 "data/maps/Hoenn1_5/scripts.pory"
	fadescreen FADE_TO_BLACK
# 27 "data/maps/Hoenn1_5/scripts.pory"
	special ResetBirchBagWeightedPool
# 29 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8000, SPECIES_ODDISH
# 30 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8001, 20
# 31 "data/maps/Hoenn1_5/scripts.pory"
	special AddBirchBagWeightedChoice
# 32 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8000, SPECIES_BELLSPROUT
# 33 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8001, 10
# 34 "data/maps/Hoenn1_5/scripts.pory"
	special AddBirchBagWeightedChoice
# 35 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8000, SPECIES_WURMPLE
# 36 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8001, 20
# 37 "data/maps/Hoenn1_5/scripts.pory"
	special AddBirchBagWeightedChoice
# 38 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8000, SPECIES_WEEDLE
# 39 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8001, 10
# 40 "data/maps/Hoenn1_5/scripts.pory"
	special AddBirchBagWeightedChoice
# 41 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8000, SPECIES_CATERPIE
# 42 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8001, 10
# 43 "data/maps/Hoenn1_5/scripts.pory"
	special AddBirchBagWeightedChoice
# 44 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8000, SPECIES_COTTONEE
# 45 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8001, 8
# 46 "data/maps/Hoenn1_5/scripts.pory"
	special AddBirchBagWeightedChoice
# 47 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8000, SPECIES_PETILIL
# 48 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8001, 8
# 49 "data/maps/Hoenn1_5/scripts.pory"
	special AddBirchBagWeightedChoice
# 50 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8000, SPECIES_RELLOR
# 51 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8001, 8
# 52 "data/maps/Hoenn1_5/scripts.pory"
	special AddBirchBagWeightedChoice
# 53 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8000, SPECIES_TANGELA
# 54 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8001, 2
# 55 "data/maps/Hoenn1_5/scripts.pory"
	special AddBirchBagWeightedChoice
# 56 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8000, SPECIES_PANSAGE
# 57 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8001, 5
# 58 "data/maps/Hoenn1_5/scripts.pory"
	special AddBirchBagWeightedChoice
# 59 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8000, SPECIES_AIPOM
# 60 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8001, 2
# 61 "data/maps/Hoenn1_5/scripts.pory"
	special AddBirchBagWeightedChoice
# 62 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8000, SPECIES_TAROUNTULA
# 63 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8001, 8
# 64 "data/maps/Hoenn1_5/scripts.pory"
	special AddBirchBagWeightedChoice
# 65 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8000, SPECIES_NYMBLE
# 66 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8001, 8
# 67 "data/maps/Hoenn1_5/scripts.pory"
	special AddBirchBagWeightedChoice
# 71 "data/maps/Hoenn1_5/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 72 "data/maps/Hoenn1_5/scripts.pory"
	waitstate
# 74 "data/maps/Hoenn1_5/scripts.pory"
	removeobject HOENN1_5_BIRCHBAG
# 75 "data/maps/Hoenn1_5/scripts.pory"
	setflag FLAG_HOENN1_5_BIRCHBAG
# 76 "data/maps/Hoenn1_5/scripts.pory"
	playfanfare MUS_EVOLVED
# 77 "data/maps/Hoenn1_5/scripts.pory"
	msgbox Hoenn1_5_EventScript_BirchBag_Text_0
# 79 "data/maps/Hoenn1_5/scripts.pory"
	waitmessage
# 80 "data/maps/Hoenn1_5/scripts.pory"
	releaseall
	end


Hoenn1_5_EventScript_Oddish_Text_0:
# 6 "data/maps/Hoenn1_5/scripts.pory"
	.string "Hello.$"

Hoenn1_5_EventScript_Oddish_Text_1:
# 6 "data/maps/Hoenn1_5/scripts.pory"
	.string "Goodbye.$"

Hoenn1_5_EventScript_Oddish_Text_2:
# 7 "data/maps/Hoenn1_5/scripts.pory"
	.string "Hello again.$"

Hoenn1_5_EventScript_Wurmple_Text_0:
# 15 "data/maps/Hoenn1_5/scripts.pory"
	.string "I'm just a wurm.$"

Hoenn1_5_EventScript_Wurmple_Text_1:
# 15 "data/maps/Hoenn1_5/scripts.pory"
	.string "That was a good battle.$"

Hoenn1_5_EventScript_Wurmple_Text_2:
# 16 "data/maps/Hoenn1_5/scripts.pory"
	.string "Don't talk to me right now.$"

Hoenn1_5_EventScript_BirchBag_Text_0:
# 77 "data/maps/Hoenn1_5/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"
