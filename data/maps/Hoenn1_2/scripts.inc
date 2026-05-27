Hoenn1_2_MapScripts::
	.byte 0


Hoenn1_2_EventScript_Treecko::
# 6 "data/maps/Hoenn1_2/scripts.pory"
	trainerbattle_single TRAINER_HOENN1_2_TREECKO, Treecko_Intro, Treecko_Outro
# 7 "data/maps/Hoenn1_2/scripts.pory"
	msgbox PostBattle_Treecko, MSGBOX_AUTOCLOSE
# 8 "data/maps/Hoenn1_2/scripts.pory"
	waitmessage
	end


Hoenn1_2_EventScript_Zigzagoon::
# 27 "data/maps/Hoenn1_2/scripts.pory"
	trainerbattle_single TRAINER_HOENN1_2_ZIGZAGOON, Zigzagoon_Intro, Zigzagoon_Outro
# 28 "data/maps/Hoenn1_2/scripts.pory"
	msgbox PostBattle_Zigzagoon, MSGBOX_AUTOCLOSE
# 29 "data/maps/Hoenn1_2/scripts.pory"
	waitmessage
	end


Hoenn1_2_EventScript_BirchBag::
# 48 "data/maps/Hoenn1_2/scripts.pory"
	lockall
# 49 "data/maps/Hoenn1_2/scripts.pory"
	playse SE_CLICK
# 50 "data/maps/Hoenn1_2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 51 "data/maps/Hoenn1_2/scripts.pory"
	special ResetBirchBagWeightedPool
# 53 "data/maps/Hoenn1_2/scripts.pory"
	setvar VAR_0x8000, SPECIES_ZIGZAGOON
# 54 "data/maps/Hoenn1_2/scripts.pory"
	setvar VAR_0x8001, 30
# 55 "data/maps/Hoenn1_2/scripts.pory"
	special AddBirchBagWeightedChoice
# 56 "data/maps/Hoenn1_2/scripts.pory"
	setvar VAR_0x8000, SPECIES_POOCHYENA
# 57 "data/maps/Hoenn1_2/scripts.pory"
	setvar VAR_0x8001, 30
# 58 "data/maps/Hoenn1_2/scripts.pory"
	special AddBirchBagWeightedChoice
# 59 "data/maps/Hoenn1_2/scripts.pory"
	setvar VAR_0x8000, SPECIES_ZIGZAGOON_GALAR
# 60 "data/maps/Hoenn1_2/scripts.pory"
	setvar VAR_0x8001, 20
# 61 "data/maps/Hoenn1_2/scripts.pory"
	special AddBirchBagWeightedChoice
# 62 "data/maps/Hoenn1_2/scripts.pory"
	setvar VAR_0x8000, SPECIES_BIDOOF
# 63 "data/maps/Hoenn1_2/scripts.pory"
	setvar VAR_0x8001, 10
# 64 "data/maps/Hoenn1_2/scripts.pory"
	special AddBirchBagWeightedChoice
# 65 "data/maps/Hoenn1_2/scripts.pory"
	setvar VAR_0x8000, SPECIES_WOOLOO
# 66 "data/maps/Hoenn1_2/scripts.pory"
	setvar VAR_0x8001, 10
# 67 "data/maps/Hoenn1_2/scripts.pory"
	special AddBirchBagWeightedChoice
# 68 "data/maps/Hoenn1_2/scripts.pory"
	setvar VAR_0x8000, SPECIES_BUNNELBY
# 69 "data/maps/Hoenn1_2/scripts.pory"
	setvar VAR_0x8001, 10
# 70 "data/maps/Hoenn1_2/scripts.pory"
	special AddBirchBagWeightedChoice
# 71 "data/maps/Hoenn1_2/scripts.pory"
	setvar VAR_0x8000, SPECIES_LILLIPUP
# 72 "data/maps/Hoenn1_2/scripts.pory"
	setvar VAR_0x8001, 10
# 73 "data/maps/Hoenn1_2/scripts.pory"
	special AddBirchBagWeightedChoice
# 74 "data/maps/Hoenn1_2/scripts.pory"
	setvar VAR_0x8000, SPECIES_TAILLOW
# 75 "data/maps/Hoenn1_2/scripts.pory"
	setvar VAR_0x8001, 10
# 76 "data/maps/Hoenn1_2/scripts.pory"
	special AddBirchBagWeightedChoice
# 77 "data/maps/Hoenn1_2/scripts.pory"
	setvar VAR_0x8000, SPECIES_RALTS
# 78 "data/maps/Hoenn1_2/scripts.pory"
	setvar VAR_0x8001, 10
# 79 "data/maps/Hoenn1_2/scripts.pory"
	special AddBirchBagWeightedChoice
# 80 "data/maps/Hoenn1_2/scripts.pory"
	setvar VAR_0x8000, SPECIES_STANTLER
# 81 "data/maps/Hoenn1_2/scripts.pory"
	setvar VAR_0x8001, 1
# 82 "data/maps/Hoenn1_2/scripts.pory"
	special AddBirchBagWeightedChoice
# 85 "data/maps/Hoenn1_2/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 86 "data/maps/Hoenn1_2/scripts.pory"
	waitstate
# 88 "data/maps/Hoenn1_2/scripts.pory"
	removeobject HOENN1_2_BIRCHBAG
# 89 "data/maps/Hoenn1_2/scripts.pory"
	setflag FLAG_HOENN1_2_BIRCHBAG
# 90 "data/maps/Hoenn1_2/scripts.pory"
	playfanfare MUS_EVOLVED
# 91 "data/maps/Hoenn1_2/scripts.pory"
	msgbox Hoenn1_2_EventScript_BirchBag_Text_0
# 93 "data/maps/Hoenn1_2/scripts.pory"
	waitmessage
# 94 "data/maps/Hoenn1_2/scripts.pory"
	releaseall
	end


Hoenn1_2_EventScript_BirchBag_Text_0:
# 91 "data/maps/Hoenn1_2/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

Treecko_Intro::
# 13 "data/maps/Hoenn1_2/scripts.pory"
	.string "Yo I'm Treecko. Grrr.$"

Treecko_Outro::
# 17 "data/maps/Hoenn1_2/scripts.pory"
	.string "Damn you got me.$"

PostBattle_Treecko::
# 21 "data/maps/Hoenn1_2/scripts.pory"
	.string "I'll get you next time.$"

Zigzagoon_Intro::
# 34 "data/maps/Hoenn1_2/scripts.pory"
	.string "I'm Zigzagoon. I like to go in zigzags.$"

Zigzagoon_Outro::
# 38 "data/maps/Hoenn1_2/scripts.pory"
	.string "Zagoon :($"

PostBattle_Zigzagoon::
# 42 "data/maps/Hoenn1_2/scripts.pory"
	.string "Goon Goon!$"
