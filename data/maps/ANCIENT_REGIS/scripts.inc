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
	switch VAR_0x8000
# 14 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 0, ANCIENT_REGIS_LOAD_REGIS_2
# 16 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 1, ANCIENT_REGIS_LOAD_REGIS_3
# 18 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 2, ANCIENT_REGIS_LOAD_REGIS_4
	return

ANCIENT_REGIS_LOAD_REGIS_2:
# 15 "data/maps/ANCIENT_REGIS/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( REGIROCK )
	return

ANCIENT_REGIS_LOAD_REGIS_3:
# 17 "data/maps/ANCIENT_REGIS/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( REGICE )
	return

ANCIENT_REGIS_LOAD_REGIS_4:
# 19 "data/maps/ANCIENT_REGIS/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( REGISTEEL )
	return


ANCIENT_REGIS_EventScript_TalkToRegi::
# 24 "data/maps/ANCIENT_REGIS/scripts.pory"
	lockall
# 25 "data/maps/ANCIENT_REGIS/scripts.pory"
	faceplayer
# 27 "data/maps/ANCIENT_REGIS/scripts.pory"
	switch VAR_0x8000
# 28 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 0, ANCIENT_REGIS_EventScript_TalkToRegi_3
# 42 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 1, ANCIENT_REGIS_EventScript_TalkToRegi_4
# 56 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 2, ANCIENT_REGIS_EventScript_TalkToRegi_5
ANCIENT_REGIS_EventScript_TalkToRegi_1:
# 70 "data/maps/ANCIENT_REGIS/scripts.pory"
	waitmessage
# 71 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_4
# 72 "data/maps/ANCIENT_REGIS/scripts.pory"
	waitmessage
# 73 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_REGI_KNUCKLES_CHARM, 1
# 74 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_5
# 75 "data/maps/ANCIENT_REGIS/scripts.pory"
	waitmessage
# 76 "data/maps/ANCIENT_REGIS/scripts.pory"
	setvar VAR_0x8000, 0
# 77 "data/maps/ANCIENT_REGIS/scripts.pory"
	setvar VAR_0x8001, 0
# 78 "data/maps/ANCIENT_REGIS/scripts.pory"
	setvar VAR_0x8002, 0
# 79 "data/maps/ANCIENT_REGIS/scripts.pory"
	setvar VAR_0x8003, 0
ANCIENT_REGIS_EventScript_TalkToRegi_7:
# 80 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8000, 3
	goto_if_ne ANCIENT_REGIS_EventScript_TalkToRegi_8
# 95 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8001, ITEM_TM_ICE_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_11
# 95 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8002, ITEM_TM_ICE_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_11
# 95 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8003, ITEM_TM_ICE_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_11
ANCIENT_REGIS_EventScript_TalkToRegi_10:
# 98 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8001, ITEM_TM_FIRE_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_25
# 98 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8002, ITEM_TM_FIRE_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_25
# 98 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8003, ITEM_TM_FIRE_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_25
ANCIENT_REGIS_EventScript_TalkToRegi_24:
# 101 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8001, ITEM_TM_THUNDER_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_39
# 101 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8002, ITEM_TM_THUNDER_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_39
# 101 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8003, ITEM_TM_THUNDER_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_39
ANCIENT_REGIS_EventScript_TalkToRegi_38:
# 104 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8001, ITEM_TM_DRAIN_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_52
# 104 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8002, ITEM_TM_DRAIN_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_52
# 104 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8003, ITEM_TM_DRAIN_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_52
ANCIENT_REGIS_EventScript_TalkToRegi_51:
# 107 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8001, ITEM_TM_DIZZY_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_59
# 107 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8002, ITEM_TM_DIZZY_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_59
# 107 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8003, ITEM_TM_DIZZY_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_59
ANCIENT_REGIS_EventScript_TalkToRegi_58:
# 110 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8001, ITEM_TM_SHADOW_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_66
# 110 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8002, ITEM_TM_SHADOW_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_66
# 110 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8003, ITEM_TM_SHADOW_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_66
ANCIENT_REGIS_EventScript_TalkToRegi_65:
# 113 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8001, ITEM_TM_SUCKER_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_73
# 113 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8002, ITEM_TM_SUCKER_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_73
# 113 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8003, ITEM_TM_SUCKER_PUNCH
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_73
ANCIENT_REGIS_EventScript_TalkToRegi_72:
# 117 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultistack 0, 0, TRUE, 3, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 118 "data/maps/ANCIENT_REGIS/scripts.pory"
	switch VAR_RESULT
# 119 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_ICE_PUNCH, ANCIENT_REGIS_EventScript_TalkToRegi_81
# 121 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_FIRE_PUNCH, ANCIENT_REGIS_EventScript_TalkToRegi_82
# 123 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_THUNDER_PUNCH, ANCIENT_REGIS_EventScript_TalkToRegi_83
# 125 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_DRAIN_PUNCH, ANCIENT_REGIS_EventScript_TalkToRegi_84
# 127 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_DIZZY_PUNCH, ANCIENT_REGIS_EventScript_TalkToRegi_85
# 129 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_SHADOW_PUNCH, ANCIENT_REGIS_EventScript_TalkToRegi_86
# 131 "data/maps/ANCIENT_REGIS/scripts.pory"
	case ITEM_TM_SUCKER_PUNCH, ANCIENT_REGIS_EventScript_TalkToRegi_87
ANCIENT_REGIS_EventScript_TalkToRegi_79:
# 135 "data/maps/ANCIENT_REGIS/scripts.pory"
	waitmessage
# 138 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_13
# 140 "data/maps/ANCIENT_REGIS/scripts.pory"
	special WarpToNextAct
# 142 "data/maps/ANCIENT_REGIS/scripts.pory"
	releaseall
	return

ANCIENT_REGIS_EventScript_TalkToRegi_3:
# 29 "data/maps/ANCIENT_REGIS/scripts.pory"
	playmoncry SPECIES_REGIROCK, CRY_MODE_ENCOUNTER
# 30 "data/maps/ANCIENT_REGIS/scripts.pory"
	waitmoncry
# 31 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_0
# 32 "data/maps/ANCIENT_REGIS/scripts.pory"
	waitmessage
# 33 "data/maps/ANCIENT_REGIS/scripts.pory"
	fadescreen FADE_TO_BLACK
# 34 "data/maps/ANCIENT_REGIS/scripts.pory"
	setvar VAR_0x8000, 28
# 35 "data/maps/ANCIENT_REGIS/scripts.pory"
	special LoadBirchBagPoolById
# 36 "data/maps/ANCIENT_REGIS/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 37 "data/maps/ANCIENT_REGIS/scripts.pory"
	waitstate
# 38 "data/maps/ANCIENT_REGIS/scripts.pory"
	playfanfare MUS_EVOLVED
# 39 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_1

ANCIENT_REGIS_EventScript_TalkToRegi_4:
# 43 "data/maps/ANCIENT_REGIS/scripts.pory"
	playmoncry SPECIES_REGICE, CRY_MODE_ENCOUNTER
# 44 "data/maps/ANCIENT_REGIS/scripts.pory"
	waitmoncry
# 45 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_2
# 46 "data/maps/ANCIENT_REGIS/scripts.pory"
	waitmessage
# 47 "data/maps/ANCIENT_REGIS/scripts.pory"
	fadescreen FADE_TO_BLACK
# 48 "data/maps/ANCIENT_REGIS/scripts.pory"
	setvar VAR_0x8000, 32
# 49 "data/maps/ANCIENT_REGIS/scripts.pory"
	special LoadBirchBagPoolById
# 50 "data/maps/ANCIENT_REGIS/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 51 "data/maps/ANCIENT_REGIS/scripts.pory"
	waitstate
# 52 "data/maps/ANCIENT_REGIS/scripts.pory"
	playfanfare MUS_EVOLVED
# 53 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_1

ANCIENT_REGIS_EventScript_TalkToRegi_5:
# 57 "data/maps/ANCIENT_REGIS/scripts.pory"
	playmoncry SPECIES_REGISTEEL, CRY_MODE_ENCOUNTER
# 58 "data/maps/ANCIENT_REGIS/scripts.pory"
	waitmoncry
# 59 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_3
# 60 "data/maps/ANCIENT_REGIS/scripts.pory"
	waitmessage
# 61 "data/maps/ANCIENT_REGIS/scripts.pory"
	fadescreen FADE_TO_BLACK
# 62 "data/maps/ANCIENT_REGIS/scripts.pory"
	setvar VAR_0x8000, 31
# 63 "data/maps/ANCIENT_REGIS/scripts.pory"
	special LoadBirchBagPoolById
# 64 "data/maps/ANCIENT_REGIS/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 65 "data/maps/ANCIENT_REGIS/scripts.pory"
	waitstate
# 66 "data/maps/ANCIENT_REGIS/scripts.pory"
	playfanfare MUS_EVOLVED
# 67 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_1

ANCIENT_REGIS_EventScript_TalkToRegi_8:
# 81 "data/maps/ANCIENT_REGIS/scripts.pory"
	randomelement ITEM_TM_ICE_PUNCH, ITEM_TM_FIRE_PUNCH, ITEM_TM_THUNDER_PUNCH, ITEM_TM_DRAIN_PUNCH, ITEM_TM_DIZZY_PUNCH, ITEM_TM_SHADOW_PUNCH, ITEM_TM_SUCKER_PUNCH
# 82 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_RESULT, VAR_0x8002
	goto_if_ne ANCIENT_REGIS_EventScript_TalkToRegi_20
ANCIENT_REGIS_EventScript_TalkToRegi_17:
# 86 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_RESULT, VAR_0x8001
	goto_if_ne ANCIENT_REGIS_EventScript_TalkToRegi_34
ANCIENT_REGIS_EventScript_TalkToRegi_31:
# 90 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_RESULT, VAR_0x8001
	goto_if_ne ANCIENT_REGIS_EventScript_TalkToRegi_47
	goto ANCIENT_REGIS_EventScript_TalkToRegi_7

ANCIENT_REGIS_EventScript_TalkToRegi_11:
# 96 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_6, ITEM_TM_ICE_PUNCH
	goto ANCIENT_REGIS_EventScript_TalkToRegi_10

ANCIENT_REGIS_EventScript_TalkToRegi_18:
# 83 "data/maps/ANCIENT_REGIS/scripts.pory"
	copyvar VAR_0x8001, VAR_RESULT
# 84 "data/maps/ANCIENT_REGIS/scripts.pory"
	addvar VAR_0x8000, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_17

ANCIENT_REGIS_EventScript_TalkToRegi_19:
# 82 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8001, 0
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_18
	goto ANCIENT_REGIS_EventScript_TalkToRegi_17

ANCIENT_REGIS_EventScript_TalkToRegi_20:
# 82 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_RESULT, VAR_0x8003
	goto_if_ne ANCIENT_REGIS_EventScript_TalkToRegi_19
	goto ANCIENT_REGIS_EventScript_TalkToRegi_17

ANCIENT_REGIS_EventScript_TalkToRegi_25:
# 99 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_7, ITEM_TM_FIRE_PUNCH
	goto ANCIENT_REGIS_EventScript_TalkToRegi_24

ANCIENT_REGIS_EventScript_TalkToRegi_32:
# 87 "data/maps/ANCIENT_REGIS/scripts.pory"
	copyvar VAR_0x8002, VAR_RESULT
# 88 "data/maps/ANCIENT_REGIS/scripts.pory"
	addvar VAR_0x8000, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_31

ANCIENT_REGIS_EventScript_TalkToRegi_33:
# 86 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8002, 0
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_32
	goto ANCIENT_REGIS_EventScript_TalkToRegi_31

ANCIENT_REGIS_EventScript_TalkToRegi_34:
# 86 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_RESULT, VAR_0x8003
	goto_if_ne ANCIENT_REGIS_EventScript_TalkToRegi_33
	goto ANCIENT_REGIS_EventScript_TalkToRegi_31

ANCIENT_REGIS_EventScript_TalkToRegi_39:
# 102 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_8, ITEM_TM_THUNDER_PUNCH
	goto ANCIENT_REGIS_EventScript_TalkToRegi_38

ANCIENT_REGIS_EventScript_TalkToRegi_45:
# 91 "data/maps/ANCIENT_REGIS/scripts.pory"
	copyvar VAR_0x8003, VAR_RESULT
# 92 "data/maps/ANCIENT_REGIS/scripts.pory"
	addvar VAR_0x8000, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_7

ANCIENT_REGIS_EventScript_TalkToRegi_46:
# 90 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_0x8003, 0
	goto_if_eq ANCIENT_REGIS_EventScript_TalkToRegi_45
	goto ANCIENT_REGIS_EventScript_TalkToRegi_7

ANCIENT_REGIS_EventScript_TalkToRegi_47:
# 90 "data/maps/ANCIENT_REGIS/scripts.pory"
	compare VAR_RESULT, VAR_0x8002
	goto_if_ne ANCIENT_REGIS_EventScript_TalkToRegi_46
	goto ANCIENT_REGIS_EventScript_TalkToRegi_7

ANCIENT_REGIS_EventScript_TalkToRegi_52:
# 105 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_9, ITEM_TM_DRAIN_PUNCH
	goto ANCIENT_REGIS_EventScript_TalkToRegi_51

ANCIENT_REGIS_EventScript_TalkToRegi_59:
# 108 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_10, ITEM_TM_DIZZY_PUNCH
	goto ANCIENT_REGIS_EventScript_TalkToRegi_58

ANCIENT_REGIS_EventScript_TalkToRegi_66:
# 111 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_11, ITEM_TM_SHADOW_PUNCH
	goto ANCIENT_REGIS_EventScript_TalkToRegi_65

ANCIENT_REGIS_EventScript_TalkToRegi_73:
# 114 "data/maps/ANCIENT_REGIS/scripts.pory"
	dynmultipush ANCIENT_REGIS_EventScript_TalkToRegi_Text_12, ITEM_TM_SUCKER_PUNCH
	goto ANCIENT_REGIS_EventScript_TalkToRegi_72

ANCIENT_REGIS_EventScript_TalkToRegi_81:
# 120 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_ICE_PUNCH, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_79

ANCIENT_REGIS_EventScript_TalkToRegi_82:
# 122 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_FIRE_PUNCH, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_79

ANCIENT_REGIS_EventScript_TalkToRegi_83:
# 124 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_THUNDER_PUNCH, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_79

ANCIENT_REGIS_EventScript_TalkToRegi_84:
# 126 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_DRAIN_PUNCH, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_79

ANCIENT_REGIS_EventScript_TalkToRegi_85:
# 128 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_DIZZY_PUNCH, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_79

ANCIENT_REGIS_EventScript_TalkToRegi_86:
# 130 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_SHADOW_PUNCH, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_79

ANCIENT_REGIS_EventScript_TalkToRegi_87:
# 132 "data/maps/ANCIENT_REGIS/scripts.pory"
	giveitem ITEM_TM_SUCKER_PUNCH, 1
	goto ANCIENT_REGIS_EventScript_TalkToRegi_79


ANCIENT_REGIS_EventScript_TalkToRegi_Text_0:
# 31 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Boop beep boop. You have succesfully\ncompleted the first path. Beep.\pAs a result, you will be given these\nrewards. Boop.\lThe first reward is a fossil pokemon.$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_1:
# 39 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_2:
# 45 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Boop beep boop. You have succesfully\nbeaten the first act. Beep.\pAs a result, you will be given these\nrewards. Boop.\lThe first reward is an ice pokemon.$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_3:
# 59 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Boop beep boop. You have succesfully\nbeaten the first act. Beep.\pAs a result, you will be given these\nrewards. Boop.\lThe first reward is a steel pokemon.$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_4:
# 71 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "You will also be given the Regi Knuckles.\nBeep.$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_5:
# 74 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "The Regi Knuckles power up your\npunching moves and makes them\lunable to miss. Boop.\pIt also comes with a punching TM\nof your choice. Beep.$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_6:
# 96 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Ice Punch TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_7:
# 99 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Fire Punch TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_8:
# 102 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Thunder Punch TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_9:
# 105 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Drain Punch TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_10:
# 108 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Dizzy Punch TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_11:
# 111 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Shadow Punch TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_12:
# 114 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Sucker Punch TM$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_13:
# 138 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Beep boop boop.\lYou will now proceed to the next path.$"
