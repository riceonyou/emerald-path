ANCIENT_DEOXYS_MapScripts::
# 3 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ANCIENT_DEOXYS_LOAD_DEOXYS
# 2 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ANCIENT_DEOXYS_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

ANCIENT_DEOXYS_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 2 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ANCIENT_DEOXYS_ONWARP
	.2byte 0


ANCIENT_DEOXYS_ONWARP::
# 8 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	setvar VAR_TEMP_1, 1
# 9 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	return


ANCIENT_DEOXYS_LOAD_DEOXYS::
# 13 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	switch VAR_0x8000
# 14 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	case 0, ANCIENT_DEOXYS_LOAD_DEOXYS_2
# 16 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	case 1, ANCIENT_DEOXYS_LOAD_DEOXYS_3
# 18 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	case 2, ANCIENT_DEOXYS_LOAD_DEOXYS_4
	return

ANCIENT_DEOXYS_LOAD_DEOXYS_2:
# 15 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( DEOXYS_ATTACK )
	return

ANCIENT_DEOXYS_LOAD_DEOXYS_3:
# 17 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( DEOXYS_DEFENSE )
	return

ANCIENT_DEOXYS_LOAD_DEOXYS_4:
# 19 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( DEOXYS_SPEED )
	return


ANCIENT_DEOXYS_EventScript_TalkToDeoxys::
# 24 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	lockall
# 25 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	faceplayer
# 27 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	switch VAR_0x8000
# 28 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	case 0, ANCIENT_DEOXYS_EventScript_TalkToDeoxys_3
# 44 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	case 1, ANCIENT_DEOXYS_EventScript_TalkToDeoxys_4
# 60 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	case 2, ANCIENT_DEOXYS_EventScript_TalkToDeoxys_5
ANCIENT_DEOXYS_EventScript_TalkToDeoxys_1:
# 75 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	waitmessage
# 76 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	msgbox ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_5
# 77 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	waitmessage
# 78 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	giveitem ITEM_DEOXYS_MUTATION_CHARM, 1
# 79 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	msgbox ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_6
# 81 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	special WarpToNextAct
# 83 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	releaseall
	return

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_3:
# 29 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	playmoncry SPECIES_DEOXYS_ATTACK, CRY_MODE_ENCOUNTER
# 30 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	waitmoncry
# 31 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	msgbox ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_0
# 32 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	waitmessage
# 33 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	fadescreen FADE_TO_BLACK
# 34 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	setvar VAR_0x8000, 40
# 35 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	special LoadBirchBagPoolById
# 36 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 37 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	waitstate
# 38 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	playfanfare MUS_EVOLVED
# 39 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	msgbox ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_1
# 40 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	msgbox ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_2
# 41 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	giveitem ITEM_TM_PHOTON_GEYSER, 1
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_1

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_4:
# 45 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	playmoncry SPECIES_DEOXYS_DEFENSE, CRY_MODE_ENCOUNTER
# 46 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	waitmoncry
# 47 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	msgbox ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_3
# 48 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	waitmessage
# 49 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	fadescreen FADE_TO_BLACK
# 50 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	setvar VAR_0x8000, 41
# 51 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	special LoadBirchBagPoolById
# 52 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 53 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	waitstate
# 54 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	playfanfare MUS_EVOLVED
# 55 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	msgbox ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_1
# 56 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	msgbox ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_2
# 57 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	giveitem ITEM_TM_SILK_TRAP, 1
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_1

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_5:
# 61 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	playmoncry SPECIES_DEOXYS_SPEED, CRY_MODE_ENCOUNTER
# 62 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	waitmoncry
# 63 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	msgbox ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_4
# 64 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	waitmessage
# 65 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	fadescreen FADE_TO_BLACK
# 66 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	setvar VAR_0x8000, 42
# 67 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	special LoadBirchBagPoolById
# 68 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 69 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	waitstate
# 70 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	playfanfare MUS_EVOLVED
# 71 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	msgbox ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_1
# 72 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	msgbox ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_2
# 73 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	giveitem ITEM_TM_EXTREME_SPEED, 1
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_1


ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_0:
# 31 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	.string "Hello. I am Deoxys. This is outer space.\n"
	.string "I have some rewards for thee. Firstly an\l"
	.string "offensive pokemon.$"

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_1:
# 39 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_2:
# 40 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	.string "And secondly, a strong TM!$"

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_3:
# 47 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	.string "Hello. I am Deoxys. This is outer space.\n"
	.string "I have some rewards for thee. Firstly a\l"
	.string "defensive pokemon.$"

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_4:
# 63 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	.string "Hello. I am Deoxys. This is outer space.\n"
	.string "I have some rewards for thee. Firstly a\l"
	.string "speedy pokemon.$"

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_5:
# 76 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	.string "And lastly, a charm for you.$"

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_6:
# 79 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	.string "The Deoxys Mutation causes your\n"
	.string "pokemon to boost a random stat every\l"
	.string "other turn. I hope it provides you the\l"
	.string "boost needed to defeat the next and\l"
	.string "final path, haha.\p"
	.string "Now off you go.$"
