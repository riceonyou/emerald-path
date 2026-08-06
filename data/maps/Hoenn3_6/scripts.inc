Hoenn3_6_MapScripts::
	.byte 0


Hoenn3_6_EventScript_BirchBag::
# 6 "data/maps/Hoenn3_6/scripts.pory"
	lockall
# 7 "data/maps/Hoenn3_6/scripts.pory"
	playse SE_CLICK
# 8 "data/maps/Hoenn3_6/scripts.pory"
	fadescreen FADE_TO_BLACK
# 9 "data/maps/Hoenn3_6/scripts.pory"
	setvar VAR_0x8000, 34
# 10 "data/maps/Hoenn3_6/scripts.pory"
	special LoadBirchBagPoolById
# 11 "data/maps/Hoenn3_6/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 12 "data/maps/Hoenn3_6/scripts.pory"
	waitstate
# 14 "data/maps/Hoenn3_6/scripts.pory"
	removeobject HOENN3_6_BIRCHBAG
# 15 "data/maps/Hoenn3_6/scripts.pory"
	setflag FLAG_BIRCHBAG_3_6
# 16 "data/maps/Hoenn3_6/scripts.pory"
	playfanfare MUS_EVOLVED
# 17 "data/maps/Hoenn3_6/scripts.pory"
	msgbox Hoenn3_6_EventScript_BirchBag_Text_0
# 19 "data/maps/Hoenn3_6/scripts.pory"
	waitmessage
# 20 "data/maps/Hoenn3_6/scripts.pory"
	releaseall
	end


Hoenn3_6_EventScript_BirchBag_Text_0:
# 17 "data/maps/Hoenn3_6/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"
