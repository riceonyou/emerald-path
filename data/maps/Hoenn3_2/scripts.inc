Hoenn3_2_MapScripts::
	.byte 0


Hoenn3_2_Skarmory::
# 5 "data/maps/Hoenn3_2/scripts.pory"
	trainerbattle_single TRAINER_SKARMORY, Hoenn3_2_Skarmory_Text_0, Hoenn3_2_Skarmory_Text_0
# 6 "data/maps/Hoenn3_2/scripts.pory"
	msgbox Hoenn3_2_Skarmory_Text_0, MSGBOX_AUTOCLOSE
# 7 "data/maps/Hoenn3_2/scripts.pory"
	waitmessage
	end


Hoenn3_2_Zangoose::
# 12 "data/maps/Hoenn3_2/scripts.pory"
	trainerbattle_single TRAINER_ZANGOOSE, Hoenn3_2_Skarmory_Text_0, Hoenn3_2_Skarmory_Text_0
# 13 "data/maps/Hoenn3_2/scripts.pory"
	msgbox Hoenn3_2_Skarmory_Text_0, MSGBOX_AUTOCLOSE
# 14 "data/maps/Hoenn3_2/scripts.pory"
	waitmessage
	end


Hoenn3_2_Seviper::
# 19 "data/maps/Hoenn3_2/scripts.pory"
	trainerbattle_single TRAINER_SEVIPER, Hoenn3_2_Skarmory_Text_0, Hoenn3_2_Skarmory_Text_0
# 20 "data/maps/Hoenn3_2/scripts.pory"
	msgbox Hoenn3_2_Skarmory_Text_0, MSGBOX_AUTOCLOSE
# 21 "data/maps/Hoenn3_2/scripts.pory"
	waitmessage
	end


Hoenn3_2_Spinda::
# 26 "data/maps/Hoenn3_2/scripts.pory"
	trainerbattle_single TRAINER_SPINDA, Hoenn3_2_Skarmory_Text_0, Hoenn3_2_Skarmory_Text_0
# 27 "data/maps/Hoenn3_2/scripts.pory"
	msgbox Hoenn3_2_Skarmory_Text_0, MSGBOX_AUTOCLOSE
# 28 "data/maps/Hoenn3_2/scripts.pory"
	waitmessage
	end


Hoenn3_2_Ninetales::
# 33 "data/maps/Hoenn3_2/scripts.pory"
	trainerbattle_single TRAINER_NINETALES, Hoenn3_2_Skarmory_Text_0, Hoenn3_2_Skarmory_Text_0
# 34 "data/maps/Hoenn3_2/scripts.pory"
	msgbox Hoenn3_2_Skarmory_Text_0, MSGBOX_AUTOCLOSE
# 35 "data/maps/Hoenn3_2/scripts.pory"
	waitmessage
	end


Hoenn3_2_EventScript_BirchBag::
# 41 "data/maps/Hoenn3_2/scripts.pory"
	lockall
# 42 "data/maps/Hoenn3_2/scripts.pory"
	playse SE_CLICK
# 43 "data/maps/Hoenn3_2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 44 "data/maps/Hoenn3_2/scripts.pory"
	setvar VAR_0x8000, 34
# 45 "data/maps/Hoenn3_2/scripts.pory"
	special LoadBirchBagPoolById
# 46 "data/maps/Hoenn3_2/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 47 "data/maps/Hoenn3_2/scripts.pory"
	waitstate
# 49 "data/maps/Hoenn3_2/scripts.pory"
	removeobject HOENN3_2_BIRCHBAG
# 50 "data/maps/Hoenn3_2/scripts.pory"
	setflag FLAG_BIRCHBAG_3_2
# 51 "data/maps/Hoenn3_2/scripts.pory"
	playfanfare MUS_EVOLVED
# 52 "data/maps/Hoenn3_2/scripts.pory"
	msgbox Hoenn3_2_EventScript_BirchBag_Text_0
# 54 "data/maps/Hoenn3_2/scripts.pory"
	waitmessage
# 55 "data/maps/Hoenn3_2/scripts.pory"
	releaseall
	end


Hoenn3_3_EventScript_BirchBag::
# 62 "data/maps/Hoenn3_2/scripts.pory"
	lockall
# 63 "data/maps/Hoenn3_2/scripts.pory"
	playse SE_CLICK
# 64 "data/maps/Hoenn3_2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 65 "data/maps/Hoenn3_2/scripts.pory"
	setvar VAR_0x8000, 34
# 66 "data/maps/Hoenn3_2/scripts.pory"
	special LoadBirchBagPoolById
# 67 "data/maps/Hoenn3_2/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 68 "data/maps/Hoenn3_2/scripts.pory"
	waitstate
# 70 "data/maps/Hoenn3_2/scripts.pory"
	removeobject HOENN3_3_BIRCHBAG
# 71 "data/maps/Hoenn3_2/scripts.pory"
	setflag FLAG_BIRCHBAG_3_3
# 72 "data/maps/Hoenn3_2/scripts.pory"
	playfanfare MUS_EVOLVED
# 73 "data/maps/Hoenn3_2/scripts.pory"
	msgbox Hoenn3_2_EventScript_BirchBag_Text_0
# 75 "data/maps/Hoenn3_2/scripts.pory"
	waitmessage
# 76 "data/maps/Hoenn3_2/scripts.pory"
	releaseall
	end


Hoenn3_4_EventScript_BirchBag::
# 83 "data/maps/Hoenn3_2/scripts.pory"
	lockall
# 84 "data/maps/Hoenn3_2/scripts.pory"
	playse SE_CLICK
# 85 "data/maps/Hoenn3_2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 86 "data/maps/Hoenn3_2/scripts.pory"
	setvar VAR_0x8000, 34
# 87 "data/maps/Hoenn3_2/scripts.pory"
	special LoadBirchBagPoolById
# 88 "data/maps/Hoenn3_2/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 89 "data/maps/Hoenn3_2/scripts.pory"
	waitstate
# 91 "data/maps/Hoenn3_2/scripts.pory"
	removeobject HOENN3_4_BIRCHBAG
# 92 "data/maps/Hoenn3_2/scripts.pory"
	setflag FLAG_BIRCHBAG_3_4
# 93 "data/maps/Hoenn3_2/scripts.pory"
	playfanfare MUS_EVOLVED
# 94 "data/maps/Hoenn3_2/scripts.pory"
	msgbox Hoenn3_2_EventScript_BirchBag_Text_0
# 96 "data/maps/Hoenn3_2/scripts.pory"
	waitmessage
# 97 "data/maps/Hoenn3_2/scripts.pory"
	releaseall
	end


Hoenn3_2_Skarmory_Text_0:
# 5 "data/maps/Hoenn3_2/scripts.pory"
	.string "test$"

Hoenn3_2_EventScript_BirchBag_Text_0:
# 52 "data/maps/Hoenn3_2/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"
