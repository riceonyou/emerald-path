ANCIENT1_MapScripts::
	.byte 0


ANCIENT_1_EventScript_Regigigas::
# 6 "data/maps/ANCIENT1/scripts.pory"
	lockall
# 9 "data/maps/ANCIENT1/scripts.pory"
	playmoncry SPECIES_REGIGIGAS, CRY_MODE_ENCOUNTER
# 10 "data/maps/ANCIENT1/scripts.pory"
	waitmoncry
# 11 "data/maps/ANCIENT1/scripts.pory"
	applymovement 1, ANCIENT_1_EventScript_Regigigas_Movement_0
# 18 "data/maps/ANCIENT1/scripts.pory"
	waitmovement
# 19 "data/maps/ANCIENT1/scripts.pory"
	msgbox ANCIENT_1_EventScript_Regigigas_Text_0
# 20 "data/maps/ANCIENT1/scripts.pory"
	waitmessage
# 21 "data/maps/ANCIENT1/scripts.pory"
	giveitem ITEM_ARCHIES_BANDANA_CHARM, 1
# 22 "data/maps/ANCIENT1/scripts.pory"
	msgbox ANCIENT_1_EventScript_Regigigas_Text_1
# 23 "data/maps/ANCIENT1/scripts.pory"
	waitmessage
# 24 "data/maps/ANCIENT1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 25 "data/maps/ANCIENT1/scripts.pory"
	setvar VAR_0x8000, 39
# 26 "data/maps/ANCIENT1/scripts.pory"
	special LoadBirchBagPoolById
# 27 "data/maps/ANCIENT1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 28 "data/maps/ANCIENT1/scripts.pory"
	waitstate
# 29 "data/maps/ANCIENT1/scripts.pory"
	playfanfare MUS_EVOLVED
# 30 "data/maps/ANCIENT1/scripts.pory"
	msgbox ANCIENT_1_EventScript_Regigigas_Text_2
# 31 "data/maps/ANCIENT1/scripts.pory"
	msgbox ANCIENT_1_EventScript_Regigigas_Text_3
# 32 "data/maps/ANCIENT1/scripts.pory"
	waitmessage
# 33 "data/maps/ANCIENT1/scripts.pory"
	giveitem ITEM_TM_RAIN_DANCE, 1
# 34 "data/maps/ANCIENT1/scripts.pory"
	waitmessage
# 35 "data/maps/ANCIENT1/scripts.pory"
	applymovement 1, ANCIENT_1_EventScript_Regigigas_Movement_0
# 42 "data/maps/ANCIENT1/scripts.pory"
	waitmovement
# 43 "data/maps/ANCIENT1/scripts.pory"
	msgbox ANCIENT_1_EventScript_Regigigas_Text_4
# 44 "data/maps/ANCIENT1/scripts.pory"
	applymovement 1, ANCIENT_1_EventScript_Regigigas_Movement_0
# 51 "data/maps/ANCIENT1/scripts.pory"
	waitmovement
# 52 "data/maps/ANCIENT1/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 53 "data/maps/ANCIENT1/scripts.pory"
	waitmoncry
# 55 "data/maps/ANCIENT1/scripts.pory"
	special WarpToNextAct
# 56 "data/maps/ANCIENT1/scripts.pory"
	releaseall
	return


# 11 "data/maps/ANCIENT1/scripts.pory"
ANCIENT_1_EventScript_Regigigas_Movement_0:
# 12 "data/maps/ANCIENT1/scripts.pory"
	face_left
# 13 "data/maps/ANCIENT1/scripts.pory"
	face_up
# 14 "data/maps/ANCIENT1/scripts.pory"
	face_right
# 15 "data/maps/ANCIENT1/scripts.pory"
	face_down
# 16 "data/maps/ANCIENT1/scripts.pory"
	face_player
	step_end

ANCIENT_1_EventScript_Regigigas_Text_0:
# 19 "data/maps/ANCIENT1/scripts.pory"
	.string "Brrrr!\p"
	.string "Hiya! You've just beaten 3 paths!\n"
	.string "Amazing!\n"
	.string "Here's a gift for you.$"

ANCIENT_1_EventScript_Regigigas_Text_1:
# 22 "data/maps/ANCIENT1/scripts.pory"
	.string "It's a keepsake from my late friend. We\n"
	.string "once shared a dream for the world, but a\l"
	.string "lots changed since then.\p"
	.string "Anyways, enough reminiscing. While you\n"
	.string "have that item, all of your moves do 1.5\l"
	.string "damage in the rain. Not just your water\l"
	.string "type moves. And a pokemon with the\l"
	.string "Drizzle ability would go along well with\l"
	.string "that item, won't it?$"

ANCIENT_1_EventScript_Regigigas_Text_2:
# 30 "data/maps/ANCIENT1/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

ANCIENT_1_EventScript_Regigigas_Text_3:
# 31 "data/maps/ANCIENT1/scripts.pory"
	.string "And please take a Rain Dance TM too.$"

ANCIENT_1_EventScript_Regigigas_Text_4:
# 43 "data/maps/ANCIENT1/scripts.pory"
	.string "Next up is the final path! It'll be\n"
	.string "different to all the earlier paths in\l"
	.string "that there won't be any birch bags or\l"
	.string "items lying around. And everyone you'll\l"
	.string "have to face will be extremely\l"
	.string "challenging. But I'm sure you can do it!\l"
	.string "I'm rooting for you!$"
