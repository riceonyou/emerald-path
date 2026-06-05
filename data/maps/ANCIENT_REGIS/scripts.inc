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
# 50 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 1, ANCIENT_REGIS_EventScript_TalkToRegi_7
# 60 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 2, ANCIENT_REGIS_EventScript_TalkToRegi_8
ANCIENT_REGIS_EventScript_TalkToRegi_4:
# 71 "data/maps/ANCIENT_REGIS/scripts.pory"
	waitmessage
# 72 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_7
# 73 "data/maps/ANCIENT_REGIS/scripts.pory"
	setvar B_LEVEL_CAP_VARIABLE, 30
# 74 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_8
# 76 "data/maps/ANCIENT_REGIS/scripts.pory"
	switch VAR_0x8004
# 77 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 0, ANCIENT_REGIS_EventScript_TalkToRegi_11
ANCIENT_REGIS_EventScript_TalkToRegi_9:
# 82 "data/maps/ANCIENT_REGIS/scripts.pory"
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
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ANCIENT_REGIS_EventScript_TalkToRegi_Text_1, ANCIENT_REGIS_EventScript_TalkToRegi_Text_2, ANCIENT_REGIS_EventScript_TalkToRegi_Text_3
# 42 "data/maps/ANCIENT_REGIS/scripts.pory"
	switch VAR_RESULT
# 43 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 0, ANCIENT_REGIS_EventScript_TalkToRegi_13
# 45 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 1, ANCIENT_REGIS_EventScript_TalkToRegi_14
# 47 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 2, ANCIENT_REGIS_EventScript_TalkToRegi_15
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_7:
# 51 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ANCIENT_REGIS_EventScript_TalkToRegi_Text_4, ANCIENT_REGIS_EventScript_TalkToRegi_Text_5, ANCIENT_REGIS_EventScript_TalkToRegi_Text_6
# 52 "data/maps/ANCIENT_REGIS/scripts.pory"
	switch VAR_RESULT
# 53 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 0, ANCIENT_REGIS_EventScript_TalkToRegi_17
# 55 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 1, ANCIENT_REGIS_EventScript_TalkToRegi_18
# 57 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 2, ANCIENT_REGIS_EventScript_TalkToRegi_19
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_8:
# 61 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, ANCIENT_REGIS_EventScript_TalkToRegi_Text_1, ANCIENT_REGIS_EventScript_TalkToRegi_Text_2, ANCIENT_REGIS_EventScript_TalkToRegi_Text_3
# 62 "data/maps/ANCIENT_REGIS/scripts.pory"
	switch VAR_RESULT
# 63 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 0, ANCIENT_REGIS_EventScript_TalkToRegi_21
# 65 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 1, ANCIENT_REGIS_EventScript_TalkToRegi_22
# 67 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 2, ANCIENT_REGIS_EventScript_TalkToRegi_23
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_11:
# 78 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_9
# 79 "data/maps/ANCIENT_REGIS/scripts.pory"
	warp MAP_HOENN2_1, 7, 7
	goto ANCIENT_REGIS_EventScript_TalkToRegi_9

ANCIENT_REGIS_EventScript_TalkToRegi_13:
# 44 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_ICE_BEAM, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_14:
# 46 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_FLAMETHROWER, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_15:
# 48 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_17:
# 54 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_REFLECT, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_18:
# 56 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_LIGHT_SCREEN, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_19:
# 58 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_SAFEGUARD, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_21:
# 64 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_SLUDGE_BOMB, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_22:
# 66 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_BRICK_BREAK, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_23:
# 68 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_PSYCHIC, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4


ANCIENT_REGIS_EventScript_TalkToRegi_Text_0:
# 33 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Beep boop beep.\lThe next stage will be\nthe MAUVILLE path.$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_1:
# 41 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Ice Beam TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_2:
# 41 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Flamethrower TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_3:
# 41 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Thunderbolt TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_4:
# 51 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Reflect TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_5:
# 51 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Light Screen TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_6:
# 51 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Safeguard TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_7:
# 72 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "The level cap has been raised to 30$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_8:
# 74 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Boop beep boop.\lNow time to get you to the next\nstage.$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_9:
# 78 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "About to warp to HOENN2_1$"
