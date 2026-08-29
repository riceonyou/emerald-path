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


AfterWarpIntoNewAct::
# 7 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_WARPED_INTO_NEW_ACT, AfterWarpIntoNewAct_1
	return

AfterWarpIntoNewAct_1:
# 8 "data/maps/Hub1/scripts.pory"
	setflag FLAG_WARPED_INTO_NEW_ACT
# 11 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_PHIONE_EGG_HATCHED, AfterWarpIntoNewAct_3
	return

AfterWarpIntoNewAct_3:
# 12 "data/maps/Hub1/scripts.pory"
	removeitem ITEM_PHIONE_EGG_CHARM, 1
# 13 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_PHIONE, 42
# 14 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_EVOLVED
# 15 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_PHIONE_EGG_HATCHED
# 16 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_0
	return


HUB1_Run_Stats_Sign::
# 23 "data/maps/Hub1/scripts.pory"
	lockall
# 25 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TOTAL_RUNS
# 26 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_ACT1_WINS
# 27 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_ACT2_WINS
# 28 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_Run_Stats_Sign_Text_0
# 29 "data/maps/Hub1/scripts.pory"
	waitmessage
# 31 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_ACT3_WINS
# 32 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_ACT4_WINS
# 33 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_ACT2_WINS
# 34 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_Run_Stats_Sign_Text_1
# 35 "data/maps/Hub1/scripts.pory"
	waitmessage
# 37 "data/maps/Hub1/scripts.pory"
	releaseall
	return


HUB1_ONWARP::
# 41 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


HUB1_ONFRAME::
# 45 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_2, 1
# 48 "data/maps/Hub1/scripts.pory"
	setvar VAR_CURRENT_ACT, 0
# 51 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SYS_NEW_GAME, HUB1_ONFRAME_1
	return

HUB1_ONFRAME_1:
# 52 "data/maps/Hub1/scripts.pory"
	lockall
# 55 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SYS_NEW_GAME
# 56 "data/maps/Hub1/scripts.pory"
	setvar VAR_SHINY_RATE, 4096
# 59 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_ONFRAME_Text_0
# 62 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_1, SPECIES_BULBASAUR
# 63 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_2, SPECIES_CHARMANDER
# 64 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_3, SPECIES_SQUIRTLE
# 65 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_4, SPECIES_CHIKORITA
# 66 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_5, SPECIES_CYNDAQUIL
# 67 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_6, SPECIES_TOTODILE
# 68 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_7, SPECIES_TREECKO
# 69 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_8, SPECIES_TORCHIC
# 70 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_9, SPECIES_MUDKIP
# 71 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_10, SPECIES_TURTWIG
# 72 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_11, SPECIES_CHIMCHAR
# 73 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_12, SPECIES_PIPLUP
# 74 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_13, SPECIES_SNIVY
# 75 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_14, SPECIES_TEPIG
# 76 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_15, SPECIES_OSHAWOTT
# 77 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_16, SPECIES_CHESPIN
# 78 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_17, SPECIES_FENNEKIN
# 79 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_18, SPECIES_FROAKIE
# 80 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_19, SPECIES_ROWLET
# 81 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_20, SPECIES_LITTEN
# 82 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_21, SPECIES_POPPLIO
# 83 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_22, SPECIES_GROOKEY
# 84 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_23, SPECIES_SCORBUNNY
# 85 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_24, SPECIES_SOBBLE
# 86 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_25, SPECIES_SPRIGATITO
# 87 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_26, SPECIES_FUECOCO
# 88 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_27, SPECIES_QUAXLY
# 89 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 91 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 92 "data/maps/Hub1/scripts.pory"
	case SPECIES_BULBASAUR, HUB1_ONFRAME_5
# 96 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHARMANDER, HUB1_ONFRAME_6
# 100 "data/maps/Hub1/scripts.pory"
	case SPECIES_SQUIRTLE, HUB1_ONFRAME_7
# 104 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIKORITA, HUB1_ONFRAME_8
# 108 "data/maps/Hub1/scripts.pory"
	case SPECIES_CYNDAQUIL, HUB1_ONFRAME_9
# 112 "data/maps/Hub1/scripts.pory"
	case SPECIES_TOTODILE, HUB1_ONFRAME_10
# 116 "data/maps/Hub1/scripts.pory"
	case SPECIES_TREECKO, HUB1_ONFRAME_11
# 120 "data/maps/Hub1/scripts.pory"
	case SPECIES_TORCHIC, HUB1_ONFRAME_12
# 124 "data/maps/Hub1/scripts.pory"
	case SPECIES_MUDKIP, HUB1_ONFRAME_13
# 128 "data/maps/Hub1/scripts.pory"
	case SPECIES_TURTWIG, HUB1_ONFRAME_14
# 132 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIMCHAR, HUB1_ONFRAME_15
# 136 "data/maps/Hub1/scripts.pory"
	case SPECIES_PIPLUP, HUB1_ONFRAME_16
# 140 "data/maps/Hub1/scripts.pory"
	case SPECIES_SNIVY, HUB1_ONFRAME_17
# 144 "data/maps/Hub1/scripts.pory"
	case SPECIES_TEPIG, HUB1_ONFRAME_18
# 148 "data/maps/Hub1/scripts.pory"
	case SPECIES_OSHAWOTT, HUB1_ONFRAME_19
# 152 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHESPIN, HUB1_ONFRAME_20
# 156 "data/maps/Hub1/scripts.pory"
	case SPECIES_FENNEKIN, HUB1_ONFRAME_21
# 160 "data/maps/Hub1/scripts.pory"
	case SPECIES_FROAKIE, HUB1_ONFRAME_22
# 164 "data/maps/Hub1/scripts.pory"
	case SPECIES_ROWLET, HUB1_ONFRAME_23
# 168 "data/maps/Hub1/scripts.pory"
	case SPECIES_LITTEN, HUB1_ONFRAME_24
# 172 "data/maps/Hub1/scripts.pory"
	case SPECIES_POPPLIO, HUB1_ONFRAME_25
# 176 "data/maps/Hub1/scripts.pory"
	case SPECIES_GROOKEY, HUB1_ONFRAME_26
# 180 "data/maps/Hub1/scripts.pory"
	case SPECIES_SCORBUNNY, HUB1_ONFRAME_27
# 184 "data/maps/Hub1/scripts.pory"
	case SPECIES_SOBBLE, HUB1_ONFRAME_28
# 188 "data/maps/Hub1/scripts.pory"
	case SPECIES_SPRIGATITO, HUB1_ONFRAME_29
# 192 "data/maps/Hub1/scripts.pory"
	case SPECIES_FUECOCO, HUB1_ONFRAME_30
# 196 "data/maps/Hub1/scripts.pory"
	case SPECIES_QUAXLY, HUB1_ONFRAME_31
HUB1_ONFRAME_3:
# 201 "data/maps/Hub1/scripts.pory"
	special UpdatePlayerSprite
# 202 "data/maps/Hub1/scripts.pory"
	special UpdateTransformedPlayerPalette
# 203 "data/maps/Hub1/scripts.pory"
	releaseall
# 205 "data/maps/Hub1/scripts.pory"
	lockall
# 206 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_ONFRAME_Text_28
# 207 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CANDY_JAR
# 209 "data/maps/Hub1/scripts.pory"
	releaseall
	return

HUB1_ONFRAME_5:
# 93 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_BULBASAUR, 14
# 94 "data/maps/Hub1/scripts.pory"
	setflag FLAG_BULBASAUR_UNLOCKED
# 95 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_BULBASAUR
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_6:
# 97 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHARMANDER, 14
# 98 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHARMANDER_UNLOCKED
# 99 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHARMANDER
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_7:
# 101 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SQUIRTLE, 14
# 102 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SQUIRTLE_UNLOCKED
# 103 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SQUIRTLE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_8:
# 105 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHIKORITA, 14
# 106 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIKORITA_UNLOCKED
# 107 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHIKORITA
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_9:
# 109 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 14
# 110 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CYNDAQUIL_UNLOCKED
# 111 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CYNDAQUIL
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_10:
# 113 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TOTODILE, 14
# 114 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TOTODILE_UNLOCKED
# 115 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TOTODILE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_11:
# 117 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TREECKO, 14
# 118 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TREECKO_UNLOCKED
# 119 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TREECKO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_12:
# 121 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TORCHIC, 14
# 122 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TORCHIC_UNLOCKED
# 123 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TORCHIC
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_13:
# 125 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_MUDKIP, 14
# 126 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MUDKIP_UNLOCKED
# 127 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_MUDKIP
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_14:
# 129 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TURTWIG, 14
# 130 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TURTWIG_UNLOCKED
# 131 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TURTWIG
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_15:
# 133 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHIMCHAR, 14
# 134 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIMCHAR_UNLOCKED
# 135 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHIMCHAR
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_16:
# 137 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_PIPLUP, 14
# 138 "data/maps/Hub1/scripts.pory"
	setflag FLAG_PIPLUP_UNLOCKED
# 139 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_PIPLUP
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_17:
# 141 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SNIVY, 14
# 142 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SNIVY_UNLOCKED
# 143 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SNIVY
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_18:
# 145 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TEPIG, 14
# 146 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TEPIG_UNLOCKED
# 147 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TEPIG
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_19:
# 149 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_OSHAWOTT, 14
# 150 "data/maps/Hub1/scripts.pory"
	setflag FLAG_OSHAWOTT_UNLOCKED
# 151 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_OSHAWOTT
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_20:
# 153 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHESPIN, 14
# 154 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHESPIN_UNLOCKED
# 155 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHESPIN
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_21:
# 157 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FENNEKIN, 14
# 158 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FENNEKIN_UNLOCKED
# 159 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_FENNEKIN
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_22:
# 161 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FROAKIE, 14
# 162 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FROAKIE_UNLOCKED
# 163 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_FROAKIE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_23:
# 165 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_ROWLET, 14
# 166 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ROWLET_UNLOCKED
# 167 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_ROWLET
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_24:
# 169 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_LITTEN, 14
# 170 "data/maps/Hub1/scripts.pory"
	setflag FLAG_LITTEN_UNLOCKED
# 171 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_LITTEN
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_25:
# 173 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_POPPLIO, 14
# 174 "data/maps/Hub1/scripts.pory"
	setflag FLAG_POPPLIO_UNLOCKED
# 175 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_POPPLIO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_26:
# 177 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_GROOKEY, 14
# 178 "data/maps/Hub1/scripts.pory"
	setflag FLAG_GROOKEY_UNLOCKED
# 179 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_GROOKEY
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_27:
# 181 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SCORBUNNY, 14
# 182 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SCORBUNNY_UNLOCKED
# 183 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SCORBUNNY
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_28:
# 185 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SOBBLE, 14
# 186 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SOBBLE_UNLOCKED
# 187 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SOBBLE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_29:
# 189 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SPRIGATITO, 14
# 190 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SPRIGATITO_UNLOCKED
# 191 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SPRIGATITO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_30:
# 193 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FUECOCO, 14
# 194 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FUECOCO_UNLOCKED
# 195 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_FUECOCO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_31:
# 197 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_QUAXLY, 14
# 198 "data/maps/Hub1/scripts.pory"
	setflag FLAG_QUAXLY_UNLOCKED
# 199 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_QUAXLY
	goto HUB1_ONFRAME_3


Hub_Event_Script_Birch::
# 214 "data/maps/Hub1/scripts.pory"
	lockall
# 215 "data/maps/Hub1/scripts.pory"
	faceplayer
# 216 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_0, MSGBOX_YESNO
# 217 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 218 "data/maps/Hub1/scripts.pory"
	case YES, Hub_Event_Script_Birch_2
# 221 "data/maps/Hub1/scripts.pory"
	case NO, Hub_Event_Script_Birch_3
	return

Hub_Event_Script_Birch_2:
# 219 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_1
# 220 "data/maps/Hub1/scripts.pory"
	special WarpToNextAct
	return

Hub_Event_Script_Birch_3:
# 222 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_2
# 223 "data/maps/Hub1/scripts.pory"
	releaseall
	return


Hub_Event_Script_Miltank::
# 228 "data/maps/Hub1/scripts.pory"
	lockall
# 229 "data/maps/Hub1/scripts.pory"
	faceplayer
# 230 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 232 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_BULBASAUR_UNLOCKED, Hub_Event_Script_Miltank_2
Hub_Event_Script_Miltank_1:
# 233 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHARMANDER_UNLOCKED, Hub_Event_Script_Miltank_5
Hub_Event_Script_Miltank_4:
# 234 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SQUIRTLE_UNLOCKED, Hub_Event_Script_Miltank_8
Hub_Event_Script_Miltank_7:
# 235 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHIKORITA_UNLOCKED, Hub_Event_Script_Miltank_11
Hub_Event_Script_Miltank_10:
# 236 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CYNDAQUIL_UNLOCKED, Hub_Event_Script_Miltank_14
Hub_Event_Script_Miltank_13:
# 237 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TOTODILE_UNLOCKED, Hub_Event_Script_Miltank_17
Hub_Event_Script_Miltank_16:
# 238 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TREECKO_UNLOCKED, Hub_Event_Script_Miltank_20
Hub_Event_Script_Miltank_19:
# 239 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TORCHIC_UNLOCKED, Hub_Event_Script_Miltank_23
Hub_Event_Script_Miltank_22:
# 240 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MUDKIP_UNLOCKED, Hub_Event_Script_Miltank_26
Hub_Event_Script_Miltank_25:
# 241 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TURTWIG_UNLOCKED, Hub_Event_Script_Miltank_29
Hub_Event_Script_Miltank_28:
# 242 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHIMCHAR_UNLOCKED, Hub_Event_Script_Miltank_32
Hub_Event_Script_Miltank_31:
# 243 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_PIPLUP_UNLOCKED, Hub_Event_Script_Miltank_35
Hub_Event_Script_Miltank_34:
# 244 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SNIVY_UNLOCKED, Hub_Event_Script_Miltank_38
Hub_Event_Script_Miltank_37:
# 245 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TEPIG_UNLOCKED, Hub_Event_Script_Miltank_41
Hub_Event_Script_Miltank_40:
# 246 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_OSHAWOTT_UNLOCKED, Hub_Event_Script_Miltank_44
Hub_Event_Script_Miltank_43:
# 247 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHESPIN_UNLOCKED, Hub_Event_Script_Miltank_47
Hub_Event_Script_Miltank_46:
# 248 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FENNEKIN_UNLOCKED, Hub_Event_Script_Miltank_50
Hub_Event_Script_Miltank_49:
# 249 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FROAKIE_UNLOCKED, Hub_Event_Script_Miltank_53
Hub_Event_Script_Miltank_52:
# 250 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ROWLET_UNLOCKED, Hub_Event_Script_Miltank_56
Hub_Event_Script_Miltank_55:
# 251 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_LITTEN_UNLOCKED, Hub_Event_Script_Miltank_59
Hub_Event_Script_Miltank_58:
# 252 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_POPPLIO_UNLOCKED, Hub_Event_Script_Miltank_62
Hub_Event_Script_Miltank_61:
# 253 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_GROOKEY_UNLOCKED, Hub_Event_Script_Miltank_65
Hub_Event_Script_Miltank_64:
# 254 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SCORBUNNY_UNLOCKED, Hub_Event_Script_Miltank_68
Hub_Event_Script_Miltank_67:
# 255 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SOBBLE_UNLOCKED, Hub_Event_Script_Miltank_71
Hub_Event_Script_Miltank_70:
# 256 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SPRIGATITO_UNLOCKED, Hub_Event_Script_Miltank_74
Hub_Event_Script_Miltank_73:
# 257 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FUECOCO_UNLOCKED, Hub_Event_Script_Miltank_77
Hub_Event_Script_Miltank_76:
# 258 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_QUAXLY_UNLOCKED, Hub_Event_Script_Miltank_80
Hub_Event_Script_Miltank_79:
# 260 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Miltank_82
# 568 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_56
# 569 "data/maps/Hub1/scripts.pory"
	waitmessage
# 570 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Miltank_2:
# 232 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_0, SPECIES_BULBASAUR
# 232 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_1

Hub_Event_Script_Miltank_5:
# 233 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_1, SPECIES_CHARMANDER
# 233 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_4

Hub_Event_Script_Miltank_8:
# 234 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_2, SPECIES_SQUIRTLE
# 234 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_7

Hub_Event_Script_Miltank_11:
# 235 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_3, SPECIES_CHIKORITA
# 235 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_10

Hub_Event_Script_Miltank_14:
# 236 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_4, SPECIES_CYNDAQUIL
# 236 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_13

Hub_Event_Script_Miltank_17:
# 237 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_5, SPECIES_TOTODILE
# 237 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_16

Hub_Event_Script_Miltank_20:
# 238 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_6, SPECIES_TREECKO
# 238 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_19

Hub_Event_Script_Miltank_23:
# 239 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_7, SPECIES_TORCHIC
# 239 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_22

Hub_Event_Script_Miltank_26:
# 240 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_8, SPECIES_MUDKIP
# 240 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_25

Hub_Event_Script_Miltank_29:
# 241 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_9, SPECIES_TURTWIG
# 241 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_28

Hub_Event_Script_Miltank_32:
# 242 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_10, SPECIES_CHIMCHAR
# 242 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_31

Hub_Event_Script_Miltank_35:
# 243 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_11, SPECIES_PIPLUP
# 243 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_34

Hub_Event_Script_Miltank_38:
# 244 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_12, SPECIES_SNIVY
# 244 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_37

Hub_Event_Script_Miltank_41:
# 245 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_13, SPECIES_TEPIG
# 245 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_40

Hub_Event_Script_Miltank_44:
# 246 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_14, SPECIES_OSHAWOTT
# 246 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_43

Hub_Event_Script_Miltank_47:
# 247 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_15, SPECIES_CHESPIN
# 247 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_46

Hub_Event_Script_Miltank_50:
# 248 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_16, SPECIES_FENNEKIN
# 248 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_49

Hub_Event_Script_Miltank_53:
# 249 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_17, SPECIES_FROAKIE
# 249 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_52

Hub_Event_Script_Miltank_56:
# 250 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_18, SPECIES_ROWLET
# 250 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_55

Hub_Event_Script_Miltank_59:
# 251 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_19, SPECIES_LITTEN
# 251 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_58

Hub_Event_Script_Miltank_62:
# 252 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_20, SPECIES_POPPLIO
# 252 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_61

Hub_Event_Script_Miltank_65:
# 253 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_21, SPECIES_GROOKEY
# 253 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_64

Hub_Event_Script_Miltank_68:
# 254 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_22, SPECIES_SCORBUNNY
# 254 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_67

Hub_Event_Script_Miltank_71:
# 255 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_23, SPECIES_SOBBLE
# 255 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_70

Hub_Event_Script_Miltank_74:
# 256 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_24, SPECIES_SPRIGATITO
# 256 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_73

Hub_Event_Script_Miltank_77:
# 257 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_25, SPECIES_FUECOCO
# 257 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_76

Hub_Event_Script_Miltank_80:
# 258 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_26, SPECIES_QUAXLY
# 258 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_79

Hub_Event_Script_Miltank_82:
# 261 "data/maps/Hub1/scripts.pory"
	showmoneybox 17, 10
# 262 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_27
# 263 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 264 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 265 "data/maps/Hub1/scripts.pory"
	case MULTI_B_PRESSED, Hub_Event_Script_Miltank_87
# 267 "data/maps/Hub1/scripts.pory"
	case SPECIES_BULBASAUR, Hub_Event_Script_Miltank_88
# 278 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHARMANDER, Hub_Event_Script_Miltank_89
# 289 "data/maps/Hub1/scripts.pory"
	case SPECIES_SQUIRTLE, Hub_Event_Script_Miltank_90
# 300 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIKORITA, Hub_Event_Script_Miltank_91
# 311 "data/maps/Hub1/scripts.pory"
	case SPECIES_CYNDAQUIL, Hub_Event_Script_Miltank_92
# 322 "data/maps/Hub1/scripts.pory"
	case SPECIES_TOTODILE, Hub_Event_Script_Miltank_93
# 333 "data/maps/Hub1/scripts.pory"
	case SPECIES_TREECKO, Hub_Event_Script_Miltank_94
# 344 "data/maps/Hub1/scripts.pory"
	case SPECIES_TORCHIC, Hub_Event_Script_Miltank_95
# 355 "data/maps/Hub1/scripts.pory"
	case SPECIES_MUDKIP, Hub_Event_Script_Miltank_96
# 366 "data/maps/Hub1/scripts.pory"
	case SPECIES_TURTWIG, Hub_Event_Script_Miltank_97
# 377 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIMCHAR, Hub_Event_Script_Miltank_98
# 388 "data/maps/Hub1/scripts.pory"
	case SPECIES_PIPLUP, Hub_Event_Script_Miltank_99
# 399 "data/maps/Hub1/scripts.pory"
	case SPECIES_SNIVY, Hub_Event_Script_Miltank_100
# 410 "data/maps/Hub1/scripts.pory"
	case SPECIES_TEPIG, Hub_Event_Script_Miltank_101
# 421 "data/maps/Hub1/scripts.pory"
	case SPECIES_OSHAWOTT, Hub_Event_Script_Miltank_102
# 432 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHESPIN, Hub_Event_Script_Miltank_103
# 443 "data/maps/Hub1/scripts.pory"
	case SPECIES_FENNEKIN, Hub_Event_Script_Miltank_104
# 454 "data/maps/Hub1/scripts.pory"
	case SPECIES_FROAKIE, Hub_Event_Script_Miltank_105
# 465 "data/maps/Hub1/scripts.pory"
	case SPECIES_ROWLET, Hub_Event_Script_Miltank_106
# 476 "data/maps/Hub1/scripts.pory"
	case SPECIES_LITTEN, Hub_Event_Script_Miltank_107
# 487 "data/maps/Hub1/scripts.pory"
	case SPECIES_POPPLIO, Hub_Event_Script_Miltank_108
# 498 "data/maps/Hub1/scripts.pory"
	case SPECIES_GROOKEY, Hub_Event_Script_Miltank_109
# 509 "data/maps/Hub1/scripts.pory"
	case SPECIES_SCORBUNNY, Hub_Event_Script_Miltank_110
# 520 "data/maps/Hub1/scripts.pory"
	case SPECIES_SOBBLE, Hub_Event_Script_Miltank_111
# 531 "data/maps/Hub1/scripts.pory"
	case SPECIES_SPRIGATITO, Hub_Event_Script_Miltank_112
# 542 "data/maps/Hub1/scripts.pory"
	case SPECIES_FUECOCO, Hub_Event_Script_Miltank_113
# 553 "data/maps/Hub1/scripts.pory"
	case SPECIES_QUAXLY, Hub_Event_Script_Miltank_114
Hub_Event_Script_Miltank_85:
# 565 "data/maps/Hub1/scripts.pory"
	hidemoneybox
# 566 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Miltank_87:
# 266 "data/maps/Hub1/scripts.pory"
	releaseall
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_88:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_115
# 276 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_89:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_118
# 287 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_90:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_121
# 298 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_91:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_124
# 309 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_92:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_127
# 320 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_93:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_130
# 331 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_94:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_133
# 342 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_95:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_136
# 353 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_96:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_139
# 364 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_97:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_142
# 375 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_98:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_145
# 386 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_99:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_148
# 397 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_100:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_151
# 408 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_101:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_154
# 419 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_102:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_157
# 430 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_103:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_160
# 441 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_104:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_163
# 452 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_105:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_166
# 463 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_106:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_169
# 474 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_107:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_172
# 485 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_108:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_175
# 496 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_109:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_178
# 507 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_110:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_181
# 518 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_111:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_184
# 529 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_112:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_187
# 540 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_113:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_190
# 551 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_114:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Miltank_193
# 562 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_115:
# 269 "data/maps/Hub1/scripts.pory"
	setflag FLAG_BULBASAUR_UNLOCKED
# 270 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 271 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 272 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 273 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_28
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_118:
# 280 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHARMANDER_UNLOCKED
# 281 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 282 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 283 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 284 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_121:
# 291 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SQUIRTLE_UNLOCKED
# 292 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 293 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 294 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 295 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_31
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_124:
# 302 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIKORITA_UNLOCKED
# 303 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 304 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 305 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 306 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_32
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_127:
# 313 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CYNDAQUIL_UNLOCKED
# 314 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 315 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 316 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 317 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_33
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_130:
# 324 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TOTODILE_UNLOCKED
# 325 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 326 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 327 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 328 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_34
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_133:
# 335 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TREECKO_UNLOCKED
# 336 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 337 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 338 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 339 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_35
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_136:
# 346 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TORCHIC_UNLOCKED
# 347 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 348 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 349 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 350 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_36
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_139:
# 357 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MUDKIP_UNLOCKED
# 358 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 359 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 360 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 361 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_37
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_142:
# 368 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TURTWIG_UNLOCKED
# 369 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 370 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 371 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 372 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_38
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_145:
# 379 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIMCHAR_UNLOCKED
# 380 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 381 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 382 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 383 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_39
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_148:
# 390 "data/maps/Hub1/scripts.pory"
	setflag FLAG_PIPLUP_UNLOCKED
# 391 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 392 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 393 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 394 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_40
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_151:
# 401 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SNIVY_UNLOCKED
# 402 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 403 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 404 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 405 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_41
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_154:
# 412 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TEPIG_UNLOCKED
# 413 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 414 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 415 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 416 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_42
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_157:
# 423 "data/maps/Hub1/scripts.pory"
	setflag FLAG_OSHAWOTT_UNLOCKED
# 424 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 425 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 426 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 427 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_43
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_160:
# 434 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHESPIN_UNLOCKED
# 435 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 436 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 437 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 438 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_44
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_163:
# 445 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FENNEKIN_UNLOCKED
# 446 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 447 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 448 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 449 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_45
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_166:
# 456 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FROAKIE_UNLOCKED
# 457 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 458 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 459 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 460 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_46
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_169:
# 467 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ROWLET_UNLOCKED
# 468 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 469 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 470 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 471 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_47
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_172:
# 478 "data/maps/Hub1/scripts.pory"
	setflag FLAG_LITTEN_UNLOCKED
# 479 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 480 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 481 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 482 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_48
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_175:
# 489 "data/maps/Hub1/scripts.pory"
	setflag FLAG_POPPLIO_UNLOCKED
# 490 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 491 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 492 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 493 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_49
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_178:
# 500 "data/maps/Hub1/scripts.pory"
	setflag FLAG_GROOKEY_UNLOCKED
# 501 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 502 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 503 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 504 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_50
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_181:
# 511 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SCORBUNNY_UNLOCKED
# 512 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 513 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 514 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 515 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_51
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_184:
# 522 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SOBBLE_UNLOCKED
# 523 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 524 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 525 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 526 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_52
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_187:
# 533 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SPRIGATITO_UNLOCKED
# 534 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 535 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 536 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 537 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_53
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_190:
# 544 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FUECOCO_UNLOCKED
# 545 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 546 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 547 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 548 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_54
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_193:
# 555 "data/maps/Hub1/scripts.pory"
	setflag FLAG_QUAXLY_UNLOCKED
# 556 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 557 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 558 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 559 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_55
	goto Hub_Event_Script_Miltank_85


Hub_Event_Script_Chansey::
# 576 "data/maps/Hub1/scripts.pory"
	lockall
# 577 "data/maps/Hub1/scripts.pory"
	faceplayer
# 578 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 579 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_BULBASAUR_UNLOCKED, Hub_Event_Script_Chansey_3
Hub_Event_Script_Chansey_1:
# 580 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHARMANDER_UNLOCKED, Hub_Event_Script_Chansey_8
Hub_Event_Script_Chansey_6:
# 581 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SQUIRTLE_UNLOCKED, Hub_Event_Script_Chansey_13
Hub_Event_Script_Chansey_11:
# 582 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHIKORITA_UNLOCKED, Hub_Event_Script_Chansey_18
Hub_Event_Script_Chansey_16:
# 583 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CYNDAQUIL_UNLOCKED, Hub_Event_Script_Chansey_23
Hub_Event_Script_Chansey_21:
# 584 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TOTODILE_UNLOCKED, Hub_Event_Script_Chansey_28
Hub_Event_Script_Chansey_26:
# 585 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TREECKO_UNLOCKED, Hub_Event_Script_Chansey_33
Hub_Event_Script_Chansey_31:
# 586 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TORCHIC_UNLOCKED, Hub_Event_Script_Chansey_38
Hub_Event_Script_Chansey_36:
# 587 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_MUDKIP_UNLOCKED, Hub_Event_Script_Chansey_43
Hub_Event_Script_Chansey_41:
# 588 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TURTWIG_UNLOCKED, Hub_Event_Script_Chansey_48
Hub_Event_Script_Chansey_46:
# 589 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHIMCHAR_UNLOCKED, Hub_Event_Script_Chansey_53
Hub_Event_Script_Chansey_51:
# 590 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_PIPLUP_UNLOCKED, Hub_Event_Script_Chansey_58
Hub_Event_Script_Chansey_56:
# 591 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SNIVY_UNLOCKED, Hub_Event_Script_Chansey_63
Hub_Event_Script_Chansey_61:
# 592 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TEPIG_UNLOCKED, Hub_Event_Script_Chansey_68
Hub_Event_Script_Chansey_66:
# 593 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_OSHAWOTT_UNLOCKED, Hub_Event_Script_Chansey_73
Hub_Event_Script_Chansey_71:
# 594 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHESPIN_UNLOCKED, Hub_Event_Script_Chansey_78
Hub_Event_Script_Chansey_76:
# 595 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FENNEKIN_UNLOCKED, Hub_Event_Script_Chansey_83
Hub_Event_Script_Chansey_81:
# 596 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FROAKIE_UNLOCKED, Hub_Event_Script_Chansey_88
Hub_Event_Script_Chansey_86:
# 597 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ROWLET_UNLOCKED, Hub_Event_Script_Chansey_93
Hub_Event_Script_Chansey_91:
# 598 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_LITTEN_UNLOCKED, Hub_Event_Script_Chansey_98
Hub_Event_Script_Chansey_96:
# 599 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_POPPLIO_UNLOCKED, Hub_Event_Script_Chansey_103
Hub_Event_Script_Chansey_101:
# 600 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_GROOKEY_UNLOCKED, Hub_Event_Script_Chansey_108
Hub_Event_Script_Chansey_106:
# 601 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SCORBUNNY_UNLOCKED, Hub_Event_Script_Chansey_113
Hub_Event_Script_Chansey_111:
# 602 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SOBBLE_UNLOCKED, Hub_Event_Script_Chansey_118
Hub_Event_Script_Chansey_116:
# 603 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPRIGATITO_UNLOCKED, Hub_Event_Script_Chansey_123
Hub_Event_Script_Chansey_121:
# 604 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FUECOCO_UNLOCKED, Hub_Event_Script_Chansey_128
Hub_Event_Script_Chansey_126:
# 605 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_QUAXLY_UNLOCKED, Hub_Event_Script_Chansey_133
Hub_Event_Script_Chansey_131:
# 607 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Chansey_136
# 630 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_2
# 631 "data/maps/Hub1/scripts.pory"
	waitmessage
# 632 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Chansey_2:
# 579 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_1, SPECIES_BULBASAUR
# 579 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_1

Hub_Event_Script_Chansey_3:
# 579 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_BULBASAUR
	goto_if_ne Hub_Event_Script_Chansey_2
	goto Hub_Event_Script_Chansey_1

Hub_Event_Script_Chansey_7:
# 580 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_2, SPECIES_CHARMANDER
# 580 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_6

Hub_Event_Script_Chansey_8:
# 580 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHARMANDER
	goto_if_ne Hub_Event_Script_Chansey_7
	goto Hub_Event_Script_Chansey_6

Hub_Event_Script_Chansey_12:
# 581 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_3, SPECIES_SQUIRTLE
# 581 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_11

Hub_Event_Script_Chansey_13:
# 581 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SQUIRTLE
	goto_if_ne Hub_Event_Script_Chansey_12
	goto Hub_Event_Script_Chansey_11

Hub_Event_Script_Chansey_17:
# 582 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_4, SPECIES_CHIKORITA
# 582 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_16

Hub_Event_Script_Chansey_18:
# 582 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHIKORITA
	goto_if_ne Hub_Event_Script_Chansey_17
	goto Hub_Event_Script_Chansey_16

Hub_Event_Script_Chansey_22:
# 583 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_5, SPECIES_CYNDAQUIL
# 583 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_21

Hub_Event_Script_Chansey_23:
# 583 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CYNDAQUIL
	goto_if_ne Hub_Event_Script_Chansey_22
	goto Hub_Event_Script_Chansey_21

Hub_Event_Script_Chansey_27:
# 584 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_6, SPECIES_TOTODILE
# 584 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_26

Hub_Event_Script_Chansey_28:
# 584 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TOTODILE
	goto_if_ne Hub_Event_Script_Chansey_27
	goto Hub_Event_Script_Chansey_26

Hub_Event_Script_Chansey_32:
# 585 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_7, SPECIES_TREECKO
# 585 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_31

Hub_Event_Script_Chansey_33:
# 585 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TREECKO
	goto_if_ne Hub_Event_Script_Chansey_32
	goto Hub_Event_Script_Chansey_31

Hub_Event_Script_Chansey_37:
# 586 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_8, SPECIES_TORCHIC
# 586 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_36

Hub_Event_Script_Chansey_38:
# 586 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TORCHIC
	goto_if_ne Hub_Event_Script_Chansey_37
	goto Hub_Event_Script_Chansey_36

Hub_Event_Script_Chansey_42:
# 587 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_9, SPECIES_MUDKIP
# 587 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_41

Hub_Event_Script_Chansey_43:
# 587 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_MUDKIP
	goto_if_ne Hub_Event_Script_Chansey_42
	goto Hub_Event_Script_Chansey_41

Hub_Event_Script_Chansey_47:
# 588 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_10, SPECIES_TURTWIG
# 588 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_46

Hub_Event_Script_Chansey_48:
# 588 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TURTWIG
	goto_if_ne Hub_Event_Script_Chansey_47
	goto Hub_Event_Script_Chansey_46

Hub_Event_Script_Chansey_52:
# 589 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_11, SPECIES_CHIMCHAR
# 589 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_51

Hub_Event_Script_Chansey_53:
# 589 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHIMCHAR
	goto_if_ne Hub_Event_Script_Chansey_52
	goto Hub_Event_Script_Chansey_51

Hub_Event_Script_Chansey_57:
# 590 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_12, SPECIES_PIPLUP
# 590 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_56

Hub_Event_Script_Chansey_58:
# 590 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_PIPLUP
	goto_if_ne Hub_Event_Script_Chansey_57
	goto Hub_Event_Script_Chansey_56

Hub_Event_Script_Chansey_62:
# 591 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_13, SPECIES_SNIVY
# 591 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_61

Hub_Event_Script_Chansey_63:
# 591 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SNIVY
	goto_if_ne Hub_Event_Script_Chansey_62
	goto Hub_Event_Script_Chansey_61

Hub_Event_Script_Chansey_67:
# 592 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_14, SPECIES_TEPIG
# 592 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_66

Hub_Event_Script_Chansey_68:
# 592 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TEPIG
	goto_if_ne Hub_Event_Script_Chansey_67
	goto Hub_Event_Script_Chansey_66

Hub_Event_Script_Chansey_72:
# 593 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_15, SPECIES_OSHAWOTT
# 593 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_71

Hub_Event_Script_Chansey_73:
# 593 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_OSHAWOTT
	goto_if_ne Hub_Event_Script_Chansey_72
	goto Hub_Event_Script_Chansey_71

Hub_Event_Script_Chansey_77:
# 594 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_16, SPECIES_CHESPIN
# 594 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_76

Hub_Event_Script_Chansey_78:
# 594 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHESPIN
	goto_if_ne Hub_Event_Script_Chansey_77
	goto Hub_Event_Script_Chansey_76

Hub_Event_Script_Chansey_82:
# 595 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_17, SPECIES_FENNEKIN
# 595 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_81

Hub_Event_Script_Chansey_83:
# 595 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FENNEKIN
	goto_if_ne Hub_Event_Script_Chansey_82
	goto Hub_Event_Script_Chansey_81

Hub_Event_Script_Chansey_87:
# 596 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_18, SPECIES_FROAKIE
# 596 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_86

Hub_Event_Script_Chansey_88:
# 596 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FROAKIE
	goto_if_ne Hub_Event_Script_Chansey_87
	goto Hub_Event_Script_Chansey_86

Hub_Event_Script_Chansey_92:
# 597 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_19, SPECIES_ROWLET
# 597 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_91

Hub_Event_Script_Chansey_93:
# 597 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_ROWLET
	goto_if_ne Hub_Event_Script_Chansey_92
	goto Hub_Event_Script_Chansey_91

Hub_Event_Script_Chansey_97:
# 598 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_20, SPECIES_LITTEN
# 598 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_96

Hub_Event_Script_Chansey_98:
# 598 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_LITTEN
	goto_if_ne Hub_Event_Script_Chansey_97
	goto Hub_Event_Script_Chansey_96

Hub_Event_Script_Chansey_102:
# 599 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_21, SPECIES_POPPLIO
# 599 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_101

Hub_Event_Script_Chansey_103:
# 599 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_POPPLIO
	goto_if_ne Hub_Event_Script_Chansey_102
	goto Hub_Event_Script_Chansey_101

Hub_Event_Script_Chansey_107:
# 600 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_22, SPECIES_GROOKEY
# 600 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_106

Hub_Event_Script_Chansey_108:
# 600 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_GROOKEY
	goto_if_ne Hub_Event_Script_Chansey_107
	goto Hub_Event_Script_Chansey_106

Hub_Event_Script_Chansey_112:
# 601 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_23, SPECIES_SCORBUNNY
# 601 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_111

Hub_Event_Script_Chansey_113:
# 601 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SCORBUNNY
	goto_if_ne Hub_Event_Script_Chansey_112
	goto Hub_Event_Script_Chansey_111

Hub_Event_Script_Chansey_117:
# 602 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_24, SPECIES_SOBBLE
# 602 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_116

Hub_Event_Script_Chansey_118:
# 602 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SOBBLE
	goto_if_ne Hub_Event_Script_Chansey_117
	goto Hub_Event_Script_Chansey_116

Hub_Event_Script_Chansey_122:
# 603 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_25, SPECIES_SPRIGATITO
# 603 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_121

Hub_Event_Script_Chansey_123:
# 603 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SPRIGATITO
	goto_if_ne Hub_Event_Script_Chansey_122
	goto Hub_Event_Script_Chansey_121

Hub_Event_Script_Chansey_127:
# 604 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_26, SPECIES_FUECOCO
# 604 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_126

Hub_Event_Script_Chansey_128:
# 604 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FUECOCO
	goto_if_ne Hub_Event_Script_Chansey_127
	goto Hub_Event_Script_Chansey_126

Hub_Event_Script_Chansey_132:
# 605 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_27, SPECIES_QUAXLY
# 605 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_131

Hub_Event_Script_Chansey_133:
# 605 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_QUAXLY
	goto_if_ne Hub_Event_Script_Chansey_132
	goto Hub_Event_Script_Chansey_131

Hub_Event_Script_Chansey_136:
# 608 "data/maps/Hub1/scripts.pory"
	setvar VAR_RESULT, 0
# 609 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_0
# 610 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 612 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_ne Hub_Event_Script_Chansey_139
# 627 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Chansey_139:
# 613 "data/maps/Hub1/scripts.pory"
	copyvar VAR_STARTER_MON, VAR_RESULT
# 614 "data/maps/Hub1/scripts.pory"
	special ZeroPlayerPartyMons
# 615 "data/maps/Hub1/scripts.pory"
	special GiveSavedStarter
# 616 "data/maps/Hub1/scripts.pory"
	special UpdatePlayerSprite
# 617 "data/maps/Hub1/scripts.pory"
	special UpdateTransformedPlayerPalette
# 618 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 619 "data/maps/Hub1/scripts.pory"
	releaseall
# 620 "data/maps/Hub1/scripts.pory"
	lockall
# 621 "data/maps/Hub1/scripts.pory"
	playse SE_SUCCESS
# 622 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_1
# 623 "data/maps/Hub1/scripts.pory"
	waitmessage
# 624 "data/maps/Hub1/scripts.pory"
	releaseall
	return


Hub_Event_Script_Kecleon::
# 636 "data/maps/Hub1/scripts.pory"
	lockall
# 637 "data/maps/Hub1/scripts.pory"
	faceplayer
# 638 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 639 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_0
# 640 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_1, Hub_Event_Script_Kecleon_2
# 643 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_2, Hub_Event_Script_Kecleon_3
# 646 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_3, Hub_Event_Script_Kecleon_4
# 649 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_4, Hub_Event_Script_Kecleon_5
# 652 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_5, Hub_Event_Script_Kecleon_6
# 655 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_6, Hub_Event_Script_Kecleon_7
# 658 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_7, Hub_Event_Script_Kecleon_8
# 661 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_8, Hub_Event_Script_Kecleon_9
Hub_Event_Script_Kecleon_1:
# 665 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_1, Hub_Event_Script_Kecleon_19
# 668 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_2, Hub_Event_Script_Kecleon_20
# 671 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_3, Hub_Event_Script_Kecleon_21
# 674 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_4, Hub_Event_Script_Kecleon_22
# 677 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_5, Hub_Event_Script_Kecleon_23
Hub_Event_Script_Kecleon_18:
# 682 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ORAN_BERRY_UNLOCKED_1, Hub_Event_Script_Kecleon_30
# 685 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ORAN_BERRY_UNLOCKED_2, Hub_Event_Script_Kecleon_31
Hub_Event_Script_Kecleon_29:
# 691 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_LUM_BERRY_UNLOCKED_1, Hub_Event_Script_Kecleon_35
# 694 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_LUM_BERRY_UNLOCKED_2, Hub_Event_Script_Kecleon_36
Hub_Event_Script_Kecleon_34:
# 699 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SERIOUS_MINT_UNLOCKED_1, Hub_Event_Script_Kecleon_40
# 702 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SERIOUS_MINT_UNLOCKED_2, Hub_Event_Script_Kecleon_41
Hub_Event_Script_Kecleon_39:
# 708 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Kecleon_45
# 955 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_23
# 956 "data/maps/Hub1/scripts.pory"
	waitmessage
# 957 "data/maps/Hub1/scripts.pory"
	releaseall
Hub_Event_Script_Kecleon_44:
# 959 "data/maps/Hub1/scripts.pory"
	hidemoneybox
# 960 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Kecleon_2:
# 641 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_1, ITEM_MEMORY_MUSHROOM
# 642 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_3:
# 644 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_2, ITEM_MEMORY_MUSHROOM
# 645 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_4:
# 647 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_3, ITEM_MEMORY_MUSHROOM
# 648 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_5:
# 650 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_4, ITEM_MEMORY_MUSHROOM
# 651 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_6:
# 653 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_5, ITEM_MEMORY_MUSHROOM
# 654 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_7:
# 656 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_6, ITEM_MEMORY_MUSHROOM
# 657 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_8:
# 659 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_7, ITEM_MEMORY_MUSHROOM
# 660 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_9:
# 662 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_8, ITEM_MEMORY_MUSHROOM
# 663 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_19:
# 666 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_9, ITEM_RARE_CANDY
# 667 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_18

Hub_Event_Script_Kecleon_20:
# 669 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_10, ITEM_RARE_CANDY
# 670 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_18

Hub_Event_Script_Kecleon_21:
# 672 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_10, ITEM_RARE_CANDY
# 673 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_18

Hub_Event_Script_Kecleon_22:
# 675 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_10, ITEM_RARE_CANDY
# 676 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_18

Hub_Event_Script_Kecleon_23:
# 678 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_10, ITEM_RARE_CANDY
# 679 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_18

Hub_Event_Script_Kecleon_30:
# 683 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_11, ITEM_ORAN_BERRY
# 684 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_31:
# 686 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_12, ITEM_ORAN_BERRY
# 687 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_29

Hub_Event_Script_Kecleon_35:
# 692 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_13, ITEM_LUM_BERRY
# 693 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_34

Hub_Event_Script_Kecleon_36:
# 695 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_14, ITEM_LUM_BERRY
# 696 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_34

Hub_Event_Script_Kecleon_40:
# 700 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_15, ITEM_SERIOUS_MINT
# 701 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_39

Hub_Event_Script_Kecleon_41:
# 703 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_16, ITEM_SERIOUS_MINT
# 704 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_39

Hub_Event_Script_Kecleon_45:
# 709 "data/maps/Hub1/scripts.pory"
	showmoneybox 17, 10
# 710 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 4, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 711 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 712 "data/maps/Hub1/scripts.pory"
	case ITEM_ORAN_BERRY, Hub_Event_Script_Kecleon_49
# 739 "data/maps/Hub1/scripts.pory"
	case ITEM_LUM_BERRY, Hub_Event_Script_Kecleon_50
# 766 "data/maps/Hub1/scripts.pory"
	case ITEM_SERIOUS_MINT, Hub_Event_Script_Kecleon_51
# 793 "data/maps/Hub1/scripts.pory"
	case ITEM_MEMORY_MUSHROOM, Hub_Event_Script_Kecleon_52
# 891 "data/maps/Hub1/scripts.pory"
	case ITEM_RARE_CANDY, Hub_Event_Script_Kecleon_53
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_49:
# 713 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ORAN_BERRY_UNLOCKED_1, Hub_Event_Script_Kecleon_54
# 725 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ORAN_BERRY_UNLOCKED_2, Hub_Event_Script_Kecleon_55
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_50:
# 740 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_LUM_BERRY_UNLOCKED_1, Hub_Event_Script_Kecleon_58
# 752 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_LUM_BERRY_UNLOCKED_2, Hub_Event_Script_Kecleon_59
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_51:
# 767 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SERIOUS_MINT_UNLOCKED_1, Hub_Event_Script_Kecleon_62
# 779 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SERIOUS_MINT_UNLOCKED_2, Hub_Event_Script_Kecleon_63
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_52:
# 794 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_1, Hub_Event_Script_Kecleon_66
# 806 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_2, Hub_Event_Script_Kecleon_67
# 818 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_3, Hub_Event_Script_Kecleon_68
# 830 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_4, Hub_Event_Script_Kecleon_69
# 842 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_5, Hub_Event_Script_Kecleon_70
# 854 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_6, Hub_Event_Script_Kecleon_71
# 866 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_7, Hub_Event_Script_Kecleon_72
# 878 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED_8, Hub_Event_Script_Kecleon_73
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_53:
# 892 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_1, Hub_Event_Script_Kecleon_82
# 904 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_2, Hub_Event_Script_Kecleon_83
# 916 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_3, Hub_Event_Script_Kecleon_84
# 928 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_4, Hub_Event_Script_Kecleon_85
# 940 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED_5, Hub_Event_Script_Kecleon_86
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_54:
	checkmoney 2000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_92
# 723 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_55:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_95
# 735 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_58:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_98
# 750 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_59:
	checkmoney 20000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_101
# 762 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_62:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_104
# 777 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_63:
	checkmoney 30000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_107
# 789 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_66:
	checkmoney 2000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_110
# 804 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_67:
	checkmoney 3000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_113
# 816 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_68:
	checkmoney 4000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_116
# 828 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_69:
	checkmoney 5000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_119
# 840 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_70:
	checkmoney 6000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_122
# 852 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_71:
	checkmoney 7000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_125
# 864 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_72:
	checkmoney 8000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_128
# 876 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_73:
	checkmoney 9000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_131
# 888 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_82:
	checkmoney 30000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_134
# 902 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_83:
	checkmoney 9999999
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_137
# 914 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_84:
	checkmoney 9999999
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_140
# 926 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_85:
	checkmoney 9999999
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_143
# 938 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_86:
	checkmoney 9999999
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Kecleon_146
# 950 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_92:
# 715 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ORAN_BERRY_UNLOCKED_1
# 716 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 1
# 717 "data/maps/Hub1/scripts.pory"
	removemoney 2000
# 718 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 719 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 720 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_17
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_95:
# 727 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ORAN_BERRY_UNLOCKED_2
# 728 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 1
# 729 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 730 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 731 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 732 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_17
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_98:
# 742 "data/maps/Hub1/scripts.pory"
	setflag FLAG_LUM_BERRY_UNLOCKED_1
# 743 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
# 744 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 745 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 746 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 747 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_19
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_101:
# 754 "data/maps/Hub1/scripts.pory"
	setflag FLAG_LUM_BERRY_UNLOCKED_2
# 755 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
# 756 "data/maps/Hub1/scripts.pory"
	removemoney 20000
# 757 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 758 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 759 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_19
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_104:
# 769 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SERIOUS_MINT_UNLOCKED_1
# 770 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SERIOUS_MINT, 1
# 771 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 772 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 773 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 774 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_20
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_107:
# 781 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SERIOUS_MINT_UNLOCKED_2
# 782 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SERIOUS_MINT, 1
# 783 "data/maps/Hub1/scripts.pory"
	removemoney 30000
# 784 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 785 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 786 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_20
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_110:
# 796 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MEMORY_MUSHROOM_UNLOCKED_1
# 797 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 1
# 798 "data/maps/Hub1/scripts.pory"
	removemoney 2000
# 799 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 800 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 801 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_21
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_113:
# 808 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MEMORY_MUSHROOM_UNLOCKED_2
# 809 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 1
# 810 "data/maps/Hub1/scripts.pory"
	removemoney 3000
# 811 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 812 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 813 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_21
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_116:
# 820 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MEMORY_MUSHROOM_UNLOCKED_3
# 821 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 1
# 822 "data/maps/Hub1/scripts.pory"
	removemoney 4000
# 823 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 824 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 825 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_21
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_119:
# 832 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MEMORY_MUSHROOM_UNLOCKED_4
# 833 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 1
# 834 "data/maps/Hub1/scripts.pory"
	removemoney 5000
# 835 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 836 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 837 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_21
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_122:
# 844 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MEMORY_MUSHROOM_UNLOCKED_5
# 845 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 1
# 846 "data/maps/Hub1/scripts.pory"
	removemoney 6000
# 847 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 848 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 849 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_21
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_125:
# 856 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MEMORY_MUSHROOM_UNLOCKED_6
# 857 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 1
# 858 "data/maps/Hub1/scripts.pory"
	removemoney 7000
# 859 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 860 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 861 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_21
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_128:
# 868 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MEMORY_MUSHROOM_UNLOCKED_7
# 869 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 1
# 870 "data/maps/Hub1/scripts.pory"
	removemoney 8000
# 871 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 872 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 873 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_21
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_131:
# 880 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MEMORY_MUSHROOM_UNLOCKED_8
# 881 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 1
# 882 "data/maps/Hub1/scripts.pory"
	removemoney 9000
# 883 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 884 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 885 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_21
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_134:
# 894 "data/maps/Hub1/scripts.pory"
	setflag FLAG_RARE_CANDY_UNLOCKED_1
# 895 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 896 "data/maps/Hub1/scripts.pory"
	removemoney 30000
# 897 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 898 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 899 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_22
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_137:
# 906 "data/maps/Hub1/scripts.pory"
	setflag FLAG_RARE_CANDY_UNLOCKED_2
# 907 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 908 "data/maps/Hub1/scripts.pory"
	removemoney 9999999
# 909 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 910 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 911 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_22
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_140:
# 918 "data/maps/Hub1/scripts.pory"
	setflag FLAG_RARE_CANDY_UNLOCKED_3
# 919 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 920 "data/maps/Hub1/scripts.pory"
	removemoney 9999999
# 921 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 922 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 923 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_22
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_143:
# 930 "data/maps/Hub1/scripts.pory"
	setflag FLAG_RARE_CANDY_UNLOCKED_4
# 931 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 932 "data/maps/Hub1/scripts.pory"
	removemoney 9999999
# 933 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 934 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 935 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_22
	goto Hub_Event_Script_Kecleon_44

Hub_Event_Script_Kecleon_146:
# 942 "data/maps/Hub1/scripts.pory"
	setflag FLAG_RARE_CANDY_UNLOCKED_5
# 943 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 944 "data/maps/Hub1/scripts.pory"
	removemoney 9999999
# 945 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 946 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 947 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_22
	goto Hub_Event_Script_Kecleon_44


Hub_Event_Script_Shiny_Kecleon::
# 965 "data/maps/Hub1/scripts.pory"
	lockall
# 966 "data/maps/Hub1/scripts.pory"
	faceplayer
# 967 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 968 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_0
# 969 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ROCK_SMASH_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_2
Hub_Event_Script_Shiny_Kecleon_1:
# 973 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SWIFT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_5
Hub_Event_Script_Shiny_Kecleon_4:
# 977 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CUT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_8
Hub_Event_Script_Shiny_Kecleon_7:
# 981 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_NOBLE_ROAR_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_11
Hub_Event_Script_Shiny_Kecleon_10:
# 985 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CHARM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_14
Hub_Event_Script_Shiny_Kecleon_13:
# 989 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_FAKE_TEARS_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_17
Hub_Event_Script_Shiny_Kecleon_16:
# 993 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CONFUSE_RAY_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_20
Hub_Event_Script_Shiny_Kecleon_19:
# 997 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_THUNDER_WAVE_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_23
Hub_Event_Script_Shiny_Kecleon_22:
# 1001 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_WILL_O_WISP_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_26
Hub_Event_Script_Shiny_Kecleon_25:
# 1005 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_TOXIC_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_29
Hub_Event_Script_Shiny_Kecleon_28:
# 1011 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Shiny_Kecleon_32
# 1157 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_23
# 1158 "data/maps/Hub1/scripts.pory"
	waitmessage
# 1159 "data/maps/Hub1/scripts.pory"
	releaseall
Hub_Event_Script_Shiny_Kecleon_31:
# 1161 "data/maps/Hub1/scripts.pory"
	hidemoneybox
# 1162 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Shiny_Kecleon_2:
# 970 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_1, ITEM_TM_ROCK_SMASH
# 971 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_1

Hub_Event_Script_Shiny_Kecleon_5:
# 974 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_2, ITEM_TM_SWIFT
# 975 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_4

Hub_Event_Script_Shiny_Kecleon_8:
# 978 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_3, ITEM_TM_CUT
# 979 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_7

Hub_Event_Script_Shiny_Kecleon_11:
# 982 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_4, ITEM_TM_NOBLE_ROAR
# 983 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_10

Hub_Event_Script_Shiny_Kecleon_14:
# 986 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_5, ITEM_TM_CHARM
# 987 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_13

Hub_Event_Script_Shiny_Kecleon_17:
# 990 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_6, ITEM_TM_FAKE_TEARS
# 991 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_16

Hub_Event_Script_Shiny_Kecleon_20:
# 994 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_7, ITEM_TM_CONFUSE_RAY
# 995 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_19

Hub_Event_Script_Shiny_Kecleon_23:
# 998 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_8, ITEM_TM_THUNDER_WAVE
# 999 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_22

Hub_Event_Script_Shiny_Kecleon_26:
# 1002 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_9, ITEM_TM_WILL_O_WISP
# 1003 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_25

Hub_Event_Script_Shiny_Kecleon_29:
# 1006 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_10, ITEM_TM_TOXIC
# 1007 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_28

Hub_Event_Script_Shiny_Kecleon_32:
# 1012 "data/maps/Hub1/scripts.pory"
	showmoneybox 17, 10
# 1013 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 4, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 1014 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 1015 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_NOBLE_ROAR, Hub_Event_Script_Shiny_Kecleon_36
# 1029 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ROCK_SMASH, Hub_Event_Script_Shiny_Kecleon_37
# 1043 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SWIFT, Hub_Event_Script_Shiny_Kecleon_38
# 1057 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CUT, Hub_Event_Script_Shiny_Kecleon_39
# 1071 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CHARM, Hub_Event_Script_Shiny_Kecleon_40
# 1085 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_FAKE_TEARS, Hub_Event_Script_Shiny_Kecleon_41
# 1099 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CONFUSE_RAY, Hub_Event_Script_Shiny_Kecleon_42
# 1113 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_THUNDER_WAVE, Hub_Event_Script_Shiny_Kecleon_43
# 1127 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_WILL_O_WISP, Hub_Event_Script_Shiny_Kecleon_44
# 1141 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_TOXIC, Hub_Event_Script_Shiny_Kecleon_45
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_36:
# 1016 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_NOBLE_ROAR_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_46
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_37:
# 1030 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ROCK_SMASH_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_48
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_38:
# 1044 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SWIFT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_50
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_39:
# 1058 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CUT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_52
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_40:
# 1072 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CHARM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_54
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_41:
# 1086 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_FAKE_TEARS_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_56
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_42:
# 1100 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CONFUSE_RAY_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_58
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_43:
# 1114 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_THUNDER_WAVE_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_60
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_44:
# 1128 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_WILL_O_WISP_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_62
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_45:
# 1142 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_TOXIC_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_64
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_46:
	checkmoney 4000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Shiny_Kecleon_66
# 1026 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_48:
	checkmoney 8000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Shiny_Kecleon_69
# 1040 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_50:
	checkmoney 8000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Shiny_Kecleon_72
# 1054 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_52:
	checkmoney 8000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Shiny_Kecleon_75
# 1068 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_54:
	checkmoney 4000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Shiny_Kecleon_78
# 1082 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_56:
	checkmoney 4000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Shiny_Kecleon_81
# 1096 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_58:
	checkmoney 6000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Shiny_Kecleon_84
# 1110 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_60:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Shiny_Kecleon_87
# 1124 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_62:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Shiny_Kecleon_90
# 1138 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_64:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Shiny_Kecleon_93
# 1152 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_66:
# 1018 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_NOBLE_ROAR_UNLOCKED
# 1019 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_NOBLE_ROAR, 1
# 1020 "data/maps/Hub1/scripts.pory"
	removemoney 4000
# 1021 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1022 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1023 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_11
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_69:
# 1032 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_ROCK_SMASH_UNLOCKED
# 1033 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_ROCK_SMASH, 1
# 1034 "data/maps/Hub1/scripts.pory"
	removemoney 8000
# 1035 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1036 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1037 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_12
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_72:
# 1046 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_SWIFT_UNLOCKED
# 1047 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SWIFT, 1
# 1048 "data/maps/Hub1/scripts.pory"
	removemoney 8000
# 1049 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1050 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1051 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_13
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_75:
# 1060 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CUT_UNLOCKED
# 1061 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CUT, 1
# 1062 "data/maps/Hub1/scripts.pory"
	removemoney 8000
# 1063 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1064 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1065 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_14
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_78:
# 1074 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CHARM_UNLOCKED
# 1075 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CHARM, 1
# 1076 "data/maps/Hub1/scripts.pory"
	removemoney 4000
# 1077 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1078 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1079 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_15
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_81:
# 1088 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_FAKE_TEARS_UNLOCKED
# 1089 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_FAKE_TEARS, 1
# 1090 "data/maps/Hub1/scripts.pory"
	removemoney 4000
# 1091 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1092 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1093 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_16
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_84:
# 1102 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CONFUSE_RAY_UNLOCKED
# 1103 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CONFUSE_RAY, 1
# 1104 "data/maps/Hub1/scripts.pory"
	removemoney 6000
# 1105 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1106 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1107 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_17
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_87:
# 1116 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_THUNDER_WAVE_UNLOCKED
# 1117 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_THUNDER_WAVE, 1
# 1118 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1119 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1120 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1121 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_18
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_90:
# 1130 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_WILL_O_WISP_UNLOCKED
# 1131 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_WILL_O_WISP, 1
# 1132 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1133 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1134 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1135 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_19
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_93:
# 1144 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_TOXIC_UNLOCKED
# 1145 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_TOXIC, 1
# 1146 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1147 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1148 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1149 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_20
	goto Hub_Event_Script_Shiny_Kecleon_31


Hub_Event_Script_Diancie::
# 1167 "data/maps/Hub1/scripts.pory"
	lockall
# 1168 "data/maps/Hub1/scripts.pory"
	faceplayer
# 1169 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEGA_SHOP_UNLOCKED, Hub_Event_Script_Diancie_9
Hub_Event_Script_Diancie_7:
# 1177 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_MEGA_SHOP_UNLOCKED, Hub_Event_Script_Diancie_6
Hub_Event_Script_Diancie_5:
# 1191 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHARIZARDITE_X_UNLOCKED, Hub_Event_Script_Diancie_4
Hub_Event_Script_Diancie_1:
# 2555 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Diancie_2:
# 1170 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_0
	goto Hub_Event_Script_Diancie_1

Hub_Event_Script_Diancie_3:
# 1178 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_1
# 1182 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHARIZARDITE_X, 1
# 1183 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_VENUSAURITE_BUYABLE
# 1184 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHARIZARDITE_Y_BUYABLE
# 1185 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BLASTOISINITE_BUYABLE
# 1186 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHARIZARDITE_X_UNLOCKED
# 1187 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_2
	goto Hub_Event_Script_Diancie_1

Hub_Event_Script_Diancie_4:
# 1192 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1193 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_VENUSAURITE_BUYABLE, Hub_Event_Script_Diancie_13
Hub_Event_Script_Diancie_12:
# 1197 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHARIZARDITE_Y_BUYABLE, Hub_Event_Script_Diancie_16
Hub_Event_Script_Diancie_15:
# 1201 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BLASTOISINITE_BUYABLE, Hub_Event_Script_Diancie_19
Hub_Event_Script_Diancie_18:
# 1205 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BEEDRILLITE_BUYABLE, Hub_Event_Script_Diancie_22
Hub_Event_Script_Diancie_21:
# 1209 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_PIDGEOTITE_BUYABLE, Hub_Event_Script_Diancie_25
Hub_Event_Script_Diancie_24:
# 1213 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ALAKAZITE_BUYABLE, Hub_Event_Script_Diancie_28
Hub_Event_Script_Diancie_27:
# 1217 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SLOWBRONITE_BUYABLE, Hub_Event_Script_Diancie_31
Hub_Event_Script_Diancie_30:
# 1221 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GENGARITE_BUYABLE, Hub_Event_Script_Diancie_34
Hub_Event_Script_Diancie_33:
# 1225 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_KANGASKHANITE_BUYABLE, Hub_Event_Script_Diancie_37
Hub_Event_Script_Diancie_36:
# 1229 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_PINSIRITE_BUYABLE, Hub_Event_Script_Diancie_40
Hub_Event_Script_Diancie_39:
# 1233 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GYARADOSITE_BUYABLE, Hub_Event_Script_Diancie_43
Hub_Event_Script_Diancie_42:
# 1237 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_AERODACTYLITE_BUYABLE, Hub_Event_Script_Diancie_46
Hub_Event_Script_Diancie_45:
# 1241 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_AMPHAROSITE_BUYABLE, Hub_Event_Script_Diancie_49
Hub_Event_Script_Diancie_48:
# 1245 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_STEELIXITE_BUYABLE, Hub_Event_Script_Diancie_52
Hub_Event_Script_Diancie_51:
# 1249 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCIZORITE_BUYABLE, Hub_Event_Script_Diancie_55
Hub_Event_Script_Diancie_54:
# 1253 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_HERACRONITE_BUYABLE, Hub_Event_Script_Diancie_58
Hub_Event_Script_Diancie_57:
# 1257 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_HOUNDOOMINITE_BUYABLE, Hub_Event_Script_Diancie_61
Hub_Event_Script_Diancie_60:
# 1261 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_TYRANITARITE_BUYABLE, Hub_Event_Script_Diancie_64
Hub_Event_Script_Diancie_63:
# 1265 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCEPTILITE_BUYABLE, Hub_Event_Script_Diancie_67
Hub_Event_Script_Diancie_66:
# 1269 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BLAZIKENITE_BUYABLE, Hub_Event_Script_Diancie_70
Hub_Event_Script_Diancie_69:
# 1273 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SWAMPERTITE_BUYABLE, Hub_Event_Script_Diancie_73
Hub_Event_Script_Diancie_72:
# 1277 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GARDEVOIRITE_BUYABLE, Hub_Event_Script_Diancie_76
Hub_Event_Script_Diancie_75:
# 1281 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SABLENITE_BUYABLE, Hub_Event_Script_Diancie_79
Hub_Event_Script_Diancie_78:
# 1285 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MAWILITE_BUYABLE, Hub_Event_Script_Diancie_82
Hub_Event_Script_Diancie_81:
# 1289 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_AGGRONITE_BUYABLE, Hub_Event_Script_Diancie_85
Hub_Event_Script_Diancie_84:
# 1293 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MEDICHAMITE_BUYABLE, Hub_Event_Script_Diancie_88
Hub_Event_Script_Diancie_87:
# 1297 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MANECTITE_BUYABLE, Hub_Event_Script_Diancie_91
Hub_Event_Script_Diancie_90:
# 1301 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SHARPEDONITE_BUYABLE, Hub_Event_Script_Diancie_94
Hub_Event_Script_Diancie_93:
# 1305 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CAMERUPTITE_BUYABLE, Hub_Event_Script_Diancie_97
Hub_Event_Script_Diancie_96:
# 1309 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ALTARIANITE_BUYABLE, Hub_Event_Script_Diancie_100
Hub_Event_Script_Diancie_99:
# 1313 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BANETTITE_BUYABLE, Hub_Event_Script_Diancie_103
Hub_Event_Script_Diancie_102:
# 1317 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ABSOLITE_BUYABLE, Hub_Event_Script_Diancie_106
Hub_Event_Script_Diancie_105:
# 1321 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GLALITITE_BUYABLE, Hub_Event_Script_Diancie_109
Hub_Event_Script_Diancie_108:
# 1325 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SALAMENCITE_BUYABLE, Hub_Event_Script_Diancie_112
Hub_Event_Script_Diancie_111:
# 1329 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_METAGROSSITE_BUYABLE, Hub_Event_Script_Diancie_115
Hub_Event_Script_Diancie_114:
# 1333 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_LOPUNNITE_BUYABLE, Hub_Event_Script_Diancie_118
Hub_Event_Script_Diancie_117:
# 1337 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GARCHOMPITE_BUYABLE, Hub_Event_Script_Diancie_121
Hub_Event_Script_Diancie_120:
# 1341 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_LUCARIONITE_BUYABLE, Hub_Event_Script_Diancie_124
Hub_Event_Script_Diancie_123:
# 1345 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ABOMASITE_BUYABLE, Hub_Event_Script_Diancie_127
Hub_Event_Script_Diancie_126:
# 1349 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GALLADITE_BUYABLE, Hub_Event_Script_Diancie_130
Hub_Event_Script_Diancie_129:
# 1353 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CLEFABLITE_BUYABLE, Hub_Event_Script_Diancie_133
Hub_Event_Script_Diancie_132:
# 1357 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_VICTREEBELITE_BUYABLE, Hub_Event_Script_Diancie_136
Hub_Event_Script_Diancie_135:
# 1361 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_STARMINITE_BUYABLE, Hub_Event_Script_Diancie_139
Hub_Event_Script_Diancie_138:
# 1365 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DRAGONINITE_BUYABLE, Hub_Event_Script_Diancie_142
Hub_Event_Script_Diancie_141:
# 1369 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MEGANIUMITE_BUYABLE, Hub_Event_Script_Diancie_145
Hub_Event_Script_Diancie_144:
# 1373 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_FERALIGITE_BUYABLE, Hub_Event_Script_Diancie_148
Hub_Event_Script_Diancie_147:
# 1377 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SKARMORITE_BUYABLE, Hub_Event_Script_Diancie_151
Hub_Event_Script_Diancie_150:
# 1381 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_FROSLASSITE_BUYABLE, Hub_Event_Script_Diancie_154
Hub_Event_Script_Diancie_153:
# 1385 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_EMBOARITE_BUYABLE, Hub_Event_Script_Diancie_157
Hub_Event_Script_Diancie_156:
# 1389 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_EXCADRITE_BUYABLE, Hub_Event_Script_Diancie_160
Hub_Event_Script_Diancie_159:
# 1393 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCOLIPITE_BUYABLE, Hub_Event_Script_Diancie_163
Hub_Event_Script_Diancie_162:
# 1397 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCRAFTINITE_BUYABLE, Hub_Event_Script_Diancie_166
Hub_Event_Script_Diancie_165:
# 1401 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_EELEKTROSSITE_BUYABLE, Hub_Event_Script_Diancie_169
Hub_Event_Script_Diancie_168:
# 1405 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHANDELURITE_BUYABLE, Hub_Event_Script_Diancie_172
Hub_Event_Script_Diancie_171:
# 1409 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHESNAUGHTITE_BUYABLE, Hub_Event_Script_Diancie_175
Hub_Event_Script_Diancie_174:
# 1413 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DELPHOXITE_BUYABLE, Hub_Event_Script_Diancie_178
Hub_Event_Script_Diancie_177:
# 1417 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GRENINJITE_BUYABLE, Hub_Event_Script_Diancie_181
Hub_Event_Script_Diancie_180:
# 1421 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_PYROARITE_BUYABLE, Hub_Event_Script_Diancie_184
Hub_Event_Script_Diancie_183:
# 1425 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MALAMARITE_BUYABLE, Hub_Event_Script_Diancie_187
Hub_Event_Script_Diancie_186:
# 1429 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BARBARACITE_BUYABLE, Hub_Event_Script_Diancie_190
Hub_Event_Script_Diancie_189:
# 1433 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DRAGALGITE_BUYABLE, Hub_Event_Script_Diancie_193
Hub_Event_Script_Diancie_192:
# 1437 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_HAWLUCHANITE_BUYABLE, Hub_Event_Script_Diancie_196
Hub_Event_Script_Diancie_195:
# 1441 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DRAMPANITE_BUYABLE, Hub_Event_Script_Diancie_199
Hub_Event_Script_Diancie_198:
# 1445 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_FALINKSITE_BUYABLE, Hub_Event_Script_Diancie_202
Hub_Event_Script_Diancie_201:
# 1449 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_RAICHUNITE_X_BUYABLE, Hub_Event_Script_Diancie_205
Hub_Event_Script_Diancie_204:
# 1453 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_RAICHUNITE_Y_BUYABLE, Hub_Event_Script_Diancie_208
Hub_Event_Script_Diancie_207:
# 1457 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHIMECHITE_BUYABLE, Hub_Event_Script_Diancie_211
Hub_Event_Script_Diancie_210:
# 1461 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_STARAPTITE_BUYABLE, Hub_Event_Script_Diancie_214
Hub_Event_Script_Diancie_213:
# 1465 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GOLURKITE_BUYABLE, Hub_Event_Script_Diancie_217
Hub_Event_Script_Diancie_216:
# 1469 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MEOWSTICITE_BUYABLE, Hub_Event_Script_Diancie_220
Hub_Event_Script_Diancie_219:
# 1473 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CRABOMINITE_BUYABLE, Hub_Event_Script_Diancie_223
Hub_Event_Script_Diancie_222:
# 1477 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GOLISOPITE_BUYABLE, Hub_Event_Script_Diancie_226
Hub_Event_Script_Diancie_225:
# 1481 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCOVILLAINITE_BUYABLE, Hub_Event_Script_Diancie_229
Hub_Event_Script_Diancie_228:
# 1485 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GLIMMORANITE_BUYABLE, Hub_Event_Script_Diancie_232
Hub_Event_Script_Diancie_231:
# 1489 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BAXCALIBRITE_BUYABLE, Hub_Event_Script_Diancie_235
Hub_Event_Script_Diancie_234:
# 1494 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Diancie_238
# 2545 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_155
# 2550 "data/maps/Hub1/scripts.pory"
	waitmessage
# 2551 "data/maps/Hub1/scripts.pory"
	releaseall
Hub_Event_Script_Diancie_237:
# 2553 "data/maps/Hub1/scripts.pory"
	hidemoneybox
	goto Hub_Event_Script_Diancie_1

Hub_Event_Script_Diancie_6:
# 1177 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ITEM_CHARIZARDITE_X_UNLOCKED, Hub_Event_Script_Diancie_3
	goto Hub_Event_Script_Diancie_5

Hub_Event_Script_Diancie_9:
# 1169 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ITEM_CHARIZARDITE_X_UNLOCKED, Hub_Event_Script_Diancie_2
	goto Hub_Event_Script_Diancie_7

Hub_Event_Script_Diancie_13:
# 1194 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_3, ITEM_VENUSAURITE
# 1195 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_12

Hub_Event_Script_Diancie_16:
# 1198 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_4, ITEM_CHARIZARDITE_Y
# 1199 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_15

Hub_Event_Script_Diancie_19:
# 1202 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_5, ITEM_BLASTOISINITE
# 1203 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_18

Hub_Event_Script_Diancie_22:
# 1206 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_6, ITEM_BEEDRILLITE
# 1207 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_21

Hub_Event_Script_Diancie_25:
# 1210 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_7, ITEM_PIDGEOTITE
# 1211 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_24

Hub_Event_Script_Diancie_28:
# 1214 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_8, ITEM_ALAKAZITE
# 1215 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_27

Hub_Event_Script_Diancie_31:
# 1218 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_9, ITEM_SLOWBRONITE
# 1219 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_30

Hub_Event_Script_Diancie_34:
# 1222 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_10, ITEM_GENGARITE
# 1223 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_33

Hub_Event_Script_Diancie_37:
# 1226 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_11, ITEM_KANGASKHANITE
# 1227 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_36

Hub_Event_Script_Diancie_40:
# 1230 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_12, ITEM_PINSIRITE
# 1231 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_39

Hub_Event_Script_Diancie_43:
# 1234 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_13, ITEM_GYARADOSITE
# 1235 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_42

Hub_Event_Script_Diancie_46:
# 1238 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_14, ITEM_AERODACTYLITE
# 1239 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_45

Hub_Event_Script_Diancie_49:
# 1242 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_15, ITEM_AMPHAROSITE
# 1243 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_48

Hub_Event_Script_Diancie_52:
# 1246 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_16, ITEM_STEELIXITE
# 1247 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_51

Hub_Event_Script_Diancie_55:
# 1250 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_17, ITEM_SCIZORITE
# 1251 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_54

Hub_Event_Script_Diancie_58:
# 1254 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_18, ITEM_HERACRONITE
# 1255 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_57

Hub_Event_Script_Diancie_61:
# 1258 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_19, ITEM_HOUNDOOMINITE
# 1259 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_60

Hub_Event_Script_Diancie_64:
# 1262 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_20, ITEM_TYRANITARITE
# 1263 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_63

Hub_Event_Script_Diancie_67:
# 1266 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_21, ITEM_SCEPTILITE
# 1267 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_66

Hub_Event_Script_Diancie_70:
# 1270 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_22, ITEM_BLAZIKENITE
# 1271 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_69

Hub_Event_Script_Diancie_73:
# 1274 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_23, ITEM_SWAMPERTITE
# 1275 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_72

Hub_Event_Script_Diancie_76:
# 1278 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_24, ITEM_GARDEVOIRITE
# 1279 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_75

Hub_Event_Script_Diancie_79:
# 1282 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_25, ITEM_SABLENITE
# 1283 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_78

Hub_Event_Script_Diancie_82:
# 1286 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_26, ITEM_MAWILITE
# 1287 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_81

Hub_Event_Script_Diancie_85:
# 1290 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_27, ITEM_AGGRONITE
# 1291 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_84

Hub_Event_Script_Diancie_88:
# 1294 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_28, ITEM_MEDICHAMITE
# 1295 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_87

Hub_Event_Script_Diancie_91:
# 1298 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_29, ITEM_MANECTITE
# 1299 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_90

Hub_Event_Script_Diancie_94:
# 1302 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_30, ITEM_SHARPEDONITE
# 1303 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_93

Hub_Event_Script_Diancie_97:
# 1306 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_31, ITEM_CAMERUPTITE
# 1307 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_96

Hub_Event_Script_Diancie_100:
# 1310 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_32, ITEM_ALTARIANITE
# 1311 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_99

Hub_Event_Script_Diancie_103:
# 1314 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_33, ITEM_BANETTITE
# 1315 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_102

Hub_Event_Script_Diancie_106:
# 1318 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_34, ITEM_ABSOLITE
# 1319 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_105

Hub_Event_Script_Diancie_109:
# 1322 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_35, ITEM_GLALITITE
# 1323 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_108

Hub_Event_Script_Diancie_112:
# 1326 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_36, ITEM_SALAMENCITE
# 1327 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_111

Hub_Event_Script_Diancie_115:
# 1330 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_37, ITEM_METAGROSSITE
# 1331 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_114

Hub_Event_Script_Diancie_118:
# 1334 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_38, ITEM_LOPUNNITE
# 1335 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_117

Hub_Event_Script_Diancie_121:
# 1338 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_39, ITEM_GARCHOMPITE
# 1339 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_120

Hub_Event_Script_Diancie_124:
# 1342 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_40, ITEM_LUCARIONITE
# 1343 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_123

Hub_Event_Script_Diancie_127:
# 1346 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_41, ITEM_ABOMASITE
# 1347 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_126

Hub_Event_Script_Diancie_130:
# 1350 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_42, ITEM_GALLADITE
# 1351 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_129

Hub_Event_Script_Diancie_133:
# 1354 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_43, ITEM_CLEFABLITE
# 1355 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_132

Hub_Event_Script_Diancie_136:
# 1358 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_44, ITEM_VICTREEBELITE
# 1359 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_135

Hub_Event_Script_Diancie_139:
# 1362 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_45, ITEM_STARMINITE
# 1363 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_138

Hub_Event_Script_Diancie_142:
# 1366 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_46, ITEM_DRAGONINITE
# 1367 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_141

Hub_Event_Script_Diancie_145:
# 1370 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_47, ITEM_MEGANIUMITE
# 1371 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_144

Hub_Event_Script_Diancie_148:
# 1374 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_48, ITEM_FERALIGITE
# 1375 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_147

Hub_Event_Script_Diancie_151:
# 1378 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_49, ITEM_SKARMORITE
# 1379 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_150

Hub_Event_Script_Diancie_154:
# 1382 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_50, ITEM_FROSLASSITE
# 1383 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_153

Hub_Event_Script_Diancie_157:
# 1386 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_51, ITEM_EMBOARITE
# 1387 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_156

Hub_Event_Script_Diancie_160:
# 1390 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_52, ITEM_EXCADRITE
# 1391 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_159

Hub_Event_Script_Diancie_163:
# 1394 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_53, ITEM_SCOLIPITE
# 1395 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_162

Hub_Event_Script_Diancie_166:
# 1398 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_54, ITEM_SCRAFTINITE
# 1399 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_165

Hub_Event_Script_Diancie_169:
# 1402 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_55, ITEM_EELEKTROSSITE
# 1403 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_168

Hub_Event_Script_Diancie_172:
# 1406 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_56, ITEM_CHANDELURITE
# 1407 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_171

Hub_Event_Script_Diancie_175:
# 1410 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_57, ITEM_CHESNAUGHTITE
# 1411 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_174

Hub_Event_Script_Diancie_178:
# 1414 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_58, ITEM_DELPHOXITE
# 1415 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_177

Hub_Event_Script_Diancie_181:
# 1418 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_59, ITEM_GRENINJITE
# 1419 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_180

Hub_Event_Script_Diancie_184:
# 1422 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_60, ITEM_PYROARITE
# 1423 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_183

Hub_Event_Script_Diancie_187:
# 1426 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_61, ITEM_MALAMARITE
# 1427 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_186

Hub_Event_Script_Diancie_190:
# 1430 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_62, ITEM_BARBARACITE
# 1431 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_189

Hub_Event_Script_Diancie_193:
# 1434 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_63, ITEM_DRAGALGITE
# 1435 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_192

Hub_Event_Script_Diancie_196:
# 1438 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_64, ITEM_HAWLUCHANITE
# 1439 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_195

Hub_Event_Script_Diancie_199:
# 1442 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_65, ITEM_DRAMPANITE
# 1443 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_198

Hub_Event_Script_Diancie_202:
# 1446 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_66, ITEM_FALINKSITE
# 1447 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_201

Hub_Event_Script_Diancie_205:
# 1450 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_67, ITEM_RAICHUNITE_X
# 1451 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_204

Hub_Event_Script_Diancie_208:
# 1454 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_68, ITEM_RAICHUNITE_Y
# 1455 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_207

Hub_Event_Script_Diancie_211:
# 1458 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_69, ITEM_CHIMECHITE
# 1459 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_210

Hub_Event_Script_Diancie_214:
# 1462 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_70, ITEM_STARAPTITE
# 1463 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_213

Hub_Event_Script_Diancie_217:
# 1466 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_71, ITEM_GOLURKITE
# 1467 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_216

Hub_Event_Script_Diancie_220:
# 1470 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_72, ITEM_MEOWSTICITE
# 1471 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_219

Hub_Event_Script_Diancie_223:
# 1474 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_73, ITEM_CRABOMINITE
# 1475 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_222

Hub_Event_Script_Diancie_226:
# 1478 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_74, ITEM_GOLISOPITE
# 1479 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_225

Hub_Event_Script_Diancie_229:
# 1482 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_75, ITEM_SCOVILLAINITE
# 1483 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_228

Hub_Event_Script_Diancie_232:
# 1486 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_76, ITEM_GLIMMORANITE
# 1487 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_231

Hub_Event_Script_Diancie_235:
# 1490 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_77, ITEM_BAXCALIBRITE
# 1491 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_234

Hub_Event_Script_Diancie_238:
# 1496 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_NEW_MEGA_BUYABLE, Hub_Event_Script_Diancie_242
# 1503 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_79
Hub_Event_Script_Diancie_241:
# 1505 "data/maps/Hub1/scripts.pory"
	showmoneybox 17, 10
# 1506 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 4, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 1507 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 1508 "data/maps/Hub1/scripts.pory"
	case ITEM_VENUSAURITE, Hub_Event_Script_Diancie_246
# 1522 "data/maps/Hub1/scripts.pory"
	case ITEM_CHARIZARDITE_Y, Hub_Event_Script_Diancie_247
# 1536 "data/maps/Hub1/scripts.pory"
	case ITEM_BLASTOISINITE, Hub_Event_Script_Diancie_248
# 1550 "data/maps/Hub1/scripts.pory"
	case ITEM_BEEDRILLITE, Hub_Event_Script_Diancie_249
# 1564 "data/maps/Hub1/scripts.pory"
	case ITEM_PIDGEOTITE, Hub_Event_Script_Diancie_250
# 1578 "data/maps/Hub1/scripts.pory"
	case ITEM_ALAKAZITE, Hub_Event_Script_Diancie_251
# 1592 "data/maps/Hub1/scripts.pory"
	case ITEM_SLOWBRONITE, Hub_Event_Script_Diancie_252
# 1606 "data/maps/Hub1/scripts.pory"
	case ITEM_GENGARITE, Hub_Event_Script_Diancie_253
# 1620 "data/maps/Hub1/scripts.pory"
	case ITEM_KANGASKHANITE, Hub_Event_Script_Diancie_254
# 1634 "data/maps/Hub1/scripts.pory"
	case ITEM_PINSIRITE, Hub_Event_Script_Diancie_255
# 1648 "data/maps/Hub1/scripts.pory"
	case ITEM_GYARADOSITE, Hub_Event_Script_Diancie_256
# 1662 "data/maps/Hub1/scripts.pory"
	case ITEM_AERODACTYLITE, Hub_Event_Script_Diancie_257
# 1676 "data/maps/Hub1/scripts.pory"
	case ITEM_AMPHAROSITE, Hub_Event_Script_Diancie_258
# 1690 "data/maps/Hub1/scripts.pory"
	case ITEM_STEELIXITE, Hub_Event_Script_Diancie_259
# 1704 "data/maps/Hub1/scripts.pory"
	case ITEM_SCIZORITE, Hub_Event_Script_Diancie_260
# 1718 "data/maps/Hub1/scripts.pory"
	case ITEM_HERACRONITE, Hub_Event_Script_Diancie_261
# 1732 "data/maps/Hub1/scripts.pory"
	case ITEM_HOUNDOOMINITE, Hub_Event_Script_Diancie_262
# 1746 "data/maps/Hub1/scripts.pory"
	case ITEM_TYRANITARITE, Hub_Event_Script_Diancie_263
# 1760 "data/maps/Hub1/scripts.pory"
	case ITEM_SCEPTILITE, Hub_Event_Script_Diancie_264
# 1774 "data/maps/Hub1/scripts.pory"
	case ITEM_BLAZIKENITE, Hub_Event_Script_Diancie_265
# 1788 "data/maps/Hub1/scripts.pory"
	case ITEM_SWAMPERTITE, Hub_Event_Script_Diancie_266
# 1802 "data/maps/Hub1/scripts.pory"
	case ITEM_GARDEVOIRITE, Hub_Event_Script_Diancie_267
# 1816 "data/maps/Hub1/scripts.pory"
	case ITEM_SABLENITE, Hub_Event_Script_Diancie_268
# 1830 "data/maps/Hub1/scripts.pory"
	case ITEM_MAWILITE, Hub_Event_Script_Diancie_269
# 1844 "data/maps/Hub1/scripts.pory"
	case ITEM_AGGRONITE, Hub_Event_Script_Diancie_270
# 1858 "data/maps/Hub1/scripts.pory"
	case ITEM_MEDICHAMITE, Hub_Event_Script_Diancie_271
# 1872 "data/maps/Hub1/scripts.pory"
	case ITEM_MANECTITE, Hub_Event_Script_Diancie_272
# 1886 "data/maps/Hub1/scripts.pory"
	case ITEM_SHARPEDONITE, Hub_Event_Script_Diancie_273
# 1900 "data/maps/Hub1/scripts.pory"
	case ITEM_CAMERUPTITE, Hub_Event_Script_Diancie_274
# 1914 "data/maps/Hub1/scripts.pory"
	case ITEM_ALTARIANITE, Hub_Event_Script_Diancie_275
# 1928 "data/maps/Hub1/scripts.pory"
	case ITEM_BANETTITE, Hub_Event_Script_Diancie_276
# 1942 "data/maps/Hub1/scripts.pory"
	case ITEM_ABSOLITE, Hub_Event_Script_Diancie_277
# 1956 "data/maps/Hub1/scripts.pory"
	case ITEM_GLALITITE, Hub_Event_Script_Diancie_278
# 1970 "data/maps/Hub1/scripts.pory"
	case ITEM_SALAMENCITE, Hub_Event_Script_Diancie_279
# 1984 "data/maps/Hub1/scripts.pory"
	case ITEM_LOPUNNITE, Hub_Event_Script_Diancie_280
# 1998 "data/maps/Hub1/scripts.pory"
	case ITEM_GARCHOMPITE, Hub_Event_Script_Diancie_281
# 2012 "data/maps/Hub1/scripts.pory"
	case ITEM_LUCARIONITE, Hub_Event_Script_Diancie_282
# 2026 "data/maps/Hub1/scripts.pory"
	case ITEM_ABOMASITE, Hub_Event_Script_Diancie_283
# 2040 "data/maps/Hub1/scripts.pory"
	case ITEM_GALLADITE, Hub_Event_Script_Diancie_284
# 2054 "data/maps/Hub1/scripts.pory"
	case ITEM_CLEFABLITE, Hub_Event_Script_Diancie_285
# 2068 "data/maps/Hub1/scripts.pory"
	case ITEM_VICTREEBELITE, Hub_Event_Script_Diancie_286
# 2082 "data/maps/Hub1/scripts.pory"
	case ITEM_STARMINITE, Hub_Event_Script_Diancie_287
# 2096 "data/maps/Hub1/scripts.pory"
	case ITEM_DRAGONINITE, Hub_Event_Script_Diancie_288
# 2110 "data/maps/Hub1/scripts.pory"
	case ITEM_MEGANIUMITE, Hub_Event_Script_Diancie_289
# 2124 "data/maps/Hub1/scripts.pory"
	case ITEM_FERALIGITE, Hub_Event_Script_Diancie_290
# 2138 "data/maps/Hub1/scripts.pory"
	case ITEM_SKARMORITE, Hub_Event_Script_Diancie_291
# 2152 "data/maps/Hub1/scripts.pory"
	case ITEM_FROSLASSITE, Hub_Event_Script_Diancie_292
# 2166 "data/maps/Hub1/scripts.pory"
	case ITEM_EMBOARITE, Hub_Event_Script_Diancie_293
# 2180 "data/maps/Hub1/scripts.pory"
	case ITEM_EXCADRITE, Hub_Event_Script_Diancie_294
# 2194 "data/maps/Hub1/scripts.pory"
	case ITEM_SCOLIPITE, Hub_Event_Script_Diancie_295
# 2208 "data/maps/Hub1/scripts.pory"
	case ITEM_SCRAFTINITE, Hub_Event_Script_Diancie_296
# 2222 "data/maps/Hub1/scripts.pory"
	case ITEM_EELEKTROSSITE, Hub_Event_Script_Diancie_297
# 2236 "data/maps/Hub1/scripts.pory"
	case ITEM_CHANDELURITE, Hub_Event_Script_Diancie_298
# 2250 "data/maps/Hub1/scripts.pory"
	case ITEM_CHESNAUGHTITE, Hub_Event_Script_Diancie_299
# 2264 "data/maps/Hub1/scripts.pory"
	case ITEM_DELPHOXITE, Hub_Event_Script_Diancie_300
# 2278 "data/maps/Hub1/scripts.pory"
	case ITEM_GRENINJITE, Hub_Event_Script_Diancie_301
# 2292 "data/maps/Hub1/scripts.pory"
	case ITEM_PYROARITE, Hub_Event_Script_Diancie_302
# 2306 "data/maps/Hub1/scripts.pory"
	case ITEM_MALAMARITE, Hub_Event_Script_Diancie_303
# 2320 "data/maps/Hub1/scripts.pory"
	case ITEM_BARBARACITE, Hub_Event_Script_Diancie_304
# 2334 "data/maps/Hub1/scripts.pory"
	case ITEM_DRAGALGITE, Hub_Event_Script_Diancie_305
# 2348 "data/maps/Hub1/scripts.pory"
	case ITEM_HAWLUCHANITE, Hub_Event_Script_Diancie_306
# 2362 "data/maps/Hub1/scripts.pory"
	case ITEM_DRAMPANITE, Hub_Event_Script_Diancie_307
# 2376 "data/maps/Hub1/scripts.pory"
	case ITEM_FALINKSITE, Hub_Event_Script_Diancie_308
# 2390 "data/maps/Hub1/scripts.pory"
	case ITEM_RAICHUNITE_X, Hub_Event_Script_Diancie_309
# 2404 "data/maps/Hub1/scripts.pory"
	case ITEM_RAICHUNITE_Y, Hub_Event_Script_Diancie_310
# 2418 "data/maps/Hub1/scripts.pory"
	case ITEM_CHIMECHITE, Hub_Event_Script_Diancie_311
# 2432 "data/maps/Hub1/scripts.pory"
	case ITEM_STARAPTITE, Hub_Event_Script_Diancie_312
# 2446 "data/maps/Hub1/scripts.pory"
	case ITEM_GOLURKITE, Hub_Event_Script_Diancie_313
# 2460 "data/maps/Hub1/scripts.pory"
	case ITEM_MEOWSTICITE, Hub_Event_Script_Diancie_314
# 2474 "data/maps/Hub1/scripts.pory"
	case ITEM_CRABOMINITE, Hub_Event_Script_Diancie_315
# 2488 "data/maps/Hub1/scripts.pory"
	case ITEM_GOLISOPITE, Hub_Event_Script_Diancie_316
# 2502 "data/maps/Hub1/scripts.pory"
	case ITEM_SCOVILLAINITE, Hub_Event_Script_Diancie_317
# 2516 "data/maps/Hub1/scripts.pory"
	case ITEM_GLIMMORANITE, Hub_Event_Script_Diancie_318
# 2530 "data/maps/Hub1/scripts.pory"
	case ITEM_BAXCALIBRITE, Hub_Event_Script_Diancie_319
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_242:
# 1497 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_78
# 1500 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_NEW_MEGA_BUYABLE
	goto Hub_Event_Script_Diancie_241

Hub_Event_Script_Diancie_246:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_320
# 1519 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_247:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_323
# 1533 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_248:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_326
# 1547 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_249:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_329
# 1561 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_250:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_332
# 1575 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_251:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_335
# 1589 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_252:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_338
# 1603 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_253:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_341
# 1617 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_254:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_344
# 1631 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_255:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_347
# 1645 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_256:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_350
# 1659 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_257:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_353
# 1673 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_258:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_356
# 1687 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_259:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_359
# 1701 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_260:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_362
# 1715 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_261:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_365
# 1729 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_262:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_368
# 1743 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_263:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_371
# 1757 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_264:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_374
# 1771 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_265:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_377
# 1785 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_266:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_380
# 1799 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_267:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_383
# 1813 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_268:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_386
# 1827 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_269:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_389
# 1841 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_270:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_392
# 1855 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_271:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_395
# 1869 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_272:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_398
# 1883 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_273:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_401
# 1897 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_274:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_404
# 1911 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_275:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_407
# 1925 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_276:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_410
# 1939 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_277:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_413
# 1953 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_278:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_416
# 1967 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_279:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_419
# 1981 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_280:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_422
# 1995 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_281:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_425
# 2009 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_282:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_428
# 2023 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_283:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_431
# 2037 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_284:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_434
# 2051 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_285:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_437
# 2065 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_286:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_440
# 2079 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_287:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_443
# 2093 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_288:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_446
# 2107 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_289:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_449
# 2121 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_290:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_452
# 2135 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_291:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_455
# 2149 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_292:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_458
# 2163 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_293:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_461
# 2177 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_294:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_464
# 2191 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_295:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_467
# 2205 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_296:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_470
# 2219 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_297:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_473
# 2233 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_298:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_476
# 2247 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_299:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_479
# 2261 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_300:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_482
# 2275 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_301:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_485
# 2289 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_302:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_488
# 2303 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_303:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_491
# 2317 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_304:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_494
# 2331 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_305:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_497
# 2345 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_306:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_500
# 2359 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_307:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_503
# 2373 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_308:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_506
# 2387 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_309:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_509
# 2401 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_310:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_512
# 2415 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_311:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_515
# 2429 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_312:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_518
# 2443 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_313:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_521
# 2457 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_314:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_524
# 2471 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_315:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_527
# 2485 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_316:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_530
# 2499 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_317:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_533
# 2513 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_318:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_536
# 2527 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_319:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Diancie_539
# 2541 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_320:
# 1510 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_VENUSAURITE_UNLOCKED
# 1511 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_VENUSAURITE_BUYABLE
# 1512 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_VENUSAURITE, 1
# 1513 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1514 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1515 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1516 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_80
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_323:
# 1524 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHARIZARDITE_Y_UNLOCKED
# 1525 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHARIZARDITE_Y_BUYABLE
# 1526 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHARIZARDITE_Y, 1
# 1527 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1528 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1529 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1530 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_82
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_326:
# 1538 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BLASTOISINITE_UNLOCKED
# 1539 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BLASTOISINITE_BUYABLE
# 1540 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BLASTOISINITE, 1
# 1541 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1542 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1543 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1544 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_83
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_329:
# 1552 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BEEDRILLITE_UNLOCKED
# 1553 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BEEDRILLITE_BUYABLE
# 1554 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BEEDRILLITE, 1
# 1555 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1556 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1557 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1558 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_84
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_332:
# 1566 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_PIDGEOTITE_UNLOCKED
# 1567 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_PIDGEOTITE_BUYABLE
# 1568 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_PIDGEOTITE, 1
# 1569 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1570 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1571 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1572 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_85
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_335:
# 1580 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ALAKAZITE_UNLOCKED
# 1581 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ALAKAZITE_BUYABLE
# 1582 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ALAKAZITE, 1
# 1583 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1584 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1585 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1586 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_86
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_338:
# 1594 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SLOWBRONITE_UNLOCKED
# 1595 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SLOWBRONITE_BUYABLE
# 1596 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SLOWBRONITE, 1
# 1597 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1598 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1599 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1600 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_87
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_341:
# 1608 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GENGARITE_UNLOCKED
# 1609 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GENGARITE_BUYABLE
# 1610 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GENGARITE, 1
# 1611 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1612 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1613 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1614 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_88
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_344:
# 1622 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_KANGASKHANITE_UNLOCKED
# 1623 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_KANGASKHANITE_BUYABLE
# 1624 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_KANGASKHANITE, 1
# 1625 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1626 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1627 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1628 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_89
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_347:
# 1636 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_PINSIRITE_UNLOCKED
# 1637 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_PINSIRITE_BUYABLE
# 1638 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_PINSIRITE, 1
# 1639 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1640 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1641 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1642 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_90
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_350:
# 1650 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GYARADOSITE_UNLOCKED
# 1651 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GYARADOSITE_BUYABLE
# 1652 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GYARADOSITE, 1
# 1653 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1654 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1655 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1656 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_91
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_353:
# 1664 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_AERODACTYLITE_UNLOCKED
# 1665 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_AERODACTYLITE_BUYABLE
# 1666 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_AERODACTYLITE, 1
# 1667 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1668 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1669 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1670 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_92
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_356:
# 1678 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_AMPHAROSITE_UNLOCKED
# 1679 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_AMPHAROSITE_BUYABLE
# 1680 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_AMPHAROSITE, 1
# 1681 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1682 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1683 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1684 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_93
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_359:
# 1692 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_STEELIXITE_UNLOCKED
# 1693 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_STEELIXITE_BUYABLE
# 1694 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_STEELIXITE, 1
# 1695 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1696 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1697 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1698 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_94
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_362:
# 1706 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCIZORITE_UNLOCKED
# 1707 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCIZORITE_BUYABLE
# 1708 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCIZORITE, 1
# 1709 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1710 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1711 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1712 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_95
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_365:
# 1720 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_HERACRONITE_UNLOCKED
# 1721 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_HERACRONITE_BUYABLE
# 1722 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_HERACRONITE, 1
# 1723 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1724 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1725 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1726 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_96
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_368:
# 1734 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_HOUNDOOMINITE_UNLOCKED
# 1735 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_HOUNDOOMINITE_BUYABLE
# 1736 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_HOUNDOOMINITE, 1
# 1737 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1738 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1739 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1740 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_97
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_371:
# 1748 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_TYRANITARITE_UNLOCKED
# 1749 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_TYRANITARITE_BUYABLE
# 1750 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TYRANITARITE, 1
# 1751 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1752 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1753 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1754 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_98
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_374:
# 1762 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCEPTILITE_UNLOCKED
# 1763 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCEPTILITE_BUYABLE
# 1764 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCEPTILITE, 1
# 1765 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1766 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1767 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1768 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_99
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_377:
# 1776 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BLAZIKENITE_UNLOCKED
# 1777 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BLAZIKENITE_BUYABLE
# 1778 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BLAZIKENITE, 1
# 1779 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1780 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1781 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1782 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_100
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_380:
# 1790 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SWAMPERTITE_UNLOCKED
# 1791 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SWAMPERTITE_BUYABLE
# 1792 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SWAMPERTITE, 1
# 1793 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1794 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1795 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1796 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_101
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_383:
# 1804 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GARDEVOIRITE_UNLOCKED
# 1805 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GARDEVOIRITE_BUYABLE
# 1806 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GARDEVOIRITE, 1
# 1807 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1808 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1809 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1810 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_102
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_386:
# 1818 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SABLENITE_UNLOCKED
# 1819 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SABLENITE_BUYABLE
# 1820 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SABLENITE, 1
# 1821 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1822 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1823 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1824 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_103
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_389:
# 1832 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MAWILITE_UNLOCKED
# 1833 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MAWILITE_BUYABLE
# 1834 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MAWILITE, 1
# 1835 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1836 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1837 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1838 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_104
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_392:
# 1846 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_AGGRONITE_UNLOCKED
# 1847 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_AGGRONITE_BUYABLE
# 1848 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_AGGRONITE, 1
# 1849 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1850 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1851 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1852 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_105
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_395:
# 1860 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MEDICHAMITE_UNLOCKED
# 1861 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MEDICHAMITE_BUYABLE
# 1862 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEDICHAMITE, 1
# 1863 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1864 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1865 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1866 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_106
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_398:
# 1874 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MANECTITE_UNLOCKED
# 1875 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MANECTITE_BUYABLE
# 1876 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MANECTITE, 1
# 1877 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1878 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1879 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1880 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_107
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_401:
# 1888 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SHARPEDONITE_UNLOCKED
# 1889 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SHARPEDONITE_BUYABLE
# 1890 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SHARPEDONITE, 1
# 1891 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1892 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1893 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1894 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_108
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_404:
# 1902 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CAMERUPTITE_UNLOCKED
# 1903 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CAMERUPTITE_BUYABLE
# 1904 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CAMERUPTITE, 1
# 1905 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1906 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1907 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1908 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_109
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_407:
# 1916 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ALTARIANITE_UNLOCKED
# 1917 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ALTARIANITE_BUYABLE
# 1918 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ALTARIANITE, 1
# 1919 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1920 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1921 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1922 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_110
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_410:
# 1930 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BANETTITE_UNLOCKED
# 1931 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BANETTITE_BUYABLE
# 1932 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BANETTITE, 1
# 1933 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1934 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1935 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1936 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_111
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_413:
# 1944 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ABSOLITE_UNLOCKED
# 1945 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ABSOLITE_BUYABLE
# 1946 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ABSOLITE, 1
# 1947 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1948 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1949 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1950 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_112
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_416:
# 1958 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GLALITITE_UNLOCKED
# 1959 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GLALITITE_BUYABLE
# 1960 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GLALITITE, 1
# 1961 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1962 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1963 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1964 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_113
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_419:
# 1972 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SALAMENCITE_UNLOCKED
# 1973 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SALAMENCITE_BUYABLE
# 1974 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SALAMENCITE, 1
# 1975 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1976 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1977 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1978 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_114
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_422:
# 1986 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_LOPUNNITE_UNLOCKED
# 1987 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_LOPUNNITE_BUYABLE
# 1988 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LOPUNNITE, 1
# 1989 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 1990 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1991 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1992 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_115
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_425:
# 2000 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GARCHOMPITE_UNLOCKED
# 2001 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GARCHOMPITE_BUYABLE
# 2002 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GARCHOMPITE, 1
# 2003 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2004 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2005 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2006 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_116
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_428:
# 2014 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_LUCARIONITE_UNLOCKED
# 2015 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_LUCARIONITE_BUYABLE
# 2016 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUCARIONITE, 1
# 2017 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2018 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2019 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2020 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_117
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_431:
# 2028 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ABOMASITE_UNLOCKED
# 2029 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ABOMASITE_BUYABLE
# 2030 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ABOMASITE, 1
# 2031 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2032 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2033 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2034 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_118
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_434:
# 2042 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GALLADITE_UNLOCKED
# 2043 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GALLADITE_BUYABLE
# 2044 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GALLADITE, 1
# 2045 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2046 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2047 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2048 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_119
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_437:
# 2056 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CLEFABLITE_UNLOCKED
# 2057 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CLEFABLITE_BUYABLE
# 2058 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CLEFABLITE, 1
# 2059 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2060 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2061 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2062 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_120
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_440:
# 2070 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_VICTREEBELITE_UNLOCKED
# 2071 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_VICTREEBELITE_BUYABLE
# 2072 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_VICTREEBELITE, 1
# 2073 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2074 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2075 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2076 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_121
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_443:
# 2084 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_STARMINITE_UNLOCKED
# 2085 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_STARMINITE_BUYABLE
# 2086 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_STARMINITE, 1
# 2087 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2088 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2089 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2090 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_122
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_446:
# 2098 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DRAGONINITE_UNLOCKED
# 2099 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DRAGONINITE_BUYABLE
# 2100 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DRAGONINITE, 1
# 2101 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2102 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2103 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2104 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_123
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_449:
# 2112 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MEGANIUMITE_UNLOCKED
# 2113 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MEGANIUMITE_BUYABLE
# 2114 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEGANIUMITE, 1
# 2115 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2116 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2117 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2118 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_124
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_452:
# 2126 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_FERALIGITE_UNLOCKED
# 2127 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_FERALIGITE_BUYABLE
# 2128 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_FERALIGITE, 1
# 2129 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2130 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2131 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2132 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_125
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_455:
# 2140 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SKARMORITE_UNLOCKED
# 2141 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SKARMORITE_BUYABLE
# 2142 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SKARMORITE, 1
# 2143 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2144 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2145 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2146 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_126
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_458:
# 2154 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_FROSLASSITE_UNLOCKED
# 2155 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_FROSLASSITE_BUYABLE
# 2156 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_FROSLASSITE, 1
# 2157 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2158 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2159 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2160 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_127
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_461:
# 2168 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_EMBOARITE_UNLOCKED
# 2169 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_EMBOARITE_BUYABLE
# 2170 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_EMBOARITE, 1
# 2171 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2172 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2173 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2174 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_128
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_464:
# 2182 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_EXCADRITE_UNLOCKED
# 2183 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_EXCADRITE_BUYABLE
# 2184 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_EXCADRITE, 1
# 2185 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2186 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2187 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2188 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_129
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_467:
# 2196 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCOLIPITE_UNLOCKED
# 2197 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCOLIPITE_BUYABLE
# 2198 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCOLIPITE, 1
# 2199 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2200 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2201 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2202 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_130
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_470:
# 2210 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCRAFTINITE_UNLOCKED
# 2211 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCRAFTINITE_BUYABLE
# 2212 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCRAFTINITE, 1
# 2213 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2214 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2215 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2216 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_131
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_473:
# 2224 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_EELEKTROSSITE_UNLOCKED
# 2225 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_EELEKTROSSITE_BUYABLE
# 2226 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_EELEKTROSSITE, 1
# 2227 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2228 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2229 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2230 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_132
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_476:
# 2238 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHANDELURITE_UNLOCKED
# 2239 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHANDELURITE_BUYABLE
# 2240 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHANDELURITE, 1
# 2241 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2242 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2243 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2244 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_133
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_479:
# 2252 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHESNAUGHTITE_UNLOCKED
# 2253 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHESNAUGHTITE_BUYABLE
# 2254 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHESNAUGHTITE, 1
# 2255 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2256 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2257 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2258 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_134
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_482:
# 2266 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DELPHOXITE_UNLOCKED
# 2267 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DELPHOXITE_BUYABLE
# 2268 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DELPHOXITE, 1
# 2269 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2270 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2271 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2272 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_135
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_485:
# 2280 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GRENINJITE_UNLOCKED
# 2281 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GRENINJITE_BUYABLE
# 2282 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GRENINJITE, 1
# 2283 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2284 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2285 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2286 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_136
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_488:
# 2294 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_PYROARITE_UNLOCKED
# 2295 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_PYROARITE_BUYABLE
# 2296 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_PYROARITE, 1
# 2297 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2298 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2299 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2300 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_137
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_491:
# 2308 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MALAMARITE_UNLOCKED
# 2309 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MALAMARITE_BUYABLE
# 2310 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MALAMARITE, 1
# 2311 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2312 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2313 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2314 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_138
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_494:
# 2322 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BARBARACITE_UNLOCKED
# 2323 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BARBARACITE_BUYABLE
# 2324 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BARBARACITE, 1
# 2325 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2326 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2327 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2328 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_139
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_497:
# 2336 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DRAGALGITE_UNLOCKED
# 2337 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DRAGALGITE_BUYABLE
# 2338 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DRAGALGITE, 1
# 2339 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2340 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2341 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2342 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_140
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_500:
# 2350 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_HAWLUCHANITE_UNLOCKED
# 2351 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_HAWLUCHANITE_BUYABLE
# 2352 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_HAWLUCHANITE, 1
# 2353 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2354 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2355 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2356 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_141
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_503:
# 2364 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DRAMPANITE_UNLOCKED
# 2365 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DRAMPANITE_BUYABLE
# 2366 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DRAMPANITE, 1
# 2367 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2368 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2369 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2370 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_142
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_506:
# 2378 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_FALINKSITE_UNLOCKED
# 2379 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_FALINKSITE_BUYABLE
# 2380 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_FALINKSITE, 1
# 2381 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2382 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2383 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2384 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_143
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_509:
# 2392 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_RAICHUNITE_X_UNLOCKED
# 2393 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_RAICHUNITE_X_BUYABLE
# 2394 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RAICHUNITE_X, 1
# 2395 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2396 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2397 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2398 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_144
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_512:
# 2406 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_RAICHUNITE_Y_UNLOCKED
# 2407 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_RAICHUNITE_Y_BUYABLE
# 2408 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RAICHUNITE_Y, 1
# 2409 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2410 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2411 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2412 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_145
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_515:
# 2420 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHIMECHITE_UNLOCKED
# 2421 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHIMECHITE_BUYABLE
# 2422 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHIMECHITE, 1
# 2423 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2424 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2425 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2426 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_146
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_518:
# 2434 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_STARAPTITE_UNLOCKED
# 2435 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_STARAPTITE_BUYABLE
# 2436 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_STARAPTITE, 1
# 2437 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2438 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2439 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2440 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_147
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_521:
# 2448 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GOLURKITE_UNLOCKED
# 2449 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GOLURKITE_BUYABLE
# 2450 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GOLURKITE, 1
# 2451 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2452 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2453 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2454 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_148
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_524:
# 2462 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MEOWSTICITE_UNLOCKED
# 2463 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MEOWSTICITE_BUYABLE
# 2464 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEOWSTICITE, 1
# 2465 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2466 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2467 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2468 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_149
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_527:
# 2476 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CRABOMINITE_UNLOCKED
# 2477 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CRABOMINITE_BUYABLE
# 2478 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CRABOMINITE, 1
# 2479 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2480 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2481 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2482 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_150
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_530:
# 2490 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GOLISOPITE_UNLOCKED
# 2491 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GOLISOPITE_BUYABLE
# 2492 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GOLISOPITE, 1
# 2493 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2494 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2495 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2496 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_151
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_533:
# 2504 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCOVILLAINITE_UNLOCKED
# 2505 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCOVILLAINITE_BUYABLE
# 2506 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCOVILLAINITE, 1
# 2507 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2508 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2509 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2510 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_152
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_536:
# 2518 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GLIMMORANITE_UNLOCKED
# 2519 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GLIMMORANITE_BUYABLE
# 2520 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GLIMMORANITE, 1
# 2521 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2522 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2523 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2524 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_153
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_539:
# 2532 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BAXCALIBRITE_UNLOCKED
# 2533 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BAXCALIBRITE_BUYABLE
# 2534 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BAXCALIBRITE, 1
# 2535 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2536 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2537 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2538 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_154
	goto Hub_Event_Script_Diancie_237


Hub_Event_Script_Chimecho::
# 2560 "data/maps/Hub1/scripts.pory"
	compare VAR_TOTAL_RUNS, 3
	goto_if_lt Hub_Event_Script_Chimecho_2
Hub_Event_Script_Chimecho_1:
# 2566 "data/maps/Hub1/scripts.pory"
	lockall
# 2567 "data/maps/Hub1/scripts.pory"
	faceplayer
# 2568 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 2569 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_1
# 2570 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ROCK_SMASH_UNLOCKED, Hub_Event_Script_Chimecho_6
Hub_Event_Script_Chimecho_5:
# 2575 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Chimecho_9
# 2721 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_23
# 2722 "data/maps/Hub1/scripts.pory"
	waitmessage
# 2723 "data/maps/Hub1/scripts.pory"
	releaseall
Hub_Event_Script_Chimecho_8:
# 2725 "data/maps/Hub1/scripts.pory"
	hidemoneybox
# 2726 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Chimecho_2:
# 2561 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_0
	goto Hub_Event_Script_Chimecho_1

Hub_Event_Script_Chimecho_6:
# 2571 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_1, ITEM_TM_ROCK_SMASH
# 2572 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chimecho_5

Hub_Event_Script_Chimecho_9:
# 2576 "data/maps/Hub1/scripts.pory"
	showmoneybox 17, 10
# 2577 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 4, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 2578 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 2579 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_NOBLE_ROAR, Hub_Event_Script_Chimecho_13
# 2593 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ROCK_SMASH, Hub_Event_Script_Chimecho_14
# 2607 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SWIFT, Hub_Event_Script_Chimecho_15
# 2621 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CUT, Hub_Event_Script_Chimecho_16
# 2635 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CHARM, Hub_Event_Script_Chimecho_17
# 2649 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_FAKE_TEARS, Hub_Event_Script_Chimecho_18
# 2663 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CONFUSE_RAY, Hub_Event_Script_Chimecho_19
# 2677 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_THUNDER_WAVE, Hub_Event_Script_Chimecho_20
# 2691 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_WILL_O_WISP, Hub_Event_Script_Chimecho_21
# 2705 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_TOXIC, Hub_Event_Script_Chimecho_22
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_13:
# 2580 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_NOBLE_ROAR_UNLOCKED, Hub_Event_Script_Chimecho_23
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_14:
# 2594 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ROCK_SMASH_UNLOCKED, Hub_Event_Script_Chimecho_25
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_15:
# 2608 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SWIFT_UNLOCKED, Hub_Event_Script_Chimecho_27
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_16:
# 2622 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CUT_UNLOCKED, Hub_Event_Script_Chimecho_29
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_17:
# 2636 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CHARM_UNLOCKED, Hub_Event_Script_Chimecho_31
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_18:
# 2650 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_FAKE_TEARS_UNLOCKED, Hub_Event_Script_Chimecho_33
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_19:
# 2664 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CONFUSE_RAY_UNLOCKED, Hub_Event_Script_Chimecho_35
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_20:
# 2678 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_THUNDER_WAVE_UNLOCKED, Hub_Event_Script_Chimecho_37
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_21:
# 2692 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_WILL_O_WISP_UNLOCKED, Hub_Event_Script_Chimecho_39
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_22:
# 2706 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_TOXIC_UNLOCKED, Hub_Event_Script_Chimecho_41
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_23:
	checkmoney 4000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Chimecho_43
# 2590 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_25:
	checkmoney 8000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Chimecho_46
# 2604 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_27:
	checkmoney 8000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Chimecho_49
# 2618 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_29:
	checkmoney 8000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Chimecho_52
# 2632 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_31:
	checkmoney 4000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Chimecho_55
# 2646 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_33:
	checkmoney 4000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Chimecho_58
# 2660 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_35:
	checkmoney 6000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Chimecho_61
# 2674 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_37:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Chimecho_64
# 2688 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_39:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Chimecho_67
# 2702 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_41:
	checkmoney 10000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Chimecho_70
# 2716 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_18
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_43:
# 2582 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_NOBLE_ROAR_UNLOCKED
# 2583 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_NOBLE_ROAR, 1
# 2584 "data/maps/Hub1/scripts.pory"
	removemoney 4000
# 2585 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2586 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2587 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_11
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_46:
# 2596 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_ROCK_SMASH_UNLOCKED
# 2597 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_ROCK_SMASH, 1
# 2598 "data/maps/Hub1/scripts.pory"
	removemoney 8000
# 2599 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2600 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2601 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_12
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_49:
# 2610 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_SWIFT_UNLOCKED
# 2611 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SWIFT, 1
# 2612 "data/maps/Hub1/scripts.pory"
	removemoney 8000
# 2613 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2614 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2615 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_13
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_52:
# 2624 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CUT_UNLOCKED
# 2625 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CUT, 1
# 2626 "data/maps/Hub1/scripts.pory"
	removemoney 8000
# 2627 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2628 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2629 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_14
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_55:
# 2638 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CHARM_UNLOCKED
# 2639 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CHARM, 1
# 2640 "data/maps/Hub1/scripts.pory"
	removemoney 4000
# 2641 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2642 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2643 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_15
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_58:
# 2652 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_FAKE_TEARS_UNLOCKED
# 2653 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_FAKE_TEARS, 1
# 2654 "data/maps/Hub1/scripts.pory"
	removemoney 4000
# 2655 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2656 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2657 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_16
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_61:
# 2666 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CONFUSE_RAY_UNLOCKED
# 2667 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CONFUSE_RAY, 1
# 2668 "data/maps/Hub1/scripts.pory"
	removemoney 6000
# 2669 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2670 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2671 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_17
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_64:
# 2680 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_THUNDER_WAVE_UNLOCKED
# 2681 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_THUNDER_WAVE, 1
# 2682 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2683 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2684 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2685 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_18
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_67:
# 2694 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_WILL_O_WISP_UNLOCKED
# 2695 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_WILL_O_WISP, 1
# 2696 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2697 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2698 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2699 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_19
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_70:
# 2708 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_TOXIC_UNLOCKED
# 2709 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_TOXIC, 1
# 2710 "data/maps/Hub1/scripts.pory"
	removemoney 10000
# 2711 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 2712 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2713 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_20
	goto Hub_Event_Script_Chimecho_8


AfterWarpIntoNewAct_Text_0:
# 16 "data/maps/Hub1/scripts.pory"
	.string "Your Phione egg hatched into a Phione!$"

HUB1_Run_Stats_Sign_Text_0:
# 28 "data/maps/Hub1/scripts.pory"
	.string "Total Runs: {STR_VAR_1}\nAct 1 Wins: {STR_VAR_2}$"

HUB1_Run_Stats_Sign_Text_1:
# 34 "data/maps/Hub1/scripts.pory"
	.string "Act 2 Wins: {STR_VAR_3}\nAct 3 Wins: {STR_VAR_1}\pAct 4 Wins: {STR_VAR_2}$"

HUB1_ONFRAME_Text_0:
# 59 "data/maps/Hub1/scripts.pory"
	.string "Welcome to Pokemon Path!\pTo start a run, talk to\nProfessor Birch up ahead.\pNow choose a pokemon to\nstart your adventure with.$"

HUB1_ONFRAME_Text_1:
# 62 "data/maps/Hub1/scripts.pory"
	.string "Bulbasaur$"

HUB1_ONFRAME_Text_2:
# 63 "data/maps/Hub1/scripts.pory"
	.string "Charmander$"

HUB1_ONFRAME_Text_3:
# 64 "data/maps/Hub1/scripts.pory"
	.string "Squirtle$"

HUB1_ONFRAME_Text_4:
# 65 "data/maps/Hub1/scripts.pory"
	.string "Chikorita$"

HUB1_ONFRAME_Text_5:
# 66 "data/maps/Hub1/scripts.pory"
	.string "Cyndaquil$"

HUB1_ONFRAME_Text_6:
# 67 "data/maps/Hub1/scripts.pory"
	.string "Totodile$"

HUB1_ONFRAME_Text_7:
# 68 "data/maps/Hub1/scripts.pory"
	.string "Treecko$"

HUB1_ONFRAME_Text_8:
# 69 "data/maps/Hub1/scripts.pory"
	.string "Torchic$"

HUB1_ONFRAME_Text_9:
# 70 "data/maps/Hub1/scripts.pory"
	.string "Mudkip$"

HUB1_ONFRAME_Text_10:
# 71 "data/maps/Hub1/scripts.pory"
	.string "Turtwig$"

HUB1_ONFRAME_Text_11:
# 72 "data/maps/Hub1/scripts.pory"
	.string "Chimchar$"

HUB1_ONFRAME_Text_12:
# 73 "data/maps/Hub1/scripts.pory"
	.string "Piplup$"

HUB1_ONFRAME_Text_13:
# 74 "data/maps/Hub1/scripts.pory"
	.string "Snivy$"

HUB1_ONFRAME_Text_14:
# 75 "data/maps/Hub1/scripts.pory"
	.string "Tepig$"

HUB1_ONFRAME_Text_15:
# 76 "data/maps/Hub1/scripts.pory"
	.string "Oshawott$"

HUB1_ONFRAME_Text_16:
# 77 "data/maps/Hub1/scripts.pory"
	.string "Chespin$"

HUB1_ONFRAME_Text_17:
# 78 "data/maps/Hub1/scripts.pory"
	.string "Fennekin$"

HUB1_ONFRAME_Text_18:
# 79 "data/maps/Hub1/scripts.pory"
	.string "Froakie$"

HUB1_ONFRAME_Text_19:
# 80 "data/maps/Hub1/scripts.pory"
	.string "Rowlet$"

HUB1_ONFRAME_Text_20:
# 81 "data/maps/Hub1/scripts.pory"
	.string "Litten$"

HUB1_ONFRAME_Text_21:
# 82 "data/maps/Hub1/scripts.pory"
	.string "Popplio$"

HUB1_ONFRAME_Text_22:
# 83 "data/maps/Hub1/scripts.pory"
	.string "Grookey$"

HUB1_ONFRAME_Text_23:
# 84 "data/maps/Hub1/scripts.pory"
	.string "Scorbunny$"

HUB1_ONFRAME_Text_24:
# 85 "data/maps/Hub1/scripts.pory"
	.string "Sobble$"

HUB1_ONFRAME_Text_25:
# 86 "data/maps/Hub1/scripts.pory"
	.string "Sprigatito$"

HUB1_ONFRAME_Text_26:
# 87 "data/maps/Hub1/scripts.pory"
	.string "Fuecoco$"

HUB1_ONFRAME_Text_27:
# 88 "data/maps/Hub1/scripts.pory"
	.string "Quaxly$"

HUB1_ONFRAME_Text_28:
# 206 "data/maps/Hub1/scripts.pory"
	.string "Use this item to level up your\nPokemon.$"

Hub_Event_Script_Birch_Text_0:
# 216 "data/maps/Hub1/scripts.pory"
	.string "Would you like to start a run?$"

Hub_Event_Script_Birch_Text_1:
# 219 "data/maps/Hub1/scripts.pory"
	.string "Alright then! Here we go!$"

Hub_Event_Script_Birch_Text_2:
# 222 "data/maps/Hub1/scripts.pory"
	.string "Okay! Let me know when you're ready.$"

Hub_Event_Script_Miltank_Text_0:
# 232 "data/maps/Hub1/scripts.pory"
	.string "Bulbasaur (¥3000)$"

Hub_Event_Script_Miltank_Text_1:
# 233 "data/maps/Hub1/scripts.pory"
	.string "Charmander (¥3000)$"

Hub_Event_Script_Miltank_Text_2:
# 234 "data/maps/Hub1/scripts.pory"
	.string "Squirtle (¥3000)$"

Hub_Event_Script_Miltank_Text_3:
# 235 "data/maps/Hub1/scripts.pory"
	.string "Chikorita (¥3000)$"

Hub_Event_Script_Miltank_Text_4:
# 236 "data/maps/Hub1/scripts.pory"
	.string "Cyndaquil (¥3000)$"

Hub_Event_Script_Miltank_Text_5:
# 237 "data/maps/Hub1/scripts.pory"
	.string "Totodile (¥3000)$"

Hub_Event_Script_Miltank_Text_6:
# 238 "data/maps/Hub1/scripts.pory"
	.string "Treecko (¥3000)$"

Hub_Event_Script_Miltank_Text_7:
# 239 "data/maps/Hub1/scripts.pory"
	.string "Torchic (¥3000)$"

Hub_Event_Script_Miltank_Text_8:
# 240 "data/maps/Hub1/scripts.pory"
	.string "Mudkip (¥3000)$"

Hub_Event_Script_Miltank_Text_9:
# 241 "data/maps/Hub1/scripts.pory"
	.string "Turtwig (¥3000)$"

Hub_Event_Script_Miltank_Text_10:
# 242 "data/maps/Hub1/scripts.pory"
	.string "Chimchar (¥3000)$"

Hub_Event_Script_Miltank_Text_11:
# 243 "data/maps/Hub1/scripts.pory"
	.string "Piplup (¥3000)$"

Hub_Event_Script_Miltank_Text_12:
# 244 "data/maps/Hub1/scripts.pory"
	.string "Snivy (¥3000)$"

Hub_Event_Script_Miltank_Text_13:
# 245 "data/maps/Hub1/scripts.pory"
	.string "Tepig (¥3000)$"

Hub_Event_Script_Miltank_Text_14:
# 246 "data/maps/Hub1/scripts.pory"
	.string "Oshawott (¥3000)$"

Hub_Event_Script_Miltank_Text_15:
# 247 "data/maps/Hub1/scripts.pory"
	.string "Chespin (¥3000)$"

Hub_Event_Script_Miltank_Text_16:
# 248 "data/maps/Hub1/scripts.pory"
	.string "Fennekin (¥3000)$"

Hub_Event_Script_Miltank_Text_17:
# 249 "data/maps/Hub1/scripts.pory"
	.string "Froakie (¥3000)$"

Hub_Event_Script_Miltank_Text_18:
# 250 "data/maps/Hub1/scripts.pory"
	.string "Rowlet (¥3000)$"

Hub_Event_Script_Miltank_Text_19:
# 251 "data/maps/Hub1/scripts.pory"
	.string "Litten (¥3000)$"

Hub_Event_Script_Miltank_Text_20:
# 252 "data/maps/Hub1/scripts.pory"
	.string "Popplio (¥3000)$"

Hub_Event_Script_Miltank_Text_21:
# 253 "data/maps/Hub1/scripts.pory"
	.string "Grookey (¥3000)$"

Hub_Event_Script_Miltank_Text_22:
# 254 "data/maps/Hub1/scripts.pory"
	.string "Scorbunny (¥3000)$"

Hub_Event_Script_Miltank_Text_23:
# 255 "data/maps/Hub1/scripts.pory"
	.string "Sobble (¥3000)$"

Hub_Event_Script_Miltank_Text_24:
# 256 "data/maps/Hub1/scripts.pory"
	.string "Sprigatito (¥3000)$"

Hub_Event_Script_Miltank_Text_25:
# 257 "data/maps/Hub1/scripts.pory"
	.string "Fuecoco (¥3000)$"

Hub_Event_Script_Miltank_Text_26:
# 258 "data/maps/Hub1/scripts.pory"
	.string "Quaxly (¥3000)$"

Hub_Event_Script_Miltank_Text_27:
# 262 "data/maps/Hub1/scripts.pory"
	.string "Would you like to adopt a pokemon?$"

Hub_Event_Script_Miltank_Text_28:
# 273 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Bulbasaur as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_29:
# 276 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry. You don't have the money to\nadopt that pokemon.$"

Hub_Event_Script_Miltank_Text_30:
# 284 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Charmander as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_31:
# 295 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Squirtle as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_32:
# 306 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chikorita as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_33:
# 317 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Cyndaquil as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_34:
# 328 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Totodile as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_35:
# 339 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Treecko as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_36:
# 350 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Torchic as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_37:
# 361 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Mudkip as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_38:
# 372 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Turtwig as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_39:
# 383 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chimchar as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_40:
# 394 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Piplup as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_41:
# 405 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Snivy as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_42:
# 416 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Tepig as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_43:
# 427 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Oshawott as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_44:
# 438 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chespin as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_45:
# 449 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Fennekin as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_46:
# 460 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Froakie as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_47:
# 471 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Rowlet as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_48:
# 482 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Litten as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_49:
# 493 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Popplio as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_50:
# 504 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Grookey as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_51:
# 515 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Scorbunny as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_52:
# 526 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Sobble as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_53:
# 537 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Sprigatito as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_54:
# 548 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Fuecoco as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_55:
# 559 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Quaxly as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_56:
# 568 "data/maps/Hub1/scripts.pory"
	.string "You have no more starters left\nto adopt!$"

Hub_Event_Script_Chansey_Text_0:
# 609 "data/maps/Hub1/scripts.pory"
	.string "Would you like to change your starter?$"

Hub_Event_Script_Chansey_Text_1:
# 622 "data/maps/Hub1/scripts.pory"
	.string "There you go!$"

Hub_Event_Script_Chansey_Text_2:
# 630 "data/maps/Hub1/scripts.pory"
	.string "You don't have any starter pokemon yet.\pPlease consider adopting some pokemon\nfrom my friend Miltank to the right.$"

Hub_Event_Script_Kecleon_Text_0:
# 639 "data/maps/Hub1/scripts.pory"
	.string "Hey there! Would you like to\nbuy a starter item?$"

Hub_Event_Script_Kecleon_Text_1:
# 641 "data/maps/Hub1/scripts.pory"
	.string "Memory Mushroom (¥2000)$"

Hub_Event_Script_Kecleon_Text_2:
# 644 "data/maps/Hub1/scripts.pory"
	.string "Memory Mushroom (¥3000)$"

Hub_Event_Script_Kecleon_Text_3:
# 647 "data/maps/Hub1/scripts.pory"
	.string "Memory Mushroom (¥4000)$"

Hub_Event_Script_Kecleon_Text_4:
# 650 "data/maps/Hub1/scripts.pory"
	.string "Memory Mushroom (¥5000)$"

Hub_Event_Script_Kecleon_Text_5:
# 653 "data/maps/Hub1/scripts.pory"
	.string "Memory Mushroom (¥6000)$"

Hub_Event_Script_Kecleon_Text_6:
# 656 "data/maps/Hub1/scripts.pory"
	.string "Memory Mushroom (¥7000)$"

Hub_Event_Script_Kecleon_Text_7:
# 659 "data/maps/Hub1/scripts.pory"
	.string "Memory Mushroom (¥8000)$"

Hub_Event_Script_Kecleon_Text_8:
# 662 "data/maps/Hub1/scripts.pory"
	.string "Memory Mushroom (¥9000)$"

Hub_Event_Script_Kecleon_Text_9:
# 666 "data/maps/Hub1/scripts.pory"
	.string "Rare Candy (¥30000)$"

Hub_Event_Script_Kecleon_Text_10:
# 669 "data/maps/Hub1/scripts.pory"
	.string "Rare Candy (¥9999999)$"

Hub_Event_Script_Kecleon_Text_11:
# 683 "data/maps/Hub1/scripts.pory"
	.string "Oran Berry (¥2000)$"

Hub_Event_Script_Kecleon_Text_12:
# 686 "data/maps/Hub1/scripts.pory"
	.string "Oran Berry (¥10000)$"

Hub_Event_Script_Kecleon_Text_13:
# 692 "data/maps/Hub1/scripts.pory"
	.string "Lum Berry (¥5000)$"

Hub_Event_Script_Kecleon_Text_14:
# 695 "data/maps/Hub1/scripts.pory"
	.string "Lum Berry (¥20000)$"

Hub_Event_Script_Kecleon_Text_15:
# 700 "data/maps/Hub1/scripts.pory"
	.string "Serious Mint (¥10000)$"

Hub_Event_Script_Kecleon_Text_16:
# 703 "data/maps/Hub1/scripts.pory"
	.string "Serious Mint (¥30000)$"

Hub_Event_Script_Kecleon_Text_17:
# 720 "data/maps/Hub1/scripts.pory"
	.string "You got a Oran Berry as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_18:
# 723 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry. You don't have the money to\nbuy that item, kec.$"

Hub_Event_Script_Kecleon_Text_19:
# 747 "data/maps/Hub1/scripts.pory"
	.string "You got a Lum Berry as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_20:
# 774 "data/maps/Hub1/scripts.pory"
	.string "You got a Serious Mint as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_21:
# 801 "data/maps/Hub1/scripts.pory"
	.string "You got a Memory Mushroom as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_22:
# 899 "data/maps/Hub1/scripts.pory"
	.string "You got a Rare Candy as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_23:
# 955 "data/maps/Hub1/scripts.pory"
	.string "You don't have anything left\nto puchase right now. Thank you for\lyour consistent patronage!\p$"

Hub_Event_Script_Shiny_Kecleon_Text_0:
# 968 "data/maps/Hub1/scripts.pory"
	.string "Howdy! Would you like to\nbuy a starter TM?$"

Hub_Event_Script_Shiny_Kecleon_Text_1:
# 970 "data/maps/Hub1/scripts.pory"
	.string "TM Rock Smash (¥8000)$"

Hub_Event_Script_Shiny_Kecleon_Text_2:
# 974 "data/maps/Hub1/scripts.pory"
	.string "TM Swift (¥8000)$"

Hub_Event_Script_Shiny_Kecleon_Text_3:
# 978 "data/maps/Hub1/scripts.pory"
	.string "TM Cut (¥8000)$"

Hub_Event_Script_Shiny_Kecleon_Text_4:
# 982 "data/maps/Hub1/scripts.pory"
	.string "TM Noble Roar (¥4000)$"

Hub_Event_Script_Shiny_Kecleon_Text_5:
# 986 "data/maps/Hub1/scripts.pory"
	.string "TM Charm (¥4000)$"

Hub_Event_Script_Shiny_Kecleon_Text_6:
# 990 "data/maps/Hub1/scripts.pory"
	.string "TM Fake Tears (¥4000)$"

Hub_Event_Script_Shiny_Kecleon_Text_7:
# 994 "data/maps/Hub1/scripts.pory"
	.string "TM Confuse Ray (¥6000)$"

Hub_Event_Script_Shiny_Kecleon_Text_8:
# 998 "data/maps/Hub1/scripts.pory"
	.string "TM Thunder Wave (¥10000)$"

Hub_Event_Script_Shiny_Kecleon_Text_9:
# 1002 "data/maps/Hub1/scripts.pory"
	.string "TM Will-O-Wisp (¥10000)$"

Hub_Event_Script_Shiny_Kecleon_Text_10:
# 1006 "data/maps/Hub1/scripts.pory"
	.string "TM Toxic (¥10000)$"

Hub_Event_Script_Shiny_Kecleon_Text_11:
# 1023 "data/maps/Hub1/scripts.pory"
	.string "You got TM Noble Roar as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_12:
# 1037 "data/maps/Hub1/scripts.pory"
	.string "You got TM Rock Smash as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_13:
# 1051 "data/maps/Hub1/scripts.pory"
	.string "You got TM Swift as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_14:
# 1065 "data/maps/Hub1/scripts.pory"
	.string "You got TM Cut as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_15:
# 1079 "data/maps/Hub1/scripts.pory"
	.string "You got TM Charm as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_16:
# 1093 "data/maps/Hub1/scripts.pory"
	.string "You got TM Fake Tears as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_17:
# 1107 "data/maps/Hub1/scripts.pory"
	.string "You got TM Confuse Ray as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_18:
# 1121 "data/maps/Hub1/scripts.pory"
	.string "You got TM Thunder Wave as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_19:
# 1135 "data/maps/Hub1/scripts.pory"
	.string "You got TM Will O Wisp as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_20:
# 1149 "data/maps/Hub1/scripts.pory"
	.string "You got TM Toxic as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Diancie_Text_0:
# 1170 "data/maps/Hub1/scripts.pory"
	.string "Hey there! I'm Diancie.\n"
	.string "I love collecting special gems.\l"
	.string "I plan on selling some of them soon\l"
	.string "but I don't have any to sell right now.\l"
	.string "I hope you come visit again another\l"
	.string "time.$"

Hub_Event_Script_Diancie_Text_1:
# 1178 "data/maps/Hub1/scripts.pory"
	.string "Hiya! I've finally started selling\n"
	.string "some of my precious gems.\l"
	.string "To celebrate, I'll give you this\l"
	.string "one on the house!$"

Hub_Event_Script_Diancie_Text_2:
# 1187 "data/maps/Hub1/scripts.pory"
	.string "There aren't so many gems I want to,\n"
	.string "sell right now. But I might sell more\l"
	.string "in the future.$"

Hub_Event_Script_Diancie_Text_3:
# 1194 "data/maps/Hub1/scripts.pory"
	.string "Venusaurite (¥10000)$"

Hub_Event_Script_Diancie_Text_4:
# 1198 "data/maps/Hub1/scripts.pory"
	.string "Charizardite Y (¥10000)$"

Hub_Event_Script_Diancie_Text_5:
# 1202 "data/maps/Hub1/scripts.pory"
	.string "Blastoisinite (¥10000)$"

Hub_Event_Script_Diancie_Text_6:
# 1206 "data/maps/Hub1/scripts.pory"
	.string "Beedrillite (¥10000)$"

Hub_Event_Script_Diancie_Text_7:
# 1210 "data/maps/Hub1/scripts.pory"
	.string "Pidgeotite (¥10000)$"

Hub_Event_Script_Diancie_Text_8:
# 1214 "data/maps/Hub1/scripts.pory"
	.string "Alakazite (¥10000)$"

Hub_Event_Script_Diancie_Text_9:
# 1218 "data/maps/Hub1/scripts.pory"
	.string "Slowbronite (¥10000)$"

Hub_Event_Script_Diancie_Text_10:
# 1222 "data/maps/Hub1/scripts.pory"
	.string "Gengarite (¥10000)$"

Hub_Event_Script_Diancie_Text_11:
# 1226 "data/maps/Hub1/scripts.pory"
	.string "Kangaskhanite (¥10000)$"

Hub_Event_Script_Diancie_Text_12:
# 1230 "data/maps/Hub1/scripts.pory"
	.string "Pinsirite (¥10000)$"

Hub_Event_Script_Diancie_Text_13:
# 1234 "data/maps/Hub1/scripts.pory"
	.string "Gyaradosite (¥10000)$"

Hub_Event_Script_Diancie_Text_14:
# 1238 "data/maps/Hub1/scripts.pory"
	.string "Aerodactylite (¥10000)$"

Hub_Event_Script_Diancie_Text_15:
# 1242 "data/maps/Hub1/scripts.pory"
	.string "Ampharosite (¥10000)$"

Hub_Event_Script_Diancie_Text_16:
# 1246 "data/maps/Hub1/scripts.pory"
	.string "Steelixite (¥10000)$"

Hub_Event_Script_Diancie_Text_17:
# 1250 "data/maps/Hub1/scripts.pory"
	.string "Scizorite (¥10000)$"

Hub_Event_Script_Diancie_Text_18:
# 1254 "data/maps/Hub1/scripts.pory"
	.string "Heracronite (¥10000)$"

Hub_Event_Script_Diancie_Text_19:
# 1258 "data/maps/Hub1/scripts.pory"
	.string "Houndoominite (¥10000)$"

Hub_Event_Script_Diancie_Text_20:
# 1262 "data/maps/Hub1/scripts.pory"
	.string "Tyranitarite (¥10000)$"

Hub_Event_Script_Diancie_Text_21:
# 1266 "data/maps/Hub1/scripts.pory"
	.string "Sceptilite (¥10000)$"

Hub_Event_Script_Diancie_Text_22:
# 1270 "data/maps/Hub1/scripts.pory"
	.string "Blazikenite (¥10000)$"

Hub_Event_Script_Diancie_Text_23:
# 1274 "data/maps/Hub1/scripts.pory"
	.string "Swampertite (¥10000)$"

Hub_Event_Script_Diancie_Text_24:
# 1278 "data/maps/Hub1/scripts.pory"
	.string "Gardevoirite (¥10000)$"

Hub_Event_Script_Diancie_Text_25:
# 1282 "data/maps/Hub1/scripts.pory"
	.string "Sablenite (¥10000)$"

Hub_Event_Script_Diancie_Text_26:
# 1286 "data/maps/Hub1/scripts.pory"
	.string "Mawilite (¥10000)$"

Hub_Event_Script_Diancie_Text_27:
# 1290 "data/maps/Hub1/scripts.pory"
	.string "Aggronite (¥10000)$"

Hub_Event_Script_Diancie_Text_28:
# 1294 "data/maps/Hub1/scripts.pory"
	.string "Medichamite (¥10000)$"

Hub_Event_Script_Diancie_Text_29:
# 1298 "data/maps/Hub1/scripts.pory"
	.string "Manectite (¥10000)$"

Hub_Event_Script_Diancie_Text_30:
# 1302 "data/maps/Hub1/scripts.pory"
	.string "Sharpedonite (¥10000)$"

Hub_Event_Script_Diancie_Text_31:
# 1306 "data/maps/Hub1/scripts.pory"
	.string "Cameruptite (¥10000)$"

Hub_Event_Script_Diancie_Text_32:
# 1310 "data/maps/Hub1/scripts.pory"
	.string "Altarianite (¥10000)$"

Hub_Event_Script_Diancie_Text_33:
# 1314 "data/maps/Hub1/scripts.pory"
	.string "Banettite (¥10000)$"

Hub_Event_Script_Diancie_Text_34:
# 1318 "data/maps/Hub1/scripts.pory"
	.string "Absolite (¥10000)$"

Hub_Event_Script_Diancie_Text_35:
# 1322 "data/maps/Hub1/scripts.pory"
	.string "Glalitite (¥10000)$"

Hub_Event_Script_Diancie_Text_36:
# 1326 "data/maps/Hub1/scripts.pory"
	.string "Salamencite (¥10000)$"

Hub_Event_Script_Diancie_Text_37:
# 1330 "data/maps/Hub1/scripts.pory"
	.string "Metagrossite (¥10000)$"

Hub_Event_Script_Diancie_Text_38:
# 1334 "data/maps/Hub1/scripts.pory"
	.string "Lopunnite (¥10000)$"

Hub_Event_Script_Diancie_Text_39:
# 1338 "data/maps/Hub1/scripts.pory"
	.string "Garchompite (¥10000)$"

Hub_Event_Script_Diancie_Text_40:
# 1342 "data/maps/Hub1/scripts.pory"
	.string "Lucarionite (¥10000)$"

Hub_Event_Script_Diancie_Text_41:
# 1346 "data/maps/Hub1/scripts.pory"
	.string "Abomasite (¥10000)$"

Hub_Event_Script_Diancie_Text_42:
# 1350 "data/maps/Hub1/scripts.pory"
	.string "Galladite (¥10000)$"

Hub_Event_Script_Diancie_Text_43:
# 1354 "data/maps/Hub1/scripts.pory"
	.string "Clefablite (¥10000)$"

Hub_Event_Script_Diancie_Text_44:
# 1358 "data/maps/Hub1/scripts.pory"
	.string "Victreebelite (¥10000)$"

Hub_Event_Script_Diancie_Text_45:
# 1362 "data/maps/Hub1/scripts.pory"
	.string "Starminite (¥10000)$"

Hub_Event_Script_Diancie_Text_46:
# 1366 "data/maps/Hub1/scripts.pory"
	.string "Dragoninite (¥10000)$"

Hub_Event_Script_Diancie_Text_47:
# 1370 "data/maps/Hub1/scripts.pory"
	.string "Meganiumite (¥10000)$"

Hub_Event_Script_Diancie_Text_48:
# 1374 "data/maps/Hub1/scripts.pory"
	.string "Feraligite (¥10000)$"

Hub_Event_Script_Diancie_Text_49:
# 1378 "data/maps/Hub1/scripts.pory"
	.string "Skarmorite (¥10000)$"

Hub_Event_Script_Diancie_Text_50:
# 1382 "data/maps/Hub1/scripts.pory"
	.string "Froslassite (¥10000)$"

Hub_Event_Script_Diancie_Text_51:
# 1386 "data/maps/Hub1/scripts.pory"
	.string "Emboarite (¥10000)$"

Hub_Event_Script_Diancie_Text_52:
# 1390 "data/maps/Hub1/scripts.pory"
	.string "Excadrite (¥10000)$"

Hub_Event_Script_Diancie_Text_53:
# 1394 "data/maps/Hub1/scripts.pory"
	.string "Scolipite (¥10000)$"

Hub_Event_Script_Diancie_Text_54:
# 1398 "data/maps/Hub1/scripts.pory"
	.string "Scraftinite (¥10000)$"

Hub_Event_Script_Diancie_Text_55:
# 1402 "data/maps/Hub1/scripts.pory"
	.string "Eelektrossite (¥10000)$"

Hub_Event_Script_Diancie_Text_56:
# 1406 "data/maps/Hub1/scripts.pory"
	.string "Chandelurite (¥10000)$"

Hub_Event_Script_Diancie_Text_57:
# 1410 "data/maps/Hub1/scripts.pory"
	.string "Chesnaughtite (¥10000)$"

Hub_Event_Script_Diancie_Text_58:
# 1414 "data/maps/Hub1/scripts.pory"
	.string "Delphoxite (¥10000)$"

Hub_Event_Script_Diancie_Text_59:
# 1418 "data/maps/Hub1/scripts.pory"
	.string "Greninjite (¥10000)$"

Hub_Event_Script_Diancie_Text_60:
# 1422 "data/maps/Hub1/scripts.pory"
	.string "Pyroarite (¥10000)$"

Hub_Event_Script_Diancie_Text_61:
# 1426 "data/maps/Hub1/scripts.pory"
	.string "Malamarite (¥10000)$"

Hub_Event_Script_Diancie_Text_62:
# 1430 "data/maps/Hub1/scripts.pory"
	.string "Barbaracite (¥10000)$"

Hub_Event_Script_Diancie_Text_63:
# 1434 "data/maps/Hub1/scripts.pory"
	.string "Dragalgite (¥10000)$"

Hub_Event_Script_Diancie_Text_64:
# 1438 "data/maps/Hub1/scripts.pory"
	.string "Hawluchanite (¥10000)$"

Hub_Event_Script_Diancie_Text_65:
# 1442 "data/maps/Hub1/scripts.pory"
	.string "Drampanite (¥10000)$"

Hub_Event_Script_Diancie_Text_66:
# 1446 "data/maps/Hub1/scripts.pory"
	.string "Falinksite (¥10000)$"

Hub_Event_Script_Diancie_Text_67:
# 1450 "data/maps/Hub1/scripts.pory"
	.string "Raichunite X (¥10000)$"

Hub_Event_Script_Diancie_Text_68:
# 1454 "data/maps/Hub1/scripts.pory"
	.string "Raichunite Y (¥10000)$"

Hub_Event_Script_Diancie_Text_69:
# 1458 "data/maps/Hub1/scripts.pory"
	.string "Chimechite (¥10000)$"

Hub_Event_Script_Diancie_Text_70:
# 1462 "data/maps/Hub1/scripts.pory"
	.string "Staraptite (¥10000)$"

Hub_Event_Script_Diancie_Text_71:
# 1466 "data/maps/Hub1/scripts.pory"
	.string "Golurkite (¥10000)$"

Hub_Event_Script_Diancie_Text_72:
# 1470 "data/maps/Hub1/scripts.pory"
	.string "Meowsticite (¥10000)$"

Hub_Event_Script_Diancie_Text_73:
# 1474 "data/maps/Hub1/scripts.pory"
	.string "Crabominite (¥10000)$"

Hub_Event_Script_Diancie_Text_74:
# 1478 "data/maps/Hub1/scripts.pory"
	.string "Golisopite (¥10000)$"

Hub_Event_Script_Diancie_Text_75:
# 1482 "data/maps/Hub1/scripts.pory"
	.string "Scovillainite (¥10000)$"

Hub_Event_Script_Diancie_Text_76:
# 1486 "data/maps/Hub1/scripts.pory"
	.string "Glimmoranite (¥10000)$"

Hub_Event_Script_Diancie_Text_77:
# 1490 "data/maps/Hub1/scripts.pory"
	.string "Baxcalibrite (¥10000)$"

Hub_Event_Script_Diancie_Text_78:
# 1497 "data/maps/Hub1/scripts.pory"
	.string "Hello! Good news! I have a new\n"
	.string "Mega Stone in stock!\l"
	.string "Please take a look!$"

Hub_Event_Script_Diancie_Text_79:
# 1503 "data/maps/Hub1/scripts.pory"
	.string "Hello! Would you like to\nbuy a Mega Stone?$"

Hub_Event_Script_Diancie_Text_80:
# 1516 "data/maps/Hub1/scripts.pory"
	.string "You got a Venusaurite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_81:
# 1519 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry, but you don't have the\n money for that right now.$"

Hub_Event_Script_Diancie_Text_82:
# 1530 "data/maps/Hub1/scripts.pory"
	.string "You got a Charizardite Y as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_83:
# 1544 "data/maps/Hub1/scripts.pory"
	.string "You got a Blastoisinite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_84:
# 1558 "data/maps/Hub1/scripts.pory"
	.string "You got a Beedrillite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_85:
# 1572 "data/maps/Hub1/scripts.pory"
	.string "You got a Pidgeotite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_86:
# 1586 "data/maps/Hub1/scripts.pory"
	.string "You got an Alakazite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_87:
# 1600 "data/maps/Hub1/scripts.pory"
	.string "You got a Slowbronite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_88:
# 1614 "data/maps/Hub1/scripts.pory"
	.string "You got a Gengarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_89:
# 1628 "data/maps/Hub1/scripts.pory"
	.string "You got a Kangaskhanite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_90:
# 1642 "data/maps/Hub1/scripts.pory"
	.string "You got a Pinsirite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_91:
# 1656 "data/maps/Hub1/scripts.pory"
	.string "You got a Gyaradosite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_92:
# 1670 "data/maps/Hub1/scripts.pory"
	.string "You got an Aerodactylite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_93:
# 1684 "data/maps/Hub1/scripts.pory"
	.string "You got an Ampharosite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_94:
# 1698 "data/maps/Hub1/scripts.pory"
	.string "You got a Steelixite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_95:
# 1712 "data/maps/Hub1/scripts.pory"
	.string "You got a Scizorite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_96:
# 1726 "data/maps/Hub1/scripts.pory"
	.string "You got a Heracronite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_97:
# 1740 "data/maps/Hub1/scripts.pory"
	.string "You got a Houndoominite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_98:
# 1754 "data/maps/Hub1/scripts.pory"
	.string "You got a Tyranitarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_99:
# 1768 "data/maps/Hub1/scripts.pory"
	.string "You got a Sceptilite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_100:
# 1782 "data/maps/Hub1/scripts.pory"
	.string "You got a Blazikenite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_101:
# 1796 "data/maps/Hub1/scripts.pory"
	.string "You got a Swampertite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_102:
# 1810 "data/maps/Hub1/scripts.pory"
	.string "You got a Gardevoirite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_103:
# 1824 "data/maps/Hub1/scripts.pory"
	.string "You got a Sablenite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_104:
# 1838 "data/maps/Hub1/scripts.pory"
	.string "You got a Mawilite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_105:
# 1852 "data/maps/Hub1/scripts.pory"
	.string "You got an Aggronite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_106:
# 1866 "data/maps/Hub1/scripts.pory"
	.string "You got a Medichamite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_107:
# 1880 "data/maps/Hub1/scripts.pory"
	.string "You got a Manectite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_108:
# 1894 "data/maps/Hub1/scripts.pory"
	.string "You got a Sharpedonite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_109:
# 1908 "data/maps/Hub1/scripts.pory"
	.string "You got a Cameruptite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_110:
# 1922 "data/maps/Hub1/scripts.pory"
	.string "You got an Altarianite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_111:
# 1936 "data/maps/Hub1/scripts.pory"
	.string "You got a Banettite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_112:
# 1950 "data/maps/Hub1/scripts.pory"
	.string "You got an Absolite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_113:
# 1964 "data/maps/Hub1/scripts.pory"
	.string "You got a Glalitite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_114:
# 1978 "data/maps/Hub1/scripts.pory"
	.string "You got a Salamencite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_115:
# 1992 "data/maps/Hub1/scripts.pory"
	.string "You got a Lopunnite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_116:
# 2006 "data/maps/Hub1/scripts.pory"
	.string "You got a Garchompite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_117:
# 2020 "data/maps/Hub1/scripts.pory"
	.string "You got a Lucarionite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_118:
# 2034 "data/maps/Hub1/scripts.pory"
	.string "You got an Abomasite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_119:
# 2048 "data/maps/Hub1/scripts.pory"
	.string "You got a Galladite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_120:
# 2062 "data/maps/Hub1/scripts.pory"
	.string "You got a Clefablite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_121:
# 2076 "data/maps/Hub1/scripts.pory"
	.string "You got a Victreebelite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_122:
# 2090 "data/maps/Hub1/scripts.pory"
	.string "You got a Starminite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_123:
# 2104 "data/maps/Hub1/scripts.pory"
	.string "You got a Dragoninite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_124:
# 2118 "data/maps/Hub1/scripts.pory"
	.string "You got a Meganiumite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_125:
# 2132 "data/maps/Hub1/scripts.pory"
	.string "You got a Feraligite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_126:
# 2146 "data/maps/Hub1/scripts.pory"
	.string "You got a Skarmorite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_127:
# 2160 "data/maps/Hub1/scripts.pory"
	.string "You got a Froslassite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_128:
# 2174 "data/maps/Hub1/scripts.pory"
	.string "You got an Emboarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_129:
# 2188 "data/maps/Hub1/scripts.pory"
	.string "You got an Excadrite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_130:
# 2202 "data/maps/Hub1/scripts.pory"
	.string "You got a Scolipite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_131:
# 2216 "data/maps/Hub1/scripts.pory"
	.string "You got a Scraftinite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_132:
# 2230 "data/maps/Hub1/scripts.pory"
	.string "You got an Eelektrossite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_133:
# 2244 "data/maps/Hub1/scripts.pory"
	.string "You got a Chandelurite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_134:
# 2258 "data/maps/Hub1/scripts.pory"
	.string "You got a Chesnaughtite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_135:
# 2272 "data/maps/Hub1/scripts.pory"
	.string "You got a Delphoxite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_136:
# 2286 "data/maps/Hub1/scripts.pory"
	.string "You got a Greninjite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_137:
# 2300 "data/maps/Hub1/scripts.pory"
	.string "You got a Pyroarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_138:
# 2314 "data/maps/Hub1/scripts.pory"
	.string "You got a Malamarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_139:
# 2328 "data/maps/Hub1/scripts.pory"
	.string "You got a Barbaracite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_140:
# 2342 "data/maps/Hub1/scripts.pory"
	.string "You got a Dragalgite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_141:
# 2356 "data/maps/Hub1/scripts.pory"
	.string "You got a Hawluchanite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_142:
# 2370 "data/maps/Hub1/scripts.pory"
	.string "You got a Drampanite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_143:
# 2384 "data/maps/Hub1/scripts.pory"
	.string "You got a Falinksite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_144:
# 2398 "data/maps/Hub1/scripts.pory"
	.string "You got a Raichunite X as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_145:
# 2412 "data/maps/Hub1/scripts.pory"
	.string "You got a Raichunite Y as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_146:
# 2426 "data/maps/Hub1/scripts.pory"
	.string "You got a Chimechite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_147:
# 2440 "data/maps/Hub1/scripts.pory"
	.string "You got a Staraptite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_148:
# 2454 "data/maps/Hub1/scripts.pory"
	.string "You got a Golurkite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_149:
# 2468 "data/maps/Hub1/scripts.pory"
	.string "You got a Meowsticite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_150:
# 2482 "data/maps/Hub1/scripts.pory"
	.string "You got a Crabominite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_151:
# 2496 "data/maps/Hub1/scripts.pory"
	.string "You got a Golisopite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_152:
# 2510 "data/maps/Hub1/scripts.pory"
	.string "You got a Scovillainite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_153:
# 2524 "data/maps/Hub1/scripts.pory"
	.string "You got a Glimmoranite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_154:
# 2538 "data/maps/Hub1/scripts.pory"
	.string "You got a Baxcalibrite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_155:
# 2545 "data/maps/Hub1/scripts.pory"
	.string "I don't have anything on sale right now,\n"
	.string "sorry.\p"
	.string "Try doing more runs and getting far\n"
	.string "with new pokemon!$"

Hub_Event_Script_Chimecho_Text_0:
# 2561 "data/maps/Hub1/scripts.pory"
	.string "Heya. I sell starter charms.\n"
	.string "But I'm not open just yet.\l"
	.string "Try playing some more runs first, chim!$"

Hub_Event_Script_Chimecho_Text_1:
# 2569 "data/maps/Hub1/scripts.pory"
	.string "Ding! Would you like to\nbuy a starter TM?$"
