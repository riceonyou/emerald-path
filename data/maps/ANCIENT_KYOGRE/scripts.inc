ANCIENT_KYOGRE_MapScripts::
	.byte 0


ANCIENT_KYOGRE_EventScript_Kyogre::
# 5 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	lockall
# 8 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	random 1
# 9 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 10 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	switch VAR_0x8004
# 11 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	case 0, ANCIENT_KYOGRE_EventScript_Kyogre_3
ANCIENT_KYOGRE_EventScript_Kyogre_1:
# 18 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	msgbox ANCIENT_KYOGRE_EventScript_Kyogre_Text_1
# 19 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	waitmessage
# 20 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	fadescreen FADE_TO_BLACK
# 21 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	setvar VAR_0x8000, 29
# 22 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	special LoadBirchBagPoolById
# 23 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 24 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	waitstate
# 25 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	playfanfare MUS_EVOLVED
# 26 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	msgbox ANCIENT_KYOGRE_EventScript_Kyogre_Text_2
# 27 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	waitmessage
# 30 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	msgbox ANCIENT_KYOGRE_EventScript_Kyogre_Text_3
# 31 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	addvar VAR_CURRENT_ACT, 1
# 32 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	special UpdateLevelCap
# 33 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	msgbox ANCIENT_KYOGRE_EventScript_Kyogre_Text_4
# 35 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	switch VAR_0x8004
# 36 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	case 0, ANCIENT_KYOGRE_EventScript_Kyogre_6
ANCIENT_KYOGRE_EventScript_Kyogre_4:
# 41 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	releaseall
	return

ANCIENT_KYOGRE_EventScript_Kyogre_3:
# 12 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	msgbox ANCIENT_KYOGRE_EventScript_Kyogre_Text_0
# 13 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	waitmessage
	goto ANCIENT_KYOGRE_EventScript_Kyogre_1

ANCIENT_KYOGRE_EventScript_Kyogre_6:
# 37 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	msgbox ANCIENT_KYOGRE_EventScript_Kyogre_Text_5
# 38 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	warp MAP_HOENN4_1, 4, 6
	goto ANCIENT_KYOGRE_EventScript_Kyogre_4


ANCIENT_KYOGRE_EventScript_Kyogre_Text_0:
# 12 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	.string "Heyo!\lThe next act will be\nthe MOSSDEEP path!$"

ANCIENT_KYOGRE_EventScript_Kyogre_Text_1:
# 18 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	.string "Take a water pokemon with you!$"

ANCIENT_KYOGRE_EventScript_Kyogre_Text_2:
# 26 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

ANCIENT_KYOGRE_EventScript_Kyogre_Text_3:
# 30 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	.string "The level cap has been raised to 30$"

ANCIENT_KYOGRE_EventScript_Kyogre_Text_4:
# 33 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	.string "Boop beep boop.\lNow time to get you to the next\nstage.$"

ANCIENT_KYOGRE_EventScript_Kyogre_Text_5:
# 37 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	.string "About to warp to HOENN4_1$"
