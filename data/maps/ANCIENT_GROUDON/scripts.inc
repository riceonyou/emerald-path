ANCIENT_GROUDON_MapScripts::
	.byte 0


ANCIENT_GROUDON_EventScript_Groudon::
# 6 "data/maps/ANCIENT_GROUDON/scripts.pory"
	lockall
# 9 "data/maps/ANCIENT_GROUDON/scripts.pory"
	msgbox ANCIENT_GROUDON_EventScript_Groudon_Text_0
# 10 "data/maps/ANCIENT_GROUDON/scripts.pory"
	waitmessage
# 11 "data/maps/ANCIENT_GROUDON/scripts.pory"
	fadescreen FADE_TO_BLACK
# 12 "data/maps/ANCIENT_GROUDON/scripts.pory"
	setvar VAR_0x8000, 30
# 13 "data/maps/ANCIENT_GROUDON/scripts.pory"
	special LoadBirchBagPoolById
# 14 "data/maps/ANCIENT_GROUDON/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 15 "data/maps/ANCIENT_GROUDON/scripts.pory"
	waitstate
# 16 "data/maps/ANCIENT_GROUDON/scripts.pory"
	playfanfare MUS_EVOLVED
# 17 "data/maps/ANCIENT_GROUDON/scripts.pory"
	msgbox ANCIENT_GROUDON_EventScript_Groudon_Text_1
# 18 "data/maps/ANCIENT_GROUDON/scripts.pory"
	waitmessage
# 20 "data/maps/ANCIENT_GROUDON/scripts.pory"
	msgbox ANCIENT_GROUDON_EventScript_Groudon_Text_2
# 21 "data/maps/ANCIENT_GROUDON/scripts.pory"
	special UpdateLevelCap
# 22 "data/maps/ANCIENT_GROUDON/scripts.pory"
	msgbox ANCIENT_GROUDON_EventScript_Groudon_Text_3
# 24 "data/maps/ANCIENT_GROUDON/scripts.pory"
	special WarpToNextAct
# 25 "data/maps/ANCIENT_GROUDON/scripts.pory"
	releaseall
	return


ANCIENT_GROUDON_EventScript_Groudon_Text_0:
# 9 "data/maps/ANCIENT_GROUDON/scripts.pory"
	.string "Take a pokemon with you!$"

ANCIENT_GROUDON_EventScript_Groudon_Text_1:
# 17 "data/maps/ANCIENT_GROUDON/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

ANCIENT_GROUDON_EventScript_Groudon_Text_2:
# 20 "data/maps/ANCIENT_GROUDON/scripts.pory"
	.string "The level cap has been raised to 42$"

ANCIENT_GROUDON_EventScript_Groudon_Text_3:
# 22 "data/maps/ANCIENT_GROUDON/scripts.pory"
	.string "Boop beep boop.\lNow time to get you to the next\nstage.$"
