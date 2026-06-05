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


Hoenn1_4_EventScript_BirchBag::
# 15 "data/maps/Hoenn1_4/scripts.pory"
	lockall
# 16 "data/maps/Hoenn1_4/scripts.pory"
	playse SE_CLICK
# 17 "data/maps/Hoenn1_4/scripts.pory"
	fadescreen FADE_TO_BLACK
# 18 "data/maps/Hoenn1_4/scripts.pory"
	setvar VAR_0x8000, 3
# 19 "data/maps/Hoenn1_4/scripts.pory"
	special LoadBirchBagPoolById
# 20 "data/maps/Hoenn1_4/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 21 "data/maps/Hoenn1_4/scripts.pory"
	waitstate
# 24 "data/maps/Hoenn1_4/scripts.pory"
	removeobject HOENN1_4_BIRCHBAG
# 25 "data/maps/Hoenn1_4/scripts.pory"
	setflag FLAG_BIRCHBAG_1_4
# 26 "data/maps/Hoenn1_4/scripts.pory"
	playfanfare MUS_EVOLVED
# 27 "data/maps/Hoenn1_4/scripts.pory"
	msgbox Hoenn1_4_EventScript_BirchBag_Text_0
# 29 "data/maps/Hoenn1_4/scripts.pory"
	waitmessage
# 30 "data/maps/Hoenn1_4/scripts.pory"
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
# 27 "data/maps/Hoenn1_4/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"
