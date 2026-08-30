Hoenn1_6_MapScripts::
	.byte 0


Hoenn1_6_KecShop_Sign::
# 5 "data/maps/Hoenn1_6/scripts.pory"
	call KecShop_Sign
	return


Hoenn1_6_KecShop::
# 9 "data/maps/Hoenn1_6/scripts.pory"
	call KecShop
	return


Hoenn1_6_KecShop_Shiny::
# 13 "data/maps/Hoenn1_6/scripts.pory"
	call KecShop_Shiny
	return


Hoenn1_6_EventScript_Rival::
# 17 "data/maps/Hoenn1_6/scripts.pory"
	call RivalFight1
	return


Hoenn1_6_EventScript_Shroomish::
# 22 "data/maps/Hoenn1_6/scripts.pory"
	trainerbattle_single TRAINER_SHROOMISH, Hoenn1_6_EventScript_Shroomish_Text_0, Hoenn1_6_EventScript_Shroomish_Text_0
# 23 "data/maps/Hoenn1_6/scripts.pory"
	msgbox Hoenn1_6_EventScript_Shroomish_Text_0, MSGBOX_AUTOCLOSE
# 24 "data/maps/Hoenn1_6/scripts.pory"
	waitmessage
	end


Hoenn1_6_EventScript_Surskit::
# 31 "data/maps/Hoenn1_6/scripts.pory"
	trainerbattle_single TRAINER_SURSKIT, Hoenn1_6_EventScript_Surskit_Text_0, Hoenn1_6_EventScript_Surskit_Text_1
# 32 "data/maps/Hoenn1_6/scripts.pory"
	msgbox Hoenn1_6_EventScript_Shroomish_Text_0, MSGBOX_AUTOCLOSE
# 33 "data/maps/Hoenn1_6/scripts.pory"
	waitmessage
	end


Hoenn1_8_EventScript_BirchBag::
# 41 "data/maps/Hoenn1_6/scripts.pory"
	lockall
# 42 "data/maps/Hoenn1_6/scripts.pory"
	playse SE_CLICK
# 43 "data/maps/Hoenn1_6/scripts.pory"
	fadescreen FADE_TO_BLACK
# 44 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8000, 33
# 45 "data/maps/Hoenn1_6/scripts.pory"
	special LoadBirchBagPoolById
# 46 "data/maps/Hoenn1_6/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 47 "data/maps/Hoenn1_6/scripts.pory"
	waitstate
# 49 "data/maps/Hoenn1_6/scripts.pory"
	removeobject HOENN1_8_BIRCHBAG
# 50 "data/maps/Hoenn1_6/scripts.pory"
	setflag FLAG_BIRCHBAG_1_8
# 51 "data/maps/Hoenn1_6/scripts.pory"
	playfanfare MUS_EVOLVED
# 52 "data/maps/Hoenn1_6/scripts.pory"
	msgbox Hoenn1_8_EventScript_BirchBag_Text_0
# 54 "data/maps/Hoenn1_6/scripts.pory"
	waitmessage
# 55 "data/maps/Hoenn1_6/scripts.pory"
	releaseall
	end


Hoenn1_7_EventScript_Skitty::
# 62 "data/maps/Hoenn1_6/scripts.pory"
	trainerbattle_single TRAINER_SKITTY, Hoenn1_6_EventScript_Shroomish_Text_0, Hoenn1_6_EventScript_Shroomish_Text_0
# 63 "data/maps/Hoenn1_6/scripts.pory"
	msgbox Hoenn1_6_EventScript_Shroomish_Text_0, MSGBOX_AUTOCLOSE
# 64 "data/maps/Hoenn1_6/scripts.pory"
	waitmessage
	end


Hoenn1_7_EventScript_Nincada::
# 71 "data/maps/Hoenn1_6/scripts.pory"
	trainerbattle_single TRAINER_NINCADA, Hoenn1_6_EventScript_Shroomish_Text_0, Hoenn1_6_EventScript_Shroomish_Text_0
# 72 "data/maps/Hoenn1_6/scripts.pory"
	msgbox Hoenn1_6_EventScript_Shroomish_Text_0, MSGBOX_AUTOCLOSE
# 73 "data/maps/Hoenn1_6/scripts.pory"
	waitmessage
	end


Hoenn1_9_EventScript_BirchBag::
# 81 "data/maps/Hoenn1_6/scripts.pory"
	lockall
# 82 "data/maps/Hoenn1_6/scripts.pory"
	playse SE_CLICK
# 83 "data/maps/Hoenn1_6/scripts.pory"
	fadescreen FADE_TO_BLACK
# 84 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8000, 33
# 85 "data/maps/Hoenn1_6/scripts.pory"
	special LoadBirchBagPoolById
# 86 "data/maps/Hoenn1_6/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 87 "data/maps/Hoenn1_6/scripts.pory"
	waitstate
# 89 "data/maps/Hoenn1_6/scripts.pory"
	removeobject HOENN1_9_BIRCHBAG
# 90 "data/maps/Hoenn1_6/scripts.pory"
	setflag FLAG_BIRCHBAG_1_9
# 91 "data/maps/Hoenn1_6/scripts.pory"
	playfanfare MUS_EVOLVED
# 92 "data/maps/Hoenn1_6/scripts.pory"
	msgbox Hoenn1_8_EventScript_BirchBag_Text_0
# 94 "data/maps/Hoenn1_6/scripts.pory"
	waitmessage
# 95 "data/maps/Hoenn1_6/scripts.pory"
	releaseall
	end


Hoenn1_1_Itemball_4::
# 100 "data/maps/Hoenn1_6/scripts.pory"
	lockall
# 101 "data/maps/Hoenn1_6/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 102 "data/maps/Hoenn1_6/scripts.pory"
	removeobject HOENN1_4_ITEM
# 103 "data/maps/Hoenn1_6/scripts.pory"
	setflag FLAG_ITEM_1_4
# 104 "data/maps/Hoenn1_6/scripts.pory"
	releaseall
	end


Hoenn1_1_Itemball_5::
# 109 "data/maps/Hoenn1_6/scripts.pory"
	lockall
# 110 "data/maps/Hoenn1_6/scripts.pory"
	giveitem ITEM_TM_TOXIC, 1
# 111 "data/maps/Hoenn1_6/scripts.pory"
	removeobject HOENN1_5_ITEM
# 112 "data/maps/Hoenn1_6/scripts.pory"
	setflag FLAG_ITEM_1_5
# 113 "data/maps/Hoenn1_6/scripts.pory"
	releaseall
	end


Hoenn1_6_EventScript_Shroomish_Text_0:
# 22 "data/maps/Hoenn1_6/scripts.pory"
	.string "test.$"

Hoenn1_6_EventScript_Surskit_Text_0:
# 31 "data/maps/Hoenn1_6/scripts.pory"
	.string "Hola. Me llamo Lotad.$"

Hoenn1_6_EventScript_Surskit_Text_1:
# 31 "data/maps/Hoenn1_6/scripts.pory"
	.string "He perdido.$"

Hoenn1_8_EventScript_BirchBag_Text_0:
# 52 "data/maps/Hoenn1_6/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"
