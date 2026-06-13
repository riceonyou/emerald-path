Hoenn1_4_MapScripts::
	.byte 0


Hoenn1_4_EventScript_Wingull::
# 6 "data/maps/Hoenn1_4/scripts.pory"
	trainerbattle_single TRAINER_WINGULL, Hoenn1_4_EventScript_Wingull_Text_0, Hoenn1_4_EventScript_Wingull_Text_1
# 7 "data/maps/Hoenn1_4/scripts.pory"
	msgbox Hoenn1_4_EventScript_Wingull_Text_2, MSGBOX_AUTOCLOSE
# 8 "data/maps/Hoenn1_4/scripts.pory"
	waitmessage
	end


Hoenn1_4_EventScript_Seedot::
# 15 "data/maps/Hoenn1_4/scripts.pory"
	trainerbattle_single TRAINER_SEEDOT, Hoenn1_4_EventScript_Wingull_Text_0, Hoenn1_4_EventScript_Wingull_Text_1
# 16 "data/maps/Hoenn1_4/scripts.pory"
	msgbox Hoenn1_4_EventScript_Wingull_Text_2, MSGBOX_AUTOCLOSE
# 17 "data/maps/Hoenn1_4/scripts.pory"
	waitmessage
	end


Hoenn1_4_EventScript_BirchBag::
# 24 "data/maps/Hoenn1_4/scripts.pory"
	lockall
# 25 "data/maps/Hoenn1_4/scripts.pory"
	playse SE_CLICK
# 26 "data/maps/Hoenn1_4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 27 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8000, 3
# 28 "data/maps/Hoenn1_4/scripts.pory"
	special LoadBirchBagPoolById
# 29 "data/maps/Hoenn1_4/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 30 "data/maps/Hoenn1_4/scripts.pory"
	waitstate
# 32 "data/maps/Hoenn1_4/scripts.pory"
	removeobject HOENN1_4_BIRCHBAG
# 33 "data/maps/Hoenn1_4/scripts.pory"
	setflag FLAG_BIRCHBAG_1_5
# 34 "data/maps/Hoenn1_4/scripts.pory"
	playfanfare MUS_EVOLVED
# 35 "data/maps/Hoenn1_4/scripts.pory"
	msgbox Hoenn1_4_EventScript_BirchBag_Text_0
# 37 "data/maps/Hoenn1_4/scripts.pory"
	waitmessage
# 38 "data/maps/Hoenn1_4/scripts.pory"
	releaseall
	end


Hoenn1_BirchBag_5::
# 45 "data/maps/Hoenn1_4/scripts.pory"
	lockall
# 46 "data/maps/Hoenn1_4/scripts.pory"
	playse SE_CLICK
# 47 "data/maps/Hoenn1_4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 48 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8000, 3
# 49 "data/maps/Hoenn1_4/scripts.pory"
	special LoadBirchBagPoolById
# 50 "data/maps/Hoenn1_4/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 51 "data/maps/Hoenn1_4/scripts.pory"
	waitstate
# 53 "data/maps/Hoenn1_4/scripts.pory"
	removeobject HOENN1_5_BIRCHBAG
# 54 "data/maps/Hoenn1_4/scripts.pory"
	setflag FLAG_BIRCHBAG_1_5
# 55 "data/maps/Hoenn1_4/scripts.pory"
	playfanfare MUS_EVOLVED
# 56 "data/maps/Hoenn1_4/scripts.pory"
	msgbox Hoenn1_4_EventScript_BirchBag_Text_0
# 58 "data/maps/Hoenn1_4/scripts.pory"
	waitmessage
# 59 "data/maps/Hoenn1_4/scripts.pory"
	releaseall
	end


Hoenn1_BirchBag_6::
# 66 "data/maps/Hoenn1_4/scripts.pory"
	lockall
# 67 "data/maps/Hoenn1_4/scripts.pory"
	playse SE_CLICK
# 68 "data/maps/Hoenn1_4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 69 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8000, 3
# 70 "data/maps/Hoenn1_4/scripts.pory"
	special LoadBirchBagPoolById
# 71 "data/maps/Hoenn1_4/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 72 "data/maps/Hoenn1_4/scripts.pory"
	waitstate
# 74 "data/maps/Hoenn1_4/scripts.pory"
	removeobject HOENN1_6_BIRCHBAG
# 75 "data/maps/Hoenn1_4/scripts.pory"
	setflag FLAG_BIRCHBAG_1_6
# 76 "data/maps/Hoenn1_4/scripts.pory"
	playfanfare MUS_EVOLVED
# 77 "data/maps/Hoenn1_4/scripts.pory"
	msgbox Hoenn1_4_EventScript_BirchBag_Text_0
# 79 "data/maps/Hoenn1_4/scripts.pory"
	waitmessage
# 80 "data/maps/Hoenn1_4/scripts.pory"
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
# 35 "data/maps/Hoenn1_4/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"
