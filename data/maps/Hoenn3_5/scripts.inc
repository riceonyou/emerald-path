Hoenn3_5_MapScripts::
	.byte 0


Hoenn3_5_Cradily::
# 5 "data/maps/Hoenn3_5/scripts.pory"
	trainerbattle_single TRAINER_CRADILY, Hoenn3_5_Cradily_Text_0, Hoenn3_5_Cradily_Text_0
# 6 "data/maps/Hoenn3_5/scripts.pory"
	msgbox Hoenn3_5_Cradily_Text_0, MSGBOX_AUTOCLOSE
# 7 "data/maps/Hoenn3_5/scripts.pory"
	waitmessage
	end


Hoenn3_5_Armaldo::
# 12 "data/maps/Hoenn3_5/scripts.pory"
	trainerbattle_single TRAINER_ARMALDO, Hoenn3_5_Cradily_Text_0, Hoenn3_5_Cradily_Text_0
# 13 "data/maps/Hoenn3_5/scripts.pory"
	msgbox Hoenn3_5_Cradily_Text_0, MSGBOX_AUTOCLOSE
# 14 "data/maps/Hoenn3_5/scripts.pory"
	waitmessage
	end


Hoenn3_5_Linoone::
# 19 "data/maps/Hoenn3_5/scripts.pory"
	trainerbattle_single TRAINER_LINOONE, Hoenn3_5_Cradily_Text_0, Hoenn3_5_Cradily_Text_0
# 20 "data/maps/Hoenn3_5/scripts.pory"
	msgbox Hoenn3_5_Cradily_Text_0, MSGBOX_AUTOCLOSE
# 21 "data/maps/Hoenn3_5/scripts.pory"
	waitmessage
	end


Hoenn3_5_Rival::
# 26 "data/maps/Hoenn3_5/scripts.pory"
	call RivalFight3
	return


Hoenn3_5_EventScript_BirchBag::
# 31 "data/maps/Hoenn3_5/scripts.pory"
	lockall
# 32 "data/maps/Hoenn3_5/scripts.pory"
	playse SE_CLICK
# 33 "data/maps/Hoenn3_5/scripts.pory"
	fadescreen FADE_TO_BLACK
# 34 "data/maps/Hoenn3_5/scripts.pory"
	setvar VAR_0x8000, 35
# 35 "data/maps/Hoenn3_5/scripts.pory"
	special LoadBirchBagPoolById
# 36 "data/maps/Hoenn3_5/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 37 "data/maps/Hoenn3_5/scripts.pory"
	waitstate
# 39 "data/maps/Hoenn3_5/scripts.pory"
	removeobject HOENN3_5_BIRCHBAG
# 40 "data/maps/Hoenn3_5/scripts.pory"
	setflag FLAG_BIRCHBAG_3_5
# 41 "data/maps/Hoenn3_5/scripts.pory"
	msgbox Hoenn3_5_EventScript_BirchBag_Text_0
# 43 "data/maps/Hoenn3_5/scripts.pory"
	waitmessage
# 44 "data/maps/Hoenn3_5/scripts.pory"
	releaseall
	end


Hoenn3_5_Cradily_Text_0:
# 5 "data/maps/Hoenn3_5/scripts.pory"
	.string "test$"

Hoenn3_5_EventScript_BirchBag_Text_0:
# 41 "data/maps/Hoenn3_5/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"
