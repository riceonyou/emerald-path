Hub1_MapScripts::
# 2 "data/maps/Hub1/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Hub1_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 3 "data/maps/Hub1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Hub1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Hub1_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 2 "data/maps/Hub1/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, HUB1_ONWARP
	.2byte 0

Hub1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Hub1/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, HUB1_ONFRAME
	.2byte 0


HUB1_ONWARP::
# 8 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


HUB1_ONFRAME::
# 13 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_2, 1
# 14 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SYS_NEW_GAME, HUB1_ONFRAME_1
	return

HUB1_ONFRAME_1:
# 15 "data/maps/Hub1/scripts.pory"
	lockall
# 16 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_ONFRAME_Text_0
# 18 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_1, SPECIES_BULBASAUR
# 19 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_2, SPECIES_CHARMANDER
# 20 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_3, SPECIES_SQUIRTLE
# 21 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_4, SPECIES_CHIKORITA
# 22 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_5, SPECIES_CYNDAQUIL
# 23 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_6, SPECIES_TOTODILE
# 24 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_7, SPECIES_TREECKO
# 25 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_8, SPECIES_TORCHIC
# 26 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_9, SPECIES_MUDKIP
# 27 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_10, SPECIES_TURTWIG
# 28 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_11, SPECIES_CHIMCHAR
# 29 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_12, SPECIES_PIPLUP
# 30 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_13, SPECIES_SNIVY
# 31 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_14, SPECIES_TEPIG
# 32 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_15, SPECIES_OSHAWOTT
# 33 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_16, SPECIES_CHESPIN
# 34 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_17, SPECIES_FENNEKIN
# 35 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_18, SPECIES_FROAKIE
# 36 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_19, SPECIES_ROWLET
# 37 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_20, SPECIES_LITTEN
# 38 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_21, SPECIES_POPPLIO
# 39 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_22, SPECIES_GROOKEY
# 40 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_23, SPECIES_SCORBUNNY
# 41 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_24, SPECIES_SOBBLE
# 42 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_25, SPECIES_SPRIGATITO
# 43 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_26, SPECIES_FUECOCO
# 44 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_27, SPECIES_QUAXLY
# 45 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 48 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 49 "data/maps/Hub1/scripts.pory"
	case SPECIES_BULBASAUR, HUB1_ONFRAME_5
# 51 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHARMANDER, HUB1_ONFRAME_6
# 53 "data/maps/Hub1/scripts.pory"
	case SPECIES_SQUIRTLE, HUB1_ONFRAME_7
# 55 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIKORITA, HUB1_ONFRAME_8
# 57 "data/maps/Hub1/scripts.pory"
	case SPECIES_CYNDAQUIL, HUB1_ONFRAME_9
# 59 "data/maps/Hub1/scripts.pory"
	case SPECIES_TOTODILE, HUB1_ONFRAME_10
# 61 "data/maps/Hub1/scripts.pory"
	case SPECIES_TREECKO, HUB1_ONFRAME_11
# 63 "data/maps/Hub1/scripts.pory"
	case SPECIES_TORCHIC, HUB1_ONFRAME_12
# 65 "data/maps/Hub1/scripts.pory"
	case SPECIES_MUDKIP, HUB1_ONFRAME_13
# 67 "data/maps/Hub1/scripts.pory"
	case SPECIES_TURTWIG, HUB1_ONFRAME_14
# 69 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIMCHAR, HUB1_ONFRAME_15
# 71 "data/maps/Hub1/scripts.pory"
	case SPECIES_PIPLUP, HUB1_ONFRAME_16
# 73 "data/maps/Hub1/scripts.pory"
	case SPECIES_SNIVY, HUB1_ONFRAME_17
# 75 "data/maps/Hub1/scripts.pory"
	case SPECIES_TEPIG, HUB1_ONFRAME_18
# 77 "data/maps/Hub1/scripts.pory"
	case SPECIES_OSHAWOTT, HUB1_ONFRAME_19
# 79 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHESPIN, HUB1_ONFRAME_20
# 81 "data/maps/Hub1/scripts.pory"
	case SPECIES_FENNEKIN, HUB1_ONFRAME_21
# 83 "data/maps/Hub1/scripts.pory"
	case SPECIES_FROAKIE, HUB1_ONFRAME_22
# 85 "data/maps/Hub1/scripts.pory"
	case SPECIES_ROWLET, HUB1_ONFRAME_23
# 87 "data/maps/Hub1/scripts.pory"
	case SPECIES_LITTEN, HUB1_ONFRAME_24
# 89 "data/maps/Hub1/scripts.pory"
	case SPECIES_POPPLIO, HUB1_ONFRAME_25
# 91 "data/maps/Hub1/scripts.pory"
	case SPECIES_GROOKEY, HUB1_ONFRAME_26
# 93 "data/maps/Hub1/scripts.pory"
	case SPECIES_SCORBUNNY, HUB1_ONFRAME_27
# 95 "data/maps/Hub1/scripts.pory"
	case SPECIES_SOBBLE, HUB1_ONFRAME_28
# 97 "data/maps/Hub1/scripts.pory"
	case SPECIES_SPRIGATITO, HUB1_ONFRAME_29
# 99 "data/maps/Hub1/scripts.pory"
	case SPECIES_FUECOCO, HUB1_ONFRAME_30
# 101 "data/maps/Hub1/scripts.pory"
	case SPECIES_QUAXLY, HUB1_ONFRAME_31
HUB1_ONFRAME_3:
# 104 "data/maps/Hub1/scripts.pory"
	special UpdatePlayerSprite
# 105 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CANDY_JAR
# 106 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SYS_NEW_GAME
# 107 "data/maps/Hub1/scripts.pory"
	waitmessage
# 108 "data/maps/Hub1/scripts.pory"
	releaseall
	return

HUB1_ONFRAME_5:
# 50 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_6:
# 52 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_7:
# 54 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_8:
# 56 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_9:
# 58 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_10:
# 60 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TOTODILE, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_11:
# 62 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TREECKO, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_12:
# 64 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TORCHIC, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_13:
# 66 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_MUDKIP, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_14:
# 68 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TURTWIG, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_15:
# 70 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHIMCHAR, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_16:
# 72 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_PIPLUP, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_17:
# 74 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SNIVY, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_18:
# 76 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TEPIG, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_19:
# 78 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_20:
# 80 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHESPIN, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_21:
# 82 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FENNEKIN, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_22:
# 84 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FROAKIE, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_23:
# 86 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_ROWLET, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_24:
# 88 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_LITTEN, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_25:
# 90 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_POPPLIO, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_26:
# 92 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_GROOKEY, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_27:
# 94 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SCORBUNNY, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_28:
# 96 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SOBBLE, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_29:
# 98 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SPRIGATITO, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_30:
# 100 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FUECOCO, 5
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_31:
# 102 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_QUAXLY, 5
	goto HUB1_ONFRAME_3


Hub_Event_Script_Birch::
# 113 "data/maps/Hub1/scripts.pory"
	lockall
# 114 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_0, MSGBOX_YESNO
# 115 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 116 "data/maps/Hub1/scripts.pory"
	case YES, Hub_Event_Script_Birch_2
# 124 "data/maps/Hub1/scripts.pory"
	case NO, Hub_Event_Script_Birch_3
	return

Hub_Event_Script_Birch_2:
# 117 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_1
# 118 "data/maps/Hub1/scripts.pory"
	random 1
# 119 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 120 "data/maps/Hub1/scripts.pory"
	case 0, Hub_Event_Script_Birch_5
	return

Hub_Event_Script_Birch_3:
# 125 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_2
# 126 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Birch_5:
# 121 "data/maps/Hub1/scripts.pory"
	warp MAP_HOENN1_1, 1, 8
	return


HUB1_ONFRAME_Text_0:
# 16 "data/maps/Hub1/scripts.pory"
	.string "Welcome to Pokemon Path!\pTo start a run, talk to\nProfessor Birch up ahead.\pNow choose a pokemon to\nstart your adventure with.$"

HUB1_ONFRAME_Text_1:
# 18 "data/maps/Hub1/scripts.pory"
	.string "Bulbasaur$"

HUB1_ONFRAME_Text_2:
# 19 "data/maps/Hub1/scripts.pory"
	.string "Charmander$"

HUB1_ONFRAME_Text_3:
# 20 "data/maps/Hub1/scripts.pory"
	.string "Squirtle$"

HUB1_ONFRAME_Text_4:
# 21 "data/maps/Hub1/scripts.pory"
	.string "Chikorita$"

HUB1_ONFRAME_Text_5:
# 22 "data/maps/Hub1/scripts.pory"
	.string "Cyndaquil$"

HUB1_ONFRAME_Text_6:
# 23 "data/maps/Hub1/scripts.pory"
	.string "Totodile$"

HUB1_ONFRAME_Text_7:
# 24 "data/maps/Hub1/scripts.pory"
	.string "Treecko$"

HUB1_ONFRAME_Text_8:
# 25 "data/maps/Hub1/scripts.pory"
	.string "Torchic$"

HUB1_ONFRAME_Text_9:
# 26 "data/maps/Hub1/scripts.pory"
	.string "Mudkip$"

HUB1_ONFRAME_Text_10:
# 27 "data/maps/Hub1/scripts.pory"
	.string "Turtwig$"

HUB1_ONFRAME_Text_11:
# 28 "data/maps/Hub1/scripts.pory"
	.string "Chimchar$"

HUB1_ONFRAME_Text_12:
# 29 "data/maps/Hub1/scripts.pory"
	.string "Piplup$"

HUB1_ONFRAME_Text_13:
# 30 "data/maps/Hub1/scripts.pory"
	.string "Snivy$"

HUB1_ONFRAME_Text_14:
# 31 "data/maps/Hub1/scripts.pory"
	.string "Tepig$"

HUB1_ONFRAME_Text_15:
# 32 "data/maps/Hub1/scripts.pory"
	.string "Oshawott$"

HUB1_ONFRAME_Text_16:
# 33 "data/maps/Hub1/scripts.pory"
	.string "Chespin$"

HUB1_ONFRAME_Text_17:
# 34 "data/maps/Hub1/scripts.pory"
	.string "Fennekin$"

HUB1_ONFRAME_Text_18:
# 35 "data/maps/Hub1/scripts.pory"
	.string "Froakie$"

HUB1_ONFRAME_Text_19:
# 36 "data/maps/Hub1/scripts.pory"
	.string "Rowlet$"

HUB1_ONFRAME_Text_20:
# 37 "data/maps/Hub1/scripts.pory"
	.string "Litten$"

HUB1_ONFRAME_Text_21:
# 38 "data/maps/Hub1/scripts.pory"
	.string "Popplio$"

HUB1_ONFRAME_Text_22:
# 39 "data/maps/Hub1/scripts.pory"
	.string "Grookey$"

HUB1_ONFRAME_Text_23:
# 40 "data/maps/Hub1/scripts.pory"
	.string "Scorbunny$"

HUB1_ONFRAME_Text_24:
# 41 "data/maps/Hub1/scripts.pory"
	.string "Sobble$"

HUB1_ONFRAME_Text_25:
# 42 "data/maps/Hub1/scripts.pory"
	.string "Sprigatito$"

HUB1_ONFRAME_Text_26:
# 43 "data/maps/Hub1/scripts.pory"
	.string "Fuecoco$"

HUB1_ONFRAME_Text_27:
# 44 "data/maps/Hub1/scripts.pory"
	.string "Quaxly$"

Hub_Event_Script_Birch_Text_0:
# 114 "data/maps/Hub1/scripts.pory"
	.string "Would you like to start a run?$"

Hub_Event_Script_Birch_Text_1:
# 117 "data/maps/Hub1/scripts.pory"
	.string "Alright then! Here we go!$"

Hub_Event_Script_Birch_Text_2:
# 125 "data/maps/Hub1/scripts.pory"
	.string "Okay! Let me know when you're ready.$"
