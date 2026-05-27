Hoenn1_4_MapScripts::
	.byte 0


Hoenn1_4_EventScript_Wingull::
# 6 "data/maps/Hoenn1_4/scripts.pory"
	trainerbattle_single TRAINER_HOENN1_4_WINGULL, Hoenn1_4_EventScript_Wingull_Text_0, Hoenn1_4_EventScript_Wingull_Text_1
# 7 "data/maps/Hoenn1_4/scripts.pory"
	msgbox Hoenn1_4_EventScript_Wingull_Text_2, MSGBOX_AUTOCLOSE
# 8 "data/maps/Hoenn1_4/scripts.pory"
	waitmessage
	end


Hoenn1_4_EventScript_BirchBag::
# 15 "data/maps/Hoenn1_4/scripts.pory"
	lockall
# 16 "data/maps/Hoenn1_4/scripts.pory"
	playse SE_CLICK
# 17 "data/maps/Hoenn1_4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 18 "data/maps/Hoenn1_4/scripts.pory"
	special ResetBirchBagWeightedPool
# 20 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8000, SPECIES_WINGULL
# 21 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8001, 40
# 22 "data/maps/Hoenn1_4/scripts.pory"
	special AddBirchBagWeightedChoice
# 23 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8000, SPECIES_CHATOT
# 24 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8001, 15
# 25 "data/maps/Hoenn1_4/scripts.pory"
	special AddBirchBagWeightedChoice
# 26 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8000, SPECIES_FLETCHLING
# 27 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8001, 15
# 28 "data/maps/Hoenn1_4/scripts.pory"
	special AddBirchBagWeightedChoice
# 29 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8000, SPECIES_NATU
# 30 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8001, 10
# 31 "data/maps/Hoenn1_4/scripts.pory"
	special AddBirchBagWeightedChoice
# 32 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8000, SPECIES_STARLY
# 33 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8001, 15
# 34 "data/maps/Hoenn1_4/scripts.pory"
	special AddBirchBagWeightedChoice
# 35 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8000, SPECIES_TAILLOW
# 36 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8001, 25
# 37 "data/maps/Hoenn1_4/scripts.pory"
	special AddBirchBagWeightedChoice
# 38 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8000, SPECIES_DUCKLETT
# 39 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8001, 15
# 40 "data/maps/Hoenn1_4/scripts.pory"
	special AddBirchBagWeightedChoice
# 41 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8000, SPECIES_ROOKIDEE
# 42 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8001, 15
# 43 "data/maps/Hoenn1_4/scripts.pory"
	special AddBirchBagWeightedChoice
# 44 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8000, SPECIES_WATTREL
# 45 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8001, 15
# 46 "data/maps/Hoenn1_4/scripts.pory"
	special AddBirchBagWeightedChoice
# 47 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8000, SPECIES_SWABLU
# 48 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8001, 15
# 49 "data/maps/Hoenn1_4/scripts.pory"
	special AddBirchBagWeightedChoice
# 50 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8000, SPECIES_SQUAWKABILLY
# 51 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8001, 2
# 52 "data/maps/Hoenn1_4/scripts.pory"
	special AddBirchBagWeightedChoice
# 53 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8000, SPECIES_MURKROW
# 54 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8001, 2
# 55 "data/maps/Hoenn1_4/scripts.pory"
	special AddBirchBagWeightedChoice
# 59 "data/maps/Hoenn1_4/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 60 "data/maps/Hoenn1_4/scripts.pory"
	waitstate
# 62 "data/maps/Hoenn1_4/scripts.pory"
	removeobject HOENN1_4_BIRCHBAG
# 63 "data/maps/Hoenn1_4/scripts.pory"
	setflag FLAG_HOENN1_4_BIRCHBAG
# 64 "data/maps/Hoenn1_4/scripts.pory"
	playfanfare MUS_EVOLVED
# 65 "data/maps/Hoenn1_4/scripts.pory"
	msgbox Hoenn1_4_EventScript_BirchBag_Text_0
# 67 "data/maps/Hoenn1_4/scripts.pory"
	waitmessage
# 68 "data/maps/Hoenn1_4/scripts.pory"
	releaseall
	end


Hoenn1_4_EventScript_Wingull_Text_0:
# 6 "data/maps/Hoenn1_4/scripts.pory"
	.string "Howdy. I'm wingull. Let's battle!$"

Hoenn1_4_EventScript_Wingull_Text_1:
# 6 "data/maps/Hoenn1_4/scripts.pory"
	.string "More like losegull. Squawk :($"

Hoenn1_4_EventScript_Wingull_Text_2:
# 7 "data/maps/Hoenn1_4/scripts.pory"
	.string "Check out this cool flying trick!$"

Hoenn1_4_EventScript_BirchBag_Text_0:
# 65 "data/maps/Hoenn1_4/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"
