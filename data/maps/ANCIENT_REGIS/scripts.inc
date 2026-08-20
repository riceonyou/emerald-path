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
	switch VAR_0x8000
# 30 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 0, ANCIENT_REGIS_EventScript_TalkToRegi_3
# 39 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 1, ANCIENT_REGIS_EventScript_TalkToRegi_4
# 48 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 2, ANCIENT_REGIS_EventScript_TalkToRegi_5
ANCIENT_REGIS_EventScript_TalkToRegi_1:
# 57 "data/maps/ANCIENT_REGIS/scripts.pory"
	waitmessage
# 59 "data/maps/ANCIENT_REGIS/scripts.pory"
	setvar VAR_0x8000, 0
# 60 "data/maps/ANCIENT_REGIS/scripts.pory"
	setvar VAR_0x8001, 0
# 61 "data/maps/ANCIENT_REGIS/scripts.pory"
	setvar VAR_0x8002, 0
# 62 "data/maps/ANCIENT_REGIS/scripts.pory"
	setvar VAR_0x8003, 0
ANCIENT_REGIS_EventScript_TalkToRegi_7:
# 63 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8000, 3
	goto_if_ne ANCIENT_REGIS_EventScript_TalkToRegi_8
# 78 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8001, ITEM_TM_ICE_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_11
# 78 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8002, ITEM_TM_ICE_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_11
# 78 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8003, ITEM_TM_ICE_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_11
ANCIENT_REGIS_EventScript_TalkToRegi_10:
# 81 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8001, ITEM_TM_FIRE_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_25
# 81 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8002, ITEM_TM_FIRE_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_25
# 81 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8003, ITEM_TM_FIRE_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_25
ANCIENT_REGIS_EventScript_TalkToRegi_24:
# 84 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8001, ITEM_TM_THUNDER_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_39
# 84 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8002, ITEM_TM_THUNDER_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_39
# 84 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8003, ITEM_TM_THUNDER_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_39
ANCIENT_REGIS_EventScript_TalkToRegi_38:
# 87 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8001, ITEM_TM_DRAIN_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_52
# 87 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8002, ITEM_TM_DRAIN_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_52
# 87 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8003, ITEM_TM_DRAIN_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_52
ANCIENT_REGIS_EventScript_TalkToRegi_51:
# 90 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8001, ITEM_TM_DIZZY_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_59
# 90 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8002, ITEM_TM_DIZZY_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_59
# 90 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8003, ITEM_TM_DIZZY_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_59
ANCIENT_REGIS_EventScript_TalkToRegi_58:
# 93 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8001, ITEM_TM_SHADOW_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_66
# 93 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8002, ITEM_TM_SHADOW_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_66
# 93 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8003, ITEM_TM_SHADOW_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_66
ANCIENT_REGIS_EventScript_TalkToRegi_65:
# 96 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8001, ITEM_TM_SUCKER_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_73
# 96 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8002, ITEM_TM_SUCKER_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_73
# 96 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8003, ITEM_TM_SUCKER_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_73
ANCIENT_REGIS_EventScript_TalkToRegi_72:
# 100 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultistack 0, 0, TRUE, 3, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 101 "data/maps/ANCIENT_REGIS/scripts.pory"
	switch VAR_RESULT
# 102 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_ICE_PUNCH, ANCIENT_REGIS_EventScript_TalkToRegi_81
# 104 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_FIRE_PUNCH, ANCIENT_REGIS_EventScript_TalkToRegi_82
# 106 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_THUNDER_PUNCH, ANCIENT_REGIS_EventScript_TalkToRegi_83
# 108 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_DRAIN_PUNCH, ANCIENT_REGIS_EventScript_TalkToRegi_84
# 110 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_DIZZY_PUNCH, ANCIENT_REGIS_EventScript_TalkToRegi_85
# 112 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_SHADOW_PUNCH, ANCIENT_REGIS_EventScript_TalkToRegi_86
# 114 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_SUCKER_PUNCH, ANCIENT_REGIS_EventScript_TalkToRegi_87
ANCIENT_REGIS_EventScript_TalkToRegi_79:
# 118 "data/maps/ANCIENT_REGIS/scripts.pory"
	waitmessage
# 121 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_8
# 122 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_9
# 124 "data/maps/ANCIENT_REGIS/scripts.pory"
	special WarpToNextAct
# 126 "data/maps/ANCIENT_REGIS/scripts.pory"
	releaseall
	return

ANCIENT_REGIS_EventScript_TalkToRegi_3:
# 31 "data/maps/ANCIENT_REGIS/scripts.pory"
	fadescreen FADE_TO_BLACK
# 32 "data/maps/ANCIENT_REGIS/scripts.pory"
	setvar VAR_0x8000, 28
# 33 "data/maps/ANCIENT_REGIS/scripts.pory"
	special LoadBirchBagPoolById
# 34 "data/maps/ANCIENT_REGIS/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 35 "data/maps/ANCIENT_REGIS/scripts.pory"
	waitstate
# 36 "data/maps/ANCIENT_REGIS/scripts.pory"
	playfanfare MUS_EVOLVED
# 37 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_0
	goto ANCIENT_REGIS_EventScript_TalkToRegi_1

ANCIENT_REGIS_EventScript_TalkToRegi_4:
# 40 "data/maps/ANCIENT_REGIS/scripts.pory"
	fadescreen FADE_TO_BLACK
# 41 "data/maps/ANCIENT_REGIS/scripts.pory"
	setvar VAR_0x8000, 32
# 42 "data/maps/ANCIENT_REGIS/scripts.pory"
	special LoadBirchBagPoolById
# 43 "data/maps/ANCIENT_REGIS/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 44 "data/maps/ANCIENT_REGIS/scripts.pory"
	waitstate
# 45 "data/maps/ANCIENT_REGIS/scripts.pory"
	playfanfare MUS_EVOLVED
# 46 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_0
	goto ANCIENT_REGIS_EventScript_TalkToRegi_1

ANCIENT_REGIS_EventScript_TalkToRegi_5:
# 49 "data/maps/ANCIENT_REGIS/scripts.pory"
	fadescreen FADE_TO_BLACK
# 50 "data/maps/ANCIENT_REGIS/scripts.pory"
	setvar VAR_0x8000, 31
# 51 "data/maps/ANCIENT_REGIS/scripts.pory"
	special LoadBirchBagPoolById
# 52 "data/maps/ANCIENT_REGIS/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 53 "data/maps/ANCIENT_REGIS/scripts.pory"
	waitstate
# 54 "data/maps/ANCIENT_REGIS/scripts.pory"
	playfanfare MUS_EVOLVED
# 55 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_0
	goto ANCIENT_REGIS_EventScript_TalkToRegi_1

ANCIENT_REGIS_EventScript_TalkToRegi_8:
# 64 "data/maps/ANCIENT_REGIS/scripts.pory"
	randomelement ITEM_TM_ICE_PUNCH, ITEM_TM_FIRE_PUNCH, ITEM_TM_THUNDER_PUNCH, ITEM_TM_DRAIN_PUNCH, ITEM_TM_DIZZY_PUNCH, ITEM_TM_SHADOW_PUNCH, ITEM_TM_SUCKER_PUNCH
# 65 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_RESULT, VAR_0x8002
	goto_if_ne ANCIENT_REGIS_EventScript_TalkToRegi_20
ANCIENT_REGIS_EventScript_TalkToRegi_17:
# 69 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_RESULT, VAR_0x8001
	goto_if_ne ANCIENT_REGIS_EventScript_TalkToRegi_34
ANCIENT_REGIS_EventScript_TalkToRegi_31:
# 73 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_RESULT, VAR_0x8001
	goto_if_ne ANCIENT_REGIS_EventScript_TalkToRegi_47
	goto ANCIENT_REGIS_EventScript_TalkToRegi_7

ANCIENT_REGIS_EventScript_TalkToRegi_11:
# 79 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_1, ITEM_TM_ICE_PUNCH
	goto ANCIENT_REGIS_EventScript_TalkToRegi_10

ANCIENT_REGIS_EventScript_TalkToRegi_18:
# 66 "data/maps/ANCIENT_REGIS/scripts.pory"
	copyvar VAR_0x8001, VAR_RESULT
# 67 "data/maps/ANCIENT_REGIS/scripts.pory"
	addvar VAR_0x8000, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_17

ANCIENT_REGIS_EventScript_TalkToRegi_19:
# 65 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8001, 0
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_18
	goto ANCIENT_REGIS_EventScript_TalkToRegi_17

ANCIENT_REGIS_EventScript_TalkToRegi_20:
# 65 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_RESULT, VAR_0x8003
	goto_if_ne ANCIENT_REGIS_EventScript_TalkToRegi_19
	goto ANCIENT_REGIS_EventScript_TalkToRegi_17

ANCIENT_REGIS_EventScript_TalkToRegi_25:
# 82 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_2, ITEM_TM_FIRE_PUNCH
	goto ANCIENT_REGIS_EventScript_TalkToRegi_24

ANCIENT_REGIS_EventScript_TalkToRegi_32:
# 70 "data/maps/ANCIENT_REGIS/scripts.pory"
	copyvar VAR_0x8002, VAR_RESULT
# 71 "data/maps/ANCIENT_REGIS/scripts.pory"
	addvar VAR_0x8000, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_31

ANCIENT_REGIS_EventScript_TalkToRegi_33:
# 69 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8002, 0
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_32
	goto ANCIENT_REGIS_EventScript_TalkToRegi_31

ANCIENT_REGIS_EventScript_TalkToRegi_34:
# 69 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_RESULT, VAR_0x8003
	goto_if_ne ANCIENT_REGIS_EventScript_TalkToRegi_33
	goto ANCIENT_REGIS_EventScript_TalkToRegi_31

ANCIENT_REGIS_EventScript_TalkToRegi_39:
# 85 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_3, ITEM_TM_THUNDER_PUNCH
	goto ANCIENT_REGIS_EventScript_TalkToRegi_38

ANCIENT_REGIS_EventScript_TalkToRegi_45:
# 74 "data/maps/ANCIENT_REGIS/scripts.pory"
	copyvar VAR_0x8003, VAR_RESULT
# 75 "data/maps/ANCIENT_REGIS/scripts.pory"
	addvar VAR_0x8000, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_7

ANCIENT_REGIS_EventScript_TalkToRegi_46:
# 73 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8003, 0
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_45
	goto ANCIENT_REGIS_EventScript_TalkToRegi_7

ANCIENT_REGIS_EventScript_TalkToRegi_47:
# 73 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_RESULT, VAR_0x8002
	goto_if_ne ANCIENT_REGIS_EventScript_TalkToRegi_46
	goto ANCIENT_REGIS_EventScript_TalkToRegi_7

ANCIENT_REGIS_EventScript_TalkToRegi_52:
# 88 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_4, ITEM_TM_DRAIN_PUNCH
	goto ANCIENT_REGIS_EventScript_TalkToRegi_51

ANCIENT_REGIS_EventScript_TalkToRegi_59:
# 91 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_5, ITEM_TM_DIZZY_PUNCH
	goto ANCIENT_REGIS_EventScript_TalkToRegi_58

ANCIENT_REGIS_EventScript_TalkToRegi_66:
# 94 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_6, ITEM_TM_SHADOW_PUNCH
	goto ANCIENT_REGIS_EventScript_TalkToRegi_65

ANCIENT_REGIS_EventScript_TalkToRegi_73:
# 97 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_7, ITEM_TM_SUCKER_PUNCH
	goto ANCIENT_REGIS_EventScript_TalkToRegi_72

ANCIENT_REGIS_EventScript_TalkToRegi_81:
# 103 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_ICE_PUNCH, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_79

ANCIENT_REGIS_EventScript_TalkToRegi_82:
# 105 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_FIRE_PUNCH, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_79

ANCIENT_REGIS_EventScript_TalkToRegi_83:
# 107 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_THUNDER_PUNCH, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_79

ANCIENT_REGIS_EventScript_TalkToRegi_84:
# 109 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_DRAIN_PUNCH, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_79

ANCIENT_REGIS_EventScript_TalkToRegi_85:
# 111 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_DIZZY_PUNCH, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_79

ANCIENT_REGIS_EventScript_TalkToRegi_86:
# 113 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_SHADOW_PUNCH, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_79

ANCIENT_REGIS_EventScript_TalkToRegi_87:
# 115 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_SUCKER_PUNCH, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_79


ANCIENT_REGIS_EventScript_TalkToRegi_Text_0:
# 37 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_1:
# 79 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Ice Punch TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_2:
# 82 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Fire Punch TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_3:
# 85 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Thunder Punch TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_4:
# 88 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Drain Punch TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_5:
# 91 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Dizzy Punch TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_6:
# 94 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Shadow Punch TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_7:
# 97 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Sucker Punch TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_8:
# 121 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "The level cap has been raised to 30$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_9:
# 122 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Boop beep boop.\lNow time to get you to the next\nstage.$"
