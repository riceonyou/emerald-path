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
	msgbox Hoenn1_BirchBag_4_Text_0
# 48 "data/maps/Hoenn1_3/scripts.pory"
	waitmessage
# 49 "data/maps/Hoenn1_3/scripts.pory"
	releaseall
	end


Hoenn1_4_EventScript_Wingull::
# 56 "data/maps/Hoenn1_3/scripts.pory"
	trainerbattle_single TRAINER_WINGULL, Hoenn1_4_EventScript_Wingull_Text_0, Hoenn1_4_EventScript_Wingull_Text_1
# 57 "data/maps/Hoenn1_3/scripts.pory"
	msgbox Hoenn1_4_EventScript_Wingull_Text_2, MSGBOX_AUTOCLOSE
# 58 "data/maps/Hoenn1_3/scripts.pory"
	waitmessage
	end


Hoenn1_4_EventScript_Seedot::
# 65 "data/maps/Hoenn1_3/scripts.pory"
	trainerbattle_single TRAINER_SEEDOT, Hoenn1_4_EventScript_Seedot_Text_0, Hoenn1_4_EventScript_Seedot_Text_1
# 66 "data/maps/Hoenn1_3/scripts.pory"
	msgbox Hoenn1_4_EventScript_Seedot_Text_2, MSGBOX_AUTOCLOSE
# 67 "data/maps/Hoenn1_3/scripts.pory"
	waitmessage
	end


Hoenn1_BirchBag_5::
# 75 "data/maps/Hoenn1_3/scripts.pory"
	lockall
# 76 "data/maps/Hoenn1_3/scripts.pory"
	playse SE_CLICK
# 77 "data/maps/Hoenn1_3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 78 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8000, 33
# 79 "data/maps/Hoenn1_3/scripts.pory"
	special LoadBirchBagPoolById
# 80 "data/maps/Hoenn1_3/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 81 "data/maps/Hoenn1_3/scripts.pory"
	waitstate
# 83 "data/maps/Hoenn1_3/scripts.pory"
	removeobject HOENN1_5_BIRCHBAG
# 84 "data/maps/Hoenn1_3/scripts.pory"
	setflag FLAG_BIRCHBAG_1_5
# 85 "data/maps/Hoenn1_3/scripts.pory"
	msgbox Hoenn1_BirchBag_4_Text_0
# 87 "data/maps/Hoenn1_3/scripts.pory"
	waitmessage
# 88 "data/maps/Hoenn1_3/scripts.pory"
	releaseall
	end


Hoenn1_BirchBag_6::
# 95 "data/maps/Hoenn1_3/scripts.pory"
	lockall
# 96 "data/maps/Hoenn1_3/scripts.pory"
	playse SE_CLICK
# 97 "data/maps/Hoenn1_3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 98 "data/maps/Hoenn1_3/scripts.pory"
	setvar VAR_0x8000, 33
# 99 "data/maps/Hoenn1_3/scripts.pory"
	special LoadBirchBagPoolById
# 100 "data/maps/Hoenn1_3/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 101 "data/maps/Hoenn1_3/scripts.pory"
	waitstate
# 103 "data/maps/Hoenn1_3/scripts.pory"
	removeobject HOENN1_6_BIRCHBAG
# 104 "data/maps/Hoenn1_3/scripts.pory"
	setflag FLAG_BIRCHBAG_1_6
# 105 "data/maps/Hoenn1_3/scripts.pory"
	msgbox Hoenn1_BirchBag_4_Text_0
# 107 "data/maps/Hoenn1_3/scripts.pory"
	waitmessage
# 108 "data/maps/Hoenn1_3/scripts.pory"
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
	.string "Que pasa amigo. No hablo English,\nlo siento.$"

Hoenn1_BirchBag_4_Text_0:
# 46 "data/maps/Hoenn1_3/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

Hoenn1_4_EventScript_Wingull_Text_0:
# 56 "data/maps/Hoenn1_3/scripts.pory"
	.string "Howdy. I'm wingull. Let's battle!$"

Hoenn1_4_EventScript_Wingull_Text_1:
# 56 "data/maps/Hoenn1_3/scripts.pory"
	.string "They should call me losegull, not\nwingull. Squawk :($"

Hoenn1_4_EventScript_Wingull_Text_2:
# 57 "data/maps/Hoenn1_3/scripts.pory"
	.string "Did you know you can nickname pokemon\n"
	.string "by pressing A on the summary page? I'm\l"
	.string "nicknaming myself Losegull right now.$"

Hoenn1_4_EventScript_Seedot_Text_0:
# 65 "data/maps/Hoenn1_3/scripts.pory"
	.string "Hi. I'm about to sow some of my seed\n"
	.string "inside of you >:)\p"
	.string "...Just kidding. I'm going to sow it on\n"
	.string "the ground. Because of my seed sower\l"
	.string "ability.$"

Hoenn1_4_EventScript_Seedot_Text_1:
# 65 "data/maps/Hoenn1_3/scripts.pory"
	.string "Sorry for that joke earlier...$"

Hoenn1_4_EventScript_Seedot_Text_2:
# 66 "data/maps/Hoenn1_3/scripts.pory"
	.string "I wonder what noise an acorn makes...$"

Poochyena_Intro::
# 13 "data/maps/Hoenn1_3/scripts.pory"
	.string "Ruff Ruff! Yena!$"

Poochyena_Outro::
# 17 "data/maps/Hoenn1_3/scripts.pory"
	.string "whimpers$"

PostBattle_Poochyena::
# 21 "data/maps/Hoenn1_3/scripts.pory"
	.string "Yena Poo Poo.\p...\p......\pI can speak English by the way.$"
