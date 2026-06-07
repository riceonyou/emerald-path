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
# 9 "data/maps/Hub1/scripts.pory"
	setvar VAR_CURRENT_ACT, 1
# 10 "data/maps/Hub1/scripts.pory"
	special UpdateLevelCap
	return


HUB1_ONFRAME::
# 14 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_2, 1
# 15 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SYS_NEW_GAME, HUB1_ONFRAME_1
	return

HUB1_ONFRAME_1:
# 16 "data/maps/Hub1/scripts.pory"
	lockall
# 17 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_ONFRAME_Text_0
# 19 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_1, SPECIES_BULBASAUR
# 20 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_2, SPECIES_CHARMANDER
# 21 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_3, SPECIES_SQUIRTLE
# 22 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_4, SPECIES_CHIKORITA
# 23 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_5, SPECIES_CYNDAQUIL
# 24 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_6, SPECIES_TOTODILE
# 25 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_7, SPECIES_TREECKO
# 26 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_8, SPECIES_TORCHIC
# 27 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_9, SPECIES_MUDKIP
# 28 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_10, SPECIES_TURTWIG
# 29 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_11, SPECIES_CHIMCHAR
# 30 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_12, SPECIES_PIPLUP
# 31 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_13, SPECIES_SNIVY
# 32 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_14, SPECIES_TEPIG
# 33 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_15, SPECIES_OSHAWOTT
# 34 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_16, SPECIES_CHESPIN
# 35 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_17, SPECIES_FENNEKIN
# 36 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_18, SPECIES_FROAKIE
# 37 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_19, SPECIES_ROWLET
# 38 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_20, SPECIES_LITTEN
# 39 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_21, SPECIES_POPPLIO
# 40 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_22, SPECIES_GROOKEY
# 41 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_23, SPECIES_SCORBUNNY
# 42 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_24, SPECIES_SOBBLE
# 43 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_25, SPECIES_SPRIGATITO
# 44 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_26, SPECIES_FUECOCO
# 45 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_27, SPECIES_QUAXLY
# 46 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 48 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 49 "data/maps/Hub1/scripts.pory"
	case SPECIES_BULBASAUR, HUB1_ONFRAME_5
# 53 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHARMANDER, HUB1_ONFRAME_6
# 57 "data/maps/Hub1/scripts.pory"
	case SPECIES_SQUIRTLE, HUB1_ONFRAME_7
# 61 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIKORITA, HUB1_ONFRAME_8
# 65 "data/maps/Hub1/scripts.pory"
	case SPECIES_CYNDAQUIL, HUB1_ONFRAME_9
# 69 "data/maps/Hub1/scripts.pory"
	case SPECIES_TOTODILE, HUB1_ONFRAME_10
# 73 "data/maps/Hub1/scripts.pory"
	case SPECIES_TREECKO, HUB1_ONFRAME_11
# 77 "data/maps/Hub1/scripts.pory"
	case SPECIES_TORCHIC, HUB1_ONFRAME_12
# 81 "data/maps/Hub1/scripts.pory"
	case SPECIES_MUDKIP, HUB1_ONFRAME_13
# 85 "data/maps/Hub1/scripts.pory"
	case SPECIES_TURTWIG, HUB1_ONFRAME_14
# 89 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIMCHAR, HUB1_ONFRAME_15
# 93 "data/maps/Hub1/scripts.pory"
	case SPECIES_PIPLUP, HUB1_ONFRAME_16
# 97 "data/maps/Hub1/scripts.pory"
	case SPECIES_SNIVY, HUB1_ONFRAME_17
# 101 "data/maps/Hub1/scripts.pory"
	case SPECIES_TEPIG, HUB1_ONFRAME_18
# 105 "data/maps/Hub1/scripts.pory"
	case SPECIES_OSHAWOTT, HUB1_ONFRAME_19
# 109 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHESPIN, HUB1_ONFRAME_20
# 113 "data/maps/Hub1/scripts.pory"
	case SPECIES_FENNEKIN, HUB1_ONFRAME_21
# 117 "data/maps/Hub1/scripts.pory"
	case SPECIES_FROAKIE, HUB1_ONFRAME_22
# 121 "data/maps/Hub1/scripts.pory"
	case SPECIES_ROWLET, HUB1_ONFRAME_23
# 125 "data/maps/Hub1/scripts.pory"
	case SPECIES_LITTEN, HUB1_ONFRAME_24
# 129 "data/maps/Hub1/scripts.pory"
	case SPECIES_POPPLIO, HUB1_ONFRAME_25
# 133 "data/maps/Hub1/scripts.pory"
	case SPECIES_GROOKEY, HUB1_ONFRAME_26
# 137 "data/maps/Hub1/scripts.pory"
	case SPECIES_SCORBUNNY, HUB1_ONFRAME_27
# 141 "data/maps/Hub1/scripts.pory"
	case SPECIES_SOBBLE, HUB1_ONFRAME_28
# 145 "data/maps/Hub1/scripts.pory"
	case SPECIES_SPRIGATITO, HUB1_ONFRAME_29
# 149 "data/maps/Hub1/scripts.pory"
	case SPECIES_FUECOCO, HUB1_ONFRAME_30
# 153 "data/maps/Hub1/scripts.pory"
	case SPECIES_QUAXLY, HUB1_ONFRAME_31
HUB1_ONFRAME_3:
# 158 "data/maps/Hub1/scripts.pory"
	special UpdatePlayerSprite
# 159 "data/maps/Hub1/scripts.pory"
	special UpdateTransformedPlayerPalette
# 160 "data/maps/Hub1/scripts.pory"
	releaseall
# 162 "data/maps/Hub1/scripts.pory"
	lockall
# 163 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_ONFRAME_Text_28
# 164 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CANDY_JAR
# 165 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SYS_NEW_GAME
# 167 "data/maps/Hub1/scripts.pory"
	releaseall
	return

HUB1_ONFRAME_5:
# 50 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
# 51 "data/maps/Hub1/scripts.pory"
	setflag FLAG_BULBASAUR_UNLOCKED
# 52 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_BULBASAUR
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_6:
# 54 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
# 55 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHARMANDER_UNLOCKED
# 56 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHARMANDER
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_7:
# 58 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5
# 59 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SQUIRTLE_UNLOCKED
# 60 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SQUIRTLE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_8:
# 62 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 63 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIKORITA_UNLOCKED
# 64 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHIKORITA
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_9:
# 66 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 67 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CYNDAQUIL_UNLOCKED
# 68 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CYNDAQUIL
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_10:
# 70 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 71 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TOTODILE_UNLOCKED
# 72 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TOTODILE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_11:
# 74 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 75 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TREECKO_UNLOCKED
# 76 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TREECKO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_12:
# 78 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TORCHIC, 5
# 79 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TORCHIC_UNLOCKED
# 80 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TORCHIC
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_13:
# 82 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_MUDKIP, 5
# 83 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MUDKIP_UNLOCKED
# 84 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_MUDKIP
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_14:
# 86 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TURTWIG, 5
# 87 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TURTWIG_UNLOCKED
# 88 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TURTWIG
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_15:
# 90 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHIMCHAR, 5
# 91 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIMCHAR_UNLOCKED
# 92 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHIMCHAR
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_16:
# 94 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_PIPLUP, 5
# 95 "data/maps/Hub1/scripts.pory"
	setflag FLAG_PIPLUP_UNLOCKED
# 96 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_PIPLUP
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_17:
# 98 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SNIVY, 5
# 99 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SNIVY_UNLOCKED
# 100 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SNIVY
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_18:
# 102 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TEPIG, 5
# 103 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TEPIG_UNLOCKED
# 104 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TEPIG
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_19:
# 106 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5
# 107 "data/maps/Hub1/scripts.pory"
	setflag FLAG_OSHAWOTT_UNLOCKED
# 108 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_OSHAWOTT
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_20:
# 110 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHESPIN, 5
# 111 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHESPIN_UNLOCKED
# 112 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHESPIN
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_21:
# 114 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FENNEKIN, 5
# 115 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FENNEKIN_UNLOCKED
# 116 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_FENNEKIN
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_22:
# 118 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FROAKIE, 5
# 119 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FROAKIE_UNLOCKED
# 120 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_FROAKIE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_23:
# 122 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_ROWLET, 5
# 123 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ROWLET_UNLOCKED
# 124 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_ROWLET
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_24:
# 126 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_LITTEN, 5
# 127 "data/maps/Hub1/scripts.pory"
	setflag FLAG_LITTEN_UNLOCKED
# 128 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_LITTEN
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_25:
# 130 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_POPPLIO, 5
# 131 "data/maps/Hub1/scripts.pory"
	setflag FLAG_POPPLIO_UNLOCKED
# 132 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_POPPLIO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_26:
# 134 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_GROOKEY, 5
# 135 "data/maps/Hub1/scripts.pory"
	setflag FLAG_GROOKEY_UNLOCKED
# 136 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_GROOKEY
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_27:
# 138 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SCORBUNNY, 5
# 139 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SCORBUNNY_UNLOCKED
# 140 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SCORBUNNY
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_28:
# 142 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SOBBLE, 5
# 143 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SOBBLE_UNLOCKED
# 144 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SOBBLE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_29:
# 146 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SPRIGATITO, 5
# 147 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SPRIGATITO_UNLOCKED
# 148 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SPRIGATITO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_30:
# 150 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FUECOCO, 5
# 151 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FUECOCO_UNLOCKED
# 152 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_FUECOCO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_31:
# 154 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_QUAXLY, 5
# 155 "data/maps/Hub1/scripts.pory"
	setflag FLAG_QUAXLY_UNLOCKED
# 156 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_QUAXLY
	goto HUB1_ONFRAME_3


Hub_Event_Script_Birch::
# 172 "data/maps/Hub1/scripts.pory"
	lockall
# 173 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_0, MSGBOX_YESNO
# 174 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 175 "data/maps/Hub1/scripts.pory"
	case YES, Hub_Event_Script_Birch_2
# 183 "data/maps/Hub1/scripts.pory"
	case NO, Hub_Event_Script_Birch_3
	return

Hub_Event_Script_Birch_2:
# 176 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_1
# 177 "data/maps/Hub1/scripts.pory"
	random 1
# 178 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 179 "data/maps/Hub1/scripts.pory"
	case 0, Hub_Event_Script_Birch_5
	return

Hub_Event_Script_Birch_3:
# 184 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_2
# 185 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Birch_5:
# 180 "data/maps/Hub1/scripts.pory"
	warp MAP_HOENN1_1, 1, 8
	return


Hub_Event_Script_Miltank::
# 190 "data/maps/Hub1/scripts.pory"
	lockall
# 191 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 193 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_BULBASAUR_UNLOCKED, Hub_Event_Script_Miltank_2
Hub_Event_Script_Miltank_1:
# 194 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHARMANDER_UNLOCKED, Hub_Event_Script_Miltank_5
Hub_Event_Script_Miltank_4:
# 195 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SQUIRTLE_UNLOCKED, Hub_Event_Script_Miltank_8
Hub_Event_Script_Miltank_7:
# 196 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHIKORITA_UNLOCKED, Hub_Event_Script_Miltank_11
Hub_Event_Script_Miltank_10:
# 197 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CYNDAQUIL_UNLOCKED, Hub_Event_Script_Miltank_14
Hub_Event_Script_Miltank_13:
# 198 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TOTODILE_UNLOCKED, Hub_Event_Script_Miltank_17
Hub_Event_Script_Miltank_16:
# 199 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TREECKO_UNLOCKED, Hub_Event_Script_Miltank_20
Hub_Event_Script_Miltank_19:
# 200 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TORCHIC_UNLOCKED, Hub_Event_Script_Miltank_23
Hub_Event_Script_Miltank_22:
# 201 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MUDKIP_UNLOCKED, Hub_Event_Script_Miltank_26
Hub_Event_Script_Miltank_25:
# 202 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TURTWIG_UNLOCKED, Hub_Event_Script_Miltank_29
Hub_Event_Script_Miltank_28:
# 203 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHIMCHAR_UNLOCKED, Hub_Event_Script_Miltank_32
Hub_Event_Script_Miltank_31:
# 204 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_PIPLUP_UNLOCKED, Hub_Event_Script_Miltank_35
Hub_Event_Script_Miltank_34:
# 205 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SNIVY_UNLOCKED, Hub_Event_Script_Miltank_38
Hub_Event_Script_Miltank_37:
# 206 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TEPIG_UNLOCKED, Hub_Event_Script_Miltank_41
Hub_Event_Script_Miltank_40:
# 207 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_OSHAWOTT_UNLOCKED, Hub_Event_Script_Miltank_44
Hub_Event_Script_Miltank_43:
# 208 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHESPIN_UNLOCKED, Hub_Event_Script_Miltank_47
Hub_Event_Script_Miltank_46:
# 209 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FENNEKIN_UNLOCKED, Hub_Event_Script_Miltank_50
Hub_Event_Script_Miltank_49:
# 210 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FROAKIE_UNLOCKED, Hub_Event_Script_Miltank_53
Hub_Event_Script_Miltank_52:
# 211 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ROWLET_UNLOCKED, Hub_Event_Script_Miltank_56
Hub_Event_Script_Miltank_55:
# 212 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_LITTEN_UNLOCKED, Hub_Event_Script_Miltank_59
Hub_Event_Script_Miltank_58:
# 213 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_POPPLIO_UNLOCKED, Hub_Event_Script_Miltank_62
Hub_Event_Script_Miltank_61:
# 214 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_GROOKEY_UNLOCKED, Hub_Event_Script_Miltank_65
Hub_Event_Script_Miltank_64:
# 215 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SCORBUNNY_UNLOCKED, Hub_Event_Script_Miltank_68
Hub_Event_Script_Miltank_67:
# 216 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SOBBLE_UNLOCKED, Hub_Event_Script_Miltank_71
Hub_Event_Script_Miltank_70:
# 217 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SPRIGATITO_UNLOCKED, Hub_Event_Script_Miltank_74
Hub_Event_Script_Miltank_73:
# 218 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FUECOCO_UNLOCKED, Hub_Event_Script_Miltank_77
Hub_Event_Script_Miltank_76:
# 219 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_QUAXLY_UNLOCKED, Hub_Event_Script_Miltank_80
Hub_Event_Script_Miltank_79:
# 221 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Miltank_82
# 529 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_56
# 530 "data/maps/Hub1/scripts.pory"
	waitmessage
# 531 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Miltank_2:
# 193 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_0, SPECIES_BULBASAUR
# 193 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_1

Hub_Event_Script_Miltank_5:
# 194 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_1, SPECIES_CHARMANDER
# 194 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_4

Hub_Event_Script_Miltank_8:
# 195 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_2, SPECIES_SQUIRTLE
# 195 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_7

Hub_Event_Script_Miltank_11:
# 196 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_3, SPECIES_CHIKORITA
# 196 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_10

Hub_Event_Script_Miltank_14:
# 197 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_4, SPECIES_CYNDAQUIL
# 197 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_13

Hub_Event_Script_Miltank_17:
# 198 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_5, SPECIES_TOTODILE
# 198 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_16

Hub_Event_Script_Miltank_20:
# 199 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_6, SPECIES_TREECKO
# 199 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_19

Hub_Event_Script_Miltank_23:
# 200 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_7, SPECIES_TORCHIC
# 200 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_22

Hub_Event_Script_Miltank_26:
# 201 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_8, SPECIES_MUDKIP
# 201 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_25

Hub_Event_Script_Miltank_29:
# 202 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_9, SPECIES_TURTWIG
# 202 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_28

Hub_Event_Script_Miltank_32:
# 203 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_10, SPECIES_CHIMCHAR
# 203 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_31

Hub_Event_Script_Miltank_35:
# 204 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_11, SPECIES_PIPLUP
# 204 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_34

Hub_Event_Script_Miltank_38:
# 205 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_12, SPECIES_SNIVY
# 205 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_37

Hub_Event_Script_Miltank_41:
# 206 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_13, SPECIES_TEPIG
# 206 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_40

Hub_Event_Script_Miltank_44:
# 207 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_14, SPECIES_OSHAWOTT
# 207 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_43

Hub_Event_Script_Miltank_47:
# 208 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_15, SPECIES_CHESPIN
# 208 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_46

Hub_Event_Script_Miltank_50:
# 209 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_16, SPECIES_FENNEKIN
# 209 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_49

Hub_Event_Script_Miltank_53:
# 210 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_17, SPECIES_FROAKIE
# 210 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_52

Hub_Event_Script_Miltank_56:
# 211 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_18, SPECIES_ROWLET
# 211 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_55

Hub_Event_Script_Miltank_59:
# 212 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_19, SPECIES_LITTEN
# 212 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_58

Hub_Event_Script_Miltank_62:
# 213 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_20, SPECIES_POPPLIO
# 213 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_61

Hub_Event_Script_Miltank_65:
# 214 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_21, SPECIES_GROOKEY
# 214 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_64

Hub_Event_Script_Miltank_68:
# 215 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_22, SPECIES_SCORBUNNY
# 215 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_67

Hub_Event_Script_Miltank_71:
# 216 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_23, SPECIES_SOBBLE
# 216 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_70

Hub_Event_Script_Miltank_74:
# 217 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_24, SPECIES_SPRIGATITO
# 217 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_73

Hub_Event_Script_Miltank_77:
# 218 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_25, SPECIES_FUECOCO
# 218 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_76

Hub_Event_Script_Miltank_80:
# 219 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_26, SPECIES_QUAXLY
# 219 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_79

Hub_Event_Script_Miltank_82:
# 222 "data/maps/Hub1/scripts.pory"
	showmoneybox 17, 10
# 223 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_27
# 224 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 225 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 226 "data/maps/Hub1/scripts.pory"
	case MULTI_B_PRESSED, Hub_Event_Script_Miltank_87
# 228 "data/maps/Hub1/scripts.pory"
	case SPECIES_BULBASAUR, Hub_Event_Script_Miltank_88
# 239 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHARMANDER, Hub_Event_Script_Miltank_89
# 250 "data/maps/Hub1/scripts.pory"
	case SPECIES_SQUIRTLE, Hub_Event_Script_Miltank_90
# 261 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIKORITA, Hub_Event_Script_Miltank_91
# 272 "data/maps/Hub1/scripts.pory"
	case SPECIES_CYNDAQUIL, Hub_Event_Script_Miltank_92
# 283 "data/maps/Hub1/scripts.pory"
	case SPECIES_TOTODILE, Hub_Event_Script_Miltank_93
# 294 "data/maps/Hub1/scripts.pory"
	case SPECIES_TREECKO, Hub_Event_Script_Miltank_94
# 305 "data/maps/Hub1/scripts.pory"
	case SPECIES_TORCHIC, Hub_Event_Script_Miltank_95
# 316 "data/maps/Hub1/scripts.pory"
	case SPECIES_MUDKIP, Hub_Event_Script_Miltank_96
# 327 "data/maps/Hub1/scripts.pory"
	case SPECIES_TURTWIG, Hub_Event_Script_Miltank_97
# 338 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIMCHAR, Hub_Event_Script_Miltank_98
# 349 "data/maps/Hub1/scripts.pory"
	case SPECIES_PIPLUP, Hub_Event_Script_Miltank_99
# 360 "data/maps/Hub1/scripts.pory"
	case SPECIES_SNIVY, Hub_Event_Script_Miltank_100
# 371 "data/maps/Hub1/scripts.pory"
	case SPECIES_TEPIG, Hub_Event_Script_Miltank_101
# 382 "data/maps/Hub1/scripts.pory"
	case SPECIES_OSHAWOTT, Hub_Event_Script_Miltank_102
# 393 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHESPIN, Hub_Event_Script_Miltank_103
# 404 "data/maps/Hub1/scripts.pory"
	case SPECIES_FENNEKIN, Hub_Event_Script_Miltank_104
# 415 "data/maps/Hub1/scripts.pory"
	case SPECIES_FROAKIE, Hub_Event_Script_Miltank_105
# 426 "data/maps/Hub1/scripts.pory"
	case SPECIES_ROWLET, Hub_Event_Script_Miltank_106
# 437 "data/maps/Hub1/scripts.pory"
	case SPECIES_LITTEN, Hub_Event_Script_Miltank_107
# 448 "data/maps/Hub1/scripts.pory"
	case SPECIES_POPPLIO, Hub_Event_Script_Miltank_108
# 459 "data/maps/Hub1/scripts.pory"
	case SPECIES_GROOKEY, Hub_Event_Script_Miltank_109
# 470 "data/maps/Hub1/scripts.pory"
	case SPECIES_SCORBUNNY, Hub_Event_Script_Miltank_110
# 481 "data/maps/Hub1/scripts.pory"
	case SPECIES_SOBBLE, Hub_Event_Script_Miltank_111
# 492 "data/maps/Hub1/scripts.pory"
	case SPECIES_SPRIGATITO, Hub_Event_Script_Miltank_112
# 503 "data/maps/Hub1/scripts.pory"
	case SPECIES_FUECOCO, Hub_Event_Script_Miltank_113
# 514 "data/maps/Hub1/scripts.pory"
	case SPECIES_QUAXLY, Hub_Event_Script_Miltank_114
Hub_Event_Script_Miltank_85:
# 526 "data/maps/Hub1/scripts.pory"
	hidemoneybox
# 527 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Miltank_87:
# 227 "data/maps/Hub1/scripts.pory"
	releaseall
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_88:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_115
# 237 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_89:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_118
# 248 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_90:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_121
# 259 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_91:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_124
# 270 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_92:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_127
# 281 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_93:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_130
# 292 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_94:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_133
# 303 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_95:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_136
# 314 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_96:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_139
# 325 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_97:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_142
# 336 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_98:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_145
# 347 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_99:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_148
# 358 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_100:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_151
# 369 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_101:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_154
# 380 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_102:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_157
# 391 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_103:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_160
# 402 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_104:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_163
# 413 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_105:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_166
# 424 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_106:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_169
# 435 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_107:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_172
# 446 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_108:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_175
# 457 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_109:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_178
# 468 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_110:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_181
# 479 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_111:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_184
# 490 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_112:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_187
# 501 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_113:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_190
# 512 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_114:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_193
# 523 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_115:
# 230 "data/maps/Hub1/scripts.pory"
	setflag FLAG_BULBASAUR_UNLOCKED
# 231 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 232 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 233 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 234 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_28
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_118:
# 241 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHARMANDER_UNLOCKED
# 242 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 243 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 244 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 245 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_121:
# 252 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SQUIRTLE_UNLOCKED
# 253 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 254 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 255 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 256 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_31
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_124:
# 263 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIKORITA_UNLOCKED
# 264 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 265 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 266 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 267 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_32
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_127:
# 274 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CYNDAQUIL_UNLOCKED
# 275 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 276 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 277 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 278 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_33
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_130:
# 285 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TOTODILE_UNLOCKED
# 286 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 287 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 288 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 289 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_34
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_133:
# 296 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TREECKO_UNLOCKED
# 297 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 298 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 299 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 300 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_35
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_136:
# 307 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TORCHIC_UNLOCKED
# 308 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 309 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 310 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 311 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_36
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_139:
# 318 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MUDKIP_UNLOCKED
# 319 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 320 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 321 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 322 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_37
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_142:
# 329 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TURTWIG_UNLOCKED
# 330 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 331 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 332 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 333 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_38
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_145:
# 340 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIMCHAR_UNLOCKED
# 341 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 342 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 343 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 344 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_39
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_148:
# 351 "data/maps/Hub1/scripts.pory"
	setflag FLAG_PIPLUP_UNLOCKED
# 352 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 353 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 354 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 355 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_40
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_151:
# 362 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SNIVY_UNLOCKED
# 363 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 364 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 365 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 366 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_41
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_154:
# 373 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TEPIG_UNLOCKED
# 374 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 375 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 376 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 377 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_42
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_157:
# 384 "data/maps/Hub1/scripts.pory"
	setflag FLAG_OSHAWOTT_UNLOCKED
# 385 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 386 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 387 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 388 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_43
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_160:
# 395 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHESPIN_UNLOCKED
# 396 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 397 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 398 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 399 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_44
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_163:
# 406 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FENNEKIN_UNLOCKED
# 407 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 408 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 409 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 410 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_45
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_166:
# 417 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FROAKIE_UNLOCKED
# 418 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 419 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 420 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 421 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_46
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_169:
# 428 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ROWLET_UNLOCKED
# 429 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 430 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 431 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 432 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_47
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_172:
# 439 "data/maps/Hub1/scripts.pory"
	setflag FLAG_LITTEN_UNLOCKED
# 440 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 441 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 442 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 443 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_48
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_175:
# 450 "data/maps/Hub1/scripts.pory"
	setflag FLAG_POPPLIO_UNLOCKED
# 451 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 452 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 453 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 454 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_49
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_178:
# 461 "data/maps/Hub1/scripts.pory"
	setflag FLAG_GROOKEY_UNLOCKED
# 462 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 463 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 464 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 465 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_50
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_181:
# 472 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SCORBUNNY_UNLOCKED
# 473 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 474 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 475 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 476 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_51
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_184:
# 483 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SOBBLE_UNLOCKED
# 484 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 485 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 486 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 487 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_52
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_187:
# 494 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SPRIGATITO_UNLOCKED
# 495 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 496 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 497 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 498 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_53
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_190:
# 505 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FUECOCO_UNLOCKED
# 506 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 507 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 508 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 509 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_54
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_193:
# 516 "data/maps/Hub1/scripts.pory"
	setflag FLAG_QUAXLY_UNLOCKED
# 517 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 518 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 519 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 520 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_55
	goto Hub_Event_Script_Miltank_85


Hub_Event_Script_Chansey::
# 537 "data/maps/Hub1/scripts.pory"
	lockall
# 538 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 539 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_BULBASAUR_UNLOCKED, Hub_Event_Script_Chansey_3
Hub_Event_Script_Chansey_1:
# 540 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHARMANDER_UNLOCKED, Hub_Event_Script_Chansey_8
Hub_Event_Script_Chansey_6:
# 541 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SQUIRTLE_UNLOCKED, Hub_Event_Script_Chansey_13
Hub_Event_Script_Chansey_11:
# 542 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHIKORITA_UNLOCKED, Hub_Event_Script_Chansey_18
Hub_Event_Script_Chansey_16:
# 543 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CYNDAQUIL_UNLOCKED, Hub_Event_Script_Chansey_23
Hub_Event_Script_Chansey_21:
# 544 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TOTODILE_UNLOCKED, Hub_Event_Script_Chansey_28
Hub_Event_Script_Chansey_26:
# 545 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TREECKO_UNLOCKED, Hub_Event_Script_Chansey_33
Hub_Event_Script_Chansey_31:
# 546 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TORCHIC_UNLOCKED, Hub_Event_Script_Chansey_38
Hub_Event_Script_Chansey_36:
# 547 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_MUDKIP_UNLOCKED, Hub_Event_Script_Chansey_43
Hub_Event_Script_Chansey_41:
# 548 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TURTWIG_UNLOCKED, Hub_Event_Script_Chansey_48
Hub_Event_Script_Chansey_46:
# 549 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHIMCHAR_UNLOCKED, Hub_Event_Script_Chansey_53
Hub_Event_Script_Chansey_51:
# 550 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_PIPLUP_UNLOCKED, Hub_Event_Script_Chansey_58
Hub_Event_Script_Chansey_56:
# 551 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SNIVY_UNLOCKED, Hub_Event_Script_Chansey_63
Hub_Event_Script_Chansey_61:
# 552 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TEPIG_UNLOCKED, Hub_Event_Script_Chansey_68
Hub_Event_Script_Chansey_66:
# 553 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_OSHAWOTT_UNLOCKED, Hub_Event_Script_Chansey_73
Hub_Event_Script_Chansey_71:
# 554 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHESPIN_UNLOCKED, Hub_Event_Script_Chansey_78
Hub_Event_Script_Chansey_76:
# 555 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FENNEKIN_UNLOCKED, Hub_Event_Script_Chansey_83
Hub_Event_Script_Chansey_81:
# 556 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FROAKIE_UNLOCKED, Hub_Event_Script_Chansey_88
Hub_Event_Script_Chansey_86:
# 557 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ROWLET_UNLOCKED, Hub_Event_Script_Chansey_93
Hub_Event_Script_Chansey_91:
# 558 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_LITTEN_UNLOCKED, Hub_Event_Script_Chansey_98
Hub_Event_Script_Chansey_96:
# 559 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_POPPLIO_UNLOCKED, Hub_Event_Script_Chansey_103
Hub_Event_Script_Chansey_101:
# 560 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_GROOKEY_UNLOCKED, Hub_Event_Script_Chansey_108
Hub_Event_Script_Chansey_106:
# 561 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SCORBUNNY_UNLOCKED, Hub_Event_Script_Chansey_113
Hub_Event_Script_Chansey_111:
# 562 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SOBBLE_UNLOCKED, Hub_Event_Script_Chansey_118
Hub_Event_Script_Chansey_116:
# 563 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPRIGATITO_UNLOCKED, Hub_Event_Script_Chansey_123
Hub_Event_Script_Chansey_121:
# 564 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FUECOCO_UNLOCKED, Hub_Event_Script_Chansey_128
Hub_Event_Script_Chansey_126:
# 565 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_QUAXLY_UNLOCKED, Hub_Event_Script_Chansey_133
Hub_Event_Script_Chansey_131:
# 567 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Chansey_136
# 590 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_2
# 591 "data/maps/Hub1/scripts.pory"
	waitmessage
# 592 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Chansey_2:
# 539 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_1, SPECIES_BULBASAUR
# 539 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_1

Hub_Event_Script_Chansey_3:
# 539 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_BULBASAUR
	goto_if_ne Hub_Event_Script_Chansey_2
	goto Hub_Event_Script_Chansey_1

Hub_Event_Script_Chansey_7:
# 540 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_2, SPECIES_CHARMANDER
# 540 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_6

Hub_Event_Script_Chansey_8:
# 540 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHARMANDER
	goto_if_ne Hub_Event_Script_Chansey_7
	goto Hub_Event_Script_Chansey_6

Hub_Event_Script_Chansey_12:
# 541 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_3, SPECIES_SQUIRTLE
# 541 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_11

Hub_Event_Script_Chansey_13:
# 541 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SQUIRTLE
	goto_if_ne Hub_Event_Script_Chansey_12
	goto Hub_Event_Script_Chansey_11

Hub_Event_Script_Chansey_17:
# 542 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_4, SPECIES_CHIKORITA
# 542 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_16

Hub_Event_Script_Chansey_18:
# 542 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHIKORITA
	goto_if_ne Hub_Event_Script_Chansey_17
	goto Hub_Event_Script_Chansey_16

Hub_Event_Script_Chansey_22:
# 543 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_5, SPECIES_CYNDAQUIL
# 543 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_21

Hub_Event_Script_Chansey_23:
# 543 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CYNDAQUIL
	goto_if_ne Hub_Event_Script_Chansey_22
	goto Hub_Event_Script_Chansey_21

Hub_Event_Script_Chansey_27:
# 544 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_6, SPECIES_TOTODILE
# 544 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_26

Hub_Event_Script_Chansey_28:
# 544 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TOTODILE
	goto_if_ne Hub_Event_Script_Chansey_27
	goto Hub_Event_Script_Chansey_26

Hub_Event_Script_Chansey_32:
# 545 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_7, SPECIES_TREECKO
# 545 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_31

Hub_Event_Script_Chansey_33:
# 545 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TREECKO
	goto_if_ne Hub_Event_Script_Chansey_32
	goto Hub_Event_Script_Chansey_31

Hub_Event_Script_Chansey_37:
# 546 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_8, SPECIES_TORCHIC
# 546 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_36

Hub_Event_Script_Chansey_38:
# 546 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TORCHIC
	goto_if_ne Hub_Event_Script_Chansey_37
	goto Hub_Event_Script_Chansey_36

Hub_Event_Script_Chansey_42:
# 547 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_9, SPECIES_MUDKIP
# 547 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_41

Hub_Event_Script_Chansey_43:
# 547 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_MUDKIP
	goto_if_ne Hub_Event_Script_Chansey_42
	goto Hub_Event_Script_Chansey_41

Hub_Event_Script_Chansey_47:
# 548 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_10, SPECIES_TURTWIG
# 548 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_46

Hub_Event_Script_Chansey_48:
# 548 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TURTWIG
	goto_if_ne Hub_Event_Script_Chansey_47
	goto Hub_Event_Script_Chansey_46

Hub_Event_Script_Chansey_52:
# 549 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_11, SPECIES_CHIMCHAR
# 549 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_51

Hub_Event_Script_Chansey_53:
# 549 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHIMCHAR
	goto_if_ne Hub_Event_Script_Chansey_52
	goto Hub_Event_Script_Chansey_51

Hub_Event_Script_Chansey_57:
# 550 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_12, SPECIES_PIPLUP
# 550 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_56

Hub_Event_Script_Chansey_58:
# 550 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_PIPLUP
	goto_if_ne Hub_Event_Script_Chansey_57
	goto Hub_Event_Script_Chansey_56

Hub_Event_Script_Chansey_62:
# 551 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_13, SPECIES_SNIVY
# 551 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_61

Hub_Event_Script_Chansey_63:
# 551 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SNIVY
	goto_if_ne Hub_Event_Script_Chansey_62
	goto Hub_Event_Script_Chansey_61

Hub_Event_Script_Chansey_67:
# 552 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_14, SPECIES_TEPIG
# 552 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_66

Hub_Event_Script_Chansey_68:
# 552 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TEPIG
	goto_if_ne Hub_Event_Script_Chansey_67
	goto Hub_Event_Script_Chansey_66

Hub_Event_Script_Chansey_72:
# 553 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_15, SPECIES_OSHAWOTT
# 553 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_71

Hub_Event_Script_Chansey_73:
# 553 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_OSHAWOTT
	goto_if_ne Hub_Event_Script_Chansey_72
	goto Hub_Event_Script_Chansey_71

Hub_Event_Script_Chansey_77:
# 554 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_16, SPECIES_CHESPIN
# 554 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_76

Hub_Event_Script_Chansey_78:
# 554 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHESPIN
	goto_if_ne Hub_Event_Script_Chansey_77
	goto Hub_Event_Script_Chansey_76

Hub_Event_Script_Chansey_82:
# 555 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_17, SPECIES_FENNEKIN
# 555 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_81

Hub_Event_Script_Chansey_83:
# 555 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FENNEKIN
	goto_if_ne Hub_Event_Script_Chansey_82
	goto Hub_Event_Script_Chansey_81

Hub_Event_Script_Chansey_87:
# 556 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_18, SPECIES_FROAKIE
# 556 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_86

Hub_Event_Script_Chansey_88:
# 556 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FROAKIE
	goto_if_ne Hub_Event_Script_Chansey_87
	goto Hub_Event_Script_Chansey_86

Hub_Event_Script_Chansey_92:
# 557 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_19, SPECIES_ROWLET
# 557 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_91

Hub_Event_Script_Chansey_93:
# 557 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_ROWLET
	goto_if_ne Hub_Event_Script_Chansey_92
	goto Hub_Event_Script_Chansey_91

Hub_Event_Script_Chansey_97:
# 558 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_20, SPECIES_LITTEN
# 558 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_96

Hub_Event_Script_Chansey_98:
# 558 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_LITTEN
	goto_if_ne Hub_Event_Script_Chansey_97
	goto Hub_Event_Script_Chansey_96

Hub_Event_Script_Chansey_102:
# 559 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_21, SPECIES_POPPLIO
# 559 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_101

Hub_Event_Script_Chansey_103:
# 559 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_POPPLIO
	goto_if_ne Hub_Event_Script_Chansey_102
	goto Hub_Event_Script_Chansey_101

Hub_Event_Script_Chansey_107:
# 560 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_22, SPECIES_GROOKEY
# 560 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_106

Hub_Event_Script_Chansey_108:
# 560 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_GROOKEY
	goto_if_ne Hub_Event_Script_Chansey_107
	goto Hub_Event_Script_Chansey_106

Hub_Event_Script_Chansey_112:
# 561 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_23, SPECIES_SCORBUNNY
# 561 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_111

Hub_Event_Script_Chansey_113:
# 561 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SCORBUNNY
	goto_if_ne Hub_Event_Script_Chansey_112
	goto Hub_Event_Script_Chansey_111

Hub_Event_Script_Chansey_117:
# 562 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_24, SPECIES_SOBBLE
# 562 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_116

Hub_Event_Script_Chansey_118:
# 562 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SOBBLE
	goto_if_ne Hub_Event_Script_Chansey_117
	goto Hub_Event_Script_Chansey_116

Hub_Event_Script_Chansey_122:
# 563 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_25, SPECIES_SPRIGATITO
# 563 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_121

Hub_Event_Script_Chansey_123:
# 563 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SPRIGATITO
	goto_if_ne Hub_Event_Script_Chansey_122
	goto Hub_Event_Script_Chansey_121

Hub_Event_Script_Chansey_127:
# 564 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_26, SPECIES_FUECOCO
# 564 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_126

Hub_Event_Script_Chansey_128:
# 564 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FUECOCO
	goto_if_ne Hub_Event_Script_Chansey_127
	goto Hub_Event_Script_Chansey_126

Hub_Event_Script_Chansey_132:
# 565 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_27, SPECIES_QUAXLY
# 565 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_131

Hub_Event_Script_Chansey_133:
# 565 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_QUAXLY
	goto_if_ne Hub_Event_Script_Chansey_132
	goto Hub_Event_Script_Chansey_131

Hub_Event_Script_Chansey_136:
# 568 "data/maps/Hub1/scripts.pory"
	setvar VAR_RESULT, 0
# 569 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_0
# 570 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 572 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_ne Hub_Event_Script_Chansey_139
# 587 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Chansey_139:
# 573 "data/maps/Hub1/scripts.pory"
	copyvar VAR_STARTER_MON, VAR_RESULT
# 574 "data/maps/Hub1/scripts.pory"
	special ZeroPlayerPartyMons
# 575 "data/maps/Hub1/scripts.pory"
	special GiveSavedStarter
# 576 "data/maps/Hub1/scripts.pory"
	special UpdatePlayerSprite
# 577 "data/maps/Hub1/scripts.pory"
	special UpdateTransformedPlayerPalette
# 578 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 579 "data/maps/Hub1/scripts.pory"
	releaseall
# 580 "data/maps/Hub1/scripts.pory"
	lockall
# 581 "data/maps/Hub1/scripts.pory"
	playse SE_SUCCESS
# 582 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_1
# 583 "data/maps/Hub1/scripts.pory"
	waitmessage
# 584 "data/maps/Hub1/scripts.pory"
	releaseall
	return


Hub_Event_Script_Kecleon::
# 596 "data/maps/Hub1/scripts.pory"
	lockall
# 597 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 598 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_0
# 599 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_1, Hub_Event_Script_Kecleon_2
# 602 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_2, Hub_Event_Script_Kecleon_3
# 605 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_3, Hub_Event_Script_Kecleon_4
# 608 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_4, Hub_Event_Script_Kecleon_5
# 611 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_5, Hub_Event_Script_Kecleon_6
# 614 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_6, Hub_Event_Script_Kecleon_7
# 617 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_7, Hub_Event_Script_Kecleon_8
# 620 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_8, Hub_Event_Script_Kecleon_9
Hub_Event_Script_Kecleon_1:
# 624 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_1, Hub_Event_Script_Kecleon_19
# 627 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_2, Hub_Event_Script_Kecleon_20
# 630 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_3, Hub_Event_Script_Kecleon_21
# 633 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_4, Hub_Event_Script_Kecleon_22
# 636 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_5, Hub_Event_Script_Kecleon_23
Hub_Event_Script_Kecleon_18:
# 641 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Kecleon_30
# 807 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_17
# 808 "data/maps/Hub1/scripts.pory"
	waitmessage
# 809 "data/maps/Hub1/scripts.pory"
	releaseall
Hub_Event_Script_Kecleon_29:
# 811 "data/maps/Hub1/scripts.pory"
	hidemoneybox
# 812 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Kecleon_2:
# 600 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_1, ITEM_MEMORY_MUSHROOM
# 601 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_3:
# 603 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_2, ITEM_MEMORY_MUSHROOM
# 604 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_4:
# 606 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_3, ITEM_MEMORY_MUSHROOM
# 607 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_5:
# 609 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_4, ITEM_MEMORY_MUSHROOM
# 610 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_6:
# 612 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_5, ITEM_MEMORY_MUSHROOM
# 613 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_7:
# 615 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_6, ITEM_MEMORY_MUSHROOM
# 616 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_8:
# 618 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_7, ITEM_MEMORY_MUSHROOM
# 619 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_9:
# 621 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_8, ITEM_MEMORY_MUSHROOM
# 622 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_19:
# 625 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_9, ITEM_RARE_CANDY
# 626 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_18

Hub_Event_Script_Kecleon_20:
# 628 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_10, ITEM_RARE_CANDY
# 629 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_18

Hub_Event_Script_Kecleon_21:
# 631 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_11, ITEM_RARE_CANDY
# 632 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_18

Hub_Event_Script_Kecleon_22:
# 634 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_12, ITEM_RARE_CANDY
# 635 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_18

Hub_Event_Script_Kecleon_23:
# 637 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_13, ITEM_RARE_CANDY
# 638 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_18

Hub_Event_Script_Kecleon_30:
# 642 "data/maps/Hub1/scripts.pory"
	showmoneybox 17, 10
# 643 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 644 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 645 "data/maps/Hub1/scripts.pory"
	case ITEM_MEMORY_MUSHROOM, Hub_Event_Script_Kecleon_34
# 743 "data/maps/Hub1/scripts.pory"
	case ITEM_RARE_CANDY, Hub_Event_Script_Kecleon_35
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_34:
# 646 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_1, Hub_Event_Script_Kecleon_36
# 658 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_2, Hub_Event_Script_Kecleon_37
# 670 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_3, Hub_Event_Script_Kecleon_38
# 682 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_4, Hub_Event_Script_Kecleon_39
# 694 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_5, Hub_Event_Script_Kecleon_40
# 706 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_6, Hub_Event_Script_Kecleon_41
# 718 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_7, Hub_Event_Script_Kecleon_42
# 730 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_8, Hub_Event_Script_Kecleon_43
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_35:
# 744 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_1, Hub_Event_Script_Kecleon_52
# 756 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_2, Hub_Event_Script_Kecleon_53
# 768 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_3, Hub_Event_Script_Kecleon_54
# 780 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_4, Hub_Event_Script_Kecleon_55
# 792 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_5, Hub_Event_Script_Kecleon_56
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_36:
	checkmoney 2000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_62
# 656 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_15
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_37:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_65
# 668 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_15
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_38:
	checkmoney 20000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_68
# 680 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_15
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_39:
	checkmoney 30000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_71
# 692 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_15
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_40:
	checkmoney 40000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_74
# 704 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_15
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_41:
	checkmoney 50000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_77
# 716 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_15
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_42:
	checkmoney 80000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_80
# 728 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_15
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_43:
	checkmoney 100000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_83
# 740 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_15
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_52:
	checkmoney 30000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_86
# 754 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_15
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_53:
	checkmoney 50000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_89
# 766 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_15
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_54:
	checkmoney 100000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_92
# 778 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_15
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_55:
	checkmoney 200000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_95
# 790 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_15
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_56:
	checkmoney 300000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_98
# 802 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_15
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_62:
# 648 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MEMORY_MUSHROOM_UNLOCKED_1
# 649 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 1
# 650 "data/maps/Hub1/scripts.pory"
	removemoney 2000
# 651 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 652 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 653 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_14
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_65:
# 660 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MEMORY_MUSHROOM_UNLOCKED_2
# 661 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 1
# 662 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 663 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 664 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 665 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_14
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_68:
# 672 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MEMORY_MUSHROOM_UNLOCKED_3
# 673 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 1
# 674 "data/maps/Hub1/scripts.pory"
	removemoney 20000
# 675 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 676 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 677 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_14
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_71:
# 684 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MEMORY_MUSHROOM_UNLOCKED_4
# 685 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 1
# 686 "data/maps/Hub1/scripts.pory"
	removemoney 30000
# 687 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 688 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 689 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_14
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_74:
# 696 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MEMORY_MUSHROOM_UNLOCKED_5
# 697 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 1
# 698 "data/maps/Hub1/scripts.pory"
	removemoney 40000
# 699 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 700 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 701 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_14
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_77:
# 708 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MEMORY_MUSHROOM_UNLOCKED_6
# 709 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 1
# 710 "data/maps/Hub1/scripts.pory"
	removemoney 50000
# 711 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 712 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 713 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_14
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_80:
# 720 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MEMORY_MUSHROOM_UNLOCKED_7
# 721 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 1
# 722 "data/maps/Hub1/scripts.pory"
	removemoney 80000
# 723 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 724 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 725 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_14
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_83:
# 732 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MEMORY_MUSHROOM_UNLOCKED_8
# 733 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 1
# 734 "data/maps/Hub1/scripts.pory"
	removemoney 100000
# 735 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 736 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 737 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_14
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_86:
# 746 "data/maps/Hub1/scripts.pory"
	setflag FLAG_RARE_CANDY_UNLOCKED_1
# 747 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 748 "data/maps/Hub1/scripts.pory"
	removemoney 30000
# 749 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 750 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 751 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_16
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_89:
# 758 "data/maps/Hub1/scripts.pory"
	setflag FLAG_RARE_CANDY_UNLOCKED_2
# 759 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 760 "data/maps/Hub1/scripts.pory"
	removemoney 50000
# 761 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 762 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 763 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_16
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_92:
# 770 "data/maps/Hub1/scripts.pory"
	setflag FLAG_RARE_CANDY_UNLOCKED_3
# 771 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 772 "data/maps/Hub1/scripts.pory"
	removemoney 100000
# 773 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 774 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 775 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_16
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_95:
# 782 "data/maps/Hub1/scripts.pory"
	setflag FLAG_RARE_CANDY_UNLOCKED_4
# 783 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 784 "data/maps/Hub1/scripts.pory"
	removemoney 200000
# 785 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 786 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 787 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_16
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_98:
# 794 "data/maps/Hub1/scripts.pory"
	setflag FLAG_RARE_CANDY_UNLOCKED_5
# 795 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 796 "data/maps/Hub1/scripts.pory"
	removemoney 300000
# 797 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 798 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 799 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_16
	goto Hub_Event_Script_Kecleon_29


HUB1_ONFRAME_Text_0:
# 17 "data/maps/Hub1/scripts.pory"
	.string "Welcome to Pokemon Path!\pTo start a run, talk to\nProfessor Birch up ahead.\pNow choose a pokemon to\nstart your adventure with.$"

HUB1_ONFRAME_Text_1:
# 19 "data/maps/Hub1/scripts.pory"
	.string "Bulbasaur$"

HUB1_ONFRAME_Text_2:
# 20 "data/maps/Hub1/scripts.pory"
	.string "Charmander$"

HUB1_ONFRAME_Text_3:
# 21 "data/maps/Hub1/scripts.pory"
	.string "Squirtle$"

HUB1_ONFRAME_Text_4:
# 22 "data/maps/Hub1/scripts.pory"
	.string "Chikorita$"

HUB1_ONFRAME_Text_5:
# 23 "data/maps/Hub1/scripts.pory"
	.string "Cyndaquil$"

HUB1_ONFRAME_Text_6:
# 24 "data/maps/Hub1/scripts.pory"
	.string "Totodile$"

HUB1_ONFRAME_Text_7:
# 25 "data/maps/Hub1/scripts.pory"
	.string "Treecko$"

HUB1_ONFRAME_Text_8:
# 26 "data/maps/Hub1/scripts.pory"
	.string "Torchic$"

HUB1_ONFRAME_Text_9:
# 27 "data/maps/Hub1/scripts.pory"
	.string "Mudkip$"

HUB1_ONFRAME_Text_10:
# 28 "data/maps/Hub1/scripts.pory"
	.string "Turtwig$"

HUB1_ONFRAME_Text_11:
# 29 "data/maps/Hub1/scripts.pory"
	.string "Chimchar$"

HUB1_ONFRAME_Text_12:
# 30 "data/maps/Hub1/scripts.pory"
	.string "Piplup$"

HUB1_ONFRAME_Text_13:
# 31 "data/maps/Hub1/scripts.pory"
	.string "Snivy$"

HUB1_ONFRAME_Text_14:
# 32 "data/maps/Hub1/scripts.pory"
	.string "Tepig$"

HUB1_ONFRAME_Text_15:
# 33 "data/maps/Hub1/scripts.pory"
	.string "Oshawott$"

HUB1_ONFRAME_Text_16:
# 34 "data/maps/Hub1/scripts.pory"
	.string "Chespin$"

HUB1_ONFRAME_Text_17:
# 35 "data/maps/Hub1/scripts.pory"
	.string "Fennekin$"

HUB1_ONFRAME_Text_18:
# 36 "data/maps/Hub1/scripts.pory"
	.string "Froakie$"

HUB1_ONFRAME_Text_19:
# 37 "data/maps/Hub1/scripts.pory"
	.string "Rowlet$"

HUB1_ONFRAME_Text_20:
# 38 "data/maps/Hub1/scripts.pory"
	.string "Litten$"

HUB1_ONFRAME_Text_21:
# 39 "data/maps/Hub1/scripts.pory"
	.string "Popplio$"

HUB1_ONFRAME_Text_22:
# 40 "data/maps/Hub1/scripts.pory"
	.string "Grookey$"

HUB1_ONFRAME_Text_23:
# 41 "data/maps/Hub1/scripts.pory"
	.string "Scorbunny$"

HUB1_ONFRAME_Text_24:
# 42 "data/maps/Hub1/scripts.pory"
	.string "Sobble$"

HUB1_ONFRAME_Text_25:
# 43 "data/maps/Hub1/scripts.pory"
	.string "Sprigatito$"

HUB1_ONFRAME_Text_26:
# 44 "data/maps/Hub1/scripts.pory"
	.string "Fuecoco$"

HUB1_ONFRAME_Text_27:
# 45 "data/maps/Hub1/scripts.pory"
	.string "Quaxly$"

HUB1_ONFRAME_Text_28:
# 163 "data/maps/Hub1/scripts.pory"
	.string "Use this item to level up your\nPokemon.$"

Hub_Event_Script_Birch_Text_0:
# 173 "data/maps/Hub1/scripts.pory"
	.string "Would you like to start a run?$"

Hub_Event_Script_Birch_Text_1:
# 176 "data/maps/Hub1/scripts.pory"
	.string "Alright then! Here we go!$"

Hub_Event_Script_Birch_Text_2:
# 184 "data/maps/Hub1/scripts.pory"
	.string "Okay! Let me know when you're ready.$"

Hub_Event_Script_Miltank_Text_0:
# 193 "data/maps/Hub1/scripts.pory"
	.string "Bulbasaur (¥5000)$"

Hub_Event_Script_Miltank_Text_1:
# 194 "data/maps/Hub1/scripts.pory"
	.string "Charmander (¥5000)$"

Hub_Event_Script_Miltank_Text_2:
# 195 "data/maps/Hub1/scripts.pory"
	.string "Squirtle (¥5000)$"

Hub_Event_Script_Miltank_Text_3:
# 196 "data/maps/Hub1/scripts.pory"
	.string "Chikorita (¥5000)$"

Hub_Event_Script_Miltank_Text_4:
# 197 "data/maps/Hub1/scripts.pory"
	.string "Cyndaquil (¥5000)$"

Hub_Event_Script_Miltank_Text_5:
# 198 "data/maps/Hub1/scripts.pory"
	.string "Totodile (¥5000)$"

Hub_Event_Script_Miltank_Text_6:
# 199 "data/maps/Hub1/scripts.pory"
	.string "Treecko (¥5000)$"

Hub_Event_Script_Miltank_Text_7:
# 200 "data/maps/Hub1/scripts.pory"
	.string "Torchic (¥5000)$"

Hub_Event_Script_Miltank_Text_8:
# 201 "data/maps/Hub1/scripts.pory"
	.string "Mudkip (¥5000)$"

Hub_Event_Script_Miltank_Text_9:
# 202 "data/maps/Hub1/scripts.pory"
	.string "Turtwig (¥5000)$"

Hub_Event_Script_Miltank_Text_10:
# 203 "data/maps/Hub1/scripts.pory"
	.string "Chimchar (¥5000)$"

Hub_Event_Script_Miltank_Text_11:
# 204 "data/maps/Hub1/scripts.pory"
	.string "Piplup (¥5000)$"

Hub_Event_Script_Miltank_Text_12:
# 205 "data/maps/Hub1/scripts.pory"
	.string "Snivy (¥5000)$"

Hub_Event_Script_Miltank_Text_13:
# 206 "data/maps/Hub1/scripts.pory"
	.string "Tepig (¥5000)$"

Hub_Event_Script_Miltank_Text_14:
# 207 "data/maps/Hub1/scripts.pory"
	.string "Oshawott (¥5000)$"

Hub_Event_Script_Miltank_Text_15:
# 208 "data/maps/Hub1/scripts.pory"
	.string "Chespin (¥5000)$"

Hub_Event_Script_Miltank_Text_16:
# 209 "data/maps/Hub1/scripts.pory"
	.string "Fennekin (¥5000)$"

Hub_Event_Script_Miltank_Text_17:
# 210 "data/maps/Hub1/scripts.pory"
	.string "Froakie (¥5000)$"

Hub_Event_Script_Miltank_Text_18:
# 211 "data/maps/Hub1/scripts.pory"
	.string "Rowlet (¥5000)$"

Hub_Event_Script_Miltank_Text_19:
# 212 "data/maps/Hub1/scripts.pory"
	.string "Litten (¥5000)$"

Hub_Event_Script_Miltank_Text_20:
# 213 "data/maps/Hub1/scripts.pory"
	.string "Popplio (¥5000)$"

Hub_Event_Script_Miltank_Text_21:
# 214 "data/maps/Hub1/scripts.pory"
	.string "Grookey (¥5000)$"

Hub_Event_Script_Miltank_Text_22:
# 215 "data/maps/Hub1/scripts.pory"
	.string "Scorbunny (¥5000)$"

Hub_Event_Script_Miltank_Text_23:
# 216 "data/maps/Hub1/scripts.pory"
	.string "Sobble (¥5000)$"

Hub_Event_Script_Miltank_Text_24:
# 217 "data/maps/Hub1/scripts.pory"
	.string "Sprigatito (¥5000)$"

Hub_Event_Script_Miltank_Text_25:
# 218 "data/maps/Hub1/scripts.pory"
	.string "Fuecoco (¥5000)$"

Hub_Event_Script_Miltank_Text_26:
# 219 "data/maps/Hub1/scripts.pory"
	.string "Quaxly (¥5000)$"

Hub_Event_Script_Miltank_Text_27:
# 223 "data/maps/Hub1/scripts.pory"
	.string "Would you like to adopt a pokemon?$"

Hub_Event_Script_Miltank_Text_28:
# 234 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Bulbasaur as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_29:
# 237 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry. You don't have the money to\nadopt that pokemon.$"

Hub_Event_Script_Miltank_Text_30:
# 245 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Charmander as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_31:
# 256 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Squirtle as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_32:
# 267 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chikorita as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_33:
# 278 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Cyndaquil as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_34:
# 289 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Totodile as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_35:
# 300 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Treecko as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_36:
# 311 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Torchic as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_37:
# 322 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Mudkip as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_38:
# 333 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Turtwig as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_39:
# 344 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chimchar as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_40:
# 355 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Piplup as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_41:
# 366 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Snivy as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_42:
# 377 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Tepig as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_43:
# 388 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Oshawott as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_44:
# 399 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chespin as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_45:
# 410 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Fennekin as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_46:
# 421 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Froakie as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_47:
# 432 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Rowlet as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_48:
# 443 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Litten as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_49:
# 454 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Popplio as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_50:
# 465 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Grookey as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_51:
# 476 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Scorbunny as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_52:
# 487 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Sobble as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_53:
# 498 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Sprigatito as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_54:
# 509 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Fuecoco as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_55:
# 520 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Quaxly as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_56:
# 529 "data/maps/Hub1/scripts.pory"
	.string "You have no more starters left to adopt!$"

Hub_Event_Script_Chansey_Text_0:
# 569 "data/maps/Hub1/scripts.pory"
	.string "Would you like to change your starter?$"

Hub_Event_Script_Chansey_Text_1:
# 582 "data/maps/Hub1/scripts.pory"
	.string "There you go!$"

Hub_Event_Script_Chansey_Text_2:
# 590 "data/maps/Hub1/scripts.pory"
	.string "You don't have any starter pokemon yet.\pPlease consider adopting some pokemon\nfrom my friend Miltank to the right.$"

Hub_Event_Script_Kecleon_Text_0:
# 598 "data/maps/Hub1/scripts.pory"
	.string "Would you like to buy a starter item?$"

Hub_Event_Script_Kecleon_Text_1:
# 600 "data/maps/Hub1/scripts.pory"
	.string "Memory Mushroom (¥2000)$"

Hub_Event_Script_Kecleon_Text_2:
# 603 "data/maps/Hub1/scripts.pory"
	.string "Memory Mushroom (¥10000)$"

Hub_Event_Script_Kecleon_Text_3:
# 606 "data/maps/Hub1/scripts.pory"
	.string "Memory Mushroom (¥20000)$"

Hub_Event_Script_Kecleon_Text_4:
# 609 "data/maps/Hub1/scripts.pory"
	.string "Memory Mushroom (¥30000)$"

Hub_Event_Script_Kecleon_Text_5:
# 612 "data/maps/Hub1/scripts.pory"
	.string "Memory Mushroom (¥40000)$"

Hub_Event_Script_Kecleon_Text_6:
# 615 "data/maps/Hub1/scripts.pory"
	.string "Memory Mushroom (¥50000)$"

Hub_Event_Script_Kecleon_Text_7:
# 618 "data/maps/Hub1/scripts.pory"
	.string "Memory Mushroom (¥80000)$"

Hub_Event_Script_Kecleon_Text_8:
# 621 "data/maps/Hub1/scripts.pory"
	.string "Memory Mushroom (¥100000)$"

Hub_Event_Script_Kecleon_Text_9:
# 625 "data/maps/Hub1/scripts.pory"
	.string "Rare Candy (¥30000)$"

Hub_Event_Script_Kecleon_Text_10:
# 628 "data/maps/Hub1/scripts.pory"
	.string "Rare Candy (¥500000)$"

Hub_Event_Script_Kecleon_Text_11:
# 631 "data/maps/Hub1/scripts.pory"
	.string "Rare Candy (¥100000)$"

Hub_Event_Script_Kecleon_Text_12:
# 634 "data/maps/Hub1/scripts.pory"
	.string "Rare Candy (¥200000)$"

Hub_Event_Script_Kecleon_Text_13:
# 637 "data/maps/Hub1/scripts.pory"
	.string "Rare Candy (¥300000)$"

Hub_Event_Script_Kecleon_Text_14:
# 653 "data/maps/Hub1/scripts.pory"
	.string "You got a Memory Mushroom as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_15:
# 656 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry. You don't have the money to\nbuy that item, kec.$"

Hub_Event_Script_Kecleon_Text_16:
# 751 "data/maps/Hub1/scripts.pory"
	.string "You got a Rare Candy as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_17:
# 807 "data/maps/Hub1/scripts.pory"
	.string "You don't have anything left\nto puchase right now. Thank you for\lyour consistent patronage!\p$"
