Hoenn1_6_MapScripts::
	.byte 0


Hoenn1_6_EventScript_Shroomish::
# 6 "data/maps/Hoenn1_6/scripts.pory"
	trainerbattle_single TRAINER_SHROOMISH, Hoenn1_6_EventScript_Shroomish_Text_0, Hoenn1_6_EventScript_Shroomish_Text_0
# 7 "data/maps/Hoenn1_6/scripts.pory"
	msgbox Hoenn1_6_EventScript_Shroomish_Text_0, MSGBOX_AUTOCLOSE
# 8 "data/maps/Hoenn1_6/scripts.pory"
	waitmessage
	end


Hoenn1_6_EventScript_Surskit::
# 15 "data/maps/Hoenn1_6/scripts.pory"
	trainerbattle_single TRAINER_SURSKIT, Hoenn1_6_EventScript_Surskit_Text_0, Hoenn1_6_EventScript_Surskit_Text_1
# 16 "data/maps/Hoenn1_6/scripts.pory"
	msgbox Hoenn1_6_EventScript_Shroomish_Text_0, MSGBOX_AUTOCLOSE
# 17 "data/maps/Hoenn1_6/scripts.pory"
	waitmessage
	end


Hoenn1_8_EventScript_BirchBag::
# 25 "data/maps/Hoenn1_6/scripts.pory"
	lockall
# 26 "data/maps/Hoenn1_6/scripts.pory"
	playse SE_CLICK
# 27 "data/maps/Hoenn1_6/scripts.pory"
	fadescreen FADE_TO_BLACK
# 28 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8000, 5
# 29 "data/maps/Hoenn1_6/scripts.pory"
	special LoadBirchBagPoolById
# 30 "data/maps/Hoenn1_6/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 31 "data/maps/Hoenn1_6/scripts.pory"
	waitstate
# 33 "data/maps/Hoenn1_6/scripts.pory"
	removeobject HOENN1_8_BIRCHBAG
# 34 "data/maps/Hoenn1_6/scripts.pory"
	setflag FLAG_BIRCHBAG_1_8
# 35 "data/maps/Hoenn1_6/scripts.pory"
	playfanfare MUS_EVOLVED
# 36 "data/maps/Hoenn1_6/scripts.pory"
	msgbox Hoenn1_8_EventScript_BirchBag_Text_0
# 38 "data/maps/Hoenn1_6/scripts.pory"
	waitmessage
# 39 "data/maps/Hoenn1_6/scripts.pory"
	releaseall
	end


Hoenn1_7_EventScript_Skitty::
# 46 "data/maps/Hoenn1_6/scripts.pory"
	trainerbattle_single TRAINER_SKITTY, Hoenn1_6_EventScript_Shroomish_Text_0, Hoenn1_6_EventScript_Shroomish_Text_0
# 47 "data/maps/Hoenn1_6/scripts.pory"
	msgbox Hoenn1_6_EventScript_Shroomish_Text_0, MSGBOX_AUTOCLOSE
# 48 "data/maps/Hoenn1_6/scripts.pory"
	waitmessage
	end


Hoenn1_7_EventScript_Nincada::
# 55 "data/maps/Hoenn1_6/scripts.pory"
	trainerbattle_single TRAINER_SKITTY, Hoenn1_6_EventScript_Shroomish_Text_0, Hoenn1_6_EventScript_Shroomish_Text_0
# 56 "data/maps/Hoenn1_6/scripts.pory"
	msgbox Hoenn1_6_EventScript_Shroomish_Text_0, MSGBOX_AUTOCLOSE
# 57 "data/maps/Hoenn1_6/scripts.pory"
	waitmessage
	end


Hoenn1_9_EventScript_BirchBag::
# 65 "data/maps/Hoenn1_6/scripts.pory"
	lockall
# 66 "data/maps/Hoenn1_6/scripts.pory"
	playse SE_CLICK
# 67 "data/maps/Hoenn1_6/scripts.pory"
	fadescreen FADE_TO_BLACK
# 68 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8000, 6
# 69 "data/maps/Hoenn1_6/scripts.pory"
	special LoadBirchBagPoolById
# 70 "data/maps/Hoenn1_6/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 71 "data/maps/Hoenn1_6/scripts.pory"
	waitstate
# 73 "data/maps/Hoenn1_6/scripts.pory"
	removeobject HOENN1_9_BIRCHBAG
# 74 "data/maps/Hoenn1_6/scripts.pory"
	setflag FLAG_BIRCHBAG_1_9
# 75 "data/maps/Hoenn1_6/scripts.pory"
	playfanfare MUS_EVOLVED
# 76 "data/maps/Hoenn1_6/scripts.pory"
	msgbox Hoenn1_8_EventScript_BirchBag_Text_0
# 78 "data/maps/Hoenn1_6/scripts.pory"
	waitmessage
# 79 "data/maps/Hoenn1_6/scripts.pory"
	releaseall
	end


Hoenn1_1_Itemball_4::
# 84 "data/maps/Hoenn1_6/scripts.pory"
	lockall
# 85 "data/maps/Hoenn1_6/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 86 "data/maps/Hoenn1_6/scripts.pory"
	removeobject HOENN1_4_ITEM
# 87 "data/maps/Hoenn1_6/scripts.pory"
	setflag FLAG_ITEM_1_4
# 88 "data/maps/Hoenn1_6/scripts.pory"
	releaseall
	end


Hoenn1_1_Itemball_5::
# 93 "data/maps/Hoenn1_6/scripts.pory"
	lockall
# 94 "data/maps/Hoenn1_6/scripts.pory"
	giveitem ITEM_TM_TOXIC, 1
# 95 "data/maps/Hoenn1_6/scripts.pory"
	removeobject HOENN1_5_ITEM
# 96 "data/maps/Hoenn1_6/scripts.pory"
	setflag FLAG_ITEM_1_5
# 97 "data/maps/Hoenn1_6/scripts.pory"
	releaseall
	end


Hoenn1_6_EventScript_Shroomish_Text_0:
# 6 "data/maps/Hoenn1_6/scripts.pory"
	.string "test.$"

Hoenn1_6_EventScript_Surskit_Text_0:
# 15 "data/maps/Hoenn1_6/scripts.pory"
	.string "Hola. Me llamo Lotad.$"

Hoenn1_6_EventScript_Surskit_Text_1:
# 15 "data/maps/Hoenn1_6/scripts.pory"
	.string "He perdido.$"

Hoenn1_8_EventScript_BirchBag_Text_0:
# 36 "data/maps/Hoenn1_6/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"
