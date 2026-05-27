Hoenn1_6_MapScripts::
	.byte 0


Hoenn1_6_EventScript_BirchBag::
# 6 "data/maps/Hoenn1_6/scripts.pory"
	lockall
# 7 "data/maps/Hoenn1_6/scripts.pory"
	playse SE_CLICK
# 8 "data/maps/Hoenn1_6/scripts.pory"
	fadescreen FADE_TO_BLACK
# 9 "data/maps/Hoenn1_6/scripts.pory"
	special ResetBirchBagWeightedPool
# 11 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8000, SPECIES_AZURILL
# 12 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8001, 20
# 13 "data/maps/Hoenn1_6/scripts.pory"
	special AddBirchBagWeightedChoice
# 14 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8000, SPECIES_BUDEW
# 15 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8001, 20
# 16 "data/maps/Hoenn1_6/scripts.pory"
	special AddBirchBagWeightedChoice
# 17 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8000, SPECIES_FLABEBE
# 18 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8001, 20
# 19 "data/maps/Hoenn1_6/scripts.pory"
	special AddBirchBagWeightedChoice
# 20 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8000, SPECIES_SUNKERN
# 21 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8001, 20
# 22 "data/maps/Hoenn1_6/scripts.pory"
	special AddBirchBagWeightedChoice
# 23 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8000, SPECIES_CHERUBI
# 24 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8001, 20
# 25 "data/maps/Hoenn1_6/scripts.pory"
	special AddBirchBagWeightedChoice
# 26 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8000, SPECIES_GOSSIFLEUR
# 27 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8001, 20
# 28 "data/maps/Hoenn1_6/scripts.pory"
	special AddBirchBagWeightedChoice
# 29 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8000, SPECIES_SEWADDLE
# 30 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8001, 20
# 31 "data/maps/Hoenn1_6/scripts.pory"
	special AddBirchBagWeightedChoice
# 32 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8000, SPECIES_BURMY_PLANT
# 33 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8001, 20
# 34 "data/maps/Hoenn1_6/scripts.pory"
	special AddBirchBagWeightedChoice
# 35 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8000, SPECIES_CUTIEFLY
# 36 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8001, 20
# 37 "data/maps/Hoenn1_6/scripts.pory"
	special AddBirchBagWeightedChoice
# 38 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8000, SPECIES_LOTAD
# 39 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8001, 25
# 40 "data/maps/Hoenn1_6/scripts.pory"
	special AddBirchBagWeightedChoice
# 41 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8000, SPECIES_SEEDOT
# 42 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8001, 25
# 43 "data/maps/Hoenn1_6/scripts.pory"
	special AddBirchBagWeightedChoice
# 44 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8000, SPECIES_FOMANTIS
# 45 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8001, 20
# 46 "data/maps/Hoenn1_6/scripts.pory"
	special AddBirchBagWeightedChoice
# 47 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8000, SPECIES_COMFEY
# 48 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8001, 5
# 49 "data/maps/Hoenn1_6/scripts.pory"
	special AddBirchBagWeightedChoice
# 53 "data/maps/Hoenn1_6/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 54 "data/maps/Hoenn1_6/scripts.pory"
	waitstate
# 56 "data/maps/Hoenn1_6/scripts.pory"
	removeobject HOENN1_6_BIRCHBAG
# 57 "data/maps/Hoenn1_6/scripts.pory"
	setflag FLAG_HOENN1_6_BIRCHBAG
# 58 "data/maps/Hoenn1_6/scripts.pory"
	playfanfare MUS_EVOLVED
# 59 "data/maps/Hoenn1_6/scripts.pory"
	msgbox Hoenn1_6_EventScript_BirchBag_Text_0
# 61 "data/maps/Hoenn1_6/scripts.pory"
	waitmessage
# 62 "data/maps/Hoenn1_6/scripts.pory"
	releaseall
	end


Hoenn1_6_EventScript_BirchBag_Text_0:
# 59 "data/maps/Hoenn1_6/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"
