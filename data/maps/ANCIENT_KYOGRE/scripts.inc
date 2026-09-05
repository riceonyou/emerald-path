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
# 16 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	waitmessage
# 19 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 20 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	msgbox ANCIENT_KYOGRE_EventScript_Kyogre_Text_1
# 22 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	msgbox ANCIENT_KYOGRE_EventScript_Kyogre_Text_2
# 24 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	special WarpToNextAct
# 25 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	releaseall
	return


ANCIENT_KYOGRE_EventScript_Kyogre_Text_0:
# 8 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	.string "Take a pokemon with you!$"

ANCIENT_KYOGRE_EventScript_Kyogre_Text_1:
# 20 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	.string "The level cap has been raised to 42$"

ANCIENT_KYOGRE_EventScript_Kyogre_Text_2:
# 22 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	.string "Boop beep boop.\lNow time to get you to the next\nstage.$"
