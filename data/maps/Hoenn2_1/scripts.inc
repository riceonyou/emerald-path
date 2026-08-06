Hoenn2_1_MapScripts::
	.byte 0


Hoenn2_1_Pelipper::
# 8 "data/maps/Hoenn2_1/scripts.pory"
	trainerbattle_single TRAINER_PELIPPER, Hoenn2_1_Pelipper_Text_0, Hoenn2_1_Pelipper_Text_0
# 9 "data/maps/Hoenn2_1/scripts.pory"
	msgbox Hoenn2_1_Pelipper_Text_0, MSGBOX_AUTOCLOSE
# 10 "data/maps/Hoenn2_1/scripts.pory"
	waitmessage
	end


Hoenn2_1_Wailmer::
# 17 "data/maps/Hoenn2_1/scripts.pory"
	trainerbattle_single TRAINER_WAILMER, Hoenn2_1_Pelipper_Text_0, Hoenn2_1_Pelipper_Text_0
# 18 "data/maps/Hoenn2_1/scripts.pory"
	msgbox Hoenn2_1_Pelipper_Text_0, MSGBOX_AUTOCLOSE
# 19 "data/maps/Hoenn2_1/scripts.pory"
	waitmessage
	end


Hoenn2_1_Sharpedo::
# 26 "data/maps/Hoenn2_1/scripts.pory"
	trainerbattle_single TRAINER_SHARPEDO, Hoenn2_1_Pelipper_Text_0, Hoenn2_1_Pelipper_Text_0
# 27 "data/maps/Hoenn2_1/scripts.pory"
	msgbox Hoenn2_1_Pelipper_Text_0, MSGBOX_AUTOCLOSE
# 28 "data/maps/Hoenn2_1/scripts.pory"
	waitmessage
	end


Hoenn2_1_Crawdaunt::
# 35 "data/maps/Hoenn2_1/scripts.pory"
	trainerbattle_single TRAINER_CRAWDAUNT, Hoenn2_1_Pelipper_Text_0, Hoenn2_1_Pelipper_Text_0
# 36 "data/maps/Hoenn2_1/scripts.pory"
	msgbox Hoenn2_1_Pelipper_Text_0, MSGBOX_AUTOCLOSE
# 37 "data/maps/Hoenn2_1/scripts.pory"
	waitmessage
	end


Hoenn2_1_EventScript_BirchBag::
# 44 "data/maps/Hoenn2_1/scripts.pory"
	lockall
# 45 "data/maps/Hoenn2_1/scripts.pory"
	playse SE_CLICK
# 46 "data/maps/Hoenn2_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 47 "data/maps/Hoenn2_1/scripts.pory"
	setvar VAR_0x8000, 34
# 48 "data/maps/Hoenn2_1/scripts.pory"
	special LoadBirchBagPoolById
# 49 "data/maps/Hoenn2_1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 50 "data/maps/Hoenn2_1/scripts.pory"
	waitstate
# 52 "data/maps/Hoenn2_1/scripts.pory"
	removeobject HOENN2_1_BIRCHBAG
# 53 "data/maps/Hoenn2_1/scripts.pory"
	setflag FLAG_BIRCHBAG_2_1
# 54 "data/maps/Hoenn2_1/scripts.pory"
	playfanfare MUS_EVOLVED
# 55 "data/maps/Hoenn2_1/scripts.pory"
	msgbox Hoenn2_1_EventScript_BirchBag_Text_0
# 57 "data/maps/Hoenn2_1/scripts.pory"
	waitmessage
# 58 "data/maps/Hoenn2_1/scripts.pory"
	releaseall
	end


Hoenn2_2_EventScript_BirchBag::
# 65 "data/maps/Hoenn2_1/scripts.pory"
	lockall
# 66 "data/maps/Hoenn2_1/scripts.pory"
	playse SE_CLICK
# 67 "data/maps/Hoenn2_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 68 "data/maps/Hoenn2_1/scripts.pory"
	setvar VAR_0x8000, 34
# 69 "data/maps/Hoenn2_1/scripts.pory"
	special LoadBirchBagPoolById
# 70 "data/maps/Hoenn2_1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 71 "data/maps/Hoenn2_1/scripts.pory"
	waitstate
# 73 "data/maps/Hoenn2_1/scripts.pory"
	removeobject HOENN2_2_BIRCHBAG
# 74 "data/maps/Hoenn2_1/scripts.pory"
	setflag FLAG_BIRCHBAG_2_2
# 75 "data/maps/Hoenn2_1/scripts.pory"
	playfanfare MUS_EVOLVED
# 76 "data/maps/Hoenn2_1/scripts.pory"
	msgbox Hoenn2_1_EventScript_BirchBag_Text_0
# 78 "data/maps/Hoenn2_1/scripts.pory"
	waitmessage
# 79 "data/maps/Hoenn2_1/scripts.pory"
	releaseall
	end


Hoenn2_3_EventScript_BirchBag::
# 86 "data/maps/Hoenn2_1/scripts.pory"
	lockall
# 87 "data/maps/Hoenn2_1/scripts.pory"
	playse SE_CLICK
# 88 "data/maps/Hoenn2_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 89 "data/maps/Hoenn2_1/scripts.pory"
	setvar VAR_0x8000, 34
# 90 "data/maps/Hoenn2_1/scripts.pory"
	special LoadBirchBagPoolById
# 91 "data/maps/Hoenn2_1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 92 "data/maps/Hoenn2_1/scripts.pory"
	waitstate
# 94 "data/maps/Hoenn2_1/scripts.pory"
	removeobject HOENN2_3_BIRCHBAG
# 95 "data/maps/Hoenn2_1/scripts.pory"
	setflag FLAG_BIRCHBAG_2_3
# 96 "data/maps/Hoenn2_1/scripts.pory"
	playfanfare MUS_EVOLVED
# 97 "data/maps/Hoenn2_1/scripts.pory"
	msgbox Hoenn2_1_EventScript_BirchBag_Text_0
# 99 "data/maps/Hoenn2_1/scripts.pory"
	waitmessage
# 100 "data/maps/Hoenn2_1/scripts.pory"
	releaseall
	end


Hoenn2_1_Pelipper_Text_0:
# 8 "data/maps/Hoenn2_1/scripts.pory"
	.string "test$"

Hoenn2_1_EventScript_BirchBag_Text_0:
# 55 "data/maps/Hoenn2_1/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"
