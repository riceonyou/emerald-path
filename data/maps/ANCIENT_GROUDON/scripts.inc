ANCIENT_GROUDON_MapScripts::
	.byte 0


ANCIENT_GROUDON_EventScript_Groudon::
# 6 "data/maps/ANCIENT_GROUDON/scripts.pory"
	lockall
# 9 "data/maps/ANCIENT_GROUDON/scripts.pory"
	random 1
# 10 "data/maps/ANCIENT_GROUDON/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 11 "data/maps/ANCIENT_GROUDON/scripts.pory"
	switch VAR_0x8004
# 12 "data/maps/ANCIENT_GROUDON/scripts.pory"
	case 0, ANCIENT_GROUDON_EventScript_Groudon_3
ANCIENT_GROUDON_EventScript_Groudon_1:
# 19 "data/maps/ANCIENT_GROUDON/scripts.pory"
	msgbox ANCIENT_GROUDON_EventScript_Groudon_Text_1
# 20 "data/maps/ANCIENT_GROUDON/scripts.pory"
	waitmessage
# 21 "data/maps/ANCIENT_GROUDON/scripts.pory"
	fadescreen FADE_TO_BLACK
# 22 "data/maps/ANCIENT_GROUDON/scripts.pory"
	setvar VAR_0x8000, 29
# 23 "data/maps/ANCIENT_GROUDON/scripts.pory"
	special LoadBirchBagPoolById
# 24 "data/maps/ANCIENT_GROUDON/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 25 "data/maps/ANCIENT_GROUDON/scripts.pory"
	waitstate
# 26 "data/maps/ANCIENT_GROUDON/scripts.pory"
	playfanfare MUS_EVOLVED
# 27 "data/maps/ANCIENT_GROUDON/scripts.pory"
	msgbox ANCIENT_GROUDON_EventScript_Groudon_Text_2
# 28 "data/maps/ANCIENT_GROUDON/scripts.pory"
	waitmessage
# 30 "data/maps/ANCIENT_GROUDON/scripts.pory"
	msgbox ANCIENT_GROUDON_EventScript_Groudon_Text_3
# 31 "data/maps/ANCIENT_GROUDON/scripts.pory"
	addvar VAR_CURRENT_ACT, 1
# 32 "data/maps/ANCIENT_GROUDON/scripts.pory"
	special UpdateLevelCap
# 33 "data/maps/ANCIENT_GROUDON/scripts.pory"
	msgbox ANCIENT_GROUDON_EventScript_Groudon_Text_4
# 35 "data/maps/ANCIENT_GROUDON/scripts.pory"
	switch VAR_0x8004
# 36 "data/maps/ANCIENT_GROUDON/scripts.pory"
	case 0, ANCIENT_GROUDON_EventScript_Groudon_6
ANCIENT_GROUDON_EventScript_Groudon_4:
# 41 "data/maps/ANCIENT_GROUDON/scripts.pory"
	releaseall
	return

ANCIENT_GROUDON_EventScript_Groudon_3:
# 13 "data/maps/ANCIENT_GROUDON/scripts.pory"
	msgbox ANCIENT_GROUDON_EventScript_Groudon_Text_0
# 14 "data/maps/ANCIENT_GROUDON/scripts.pory"
	waitmessage
	goto ANCIENT_GROUDON_EventScript_Groudon_1

ANCIENT_GROUDON_EventScript_Groudon_6:
# 37 "data/maps/ANCIENT_GROUDON/scripts.pory"
	msgbox ANCIENT_GROUDON_EventScript_Groudon_Text_5
# 38 "data/maps/ANCIENT_GROUDON/scripts.pory"
	warp MAP_HOENN4_1, 4, 6
	goto ANCIENT_GROUDON_EventScript_Groudon_4


ANCIENT_GROUDON_EventScript_Groudon_Text_0:
# 13 "data/maps/ANCIENT_GROUDON/scripts.pory"
	.string "Heyo!\lThe next act will be\nthe MOSSDEEP path!$"

ANCIENT_GROUDON_EventScript_Groudon_Text_1:
# 19 "data/maps/ANCIENT_GROUDON/scripts.pory"
	.string "Take a water pokemon with you!$"

ANCIENT_GROUDON_EventScript_Groudon_Text_2:
# 27 "data/maps/ANCIENT_GROUDON/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

ANCIENT_GROUDON_EventScript_Groudon_Text_3:
# 30 "data/maps/ANCIENT_GROUDON/scripts.pory"
	.string "The level cap has been raised to 30$"

ANCIENT_GROUDON_EventScript_Groudon_Text_4:
# 33 "data/maps/ANCIENT_GROUDON/scripts.pory"
	.string "Boop beep boop.\lNow time to get you to the next\nstage.$"

ANCIENT_GROUDON_EventScript_Groudon_Text_5:
# 37 "data/maps/ANCIENT_GROUDON/scripts.pory"
	.string "About to warp to HOENN4_1$"
