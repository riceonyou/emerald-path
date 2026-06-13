ANCIENT_REGIS_MapScripts::
# 3 "data/maps/ANCIENT_REGIS/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ANCIENT_REGIS_LOAD_REGIS
# 2 "data/maps/ANCIENT_REGIS/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ANCIENT_REGIS_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

ANCIENT_REGIS_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 2 "data/maps/ANCIENT_REGIS/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ANCIENT_REGIS_ONWARP
	.2byte 0


ANCIENT_REGIS_ONWARP::
# 8 "data/maps/ANCIENT_REGIS/scripts.pory"
	setvar VAR_TEMP_1, 1
# 9 "data/maps/ANCIENT_REGIS/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	return


ANCIENT_REGIS_LOAD_REGIS::
# 13 "data/maps/ANCIENT_REGIS/scripts.pory"
	random 3
# 14 "data/maps/ANCIENT_REGIS/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 15 "data/maps/ANCIENT_REGIS/scripts.pory"
	switch VAR_0x8000
# 16 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 0, ANCIENT_REGIS_LOAD_REGIS_2
# 18 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 1, ANCIENT_REGIS_LOAD_REGIS_3
# 20 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 2, ANCIENT_REGIS_LOAD_REGIS_4
	return

ANCIENT_REGIS_LOAD_REGIS_2:
# 17 "data/maps/ANCIENT_REGIS/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( REGIROCK )
	return

ANCIENT_REGIS_LOAD_REGIS_3:
# 19 "data/maps/ANCIENT_REGIS/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( REGICE )
	return

ANCIENT_REGIS_LOAD_REGIS_4:
# 21 "data/maps/ANCIENT_REGIS/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( REGISTEEL )
	return


ANCIENT_REGIS_EventScript_TalkToRegi::
# 26 "data/maps/ANCIENT_REGIS/scripts.pory"
	lockall
# 29 "data/maps/ANCIENT_REGIS/scripts.pory"
	random 1
# 30 "data/maps/ANCIENT_REGIS/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 31 "data/maps/ANCIENT_REGIS/scripts.pory"
	switch VAR_RESULT
# 32 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 0, ANCIENT_REGIS_EventScript_TalkToRegi_3
ANCIENT_REGIS_EventScript_TalkToRegi_1:
# 39 "data/maps/ANCIENT_REGIS/scripts.pory"
	switch VAR_0x8000
# 40 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 0, ANCIENT_REGIS_EventScript_TalkToRegi_6
# 49 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 1, ANCIENT_REGIS_EventScript_TalkToRegi_7
# 62 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 2, ANCIENT_REGIS_EventScript_TalkToRegi_8
ANCIENT_REGIS_EventScript_TalkToRegi_4:
# 76 "data/maps/ANCIENT_REGIS/scripts.pory"
	waitmessage
# 77 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_5
# 78 "data/maps/ANCIENT_REGIS/scripts.pory"
	addvar VAR_CURRENT_ACT, 1
# 79 "data/maps/ANCIENT_REGIS/scripts.pory"
	special UpdateLevelCap
# 80 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_6
# 82 "data/maps/ANCIENT_REGIS/scripts.pory"
	switch VAR_0x8004
# 83 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 0, ANCIENT_REGIS_EventScript_TalkToRegi_11
ANCIENT_REGIS_EventScript_TalkToRegi_9:
# 88 "data/maps/ANCIENT_REGIS/scripts.pory"
	releaseall
	return

ANCIENT_REGIS_EventScript_TalkToRegi_3:
# 33 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_0
# 34 "data/maps/ANCIENT_REGIS/scripts.pory"
	waitmessage
	goto ANCIENT_REGIS_EventScript_TalkToRegi_1

ANCIENT_REGIS_EventScript_TalkToRegi_6:
# 41 "data/maps/ANCIENT_REGIS/scripts.pory"
	fadescreen FADE_TO_BLACK
# 42 "data/maps/ANCIENT_REGIS/scripts.pory"
	setvar VAR_0x8000, 28
# 43 "data/maps/ANCIENT_REGIS/scripts.pory"
	special LoadBirchBagPoolById
# 44 "data/maps/ANCIENT_REGIS/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 45 "data/maps/ANCIENT_REGIS/scripts.pory"
	waitstate
# 46 "data/maps/ANCIENT_REGIS/scripts.pory"
	playfanfare MUS_EVOLVED
# 47 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_7:
# 50 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_2, ITEM_TM_ICE_BEAM
# 51 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_3, ITEM_TM_FLAMETHROWER
# 52 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_4, ITEM_TM_THUNDERBOLT
# 53 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultistack 0, 0, TRUE, 3, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 54 "data/maps/ANCIENT_REGIS/scripts.pory"
	switch VAR_RESULT
# 55 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_ICE_BEAM, ANCIENT_REGIS_EventScript_TalkToRegi_13
# 57 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_FLAMETHROWER, ANCIENT_REGIS_EventScript_TalkToRegi_14
# 59 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_THUNDERBOLT, ANCIENT_REGIS_EventScript_TalkToRegi_15
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_8:
# 63 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_2, ITEM_TM_ICE_BEAM
# 64 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_3, ITEM_TM_FLAMETHROWER
# 65 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_4, ITEM_TM_THUNDERBOLT
# 66 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultistack 0, 0, TRUE, 3, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 67 "data/maps/ANCIENT_REGIS/scripts.pory"
	switch VAR_RESULT
# 68 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_ICE_BEAM, ANCIENT_REGIS_EventScript_TalkToRegi_17
# 70 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_FLAMETHROWER, ANCIENT_REGIS_EventScript_TalkToRegi_18
# 72 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_THUNDERBOLT, ANCIENT_REGIS_EventScript_TalkToRegi_19
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_11:
# 84 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_7
# 85 "data/maps/ANCIENT_REGIS/scripts.pory"
	warp MAP_HOENN2_1, 7, 7
	goto ANCIENT_REGIS_EventScript_TalkToRegi_9

ANCIENT_REGIS_EventScript_TalkToRegi_13:
# 56 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_ICE_BEAM, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_14:
# 58 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_FLAMETHROWER, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_15:
# 60 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_17:
# 69 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_ICE_BEAM, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_18:
# 71 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_FLAMETHROWER, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_19:
# 73 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4


ANCIENT_REGIS_EventScript_TalkToRegi_Text_0:
# 33 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Beep boop beep.\lThe next act will be\nthe MAUVILLE path.$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_1:
# 47 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_2:
# 50 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Ice Beam TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_3:
# 51 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Flamethrower TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_4:
# 52 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Thunderbolt TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_5:
# 77 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "The level cap has been raised to 30$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_6:
# 80 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Boop beep boop.\lNow time to get you to the next\nstage.$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_7:
# 84 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "About to warp to HOENN2_1$"
