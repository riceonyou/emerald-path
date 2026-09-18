ANCIENT_KYOGRE_MapScripts::
	.byte 0


ANCIENT_KYOGRE_EventScript_Kyogre::
# 5 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	lockall
# 8 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 9 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	waitmoncry
# 10 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	applymovement 1, ANCIENT_KYOGRE_EventScript_Kyogre_Movement_0
# 17 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	waitmovement
# 18 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	msgbox ANCIENT_KYOGRE_EventScript_Kyogre_Text_0
# 19 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	waitmessage
# 20 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	giveitem ITEM_ARCHIES_BANDANA_CHARM, 1
# 21 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	msgbox ANCIENT_KYOGRE_EventScript_Kyogre_Text_1
# 22 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	waitmessage
# 23 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	fadescreen FADE_TO_BLACK
# 24 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	setvar VAR_0x8000, 39
# 25 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	special LoadBirchBagPoolById
# 26 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 27 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	waitstate
# 28 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	playfanfare MUS_EVOLVED
# 29 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	msgbox ANCIENT_KYOGRE_EventScript_Kyogre_Text_2
# 30 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	msgbox ANCIENT_KYOGRE_EventScript_Kyogre_Text_3
# 31 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	waitmessage
# 32 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	giveitem ITEM_TM_RAIN_DANCE, 1
# 33 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	waitmessage
# 34 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	applymovement 1, ANCIENT_KYOGRE_EventScript_Kyogre_Movement_0
# 41 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	waitmovement
# 42 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	msgbox ANCIENT_KYOGRE_EventScript_Kyogre_Text_4
# 43 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	applymovement 1, ANCIENT_KYOGRE_EventScript_Kyogre_Movement_0
# 50 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	waitmovement
# 51 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 52 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	waitmoncry
# 54 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	special WarpToNextAct
# 55 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	releaseall
	return


# 10 "data/maps/ANCIENT_KYOGRE/scripts.pory"
ANCIENT_KYOGRE_EventScript_Kyogre_Movement_0:
# 11 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	face_left
# 12 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	face_up
# 13 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	face_right
# 14 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	face_down
# 15 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	face_player
	step_end

ANCIENT_KYOGRE_EventScript_Kyogre_Text_0:
# 18 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	.string "Brrrr!\p"
	.string "Hiya! You've just beaten 3 paths!\n"
	.string "Amazing!\n"
	.string "Here's a gift for you.$"

ANCIENT_KYOGRE_EventScript_Kyogre_Text_1:
# 21 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	.string "It's a keepsake from my late friend. We\n"
	.string "once shared a dream for the world, but a\l"
	.string "lots changed since then.\p"
	.string "Anyways, enough reminiscing. While you\n"
	.string "have that item, all of your moves do 1.5\l"
	.string "damage in the rain. Not just your water\l"
	.string "type moves. And a pokemon with the\l"
	.string "Drizzle ability would go along well with\l"
	.string "that item, won't it?$"

ANCIENT_KYOGRE_EventScript_Kyogre_Text_2:
# 29 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

ANCIENT_KYOGRE_EventScript_Kyogre_Text_3:
# 30 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	.string "And please take a Rain Dance TM too.$"

ANCIENT_KYOGRE_EventScript_Kyogre_Text_4:
# 42 "data/maps/ANCIENT_KYOGRE/scripts.pory"
	.string "Next up is the final path! It'll be\n"
	.string "different to all the earlier paths in\l"
	.string "that there won't be any birch bags or\l"
	.string "items lying around. And everyone you'll\l"
	.string "have to face will be extremely\l"
	.string "challenging. But I'm sure you can do it!\l"
	.string "I'm rooting for you!$"
