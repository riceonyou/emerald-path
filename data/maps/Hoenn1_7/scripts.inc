Hoenn1_7_MapScripts::
	.byte 0


Hoenn1_7_EventScript_BirchBag::
# 6 "data/maps/Hoenn1_7/scripts.pory"
	lockall
# 7 "data/maps/Hoenn1_7/scripts.pory"
	playse SE_CLICK
# 8 "data/maps/Hoenn1_7/scripts.pory"
	fadescreen FADE_TO_BLACK
# 9 "data/maps/Hoenn1_7/scripts.pory"
	special ResetBirchBagWeightedPool
# 11 "data/maps/Hoenn1_7/scripts.pory"
	setvar VAR_0x8000, SPECIES_MEOWTH
# 12 "data/maps/Hoenn1_7/scripts.pory"
	setvar VAR_0x8001, 25
# 13 "data/maps/Hoenn1_7/scripts.pory"
	special AddBirchBagWeightedChoice
# 14 "data/maps/Hoenn1_7/scripts.pory"
	setvar VAR_0x8000, SPECIES_GLAMEOW
# 15 "data/maps/Hoenn1_7/scripts.pory"
	setvar VAR_0x8001, 25
# 16 "data/maps/Hoenn1_7/scripts.pory"
	special AddBirchBagWeightedChoice
# 17 "data/maps/Hoenn1_7/scripts.pory"
	setvar VAR_0x8000, SPECIES_MEOWTH_ALOLA
# 18 "data/maps/Hoenn1_7/scripts.pory"
	setvar VAR_0x8001, 25
# 19 "data/maps/Hoenn1_7/scripts.pory"
	special AddBirchBagWeightedChoice
# 20 "data/maps/Hoenn1_7/scripts.pory"
	setvar VAR_0x8000, SPECIES_MEOWTH_GALAR
# 21 "data/maps/Hoenn1_7/scripts.pory"
	setvar VAR_0x8001, 25
# 22 "data/maps/Hoenn1_7/scripts.pory"
	special AddBirchBagWeightedChoice
# 23 "data/maps/Hoenn1_7/scripts.pory"
	setvar VAR_0x8000, SPECIES_SKITTY
# 24 "data/maps/Hoenn1_7/scripts.pory"
	setvar VAR_0x8001, 30
# 25 "data/maps/Hoenn1_7/scripts.pory"
	special AddBirchBagWeightedChoice
# 26 "data/maps/Hoenn1_7/scripts.pory"
	setvar VAR_0x8000, SPECIES_ESPURR
# 27 "data/maps/Hoenn1_7/scripts.pory"
	setvar VAR_0x8001, 20
# 28 "data/maps/Hoenn1_7/scripts.pory"
	special AddBirchBagWeightedChoice
# 29 "data/maps/Hoenn1_7/scripts.pory"
	setvar VAR_0x8000, SPECIES_PURRLOIN
# 30 "data/maps/Hoenn1_7/scripts.pory"
	setvar VAR_0x8001, 20
# 31 "data/maps/Hoenn1_7/scripts.pory"
	special AddBirchBagWeightedChoice
# 32 "data/maps/Hoenn1_7/scripts.pory"
	setvar VAR_0x8000, SPECIES_MEOWSTIC
# 33 "data/maps/Hoenn1_7/scripts.pory"
	setvar VAR_0x8001, 10
# 34 "data/maps/Hoenn1_7/scripts.pory"
	special AddBirchBagWeightedChoice
# 35 "data/maps/Hoenn1_7/scripts.pory"
	setvar VAR_0x8000, SPECIES_SHINX
# 36 "data/maps/Hoenn1_7/scripts.pory"
	setvar VAR_0x8001, 15
# 37 "data/maps/Hoenn1_7/scripts.pory"
	special AddBirchBagWeightedChoice
# 38 "data/maps/Hoenn1_7/scripts.pory"
	setvar VAR_0x8000, SPECIES_LITLEO
# 39 "data/maps/Hoenn1_7/scripts.pory"
	setvar VAR_0x8001, 15
# 40 "data/maps/Hoenn1_7/scripts.pory"
	special AddBirchBagWeightedChoice
# 41 "data/maps/Hoenn1_7/scripts.pory"
	setvar VAR_0x8000, SPECIES_LITTEN
# 42 "data/maps/Hoenn1_7/scripts.pory"
	setvar VAR_0x8001, 5
# 43 "data/maps/Hoenn1_7/scripts.pory"
	special AddBirchBagWeightedChoice
# 44 "data/maps/Hoenn1_7/scripts.pory"
	setvar VAR_0x8000, SPECIES_EEVEE
# 45 "data/maps/Hoenn1_7/scripts.pory"
	setvar VAR_0x8001, 5
# 46 "data/maps/Hoenn1_7/scripts.pory"
	special AddBirchBagWeightedChoice
# 50 "data/maps/Hoenn1_7/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 51 "data/maps/Hoenn1_7/scripts.pory"
	waitstate
# 53 "data/maps/Hoenn1_7/scripts.pory"
	removeobject HOENN1_7_BIRCHBAG
# 54 "data/maps/Hoenn1_7/scripts.pory"
	setflag FLAG_HOENN1_7_BIRCHBAG
# 55 "data/maps/Hoenn1_7/scripts.pory"
	playfanfare MUS_EVOLVED
# 56 "data/maps/Hoenn1_7/scripts.pory"
	msgbox Hoenn1_7_EventScript_BirchBag_Text_0
# 58 "data/maps/Hoenn1_7/scripts.pory"
	waitmessage
# 59 "data/maps/Hoenn1_7/scripts.pory"
	releaseall
	end


Hoenn1_7_EventScript_BirchBag_Text_0:
# 56 "data/maps/Hoenn1_7/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"
