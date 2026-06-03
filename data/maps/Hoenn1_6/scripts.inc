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


Hoenn1_6_EventScript_BirchBag::
# 25 "data/maps/Hoenn1_6/scripts.pory"
	lockall
# 26 "data/maps/Hoenn1_6/scripts.pory"
	playse SE_CLICK
# 27 "data/maps/Hoenn1_6/scripts.pory"
	fadescreen FADE_TO_BLACK
# 28 "data/maps/Hoenn1_6/scripts.pory"
	setvar VAR_0x8000, 0
# 29 "data/maps/Hoenn1_6/scripts.pory"
	special LoadBirchBagPoolById
# 30 "data/maps/Hoenn1_6/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 31 "data/maps/Hoenn1_6/scripts.pory"
	waitstate
# 33 "data/maps/Hoenn1_6/scripts.pory"
	removeobject HOENN1_6_BIRCHBAG
# 34 "data/maps/Hoenn1_6/scripts.pory"
	setflag FLAG_HOENN1_6_BIRCHBAG
# 35 "data/maps/Hoenn1_6/scripts.pory"
	playfanfare MUS_EVOLVED
# 36 "data/maps/Hoenn1_6/scripts.pory"
	msgbox Hoenn1_6_EventScript_BirchBag_Text_0
# 38 "data/maps/Hoenn1_6/scripts.pory"
	waitmessage
# 39 "data/maps/Hoenn1_6/scripts.pory"
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

Hoenn1_6_EventScript_BirchBag_Text_0:
# 36 "data/maps/Hoenn1_6/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"
