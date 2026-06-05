Hoenn1_7_MapScripts::
	.byte 0


Hoenn1_7_EventScript_Skitty::
# 6 "data/maps/Hoenn1_7/scripts.pory"
	trainerbattle_single TRAINER_SKITTY, Hoenn1_7_EventScript_Skitty_Text_0, Hoenn1_7_EventScript_Skitty_Text_0
# 7 "data/maps/Hoenn1_7/scripts.pory"
	msgbox Hoenn1_7_EventScript_Skitty_Text_0, MSGBOX_AUTOCLOSE
# 8 "data/maps/Hoenn1_7/scripts.pory"
	waitmessage
	end


Hoenn1_7_EventScript_BirchBag::
# 16 "data/maps/Hoenn1_7/scripts.pory"
	lockall
# 17 "data/maps/Hoenn1_7/scripts.pory"
	playse SE_CLICK
# 18 "data/maps/Hoenn1_7/scripts.pory"
	fadescreen FADE_TO_BLACK
# 19 "data/maps/Hoenn1_7/scripts.pory"
	setvar VAR_0x8000, 0
# 20 "data/maps/Hoenn1_7/scripts.pory"
	special LoadBirchBagPoolById
# 21 "data/maps/Hoenn1_7/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 22 "data/maps/Hoenn1_7/scripts.pory"
	waitstate
# 24 "data/maps/Hoenn1_7/scripts.pory"
	removeobject HOENN1_7_BIRCHBAG
# 25 "data/maps/Hoenn1_7/scripts.pory"
	setflag FLAG_BIRCHBAG_1_7
# 26 "data/maps/Hoenn1_7/scripts.pory"
	playfanfare MUS_EVOLVED
# 27 "data/maps/Hoenn1_7/scripts.pory"
	msgbox Hoenn1_7_EventScript_BirchBag_Text_0
# 29 "data/maps/Hoenn1_7/scripts.pory"
	waitmessage
# 30 "data/maps/Hoenn1_7/scripts.pory"
	releaseall
	end


Hoenn1_7_EventScript_Skitty_Text_0:
# 6 "data/maps/Hoenn1_7/scripts.pory"
	.string "test.$"

Hoenn1_7_EventScript_BirchBag_Text_0:
# 27 "data/maps/Hoenn1_7/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"
