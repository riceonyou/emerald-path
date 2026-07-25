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
# 59 "data/maps/ANCIENT_REGIS/scripts.pory"
	case 2, ANCIENT_REGIS_EventScript_TalkToRegi_5
ANCIENT_REGIS_EventScript_TalkToRegi_1:
# 68 "data/maps/ANCIENT_REGIS/scripts.pory"
	waitmessage
# 69 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_1
# 70 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_2
# 72 "data/maps/ANCIENT_REGIS/scripts.pory"
	special WarpToNextAct
# 74 "data/maps/ANCIENT_REGIS/scripts.pory"
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
# 60 "data/maps/ANCIENT_REGIS/scripts.pory"
	fadescreen FADE_TO_BLACK
# 61 "data/maps/ANCIENT_REGIS/scripts.pory"
	setvar VAR_0x8000, 31
# 62 "data/maps/ANCIENT_REGIS/scripts.pory"
	special LoadBirchBagPoolById
# 63 "data/maps/ANCIENT_REGIS/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 64 "data/maps/ANCIENT_REGIS/scripts.pory"
	waitstate
# 65 "data/maps/ANCIENT_REGIS/scripts.pory"
	playfanfare MUS_EVOLVED
# 66 "data/maps/ANCIENT_REGIS/scripts.pory"
	msgbox ANCIENT_REGIS_EventScript_TalkToRegi_Text_0
	goto ANCIENT_REGIS_EventScript_TalkToRegi_1


ANCIENT_REGIS_EventScript_TalkToRegi_Text_0:
# 37 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_1:
# 69 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "The level cap has been raised to 30$"

ANCIENT_REGIS_EventScript_TalkToRegi_Text_2:
# 70 "data/maps/ANCIENT_REGIS/scripts.pory"
	.string "Boop beep boop.\lNow time to get you to the next\nstage.$"
