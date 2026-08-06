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
# 15 "data/maps/Hub1/scripts.pory"
	setvar VAR_CURRENT_ACT, 0
# 16 "data/maps/Hub1/scripts.pory"
	special UpdateLevelCap
# 18 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SYS_NEW_GAME, HUB1_ONFRAME_1
	return

HUB1_ONFRAME_1:
# 19 "data/maps/Hub1/scripts.pory"
	lockall
# 22 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SYS_NEW_GAME
# 23 "data/maps/Hub1/scripts.pory"
	setvar VAR_SHINY_RATE, 4096
# 26 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_ONFRAME_Text_0
# 29 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_1, SPECIES_BULBASAUR
# 30 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_2, SPECIES_CHARMANDER
# 31 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_3, SPECIES_SQUIRTLE
# 32 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_4, SPECIES_CHIKORITA
# 33 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_5, SPECIES_CYNDAQUIL
# 34 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_6, SPECIES_TOTODILE
# 35 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_7, SPECIES_TREECKO
# 36 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_8, SPECIES_TORCHIC
# 37 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_9, SPECIES_MUDKIP
# 38 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_10, SPECIES_TURTWIG
# 39 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_11, SPECIES_CHIMCHAR
# 40 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_12, SPECIES_PIPLUP
# 41 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_13, SPECIES_SNIVY
# 42 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_14, SPECIES_TEPIG
# 43 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_15, SPECIES_OSHAWOTT
# 44 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_16, SPECIES_CHESPIN
# 45 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_17, SPECIES_FENNEKIN
# 46 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_18, SPECIES_FROAKIE
# 47 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_19, SPECIES_ROWLET
# 48 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_20, SPECIES_LITTEN
# 49 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_21, SPECIES_POPPLIO
# 50 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_22, SPECIES_GROOKEY
# 51 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_23, SPECIES_SCORBUNNY
# 52 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_24, SPECIES_SOBBLE
# 53 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_25, SPECIES_SPRIGATITO
# 54 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_26, SPECIES_FUECOCO
# 55 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_27, SPECIES_QUAXLY
# 56 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 58 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 59 "data/maps/Hub1/scripts.pory"
	case SPECIES_BULBASAUR, HUB1_ONFRAME_5
# 63 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHARMANDER, HUB1_ONFRAME_6
# 67 "data/maps/Hub1/scripts.pory"
	case SPECIES_SQUIRTLE, HUB1_ONFRAME_7
# 71 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIKORITA, HUB1_ONFRAME_8
# 75 "data/maps/Hub1/scripts.pory"
	case SPECIES_CYNDAQUIL, HUB1_ONFRAME_9
# 79 "data/maps/Hub1/scripts.pory"
	case SPECIES_TOTODILE, HUB1_ONFRAME_10
# 83 "data/maps/Hub1/scripts.pory"
	case SPECIES_TREECKO, HUB1_ONFRAME_11
# 87 "data/maps/Hub1/scripts.pory"
	case SPECIES_TORCHIC, HUB1_ONFRAME_12
# 91 "data/maps/Hub1/scripts.pory"
	case SPECIES_MUDKIP, HUB1_ONFRAME_13
# 95 "data/maps/Hub1/scripts.pory"
	case SPECIES_TURTWIG, HUB1_ONFRAME_14
# 99 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIMCHAR, HUB1_ONFRAME_15
# 103 "data/maps/Hub1/scripts.pory"
	case SPECIES_PIPLUP, HUB1_ONFRAME_16
# 107 "data/maps/Hub1/scripts.pory"
	case SPECIES_SNIVY, HUB1_ONFRAME_17
# 111 "data/maps/Hub1/scripts.pory"
	case SPECIES_TEPIG, HUB1_ONFRAME_18
# 115 "data/maps/Hub1/scripts.pory"
	case SPECIES_OSHAWOTT, HUB1_ONFRAME_19
# 119 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHESPIN, HUB1_ONFRAME_20
# 123 "data/maps/Hub1/scripts.pory"
	case SPECIES_FENNEKIN, HUB1_ONFRAME_21
# 127 "data/maps/Hub1/scripts.pory"
	case SPECIES_FROAKIE, HUB1_ONFRAME_22
# 131 "data/maps/Hub1/scripts.pory"
	case SPECIES_ROWLET, HUB1_ONFRAME_23
# 135 "data/maps/Hub1/scripts.pory"
	case SPECIES_LITTEN, HUB1_ONFRAME_24
# 139 "data/maps/Hub1/scripts.pory"
	case SPECIES_POPPLIO, HUB1_ONFRAME_25
# 143 "data/maps/Hub1/scripts.pory"
	case SPECIES_GROOKEY, HUB1_ONFRAME_26
# 147 "data/maps/Hub1/scripts.pory"
	case SPECIES_SCORBUNNY, HUB1_ONFRAME_27
# 151 "data/maps/Hub1/scripts.pory"
	case SPECIES_SOBBLE, HUB1_ONFRAME_28
# 155 "data/maps/Hub1/scripts.pory"
	case SPECIES_SPRIGATITO, HUB1_ONFRAME_29
# 159 "data/maps/Hub1/scripts.pory"
	case SPECIES_FUECOCO, HUB1_ONFRAME_30
# 163 "data/maps/Hub1/scripts.pory"
	case SPECIES_QUAXLY, HUB1_ONFRAME_31
HUB1_ONFRAME_3:
# 168 "data/maps/Hub1/scripts.pory"
	special UpdatePlayerSprite
# 169 "data/maps/Hub1/scripts.pory"
	special UpdateTransformedPlayerPalette
# 170 "data/maps/Hub1/scripts.pory"
	releaseall
# 172 "data/maps/Hub1/scripts.pory"
	lockall
# 173 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_ONFRAME_Text_28
# 174 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CANDY_JAR
# 176 "data/maps/Hub1/scripts.pory"
	releaseall
	return

HUB1_ONFRAME_5:
# 60 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
# 61 "data/maps/Hub1/scripts.pory"
	setflag FLAG_BULBASAUR_UNLOCKED
# 62 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_BULBASAUR
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_6:
# 64 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
# 65 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHARMANDER_UNLOCKED
# 66 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHARMANDER
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_7:
# 68 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5
# 69 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SQUIRTLE_UNLOCKED
# 70 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SQUIRTLE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_8:
# 72 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 73 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIKORITA_UNLOCKED
# 74 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHIKORITA
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_9:
# 76 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 77 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CYNDAQUIL_UNLOCKED
# 78 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CYNDAQUIL
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_10:
# 80 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 81 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TOTODILE_UNLOCKED
# 82 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TOTODILE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_11:
# 84 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 85 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TREECKO_UNLOCKED
# 86 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TREECKO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_12:
# 88 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TORCHIC, 5
# 89 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TORCHIC_UNLOCKED
# 90 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TORCHIC
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_13:
# 92 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_MUDKIP, 5
# 93 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MUDKIP_UNLOCKED
# 94 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_MUDKIP
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_14:
# 96 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TURTWIG, 5
# 97 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TURTWIG_UNLOCKED
# 98 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TURTWIG
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_15:
# 100 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHIMCHAR, 5
# 101 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIMCHAR_UNLOCKED
# 102 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHIMCHAR
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_16:
# 104 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_PIPLUP, 5
# 105 "data/maps/Hub1/scripts.pory"
	setflag FLAG_PIPLUP_UNLOCKED
# 106 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_PIPLUP
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_17:
# 108 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SNIVY, 5
# 109 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SNIVY_UNLOCKED
# 110 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SNIVY
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_18:
# 112 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TEPIG, 5
# 113 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TEPIG_UNLOCKED
# 114 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TEPIG
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_19:
# 116 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5
# 117 "data/maps/Hub1/scripts.pory"
	setflag FLAG_OSHAWOTT_UNLOCKED
# 118 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_OSHAWOTT
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_20:
# 120 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHESPIN, 5
# 121 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHESPIN_UNLOCKED
# 122 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHESPIN
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_21:
# 124 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FENNEKIN, 5
# 125 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FENNEKIN_UNLOCKED
# 126 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_FENNEKIN
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_22:
# 128 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FROAKIE, 5
# 129 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FROAKIE_UNLOCKED
# 130 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_FROAKIE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_23:
# 132 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_ROWLET, 5
# 133 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ROWLET_UNLOCKED
# 134 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_ROWLET
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_24:
# 136 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_LITTEN, 5
# 137 "data/maps/Hub1/scripts.pory"
	setflag FLAG_LITTEN_UNLOCKED
# 138 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_LITTEN
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_25:
# 140 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_POPPLIO, 5
# 141 "data/maps/Hub1/scripts.pory"
	setflag FLAG_POPPLIO_UNLOCKED
# 142 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_POPPLIO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_26:
# 144 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_GROOKEY, 5
# 145 "data/maps/Hub1/scripts.pory"
	setflag FLAG_GROOKEY_UNLOCKED
# 146 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_GROOKEY
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_27:
# 148 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SCORBUNNY, 5
# 149 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SCORBUNNY_UNLOCKED
# 150 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SCORBUNNY
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_28:
# 152 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SOBBLE, 5
# 153 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SOBBLE_UNLOCKED
# 154 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SOBBLE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_29:
# 156 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SPRIGATITO, 5
# 157 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SPRIGATITO_UNLOCKED
# 158 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SPRIGATITO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_30:
# 160 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FUECOCO, 5
# 161 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FUECOCO_UNLOCKED
# 162 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_FUECOCO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_31:
# 164 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_QUAXLY, 5
# 165 "data/maps/Hub1/scripts.pory"
	setflag FLAG_QUAXLY_UNLOCKED
# 166 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_QUAXLY
	goto HUB1_ONFRAME_3


Hub_Event_Script_Birch::
# 181 "data/maps/Hub1/scripts.pory"
	lockall
# 182 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_0, MSGBOX_YESNO
# 183 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 184 "data/maps/Hub1/scripts.pory"
	case YES, Hub_Event_Script_Birch_2
# 187 "data/maps/Hub1/scripts.pory"
	case NO, Hub_Event_Script_Birch_3
	return

Hub_Event_Script_Birch_2:
# 185 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_1
# 186 "data/maps/Hub1/scripts.pory"
	special WarpToNextAct
	return

Hub_Event_Script_Birch_3:
# 188 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_2
# 189 "data/maps/Hub1/scripts.pory"
	releaseall
	return


Hub_Event_Script_Miltank::
# 194 "data/maps/Hub1/scripts.pory"
	lockall
# 195 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 197 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_BULBASAUR_UNLOCKED, Hub_Event_Script_Miltank_2
Hub_Event_Script_Miltank_1:
# 198 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHARMANDER_UNLOCKED, Hub_Event_Script_Miltank_5
Hub_Event_Script_Miltank_4:
# 199 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SQUIRTLE_UNLOCKED, Hub_Event_Script_Miltank_8
Hub_Event_Script_Miltank_7:
# 200 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHIKORITA_UNLOCKED, Hub_Event_Script_Miltank_11
Hub_Event_Script_Miltank_10:
# 201 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CYNDAQUIL_UNLOCKED, Hub_Event_Script_Miltank_14
Hub_Event_Script_Miltank_13:
# 202 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TOTODILE_UNLOCKED, Hub_Event_Script_Miltank_17
Hub_Event_Script_Miltank_16:
# 203 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TREECKO_UNLOCKED, Hub_Event_Script_Miltank_20
Hub_Event_Script_Miltank_19:
# 204 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TORCHIC_UNLOCKED, Hub_Event_Script_Miltank_23
Hub_Event_Script_Miltank_22:
# 205 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MUDKIP_UNLOCKED, Hub_Event_Script_Miltank_26
Hub_Event_Script_Miltank_25:
# 206 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TURTWIG_UNLOCKED, Hub_Event_Script_Miltank_29
Hub_Event_Script_Miltank_28:
# 207 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHIMCHAR_UNLOCKED, Hub_Event_Script_Miltank_32
Hub_Event_Script_Miltank_31:
# 208 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_PIPLUP_UNLOCKED, Hub_Event_Script_Miltank_35
Hub_Event_Script_Miltank_34:
# 209 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SNIVY_UNLOCKED, Hub_Event_Script_Miltank_38
Hub_Event_Script_Miltank_37:
# 210 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TEPIG_UNLOCKED, Hub_Event_Script_Miltank_41
Hub_Event_Script_Miltank_40:
# 211 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_OSHAWOTT_UNLOCKED, Hub_Event_Script_Miltank_44
Hub_Event_Script_Miltank_43:
# 212 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHESPIN_UNLOCKED, Hub_Event_Script_Miltank_47
Hub_Event_Script_Miltank_46:
# 213 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FENNEKIN_UNLOCKED, Hub_Event_Script_Miltank_50
Hub_Event_Script_Miltank_49:
# 214 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FROAKIE_UNLOCKED, Hub_Event_Script_Miltank_53
Hub_Event_Script_Miltank_52:
# 215 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ROWLET_UNLOCKED, Hub_Event_Script_Miltank_56
Hub_Event_Script_Miltank_55:
# 216 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_LITTEN_UNLOCKED, Hub_Event_Script_Miltank_59
Hub_Event_Script_Miltank_58:
# 217 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_POPPLIO_UNLOCKED, Hub_Event_Script_Miltank_62
Hub_Event_Script_Miltank_61:
# 218 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_GROOKEY_UNLOCKED, Hub_Event_Script_Miltank_65
Hub_Event_Script_Miltank_64:
# 219 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SCORBUNNY_UNLOCKED, Hub_Event_Script_Miltank_68
Hub_Event_Script_Miltank_67:
# 220 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SOBBLE_UNLOCKED, Hub_Event_Script_Miltank_71
Hub_Event_Script_Miltank_70:
# 221 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SPRIGATITO_UNLOCKED, Hub_Event_Script_Miltank_74
Hub_Event_Script_Miltank_73:
# 222 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FUECOCO_UNLOCKED, Hub_Event_Script_Miltank_77
Hub_Event_Script_Miltank_76:
# 223 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_QUAXLY_UNLOCKED, Hub_Event_Script_Miltank_80
Hub_Event_Script_Miltank_79:
# 225 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Miltank_82
# 533 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_56
# 534 "data/maps/Hub1/scripts.pory"
	waitmessage
# 535 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Miltank_2:
# 197 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_0, SPECIES_BULBASAUR
# 197 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_1

Hub_Event_Script_Miltank_5:
# 198 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_1, SPECIES_CHARMANDER
# 198 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_4

Hub_Event_Script_Miltank_8:
# 199 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_2, SPECIES_SQUIRTLE
# 199 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_7

Hub_Event_Script_Miltank_11:
# 200 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_3, SPECIES_CHIKORITA
# 200 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_10

Hub_Event_Script_Miltank_14:
# 201 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_4, SPECIES_CYNDAQUIL
# 201 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_13

Hub_Event_Script_Miltank_17:
# 202 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_5, SPECIES_TOTODILE
# 202 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_16

Hub_Event_Script_Miltank_20:
# 203 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_6, SPECIES_TREECKO
# 203 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_19

Hub_Event_Script_Miltank_23:
# 204 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_7, SPECIES_TORCHIC
# 204 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_22

Hub_Event_Script_Miltank_26:
# 205 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_8, SPECIES_MUDKIP
# 205 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_25

Hub_Event_Script_Miltank_29:
# 206 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_9, SPECIES_TURTWIG
# 206 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_28

Hub_Event_Script_Miltank_32:
# 207 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_10, SPECIES_CHIMCHAR
# 207 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_31

Hub_Event_Script_Miltank_35:
# 208 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_11, SPECIES_PIPLUP
# 208 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_34

Hub_Event_Script_Miltank_38:
# 209 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_12, SPECIES_SNIVY
# 209 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_37

Hub_Event_Script_Miltank_41:
# 210 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_13, SPECIES_TEPIG
# 210 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_40

Hub_Event_Script_Miltank_44:
# 211 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_14, SPECIES_OSHAWOTT
# 211 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_43

Hub_Event_Script_Miltank_47:
# 212 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_15, SPECIES_CHESPIN
# 212 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_46

Hub_Event_Script_Miltank_50:
# 213 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_16, SPECIES_FENNEKIN
# 213 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_49

Hub_Event_Script_Miltank_53:
# 214 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_17, SPECIES_FROAKIE
# 214 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_52

Hub_Event_Script_Miltank_56:
# 215 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_18, SPECIES_ROWLET
# 215 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_55

Hub_Event_Script_Miltank_59:
# 216 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_19, SPECIES_LITTEN
# 216 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_58

Hub_Event_Script_Miltank_62:
# 217 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_20, SPECIES_POPPLIO
# 217 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_61

Hub_Event_Script_Miltank_65:
# 218 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_21, SPECIES_GROOKEY
# 218 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_64

Hub_Event_Script_Miltank_68:
# 219 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_22, SPECIES_SCORBUNNY
# 219 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_67

Hub_Event_Script_Miltank_71:
# 220 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_23, SPECIES_SOBBLE
# 220 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_70

Hub_Event_Script_Miltank_74:
# 221 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_24, SPECIES_SPRIGATITO
# 221 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_73

Hub_Event_Script_Miltank_77:
# 222 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_25, SPECIES_FUECOCO
# 222 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_76

Hub_Event_Script_Miltank_80:
# 223 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_26, SPECIES_QUAXLY
# 223 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_79

Hub_Event_Script_Miltank_82:
# 226 "data/maps/Hub1/scripts.pory"
	showmoneybox 17, 10
# 227 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_27
# 228 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 229 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 230 "data/maps/Hub1/scripts.pory"
	case MULTI_B_PRESSED, Hub_Event_Script_Miltank_87
# 232 "data/maps/Hub1/scripts.pory"
	case SPECIES_BULBASAUR, Hub_Event_Script_Miltank_88
# 243 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHARMANDER, Hub_Event_Script_Miltank_89
# 254 "data/maps/Hub1/scripts.pory"
	case SPECIES_SQUIRTLE, Hub_Event_Script_Miltank_90
# 265 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIKORITA, Hub_Event_Script_Miltank_91
# 276 "data/maps/Hub1/scripts.pory"
	case SPECIES_CYNDAQUIL, Hub_Event_Script_Miltank_92
# 287 "data/maps/Hub1/scripts.pory"
	case SPECIES_TOTODILE, Hub_Event_Script_Miltank_93
# 298 "data/maps/Hub1/scripts.pory"
	case SPECIES_TREECKO, Hub_Event_Script_Miltank_94
# 309 "data/maps/Hub1/scripts.pory"
	case SPECIES_TORCHIC, Hub_Event_Script_Miltank_95
# 320 "data/maps/Hub1/scripts.pory"
	case SPECIES_MUDKIP, Hub_Event_Script_Miltank_96
# 331 "data/maps/Hub1/scripts.pory"
	case SPECIES_TURTWIG, Hub_Event_Script_Miltank_97
# 342 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIMCHAR, Hub_Event_Script_Miltank_98
# 353 "data/maps/Hub1/scripts.pory"
	case SPECIES_PIPLUP, Hub_Event_Script_Miltank_99
# 364 "data/maps/Hub1/scripts.pory"
	case SPECIES_SNIVY, Hub_Event_Script_Miltank_100
# 375 "data/maps/Hub1/scripts.pory"
	case SPECIES_TEPIG, Hub_Event_Script_Miltank_101
# 386 "data/maps/Hub1/scripts.pory"
	case SPECIES_OSHAWOTT, Hub_Event_Script_Miltank_102
# 397 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHESPIN, Hub_Event_Script_Miltank_103
# 408 "data/maps/Hub1/scripts.pory"
	case SPECIES_FENNEKIN, Hub_Event_Script_Miltank_104
# 419 "data/maps/Hub1/scripts.pory"
	case SPECIES_FROAKIE, Hub_Event_Script_Miltank_105
# 430 "data/maps/Hub1/scripts.pory"
	case SPECIES_ROWLET, Hub_Event_Script_Miltank_106
# 441 "data/maps/Hub1/scripts.pory"
	case SPECIES_LITTEN, Hub_Event_Script_Miltank_107
# 452 "data/maps/Hub1/scripts.pory"
	case SPECIES_POPPLIO, Hub_Event_Script_Miltank_108
# 463 "data/maps/Hub1/scripts.pory"
	case SPECIES_GROOKEY, Hub_Event_Script_Miltank_109
# 474 "data/maps/Hub1/scripts.pory"
	case SPECIES_SCORBUNNY, Hub_Event_Script_Miltank_110
# 485 "data/maps/Hub1/scripts.pory"
	case SPECIES_SOBBLE, Hub_Event_Script_Miltank_111
# 496 "data/maps/Hub1/scripts.pory"
	case SPECIES_SPRIGATITO, Hub_Event_Script_Miltank_112
# 507 "data/maps/Hub1/scripts.pory"
	case SPECIES_FUECOCO, Hub_Event_Script_Miltank_113
# 518 "data/maps/Hub1/scripts.pory"
	case SPECIES_QUAXLY, Hub_Event_Script_Miltank_114
Hub_Event_Script_Miltank_85:
# 530 "data/maps/Hub1/scripts.pory"
	hidemoneybox
# 531 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Miltank_87:
# 231 "data/maps/Hub1/scripts.pory"
	releaseall
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_88:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_115
# 241 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_89:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_118
# 252 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_90:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_121
# 263 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_91:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_124
# 274 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_92:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_127
# 285 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_93:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_130
# 296 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_94:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_133
# 307 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_95:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_136
# 318 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_96:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_139
# 329 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_97:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_142
# 340 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_98:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_145
# 351 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_99:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_148
# 362 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_100:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_151
# 373 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_101:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_154
# 384 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_102:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_157
# 395 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_103:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_160
# 406 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_104:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_163
# 417 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_105:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_166
# 428 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_106:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_169
# 439 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_107:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_172
# 450 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_108:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_175
# 461 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_109:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_178
# 472 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_110:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_181
# 483 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_111:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_184
# 494 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_112:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_187
# 505 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_113:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_190
# 516 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_114:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_193
# 527 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_115:
# 234 "data/maps/Hub1/scripts.pory"
	setflag FLAG_BULBASAUR_UNLOCKED
# 235 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 236 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 237 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 238 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_28
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_118:
# 245 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHARMANDER_UNLOCKED
# 246 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 247 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 248 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 249 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_121:
# 256 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SQUIRTLE_UNLOCKED
# 257 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 258 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 259 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 260 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_31
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_124:
# 267 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIKORITA_UNLOCKED
# 268 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 269 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 270 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 271 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_32
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_127:
# 278 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CYNDAQUIL_UNLOCKED
# 279 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 280 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 281 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 282 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_33
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_130:
# 289 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TOTODILE_UNLOCKED
# 290 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 291 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 292 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 293 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_34
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_133:
# 300 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TREECKO_UNLOCKED
# 301 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 302 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 303 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 304 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_35
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_136:
# 311 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TORCHIC_UNLOCKED
# 312 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 313 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 314 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 315 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_36
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_139:
# 322 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MUDKIP_UNLOCKED
# 323 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 324 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 325 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 326 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_37
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_142:
# 333 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TURTWIG_UNLOCKED
# 334 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 335 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 336 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 337 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_38
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_145:
# 344 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIMCHAR_UNLOCKED
# 345 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 346 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 347 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 348 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_39
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_148:
# 355 "data/maps/Hub1/scripts.pory"
	setflag FLAG_PIPLUP_UNLOCKED
# 356 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 357 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 358 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 359 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_40
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_151:
# 366 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SNIVY_UNLOCKED
# 367 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 368 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 369 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 370 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_41
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_154:
# 377 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TEPIG_UNLOCKED
# 378 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 379 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 380 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 381 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_42
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_157:
# 388 "data/maps/Hub1/scripts.pory"
	setflag FLAG_OSHAWOTT_UNLOCKED
# 389 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 390 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 391 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 392 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_43
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_160:
# 399 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHESPIN_UNLOCKED
# 400 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 401 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 402 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 403 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_44
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_163:
# 410 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FENNEKIN_UNLOCKED
# 411 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 412 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 413 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 414 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_45
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_166:
# 421 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FROAKIE_UNLOCKED
# 422 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 423 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 424 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 425 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_46
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_169:
# 432 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ROWLET_UNLOCKED
# 433 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 434 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 435 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 436 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_47
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_172:
# 443 "data/maps/Hub1/scripts.pory"
	setflag FLAG_LITTEN_UNLOCKED
# 444 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 445 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 446 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 447 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_48
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_175:
# 454 "data/maps/Hub1/scripts.pory"
	setflag FLAG_POPPLIO_UNLOCKED
# 455 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 456 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 457 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 458 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_49
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_178:
# 465 "data/maps/Hub1/scripts.pory"
	setflag FLAG_GROOKEY_UNLOCKED
# 466 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 467 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 468 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 469 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_50
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_181:
# 476 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SCORBUNNY_UNLOCKED
# 477 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 478 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 479 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 480 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_51
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_184:
# 487 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SOBBLE_UNLOCKED
# 488 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 489 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 490 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 491 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_52
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_187:
# 498 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SPRIGATITO_UNLOCKED
# 499 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 500 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 501 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 502 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_53
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_190:
# 509 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FUECOCO_UNLOCKED
# 510 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 511 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 512 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 513 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_54
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_193:
# 520 "data/maps/Hub1/scripts.pory"
	setflag FLAG_QUAXLY_UNLOCKED
# 521 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 522 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 523 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 524 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_55
	goto Hub_Event_Script_Miltank_85


Hub_Event_Script_Chansey::
# 541 "data/maps/Hub1/scripts.pory"
	lockall
# 542 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 543 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_BULBASAUR_UNLOCKED, Hub_Event_Script_Chansey_3
Hub_Event_Script_Chansey_1:
# 544 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHARMANDER_UNLOCKED, Hub_Event_Script_Chansey_8
Hub_Event_Script_Chansey_6:
# 545 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SQUIRTLE_UNLOCKED, Hub_Event_Script_Chansey_13
Hub_Event_Script_Chansey_11:
# 546 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHIKORITA_UNLOCKED, Hub_Event_Script_Chansey_18
Hub_Event_Script_Chansey_16:
# 547 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CYNDAQUIL_UNLOCKED, Hub_Event_Script_Chansey_23
Hub_Event_Script_Chansey_21:
# 548 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TOTODILE_UNLOCKED, Hub_Event_Script_Chansey_28
Hub_Event_Script_Chansey_26:
# 549 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TREECKO_UNLOCKED, Hub_Event_Script_Chansey_33
Hub_Event_Script_Chansey_31:
# 550 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TORCHIC_UNLOCKED, Hub_Event_Script_Chansey_38
Hub_Event_Script_Chansey_36:
# 551 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_MUDKIP_UNLOCKED, Hub_Event_Script_Chansey_43
Hub_Event_Script_Chansey_41:
# 552 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TURTWIG_UNLOCKED, Hub_Event_Script_Chansey_48
Hub_Event_Script_Chansey_46:
# 553 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHIMCHAR_UNLOCKED, Hub_Event_Script_Chansey_53
Hub_Event_Script_Chansey_51:
# 554 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_PIPLUP_UNLOCKED, Hub_Event_Script_Chansey_58
Hub_Event_Script_Chansey_56:
# 555 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SNIVY_UNLOCKED, Hub_Event_Script_Chansey_63
Hub_Event_Script_Chansey_61:
# 556 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TEPIG_UNLOCKED, Hub_Event_Script_Chansey_68
Hub_Event_Script_Chansey_66:
# 557 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_OSHAWOTT_UNLOCKED, Hub_Event_Script_Chansey_73
Hub_Event_Script_Chansey_71:
# 558 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHESPIN_UNLOCKED, Hub_Event_Script_Chansey_78
Hub_Event_Script_Chansey_76:
# 559 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FENNEKIN_UNLOCKED, Hub_Event_Script_Chansey_83
Hub_Event_Script_Chansey_81:
# 560 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FROAKIE_UNLOCKED, Hub_Event_Script_Chansey_88
Hub_Event_Script_Chansey_86:
# 561 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ROWLET_UNLOCKED, Hub_Event_Script_Chansey_93
Hub_Event_Script_Chansey_91:
# 562 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_LITTEN_UNLOCKED, Hub_Event_Script_Chansey_98
Hub_Event_Script_Chansey_96:
# 563 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_POPPLIO_UNLOCKED, Hub_Event_Script_Chansey_103
Hub_Event_Script_Chansey_101:
# 564 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_GROOKEY_UNLOCKED, Hub_Event_Script_Chansey_108
Hub_Event_Script_Chansey_106:
# 565 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SCORBUNNY_UNLOCKED, Hub_Event_Script_Chansey_113
Hub_Event_Script_Chansey_111:
# 566 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SOBBLE_UNLOCKED, Hub_Event_Script_Chansey_118
Hub_Event_Script_Chansey_116:
# 567 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPRIGATITO_UNLOCKED, Hub_Event_Script_Chansey_123
Hub_Event_Script_Chansey_121:
# 568 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FUECOCO_UNLOCKED, Hub_Event_Script_Chansey_128
Hub_Event_Script_Chansey_126:
# 569 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_QUAXLY_UNLOCKED, Hub_Event_Script_Chansey_133
Hub_Event_Script_Chansey_131:
# 571 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Chansey_136
# 594 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_2
# 595 "data/maps/Hub1/scripts.pory"
	waitmessage
# 596 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Chansey_2:
# 543 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_1, SPECIES_BULBASAUR
# 543 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_1

Hub_Event_Script_Chansey_3:
# 543 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_BULBASAUR
	goto_if_ne Hub_Event_Script_Chansey_2
	goto Hub_Event_Script_Chansey_1

Hub_Event_Script_Chansey_7:
# 544 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_2, SPECIES_CHARMANDER
# 544 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_6

Hub_Event_Script_Chansey_8:
# 544 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHARMANDER
	goto_if_ne Hub_Event_Script_Chansey_7
	goto Hub_Event_Script_Chansey_6

Hub_Event_Script_Chansey_12:
# 545 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_3, SPECIES_SQUIRTLE
# 545 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_11

Hub_Event_Script_Chansey_13:
# 545 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SQUIRTLE
	goto_if_ne Hub_Event_Script_Chansey_12
	goto Hub_Event_Script_Chansey_11

Hub_Event_Script_Chansey_17:
# 546 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_4, SPECIES_CHIKORITA
# 546 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_16

Hub_Event_Script_Chansey_18:
# 546 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHIKORITA
	goto_if_ne Hub_Event_Script_Chansey_17
	goto Hub_Event_Script_Chansey_16

Hub_Event_Script_Chansey_22:
# 547 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_5, SPECIES_CYNDAQUIL
# 547 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_21

Hub_Event_Script_Chansey_23:
# 547 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CYNDAQUIL
	goto_if_ne Hub_Event_Script_Chansey_22
	goto Hub_Event_Script_Chansey_21

Hub_Event_Script_Chansey_27:
# 548 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_6, SPECIES_TOTODILE
# 548 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_26

Hub_Event_Script_Chansey_28:
# 548 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TOTODILE
	goto_if_ne Hub_Event_Script_Chansey_27
	goto Hub_Event_Script_Chansey_26

Hub_Event_Script_Chansey_32:
# 549 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_7, SPECIES_TREECKO
# 549 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_31

Hub_Event_Script_Chansey_33:
# 549 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TREECKO
	goto_if_ne Hub_Event_Script_Chansey_32
	goto Hub_Event_Script_Chansey_31

Hub_Event_Script_Chansey_37:
# 550 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_8, SPECIES_TORCHIC
# 550 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_36

Hub_Event_Script_Chansey_38:
# 550 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TORCHIC
	goto_if_ne Hub_Event_Script_Chansey_37
	goto Hub_Event_Script_Chansey_36

Hub_Event_Script_Chansey_42:
# 551 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_9, SPECIES_MUDKIP
# 551 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_41

Hub_Event_Script_Chansey_43:
# 551 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_MUDKIP
	goto_if_ne Hub_Event_Script_Chansey_42
	goto Hub_Event_Script_Chansey_41

Hub_Event_Script_Chansey_47:
# 552 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_10, SPECIES_TURTWIG
# 552 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_46

Hub_Event_Script_Chansey_48:
# 552 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TURTWIG
	goto_if_ne Hub_Event_Script_Chansey_47
	goto Hub_Event_Script_Chansey_46

Hub_Event_Script_Chansey_52:
# 553 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_11, SPECIES_CHIMCHAR
# 553 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_51

Hub_Event_Script_Chansey_53:
# 553 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHIMCHAR
	goto_if_ne Hub_Event_Script_Chansey_52
	goto Hub_Event_Script_Chansey_51

Hub_Event_Script_Chansey_57:
# 554 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_12, SPECIES_PIPLUP
# 554 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_56

Hub_Event_Script_Chansey_58:
# 554 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_PIPLUP
	goto_if_ne Hub_Event_Script_Chansey_57
	goto Hub_Event_Script_Chansey_56

Hub_Event_Script_Chansey_62:
# 555 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_13, SPECIES_SNIVY
# 555 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_61

Hub_Event_Script_Chansey_63:
# 555 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SNIVY
	goto_if_ne Hub_Event_Script_Chansey_62
	goto Hub_Event_Script_Chansey_61

Hub_Event_Script_Chansey_67:
# 556 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_14, SPECIES_TEPIG
# 556 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_66

Hub_Event_Script_Chansey_68:
# 556 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TEPIG
	goto_if_ne Hub_Event_Script_Chansey_67
	goto Hub_Event_Script_Chansey_66

Hub_Event_Script_Chansey_72:
# 557 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_15, SPECIES_OSHAWOTT
# 557 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_71

Hub_Event_Script_Chansey_73:
# 557 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_OSHAWOTT
	goto_if_ne Hub_Event_Script_Chansey_72
	goto Hub_Event_Script_Chansey_71

Hub_Event_Script_Chansey_77:
# 558 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_16, SPECIES_CHESPIN
# 558 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_76

Hub_Event_Script_Chansey_78:
# 558 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHESPIN
	goto_if_ne Hub_Event_Script_Chansey_77
	goto Hub_Event_Script_Chansey_76

Hub_Event_Script_Chansey_82:
# 559 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_17, SPECIES_FENNEKIN
# 559 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_81

Hub_Event_Script_Chansey_83:
# 559 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FENNEKIN
	goto_if_ne Hub_Event_Script_Chansey_82
	goto Hub_Event_Script_Chansey_81

Hub_Event_Script_Chansey_87:
# 560 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_18, SPECIES_FROAKIE
# 560 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_86

Hub_Event_Script_Chansey_88:
# 560 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FROAKIE
	goto_if_ne Hub_Event_Script_Chansey_87
	goto Hub_Event_Script_Chansey_86

Hub_Event_Script_Chansey_92:
# 561 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_19, SPECIES_ROWLET
# 561 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_91

Hub_Event_Script_Chansey_93:
# 561 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_ROWLET
	goto_if_ne Hub_Event_Script_Chansey_92
	goto Hub_Event_Script_Chansey_91

Hub_Event_Script_Chansey_97:
# 562 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_20, SPECIES_LITTEN
# 562 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_96

Hub_Event_Script_Chansey_98:
# 562 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_LITTEN
	goto_if_ne Hub_Event_Script_Chansey_97
	goto Hub_Event_Script_Chansey_96

Hub_Event_Script_Chansey_102:
# 563 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_21, SPECIES_POPPLIO
# 563 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_101

Hub_Event_Script_Chansey_103:
# 563 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_POPPLIO
	goto_if_ne Hub_Event_Script_Chansey_102
	goto Hub_Event_Script_Chansey_101

Hub_Event_Script_Chansey_107:
# 564 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_22, SPECIES_GROOKEY
# 564 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_106

Hub_Event_Script_Chansey_108:
# 564 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_GROOKEY
	goto_if_ne Hub_Event_Script_Chansey_107
	goto Hub_Event_Script_Chansey_106

Hub_Event_Script_Chansey_112:
# 565 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_23, SPECIES_SCORBUNNY
# 565 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_111

Hub_Event_Script_Chansey_113:
# 565 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SCORBUNNY
	goto_if_ne Hub_Event_Script_Chansey_112
	goto Hub_Event_Script_Chansey_111

Hub_Event_Script_Chansey_117:
# 566 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_24, SPECIES_SOBBLE
# 566 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_116

Hub_Event_Script_Chansey_118:
# 566 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SOBBLE
	goto_if_ne Hub_Event_Script_Chansey_117
	goto Hub_Event_Script_Chansey_116

Hub_Event_Script_Chansey_122:
# 567 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_25, SPECIES_SPRIGATITO
# 567 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_121

Hub_Event_Script_Chansey_123:
# 567 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SPRIGATITO
	goto_if_ne Hub_Event_Script_Chansey_122
	goto Hub_Event_Script_Chansey_121

Hub_Event_Script_Chansey_127:
# 568 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_26, SPECIES_FUECOCO
# 568 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_126

Hub_Event_Script_Chansey_128:
# 568 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FUECOCO
	goto_if_ne Hub_Event_Script_Chansey_127
	goto Hub_Event_Script_Chansey_126

Hub_Event_Script_Chansey_132:
# 569 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_27, SPECIES_QUAXLY
# 569 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_131

Hub_Event_Script_Chansey_133:
# 569 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_QUAXLY
	goto_if_ne Hub_Event_Script_Chansey_132
	goto Hub_Event_Script_Chansey_131

Hub_Event_Script_Chansey_136:
# 572 "data/maps/Hub1/scripts.pory"
	setvar VAR_RESULT, 0
# 573 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_0
# 574 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 576 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_ne Hub_Event_Script_Chansey_139
# 591 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Chansey_139:
# 577 "data/maps/Hub1/scripts.pory"
	copyvar VAR_STARTER_MON, VAR_RESULT
# 578 "data/maps/Hub1/scripts.pory"
	special ZeroPlayerPartyMons
# 579 "data/maps/Hub1/scripts.pory"
	special GiveSavedStarter
# 580 "data/maps/Hub1/scripts.pory"
	special UpdatePlayerSprite
# 581 "data/maps/Hub1/scripts.pory"
	special UpdateTransformedPlayerPalette
# 582 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 583 "data/maps/Hub1/scripts.pory"
	releaseall
# 584 "data/maps/Hub1/scripts.pory"
	lockall
# 585 "data/maps/Hub1/scripts.pory"
	playse SE_SUCCESS
# 586 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_1
# 587 "data/maps/Hub1/scripts.pory"
	waitmessage
# 588 "data/maps/Hub1/scripts.pory"
	releaseall
	return


Hub_Event_Script_Kecleon::
# 600 "data/maps/Hub1/scripts.pory"
	lockall
# 601 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 602 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_0
# 603 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_1, Hub_Event_Script_Kecleon_2
# 606 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_2, Hub_Event_Script_Kecleon_3
# 609 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_3, Hub_Event_Script_Kecleon_4
# 612 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_4, Hub_Event_Script_Kecleon_5
# 615 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_5, Hub_Event_Script_Kecleon_6
# 618 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_6, Hub_Event_Script_Kecleon_7
# 621 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_7, Hub_Event_Script_Kecleon_8
# 624 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_8, Hub_Event_Script_Kecleon_9
Hub_Event_Script_Kecleon_1:
# 628 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_1, Hub_Event_Script_Kecleon_19
# 631 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_2, Hub_Event_Script_Kecleon_20
# 634 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_3, Hub_Event_Script_Kecleon_21
# 637 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_4, Hub_Event_Script_Kecleon_22
# 640 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_5, Hub_Event_Script_Kecleon_23
Hub_Event_Script_Kecleon_18:
# 645 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Kecleon_30
# 811 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_14
# 812 "data/maps/Hub1/scripts.pory"
	waitmessage
# 813 "data/maps/Hub1/scripts.pory"
	releaseall
Hub_Event_Script_Kecleon_29:
# 815 "data/maps/Hub1/scripts.pory"
	hidemoneybox
# 816 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Kecleon_2:
# 604 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_1, ITEM_MEMORY_MUSHROOM
# 605 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_3:
# 607 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_2, ITEM_MEMORY_MUSHROOM
# 608 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_4:
# 610 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_3, ITEM_MEMORY_MUSHROOM
# 611 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_5:
# 613 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_4, ITEM_MEMORY_MUSHROOM
# 614 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_6:
# 616 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_5, ITEM_MEMORY_MUSHROOM
# 617 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_7:
# 619 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_6, ITEM_MEMORY_MUSHROOM
# 620 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_8:
# 622 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_7, ITEM_MEMORY_MUSHROOM
# 623 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_9:
# 625 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_8, ITEM_MEMORY_MUSHROOM
# 626 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_19:
# 629 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_9, ITEM_RARE_CANDY
# 630 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_18

Hub_Event_Script_Kecleon_20:
# 632 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_10, ITEM_RARE_CANDY
# 633 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_18

Hub_Event_Script_Kecleon_21:
# 635 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_10, ITEM_RARE_CANDY
# 636 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_18

Hub_Event_Script_Kecleon_22:
# 638 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_10, ITEM_RARE_CANDY
# 639 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_18

Hub_Event_Script_Kecleon_23:
# 641 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_10, ITEM_RARE_CANDY
# 642 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_18

Hub_Event_Script_Kecleon_30:
# 646 "data/maps/Hub1/scripts.pory"
	showmoneybox 17, 10
# 647 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 648 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 649 "data/maps/Hub1/scripts.pory"
	case ITEM_MEMORY_MUSHROOM, Hub_Event_Script_Kecleon_34
# 747 "data/maps/Hub1/scripts.pory"
	case ITEM_RARE_CANDY, Hub_Event_Script_Kecleon_35
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_34:
# 650 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_1, Hub_Event_Script_Kecleon_36
# 662 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_2, Hub_Event_Script_Kecleon_37
# 674 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_3, Hub_Event_Script_Kecleon_38
# 686 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_4, Hub_Event_Script_Kecleon_39
# 698 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_5, Hub_Event_Script_Kecleon_40
# 710 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_6, Hub_Event_Script_Kecleon_41
# 722 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_7, Hub_Event_Script_Kecleon_42
# 734 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_8, Hub_Event_Script_Kecleon_43
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_35:
# 748 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_1, Hub_Event_Script_Kecleon_52
# 760 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_2, Hub_Event_Script_Kecleon_53
# 772 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_3, Hub_Event_Script_Kecleon_54
# 784 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_4, Hub_Event_Script_Kecleon_55
# 796 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_5, Hub_Event_Script_Kecleon_56
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_36:
	checkmoney 2000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_62
# 660 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_12
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_37:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_65
# 672 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_12
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_38:
	checkmoney 20000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_68
# 684 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_12
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_39:
	checkmoney 30000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_71
# 696 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_12
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_40:
	checkmoney 40000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_74
# 708 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_12
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_41:
	checkmoney 50000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_77
# 720 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_12
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_42:
	checkmoney 80000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_80
# 732 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_12
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_43:
	checkmoney 100000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_83
# 744 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_12
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_52:
	checkmoney 30000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_86
# 758 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_12
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_53:
	checkmoney 9999999
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_89
# 770 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_12
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_54:
	checkmoney 9999999
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_92
# 782 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_12
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_55:
	checkmoney 9999999
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_95
# 794 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_12
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_56:
	checkmoney 9999999
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_98
# 806 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_12
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_62:
# 652 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MEMORY_MUSHROOM_UNLOCKED_1
# 653 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 1
# 654 "data/maps/Hub1/scripts.pory"
	removemoney 2000
# 655 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 656 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 657 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_11
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_65:
# 664 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MEMORY_MUSHROOM_UNLOCKED_2
# 665 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 1
# 666 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 667 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 668 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 669 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_11
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_68:
# 676 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MEMORY_MUSHROOM_UNLOCKED_3
# 677 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 1
# 678 "data/maps/Hub1/scripts.pory"
	removemoney 20000
# 679 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 680 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 681 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_11
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_71:
# 688 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MEMORY_MUSHROOM_UNLOCKED_4
# 689 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 1
# 690 "data/maps/Hub1/scripts.pory"
	removemoney 30000
# 691 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 692 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 693 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_11
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_74:
# 700 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MEMORY_MUSHROOM_UNLOCKED_5
# 701 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 1
# 702 "data/maps/Hub1/scripts.pory"
	removemoney 40000
# 703 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 704 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 705 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_11
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_77:
# 712 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MEMORY_MUSHROOM_UNLOCKED_6
# 713 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 1
# 714 "data/maps/Hub1/scripts.pory"
	removemoney 50000
# 715 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 716 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 717 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_11
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_80:
# 724 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MEMORY_MUSHROOM_UNLOCKED_7
# 725 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 1
# 726 "data/maps/Hub1/scripts.pory"
	removemoney 80000
# 727 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 728 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 729 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_11
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_83:
# 736 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MEMORY_MUSHROOM_UNLOCKED_8
# 737 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 1
# 738 "data/maps/Hub1/scripts.pory"
	removemoney 100000
# 739 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 740 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 741 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_11
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_86:
# 750 "data/maps/Hub1/scripts.pory"
	setflag FLAG_RARE_CANDY_UNLOCKED_1
# 751 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 752 "data/maps/Hub1/scripts.pory"
	removemoney 30000
# 753 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 754 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 755 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_13
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_89:
# 762 "data/maps/Hub1/scripts.pory"
	setflag FLAG_RARE_CANDY_UNLOCKED_2
# 763 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 764 "data/maps/Hub1/scripts.pory"
	removemoney 9999999
# 765 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 766 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 767 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_13
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_92:
# 774 "data/maps/Hub1/scripts.pory"
	setflag FLAG_RARE_CANDY_UNLOCKED_3
# 775 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 776 "data/maps/Hub1/scripts.pory"
	removemoney 9999999
# 777 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 778 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 779 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_13
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_95:
# 786 "data/maps/Hub1/scripts.pory"
	setflag FLAG_RARE_CANDY_UNLOCKED_4
# 787 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 788 "data/maps/Hub1/scripts.pory"
	removemoney 9999999
# 789 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 790 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 791 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_13
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_98:
# 798 "data/maps/Hub1/scripts.pory"
	setflag FLAG_RARE_CANDY_UNLOCKED_5
# 799 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 800 "data/maps/Hub1/scripts.pory"
	removemoney 9999999
# 801 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 802 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 803 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_13
	goto Hub_Event_Script_Kecleon_29


HUB1_ONFRAME_Text_0:
# 26 "data/maps/Hub1/scripts.pory"
	.string "Welcome to Pokemon Path!\pTo start a run, talk to\nProfessor Birch up ahead.\pNow choose a pokemon to\nstart your adventure with.$"

HUB1_ONFRAME_Text_1:
# 29 "data/maps/Hub1/scripts.pory"
	.string "Bulbasaur$"

HUB1_ONFRAME_Text_2:
# 30 "data/maps/Hub1/scripts.pory"
	.string "Charmander$"

HUB1_ONFRAME_Text_3:
# 31 "data/maps/Hub1/scripts.pory"
	.string "Squirtle$"

HUB1_ONFRAME_Text_4:
# 32 "data/maps/Hub1/scripts.pory"
	.string "Chikorita$"

HUB1_ONFRAME_Text_5:
# 33 "data/maps/Hub1/scripts.pory"
	.string "Cyndaquil$"

HUB1_ONFRAME_Text_6:
# 34 "data/maps/Hub1/scripts.pory"
	.string "Totodile$"

HUB1_ONFRAME_Text_7:
# 35 "data/maps/Hub1/scripts.pory"
	.string "Treecko$"

HUB1_ONFRAME_Text_8:
# 36 "data/maps/Hub1/scripts.pory"
	.string "Torchic$"

HUB1_ONFRAME_Text_9:
# 37 "data/maps/Hub1/scripts.pory"
	.string "Mudkip$"

HUB1_ONFRAME_Text_10:
# 38 "data/maps/Hub1/scripts.pory"
	.string "Turtwig$"

HUB1_ONFRAME_Text_11:
# 39 "data/maps/Hub1/scripts.pory"
	.string "Chimchar$"

HUB1_ONFRAME_Text_12:
# 40 "data/maps/Hub1/scripts.pory"
	.string "Piplup$"

HUB1_ONFRAME_Text_13:
# 41 "data/maps/Hub1/scripts.pory"
	.string "Snivy$"

HUB1_ONFRAME_Text_14:
# 42 "data/maps/Hub1/scripts.pory"
	.string "Tepig$"

HUB1_ONFRAME_Text_15:
# 43 "data/maps/Hub1/scripts.pory"
	.string "Oshawott$"

HUB1_ONFRAME_Text_16:
# 44 "data/maps/Hub1/scripts.pory"
	.string "Chespin$"

HUB1_ONFRAME_Text_17:
# 45 "data/maps/Hub1/scripts.pory"
	.string "Fennekin$"

HUB1_ONFRAME_Text_18:
# 46 "data/maps/Hub1/scripts.pory"
	.string "Froakie$"

HUB1_ONFRAME_Text_19:
# 47 "data/maps/Hub1/scripts.pory"
	.string "Rowlet$"

HUB1_ONFRAME_Text_20:
# 48 "data/maps/Hub1/scripts.pory"
	.string "Litten$"

HUB1_ONFRAME_Text_21:
# 49 "data/maps/Hub1/scripts.pory"
	.string "Popplio$"

HUB1_ONFRAME_Text_22:
# 50 "data/maps/Hub1/scripts.pory"
	.string "Grookey$"

HUB1_ONFRAME_Text_23:
# 51 "data/maps/Hub1/scripts.pory"
	.string "Scorbunny$"

HUB1_ONFRAME_Text_24:
# 52 "data/maps/Hub1/scripts.pory"
	.string "Sobble$"

HUB1_ONFRAME_Text_25:
# 53 "data/maps/Hub1/scripts.pory"
	.string "Sprigatito$"

HUB1_ONFRAME_Text_26:
# 54 "data/maps/Hub1/scripts.pory"
	.string "Fuecoco$"

HUB1_ONFRAME_Text_27:
# 55 "data/maps/Hub1/scripts.pory"
	.string "Quaxly$"

HUB1_ONFRAME_Text_28:
# 173 "data/maps/Hub1/scripts.pory"
	.string "Use this item to level up your\nPokemon.$"

Hub_Event_Script_Birch_Text_0:
# 182 "data/maps/Hub1/scripts.pory"
	.string "Would you like to start a run?$"

Hub_Event_Script_Birch_Text_1:
# 185 "data/maps/Hub1/scripts.pory"
	.string "Alright then! Here we go!$"

Hub_Event_Script_Birch_Text_2:
# 188 "data/maps/Hub1/scripts.pory"
	.string "Okay! Let me know when you're ready.$"

Hub_Event_Script_Miltank_Text_0:
# 197 "data/maps/Hub1/scripts.pory"
	.string "Bulbasaur (¥5000)$"

Hub_Event_Script_Miltank_Text_1:
# 198 "data/maps/Hub1/scripts.pory"
	.string "Charmander (¥5000)$"

Hub_Event_Script_Miltank_Text_2:
# 199 "data/maps/Hub1/scripts.pory"
	.string "Squirtle (¥5000)$"

Hub_Event_Script_Miltank_Text_3:
# 200 "data/maps/Hub1/scripts.pory"
	.string "Chikorita (¥5000)$"

Hub_Event_Script_Miltank_Text_4:
# 201 "data/maps/Hub1/scripts.pory"
	.string "Cyndaquil (¥5000)$"

Hub_Event_Script_Miltank_Text_5:
# 202 "data/maps/Hub1/scripts.pory"
	.string "Totodile (¥5000)$"

Hub_Event_Script_Miltank_Text_6:
# 203 "data/maps/Hub1/scripts.pory"
	.string "Treecko (¥5000)$"

Hub_Event_Script_Miltank_Text_7:
# 204 "data/maps/Hub1/scripts.pory"
	.string "Torchic (¥5000)$"

Hub_Event_Script_Miltank_Text_8:
# 205 "data/maps/Hub1/scripts.pory"
	.string "Mudkip (¥5000)$"

Hub_Event_Script_Miltank_Text_9:
# 206 "data/maps/Hub1/scripts.pory"
	.string "Turtwig (¥5000)$"

Hub_Event_Script_Miltank_Text_10:
# 207 "data/maps/Hub1/scripts.pory"
	.string "Chimchar (¥5000)$"

Hub_Event_Script_Miltank_Text_11:
# 208 "data/maps/Hub1/scripts.pory"
	.string "Piplup (¥5000)$"

Hub_Event_Script_Miltank_Text_12:
# 209 "data/maps/Hub1/scripts.pory"
	.string "Snivy (¥5000)$"

Hub_Event_Script_Miltank_Text_13:
# 210 "data/maps/Hub1/scripts.pory"
	.string "Tepig (¥5000)$"

Hub_Event_Script_Miltank_Text_14:
# 211 "data/maps/Hub1/scripts.pory"
	.string "Oshawott (¥5000)$"

Hub_Event_Script_Miltank_Text_15:
# 212 "data/maps/Hub1/scripts.pory"
	.string "Chespin (¥5000)$"

Hub_Event_Script_Miltank_Text_16:
# 213 "data/maps/Hub1/scripts.pory"
	.string "Fennekin (¥5000)$"

Hub_Event_Script_Miltank_Text_17:
# 214 "data/maps/Hub1/scripts.pory"
	.string "Froakie (¥5000)$"

Hub_Event_Script_Miltank_Text_18:
# 215 "data/maps/Hub1/scripts.pory"
	.string "Rowlet (¥5000)$"

Hub_Event_Script_Miltank_Text_19:
# 216 "data/maps/Hub1/scripts.pory"
	.string "Litten (¥5000)$"

Hub_Event_Script_Miltank_Text_20:
# 217 "data/maps/Hub1/scripts.pory"
	.string "Popplio (¥5000)$"

Hub_Event_Script_Miltank_Text_21:
# 218 "data/maps/Hub1/scripts.pory"
	.string "Grookey (¥5000)$"

Hub_Event_Script_Miltank_Text_22:
# 219 "data/maps/Hub1/scripts.pory"
	.string "Scorbunny (¥5000)$"

Hub_Event_Script_Miltank_Text_23:
# 220 "data/maps/Hub1/scripts.pory"
	.string "Sobble (¥5000)$"

Hub_Event_Script_Miltank_Text_24:
# 221 "data/maps/Hub1/scripts.pory"
	.string "Sprigatito (¥5000)$"

Hub_Event_Script_Miltank_Text_25:
# 222 "data/maps/Hub1/scripts.pory"
	.string "Fuecoco (¥5000)$"

Hub_Event_Script_Miltank_Text_26:
# 223 "data/maps/Hub1/scripts.pory"
	.string "Quaxly (¥5000)$"

Hub_Event_Script_Miltank_Text_27:
# 227 "data/maps/Hub1/scripts.pory"
	.string "Would you like to adopt a pokemon?$"

Hub_Event_Script_Miltank_Text_28:
# 238 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Bulbasaur as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_29:
# 241 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry. You don't have the money to\nadopt that pokemon.$"

Hub_Event_Script_Miltank_Text_30:
# 249 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Charmander as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_31:
# 260 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Squirtle as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_32:
# 271 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chikorita as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_33:
# 282 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Cyndaquil as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_34:
# 293 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Totodile as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_35:
# 304 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Treecko as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_36:
# 315 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Torchic as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_37:
# 326 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Mudkip as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_38:
# 337 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Turtwig as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_39:
# 348 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chimchar as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_40:
# 359 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Piplup as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_41:
# 370 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Snivy as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_42:
# 381 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Tepig as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_43:
# 392 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Oshawott as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_44:
# 403 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chespin as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_45:
# 414 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Fennekin as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_46:
# 425 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Froakie as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_47:
# 436 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Rowlet as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_48:
# 447 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Litten as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_49:
# 458 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Popplio as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_50:
# 469 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Grookey as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_51:
# 480 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Scorbunny as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_52:
# 491 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Sobble as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_53:
# 502 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Sprigatito as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_54:
# 513 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Fuecoco as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_55:
# 524 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Quaxly as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_56:
# 533 "data/maps/Hub1/scripts.pory"
	.string "You have no more starters left\nto adopt!$"

Hub_Event_Script_Chansey_Text_0:
# 573 "data/maps/Hub1/scripts.pory"
	.string "Would you like to change your starter?$"

Hub_Event_Script_Chansey_Text_1:
# 586 "data/maps/Hub1/scripts.pory"
	.string "There you go!$"

Hub_Event_Script_Chansey_Text_2:
# 594 "data/maps/Hub1/scripts.pory"
	.string "You don't have any starter pokemon yet.\pPlease consider adopting some pokemon\nfrom my friend Miltank to the right.$"

Hub_Event_Script_Kecleon_Text_0:
# 602 "data/maps/Hub1/scripts.pory"
	.string "Would you like to buy a starter item?$"

Hub_Event_Script_Kecleon_Text_1:
# 604 "data/maps/Hub1/scripts.pory"
	.string "Memory Mushroom (¥2000)$"

Hub_Event_Script_Kecleon_Text_2:
# 607 "data/maps/Hub1/scripts.pory"
	.string "Memory Mushroom (¥10000)$"

Hub_Event_Script_Kecleon_Text_3:
# 610 "data/maps/Hub1/scripts.pory"
	.string "Memory Mushroom (¥20000)$"

Hub_Event_Script_Kecleon_Text_4:
# 613 "data/maps/Hub1/scripts.pory"
	.string "Memory Mushroom (¥30000)$"

Hub_Event_Script_Kecleon_Text_5:
# 616 "data/maps/Hub1/scripts.pory"
	.string "Memory Mushroom (¥40000)$"

Hub_Event_Script_Kecleon_Text_6:
# 619 "data/maps/Hub1/scripts.pory"
	.string "Memory Mushroom (¥50000)$"

Hub_Event_Script_Kecleon_Text_7:
# 622 "data/maps/Hub1/scripts.pory"
	.string "Memory Mushroom (¥80000)$"

Hub_Event_Script_Kecleon_Text_8:
# 625 "data/maps/Hub1/scripts.pory"
	.string "Memory Mushroom (¥100000)$"

Hub_Event_Script_Kecleon_Text_9:
# 629 "data/maps/Hub1/scripts.pory"
	.string "Rare Candy (¥30000)$"

Hub_Event_Script_Kecleon_Text_10:
# 632 "data/maps/Hub1/scripts.pory"
	.string "Rare Candy (¥9999999)$"

Hub_Event_Script_Kecleon_Text_11:
# 657 "data/maps/Hub1/scripts.pory"
	.string "You got a Memory Mushroom as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_12:
# 660 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry. You don't have the money to\nbuy that item, kec.$"

Hub_Event_Script_Kecleon_Text_13:
# 755 "data/maps/Hub1/scripts.pory"
	.string "You got a Rare Candy as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_14:
# 811 "data/maps/Hub1/scripts.pory"
	.string "You don't have anything left\nto puchase right now. Thank you for\lyour consistent patronage!\p$"
