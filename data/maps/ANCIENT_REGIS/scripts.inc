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
# 53 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 1, ANCIENT_REGIS_EventScript_TalkToRegi_7
# 66 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 2, ANCIENT_REGIS_EventScript_TalkToRegi_8
ANCIENT_REGIS_EventScript_TalkToRegi_4:
# 80 "data/maps/ANCIENT_REGIS/scripts.pory"
	waitmessage
# 81 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_4
# 82 "data/maps/ANCIENT_REGIS/scripts.pory"
	addvar VAR_CURRENT_ACT, 1
# 83 "data/maps/ANCIENT_REGIS/scripts.pory"
	special UpdateLevelCap
# 84 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_5
# 86 "data/maps/ANCIENT_REGIS/scripts.pory"
	switch VAR_0x8004
# 87 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 0, ANCIENT_REGIS_EventScript_TalkToRegi_11
ANCIENT_REGIS_EventScript_TalkToRegi_9:
# 92 "data/maps/ANCIENT_REGIS/scripts.pory"
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
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_1, ITEM_TM_ICE_BEAM
# 42 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_2, ITEM_TM_FLAMETHROWER
# 43 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_3, ITEM_TM_THUNDERBOLT
# 44 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultistack 0, 0, TRUE, 3, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 45 "data/maps/ANCIENT_REGIS/scripts.pory"
	switch VAR_RESULT
# 46 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_ICE_BEAM, ANCIENT_REGIS_EventScript_TalkToRegi_13
# 48 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_FLAMETHROWER, ANCIENT_REGIS_EventScript_TalkToRegi_14
# 50 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_THUNDERBOLT, ANCIENT_REGIS_EventScript_TalkToRegi_15
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_7:
# 54 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_1, ITEM_TM_ICE_BEAM
# 55 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_2, ITEM_TM_FLAMETHROWER
# 56 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_3, ITEM_TM_THUNDERBOLT
# 57 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultistack 0, 0, TRUE, 3, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 58 "data/maps/ANCIENT_REGIS/scripts.pory"
	switch VAR_RESULT
# 59 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_ICE_BEAM, ANCIENT_REGIS_EventScript_TalkToRegi_17
# 61 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_FLAMETHROWER, ANCIENT_REGIS_EventScript_TalkToRegi_18
# 63 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_THUNDERBOLT, ANCIENT_REGIS_EventScript_TalkToRegi_19
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_8:
# 67 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_1, ITEM_TM_ICE_BEAM
# 68 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_2, ITEM_TM_FLAMETHROWER
# 69 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_3, ITEM_TM_THUNDERBOLT
# 70 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultistack 0, 0, TRUE, 3, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 71 "data/maps/ANCIENT_REGIS/scripts.pory"
	switch VAR_RESULT
# 72 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_ICE_BEAM, ANCIENT_REGIS_EventScript_TalkToRegi_21
# 74 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_FLAMETHROWER, ANCIENT_REGIS_EventScript_TalkToRegi_22
# 76 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_THUNDERBOLT, ANCIENT_REGIS_EventScript_TalkToRegi_23
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_11:
# 88 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_6
# 89 "data/maps/ANCIENT_REGIS/scripts.pory"
	warp MAP_HOENN2_1, 7, 7
	goto ANCIENT_REGIS_EventScript_TalkToRegi_9

ANCIENT_REGIS_EventScript_TalkToRegi_13:
# 47 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_ICE_BEAM, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_14:
# 49 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_FLAMETHROWER, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_15:
# 51 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_17:
# 60 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_ICE_BEAM, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_18:
# 62 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_FLAMETHROWER, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_19:
# 64 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_21:
# 73 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_ICE_BEAM, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_22:
# 75 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_FLAMETHROWER, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4

ANCIENT_REGIS_EventScript_TalkToRegi_23:
# 77 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_4


ANCIENT_REGIS_EventScript_TalkToRegi_Text_0:
# 33 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Beep boop beep.\lThe next act will be\nthe MAUVILLE path.$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_1:
# 41 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Ice Beam TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_2:
# 42 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Flamethrower TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_3:
# 43 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Thunderbolt TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_4:
# 81 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "The level cap has been raised to 30$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_5:
# 84 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Boop beep boop.\lNow time to get you to the next\nstage.$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_6:
# 88 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "About to warp to HOENN2_1$"
