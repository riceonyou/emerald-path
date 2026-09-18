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
# 42 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	case 1, ANCIENT_DEOXYS_EventScript_TalkToDeoxys_4
# 56 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	case 2, ANCIENT_DEOXYS_EventScript_TalkToDeoxys_5
ANCIENT_DEOXYS_EventScript_TalkToDeoxys_1:
# 70 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	waitmessage
# 71 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	msgbox ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_4
# 72 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	waitmessage
# 73 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	giveitem ITEM_REGI_KNUCKLES_CHARM, 1
# 74 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	msgbox ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_5
# 75 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	waitmessage
# 76 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	setvar VAR_0x8000, 0
# 77 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	setvar VAR_0x8001, 0
# 78 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	setvar VAR_0x8002, 0
# 79 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	setvar VAR_0x8003, 0
ANCIENT_DEOXYS_EventScript_TalkToDeoxys_7:
# 80 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_0x8000, 3
	goto_if_ne ANCIENT_DEOXYS_EventScript_TalkToDeoxys_8
# 95 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_0x8001, ITEM_TM_ICE_PUNCH
	goto_if_eq ANCIENT_DEOXYS_EventScript_TalkToDeoxys_11
# 95 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_0x8002, ITEM_TM_ICE_PUNCH
	goto_if_eq ANCIENT_DEOXYS_EventScript_TalkToDeoxys_11
# 95 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_0x8003, ITEM_TM_ICE_PUNCH
	goto_if_eq ANCIENT_DEOXYS_EventScript_TalkToDeoxys_11
ANCIENT_DEOXYS_EventScript_TalkToDeoxys_10:
# 98 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_0x8001, ITEM_TM_FIRE_PUNCH
	goto_if_eq ANCIENT_DEOXYS_EventScript_TalkToDeoxys_25
# 98 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_0x8002, ITEM_TM_FIRE_PUNCH
	goto_if_eq ANCIENT_DEOXYS_EventScript_TalkToDeoxys_25
# 98 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_0x8003, ITEM_TM_FIRE_PUNCH
	goto_if_eq ANCIENT_DEOXYS_EventScript_TalkToDeoxys_25
ANCIENT_DEOXYS_EventScript_TalkToDeoxys_24:
# 101 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_0x8001, ITEM_TM_THUNDER_PUNCH
	goto_if_eq ANCIENT_DEOXYS_EventScript_TalkToDeoxys_39
# 101 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_0x8002, ITEM_TM_THUNDER_PUNCH
	goto_if_eq ANCIENT_DEOXYS_EventScript_TalkToDeoxys_39
# 101 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_0x8003, ITEM_TM_THUNDER_PUNCH
	goto_if_eq ANCIENT_DEOXYS_EventScript_TalkToDeoxys_39
ANCIENT_DEOXYS_EventScript_TalkToDeoxys_38:
# 104 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_0x8001, ITEM_TM_DRAIN_PUNCH
	goto_if_eq ANCIENT_DEOXYS_EventScript_TalkToDeoxys_52
# 104 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_0x8002, ITEM_TM_DRAIN_PUNCH
	goto_if_eq ANCIENT_DEOXYS_EventScript_TalkToDeoxys_52
# 104 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_0x8003, ITEM_TM_DRAIN_PUNCH
	goto_if_eq ANCIENT_DEOXYS_EventScript_TalkToDeoxys_52
ANCIENT_DEOXYS_EventScript_TalkToDeoxys_51:
# 107 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_0x8001, ITEM_TM_DIZZY_PUNCH
	goto_if_eq ANCIENT_DEOXYS_EventScript_TalkToDeoxys_59
# 107 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_0x8002, ITEM_TM_DIZZY_PUNCH
	goto_if_eq ANCIENT_DEOXYS_EventScript_TalkToDeoxys_59
# 107 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_0x8003, ITEM_TM_DIZZY_PUNCH
	goto_if_eq ANCIENT_DEOXYS_EventScript_TalkToDeoxys_59
ANCIENT_DEOXYS_EventScript_TalkToDeoxys_58:
# 110 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_0x8001, ITEM_TM_SHADOW_PUNCH
	goto_if_eq ANCIENT_DEOXYS_EventScript_TalkToDeoxys_66
# 110 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_0x8002, ITEM_TM_SHADOW_PUNCH
	goto_if_eq ANCIENT_DEOXYS_EventScript_TalkToDeoxys_66
# 110 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_0x8003, ITEM_TM_SHADOW_PUNCH
	goto_if_eq ANCIENT_DEOXYS_EventScript_TalkToDeoxys_66
ANCIENT_DEOXYS_EventScript_TalkToDeoxys_65:
# 113 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_0x8001, ITEM_TM_SUCKER_PUNCH
	goto_if_eq ANCIENT_DEOXYS_EventScript_TalkToDeoxys_73
# 113 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_0x8002, ITEM_TM_SUCKER_PUNCH
	goto_if_eq ANCIENT_DEOXYS_EventScript_TalkToDeoxys_73
# 113 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_0x8003, ITEM_TM_SUCKER_PUNCH
	goto_if_eq ANCIENT_DEOXYS_EventScript_TalkToDeoxys_73
ANCIENT_DEOXYS_EventScript_TalkToDeoxys_72:
# 117 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	dynmultistack 0, 0, TRUE, 3, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 118 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	switch VAR_RESULT
# 119 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	case ITEM_TM_ICE_PUNCH, ANCIENT_DEOXYS_EventScript_TalkToDeoxys_81
# 121 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	case ITEM_TM_FIRE_PUNCH, ANCIENT_DEOXYS_EventScript_TalkToDeoxys_82
# 123 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	case ITEM_TM_THUNDER_PUNCH, ANCIENT_DEOXYS_EventScript_TalkToDeoxys_83
# 125 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	case ITEM_TM_DRAIN_PUNCH, ANCIENT_DEOXYS_EventScript_TalkToDeoxys_84
# 127 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	case ITEM_TM_DIZZY_PUNCH, ANCIENT_DEOXYS_EventScript_TalkToDeoxys_85
# 129 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	case ITEM_TM_SHADOW_PUNCH, ANCIENT_DEOXYS_EventScript_TalkToDeoxys_86
# 131 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	case ITEM_TM_SUCKER_PUNCH, ANCIENT_DEOXYS_EventScript_TalkToDeoxys_87
ANCIENT_DEOXYS_EventScript_TalkToDeoxys_79:
# 135 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	waitmessage
# 138 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	msgbox ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_13
# 140 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	special WarpToNextAct
# 142 "data/maps/ANCIENT_DEOXYS/scripts.pory"
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
	setvar VAR_0x8000, 28
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
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_1

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_4:
# 43 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	playmoncry SPECIES_DEOXYS_DEFENSE, CRY_MODE_ENCOUNTER
# 44 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	waitmoncry
# 45 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	msgbox ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_2
# 46 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	waitmessage
# 47 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	fadescreen FADE_TO_BLACK
# 48 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	setvar VAR_0x8000, 32
# 49 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	special LoadBirchBagPoolById
# 50 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 51 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	waitstate
# 52 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	playfanfare MUS_EVOLVED
# 53 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	msgbox ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_1
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_1

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_5:
# 57 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	playmoncry SPECIES_DEOXYS_SPEED, CRY_MODE_ENCOUNTER
# 58 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	waitmoncry
# 59 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	msgbox ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_3
# 60 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	waitmessage
# 61 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	fadescreen FADE_TO_BLACK
# 62 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	setvar VAR_0x8000, 31
# 63 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	special LoadBirchBagPoolById
# 64 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 65 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	waitstate
# 66 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	playfanfare MUS_EVOLVED
# 67 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	msgbox ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_1
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_1

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_8:
# 81 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	randomelement ITEM_TM_ICE_PUNCH, ITEM_TM_FIRE_PUNCH, ITEM_TM_THUNDER_PUNCH, ITEM_TM_DRAIN_PUNCH, ITEM_TM_DIZZY_PUNCH, ITEM_TM_SHADOW_PUNCH, ITEM_TM_SUCKER_PUNCH
# 82 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_RESULT, VAR_0x8002
	goto_if_ne ANCIENT_DEOXYS_EventScript_TalkToDeoxys_20
ANCIENT_DEOXYS_EventScript_TalkToDeoxys_17:
# 86 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_RESULT, VAR_0x8001
	goto_if_ne ANCIENT_DEOXYS_EventScript_TalkToDeoxys_34
ANCIENT_DEOXYS_EventScript_TalkToDeoxys_31:
# 90 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_RESULT, VAR_0x8001
	goto_if_ne ANCIENT_DEOXYS_EventScript_TalkToDeoxys_47
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_7

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_11:
# 96 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	dynmultipush ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_6, ITEM_TM_ICE_PUNCH
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_10

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_18:
# 83 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	copyvar VAR_0x8001, VAR_RESULT
# 84 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	addvar VAR_0x8000, 1
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_17

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_19:
# 82 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_0x8001, 0
	goto_if_eq ANCIENT_DEOXYS_EventScript_TalkToDeoxys_18
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_17

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_20:
# 82 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_RESULT, VAR_0x8003
	goto_if_ne ANCIENT_DEOXYS_EventScript_TalkToDeoxys_19
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_17

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_25:
# 99 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	dynmultipush ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_7, ITEM_TM_FIRE_PUNCH
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_24

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_32:
# 87 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	copyvar VAR_0x8002, VAR_RESULT
# 88 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	addvar VAR_0x8000, 1
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_31

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_33:
# 86 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_0x8002, 0
	goto_if_eq ANCIENT_DEOXYS_EventScript_TalkToDeoxys_32
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_31

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_34:
# 86 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_RESULT, VAR_0x8003
	goto_if_ne ANCIENT_DEOXYS_EventScript_TalkToDeoxys_33
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_31

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_39:
# 102 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	dynmultipush ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_8, ITEM_TM_THUNDER_PUNCH
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_38

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_45:
# 91 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	copyvar VAR_0x8003, VAR_RESULT
# 92 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	addvar VAR_0x8000, 1
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_7

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_46:
# 90 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_0x8003, 0
	goto_if_eq ANCIENT_DEOXYS_EventScript_TalkToDeoxys_45
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_7

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_47:
# 90 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	compare VAR_RESULT, VAR_0x8002
	goto_if_ne ANCIENT_DEOXYS_EventScript_TalkToDeoxys_46
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_7

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_52:
# 105 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	dynmultipush ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_9, ITEM_TM_DRAIN_PUNCH
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_51

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_59:
# 108 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	dynmultipush ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_10, ITEM_TM_DIZZY_PUNCH
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_58

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_66:
# 111 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	dynmultipush ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_11, ITEM_TM_SHADOW_PUNCH
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_65

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_73:
# 114 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	dynmultipush ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_12, ITEM_TM_SUCKER_PUNCH
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_72

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_81:
# 120 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	giveitem ITEM_TM_ICE_PUNCH, 1
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_79

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_82:
# 122 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	giveitem ITEM_TM_FIRE_PUNCH, 1
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_79

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_83:
# 124 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	giveitem ITEM_TM_THUNDER_PUNCH, 1
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_79

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_84:
# 126 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	giveitem ITEM_TM_DRAIN_PUNCH, 1
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_79

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_85:
# 128 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	giveitem ITEM_TM_DIZZY_PUNCH, 1
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_79

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_86:
# 130 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	giveitem ITEM_TM_SHADOW_PUNCH, 1
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_79

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_87:
# 132 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	giveitem ITEM_TM_SUCKER_PUNCH, 1
	goto ANCIENT_DEOXYS_EventScript_TalkToDeoxys_79


ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_0:
# 31 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	.string "Boop beep boop. You have succesfully\ncompleted the first path. Beep.\pAs a result, you will be given these\nrewards. Boop.\lThe first reward is a fossil pokemon.$"

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_1:
# 39 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_2:
# 45 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	.string "Boop beep boop. You have succesfully\nbeaten the first act. Beep.\pAs a result, you will be given these\nrewards. Boop.\lThe first reward is an ice pokemon.$"

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_3:
# 59 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	.string "Boop beep boop. You have succesfully\nbeaten the first act. Beep.\pAs a result, you will be given these\nrewards. Boop.\lThe first reward is a steel pokemon.$"

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_4:
# 71 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	.string "You will also be given the Regi Knuckles.\nBeep.$"

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_5:
# 74 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	.string "The Regi Knuckles power up your\npunching moves and makes them\lunable to miss. Boop.\pIt also comes with a punching TM\nof your choice. Beep.$"

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_6:
# 96 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	.string "Ice Punch TM$"

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_7:
# 99 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	.string "Fire Punch TM$"

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_8:
# 102 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	.string "Thunder Punch TM$"

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_9:
# 105 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	.string "Drain Punch TM$"

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_10:
# 108 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	.string "Dizzy Punch TM$"

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_11:
# 111 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	.string "Shadow Punch TM$"

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_12:
# 114 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	.string "Sucker Punch TM$"

ANCIENT_DEOXYS_EventScript_TalkToDeoxys_Text_13:
# 138 "data/maps/ANCIENT_DEOXYS/scripts.pory"
	.string "Beep boop boop.\lYou will now proceed to the next path.$"
