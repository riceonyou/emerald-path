Hoenn3_1_MapScripts::
	.byte 0


Hoenn3_1_Vibrava::
# 5 "data/maps/Hoenn3_1/scripts.pory"
	trainerbattle_single TRAINER_FLYGON, Hoenn3_1_Vibrava_Text_0, Hoenn3_1_Vibrava_Text_0
# 6 "data/maps/Hoenn3_1/scripts.pory"
	msgbox Hoenn3_1_Vibrava_Text_0, MSGBOX_AUTOCLOSE
# 7 "data/maps/Hoenn3_1/scripts.pory"
	waitmessage
	end


Hoenn3_1_Cacturne::
# 12 "data/maps/Hoenn3_1/scripts.pory"
	trainerbattle_single TRAINER_CACTURNE, Hoenn3_1_Vibrava_Text_0, Hoenn3_1_Vibrava_Text_0
# 13 "data/maps/Hoenn3_1/scripts.pory"
	msgbox Hoenn3_1_Vibrava_Text_0, MSGBOX_AUTOCLOSE
# 14 "data/maps/Hoenn3_1/scripts.pory"
	waitmessage
	end


Hoenn3_1_Claydol::
# 19 "data/maps/Hoenn3_1/scripts.pory"
	trainerbattle_single TRAINER_CLAYDOL, Hoenn3_1_Vibrava_Text_0, Hoenn3_1_Vibrava_Text_0
# 20 "data/maps/Hoenn3_1/scripts.pory"
	msgbox Hoenn3_1_Vibrava_Text_0, MSGBOX_AUTOCLOSE
# 21 "data/maps/Hoenn3_1/scripts.pory"
	waitmessage
	end


Hoenn3_1_EventScript_BirchBag::
# 27 "data/maps/Hoenn3_1/scripts.pory"
	lockall
# 28 "data/maps/Hoenn3_1/scripts.pory"
	playse SE_CLICK
# 29 "data/maps/Hoenn3_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 30 "data/maps/Hoenn3_1/scripts.pory"
	setvar VAR_0x8000, 34
# 31 "data/maps/Hoenn3_1/scripts.pory"
	special LoadBirchBagPoolById
# 32 "data/maps/Hoenn3_1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 33 "data/maps/Hoenn3_1/scripts.pory"
	waitstate
# 35 "data/maps/Hoenn3_1/scripts.pory"
	removeobject HOENN3_1_BIRCHBAG
# 36 "data/maps/Hoenn3_1/scripts.pory"
	setflag FLAG_BIRCHBAG_3_1
# 37 "data/maps/Hoenn3_1/scripts.pory"
	playfanfare MUS_EVOLVED
# 38 "data/maps/Hoenn3_1/scripts.pory"
	msgbox Hoenn3_1_EventScript_BirchBag_Text_0
# 40 "data/maps/Hoenn3_1/scripts.pory"
	waitmessage
# 41 "data/maps/Hoenn3_1/scripts.pory"
	releaseall
	end


Hoenn3_1_Vibrava_Text_0:
# 5 "data/maps/Hoenn3_1/scripts.pory"
	.string "test$"

Hoenn3_1_EventScript_BirchBag_Text_0:
# 38 "data/maps/Hoenn3_1/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"
