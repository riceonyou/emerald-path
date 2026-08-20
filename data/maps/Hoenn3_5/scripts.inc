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
	switch VAR_CURRENT_RIVAL
# 27 "data/maps/Hoenn3_5/scripts.pory"
	case 0, Hoenn3_5_Rival_2
# 32 "data/maps/Hoenn3_5/scripts.pory"
	case 1, Hoenn3_5_Rival_3
	return

Hoenn3_5_Rival_2:
# 28 "data/maps/Hoenn3_5/scripts.pory"
	trainerbattle_single TRAINER_SCEPTILE, Hoenn3_5_Rival_Text_0, Hoenn3_5_Rival_Text_1
# 29 "data/maps/Hoenn3_5/scripts.pory"
	msgbox Hoenn3_5_Rival_Text_2, MSGBOX_AUTOCLOSE
# 30 "data/maps/Hoenn3_5/scripts.pory"
	waitmessage
	end

Hoenn3_5_Rival_3:
# 33 "data/maps/Hoenn3_5/scripts.pory"
	trainerbattle_single TRAINER_BLAZIKEN, Hoenn3_5_Rival_Text_3, Hoenn3_5_Rival_Text_1
# 34 "data/maps/Hoenn3_5/scripts.pory"
	msgbox Hoenn3_5_Rival_Text_2, MSGBOX_AUTOCLOSE
# 35 "data/maps/Hoenn3_5/scripts.pory"
	waitmessage
	end


Hoenn3_5_EventScript_BirchBag::
# 42 "data/maps/Hoenn3_5/scripts.pory"
	lockall
# 43 "data/maps/Hoenn3_5/scripts.pory"
	playse SE_CLICK
# 44 "data/maps/Hoenn3_5/scripts.pory"
	fadescreen FADE_TO_BLACK
# 45 "data/maps/Hoenn3_5/scripts.pory"
	setvar VAR_0x8000, 35
# 46 "data/maps/Hoenn3_5/scripts.pory"
	special LoadBirchBagPoolById
# 47 "data/maps/Hoenn3_5/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 48 "data/maps/Hoenn3_5/scripts.pory"
	waitstate
# 50 "data/maps/Hoenn3_5/scripts.pory"
	removeobject HOENN3_5_BIRCHBAG
# 51 "data/maps/Hoenn3_5/scripts.pory"
	setflag FLAG_BIRCHBAG_3_5
# 52 "data/maps/Hoenn3_5/scripts.pory"
	playfanfare MUS_EVOLVED
# 53 "data/maps/Hoenn3_5/scripts.pory"
	msgbox Hoenn3_5_EventScript_BirchBag_Text_0
# 55 "data/maps/Hoenn3_5/scripts.pory"
	waitmessage
# 56 "data/maps/Hoenn3_5/scripts.pory"
	releaseall
	end


Hoenn3_5_Cradily_Text_0:
# 5 "data/maps/Hoenn3_5/scripts.pory"
	.string "test$"

Hoenn3_5_Rival_Text_0:
# 28 "data/maps/Hoenn3_5/scripts.pory"
	.string "Yo I'm Treecko. Grrr.$"

Hoenn3_5_Rival_Text_1:
# 28 "data/maps/Hoenn3_5/scripts.pory"
	.string "Damn you got me.$"

Hoenn3_5_Rival_Text_2:
# 29 "data/maps/Hoenn3_5/scripts.pory"
	.string "I'll get you next time.$"

Hoenn3_5_Rival_Text_3:
# 33 "data/maps/Hoenn3_5/scripts.pory"
	.string "Yo I'm Torchic. Grrr.$"

Hoenn3_5_EventScript_BirchBag_Text_0:
# 53 "data/maps/Hoenn3_5/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"
