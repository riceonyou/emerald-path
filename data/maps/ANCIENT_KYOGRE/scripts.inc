ANCIENT_KYOGRE_MapScripts::
	.byte 0


ANCIENT_KYOGRE_EventScript_Kyogre::
# 5 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	lockall
# 8 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	msgbox ANCIENT_KYOGRE_EventScript_Kyogre_Text_0
# 9 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	waitmessage
# 10 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	fadescreen FADE_TO_BLACK
# 11 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	setvar VAR_0x8000, 29
# 12 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	special LoadBirchBagPoolById
# 13 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 14 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	waitstate
# 15 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	playfanfare MUS_EVOLVED
# 16 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	msgbox ANCIENT_KYOGRE_EventScript_Kyogre_Text_1
# 17 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	waitmessage
# 20 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 21 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	msgbox ANCIENT_KYOGRE_EventScript_Kyogre_Text_2
# 23 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	msgbox ANCIENT_KYOGRE_EventScript_Kyogre_Text_3
# 25 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	special WarpToNextAct
# 26 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	releaseall
	return


ANCIENT_KYOGRE_EventScript_Kyogre_Text_0:
# 8 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	.string "Take a pokemon with you!$"

ANCIENT_KYOGRE_EventScript_Kyogre_Text_1:
# 16 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

ANCIENT_KYOGRE_EventScript_Kyogre_Text_2:
# 21 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	.string "The level cap has been raised to 42$"

ANCIENT_KYOGRE_EventScript_Kyogre_Text_3:
# 23 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	.string "Boop beep boop.\lNow time to get you to the next\nstage.$"
