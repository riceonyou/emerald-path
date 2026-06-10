Hoenn1_5_MapScripts::
	.byte 0


Hoenn1_5_EventScript_Oddish::
# 6 "data/maps/Hoenn1_5/scripts.pory"
	trainerbattle_single TRAINER_ODDISH, Hoenn1_5_EventScript_Oddish_Text_0, Hoenn1_5_EventScript_Oddish_Text_1
# 7 "data/maps/Hoenn1_5/scripts.pory"
	msgbox Hoenn1_5_EventScript_Oddish_Text_2, MSGBOX_AUTOCLOSE
# 8 "data/maps/Hoenn1_5/scripts.pory"
	waitmessage
	end


Hoenn1_5_EventScript_Wurmple::
# 15 "data/maps/Hoenn1_5/scripts.pory"
	trainerbattle_single TRAINER_WURMPLE, Hoenn1_5_EventScript_Wurmple_Text_0, Hoenn1_5_EventScript_Wurmple_Text_1
# 16 "data/maps/Hoenn1_5/scripts.pory"
	msgbox Hoenn1_5_EventScript_Wurmple_Text_2, MSGBOX_AUTOCLOSE
# 17 "data/maps/Hoenn1_5/scripts.pory"
	waitmessage
	end


Hoenn1_5_EventScript_BirchBag::
# 24 "data/maps/Hoenn1_5/scripts.pory"
	lockall
# 25 "data/maps/Hoenn1_5/scripts.pory"
	playse SE_CLICK
# 26 "data/maps/Hoenn1_5/scripts.pory"
	fadescreen FADE_TO_BLACK
# 27 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8000, 4
# 28 "data/maps/Hoenn1_5/scripts.pory"
	special LoadBirchBagPoolById
# 29 "data/maps/Hoenn1_5/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 30 "data/maps/Hoenn1_5/scripts.pory"
	waitstate
# 33 "data/maps/Hoenn1_5/scripts.pory"
	removeobject HOENN1_5_BIRCHBAG
# 34 "data/maps/Hoenn1_5/scripts.pory"
	setflag FLAG_BIRCHBAG_1_5
# 35 "data/maps/Hoenn1_5/scripts.pory"
	playfanfare MUS_EVOLVED
# 36 "data/maps/Hoenn1_5/scripts.pory"
	msgbox Hoenn1_5_EventScript_BirchBag_Text_0
# 38 "data/maps/Hoenn1_5/scripts.pory"
	waitmessage
# 39 "data/maps/Hoenn1_5/scripts.pory"
	releaseall
	end


Hoenn1_5_EventScript_Oddish_Text_0:
# 6 "data/maps/Hoenn1_5/scripts.pory"
	.string "Hello.$"

Hoenn1_5_EventScript_Oddish_Text_1:
# 6 "data/maps/Hoenn1_5/scripts.pory"
	.string "Goodbye.$"

Hoenn1_5_EventScript_Oddish_Text_2:
# 7 "data/maps/Hoenn1_5/scripts.pory"
	.string "Hello again.$"

Hoenn1_5_EventScript_Wurmple_Text_0:
# 15 "data/maps/Hoenn1_5/scripts.pory"
	.string "I'm just a wurm.$"

Hoenn1_5_EventScript_Wurmple_Text_1:
# 15 "data/maps/Hoenn1_5/scripts.pory"
	.string "That was a good battle.$"

Hoenn1_5_EventScript_Wurmple_Text_2:
# 16 "data/maps/Hoenn1_5/scripts.pory"
	.string "Don't talk to me right now.$"

Hoenn1_5_EventScript_BirchBag_Text_0:
# 36 "data/maps/Hoenn1_5/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"
