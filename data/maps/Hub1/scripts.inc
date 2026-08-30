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
# 9 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_WARPED_INTO_NEW_ACT, AfterWarpIntoNewAct_1
	return

AfterWarpIntoNewAct_1:
# 10 "data/maps/Hub1/scripts.pory"
	setflag FLAG_WARPED_INTO_NEW_ACT
# 13 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_PHIONE_EGG_HATCHED, AfterWarpIntoNewAct_4
AfterWarpIntoNewAct_3:
# 23 "data/maps/Hub1/scripts.pory"
	releaseall
	return

AfterWarpIntoNewAct_4:
# 14 "data/maps/Hub1/scripts.pory"
	removeitem ITEM_PHIONE_EGG_CHARM, 1
# 15 "data/maps/Hub1/scripts.pory"
	setvar VAR_RESULT, SPECIES_PHIONE
# 16 "data/maps/Hub1/scripts.pory"
	special GiveBufferedMon
# 17 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_EVOLVED
# 18 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_PHIONE_EGG_HATCHED
# 19 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_0
	goto AfterWarpIntoNewAct_3


AbraTeleport::
# 29 "data/maps/Hub1/scripts.pory"
	lockall
# 30 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_DEFEATED_PATH_LEADER, AbraTeleport_1
# 35 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_1, MSGBOX_YESNO
# 36 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 37 "data/maps/Hub1/scripts.pory"
	case YES, AbraTeleport_5
# 41 "data/maps/Hub1/scripts.pory"
	case NO, AbraTeleport_6
	return

AbraTeleport_1:
# 31 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_0
# 32 "data/maps/Hub1/scripts.pory"
	releaseall
	return

AbraTeleport_5:
# 38 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_2
# 39 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_DEFEATED_PATH_LEADER
# 40 "data/maps/Hub1/scripts.pory"
	special WarpToNextAncient
	return

AbraTeleport_6:
# 42 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_3
# 43 "data/maps/Hub1/scripts.pory"
	releaseall
	return


RivalFight1::
# 49 "data/maps/Hub1/scripts.pory"
	switch VAR_CURRENT_RIVAL
# 50 "data/maps/Hub1/scripts.pory"
	case 0, RivalFight1_2
# 55 "data/maps/Hub1/scripts.pory"
	case 1, RivalFight1_3
	return

RivalFight1_2:
# 51 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_TREECKO, RivalFight1_Text_0, RivalFight1_Text_1
# 52 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight1_Text_2, MSGBOX_AUTOCLOSE
# 53 "data/maps/Hub1/scripts.pory"
	waitmessage
	end

RivalFight1_3:
# 56 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_TORCHIC, RivalFight1_Text_3, RivalFight1_Text_1
# 57 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight1_Text_2, MSGBOX_AUTOCLOSE
# 58 "data/maps/Hub1/scripts.pory"
	waitmessage
	end


RivalFight2::
# 64 "data/maps/Hub1/scripts.pory"
	switch VAR_CURRENT_RIVAL
# 65 "data/maps/Hub1/scripts.pory"
	case 0, RivalFight2_2
# 70 "data/maps/Hub1/scripts.pory"
	case 1, RivalFight2_3
	return

RivalFight2_2:
# 66 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_GROVYLE, RivalFight1_Text_0, RivalFight1_Text_1
# 67 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight1_Text_2, MSGBOX_AUTOCLOSE
# 68 "data/maps/Hub1/scripts.pory"
	waitmessage
	end

RivalFight2_3:
# 71 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_COMBUSKEN, RivalFight1_Text_3, RivalFight1_Text_1
# 72 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight1_Text_2, MSGBOX_AUTOCLOSE
# 73 "data/maps/Hub1/scripts.pory"
	waitmessage
	end


RivalFight3::
# 79 "data/maps/Hub1/scripts.pory"
	switch VAR_CURRENT_RIVAL
# 80 "data/maps/Hub1/scripts.pory"
	case 0, RivalFight3_2
# 85 "data/maps/Hub1/scripts.pory"
	case 1, RivalFight3_3
	return

RivalFight3_2:
# 81 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_SCEPTILE, RivalFight1_Text_0, RivalFight1_Text_1
# 82 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight1_Text_2, MSGBOX_AUTOCLOSE
# 83 "data/maps/Hub1/scripts.pory"
	waitmessage
	end

RivalFight3_3:
# 86 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_BLAZIKEN, RivalFight1_Text_3, RivalFight1_Text_1
# 87 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight1_Text_2, MSGBOX_AUTOCLOSE
# 88 "data/maps/Hub1/scripts.pory"
	waitmessage
	end


RivalFight4::
# 94 "data/maps/Hub1/scripts.pory"
	switch VAR_CURRENT_RIVAL
# 95 "data/maps/Hub1/scripts.pory"
	case 0, RivalFight4_2
# 100 "data/maps/Hub1/scripts.pory"
	case 1, RivalFight4_3
	return

RivalFight4_2:
# 96 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_MEGASCEPTILE, RivalFight1_Text_0, RivalFight1_Text_1
# 97 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight1_Text_2, MSGBOX_AUTOCLOSE
# 98 "data/maps/Hub1/scripts.pory"
	waitmessage
	end

RivalFight4_3:
# 101 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_MBLAZIKEN, RivalFight1_Text_3, RivalFight1_Text_1
# 102 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight1_Text_2, MSGBOX_AUTOCLOSE
# 103 "data/maps/Hub1/scripts.pory"
	waitmessage
	end


HUB1_Run_Stats_Sign::
# 112 "data/maps/Hub1/scripts.pory"
	lockall
# 114 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TOTAL_RUNS
# 115 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_ACT1_WINS
# 116 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_ACT2_WINS
# 117 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_Run_Stats_Sign_Text_0
# 118 "data/maps/Hub1/scripts.pory"
	waitmessage
# 120 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_ACT3_WINS
# 121 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_ACT4_WINS
# 122 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_ACT2_WINS
# 123 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_Run_Stats_Sign_Text_1
# 124 "data/maps/Hub1/scripts.pory"
	waitmessage
# 126 "data/maps/Hub1/scripts.pory"
	releaseall
	return


HUB1_ONWARP::
# 130 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


HUB1_ONFRAME::
# 134 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_2, 1
# 137 "data/maps/Hub1/scripts.pory"
	setvar VAR_CURRENT_ACT, 0
# 138 "data/maps/Hub1/scripts.pory"
	special ClearMoney
# 141 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SYS_NEW_GAME, HUB1_ONFRAME_1
	return

HUB1_ONFRAME_1:
# 142 "data/maps/Hub1/scripts.pory"
	lockall
# 145 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SYS_NEW_GAME
# 146 "data/maps/Hub1/scripts.pory"
	setvar VAR_SHINY_RATE, 4096
# 147 "data/maps/Hub1/scripts.pory"
	setvar VAR_LEVEL_CAP, 14
# 150 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_ONFRAME_Text_0
# 153 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_1, SPECIES_BULBASAUR
# 154 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_2, SPECIES_CHARMANDER
# 155 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_3, SPECIES_SQUIRTLE
# 156 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_4, SPECIES_CHIKORITA
# 157 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_5, SPECIES_CYNDAQUIL
# 158 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_6, SPECIES_TOTODILE
# 159 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_7, SPECIES_TREECKO
# 160 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_8, SPECIES_TORCHIC
# 161 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_9, SPECIES_MUDKIP
# 162 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_10, SPECIES_TURTWIG
# 163 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_11, SPECIES_CHIMCHAR
# 164 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_12, SPECIES_PIPLUP
# 165 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_13, SPECIES_SNIVY
# 166 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_14, SPECIES_TEPIG
# 167 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_15, SPECIES_OSHAWOTT
# 168 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_16, SPECIES_CHESPIN
# 169 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_17, SPECIES_FENNEKIN
# 170 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_18, SPECIES_FROAKIE
# 171 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_19, SPECIES_ROWLET
# 172 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_20, SPECIES_LITTEN
# 173 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_21, SPECIES_POPPLIO
# 174 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_22, SPECIES_GROOKEY
# 175 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_23, SPECIES_SCORBUNNY
# 176 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_24, SPECIES_SOBBLE
# 177 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_25, SPECIES_SPRIGATITO
# 178 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_26, SPECIES_FUECOCO
# 179 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_27, SPECIES_QUAXLY
# 180 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 182 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 183 "data/maps/Hub1/scripts.pory"
	case SPECIES_BULBASAUR, HUB1_ONFRAME_5
# 187 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHARMANDER, HUB1_ONFRAME_6
# 191 "data/maps/Hub1/scripts.pory"
	case SPECIES_SQUIRTLE, HUB1_ONFRAME_7
# 195 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIKORITA, HUB1_ONFRAME_8
# 199 "data/maps/Hub1/scripts.pory"
	case SPECIES_CYNDAQUIL, HUB1_ONFRAME_9
# 203 "data/maps/Hub1/scripts.pory"
	case SPECIES_TOTODILE, HUB1_ONFRAME_10
# 207 "data/maps/Hub1/scripts.pory"
	case SPECIES_TREECKO, HUB1_ONFRAME_11
# 211 "data/maps/Hub1/scripts.pory"
	case SPECIES_TORCHIC, HUB1_ONFRAME_12
# 215 "data/maps/Hub1/scripts.pory"
	case SPECIES_MUDKIP, HUB1_ONFRAME_13
# 219 "data/maps/Hub1/scripts.pory"
	case SPECIES_TURTWIG, HUB1_ONFRAME_14
# 223 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIMCHAR, HUB1_ONFRAME_15
# 227 "data/maps/Hub1/scripts.pory"
	case SPECIES_PIPLUP, HUB1_ONFRAME_16
# 231 "data/maps/Hub1/scripts.pory"
	case SPECIES_SNIVY, HUB1_ONFRAME_17
# 235 "data/maps/Hub1/scripts.pory"
	case SPECIES_TEPIG, HUB1_ONFRAME_18
# 239 "data/maps/Hub1/scripts.pory"
	case SPECIES_OSHAWOTT, HUB1_ONFRAME_19
# 243 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHESPIN, HUB1_ONFRAME_20
# 247 "data/maps/Hub1/scripts.pory"
	case SPECIES_FENNEKIN, HUB1_ONFRAME_21
# 251 "data/maps/Hub1/scripts.pory"
	case SPECIES_FROAKIE, HUB1_ONFRAME_22
# 255 "data/maps/Hub1/scripts.pory"
	case SPECIES_ROWLET, HUB1_ONFRAME_23
# 259 "data/maps/Hub1/scripts.pory"
	case SPECIES_LITTEN, HUB1_ONFRAME_24
# 263 "data/maps/Hub1/scripts.pory"
	case SPECIES_POPPLIO, HUB1_ONFRAME_25
# 267 "data/maps/Hub1/scripts.pory"
	case SPECIES_GROOKEY, HUB1_ONFRAME_26
# 271 "data/maps/Hub1/scripts.pory"
	case SPECIES_SCORBUNNY, HUB1_ONFRAME_27
# 275 "data/maps/Hub1/scripts.pory"
	case SPECIES_SOBBLE, HUB1_ONFRAME_28
# 279 "data/maps/Hub1/scripts.pory"
	case SPECIES_SPRIGATITO, HUB1_ONFRAME_29
# 283 "data/maps/Hub1/scripts.pory"
	case SPECIES_FUECOCO, HUB1_ONFRAME_30
# 287 "data/maps/Hub1/scripts.pory"
	case SPECIES_QUAXLY, HUB1_ONFRAME_31
HUB1_ONFRAME_3:
# 292 "data/maps/Hub1/scripts.pory"
	special UpdatePlayerSprite
# 293 "data/maps/Hub1/scripts.pory"
	special UpdateTransformedPlayerPalette
# 294 "data/maps/Hub1/scripts.pory"
	releaseall
# 296 "data/maps/Hub1/scripts.pory"
	lockall
# 297 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_ONFRAME_Text_28
# 298 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CANDY_JAR
# 300 "data/maps/Hub1/scripts.pory"
	releaseall
	return

HUB1_ONFRAME_5:
# 184 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_BULBASAUR, 14
# 185 "data/maps/Hub1/scripts.pory"
	setflag FLAG_BULBASAUR_UNLOCKED
# 186 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_BULBASAUR
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_6:
# 188 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHARMANDER, 14
# 189 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHARMANDER_UNLOCKED
# 190 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHARMANDER
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_7:
# 192 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SQUIRTLE, 14
# 193 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SQUIRTLE_UNLOCKED
# 194 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SQUIRTLE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_8:
# 196 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHIKORITA, 14
# 197 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIKORITA_UNLOCKED
# 198 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHIKORITA
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_9:
# 200 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 14
# 201 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CYNDAQUIL_UNLOCKED
# 202 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CYNDAQUIL
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_10:
# 204 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TOTODILE, 14
# 205 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TOTODILE_UNLOCKED
# 206 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TOTODILE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_11:
# 208 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TREECKO, 14
# 209 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TREECKO_UNLOCKED
# 210 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TREECKO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_12:
# 212 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TORCHIC, 14
# 213 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TORCHIC_UNLOCKED
# 214 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TORCHIC
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_13:
# 216 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_MUDKIP, 14
# 217 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MUDKIP_UNLOCKED
# 218 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_MUDKIP
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_14:
# 220 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TURTWIG, 14
# 221 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TURTWIG_UNLOCKED
# 222 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TURTWIG
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_15:
# 224 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHIMCHAR, 14
# 225 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIMCHAR_UNLOCKED
# 226 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHIMCHAR
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_16:
# 228 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_PIPLUP, 14
# 229 "data/maps/Hub1/scripts.pory"
	setflag FLAG_PIPLUP_UNLOCKED
# 230 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_PIPLUP
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_17:
# 232 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SNIVY, 14
# 233 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SNIVY_UNLOCKED
# 234 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SNIVY
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_18:
# 236 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TEPIG, 14
# 237 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TEPIG_UNLOCKED
# 238 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TEPIG
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_19:
# 240 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_OSHAWOTT, 14
# 241 "data/maps/Hub1/scripts.pory"
	setflag FLAG_OSHAWOTT_UNLOCKED
# 242 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_OSHAWOTT
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_20:
# 244 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHESPIN, 14
# 245 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHESPIN_UNLOCKED
# 246 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHESPIN
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_21:
# 248 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FENNEKIN, 14
# 249 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FENNEKIN_UNLOCKED
# 250 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_FENNEKIN
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_22:
# 252 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FROAKIE, 14
# 253 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FROAKIE_UNLOCKED
# 254 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_FROAKIE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_23:
# 256 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_ROWLET, 14
# 257 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ROWLET_UNLOCKED
# 258 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_ROWLET
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_24:
# 260 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_LITTEN, 14
# 261 "data/maps/Hub1/scripts.pory"
	setflag FLAG_LITTEN_UNLOCKED
# 262 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_LITTEN
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_25:
# 264 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_POPPLIO, 14
# 265 "data/maps/Hub1/scripts.pory"
	setflag FLAG_POPPLIO_UNLOCKED
# 266 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_POPPLIO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_26:
# 268 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_GROOKEY, 14
# 269 "data/maps/Hub1/scripts.pory"
	setflag FLAG_GROOKEY_UNLOCKED
# 270 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_GROOKEY
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_27:
# 272 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SCORBUNNY, 14
# 273 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SCORBUNNY_UNLOCKED
# 274 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SCORBUNNY
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_28:
# 276 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SOBBLE, 14
# 277 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SOBBLE_UNLOCKED
# 278 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SOBBLE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_29:
# 280 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SPRIGATITO, 14
# 281 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SPRIGATITO_UNLOCKED
# 282 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SPRIGATITO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_30:
# 284 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FUECOCO, 14
# 285 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FUECOCO_UNLOCKED
# 286 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_FUECOCO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_31:
# 288 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_QUAXLY, 14
# 289 "data/maps/Hub1/scripts.pory"
	setflag FLAG_QUAXLY_UNLOCKED
# 290 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_QUAXLY
	goto HUB1_ONFRAME_3


Hub_Event_Script_Birch::
# 305 "data/maps/Hub1/scripts.pory"
	lockall
# 306 "data/maps/Hub1/scripts.pory"
	faceplayer
# 307 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_0, MSGBOX_YESNO
# 308 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 309 "data/maps/Hub1/scripts.pory"
	case YES, Hub_Event_Script_Birch_2
# 313 "data/maps/Hub1/scripts.pory"
	case NO, Hub_Event_Script_Birch_3
	return

Hub_Event_Script_Birch_2:
# 310 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_2
# 311 "data/maps/Hub1/scripts.pory"
	call GiveStarterCharm
# 312 "data/maps/Hub1/scripts.pory"
	special WarpToNextAct
	return

Hub_Event_Script_Birch_3:
# 314 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_3
# 315 "data/maps/Hub1/scripts.pory"
	releaseall
	return


Hub_Event_Script_Miltank::
# 320 "data/maps/Hub1/scripts.pory"
	lockall
# 321 "data/maps/Hub1/scripts.pory"
	faceplayer
# 322 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 324 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_BULBASAUR_UNLOCKED, Hub_Event_Script_Miltank_2
Hub_Event_Script_Miltank_1:
# 325 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHARMANDER_UNLOCKED, Hub_Event_Script_Miltank_5
Hub_Event_Script_Miltank_4:
# 326 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SQUIRTLE_UNLOCKED, Hub_Event_Script_Miltank_8
Hub_Event_Script_Miltank_7:
# 327 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHIKORITA_UNLOCKED, Hub_Event_Script_Miltank_11
Hub_Event_Script_Miltank_10:
# 328 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CYNDAQUIL_UNLOCKED, Hub_Event_Script_Miltank_14
Hub_Event_Script_Miltank_13:
# 329 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TOTODILE_UNLOCKED, Hub_Event_Script_Miltank_17
Hub_Event_Script_Miltank_16:
# 330 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TREECKO_UNLOCKED, Hub_Event_Script_Miltank_20
Hub_Event_Script_Miltank_19:
# 331 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TORCHIC_UNLOCKED, Hub_Event_Script_Miltank_23
Hub_Event_Script_Miltank_22:
# 332 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MUDKIP_UNLOCKED, Hub_Event_Script_Miltank_26
Hub_Event_Script_Miltank_25:
# 333 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TURTWIG_UNLOCKED, Hub_Event_Script_Miltank_29
Hub_Event_Script_Miltank_28:
# 334 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHIMCHAR_UNLOCKED, Hub_Event_Script_Miltank_32
Hub_Event_Script_Miltank_31:
# 335 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_PIPLUP_UNLOCKED, Hub_Event_Script_Miltank_35
Hub_Event_Script_Miltank_34:
# 336 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SNIVY_UNLOCKED, Hub_Event_Script_Miltank_38
Hub_Event_Script_Miltank_37:
# 337 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TEPIG_UNLOCKED, Hub_Event_Script_Miltank_41
Hub_Event_Script_Miltank_40:
# 338 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_OSHAWOTT_UNLOCKED, Hub_Event_Script_Miltank_44
Hub_Event_Script_Miltank_43:
# 339 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHESPIN_UNLOCKED, Hub_Event_Script_Miltank_47
Hub_Event_Script_Miltank_46:
# 340 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FENNEKIN_UNLOCKED, Hub_Event_Script_Miltank_50
Hub_Event_Script_Miltank_49:
# 341 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FROAKIE_UNLOCKED, Hub_Event_Script_Miltank_53
Hub_Event_Script_Miltank_52:
# 342 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ROWLET_UNLOCKED, Hub_Event_Script_Miltank_56
Hub_Event_Script_Miltank_55:
# 343 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_LITTEN_UNLOCKED, Hub_Event_Script_Miltank_59
Hub_Event_Script_Miltank_58:
# 344 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_POPPLIO_UNLOCKED, Hub_Event_Script_Miltank_62
Hub_Event_Script_Miltank_61:
# 345 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_GROOKEY_UNLOCKED, Hub_Event_Script_Miltank_65
Hub_Event_Script_Miltank_64:
# 346 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SCORBUNNY_UNLOCKED, Hub_Event_Script_Miltank_68
Hub_Event_Script_Miltank_67:
# 347 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SOBBLE_UNLOCKED, Hub_Event_Script_Miltank_71
Hub_Event_Script_Miltank_70:
# 348 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SPRIGATITO_UNLOCKED, Hub_Event_Script_Miltank_74
Hub_Event_Script_Miltank_73:
# 349 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FUECOCO_UNLOCKED, Hub_Event_Script_Miltank_77
Hub_Event_Script_Miltank_76:
# 350 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_QUAXLY_UNLOCKED, Hub_Event_Script_Miltank_80
Hub_Event_Script_Miltank_79:
# 352 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Miltank_82
# 687 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_56
# 688 "data/maps/Hub1/scripts.pory"
	waitmessage
# 689 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Miltank_2:
# 324 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_0, SPECIES_BULBASAUR
# 324 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_1

Hub_Event_Script_Miltank_5:
# 325 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_1, SPECIES_CHARMANDER
# 325 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_4

Hub_Event_Script_Miltank_8:
# 326 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_2, SPECIES_SQUIRTLE
# 326 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_7

Hub_Event_Script_Miltank_11:
# 327 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_3, SPECIES_CHIKORITA
# 327 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_10

Hub_Event_Script_Miltank_14:
# 328 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_4, SPECIES_CYNDAQUIL
# 328 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_13

Hub_Event_Script_Miltank_17:
# 329 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_5, SPECIES_TOTODILE
# 329 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_16

Hub_Event_Script_Miltank_20:
# 330 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_6, SPECIES_TREECKO
# 330 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_19

Hub_Event_Script_Miltank_23:
# 331 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_7, SPECIES_TORCHIC
# 331 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_22

Hub_Event_Script_Miltank_26:
# 332 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_8, SPECIES_MUDKIP
# 332 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_25

Hub_Event_Script_Miltank_29:
# 333 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_9, SPECIES_TURTWIG
# 333 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_28

Hub_Event_Script_Miltank_32:
# 334 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_10, SPECIES_CHIMCHAR
# 334 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_31

Hub_Event_Script_Miltank_35:
# 335 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_11, SPECIES_PIPLUP
# 335 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_34

Hub_Event_Script_Miltank_38:
# 336 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_12, SPECIES_SNIVY
# 336 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_37

Hub_Event_Script_Miltank_41:
# 337 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_13, SPECIES_TEPIG
# 337 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_40

Hub_Event_Script_Miltank_44:
# 338 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_14, SPECIES_OSHAWOTT
# 338 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_43

Hub_Event_Script_Miltank_47:
# 339 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_15, SPECIES_CHESPIN
# 339 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_46

Hub_Event_Script_Miltank_50:
# 340 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_16, SPECIES_FENNEKIN
# 340 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_49

Hub_Event_Script_Miltank_53:
# 341 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_17, SPECIES_FROAKIE
# 341 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_52

Hub_Event_Script_Miltank_56:
# 342 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_18, SPECIES_ROWLET
# 342 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_55

Hub_Event_Script_Miltank_59:
# 343 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_19, SPECIES_LITTEN
# 343 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_58

Hub_Event_Script_Miltank_62:
# 344 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_20, SPECIES_POPPLIO
# 344 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_61

Hub_Event_Script_Miltank_65:
# 345 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_21, SPECIES_GROOKEY
# 345 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_64

Hub_Event_Script_Miltank_68:
# 346 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_22, SPECIES_SCORBUNNY
# 346 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_67

Hub_Event_Script_Miltank_71:
# 347 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_23, SPECIES_SOBBLE
# 347 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_70

Hub_Event_Script_Miltank_74:
# 348 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_24, SPECIES_SPRIGATITO
# 348 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_73

Hub_Event_Script_Miltank_77:
# 349 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_25, SPECIES_FUECOCO
# 349 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_76

Hub_Event_Script_Miltank_80:
# 350 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_26, SPECIES_QUAXLY
# 350 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_79

Hub_Event_Script_Miltank_82:
# 353 "data/maps/Hub1/scripts.pory"
	showcoinsbox 21, 11
# 354 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_27
# 355 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 356 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 357 "data/maps/Hub1/scripts.pory"
	case MULTI_B_PRESSED, Hub_Event_Script_Miltank_87
# 359 "data/maps/Hub1/scripts.pory"
	case SPECIES_BULBASAUR, Hub_Event_Script_Miltank_88
# 371 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHARMANDER, Hub_Event_Script_Miltank_89
# 383 "data/maps/Hub1/scripts.pory"
	case SPECIES_SQUIRTLE, Hub_Event_Script_Miltank_90
# 395 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIKORITA, Hub_Event_Script_Miltank_91
# 407 "data/maps/Hub1/scripts.pory"
	case SPECIES_CYNDAQUIL, Hub_Event_Script_Miltank_92
# 419 "data/maps/Hub1/scripts.pory"
	case SPECIES_TOTODILE, Hub_Event_Script_Miltank_93
# 431 "data/maps/Hub1/scripts.pory"
	case SPECIES_TREECKO, Hub_Event_Script_Miltank_94
# 443 "data/maps/Hub1/scripts.pory"
	case SPECIES_TORCHIC, Hub_Event_Script_Miltank_95
# 455 "data/maps/Hub1/scripts.pory"
	case SPECIES_MUDKIP, Hub_Event_Script_Miltank_96
# 467 "data/maps/Hub1/scripts.pory"
	case SPECIES_TURTWIG, Hub_Event_Script_Miltank_97
# 479 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIMCHAR, Hub_Event_Script_Miltank_98
# 491 "data/maps/Hub1/scripts.pory"
	case SPECIES_PIPLUP, Hub_Event_Script_Miltank_99
# 503 "data/maps/Hub1/scripts.pory"
	case SPECIES_SNIVY, Hub_Event_Script_Miltank_100
# 515 "data/maps/Hub1/scripts.pory"
	case SPECIES_TEPIG, Hub_Event_Script_Miltank_101
# 527 "data/maps/Hub1/scripts.pory"
	case SPECIES_OSHAWOTT, Hub_Event_Script_Miltank_102
# 539 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHESPIN, Hub_Event_Script_Miltank_103
# 551 "data/maps/Hub1/scripts.pory"
	case SPECIES_FENNEKIN, Hub_Event_Script_Miltank_104
# 563 "data/maps/Hub1/scripts.pory"
	case SPECIES_FROAKIE, Hub_Event_Script_Miltank_105
# 575 "data/maps/Hub1/scripts.pory"
	case SPECIES_ROWLET, Hub_Event_Script_Miltank_106
# 587 "data/maps/Hub1/scripts.pory"
	case SPECIES_LITTEN, Hub_Event_Script_Miltank_107
# 599 "data/maps/Hub1/scripts.pory"
	case SPECIES_POPPLIO, Hub_Event_Script_Miltank_108
# 611 "data/maps/Hub1/scripts.pory"
	case SPECIES_GROOKEY, Hub_Event_Script_Miltank_109
# 623 "data/maps/Hub1/scripts.pory"
	case SPECIES_SCORBUNNY, Hub_Event_Script_Miltank_110
# 635 "data/maps/Hub1/scripts.pory"
	case SPECIES_SOBBLE, Hub_Event_Script_Miltank_111
# 647 "data/maps/Hub1/scripts.pory"
	case SPECIES_SPRIGATITO, Hub_Event_Script_Miltank_112
# 659 "data/maps/Hub1/scripts.pory"
	case SPECIES_FUECOCO, Hub_Event_Script_Miltank_113
# 671 "data/maps/Hub1/scripts.pory"
	case SPECIES_QUAXLY, Hub_Event_Script_Miltank_114
Hub_Event_Script_Miltank_85:
# 684 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
# 685 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Miltank_87:
# 358 "data/maps/Hub1/scripts.pory"
	releaseall
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_88:
# 360 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 361 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_115
# 369 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_89:
# 372 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 373 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_118
# 381 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_90:
# 384 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 385 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_121
# 393 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_91:
# 396 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 397 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_124
# 405 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_92:
# 408 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 409 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_127
# 417 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_93:
# 420 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 421 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_130
# 429 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_94:
# 432 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 433 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_133
# 441 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_95:
# 444 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 445 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_136
# 453 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_96:
# 456 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 457 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_139
# 465 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_97:
# 468 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 469 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_142
# 477 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_98:
# 480 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 481 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_145
# 489 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_99:
# 492 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 493 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_148
# 501 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_100:
# 504 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 505 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_151
# 513 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_101:
# 516 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 517 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_154
# 525 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_102:
# 528 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 529 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_157
# 537 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_103:
# 540 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 541 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_160
# 549 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_104:
# 552 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 553 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_163
# 561 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_105:
# 564 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 565 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_166
# 573 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_106:
# 576 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 577 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_169
# 585 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_107:
# 588 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 589 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_172
# 597 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_108:
# 600 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 601 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_175
# 609 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_109:
# 612 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 613 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_178
# 621 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_110:
# 624 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 625 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_181
# 633 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_111:
# 636 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 637 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_184
# 645 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_112:
# 648 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 649 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_187
# 657 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_113:
# 660 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 661 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_190
# 669 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_114:
# 672 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 673 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_193
# 681 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_115:
# 362 "data/maps/Hub1/scripts.pory"
	setflag FLAG_BULBASAUR_UNLOCKED
# 363 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 364 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 365 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 366 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_28
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_118:
# 374 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHARMANDER_UNLOCKED
# 375 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 376 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 377 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 378 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_121:
# 386 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SQUIRTLE_UNLOCKED
# 387 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 388 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 389 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 390 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_31
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_124:
# 398 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIKORITA_UNLOCKED
# 399 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 400 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 401 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 402 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_32
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_127:
# 410 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CYNDAQUIL_UNLOCKED
# 411 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 412 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 413 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 414 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_33
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_130:
# 422 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TOTODILE_UNLOCKED
# 423 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 424 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 425 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 426 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_34
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_133:
# 434 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TREECKO_UNLOCKED
# 435 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 436 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 437 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 438 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_35
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_136:
# 446 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TORCHIC_UNLOCKED
# 447 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 448 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 449 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 450 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_36
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_139:
# 458 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MUDKIP_UNLOCKED
# 459 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 460 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 461 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 462 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_37
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_142:
# 470 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TURTWIG_UNLOCKED
# 471 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 472 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 473 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 474 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_38
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_145:
# 482 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIMCHAR_UNLOCKED
# 483 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 484 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 485 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 486 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_39
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_148:
# 494 "data/maps/Hub1/scripts.pory"
	setflag FLAG_PIPLUP_UNLOCKED
# 495 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 496 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 497 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 498 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_40
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_151:
# 506 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SNIVY_UNLOCKED
# 507 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 508 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 509 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 510 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_41
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_154:
# 518 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TEPIG_UNLOCKED
# 519 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 520 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 521 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 522 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_42
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_157:
# 530 "data/maps/Hub1/scripts.pory"
	setflag FLAG_OSHAWOTT_UNLOCKED
# 531 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 532 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 533 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 534 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_43
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_160:
# 542 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHESPIN_UNLOCKED
# 543 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 544 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 545 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 546 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_44
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_163:
# 554 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FENNEKIN_UNLOCKED
# 555 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 556 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 557 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 558 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_45
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_166:
# 566 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FROAKIE_UNLOCKED
# 567 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 568 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 569 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 570 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_46
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_169:
# 578 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ROWLET_UNLOCKED
# 579 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 580 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 581 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 582 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_47
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_172:
# 590 "data/maps/Hub1/scripts.pory"
	setflag FLAG_LITTEN_UNLOCKED
# 591 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 592 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 593 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 594 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_48
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_175:
# 602 "data/maps/Hub1/scripts.pory"
	setflag FLAG_POPPLIO_UNLOCKED
# 603 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 604 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 605 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 606 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_49
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_178:
# 614 "data/maps/Hub1/scripts.pory"
	setflag FLAG_GROOKEY_UNLOCKED
# 615 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 616 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 617 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 618 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_50
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_181:
# 626 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SCORBUNNY_UNLOCKED
# 627 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 628 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 629 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 630 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_51
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_184:
# 638 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SOBBLE_UNLOCKED
# 639 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 640 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 641 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 642 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_52
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_187:
# 650 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SPRIGATITO_UNLOCKED
# 651 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 652 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 653 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 654 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_53
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_190:
# 662 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FUECOCO_UNLOCKED
# 663 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 664 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 665 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 666 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_54
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_193:
# 674 "data/maps/Hub1/scripts.pory"
	setflag FLAG_QUAXLY_UNLOCKED
# 675 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 676 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 677 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 678 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_55
	goto Hub_Event_Script_Miltank_85


Hub_Event_Script_Chansey::
# 695 "data/maps/Hub1/scripts.pory"
	lockall
# 696 "data/maps/Hub1/scripts.pory"
	faceplayer
# 697 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 698 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_BULBASAUR_UNLOCKED, Hub_Event_Script_Chansey_3
Hub_Event_Script_Chansey_1:
# 699 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHARMANDER_UNLOCKED, Hub_Event_Script_Chansey_8
Hub_Event_Script_Chansey_6:
# 700 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SQUIRTLE_UNLOCKED, Hub_Event_Script_Chansey_13
Hub_Event_Script_Chansey_11:
# 701 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHIKORITA_UNLOCKED, Hub_Event_Script_Chansey_18
Hub_Event_Script_Chansey_16:
# 702 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CYNDAQUIL_UNLOCKED, Hub_Event_Script_Chansey_23
Hub_Event_Script_Chansey_21:
# 703 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TOTODILE_UNLOCKED, Hub_Event_Script_Chansey_28
Hub_Event_Script_Chansey_26:
# 704 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TREECKO_UNLOCKED, Hub_Event_Script_Chansey_33
Hub_Event_Script_Chansey_31:
# 705 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TORCHIC_UNLOCKED, Hub_Event_Script_Chansey_38
Hub_Event_Script_Chansey_36:
# 706 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_MUDKIP_UNLOCKED, Hub_Event_Script_Chansey_43
Hub_Event_Script_Chansey_41:
# 707 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TURTWIG_UNLOCKED, Hub_Event_Script_Chansey_48
Hub_Event_Script_Chansey_46:
# 708 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHIMCHAR_UNLOCKED, Hub_Event_Script_Chansey_53
Hub_Event_Script_Chansey_51:
# 709 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_PIPLUP_UNLOCKED, Hub_Event_Script_Chansey_58
Hub_Event_Script_Chansey_56:
# 710 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SNIVY_UNLOCKED, Hub_Event_Script_Chansey_63
Hub_Event_Script_Chansey_61:
# 711 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TEPIG_UNLOCKED, Hub_Event_Script_Chansey_68
Hub_Event_Script_Chansey_66:
# 712 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_OSHAWOTT_UNLOCKED, Hub_Event_Script_Chansey_73
Hub_Event_Script_Chansey_71:
# 713 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHESPIN_UNLOCKED, Hub_Event_Script_Chansey_78
Hub_Event_Script_Chansey_76:
# 714 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FENNEKIN_UNLOCKED, Hub_Event_Script_Chansey_83
Hub_Event_Script_Chansey_81:
# 715 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FROAKIE_UNLOCKED, Hub_Event_Script_Chansey_88
Hub_Event_Script_Chansey_86:
# 716 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ROWLET_UNLOCKED, Hub_Event_Script_Chansey_93
Hub_Event_Script_Chansey_91:
# 717 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_LITTEN_UNLOCKED, Hub_Event_Script_Chansey_98
Hub_Event_Script_Chansey_96:
# 718 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_POPPLIO_UNLOCKED, Hub_Event_Script_Chansey_103
Hub_Event_Script_Chansey_101:
# 719 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_GROOKEY_UNLOCKED, Hub_Event_Script_Chansey_108
Hub_Event_Script_Chansey_106:
# 720 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SCORBUNNY_UNLOCKED, Hub_Event_Script_Chansey_113
Hub_Event_Script_Chansey_111:
# 721 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SOBBLE_UNLOCKED, Hub_Event_Script_Chansey_118
Hub_Event_Script_Chansey_116:
# 722 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPRIGATITO_UNLOCKED, Hub_Event_Script_Chansey_123
Hub_Event_Script_Chansey_121:
# 723 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FUECOCO_UNLOCKED, Hub_Event_Script_Chansey_128
Hub_Event_Script_Chansey_126:
# 724 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_QUAXLY_UNLOCKED, Hub_Event_Script_Chansey_133
Hub_Event_Script_Chansey_131:
# 726 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Chansey_136
# 749 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_2
# 750 "data/maps/Hub1/scripts.pory"
	waitmessage
# 751 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Chansey_2:
# 698 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_1, SPECIES_BULBASAUR
# 698 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_1

Hub_Event_Script_Chansey_3:
# 698 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_BULBASAUR
	goto_if_ne Hub_Event_Script_Chansey_2
	goto Hub_Event_Script_Chansey_1

Hub_Event_Script_Chansey_7:
# 699 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_2, SPECIES_CHARMANDER
# 699 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_6

Hub_Event_Script_Chansey_8:
# 699 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHARMANDER
	goto_if_ne Hub_Event_Script_Chansey_7
	goto Hub_Event_Script_Chansey_6

Hub_Event_Script_Chansey_12:
# 700 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_3, SPECIES_SQUIRTLE
# 700 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_11

Hub_Event_Script_Chansey_13:
# 700 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SQUIRTLE
	goto_if_ne Hub_Event_Script_Chansey_12
	goto Hub_Event_Script_Chansey_11

Hub_Event_Script_Chansey_17:
# 701 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_4, SPECIES_CHIKORITA
# 701 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_16

Hub_Event_Script_Chansey_18:
# 701 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHIKORITA
	goto_if_ne Hub_Event_Script_Chansey_17
	goto Hub_Event_Script_Chansey_16

Hub_Event_Script_Chansey_22:
# 702 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_5, SPECIES_CYNDAQUIL
# 702 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_21

Hub_Event_Script_Chansey_23:
# 702 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CYNDAQUIL
	goto_if_ne Hub_Event_Script_Chansey_22
	goto Hub_Event_Script_Chansey_21

Hub_Event_Script_Chansey_27:
# 703 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_6, SPECIES_TOTODILE
# 703 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_26

Hub_Event_Script_Chansey_28:
# 703 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TOTODILE
	goto_if_ne Hub_Event_Script_Chansey_27
	goto Hub_Event_Script_Chansey_26

Hub_Event_Script_Chansey_32:
# 704 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_7, SPECIES_TREECKO
# 704 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_31

Hub_Event_Script_Chansey_33:
# 704 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TREECKO
	goto_if_ne Hub_Event_Script_Chansey_32
	goto Hub_Event_Script_Chansey_31

Hub_Event_Script_Chansey_37:
# 705 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_8, SPECIES_TORCHIC
# 705 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_36

Hub_Event_Script_Chansey_38:
# 705 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TORCHIC
	goto_if_ne Hub_Event_Script_Chansey_37
	goto Hub_Event_Script_Chansey_36

Hub_Event_Script_Chansey_42:
# 706 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_9, SPECIES_MUDKIP
# 706 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_41

Hub_Event_Script_Chansey_43:
# 706 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_MUDKIP
	goto_if_ne Hub_Event_Script_Chansey_42
	goto Hub_Event_Script_Chansey_41

Hub_Event_Script_Chansey_47:
# 707 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_10, SPECIES_TURTWIG
# 707 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_46

Hub_Event_Script_Chansey_48:
# 707 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TURTWIG
	goto_if_ne Hub_Event_Script_Chansey_47
	goto Hub_Event_Script_Chansey_46

Hub_Event_Script_Chansey_52:
# 708 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_11, SPECIES_CHIMCHAR
# 708 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_51

Hub_Event_Script_Chansey_53:
# 708 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHIMCHAR
	goto_if_ne Hub_Event_Script_Chansey_52
	goto Hub_Event_Script_Chansey_51

Hub_Event_Script_Chansey_57:
# 709 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_12, SPECIES_PIPLUP
# 709 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_56

Hub_Event_Script_Chansey_58:
# 709 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_PIPLUP
	goto_if_ne Hub_Event_Script_Chansey_57
	goto Hub_Event_Script_Chansey_56

Hub_Event_Script_Chansey_62:
# 710 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_13, SPECIES_SNIVY
# 710 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_61

Hub_Event_Script_Chansey_63:
# 710 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SNIVY
	goto_if_ne Hub_Event_Script_Chansey_62
	goto Hub_Event_Script_Chansey_61

Hub_Event_Script_Chansey_67:
# 711 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_14, SPECIES_TEPIG
# 711 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_66

Hub_Event_Script_Chansey_68:
# 711 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TEPIG
	goto_if_ne Hub_Event_Script_Chansey_67
	goto Hub_Event_Script_Chansey_66

Hub_Event_Script_Chansey_72:
# 712 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_15, SPECIES_OSHAWOTT
# 712 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_71

Hub_Event_Script_Chansey_73:
# 712 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_OSHAWOTT
	goto_if_ne Hub_Event_Script_Chansey_72
	goto Hub_Event_Script_Chansey_71

Hub_Event_Script_Chansey_77:
# 713 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_16, SPECIES_CHESPIN
# 713 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_76

Hub_Event_Script_Chansey_78:
# 713 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHESPIN
	goto_if_ne Hub_Event_Script_Chansey_77
	goto Hub_Event_Script_Chansey_76

Hub_Event_Script_Chansey_82:
# 714 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_17, SPECIES_FENNEKIN
# 714 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_81

Hub_Event_Script_Chansey_83:
# 714 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FENNEKIN
	goto_if_ne Hub_Event_Script_Chansey_82
	goto Hub_Event_Script_Chansey_81

Hub_Event_Script_Chansey_87:
# 715 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_18, SPECIES_FROAKIE
# 715 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_86

Hub_Event_Script_Chansey_88:
# 715 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FROAKIE
	goto_if_ne Hub_Event_Script_Chansey_87
	goto Hub_Event_Script_Chansey_86

Hub_Event_Script_Chansey_92:
# 716 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_19, SPECIES_ROWLET
# 716 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_91

Hub_Event_Script_Chansey_93:
# 716 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_ROWLET
	goto_if_ne Hub_Event_Script_Chansey_92
	goto Hub_Event_Script_Chansey_91

Hub_Event_Script_Chansey_97:
# 717 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_20, SPECIES_LITTEN
# 717 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_96

Hub_Event_Script_Chansey_98:
# 717 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_LITTEN
	goto_if_ne Hub_Event_Script_Chansey_97
	goto Hub_Event_Script_Chansey_96

Hub_Event_Script_Chansey_102:
# 718 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_21, SPECIES_POPPLIO
# 718 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_101

Hub_Event_Script_Chansey_103:
# 718 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_POPPLIO
	goto_if_ne Hub_Event_Script_Chansey_102
	goto Hub_Event_Script_Chansey_101

Hub_Event_Script_Chansey_107:
# 719 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_22, SPECIES_GROOKEY
# 719 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_106

Hub_Event_Script_Chansey_108:
# 719 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_GROOKEY
	goto_if_ne Hub_Event_Script_Chansey_107
	goto Hub_Event_Script_Chansey_106

Hub_Event_Script_Chansey_112:
# 720 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_23, SPECIES_SCORBUNNY
# 720 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_111

Hub_Event_Script_Chansey_113:
# 720 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SCORBUNNY
	goto_if_ne Hub_Event_Script_Chansey_112
	goto Hub_Event_Script_Chansey_111

Hub_Event_Script_Chansey_117:
# 721 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_24, SPECIES_SOBBLE
# 721 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_116

Hub_Event_Script_Chansey_118:
# 721 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SOBBLE
	goto_if_ne Hub_Event_Script_Chansey_117
	goto Hub_Event_Script_Chansey_116

Hub_Event_Script_Chansey_122:
# 722 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_25, SPECIES_SPRIGATITO
# 722 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_121

Hub_Event_Script_Chansey_123:
# 722 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SPRIGATITO
	goto_if_ne Hub_Event_Script_Chansey_122
	goto Hub_Event_Script_Chansey_121

Hub_Event_Script_Chansey_127:
# 723 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_26, SPECIES_FUECOCO
# 723 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_126

Hub_Event_Script_Chansey_128:
# 723 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FUECOCO
	goto_if_ne Hub_Event_Script_Chansey_127
	goto Hub_Event_Script_Chansey_126

Hub_Event_Script_Chansey_132:
# 724 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_27, SPECIES_QUAXLY
# 724 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_131

Hub_Event_Script_Chansey_133:
# 724 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_QUAXLY
	goto_if_ne Hub_Event_Script_Chansey_132
	goto Hub_Event_Script_Chansey_131

Hub_Event_Script_Chansey_136:
# 727 "data/maps/Hub1/scripts.pory"
	setvar VAR_RESULT, 0
# 728 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_0
# 729 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 731 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_ne Hub_Event_Script_Chansey_139
# 746 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Chansey_139:
# 732 "data/maps/Hub1/scripts.pory"
	copyvar VAR_STARTER_MON, VAR_RESULT
# 733 "data/maps/Hub1/scripts.pory"
	special ZeroPlayerPartyMons
# 734 "data/maps/Hub1/scripts.pory"
	special GiveSavedStarter
# 735 "data/maps/Hub1/scripts.pory"
	special UpdatePlayerSprite
# 736 "data/maps/Hub1/scripts.pory"
	special UpdateTransformedPlayerPalette
# 737 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 738 "data/maps/Hub1/scripts.pory"
	releaseall
# 739 "data/maps/Hub1/scripts.pory"
	lockall
# 740 "data/maps/Hub1/scripts.pory"
	playse SE_SUCCESS
# 741 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_1
# 742 "data/maps/Hub1/scripts.pory"
	waitmessage
# 743 "data/maps/Hub1/scripts.pory"
	releaseall
	return


KecShop_Sign::
# 755 "data/maps/Hub1/scripts.pory"
	lockall
# 756 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Sign_Text_0
# 757 "data/maps/Hub1/scripts.pory"
	waitmessage
# 758 "data/maps/Hub1/scripts.pory"
	releaseall
	return


KecShop::
# 762 "data/maps/Hub1/scripts.pory"
	lockall
# 763 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Sign_Text_0
# 764 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_MEMORY_MUSHROOM_UNLOCKED, KecShop_2
KecShop_1:
# 768 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_RARE_CANDY_UNLOCKED, KecShop_5
KecShop_4:
# 772 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ORAN_BERRY_UNLOCKED, KecShop_8
KecShop_7:
# 776 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_LUM_BERRY_UNLOCKED, KecShop_11
KecShop_10:
# 780 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SERIOUS_MINT_UNLOCKED, KecShop_14
KecShop_13:
# 785 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne KecShop_17
# 847 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_7
# 848 "data/maps/Hub1/scripts.pory"
	waitmessage
# 849 "data/maps/Hub1/scripts.pory"
	releaseall
KecShop_16:
# 851 "data/maps/Hub1/scripts.pory"
	releaseall
	return

KecShop_2:
# 765 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_0, ITEM_MEMORY_MUSHROOM
# 766 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_1

KecShop_5:
# 769 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_1, ITEM_RARE_CANDY
# 770 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_4

KecShop_8:
# 773 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_2, ITEM_ORAN_BERRY
# 774 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_7

KecShop_11:
# 777 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_3, ITEM_LUM_BERRY
# 778 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_10

KecShop_14:
# 781 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_4, ITEM_SERIOUS_MINT
# 782 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_13

KecShop_17:
# 786 "data/maps/Hub1/scripts.pory"
	showmoneybox 18, 10
# 787 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 788 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 789 "data/maps/Hub1/scripts.pory"
	case ITEM_ORAN_BERRY, KecShop_22
# 800 "data/maps/Hub1/scripts.pory"
	case ITEM_LUM_BERRY, KecShop_23
# 811 "data/maps/Hub1/scripts.pory"
	case ITEM_SERIOUS_MINT, KecShop_24
# 822 "data/maps/Hub1/scripts.pory"
	case ITEM_MEMORY_MUSHROOM, KecShop_25
# 833 "data/maps/Hub1/scripts.pory"
	case ITEM_RARE_CANDY, KecShop_26
KecShop_20:
# 845 "data/maps/Hub1/scripts.pory"
	hidemoneybox
	goto KecShop_16

KecShop_22:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_27
# 798 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_20

KecShop_23:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_30
# 809 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_20

KecShop_24:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_33
# 820 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_20

KecShop_25:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_36
# 831 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_20

KecShop_26:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_39
# 842 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_20

KecShop_27:
# 791 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 792 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 793 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 794 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ORAN_BERRY
# 795 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_20

KecShop_30:
# 802 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 803 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 804 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 805 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUM_BERRY
# 806 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_20

KecShop_33:
# 813 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 814 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 815 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 816 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SERIOUS_MINT
# 817 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_20

KecShop_36:
# 824 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 825 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 826 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 827 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM
# 828 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_20

KecShop_39:
# 835 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 836 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 837 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 838 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 839 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_20


KecShop_Shiny::
# 855 "data/maps/Hub1/scripts.pory"
	lockall
# 856 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Sign_Text_0
# 857 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_ROCK_SMASH_UNLOCKED, KecShop_Shiny_2
KecShop_Shiny_1:
# 861 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_SWIFT_UNLOCKED, KecShop_Shiny_5
KecShop_Shiny_4:
# 865 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_CUT_UNLOCKED, KecShop_Shiny_8
KecShop_Shiny_7:
# 869 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_NOBLE_ROAR_UNLOCKED, KecShop_Shiny_11
KecShop_Shiny_10:
# 873 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_CHARM_UNLOCKED, KecShop_Shiny_14
KecShop_Shiny_13:
# 877 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_FAKE_TEARS_UNLOCKED, KecShop_Shiny_17
KecShop_Shiny_16:
# 881 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_CONFUSE_RAY_UNLOCKED, KecShop_Shiny_20
KecShop_Shiny_19:
# 885 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_THUNDER_WAVE_UNLOCKED, KecShop_Shiny_23
KecShop_Shiny_22:
# 889 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_WILL_O_WISP_UNLOCKED, KecShop_Shiny_26
KecShop_Shiny_25:
# 893 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_TOXIC_UNLOCKED, KecShop_Shiny_29
KecShop_Shiny_28:
# 898 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne KecShop_Shiny_32
# 1016 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_7
# 1017 "data/maps/Hub1/scripts.pory"
	waitmessage
# 1018 "data/maps/Hub1/scripts.pory"
	releaseall
KecShop_Shiny_31:
# 1020 "data/maps/Hub1/scripts.pory"
	releaseall
	return

KecShop_Shiny_2:
# 858 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_0, ITEM_TM_ROCK_SMASH
# 859 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_1

KecShop_Shiny_5:
# 862 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_1, ITEM_TM_SWIFT
# 863 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_4

KecShop_Shiny_8:
# 866 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_2, ITEM_TM_CUT
# 867 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_7

KecShop_Shiny_11:
# 870 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_3, ITEM_TM_NOBLE_ROAR
# 871 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_10

KecShop_Shiny_14:
# 874 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_4, ITEM_TM_CHARM
# 875 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_13

KecShop_Shiny_17:
# 878 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_5, ITEM_TM_FAKE_TEARS
# 879 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_16

KecShop_Shiny_20:
# 882 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_6, ITEM_TM_CONFUSE_RAY
# 883 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_19

KecShop_Shiny_23:
# 886 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_7, ITEM_TM_THUNDER_WAVE
# 887 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_22

KecShop_Shiny_26:
# 890 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_8, ITEM_TM_WILL_O_WISP
# 891 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_25

KecShop_Shiny_29:
# 894 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_9, ITEM_TM_TOXIC
# 895 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_28

KecShop_Shiny_32:
# 899 "data/maps/Hub1/scripts.pory"
	showmoneybox 18, 10
# 900 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 901 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 902 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_NOBLE_ROAR, KecShop_Shiny_37
# 913 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ROCK_SMASH, KecShop_Shiny_38
# 924 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SWIFT, KecShop_Shiny_39
# 935 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CUT, KecShop_Shiny_40
# 946 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CHARM, KecShop_Shiny_41
# 957 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_FAKE_TEARS, KecShop_Shiny_42
# 968 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CONFUSE_RAY, KecShop_Shiny_43
# 979 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_THUNDER_WAVE, KecShop_Shiny_44
# 990 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_WILL_O_WISP, KecShop_Shiny_45
# 1001 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_TOXIC, KecShop_Shiny_46
KecShop_Shiny_35:
# 1014 "data/maps/Hub1/scripts.pory"
	hidemoneybox
	goto KecShop_Shiny_31

KecShop_Shiny_37:
	checkmoney 400
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_47
# 911 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_Shiny_35

KecShop_Shiny_38:
	checkmoney 400
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_50
# 922 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_Shiny_35

KecShop_Shiny_39:
	checkmoney 400
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_53
# 933 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_Shiny_35

KecShop_Shiny_40:
	checkmoney 400
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_56
# 944 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_Shiny_35

KecShop_Shiny_41:
	checkmoney 400
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_59
# 955 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_Shiny_35

KecShop_Shiny_42:
	checkmoney 400
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_62
# 966 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_Shiny_35

KecShop_Shiny_43:
	checkmoney 400
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_65
# 977 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_Shiny_35

KecShop_Shiny_44:
	checkmoney 400
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_68
# 988 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_Shiny_35

KecShop_Shiny_45:
	checkmoney 400
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_71
# 999 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_Shiny_35

KecShop_Shiny_46:
	checkmoney 400
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_74
# 1010 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_Shiny_35

KecShop_Shiny_47:
# 904 "data/maps/Hub1/scripts.pory"
	removemoney 400
# 905 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 906 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 907 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_NOBLE_ROAR
# 908 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_Shiny_35

KecShop_Shiny_50:
# 915 "data/maps/Hub1/scripts.pory"
	removemoney 400
# 916 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 917 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 918 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_ROCK_SMASH
# 919 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_Shiny_35

KecShop_Shiny_53:
# 926 "data/maps/Hub1/scripts.pory"
	removemoney 400
# 927 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 928 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 929 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SWIFT
# 930 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_Shiny_35

KecShop_Shiny_56:
# 937 "data/maps/Hub1/scripts.pory"
	removemoney 400
# 938 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 939 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 940 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CUT
# 941 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_Shiny_35

KecShop_Shiny_59:
# 948 "data/maps/Hub1/scripts.pory"
	removemoney 400
# 949 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 950 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 951 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CHARM
# 952 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_Shiny_35

KecShop_Shiny_62:
# 959 "data/maps/Hub1/scripts.pory"
	removemoney 400
# 960 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 961 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 962 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_FAKE_TEARS
# 963 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_Shiny_35

KecShop_Shiny_65:
# 970 "data/maps/Hub1/scripts.pory"
	removemoney 400
# 971 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 972 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 973 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CONFUSE_RAY
# 974 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_Shiny_35

KecShop_Shiny_68:
# 981 "data/maps/Hub1/scripts.pory"
	removemoney 400
# 982 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 983 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 984 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_THUNDER_WAVE
# 985 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_Shiny_35

KecShop_Shiny_71:
# 992 "data/maps/Hub1/scripts.pory"
	removemoney 400
# 993 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 994 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 995 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_WILL_O_WISP
# 996 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_Shiny_35

KecShop_Shiny_74:
# 1003 "data/maps/Hub1/scripts.pory"
	removemoney 400
# 1004 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1005 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1006 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_TOXIC
# 1007 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_Shiny_35


Hub_Event_Script_Kecleon::
# 1024 "data/maps/Hub1/scripts.pory"
	lockall
# 1025 "data/maps/Hub1/scripts.pory"
	faceplayer
# 1026 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1027 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_0
# 1028 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED, Hub_Event_Script_Kecleon_2
Hub_Event_Script_Kecleon_1:
# 1032 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED, Hub_Event_Script_Kecleon_5
Hub_Event_Script_Kecleon_4:
# 1037 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ORAN_BERRY_UNLOCKED, Hub_Event_Script_Kecleon_8
Hub_Event_Script_Kecleon_7:
# 1042 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_LUM_BERRY_UNLOCKED, Hub_Event_Script_Kecleon_11
Hub_Event_Script_Kecleon_10:
# 1047 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SERIOUS_MINT_UNLOCKED, Hub_Event_Script_Kecleon_14
Hub_Event_Script_Kecleon_13:
# 1053 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Kecleon_17
# 1130 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
# 1131 "data/maps/Hub1/scripts.pory"
	waitmessage
# 1132 "data/maps/Hub1/scripts.pory"
	releaseall
Hub_Event_Script_Kecleon_16:
# 1134 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
# 1135 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Kecleon_2:
# 1029 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_1, ITEM_MEMORY_MUSHROOM
# 1030 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_5:
# 1033 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_1, ITEM_RARE_CANDY
# 1034 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_4

Hub_Event_Script_Kecleon_8:
# 1038 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_2, ITEM_ORAN_BERRY
# 1039 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_7

Hub_Event_Script_Kecleon_11:
# 1043 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_3, ITEM_LUM_BERRY
# 1044 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_10

Hub_Event_Script_Kecleon_14:
# 1048 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_4, ITEM_SERIOUS_MINT
# 1049 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_13

Hub_Event_Script_Kecleon_17:
# 1054 "data/maps/Hub1/scripts.pory"
	showcoinsbox 21, 11
# 1055 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 1056 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 1057 "data/maps/Hub1/scripts.pory"
	case ITEM_ORAN_BERRY, Hub_Event_Script_Kecleon_21
# 1072 "data/maps/Hub1/scripts.pory"
	case ITEM_LUM_BERRY, Hub_Event_Script_Kecleon_22
# 1086 "data/maps/Hub1/scripts.pory"
	case ITEM_SERIOUS_MINT, Hub_Event_Script_Kecleon_23
# 1100 "data/maps/Hub1/scripts.pory"
	case ITEM_MEMORY_MUSHROOM, Hub_Event_Script_Kecleon_24
# 1114 "data/maps/Hub1/scripts.pory"
	case ITEM_RARE_CANDY, Hub_Event_Script_Kecleon_25
	goto Hub_Event_Script_Kecleon_16

Hub_Event_Script_Kecleon_21:
# 1058 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ORAN_BERRY_UNLOCKED, Hub_Event_Script_Kecleon_26
	goto Hub_Event_Script_Kecleon_16

Hub_Event_Script_Kecleon_22:
# 1073 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_LUM_BERRY_UNLOCKED, Hub_Event_Script_Kecleon_28
	goto Hub_Event_Script_Kecleon_16

Hub_Event_Script_Kecleon_23:
# 1087 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SERIOUS_MINT_UNLOCKED, Hub_Event_Script_Kecleon_30
	goto Hub_Event_Script_Kecleon_16

Hub_Event_Script_Kecleon_24:
# 1101 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEMORY_MUSHROOM_UNLOCKED, Hub_Event_Script_Kecleon_32
	goto Hub_Event_Script_Kecleon_16

Hub_Event_Script_Kecleon_25:
# 1115 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED, Hub_Event_Script_Kecleon_34
	goto Hub_Event_Script_Kecleon_16

Hub_Event_Script_Kecleon_26:
# 1059 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1060 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 200
	goto_if_ge Hub_Event_Script_Kecleon_36
# 1068 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_3
	goto Hub_Event_Script_Kecleon_16

Hub_Event_Script_Kecleon_28:
# 1074 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1075 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Kecleon_39
# 1083 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_3
	goto Hub_Event_Script_Kecleon_16

Hub_Event_Script_Kecleon_30:
# 1088 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1089 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_42
# 1097 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_3
	goto Hub_Event_Script_Kecleon_16

Hub_Event_Script_Kecleon_32:
# 1102 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1103 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 200
	goto_if_ge Hub_Event_Script_Kecleon_45
# 1111 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_3
	goto Hub_Event_Script_Kecleon_16

Hub_Event_Script_Kecleon_34:
# 1116 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1117 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_48
# 1125 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_3
	goto Hub_Event_Script_Kecleon_16

Hub_Event_Script_Kecleon_36:
# 1061 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ORAN_BERRY_UNLOCKED
# 1062 "data/maps/Hub1/scripts.pory"
	removecoins 200
# 1063 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1064 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1065 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_2
	goto Hub_Event_Script_Kecleon_16

Hub_Event_Script_Kecleon_39:
# 1076 "data/maps/Hub1/scripts.pory"
	setflag FLAG_LUM_BERRY_UNLOCKED
# 1077 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 1078 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1079 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1080 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_4
	goto Hub_Event_Script_Kecleon_16

Hub_Event_Script_Kecleon_42:
# 1090 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SERIOUS_MINT_UNLOCKED
# 1091 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1092 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1093 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1094 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_5
	goto Hub_Event_Script_Kecleon_16

Hub_Event_Script_Kecleon_45:
# 1104 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MEMORY_MUSHROOM_UNLOCKED
# 1105 "data/maps/Hub1/scripts.pory"
	removecoins 200
# 1106 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1107 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1108 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_6
	goto Hub_Event_Script_Kecleon_16

Hub_Event_Script_Kecleon_48:
# 1118 "data/maps/Hub1/scripts.pory"
	setflag FLAG_RARE_CANDY_UNLOCKED
# 1119 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1120 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1121 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1122 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Kecleon_16


Hub_Event_Script_Shiny_Kecleon::
# 1140 "data/maps/Hub1/scripts.pory"
	lockall
# 1141 "data/maps/Hub1/scripts.pory"
	faceplayer
# 1142 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1143 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_0
# 1144 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ROCK_SMASH_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_2
Hub_Event_Script_Shiny_Kecleon_1:
# 1148 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SWIFT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_5
Hub_Event_Script_Shiny_Kecleon_4:
# 1152 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CUT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_8
Hub_Event_Script_Shiny_Kecleon_7:
# 1156 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_NOBLE_ROAR_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_11
Hub_Event_Script_Shiny_Kecleon_10:
# 1160 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CHARM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_14
Hub_Event_Script_Shiny_Kecleon_13:
# 1164 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_FAKE_TEARS_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_17
Hub_Event_Script_Shiny_Kecleon_16:
# 1168 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CONFUSE_RAY_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_20
Hub_Event_Script_Shiny_Kecleon_19:
# 1172 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_THUNDER_WAVE_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_23
Hub_Event_Script_Shiny_Kecleon_22:
# 1176 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_WILL_O_WISP_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_26
Hub_Event_Script_Shiny_Kecleon_25:
# 1180 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_TOXIC_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_29
Hub_Event_Script_Shiny_Kecleon_28:
# 1186 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Shiny_Kecleon_32
# 1334 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_11
# 1335 "data/maps/Hub1/scripts.pory"
	waitmessage
# 1336 "data/maps/Hub1/scripts.pory"
	releaseall
Hub_Event_Script_Shiny_Kecleon_31:
# 1338 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
# 1339 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Shiny_Kecleon_2:
# 1145 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_0, ITEM_TM_ROCK_SMASH
# 1146 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_1

Hub_Event_Script_Shiny_Kecleon_5:
# 1149 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_1, ITEM_TM_SWIFT
# 1150 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_4

Hub_Event_Script_Shiny_Kecleon_8:
# 1153 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_2, ITEM_TM_CUT
# 1154 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_7

Hub_Event_Script_Shiny_Kecleon_11:
# 1157 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_3, ITEM_TM_NOBLE_ROAR
# 1158 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_10

Hub_Event_Script_Shiny_Kecleon_14:
# 1161 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_4, ITEM_TM_CHARM
# 1162 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_13

Hub_Event_Script_Shiny_Kecleon_17:
# 1165 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_5, ITEM_TM_FAKE_TEARS
# 1166 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_16

Hub_Event_Script_Shiny_Kecleon_20:
# 1169 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_6, ITEM_TM_CONFUSE_RAY
# 1170 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_19

Hub_Event_Script_Shiny_Kecleon_23:
# 1173 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_7, ITEM_TM_THUNDER_WAVE
# 1174 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_22

Hub_Event_Script_Shiny_Kecleon_26:
# 1177 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_8, ITEM_TM_WILL_O_WISP
# 1178 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_25

Hub_Event_Script_Shiny_Kecleon_29:
# 1181 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_9, ITEM_TM_TOXIC
# 1182 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_28

Hub_Event_Script_Shiny_Kecleon_32:
# 1187 "data/maps/Hub1/scripts.pory"
	showcoinsbox 21, 11
# 1188 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 1189 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 1190 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_NOBLE_ROAR, Hub_Event_Script_Shiny_Kecleon_36
# 1204 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ROCK_SMASH, Hub_Event_Script_Shiny_Kecleon_37
# 1218 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SWIFT, Hub_Event_Script_Shiny_Kecleon_38
# 1232 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CUT, Hub_Event_Script_Shiny_Kecleon_39
# 1246 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CHARM, Hub_Event_Script_Shiny_Kecleon_40
# 1260 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_FAKE_TEARS, Hub_Event_Script_Shiny_Kecleon_41
# 1274 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CONFUSE_RAY, Hub_Event_Script_Shiny_Kecleon_42
# 1288 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_THUNDER_WAVE, Hub_Event_Script_Shiny_Kecleon_43
# 1302 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_WILL_O_WISP, Hub_Event_Script_Shiny_Kecleon_44
# 1317 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_TOXIC, Hub_Event_Script_Shiny_Kecleon_45
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_36:
# 1191 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_NOBLE_ROAR_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_46
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_37:
# 1205 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ROCK_SMASH_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_48
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_38:
# 1219 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SWIFT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_50
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_39:
# 1233 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CUT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_52
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_40:
# 1247 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CHARM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_54
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_41:
# 1261 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_FAKE_TEARS_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_56
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_42:
# 1275 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CONFUSE_RAY_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_58
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_43:
# 1289 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_THUNDER_WAVE_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_60
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_44:
# 1303 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_WILL_O_WISP_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_62
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_45:
# 1318 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_TOXIC_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_64
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_46:
# 1192 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1193 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 400
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_66
# 1201 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_3
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_48:
# 1206 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1207 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 900
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_69
# 1215 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_3
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_50:
# 1220 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1221 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_72
# 1229 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_3
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_52:
# 1234 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1235 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_75
# 1243 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_3
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_54:
# 1248 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1249 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 400
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_78
# 1257 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_3
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_56:
# 1262 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1263 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 400
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_81
# 1271 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_3
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_58:
# 1276 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1277 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 800
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_84
# 1285 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_3
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_60:
# 1290 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1291 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 800
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_87
# 1299 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_3
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_62:
# 1304 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1305 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 800
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_90
# 1314 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_3
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_64:
# 1319 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1320 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 800
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_93
# 1329 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_3
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_66:
# 1194 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_NOBLE_ROAR_UNLOCKED
# 1195 "data/maps/Hub1/scripts.pory"
	removecoins 400
# 1196 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1197 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1198 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_1
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_69:
# 1208 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_ROCK_SMASH_UNLOCKED
# 1209 "data/maps/Hub1/scripts.pory"
	removecoins 900
# 1210 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1211 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1212 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_2
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_72:
# 1222 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_SWIFT_UNLOCKED
# 1223 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 1224 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1225 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1226 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_3
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_75:
# 1236 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CUT_UNLOCKED
# 1237 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 1238 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1239 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1240 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_4
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_78:
# 1250 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CHARM_UNLOCKED
# 1251 "data/maps/Hub1/scripts.pory"
	removecoins 400
# 1252 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1253 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1254 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_5
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_81:
# 1264 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_FAKE_TEARS_UNLOCKED
# 1265 "data/maps/Hub1/scripts.pory"
	removecoins 400
# 1266 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1267 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1268 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_6
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_84:
# 1278 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CONFUSE_RAY_UNLOCKED
# 1279 "data/maps/Hub1/scripts.pory"
	removecoins 800
# 1280 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1281 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1282 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_87:
# 1292 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_THUNDER_WAVE_UNLOCKED
# 1293 "data/maps/Hub1/scripts.pory"
	removecoins 800
# 1294 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1295 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1296 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_90:
# 1306 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_WILL_O_WISP_UNLOCKED
# 1307 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_WILL_O_WISP, 1
# 1308 "data/maps/Hub1/scripts.pory"
	removecoins 800
# 1309 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1310 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1311 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_9
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_93:
# 1321 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_TOXIC_UNLOCKED
# 1322 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_TOXIC, 1
# 1323 "data/maps/Hub1/scripts.pory"
	removecoins 800
# 1324 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1325 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1326 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_10
	goto Hub_Event_Script_Shiny_Kecleon_31


Hub_Event_Script_Diancie::
# 1344 "data/maps/Hub1/scripts.pory"
	lockall
# 1345 "data/maps/Hub1/scripts.pory"
	faceplayer
# 1346 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEGA_SHOP_UNLOCKED, Hub_Event_Script_Diancie_9
Hub_Event_Script_Diancie_7:
# 1354 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_MEGA_SHOP_UNLOCKED, Hub_Event_Script_Diancie_6
Hub_Event_Script_Diancie_5:
# 1368 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHARIZARDITE_X_UNLOCKED, Hub_Event_Script_Diancie_4
Hub_Event_Script_Diancie_1:
# 2806 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Diancie_2:
# 1347 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_0
	goto Hub_Event_Script_Diancie_1

Hub_Event_Script_Diancie_3:
# 1355 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_1
# 1359 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHARIZARDITE_X, 1
# 1360 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_VENUSAURITE_BUYABLE
# 1361 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHARIZARDITE_Y_BUYABLE
# 1362 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BLASTOISINITE_BUYABLE
# 1363 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHARIZARDITE_X_UNLOCKED
# 1364 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_2
	goto Hub_Event_Script_Diancie_1

Hub_Event_Script_Diancie_4:
# 1369 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1370 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_VENUSAURITE_BUYABLE, Hub_Event_Script_Diancie_13
Hub_Event_Script_Diancie_12:
# 1374 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHARIZARDITE_Y_BUYABLE, Hub_Event_Script_Diancie_16
Hub_Event_Script_Diancie_15:
# 1378 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BLASTOISINITE_BUYABLE, Hub_Event_Script_Diancie_19
Hub_Event_Script_Diancie_18:
# 1382 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BEEDRILLITE_BUYABLE, Hub_Event_Script_Diancie_22
Hub_Event_Script_Diancie_21:
# 1386 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_PIDGEOTITE_BUYABLE, Hub_Event_Script_Diancie_25
Hub_Event_Script_Diancie_24:
# 1390 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ALAKAZITE_BUYABLE, Hub_Event_Script_Diancie_28
Hub_Event_Script_Diancie_27:
# 1394 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SLOWBRONITE_BUYABLE, Hub_Event_Script_Diancie_31
Hub_Event_Script_Diancie_30:
# 1398 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GENGARITE_BUYABLE, Hub_Event_Script_Diancie_34
Hub_Event_Script_Diancie_33:
# 1402 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_KANGASKHANITE_BUYABLE, Hub_Event_Script_Diancie_37
Hub_Event_Script_Diancie_36:
# 1406 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_PINSIRITE_BUYABLE, Hub_Event_Script_Diancie_40
Hub_Event_Script_Diancie_39:
# 1410 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GYARADOSITE_BUYABLE, Hub_Event_Script_Diancie_43
Hub_Event_Script_Diancie_42:
# 1414 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_AERODACTYLITE_BUYABLE, Hub_Event_Script_Diancie_46
Hub_Event_Script_Diancie_45:
# 1418 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_AMPHAROSITE_BUYABLE, Hub_Event_Script_Diancie_49
Hub_Event_Script_Diancie_48:
# 1422 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_STEELIXITE_BUYABLE, Hub_Event_Script_Diancie_52
Hub_Event_Script_Diancie_51:
# 1426 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCIZORITE_BUYABLE, Hub_Event_Script_Diancie_55
Hub_Event_Script_Diancie_54:
# 1430 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_HERACRONITE_BUYABLE, Hub_Event_Script_Diancie_58
Hub_Event_Script_Diancie_57:
# 1434 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_HOUNDOOMINITE_BUYABLE, Hub_Event_Script_Diancie_61
Hub_Event_Script_Diancie_60:
# 1438 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_TYRANITARITE_BUYABLE, Hub_Event_Script_Diancie_64
Hub_Event_Script_Diancie_63:
# 1442 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCEPTILITE_BUYABLE, Hub_Event_Script_Diancie_67
Hub_Event_Script_Diancie_66:
# 1446 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BLAZIKENITE_BUYABLE, Hub_Event_Script_Diancie_70
Hub_Event_Script_Diancie_69:
# 1450 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SWAMPERTITE_BUYABLE, Hub_Event_Script_Diancie_73
Hub_Event_Script_Diancie_72:
# 1454 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GARDEVOIRITE_BUYABLE, Hub_Event_Script_Diancie_76
Hub_Event_Script_Diancie_75:
# 1458 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SABLENITE_BUYABLE, Hub_Event_Script_Diancie_79
Hub_Event_Script_Diancie_78:
# 1462 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MAWILITE_BUYABLE, Hub_Event_Script_Diancie_82
Hub_Event_Script_Diancie_81:
# 1466 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_AGGRONITE_BUYABLE, Hub_Event_Script_Diancie_85
Hub_Event_Script_Diancie_84:
# 1470 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MEDICHAMITE_BUYABLE, Hub_Event_Script_Diancie_88
Hub_Event_Script_Diancie_87:
# 1474 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MANECTITE_BUYABLE, Hub_Event_Script_Diancie_91
Hub_Event_Script_Diancie_90:
# 1478 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SHARPEDONITE_BUYABLE, Hub_Event_Script_Diancie_94
Hub_Event_Script_Diancie_93:
# 1482 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CAMERUPTITE_BUYABLE, Hub_Event_Script_Diancie_97
Hub_Event_Script_Diancie_96:
# 1486 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ALTARIANITE_BUYABLE, Hub_Event_Script_Diancie_100
Hub_Event_Script_Diancie_99:
# 1490 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BANETTITE_BUYABLE, Hub_Event_Script_Diancie_103
Hub_Event_Script_Diancie_102:
# 1494 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ABSOLITE_BUYABLE, Hub_Event_Script_Diancie_106
Hub_Event_Script_Diancie_105:
# 1498 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GLALITITE_BUYABLE, Hub_Event_Script_Diancie_109
Hub_Event_Script_Diancie_108:
# 1502 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SALAMENCITE_BUYABLE, Hub_Event_Script_Diancie_112
Hub_Event_Script_Diancie_111:
# 1506 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_METAGROSSITE_BUYABLE, Hub_Event_Script_Diancie_115
Hub_Event_Script_Diancie_114:
# 1510 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_LOPUNNITE_BUYABLE, Hub_Event_Script_Diancie_118
Hub_Event_Script_Diancie_117:
# 1514 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GARCHOMPITE_BUYABLE, Hub_Event_Script_Diancie_121
Hub_Event_Script_Diancie_120:
# 1518 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_LUCARIONITE_BUYABLE, Hub_Event_Script_Diancie_124
Hub_Event_Script_Diancie_123:
# 1522 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ABOMASITE_BUYABLE, Hub_Event_Script_Diancie_127
Hub_Event_Script_Diancie_126:
# 1526 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GALLADITE_BUYABLE, Hub_Event_Script_Diancie_130
Hub_Event_Script_Diancie_129:
# 1530 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CLEFABLITE_BUYABLE, Hub_Event_Script_Diancie_133
Hub_Event_Script_Diancie_132:
# 1534 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_VICTREEBELITE_BUYABLE, Hub_Event_Script_Diancie_136
Hub_Event_Script_Diancie_135:
# 1538 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_STARMINITE_BUYABLE, Hub_Event_Script_Diancie_139
Hub_Event_Script_Diancie_138:
# 1542 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DRAGONINITE_BUYABLE, Hub_Event_Script_Diancie_142
Hub_Event_Script_Diancie_141:
# 1546 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MEGANIUMITE_BUYABLE, Hub_Event_Script_Diancie_145
Hub_Event_Script_Diancie_144:
# 1550 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_FERALIGITE_BUYABLE, Hub_Event_Script_Diancie_148
Hub_Event_Script_Diancie_147:
# 1554 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SKARMORITE_BUYABLE, Hub_Event_Script_Diancie_151
Hub_Event_Script_Diancie_150:
# 1558 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_FROSLASSITE_BUYABLE, Hub_Event_Script_Diancie_154
Hub_Event_Script_Diancie_153:
# 1562 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_EMBOARITE_BUYABLE, Hub_Event_Script_Diancie_157
Hub_Event_Script_Diancie_156:
# 1566 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_EXCADRITE_BUYABLE, Hub_Event_Script_Diancie_160
Hub_Event_Script_Diancie_159:
# 1570 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCOLIPITE_BUYABLE, Hub_Event_Script_Diancie_163
Hub_Event_Script_Diancie_162:
# 1574 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCRAFTINITE_BUYABLE, Hub_Event_Script_Diancie_166
Hub_Event_Script_Diancie_165:
# 1578 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_EELEKTROSSITE_BUYABLE, Hub_Event_Script_Diancie_169
Hub_Event_Script_Diancie_168:
# 1582 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHANDELURITE_BUYABLE, Hub_Event_Script_Diancie_172
Hub_Event_Script_Diancie_171:
# 1586 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHESNAUGHTITE_BUYABLE, Hub_Event_Script_Diancie_175
Hub_Event_Script_Diancie_174:
# 1590 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DELPHOXITE_BUYABLE, Hub_Event_Script_Diancie_178
Hub_Event_Script_Diancie_177:
# 1594 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GRENINJITE_BUYABLE, Hub_Event_Script_Diancie_181
Hub_Event_Script_Diancie_180:
# 1598 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_PYROARITE_BUYABLE, Hub_Event_Script_Diancie_184
Hub_Event_Script_Diancie_183:
# 1602 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MALAMARITE_BUYABLE, Hub_Event_Script_Diancie_187
Hub_Event_Script_Diancie_186:
# 1606 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BARBARACITE_BUYABLE, Hub_Event_Script_Diancie_190
Hub_Event_Script_Diancie_189:
# 1610 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DRAGALGITE_BUYABLE, Hub_Event_Script_Diancie_193
Hub_Event_Script_Diancie_192:
# 1614 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_HAWLUCHANITE_BUYABLE, Hub_Event_Script_Diancie_196
Hub_Event_Script_Diancie_195:
# 1618 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DRAMPANITE_BUYABLE, Hub_Event_Script_Diancie_199
Hub_Event_Script_Diancie_198:
# 1622 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_FALINKSITE_BUYABLE, Hub_Event_Script_Diancie_202
Hub_Event_Script_Diancie_201:
# 1626 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_RAICHUNITE_X_BUYABLE, Hub_Event_Script_Diancie_205
Hub_Event_Script_Diancie_204:
# 1630 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_RAICHUNITE_Y_BUYABLE, Hub_Event_Script_Diancie_208
Hub_Event_Script_Diancie_207:
# 1634 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHIMECHITE_BUYABLE, Hub_Event_Script_Diancie_211
Hub_Event_Script_Diancie_210:
# 1638 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_STARAPTITE_BUYABLE, Hub_Event_Script_Diancie_214
Hub_Event_Script_Diancie_213:
# 1642 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GOLURKITE_BUYABLE, Hub_Event_Script_Diancie_217
Hub_Event_Script_Diancie_216:
# 1646 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MEOWSTICITE_BUYABLE, Hub_Event_Script_Diancie_220
Hub_Event_Script_Diancie_219:
# 1650 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CRABOMINITE_BUYABLE, Hub_Event_Script_Diancie_223
Hub_Event_Script_Diancie_222:
# 1654 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GOLISOPITE_BUYABLE, Hub_Event_Script_Diancie_226
Hub_Event_Script_Diancie_225:
# 1658 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCOVILLAINITE_BUYABLE, Hub_Event_Script_Diancie_229
Hub_Event_Script_Diancie_228:
# 1662 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GLIMMORANITE_BUYABLE, Hub_Event_Script_Diancie_232
Hub_Event_Script_Diancie_231:
# 1666 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BAXCALIBRITE_BUYABLE, Hub_Event_Script_Diancie_235
Hub_Event_Script_Diancie_234:
# 1671 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Diancie_238
# 2796 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_155
# 2801 "data/maps/Hub1/scripts.pory"
	waitmessage
# 2802 "data/maps/Hub1/scripts.pory"
	releaseall
Hub_Event_Script_Diancie_237:
# 2804 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
	goto Hub_Event_Script_Diancie_1

Hub_Event_Script_Diancie_6:
# 1354 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ITEM_CHARIZARDITE_X_UNLOCKED, Hub_Event_Script_Diancie_3
	goto Hub_Event_Script_Diancie_5

Hub_Event_Script_Diancie_9:
# 1346 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ITEM_CHARIZARDITE_X_UNLOCKED, Hub_Event_Script_Diancie_2
	goto Hub_Event_Script_Diancie_7

Hub_Event_Script_Diancie_13:
# 1371 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_3, ITEM_VENUSAURITE
# 1372 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_12

Hub_Event_Script_Diancie_16:
# 1375 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_4, ITEM_CHARIZARDITE_Y
# 1376 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_15

Hub_Event_Script_Diancie_19:
# 1379 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_5, ITEM_BLASTOISINITE
# 1380 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_18

Hub_Event_Script_Diancie_22:
# 1383 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_6, ITEM_BEEDRILLITE
# 1384 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_21

Hub_Event_Script_Diancie_25:
# 1387 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_7, ITEM_PIDGEOTITE
# 1388 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_24

Hub_Event_Script_Diancie_28:
# 1391 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_8, ITEM_ALAKAZITE
# 1392 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_27

Hub_Event_Script_Diancie_31:
# 1395 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_9, ITEM_SLOWBRONITE
# 1396 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_30

Hub_Event_Script_Diancie_34:
# 1399 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_10, ITEM_GENGARITE
# 1400 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_33

Hub_Event_Script_Diancie_37:
# 1403 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_11, ITEM_KANGASKHANITE
# 1404 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_36

Hub_Event_Script_Diancie_40:
# 1407 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_12, ITEM_PINSIRITE
# 1408 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_39

Hub_Event_Script_Diancie_43:
# 1411 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_13, ITEM_GYARADOSITE
# 1412 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_42

Hub_Event_Script_Diancie_46:
# 1415 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_14, ITEM_AERODACTYLITE
# 1416 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_45

Hub_Event_Script_Diancie_49:
# 1419 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_15, ITEM_AMPHAROSITE
# 1420 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_48

Hub_Event_Script_Diancie_52:
# 1423 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_16, ITEM_STEELIXITE
# 1424 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_51

Hub_Event_Script_Diancie_55:
# 1427 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_17, ITEM_SCIZORITE
# 1428 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_54

Hub_Event_Script_Diancie_58:
# 1431 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_18, ITEM_HERACRONITE
# 1432 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_57

Hub_Event_Script_Diancie_61:
# 1435 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_19, ITEM_HOUNDOOMINITE
# 1436 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_60

Hub_Event_Script_Diancie_64:
# 1439 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_20, ITEM_TYRANITARITE
# 1440 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_63

Hub_Event_Script_Diancie_67:
# 1443 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_21, ITEM_SCEPTILITE
# 1444 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_66

Hub_Event_Script_Diancie_70:
# 1447 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_22, ITEM_BLAZIKENITE
# 1448 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_69

Hub_Event_Script_Diancie_73:
# 1451 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_23, ITEM_SWAMPERTITE
# 1452 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_72

Hub_Event_Script_Diancie_76:
# 1455 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_24, ITEM_GARDEVOIRITE
# 1456 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_75

Hub_Event_Script_Diancie_79:
# 1459 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_25, ITEM_SABLENITE
# 1460 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_78

Hub_Event_Script_Diancie_82:
# 1463 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_26, ITEM_MAWILITE
# 1464 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_81

Hub_Event_Script_Diancie_85:
# 1467 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_27, ITEM_AGGRONITE
# 1468 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_84

Hub_Event_Script_Diancie_88:
# 1471 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_28, ITEM_MEDICHAMITE
# 1472 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_87

Hub_Event_Script_Diancie_91:
# 1475 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_29, ITEM_MANECTITE
# 1476 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_90

Hub_Event_Script_Diancie_94:
# 1479 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_30, ITEM_SHARPEDONITE
# 1480 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_93

Hub_Event_Script_Diancie_97:
# 1483 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_31, ITEM_CAMERUPTITE
# 1484 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_96

Hub_Event_Script_Diancie_100:
# 1487 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_32, ITEM_ALTARIANITE
# 1488 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_99

Hub_Event_Script_Diancie_103:
# 1491 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_33, ITEM_BANETTITE
# 1492 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_102

Hub_Event_Script_Diancie_106:
# 1495 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_34, ITEM_ABSOLITE
# 1496 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_105

Hub_Event_Script_Diancie_109:
# 1499 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_35, ITEM_GLALITITE
# 1500 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_108

Hub_Event_Script_Diancie_112:
# 1503 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_36, ITEM_SALAMENCITE
# 1504 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_111

Hub_Event_Script_Diancie_115:
# 1507 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_37, ITEM_METAGROSSITE
# 1508 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_114

Hub_Event_Script_Diancie_118:
# 1511 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_38, ITEM_LOPUNNITE
# 1512 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_117

Hub_Event_Script_Diancie_121:
# 1515 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_39, ITEM_GARCHOMPITE
# 1516 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_120

Hub_Event_Script_Diancie_124:
# 1519 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_40, ITEM_LUCARIONITE
# 1520 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_123

Hub_Event_Script_Diancie_127:
# 1523 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_41, ITEM_ABOMASITE
# 1524 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_126

Hub_Event_Script_Diancie_130:
# 1527 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_42, ITEM_GALLADITE
# 1528 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_129

Hub_Event_Script_Diancie_133:
# 1531 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_43, ITEM_CLEFABLITE
# 1532 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_132

Hub_Event_Script_Diancie_136:
# 1535 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_44, ITEM_VICTREEBELITE
# 1536 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_135

Hub_Event_Script_Diancie_139:
# 1539 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_45, ITEM_STARMINITE
# 1540 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_138

Hub_Event_Script_Diancie_142:
# 1543 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_46, ITEM_DRAGONINITE
# 1544 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_141

Hub_Event_Script_Diancie_145:
# 1547 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_47, ITEM_MEGANIUMITE
# 1548 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_144

Hub_Event_Script_Diancie_148:
# 1551 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_48, ITEM_FERALIGITE
# 1552 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_147

Hub_Event_Script_Diancie_151:
# 1555 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_49, ITEM_SKARMORITE
# 1556 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_150

Hub_Event_Script_Diancie_154:
# 1559 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_50, ITEM_FROSLASSITE
# 1560 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_153

Hub_Event_Script_Diancie_157:
# 1563 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_51, ITEM_EMBOARITE
# 1564 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_156

Hub_Event_Script_Diancie_160:
# 1567 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_52, ITEM_EXCADRITE
# 1568 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_159

Hub_Event_Script_Diancie_163:
# 1571 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_53, ITEM_SCOLIPITE
# 1572 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_162

Hub_Event_Script_Diancie_166:
# 1575 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_54, ITEM_SCRAFTINITE
# 1576 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_165

Hub_Event_Script_Diancie_169:
# 1579 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_55, ITEM_EELEKTROSSITE
# 1580 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_168

Hub_Event_Script_Diancie_172:
# 1583 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_56, ITEM_CHANDELURITE
# 1584 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_171

Hub_Event_Script_Diancie_175:
# 1587 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_57, ITEM_CHESNAUGHTITE
# 1588 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_174

Hub_Event_Script_Diancie_178:
# 1591 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_58, ITEM_DELPHOXITE
# 1592 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_177

Hub_Event_Script_Diancie_181:
# 1595 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_59, ITEM_GRENINJITE
# 1596 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_180

Hub_Event_Script_Diancie_184:
# 1599 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_60, ITEM_PYROARITE
# 1600 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_183

Hub_Event_Script_Diancie_187:
# 1603 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_61, ITEM_MALAMARITE
# 1604 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_186

Hub_Event_Script_Diancie_190:
# 1607 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_62, ITEM_BARBARACITE
# 1608 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_189

Hub_Event_Script_Diancie_193:
# 1611 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_63, ITEM_DRAGALGITE
# 1612 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_192

Hub_Event_Script_Diancie_196:
# 1615 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_64, ITEM_HAWLUCHANITE
# 1616 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_195

Hub_Event_Script_Diancie_199:
# 1619 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_65, ITEM_DRAMPANITE
# 1620 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_198

Hub_Event_Script_Diancie_202:
# 1623 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_66, ITEM_FALINKSITE
# 1624 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_201

Hub_Event_Script_Diancie_205:
# 1627 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_67, ITEM_RAICHUNITE_X
# 1628 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_204

Hub_Event_Script_Diancie_208:
# 1631 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_68, ITEM_RAICHUNITE_Y
# 1632 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_207

Hub_Event_Script_Diancie_211:
# 1635 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_69, ITEM_CHIMECHITE
# 1636 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_210

Hub_Event_Script_Diancie_214:
# 1639 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_70, ITEM_STARAPTITE
# 1640 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_213

Hub_Event_Script_Diancie_217:
# 1643 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_71, ITEM_GOLURKITE
# 1644 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_216

Hub_Event_Script_Diancie_220:
# 1647 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_72, ITEM_MEOWSTICITE
# 1648 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_219

Hub_Event_Script_Diancie_223:
# 1651 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_73, ITEM_CRABOMINITE
# 1652 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_222

Hub_Event_Script_Diancie_226:
# 1655 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_74, ITEM_GOLISOPITE
# 1656 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_225

Hub_Event_Script_Diancie_229:
# 1659 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_75, ITEM_SCOVILLAINITE
# 1660 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_228

Hub_Event_Script_Diancie_232:
# 1663 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_76, ITEM_GLIMMORANITE
# 1664 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_231

Hub_Event_Script_Diancie_235:
# 1667 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_77, ITEM_BAXCALIBRITE
# 1668 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_234

Hub_Event_Script_Diancie_238:
# 1673 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_NEW_MEGA_BUYABLE, Hub_Event_Script_Diancie_242
# 1680 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_79
Hub_Event_Script_Diancie_241:
# 1682 "data/maps/Hub1/scripts.pory"
	showcoinsbox 21, 11
# 1683 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 1684 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 1685 "data/maps/Hub1/scripts.pory"
	case ITEM_VENUSAURITE, Hub_Event_Script_Diancie_246
# 1700 "data/maps/Hub1/scripts.pory"
	case ITEM_CHARIZARDITE_Y, Hub_Event_Script_Diancie_247
# 1715 "data/maps/Hub1/scripts.pory"
	case ITEM_BLASTOISINITE, Hub_Event_Script_Diancie_248
# 1730 "data/maps/Hub1/scripts.pory"
	case ITEM_BEEDRILLITE, Hub_Event_Script_Diancie_249
# 1745 "data/maps/Hub1/scripts.pory"
	case ITEM_PIDGEOTITE, Hub_Event_Script_Diancie_250
# 1760 "data/maps/Hub1/scripts.pory"
	case ITEM_ALAKAZITE, Hub_Event_Script_Diancie_251
# 1775 "data/maps/Hub1/scripts.pory"
	case ITEM_SLOWBRONITE, Hub_Event_Script_Diancie_252
# 1790 "data/maps/Hub1/scripts.pory"
	case ITEM_GENGARITE, Hub_Event_Script_Diancie_253
# 1805 "data/maps/Hub1/scripts.pory"
	case ITEM_KANGASKHANITE, Hub_Event_Script_Diancie_254
# 1820 "data/maps/Hub1/scripts.pory"
	case ITEM_PINSIRITE, Hub_Event_Script_Diancie_255
# 1835 "data/maps/Hub1/scripts.pory"
	case ITEM_GYARADOSITE, Hub_Event_Script_Diancie_256
# 1850 "data/maps/Hub1/scripts.pory"
	case ITEM_AERODACTYLITE, Hub_Event_Script_Diancie_257
# 1865 "data/maps/Hub1/scripts.pory"
	case ITEM_AMPHAROSITE, Hub_Event_Script_Diancie_258
# 1880 "data/maps/Hub1/scripts.pory"
	case ITEM_STEELIXITE, Hub_Event_Script_Diancie_259
# 1895 "data/maps/Hub1/scripts.pory"
	case ITEM_SCIZORITE, Hub_Event_Script_Diancie_260
# 1910 "data/maps/Hub1/scripts.pory"
	case ITEM_HERACRONITE, Hub_Event_Script_Diancie_261
# 1925 "data/maps/Hub1/scripts.pory"
	case ITEM_HOUNDOOMINITE, Hub_Event_Script_Diancie_262
# 1940 "data/maps/Hub1/scripts.pory"
	case ITEM_TYRANITARITE, Hub_Event_Script_Diancie_263
# 1955 "data/maps/Hub1/scripts.pory"
	case ITEM_SCEPTILITE, Hub_Event_Script_Diancie_264
# 1970 "data/maps/Hub1/scripts.pory"
	case ITEM_BLAZIKENITE, Hub_Event_Script_Diancie_265
# 1985 "data/maps/Hub1/scripts.pory"
	case ITEM_SWAMPERTITE, Hub_Event_Script_Diancie_266
# 2000 "data/maps/Hub1/scripts.pory"
	case ITEM_GARDEVOIRITE, Hub_Event_Script_Diancie_267
# 2015 "data/maps/Hub1/scripts.pory"
	case ITEM_SABLENITE, Hub_Event_Script_Diancie_268
# 2030 "data/maps/Hub1/scripts.pory"
	case ITEM_MAWILITE, Hub_Event_Script_Diancie_269
# 2045 "data/maps/Hub1/scripts.pory"
	case ITEM_AGGRONITE, Hub_Event_Script_Diancie_270
# 2060 "data/maps/Hub1/scripts.pory"
	case ITEM_MEDICHAMITE, Hub_Event_Script_Diancie_271
# 2075 "data/maps/Hub1/scripts.pory"
	case ITEM_MANECTITE, Hub_Event_Script_Diancie_272
# 2090 "data/maps/Hub1/scripts.pory"
	case ITEM_SHARPEDONITE, Hub_Event_Script_Diancie_273
# 2105 "data/maps/Hub1/scripts.pory"
	case ITEM_CAMERUPTITE, Hub_Event_Script_Diancie_274
# 2120 "data/maps/Hub1/scripts.pory"
	case ITEM_ALTARIANITE, Hub_Event_Script_Diancie_275
# 2135 "data/maps/Hub1/scripts.pory"
	case ITEM_BANETTITE, Hub_Event_Script_Diancie_276
# 2150 "data/maps/Hub1/scripts.pory"
	case ITEM_ABSOLITE, Hub_Event_Script_Diancie_277
# 2165 "data/maps/Hub1/scripts.pory"
	case ITEM_GLALITITE, Hub_Event_Script_Diancie_278
# 2180 "data/maps/Hub1/scripts.pory"
	case ITEM_SALAMENCITE, Hub_Event_Script_Diancie_279
# 2195 "data/maps/Hub1/scripts.pory"
	case ITEM_LOPUNNITE, Hub_Event_Script_Diancie_280
# 2210 "data/maps/Hub1/scripts.pory"
	case ITEM_GARCHOMPITE, Hub_Event_Script_Diancie_281
# 2225 "data/maps/Hub1/scripts.pory"
	case ITEM_LUCARIONITE, Hub_Event_Script_Diancie_282
# 2240 "data/maps/Hub1/scripts.pory"
	case ITEM_ABOMASITE, Hub_Event_Script_Diancie_283
# 2255 "data/maps/Hub1/scripts.pory"
	case ITEM_GALLADITE, Hub_Event_Script_Diancie_284
# 2270 "data/maps/Hub1/scripts.pory"
	case ITEM_CLEFABLITE, Hub_Event_Script_Diancie_285
# 2285 "data/maps/Hub1/scripts.pory"
	case ITEM_VICTREEBELITE, Hub_Event_Script_Diancie_286
# 2300 "data/maps/Hub1/scripts.pory"
	case ITEM_STARMINITE, Hub_Event_Script_Diancie_287
# 2315 "data/maps/Hub1/scripts.pory"
	case ITEM_DRAGONINITE, Hub_Event_Script_Diancie_288
# 2330 "data/maps/Hub1/scripts.pory"
	case ITEM_MEGANIUMITE, Hub_Event_Script_Diancie_289
# 2345 "data/maps/Hub1/scripts.pory"
	case ITEM_FERALIGITE, Hub_Event_Script_Diancie_290
# 2360 "data/maps/Hub1/scripts.pory"
	case ITEM_SKARMORITE, Hub_Event_Script_Diancie_291
# 2375 "data/maps/Hub1/scripts.pory"
	case ITEM_FROSLASSITE, Hub_Event_Script_Diancie_292
# 2390 "data/maps/Hub1/scripts.pory"
	case ITEM_EMBOARITE, Hub_Event_Script_Diancie_293
# 2405 "data/maps/Hub1/scripts.pory"
	case ITEM_EXCADRITE, Hub_Event_Script_Diancie_294
# 2420 "data/maps/Hub1/scripts.pory"
	case ITEM_SCOLIPITE, Hub_Event_Script_Diancie_295
# 2435 "data/maps/Hub1/scripts.pory"
	case ITEM_SCRAFTINITE, Hub_Event_Script_Diancie_296
# 2450 "data/maps/Hub1/scripts.pory"
	case ITEM_EELEKTROSSITE, Hub_Event_Script_Diancie_297
# 2465 "data/maps/Hub1/scripts.pory"
	case ITEM_CHANDELURITE, Hub_Event_Script_Diancie_298
# 2480 "data/maps/Hub1/scripts.pory"
	case ITEM_CHESNAUGHTITE, Hub_Event_Script_Diancie_299
# 2495 "data/maps/Hub1/scripts.pory"
	case ITEM_DELPHOXITE, Hub_Event_Script_Diancie_300
# 2510 "data/maps/Hub1/scripts.pory"
	case ITEM_GRENINJITE, Hub_Event_Script_Diancie_301
# 2525 "data/maps/Hub1/scripts.pory"
	case ITEM_PYROARITE, Hub_Event_Script_Diancie_302
# 2540 "data/maps/Hub1/scripts.pory"
	case ITEM_MALAMARITE, Hub_Event_Script_Diancie_303
# 2555 "data/maps/Hub1/scripts.pory"
	case ITEM_BARBARACITE, Hub_Event_Script_Diancie_304
# 2570 "data/maps/Hub1/scripts.pory"
	case ITEM_DRAGALGITE, Hub_Event_Script_Diancie_305
# 2585 "data/maps/Hub1/scripts.pory"
	case ITEM_HAWLUCHANITE, Hub_Event_Script_Diancie_306
# 2600 "data/maps/Hub1/scripts.pory"
	case ITEM_DRAMPANITE, Hub_Event_Script_Diancie_307
# 2615 "data/maps/Hub1/scripts.pory"
	case ITEM_FALINKSITE, Hub_Event_Script_Diancie_308
# 2630 "data/maps/Hub1/scripts.pory"
	case ITEM_RAICHUNITE_X, Hub_Event_Script_Diancie_309
# 2645 "data/maps/Hub1/scripts.pory"
	case ITEM_RAICHUNITE_Y, Hub_Event_Script_Diancie_310
# 2660 "data/maps/Hub1/scripts.pory"
	case ITEM_CHIMECHITE, Hub_Event_Script_Diancie_311
# 2675 "data/maps/Hub1/scripts.pory"
	case ITEM_STARAPTITE, Hub_Event_Script_Diancie_312
# 2690 "data/maps/Hub1/scripts.pory"
	case ITEM_GOLURKITE, Hub_Event_Script_Diancie_313
# 2705 "data/maps/Hub1/scripts.pory"
	case ITEM_MEOWSTICITE, Hub_Event_Script_Diancie_314
# 2720 "data/maps/Hub1/scripts.pory"
	case ITEM_CRABOMINITE, Hub_Event_Script_Diancie_315
# 2735 "data/maps/Hub1/scripts.pory"
	case ITEM_GOLISOPITE, Hub_Event_Script_Diancie_316
# 2750 "data/maps/Hub1/scripts.pory"
	case ITEM_SCOVILLAINITE, Hub_Event_Script_Diancie_317
# 2765 "data/maps/Hub1/scripts.pory"
	case ITEM_GLIMMORANITE, Hub_Event_Script_Diancie_318
# 2780 "data/maps/Hub1/scripts.pory"
	case ITEM_BAXCALIBRITE, Hub_Event_Script_Diancie_319
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_242:
# 1674 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_78
# 1677 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_NEW_MEGA_BUYABLE
	goto Hub_Event_Script_Diancie_241

Hub_Event_Script_Diancie_246:
# 1686 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1687 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_320
# 1697 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_247:
# 1701 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1702 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_323
# 1712 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_248:
# 1716 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1717 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_326
# 1727 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_249:
# 1731 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1732 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_329
# 1742 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_250:
# 1746 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1747 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_332
# 1757 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_251:
# 1761 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1762 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_335
# 1772 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_252:
# 1776 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1777 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_338
# 1787 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_253:
# 1791 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1792 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_341
# 1802 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_254:
# 1806 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1807 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_344
# 1817 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_255:
# 1821 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1822 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_347
# 1832 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_256:
# 1836 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1837 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_350
# 1847 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_257:
# 1851 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1852 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_353
# 1862 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_258:
# 1866 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1867 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_356
# 1877 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_259:
# 1881 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1882 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_359
# 1892 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_260:
# 1896 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1897 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_362
# 1907 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_261:
# 1911 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1912 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_365
# 1922 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_262:
# 1926 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1927 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_368
# 1937 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_263:
# 1941 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1942 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_371
# 1952 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_264:
# 1956 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1957 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_374
# 1967 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_265:
# 1971 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1972 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_377
# 1982 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_266:
# 1986 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1987 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_380
# 1997 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_267:
# 2001 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2002 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_383
# 2012 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_268:
# 2016 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2017 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_386
# 2027 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_269:
# 2031 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2032 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_389
# 2042 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_270:
# 2046 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2047 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_392
# 2057 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_271:
# 2061 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2062 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_395
# 2072 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_272:
# 2076 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2077 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_398
# 2087 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_273:
# 2091 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2092 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_401
# 2102 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_274:
# 2106 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2107 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_404
# 2117 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_275:
# 2121 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2122 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_407
# 2132 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_276:
# 2136 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2137 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_410
# 2147 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_277:
# 2151 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2152 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_413
# 2162 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_278:
# 2166 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2167 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_416
# 2177 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_279:
# 2181 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2182 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_419
# 2192 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_280:
# 2196 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2197 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_422
# 2207 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_281:
# 2211 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2212 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_425
# 2222 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_282:
# 2226 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2227 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_428
# 2237 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_283:
# 2241 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2242 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_431
# 2252 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_284:
# 2256 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2257 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_434
# 2267 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_285:
# 2271 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2272 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_437
# 2282 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_286:
# 2286 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2287 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_440
# 2297 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_287:
# 2301 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2302 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_443
# 2312 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_288:
# 2316 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2317 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_446
# 2327 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_289:
# 2331 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2332 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_449
# 2342 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_290:
# 2346 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2347 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_452
# 2357 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_291:
# 2361 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2362 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_455
# 2372 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_292:
# 2376 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2377 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_458
# 2387 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_293:
# 2391 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2392 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_461
# 2402 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_294:
# 2406 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2407 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_464
# 2417 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_295:
# 2421 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2422 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_467
# 2432 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_296:
# 2436 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2437 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_470
# 2447 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_297:
# 2451 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2452 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_473
# 2462 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_298:
# 2466 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2467 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_476
# 2477 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_299:
# 2481 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2482 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_479
# 2492 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_300:
# 2496 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2497 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_482
# 2507 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_301:
# 2511 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2512 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_485
# 2522 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_302:
# 2526 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2527 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_488
# 2537 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_303:
# 2541 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2542 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_491
# 2552 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_304:
# 2556 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2557 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_494
# 2567 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_305:
# 2571 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2572 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_497
# 2582 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_306:
# 2586 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2587 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_500
# 2597 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_307:
# 2601 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2602 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_503
# 2612 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_308:
# 2616 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2617 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_506
# 2627 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_309:
# 2631 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2632 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_509
# 2642 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_310:
# 2646 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2647 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_512
# 2657 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_311:
# 2661 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2662 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_515
# 2672 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_312:
# 2676 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2677 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_518
# 2687 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_313:
# 2691 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2692 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_521
# 2702 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_314:
# 2706 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2707 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_524
# 2717 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_315:
# 2721 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2722 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_527
# 2732 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_316:
# 2736 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2737 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_530
# 2747 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_317:
# 2751 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2752 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_533
# 2762 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_318:
# 2766 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2767 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_536
# 2777 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_319:
# 2781 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2782 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_539
# 2792 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_320:
# 1688 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_VENUSAURITE_UNLOCKED
# 1689 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_VENUSAURITE_BUYABLE
# 1690 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_VENUSAURITE, 1
# 1691 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1692 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1693 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1694 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_80
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_323:
# 1703 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHARIZARDITE_Y_UNLOCKED
# 1704 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHARIZARDITE_Y_BUYABLE
# 1705 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHARIZARDITE_Y, 1
# 1706 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1707 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1708 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1709 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_82
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_326:
# 1718 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BLASTOISINITE_UNLOCKED
# 1719 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BLASTOISINITE_BUYABLE
# 1720 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BLASTOISINITE, 1
# 1721 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1722 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1723 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1724 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_83
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_329:
# 1733 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BEEDRILLITE_UNLOCKED
# 1734 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BEEDRILLITE_BUYABLE
# 1735 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BEEDRILLITE, 1
# 1736 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1737 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1738 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1739 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_84
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_332:
# 1748 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_PIDGEOTITE_UNLOCKED
# 1749 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_PIDGEOTITE_BUYABLE
# 1750 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_PIDGEOTITE, 1
# 1751 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1752 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1753 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1754 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_85
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_335:
# 1763 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ALAKAZITE_UNLOCKED
# 1764 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ALAKAZITE_BUYABLE
# 1765 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ALAKAZITE, 1
# 1766 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1767 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1768 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1769 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_86
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_338:
# 1778 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SLOWBRONITE_UNLOCKED
# 1779 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SLOWBRONITE_BUYABLE
# 1780 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SLOWBRONITE, 1
# 1781 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1782 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1783 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1784 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_87
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_341:
# 1793 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GENGARITE_UNLOCKED
# 1794 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GENGARITE_BUYABLE
# 1795 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GENGARITE, 1
# 1796 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1797 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1798 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1799 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_88
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_344:
# 1808 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_KANGASKHANITE_UNLOCKED
# 1809 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_KANGASKHANITE_BUYABLE
# 1810 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_KANGASKHANITE, 1
# 1811 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1812 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1813 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1814 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_89
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_347:
# 1823 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_PINSIRITE_UNLOCKED
# 1824 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_PINSIRITE_BUYABLE
# 1825 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_PINSIRITE, 1
# 1826 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1827 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1828 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1829 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_90
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_350:
# 1838 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GYARADOSITE_UNLOCKED
# 1839 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GYARADOSITE_BUYABLE
# 1840 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GYARADOSITE, 1
# 1841 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1842 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1843 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1844 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_91
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_353:
# 1853 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_AERODACTYLITE_UNLOCKED
# 1854 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_AERODACTYLITE_BUYABLE
# 1855 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_AERODACTYLITE, 1
# 1856 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1857 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1858 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1859 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_92
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_356:
# 1868 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_AMPHAROSITE_UNLOCKED
# 1869 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_AMPHAROSITE_BUYABLE
# 1870 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_AMPHAROSITE, 1
# 1871 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1872 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1873 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1874 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_93
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_359:
# 1883 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_STEELIXITE_UNLOCKED
# 1884 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_STEELIXITE_BUYABLE
# 1885 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_STEELIXITE, 1
# 1886 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1887 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1888 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1889 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_94
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_362:
# 1898 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCIZORITE_UNLOCKED
# 1899 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCIZORITE_BUYABLE
# 1900 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCIZORITE, 1
# 1901 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1902 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1903 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1904 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_95
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_365:
# 1913 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_HERACRONITE_UNLOCKED
# 1914 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_HERACRONITE_BUYABLE
# 1915 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_HERACRONITE, 1
# 1916 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1917 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1918 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1919 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_96
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_368:
# 1928 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_HOUNDOOMINITE_UNLOCKED
# 1929 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_HOUNDOOMINITE_BUYABLE
# 1930 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_HOUNDOOMINITE, 1
# 1931 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1932 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1933 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1934 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_97
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_371:
# 1943 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_TYRANITARITE_UNLOCKED
# 1944 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_TYRANITARITE_BUYABLE
# 1945 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TYRANITARITE, 1
# 1946 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1947 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1948 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1949 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_98
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_374:
# 1958 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCEPTILITE_UNLOCKED
# 1959 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCEPTILITE_BUYABLE
# 1960 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCEPTILITE, 1
# 1961 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1962 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1963 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1964 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_99
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_377:
# 1973 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BLAZIKENITE_UNLOCKED
# 1974 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BLAZIKENITE_BUYABLE
# 1975 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BLAZIKENITE, 1
# 1976 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1977 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1978 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1979 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_100
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_380:
# 1988 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SWAMPERTITE_UNLOCKED
# 1989 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SWAMPERTITE_BUYABLE
# 1990 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SWAMPERTITE, 1
# 1991 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1992 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1993 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1994 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_101
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_383:
# 2003 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GARDEVOIRITE_UNLOCKED
# 2004 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GARDEVOIRITE_BUYABLE
# 2005 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GARDEVOIRITE, 1
# 2006 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2007 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2008 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2009 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_102
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_386:
# 2018 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SABLENITE_UNLOCKED
# 2019 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SABLENITE_BUYABLE
# 2020 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SABLENITE, 1
# 2021 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2022 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2023 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2024 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_103
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_389:
# 2033 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MAWILITE_UNLOCKED
# 2034 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MAWILITE_BUYABLE
# 2035 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MAWILITE, 1
# 2036 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2037 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2038 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2039 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_104
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_392:
# 2048 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_AGGRONITE_UNLOCKED
# 2049 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_AGGRONITE_BUYABLE
# 2050 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_AGGRONITE, 1
# 2051 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2052 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2053 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2054 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_105
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_395:
# 2063 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MEDICHAMITE_UNLOCKED
# 2064 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MEDICHAMITE_BUYABLE
# 2065 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEDICHAMITE, 1
# 2066 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2067 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2068 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2069 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_106
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_398:
# 2078 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MANECTITE_UNLOCKED
# 2079 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MANECTITE_BUYABLE
# 2080 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MANECTITE, 1
# 2081 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2082 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2083 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2084 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_107
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_401:
# 2093 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SHARPEDONITE_UNLOCKED
# 2094 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SHARPEDONITE_BUYABLE
# 2095 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SHARPEDONITE, 1
# 2096 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2097 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2098 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2099 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_108
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_404:
# 2108 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CAMERUPTITE_UNLOCKED
# 2109 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CAMERUPTITE_BUYABLE
# 2110 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CAMERUPTITE, 1
# 2111 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2112 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2113 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2114 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_109
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_407:
# 2123 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ALTARIANITE_UNLOCKED
# 2124 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ALTARIANITE_BUYABLE
# 2125 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ALTARIANITE, 1
# 2126 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2127 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2128 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2129 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_110
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_410:
# 2138 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BANETTITE_UNLOCKED
# 2139 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BANETTITE_BUYABLE
# 2140 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BANETTITE, 1
# 2141 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2142 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2143 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2144 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_111
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_413:
# 2153 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ABSOLITE_UNLOCKED
# 2154 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ABSOLITE_BUYABLE
# 2155 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ABSOLITE, 1
# 2156 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2157 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2158 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2159 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_112
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_416:
# 2168 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GLALITITE_UNLOCKED
# 2169 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GLALITITE_BUYABLE
# 2170 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GLALITITE, 1
# 2171 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2172 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2173 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2174 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_113
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_419:
# 2183 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SALAMENCITE_UNLOCKED
# 2184 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SALAMENCITE_BUYABLE
# 2185 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SALAMENCITE, 1
# 2186 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2187 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2188 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2189 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_114
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_422:
# 2198 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_LOPUNNITE_UNLOCKED
# 2199 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_LOPUNNITE_BUYABLE
# 2200 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LOPUNNITE, 1
# 2201 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2202 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2203 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2204 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_115
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_425:
# 2213 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GARCHOMPITE_UNLOCKED
# 2214 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GARCHOMPITE_BUYABLE
# 2215 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GARCHOMPITE, 1
# 2216 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2217 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2218 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2219 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_116
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_428:
# 2228 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_LUCARIONITE_UNLOCKED
# 2229 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_LUCARIONITE_BUYABLE
# 2230 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUCARIONITE, 1
# 2231 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2232 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2233 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2234 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_117
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_431:
# 2243 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ABOMASITE_UNLOCKED
# 2244 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ABOMASITE_BUYABLE
# 2245 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ABOMASITE, 1
# 2246 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2247 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2248 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2249 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_118
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_434:
# 2258 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GALLADITE_UNLOCKED
# 2259 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GALLADITE_BUYABLE
# 2260 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GALLADITE, 1
# 2261 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2262 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2263 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2264 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_119
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_437:
# 2273 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CLEFABLITE_UNLOCKED
# 2274 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CLEFABLITE_BUYABLE
# 2275 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CLEFABLITE, 1
# 2276 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2277 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2278 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2279 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_120
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_440:
# 2288 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_VICTREEBELITE_UNLOCKED
# 2289 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_VICTREEBELITE_BUYABLE
# 2290 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_VICTREEBELITE, 1
# 2291 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2292 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2293 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2294 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_121
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_443:
# 2303 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_STARMINITE_UNLOCKED
# 2304 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_STARMINITE_BUYABLE
# 2305 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_STARMINITE, 1
# 2306 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2307 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2308 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2309 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_122
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_446:
# 2318 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DRAGONINITE_UNLOCKED
# 2319 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DRAGONINITE_BUYABLE
# 2320 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DRAGONINITE, 1
# 2321 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2322 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2323 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2324 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_123
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_449:
# 2333 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MEGANIUMITE_UNLOCKED
# 2334 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MEGANIUMITE_BUYABLE
# 2335 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEGANIUMITE, 1
# 2336 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2337 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2338 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2339 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_124
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_452:
# 2348 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_FERALIGITE_UNLOCKED
# 2349 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_FERALIGITE_BUYABLE
# 2350 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_FERALIGITE, 1
# 2351 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2352 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2353 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2354 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_125
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_455:
# 2363 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SKARMORITE_UNLOCKED
# 2364 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SKARMORITE_BUYABLE
# 2365 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SKARMORITE, 1
# 2366 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2367 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2368 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2369 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_126
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_458:
# 2378 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_FROSLASSITE_UNLOCKED
# 2379 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_FROSLASSITE_BUYABLE
# 2380 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_FROSLASSITE, 1
# 2381 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2382 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2383 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2384 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_127
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_461:
# 2393 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_EMBOARITE_UNLOCKED
# 2394 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_EMBOARITE_BUYABLE
# 2395 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_EMBOARITE, 1
# 2396 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2397 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2398 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2399 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_128
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_464:
# 2408 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_EXCADRITE_UNLOCKED
# 2409 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_EXCADRITE_BUYABLE
# 2410 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_EXCADRITE, 1
# 2411 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2412 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2413 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2414 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_129
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_467:
# 2423 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCOLIPITE_UNLOCKED
# 2424 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCOLIPITE_BUYABLE
# 2425 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCOLIPITE, 1
# 2426 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2427 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2428 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2429 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_130
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_470:
# 2438 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCRAFTINITE_UNLOCKED
# 2439 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCRAFTINITE_BUYABLE
# 2440 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCRAFTINITE, 1
# 2441 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2442 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2443 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2444 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_131
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_473:
# 2453 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_EELEKTROSSITE_UNLOCKED
# 2454 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_EELEKTROSSITE_BUYABLE
# 2455 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_EELEKTROSSITE, 1
# 2456 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2457 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2458 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2459 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_132
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_476:
# 2468 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHANDELURITE_UNLOCKED
# 2469 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHANDELURITE_BUYABLE
# 2470 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHANDELURITE, 1
# 2471 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2472 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2473 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2474 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_133
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_479:
# 2483 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHESNAUGHTITE_UNLOCKED
# 2484 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHESNAUGHTITE_BUYABLE
# 2485 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHESNAUGHTITE, 1
# 2486 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2487 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2488 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2489 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_134
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_482:
# 2498 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DELPHOXITE_UNLOCKED
# 2499 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DELPHOXITE_BUYABLE
# 2500 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DELPHOXITE, 1
# 2501 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2502 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2503 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2504 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_135
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_485:
# 2513 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GRENINJITE_UNLOCKED
# 2514 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GRENINJITE_BUYABLE
# 2515 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GRENINJITE, 1
# 2516 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2517 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2518 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2519 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_136
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_488:
# 2528 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_PYROARITE_UNLOCKED
# 2529 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_PYROARITE_BUYABLE
# 2530 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_PYROARITE, 1
# 2531 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2532 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2533 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2534 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_137
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_491:
# 2543 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MALAMARITE_UNLOCKED
# 2544 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MALAMARITE_BUYABLE
# 2545 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MALAMARITE, 1
# 2546 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2547 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2548 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2549 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_138
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_494:
# 2558 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BARBARACITE_UNLOCKED
# 2559 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BARBARACITE_BUYABLE
# 2560 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BARBARACITE, 1
# 2561 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2562 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2563 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2564 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_139
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_497:
# 2573 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DRAGALGITE_UNLOCKED
# 2574 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DRAGALGITE_BUYABLE
# 2575 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DRAGALGITE, 1
# 2576 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2577 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2578 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2579 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_140
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_500:
# 2588 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_HAWLUCHANITE_UNLOCKED
# 2589 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_HAWLUCHANITE_BUYABLE
# 2590 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_HAWLUCHANITE, 1
# 2591 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2592 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2593 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2594 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_141
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_503:
# 2603 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DRAMPANITE_UNLOCKED
# 2604 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DRAMPANITE_BUYABLE
# 2605 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DRAMPANITE, 1
# 2606 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2607 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2608 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2609 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_142
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_506:
# 2618 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_FALINKSITE_UNLOCKED
# 2619 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_FALINKSITE_BUYABLE
# 2620 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_FALINKSITE, 1
# 2621 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2622 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2623 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2624 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_143
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_509:
# 2633 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_RAICHUNITE_X_UNLOCKED
# 2634 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_RAICHUNITE_X_BUYABLE
# 2635 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RAICHUNITE_X, 1
# 2636 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2637 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2638 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2639 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_144
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_512:
# 2648 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_RAICHUNITE_Y_UNLOCKED
# 2649 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_RAICHUNITE_Y_BUYABLE
# 2650 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RAICHUNITE_Y, 1
# 2651 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2652 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2653 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2654 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_145
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_515:
# 2663 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHIMECHITE_UNLOCKED
# 2664 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHIMECHITE_BUYABLE
# 2665 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHIMECHITE, 1
# 2666 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2667 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2668 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2669 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_146
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_518:
# 2678 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_STARAPTITE_UNLOCKED
# 2679 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_STARAPTITE_BUYABLE
# 2680 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_STARAPTITE, 1
# 2681 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2682 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2683 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2684 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_147
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_521:
# 2693 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GOLURKITE_UNLOCKED
# 2694 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GOLURKITE_BUYABLE
# 2695 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GOLURKITE, 1
# 2696 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2697 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2698 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2699 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_148
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_524:
# 2708 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MEOWSTICITE_UNLOCKED
# 2709 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MEOWSTICITE_BUYABLE
# 2710 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEOWSTICITE, 1
# 2711 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2712 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2713 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2714 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_149
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_527:
# 2723 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CRABOMINITE_UNLOCKED
# 2724 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CRABOMINITE_BUYABLE
# 2725 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CRABOMINITE, 1
# 2726 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2727 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2728 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2729 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_150
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_530:
# 2738 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GOLISOPITE_UNLOCKED
# 2739 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GOLISOPITE_BUYABLE
# 2740 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GOLISOPITE, 1
# 2741 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2742 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2743 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2744 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_151
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_533:
# 2753 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCOVILLAINITE_UNLOCKED
# 2754 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCOVILLAINITE_BUYABLE
# 2755 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCOVILLAINITE, 1
# 2756 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2757 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2758 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2759 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_152
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_536:
# 2768 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GLIMMORANITE_UNLOCKED
# 2769 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GLIMMORANITE_BUYABLE
# 2770 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GLIMMORANITE, 1
# 2771 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2772 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2773 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2774 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_153
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_539:
# 2783 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BAXCALIBRITE_UNLOCKED
# 2784 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BAXCALIBRITE_BUYABLE
# 2785 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BAXCALIBRITE, 1
# 2786 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2787 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2788 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2789 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_154
	goto Hub_Event_Script_Diancie_237


Hub_Event_Script_Chimecho::
# 2811 "data/maps/Hub1/scripts.pory"
	compare VAR_TOTAL_RUNS, 3
	goto_if_lt Hub_Event_Script_Chimecho_2
Hub_Event_Script_Chimecho_1:
# 2817 "data/maps/Hub1/scripts.pory"
	lockall
# 2818 "data/maps/Hub1/scripts.pory"
	faceplayer
# 2819 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 2820 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_1
# 2821 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ROCK_SMASH_UNLOCKED, Hub_Event_Script_Chimecho_6
Hub_Event_Script_Chimecho_5:
# 2826 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Chimecho_9
# 2982 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_11
# 2983 "data/maps/Hub1/scripts.pory"
	waitmessage
# 2984 "data/maps/Hub1/scripts.pory"
	releaseall
Hub_Event_Script_Chimecho_8:
# 2986 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
# 2987 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Chimecho_2:
# 2812 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_0
	goto Hub_Event_Script_Chimecho_1

Hub_Event_Script_Chimecho_6:
# 2822 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_2, ITEM_TM_ROCK_SMASH
# 2823 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chimecho_5

Hub_Event_Script_Chimecho_9:
# 2827 "data/maps/Hub1/scripts.pory"
	showcoinsbox 21, 11
# 2828 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 2829 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 2830 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_NOBLE_ROAR, Hub_Event_Script_Chimecho_13
# 2845 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ROCK_SMASH, Hub_Event_Script_Chimecho_14
# 2860 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SWIFT, Hub_Event_Script_Chimecho_15
# 2875 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CUT, Hub_Event_Script_Chimecho_16
# 2890 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CHARM, Hub_Event_Script_Chimecho_17
# 2905 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_FAKE_TEARS, Hub_Event_Script_Chimecho_18
# 2920 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CONFUSE_RAY, Hub_Event_Script_Chimecho_19
# 2935 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_THUNDER_WAVE, Hub_Event_Script_Chimecho_20
# 2950 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_WILL_O_WISP, Hub_Event_Script_Chimecho_21
# 2965 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_TOXIC, Hub_Event_Script_Chimecho_22
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_13:
# 2831 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_NOBLE_ROAR_UNLOCKED, Hub_Event_Script_Chimecho_23
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_14:
# 2846 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ROCK_SMASH_UNLOCKED, Hub_Event_Script_Chimecho_25
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_15:
# 2861 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SWIFT_UNLOCKED, Hub_Event_Script_Chimecho_27
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_16:
# 2876 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CUT_UNLOCKED, Hub_Event_Script_Chimecho_29
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_17:
# 2891 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CHARM_UNLOCKED, Hub_Event_Script_Chimecho_31
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_18:
# 2906 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_FAKE_TEARS_UNLOCKED, Hub_Event_Script_Chimecho_33
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_19:
# 2921 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CONFUSE_RAY_UNLOCKED, Hub_Event_Script_Chimecho_35
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_20:
# 2936 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_THUNDER_WAVE_UNLOCKED, Hub_Event_Script_Chimecho_37
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_21:
# 2951 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_WILL_O_WISP_UNLOCKED, Hub_Event_Script_Chimecho_39
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_22:
# 2966 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_TOXIC_UNLOCKED, Hub_Event_Script_Chimecho_41
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_23:
# 2832 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2833 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 4000
	goto_if_ge Hub_Event_Script_Chimecho_43
# 2842 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_4
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_25:
# 2847 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2848 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 8000
	goto_if_ge Hub_Event_Script_Chimecho_46
# 2857 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_4
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_27:
# 2862 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2863 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 8000
	goto_if_ge Hub_Event_Script_Chimecho_49
# 2872 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_4
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_29:
# 2877 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2878 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 8000
	goto_if_ge Hub_Event_Script_Chimecho_52
# 2887 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_4
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_31:
# 2892 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2893 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 4000
	goto_if_ge Hub_Event_Script_Chimecho_55
# 2902 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_4
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_33:
# 2907 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2908 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 4000
	goto_if_ge Hub_Event_Script_Chimecho_58
# 2917 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_4
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_35:
# 2922 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2923 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 6000
	goto_if_ge Hub_Event_Script_Chimecho_61
# 2932 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_4
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_37:
# 2937 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2938 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Chimecho_64
# 2947 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_4
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_39:
# 2952 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2953 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 10000
	goto_if_ge Hub_Event_Script_Chimecho_67
# 2962 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_4
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_41:
# 2967 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2968 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 10000
	goto_if_ge Hub_Event_Script_Chimecho_70
# 2977 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_4
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_43:
# 2834 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_NOBLE_ROAR_UNLOCKED
# 2835 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_NOBLE_ROAR, 1
# 2836 "data/maps/Hub1/scripts.pory"
	removecoins 4000
# 2837 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2838 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2839 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_3
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_46:
# 2849 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_ROCK_SMASH_UNLOCKED
# 2850 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_ROCK_SMASH, 1
# 2851 "data/maps/Hub1/scripts.pory"
	removecoins 8000
# 2852 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2853 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2854 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_5
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_49:
# 2864 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_SWIFT_UNLOCKED
# 2865 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SWIFT, 1
# 2866 "data/maps/Hub1/scripts.pory"
	removecoins 8000
# 2867 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2868 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2869 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_6
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_52:
# 2879 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CUT_UNLOCKED
# 2880 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CUT, 1
# 2881 "data/maps/Hub1/scripts.pory"
	removecoins 8000
# 2882 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2883 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2884 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_7
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_55:
# 2894 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CHARM_UNLOCKED
# 2895 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CHARM, 1
# 2896 "data/maps/Hub1/scripts.pory"
	removecoins 4000
# 2897 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2898 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2899 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_8
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_58:
# 2909 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_FAKE_TEARS_UNLOCKED
# 2910 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_FAKE_TEARS, 1
# 2911 "data/maps/Hub1/scripts.pory"
	removecoins 4000
# 2912 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2913 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2914 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_9
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_61:
# 2924 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CONFUSE_RAY_UNLOCKED
# 2925 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CONFUSE_RAY, 1
# 2926 "data/maps/Hub1/scripts.pory"
	removecoins 6000
# 2927 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2928 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2929 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_10
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_64:
# 2939 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_THUNDER_WAVE_UNLOCKED
# 2940 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_THUNDER_WAVE, 1
# 2941 "data/maps/Hub1/scripts.pory"
	removecoins 10000
# 2942 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2943 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2944 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_11
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_67:
# 2954 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_WILL_O_WISP_UNLOCKED
# 2955 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_WILL_O_WISP, 1
# 2956 "data/maps/Hub1/scripts.pory"
	removecoins 10000
# 2957 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2958 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2959 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_12
	goto Hub_Event_Script_Chimecho_8

Hub_Event_Script_Chimecho_70:
# 2969 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_TOXIC_UNLOCKED
# 2970 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_TOXIC, 1
# 2971 "data/maps/Hub1/scripts.pory"
	removecoins 10000
# 2972 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2973 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2974 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_13
	goto Hub_Event_Script_Chimecho_8


GiveStarterCharm::
# 2992 "data/maps/Hub1/scripts.pory"
	setvar VAR_0x8000, 0
# 2993 "data/maps/Hub1/scripts.pory"
	setvar VAR_0x8001, 0
# 2994 "data/maps/Hub1/scripts.pory"
	setvar VAR_0x8002, 0
# 2995 "data/maps/Hub1/scripts.pory"
	setvar VAR_0x8003, 0
GiveStarterCharm_2:
# 2996 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8000, 3
	goto_if_ne GiveStarterCharm_3
# 3011 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_SHINY_STARTER_CHARM
	goto_if_eq GiveStarterCharm_6
# 3011 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_SHINY_STARTER_CHARM
	goto_if_eq GiveStarterCharm_6
# 3011 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_SHINY_STARTER_CHARM
	goto_if_eq GiveStarterCharm_6
GiveStarterCharm_5:
# 3014 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_LUMP_SUM_CHARM
	goto_if_eq GiveStarterCharm_20
# 3014 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_LUMP_SUM_CHARM
	goto_if_eq GiveStarterCharm_20
# 3014 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_LUMP_SUM_CHARM
	goto_if_eq GiveStarterCharm_20
GiveStarterCharm_19:
# 3017 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_BERRY_PACK_CHARM
	goto_if_eq GiveStarterCharm_34
# 3017 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_BERRY_PACK_CHARM
	goto_if_eq GiveStarterCharm_34
# 3017 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_BERRY_PACK_CHARM
	goto_if_eq GiveStarterCharm_34
GiveStarterCharm_33:
# 3020 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, TRUE, 3, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 3021 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 3022 "data/maps/Hub1/scripts.pory"
	case ITEM_SHINY_STARTER_CHARM, GiveStarterCharm_48
# 3030 "data/maps/Hub1/scripts.pory"
	case ITEM_LUMP_SUM_CHARM, GiveStarterCharm_49
# 3034 "data/maps/Hub1/scripts.pory"
	case ITEM_BERRY_PACK_CHARM, GiveStarterCharm_50
GiveStarterCharm_46:
# 3041 "data/maps/Hub1/scripts.pory"
	msgbox GiveStarterCharm_Text_3
# 3042 "data/maps/Hub1/scripts.pory"
	waitmessage
	return

GiveStarterCharm_3:
# 2997 "data/maps/Hub1/scripts.pory"
	randomelement ITEM_SHINY_STARTER_CHARM, ITEM_LUMP_SUM_CHARM, ITEM_BERRY_PACK_CHARM
# 2998 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, VAR_0x8002
	goto_if_ne GiveStarterCharm_15
GiveStarterCharm_12:
# 3002 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, VAR_0x8001
	goto_if_ne GiveStarterCharm_29
GiveStarterCharm_26:
# 3006 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, VAR_0x8001
	goto_if_ne GiveStarterCharm_42
	goto GiveStarterCharm_2

GiveStarterCharm_6:
# 3012 "data/maps/Hub1/scripts.pory"
	dynmultipush GiveStarterCharm_Text_0, ITEM_SHINY_STARTER_CHARM
	goto GiveStarterCharm_5

GiveStarterCharm_13:
# 2999 "data/maps/Hub1/scripts.pory"
	copyvar VAR_0x8001, VAR_RESULT
# 3000 "data/maps/Hub1/scripts.pory"
	addvar VAR_0x8000, 1
	goto GiveStarterCharm_12

GiveStarterCharm_14:
# 2998 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, 0
	goto_if_eq GiveStarterCharm_13
	goto GiveStarterCharm_12

GiveStarterCharm_15:
# 2998 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, VAR_0x8003
	goto_if_ne GiveStarterCharm_14
	goto GiveStarterCharm_12

GiveStarterCharm_20:
# 3015 "data/maps/Hub1/scripts.pory"
	dynmultipush GiveStarterCharm_Text_1, ITEM_LUMP_SUM_CHARM
	goto GiveStarterCharm_19

GiveStarterCharm_27:
# 3003 "data/maps/Hub1/scripts.pory"
	copyvar VAR_0x8002, VAR_RESULT
# 3004 "data/maps/Hub1/scripts.pory"
	addvar VAR_0x8000, 1
	goto GiveStarterCharm_26

GiveStarterCharm_28:
# 3002 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, 0
	goto_if_eq GiveStarterCharm_27
	goto GiveStarterCharm_26

GiveStarterCharm_29:
# 3002 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, VAR_0x8003
	goto_if_ne GiveStarterCharm_28
	goto GiveStarterCharm_26

GiveStarterCharm_34:
# 3018 "data/maps/Hub1/scripts.pory"
	dynmultipush GiveStarterCharm_Text_2, ITEM_BERRY_PACK_CHARM
	goto GiveStarterCharm_33

GiveStarterCharm_40:
# 3007 "data/maps/Hub1/scripts.pory"
	copyvar VAR_0x8003, VAR_RESULT
# 3008 "data/maps/Hub1/scripts.pory"
	addvar VAR_0x8000, 1
	goto GiveStarterCharm_2

GiveStarterCharm_41:
# 3006 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, 0
	goto_if_eq GiveStarterCharm_40
	goto GiveStarterCharm_2

GiveStarterCharm_42:
# 3006 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, VAR_0x8002
	goto_if_ne GiveStarterCharm_41
	goto GiveStarterCharm_2

GiveStarterCharm_48:
# 3023 "data/maps/Hub1/scripts.pory"
	setflag FLAG_NEXT_GIVE_MON_SHINY
# 3024 "data/maps/Hub1/scripts.pory"
	special ZeroPlayerPartyMons
# 3025 "data/maps/Hub1/scripts.pory"
	special GiveSavedStarter
# 3026 "data/maps/Hub1/scripts.pory"
	special UpdatePlayerSprite
# 3027 "data/maps/Hub1/scripts.pory"
	special UpdateTransformedPlayerPalette
# 3028 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SHINY_STARTER_CHARM, 1
# 3029 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_LEVEL_UP
	goto GiveStarterCharm_46

GiveStarterCharm_49:
# 3031 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUMP_SUM_CHARM, 1
# 3032 "data/maps/Hub1/scripts.pory"
	addmoney 1500
# 3033 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
	goto GiveStarterCharm_46

GiveStarterCharm_50:
# 3035 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BERRY_PACK_CHARM, 1
# 3036 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 1
# 3037 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
# 3038 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BERRY_JUICE, 1
# 3039 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto GiveStarterCharm_46


AfterWarpIntoNewAct_Text_0:
# 19 "data/maps/Hub1/scripts.pory"
	.string "Your Phione egg hatched into a Phione!$"

AbraTeleport_Text_0:
# 31 "data/maps/Hub1/scripts.pory"
	.string "You'll have to defeat the leader first\nbefore I can teleport you\lto the next act.$"

AbraTeleport_Text_1:
# 35 "data/maps/Hub1/scripts.pory"
	.string "Would you like to teleport\nto the next act?$"

AbraTeleport_Text_2:
# 38 "data/maps/Hub1/scripts.pory"
	.string "Alright then! Here we go!$"

AbraTeleport_Text_3:
# 42 "data/maps/Hub1/scripts.pory"
	.string "Okay! Let me know when you're ready.$"

RivalFight1_Text_0:
# 51 "data/maps/Hub1/scripts.pory"
	.string "Yo I'm Treecko. Grrr.$"

RivalFight1_Text_1:
# 51 "data/maps/Hub1/scripts.pory"
	.string "Damn you got me.$"

RivalFight1_Text_2:
# 52 "data/maps/Hub1/scripts.pory"
	.string "I'll get you next time.$"

RivalFight1_Text_3:
# 56 "data/maps/Hub1/scripts.pory"
	.string "Yo I'm Torchic. Grrr.$"

HUB1_Run_Stats_Sign_Text_0:
# 117 "data/maps/Hub1/scripts.pory"
	.string "Total Runs: {STR_VAR_1}\nAct 1 Wins: {STR_VAR_2}$"

HUB1_Run_Stats_Sign_Text_1:
# 123 "data/maps/Hub1/scripts.pory"
	.string "Act 2 Wins: {STR_VAR_3}\nAct 3 Wins: {STR_VAR_1}\pAct 4 Wins: {STR_VAR_2}$"

HUB1_ONFRAME_Text_0:
# 150 "data/maps/Hub1/scripts.pory"
	.string "Welcome to Pokemon Path!\pTo start a run, talk to\nProfessor Birch up ahead.\pNow choose a pokemon to\nstart your adventure with.$"

HUB1_ONFRAME_Text_1:
# 153 "data/maps/Hub1/scripts.pory"
	.string "Bulbasaur$"

HUB1_ONFRAME_Text_2:
# 154 "data/maps/Hub1/scripts.pory"
	.string "Charmander$"

HUB1_ONFRAME_Text_3:
# 155 "data/maps/Hub1/scripts.pory"
	.string "Squirtle$"

HUB1_ONFRAME_Text_4:
# 156 "data/maps/Hub1/scripts.pory"
	.string "Chikorita$"

HUB1_ONFRAME_Text_5:
# 157 "data/maps/Hub1/scripts.pory"
	.string "Cyndaquil$"

HUB1_ONFRAME_Text_6:
# 158 "data/maps/Hub1/scripts.pory"
	.string "Totodile$"

HUB1_ONFRAME_Text_7:
# 159 "data/maps/Hub1/scripts.pory"
	.string "Treecko$"

HUB1_ONFRAME_Text_8:
# 160 "data/maps/Hub1/scripts.pory"
	.string "Torchic$"

HUB1_ONFRAME_Text_9:
# 161 "data/maps/Hub1/scripts.pory"
	.string "Mudkip$"

HUB1_ONFRAME_Text_10:
# 162 "data/maps/Hub1/scripts.pory"
	.string "Turtwig$"

HUB1_ONFRAME_Text_11:
# 163 "data/maps/Hub1/scripts.pory"
	.string "Chimchar$"

HUB1_ONFRAME_Text_12:
# 164 "data/maps/Hub1/scripts.pory"
	.string "Piplup$"

HUB1_ONFRAME_Text_13:
# 165 "data/maps/Hub1/scripts.pory"
	.string "Snivy$"

HUB1_ONFRAME_Text_14:
# 166 "data/maps/Hub1/scripts.pory"
	.string "Tepig$"

HUB1_ONFRAME_Text_15:
# 167 "data/maps/Hub1/scripts.pory"
	.string "Oshawott$"

HUB1_ONFRAME_Text_16:
# 168 "data/maps/Hub1/scripts.pory"
	.string "Chespin$"

HUB1_ONFRAME_Text_17:
# 169 "data/maps/Hub1/scripts.pory"
	.string "Fennekin$"

HUB1_ONFRAME_Text_18:
# 170 "data/maps/Hub1/scripts.pory"
	.string "Froakie$"

HUB1_ONFRAME_Text_19:
# 171 "data/maps/Hub1/scripts.pory"
	.string "Rowlet$"

HUB1_ONFRAME_Text_20:
# 172 "data/maps/Hub1/scripts.pory"
	.string "Litten$"

HUB1_ONFRAME_Text_21:
# 173 "data/maps/Hub1/scripts.pory"
	.string "Popplio$"

HUB1_ONFRAME_Text_22:
# 174 "data/maps/Hub1/scripts.pory"
	.string "Grookey$"

HUB1_ONFRAME_Text_23:
# 175 "data/maps/Hub1/scripts.pory"
	.string "Scorbunny$"

HUB1_ONFRAME_Text_24:
# 176 "data/maps/Hub1/scripts.pory"
	.string "Sobble$"

HUB1_ONFRAME_Text_25:
# 177 "data/maps/Hub1/scripts.pory"
	.string "Sprigatito$"

HUB1_ONFRAME_Text_26:
# 178 "data/maps/Hub1/scripts.pory"
	.string "Fuecoco$"

HUB1_ONFRAME_Text_27:
# 179 "data/maps/Hub1/scripts.pory"
	.string "Quaxly$"

HUB1_ONFRAME_Text_28:
# 297 "data/maps/Hub1/scripts.pory"
	.string "Use this item to level up your\nPokemon.$"

Hub_Event_Script_Birch_Text_0:
# 307 "data/maps/Hub1/scripts.pory"
	.string "Would you like to start a run?$"

Hub_Event_Script_Miltank_Text_0:
# 324 "data/maps/Hub1/scripts.pory"
	.string "Bulbasaur (¥500)$"

Hub_Event_Script_Miltank_Text_1:
# 325 "data/maps/Hub1/scripts.pory"
	.string "Charmander (¥500)$"

Hub_Event_Script_Miltank_Text_2:
# 326 "data/maps/Hub1/scripts.pory"
	.string "Squirtle (¥500)$"

Hub_Event_Script_Miltank_Text_3:
# 327 "data/maps/Hub1/scripts.pory"
	.string "Chikorita (¥500)$"

Hub_Event_Script_Miltank_Text_4:
# 328 "data/maps/Hub1/scripts.pory"
	.string "Cyndaquil (¥500)$"

Hub_Event_Script_Miltank_Text_5:
# 329 "data/maps/Hub1/scripts.pory"
	.string "Totodile (¥500)$"

Hub_Event_Script_Miltank_Text_6:
# 330 "data/maps/Hub1/scripts.pory"
	.string "Treecko (¥500)$"

Hub_Event_Script_Miltank_Text_7:
# 331 "data/maps/Hub1/scripts.pory"
	.string "Torchic (¥500)$"

Hub_Event_Script_Miltank_Text_8:
# 332 "data/maps/Hub1/scripts.pory"
	.string "Mudkip (¥500)$"

Hub_Event_Script_Miltank_Text_9:
# 333 "data/maps/Hub1/scripts.pory"
	.string "Turtwig (¥500)$"

Hub_Event_Script_Miltank_Text_10:
# 334 "data/maps/Hub1/scripts.pory"
	.string "Chimchar (¥500)$"

Hub_Event_Script_Miltank_Text_11:
# 335 "data/maps/Hub1/scripts.pory"
	.string "Piplup (¥500)$"

Hub_Event_Script_Miltank_Text_12:
# 336 "data/maps/Hub1/scripts.pory"
	.string "Snivy (¥500)$"

Hub_Event_Script_Miltank_Text_13:
# 337 "data/maps/Hub1/scripts.pory"
	.string "Tepig (¥500)$"

Hub_Event_Script_Miltank_Text_14:
# 338 "data/maps/Hub1/scripts.pory"
	.string "Oshawott (¥500)$"

Hub_Event_Script_Miltank_Text_15:
# 339 "data/maps/Hub1/scripts.pory"
	.string "Chespin (¥500)$"

Hub_Event_Script_Miltank_Text_16:
# 340 "data/maps/Hub1/scripts.pory"
	.string "Fennekin (¥500)$"

Hub_Event_Script_Miltank_Text_17:
# 341 "data/maps/Hub1/scripts.pory"
	.string "Froakie (¥500)$"

Hub_Event_Script_Miltank_Text_18:
# 342 "data/maps/Hub1/scripts.pory"
	.string "Rowlet (¥500)$"

Hub_Event_Script_Miltank_Text_19:
# 343 "data/maps/Hub1/scripts.pory"
	.string "Litten (¥500)$"

Hub_Event_Script_Miltank_Text_20:
# 344 "data/maps/Hub1/scripts.pory"
	.string "Popplio (¥500)$"

Hub_Event_Script_Miltank_Text_21:
# 345 "data/maps/Hub1/scripts.pory"
	.string "Grookey (¥500)$"

Hub_Event_Script_Miltank_Text_22:
# 346 "data/maps/Hub1/scripts.pory"
	.string "Scorbunny (¥500)$"

Hub_Event_Script_Miltank_Text_23:
# 347 "data/maps/Hub1/scripts.pory"
	.string "Sobble (¥500)$"

Hub_Event_Script_Miltank_Text_24:
# 348 "data/maps/Hub1/scripts.pory"
	.string "Sprigatito (¥500)$"

Hub_Event_Script_Miltank_Text_25:
# 349 "data/maps/Hub1/scripts.pory"
	.string "Fuecoco (¥500)$"

Hub_Event_Script_Miltank_Text_26:
# 350 "data/maps/Hub1/scripts.pory"
	.string "Quaxly (¥500)$"

Hub_Event_Script_Miltank_Text_27:
# 354 "data/maps/Hub1/scripts.pory"
	.string "Would you like to adopt a pokemon?$"

Hub_Event_Script_Miltank_Text_28:
# 366 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Bulbasaur as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_29:
# 369 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry. You don't have the coins to\nadopt that pokemon.$"

Hub_Event_Script_Miltank_Text_30:
# 378 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Charmander as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_31:
# 390 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Squirtle as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_32:
# 402 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chikorita as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_33:
# 414 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Cyndaquil as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_34:
# 426 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Totodile as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_35:
# 438 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Treecko as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_36:
# 450 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Torchic as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_37:
# 462 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Mudkip as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_38:
# 474 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Turtwig as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_39:
# 486 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chimchar as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_40:
# 498 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Piplup as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_41:
# 510 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Snivy as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_42:
# 522 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Tepig as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_43:
# 534 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Oshawott as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_44:
# 546 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chespin as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_45:
# 558 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Fennekin as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_46:
# 570 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Froakie as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_47:
# 582 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Rowlet as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_48:
# 594 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Litten as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_49:
# 606 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Popplio as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_50:
# 618 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Grookey as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_51:
# 630 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Scorbunny as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_52:
# 642 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Sobble as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_53:
# 654 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Sprigatito as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_54:
# 666 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Fuecoco as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_55:
# 678 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Quaxly as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_56:
# 687 "data/maps/Hub1/scripts.pory"
	.string "You have no more starters left\nto adopt!$"

Hub_Event_Script_Chansey_Text_0:
# 728 "data/maps/Hub1/scripts.pory"
	.string "Would you like to change your starter?$"

Hub_Event_Script_Chansey_Text_1:
# 741 "data/maps/Hub1/scripts.pory"
	.string "There you go!$"

Hub_Event_Script_Chansey_Text_2:
# 749 "data/maps/Hub1/scripts.pory"
	.string "You don't have any starter pokemon yet.\pPlease consider adopting some pokemon\nfrom my friend Miltank to the right.$"

KecShop_Sign_Text_0:
# 756 "data/maps/Hub1/scripts.pory"
	.string "Welcome to the Kecleon Brother's shop!$"

KecShop_Text_0:
# 765 "data/maps/Hub1/scripts.pory"
	.string "Mem. Mushroom (¥200)$"

KecShop_Text_1:
# 769 "data/maps/Hub1/scripts.pory"
	.string "Rare Candy (¥2000)$"

KecShop_Text_2:
# 773 "data/maps/Hub1/scripts.pory"
	.string "Oran Berry (¥200)$"

KecShop_Text_3:
# 777 "data/maps/Hub1/scripts.pory"
	.string "Lum Berry (¥500)$"

KecShop_Text_4:
# 781 "data/maps/Hub1/scripts.pory"
	.string "Serious Mint (¥2000)$"

KecShop_Text_5:
# 795 "data/maps/Hub1/scripts.pory"
	.string "Thank you for your purchase!$"

KecShop_Text_6:
# 798 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry. You don't have the money to\nbuy that, kec.$"

KecShop_Text_7:
# 847 "data/maps/Hub1/scripts.pory"
	.string "Sorry, but there's nothing for you\nto buy right now, Kec.$"

KecShop_Shiny_Text_0:
# 858 "data/maps/Hub1/scripts.pory"
	.string "TM Rock Smash (¥900)$"

KecShop_Shiny_Text_1:
# 862 "data/maps/Hub1/scripts.pory"
	.string "TM Swift (¥500)$"

KecShop_Shiny_Text_2:
# 866 "data/maps/Hub1/scripts.pory"
	.string "TM Cut (¥500)$"

KecShop_Shiny_Text_3:
# 870 "data/maps/Hub1/scripts.pory"
	.string "TM Noble Roar (¥400)$"

KecShop_Shiny_Text_4:
# 874 "data/maps/Hub1/scripts.pory"
	.string "TM Charm (¥400)$"

KecShop_Shiny_Text_5:
# 878 "data/maps/Hub1/scripts.pory"
	.string "TM Fake Tears (¥400)$"

KecShop_Shiny_Text_6:
# 882 "data/maps/Hub1/scripts.pory"
	.string "TM Confuse Ray (¥800)$"

KecShop_Shiny_Text_7:
# 886 "data/maps/Hub1/scripts.pory"
	.string "TM Thunder Wave (¥800)$"

KecShop_Shiny_Text_8:
# 890 "data/maps/Hub1/scripts.pory"
	.string "TM Will-O-Wisp (¥800)$"

KecShop_Shiny_Text_9:
# 894 "data/maps/Hub1/scripts.pory"
	.string "TM Toxic (¥800)$"

Hub_Event_Script_Kecleon_Text_0:
# 1027 "data/maps/Hub1/scripts.pory"
	.string "Hey there! Would you like me to\nstock an item?$"

Hub_Event_Script_Kecleon_Text_1:
# 1029 "data/maps/Hub1/scripts.pory"
	.string "Memory Mushroom (¥200)$"

Hub_Event_Script_Kecleon_Text_2:
# 1065 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Oran Berry as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_3:
# 1068 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry. You don't have the coins to\nstock that item, kec.$"

Hub_Event_Script_Kecleon_Text_4:
# 1080 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Lum Berry as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_5:
# 1094 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Serious Mint as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_6:
# 1108 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Memory Mushroom as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_7:
# 1122 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Rare Candy as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_8:
# 1130 "data/maps/Hub1/scripts.pory"
	.string "You don't have anything left\nto stock right now. Thank you for\lyour consistent patronage!\p$"

Hub_Event_Script_Shiny_Kecleon_Text_0:
# 1143 "data/maps/Hub1/scripts.pory"
	.string "Howdy! Would you like me to\nstock a new TM?$"

Hub_Event_Script_Shiny_Kecleon_Text_1:
# 1198 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Noble Roar as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_2:
# 1212 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Rock Smash as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_3:
# 1226 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Swift as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_4:
# 1240 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Cut as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_5:
# 1254 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Charm as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_6:
# 1268 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Fake Tears as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_7:
# 1282 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Confuse Ray as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_8:
# 1296 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Thunder Wave as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_9:
# 1311 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Will O Wisp as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_10:
# 1326 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Toxic as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_11:
# 1334 "data/maps/Hub1/scripts.pory"
	.string "You don't have anything left\nto puchase right now. Thank you for\lyour consistent patronage!\p$"

Hub_Event_Script_Diancie_Text_0:
# 1347 "data/maps/Hub1/scripts.pory"
	.string "Hey there! I'm Diancie.\n"
	.string "I love collecting special gems.\l"
	.string "I plan on selling some of them soon\l"
	.string "but I don't have any to sell right now.\l"
	.string "I hope you come visit again another\l"
	.string "time.$"

Hub_Event_Script_Diancie_Text_1:
# 1355 "data/maps/Hub1/scripts.pory"
	.string "Hiya! I've finally started selling\n"
	.string "some of my precious gems.\l"
	.string "To celebrate, I'll give you this\l"
	.string "one on the house!$"

Hub_Event_Script_Diancie_Text_2:
# 1364 "data/maps/Hub1/scripts.pory"
	.string "There aren't so many gems I want to,\n"
	.string "sell right now. But I might sell more\l"
	.string "in the future.$"

Hub_Event_Script_Diancie_Text_3:
# 1371 "data/maps/Hub1/scripts.pory"
	.string "Venusaurite (¥1000)$"

Hub_Event_Script_Diancie_Text_4:
# 1375 "data/maps/Hub1/scripts.pory"
	.string "Charizardite Y (¥1000)$"

Hub_Event_Script_Diancie_Text_5:
# 1379 "data/maps/Hub1/scripts.pory"
	.string "Blastoisinite (¥1000)$"

Hub_Event_Script_Diancie_Text_6:
# 1383 "data/maps/Hub1/scripts.pory"
	.string "Beedrillite (¥1000)$"

Hub_Event_Script_Diancie_Text_7:
# 1387 "data/maps/Hub1/scripts.pory"
	.string "Pidgeotite (¥1000)$"

Hub_Event_Script_Diancie_Text_8:
# 1391 "data/maps/Hub1/scripts.pory"
	.string "Alakazite (¥1000)$"

Hub_Event_Script_Diancie_Text_9:
# 1395 "data/maps/Hub1/scripts.pory"
	.string "Slowbronite (¥1000)$"

Hub_Event_Script_Diancie_Text_10:
# 1399 "data/maps/Hub1/scripts.pory"
	.string "Gengarite (¥1000)$"

Hub_Event_Script_Diancie_Text_11:
# 1403 "data/maps/Hub1/scripts.pory"
	.string "Kangaskhanite (¥1000)$"

Hub_Event_Script_Diancie_Text_12:
# 1407 "data/maps/Hub1/scripts.pory"
	.string "Pinsirite (¥1000)$"

Hub_Event_Script_Diancie_Text_13:
# 1411 "data/maps/Hub1/scripts.pory"
	.string "Gyaradosite (¥1000)$"

Hub_Event_Script_Diancie_Text_14:
# 1415 "data/maps/Hub1/scripts.pory"
	.string "Aerodactylite (¥1000)$"

Hub_Event_Script_Diancie_Text_15:
# 1419 "data/maps/Hub1/scripts.pory"
	.string "Ampharosite (¥1000)$"

Hub_Event_Script_Diancie_Text_16:
# 1423 "data/maps/Hub1/scripts.pory"
	.string "Steelixite (¥1000)$"

Hub_Event_Script_Diancie_Text_17:
# 1427 "data/maps/Hub1/scripts.pory"
	.string "Scizorite (¥1000)$"

Hub_Event_Script_Diancie_Text_18:
# 1431 "data/maps/Hub1/scripts.pory"
	.string "Heracronite (¥1000)$"

Hub_Event_Script_Diancie_Text_19:
# 1435 "data/maps/Hub1/scripts.pory"
	.string "Houndoominite (¥1000)$"

Hub_Event_Script_Diancie_Text_20:
# 1439 "data/maps/Hub1/scripts.pory"
	.string "Tyranitarite (¥1000)$"

Hub_Event_Script_Diancie_Text_21:
# 1443 "data/maps/Hub1/scripts.pory"
	.string "Sceptilite (¥1000)$"

Hub_Event_Script_Diancie_Text_22:
# 1447 "data/maps/Hub1/scripts.pory"
	.string "Blazikenite (¥1000)$"

Hub_Event_Script_Diancie_Text_23:
# 1451 "data/maps/Hub1/scripts.pory"
	.string "Swampertite (¥1000)$"

Hub_Event_Script_Diancie_Text_24:
# 1455 "data/maps/Hub1/scripts.pory"
	.string "Gardevoirite (¥1000)$"

Hub_Event_Script_Diancie_Text_25:
# 1459 "data/maps/Hub1/scripts.pory"
	.string "Sablenite (¥1000)$"

Hub_Event_Script_Diancie_Text_26:
# 1463 "data/maps/Hub1/scripts.pory"
	.string "Mawilite (¥1000)$"

Hub_Event_Script_Diancie_Text_27:
# 1467 "data/maps/Hub1/scripts.pory"
	.string "Aggronite (¥1000)$"

Hub_Event_Script_Diancie_Text_28:
# 1471 "data/maps/Hub1/scripts.pory"
	.string "Medichamite (¥1000)$"

Hub_Event_Script_Diancie_Text_29:
# 1475 "data/maps/Hub1/scripts.pory"
	.string "Manectite (¥1000)$"

Hub_Event_Script_Diancie_Text_30:
# 1479 "data/maps/Hub1/scripts.pory"
	.string "Sharpedonite (¥1000)$"

Hub_Event_Script_Diancie_Text_31:
# 1483 "data/maps/Hub1/scripts.pory"
	.string "Cameruptite (¥1000)$"

Hub_Event_Script_Diancie_Text_32:
# 1487 "data/maps/Hub1/scripts.pory"
	.string "Altarianite (¥1000)$"

Hub_Event_Script_Diancie_Text_33:
# 1491 "data/maps/Hub1/scripts.pory"
	.string "Banettite (¥1000)$"

Hub_Event_Script_Diancie_Text_34:
# 1495 "data/maps/Hub1/scripts.pory"
	.string "Absolite (¥1000)$"

Hub_Event_Script_Diancie_Text_35:
# 1499 "data/maps/Hub1/scripts.pory"
	.string "Glalitite (¥1000)$"

Hub_Event_Script_Diancie_Text_36:
# 1503 "data/maps/Hub1/scripts.pory"
	.string "Salamencite (¥1000)$"

Hub_Event_Script_Diancie_Text_37:
# 1507 "data/maps/Hub1/scripts.pory"
	.string "Metagrossite (¥1000)$"

Hub_Event_Script_Diancie_Text_38:
# 1511 "data/maps/Hub1/scripts.pory"
	.string "Lopunnite (¥1000)$"

Hub_Event_Script_Diancie_Text_39:
# 1515 "data/maps/Hub1/scripts.pory"
	.string "Garchompite (¥1000)$"

Hub_Event_Script_Diancie_Text_40:
# 1519 "data/maps/Hub1/scripts.pory"
	.string "Lucarionite (¥1000)$"

Hub_Event_Script_Diancie_Text_41:
# 1523 "data/maps/Hub1/scripts.pory"
	.string "Abomasite (¥1000)$"

Hub_Event_Script_Diancie_Text_42:
# 1527 "data/maps/Hub1/scripts.pory"
	.string "Galladite (¥1000)$"

Hub_Event_Script_Diancie_Text_43:
# 1531 "data/maps/Hub1/scripts.pory"
	.string "Clefablite (¥1000)$"

Hub_Event_Script_Diancie_Text_44:
# 1535 "data/maps/Hub1/scripts.pory"
	.string "Victreebelite (¥1000)$"

Hub_Event_Script_Diancie_Text_45:
# 1539 "data/maps/Hub1/scripts.pory"
	.string "Starminite (¥1000)$"

Hub_Event_Script_Diancie_Text_46:
# 1543 "data/maps/Hub1/scripts.pory"
	.string "Dragoninite (¥1000)$"

Hub_Event_Script_Diancie_Text_47:
# 1547 "data/maps/Hub1/scripts.pory"
	.string "Meganiumite (¥1000)$"

Hub_Event_Script_Diancie_Text_48:
# 1551 "data/maps/Hub1/scripts.pory"
	.string "Feraligite (¥1000)$"

Hub_Event_Script_Diancie_Text_49:
# 1555 "data/maps/Hub1/scripts.pory"
	.string "Skarmorite (¥1000)$"

Hub_Event_Script_Diancie_Text_50:
# 1559 "data/maps/Hub1/scripts.pory"
	.string "Froslassite (¥1000)$"

Hub_Event_Script_Diancie_Text_51:
# 1563 "data/maps/Hub1/scripts.pory"
	.string "Emboarite (¥1000)$"

Hub_Event_Script_Diancie_Text_52:
# 1567 "data/maps/Hub1/scripts.pory"
	.string "Excadrite (¥1000)$"

Hub_Event_Script_Diancie_Text_53:
# 1571 "data/maps/Hub1/scripts.pory"
	.string "Scolipite (¥1000)$"

Hub_Event_Script_Diancie_Text_54:
# 1575 "data/maps/Hub1/scripts.pory"
	.string "Scraftinite (¥1000)$"

Hub_Event_Script_Diancie_Text_55:
# 1579 "data/maps/Hub1/scripts.pory"
	.string "Eelektrossite (¥1000)$"

Hub_Event_Script_Diancie_Text_56:
# 1583 "data/maps/Hub1/scripts.pory"
	.string "Chandelurite (¥1000)$"

Hub_Event_Script_Diancie_Text_57:
# 1587 "data/maps/Hub1/scripts.pory"
	.string "Chesnaughtite (¥1000)$"

Hub_Event_Script_Diancie_Text_58:
# 1591 "data/maps/Hub1/scripts.pory"
	.string "Delphoxite (¥1000)$"

Hub_Event_Script_Diancie_Text_59:
# 1595 "data/maps/Hub1/scripts.pory"
	.string "Greninjite (¥1000)$"

Hub_Event_Script_Diancie_Text_60:
# 1599 "data/maps/Hub1/scripts.pory"
	.string "Pyroarite (¥1000)$"

Hub_Event_Script_Diancie_Text_61:
# 1603 "data/maps/Hub1/scripts.pory"
	.string "Malamarite (¥1000)$"

Hub_Event_Script_Diancie_Text_62:
# 1607 "data/maps/Hub1/scripts.pory"
	.string "Barbaracite (¥1000)$"

Hub_Event_Script_Diancie_Text_63:
# 1611 "data/maps/Hub1/scripts.pory"
	.string "Dragalgite (¥1000)$"

Hub_Event_Script_Diancie_Text_64:
# 1615 "data/maps/Hub1/scripts.pory"
	.string "Hawluchanite (¥1000)$"

Hub_Event_Script_Diancie_Text_65:
# 1619 "data/maps/Hub1/scripts.pory"
	.string "Drampanite (¥1000)$"

Hub_Event_Script_Diancie_Text_66:
# 1623 "data/maps/Hub1/scripts.pory"
	.string "Falinksite (¥1000)$"

Hub_Event_Script_Diancie_Text_67:
# 1627 "data/maps/Hub1/scripts.pory"
	.string "Raichunite X (¥1000)$"

Hub_Event_Script_Diancie_Text_68:
# 1631 "data/maps/Hub1/scripts.pory"
	.string "Raichunite Y (¥1000)$"

Hub_Event_Script_Diancie_Text_69:
# 1635 "data/maps/Hub1/scripts.pory"
	.string "Chimechite (¥1000)$"

Hub_Event_Script_Diancie_Text_70:
# 1639 "data/maps/Hub1/scripts.pory"
	.string "Staraptite (¥1000)$"

Hub_Event_Script_Diancie_Text_71:
# 1643 "data/maps/Hub1/scripts.pory"
	.string "Golurkite (¥1000)$"

Hub_Event_Script_Diancie_Text_72:
# 1647 "data/maps/Hub1/scripts.pory"
	.string "Meowsticite (¥1000)$"

Hub_Event_Script_Diancie_Text_73:
# 1651 "data/maps/Hub1/scripts.pory"
	.string "Crabominite (¥1000)$"

Hub_Event_Script_Diancie_Text_74:
# 1655 "data/maps/Hub1/scripts.pory"
	.string "Golisopite (¥1000)$"

Hub_Event_Script_Diancie_Text_75:
# 1659 "data/maps/Hub1/scripts.pory"
	.string "Scovillainite (¥1000)$"

Hub_Event_Script_Diancie_Text_76:
# 1663 "data/maps/Hub1/scripts.pory"
	.string "Glimmoranite (¥1000)$"

Hub_Event_Script_Diancie_Text_77:
# 1667 "data/maps/Hub1/scripts.pory"
	.string "Baxcalibrite (¥1000)$"

Hub_Event_Script_Diancie_Text_78:
# 1674 "data/maps/Hub1/scripts.pory"
	.string "Hello! Good news! I have a new\n"
	.string "Mega Stone in stock!\l"
	.string "Please take a look!$"

Hub_Event_Script_Diancie_Text_79:
# 1680 "data/maps/Hub1/scripts.pory"
	.string "Hello! Would you like to\nbuy a Mega Stone?$"

Hub_Event_Script_Diancie_Text_80:
# 1694 "data/maps/Hub1/scripts.pory"
	.string "You got a Venusaurite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_81:
# 1697 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry, but you don't have the\n coins for that right now.$"

Hub_Event_Script_Diancie_Text_82:
# 1709 "data/maps/Hub1/scripts.pory"
	.string "You got a Charizardite Y as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_83:
# 1724 "data/maps/Hub1/scripts.pory"
	.string "You got a Blastoisinite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_84:
# 1739 "data/maps/Hub1/scripts.pory"
	.string "You got a Beedrillite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_85:
# 1754 "data/maps/Hub1/scripts.pory"
	.string "You got a Pidgeotite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_86:
# 1769 "data/maps/Hub1/scripts.pory"
	.string "You got an Alakazite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_87:
# 1784 "data/maps/Hub1/scripts.pory"
	.string "You got a Slowbronite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_88:
# 1799 "data/maps/Hub1/scripts.pory"
	.string "You got a Gengarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_89:
# 1814 "data/maps/Hub1/scripts.pory"
	.string "You got a Kangaskhanite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_90:
# 1829 "data/maps/Hub1/scripts.pory"
	.string "You got a Pinsirite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_91:
# 1844 "data/maps/Hub1/scripts.pory"
	.string "You got a Gyaradosite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_92:
# 1859 "data/maps/Hub1/scripts.pory"
	.string "You got an Aerodactylite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_93:
# 1874 "data/maps/Hub1/scripts.pory"
	.string "You got an Ampharosite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_94:
# 1889 "data/maps/Hub1/scripts.pory"
	.string "You got a Steelixite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_95:
# 1904 "data/maps/Hub1/scripts.pory"
	.string "You got a Scizorite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_96:
# 1919 "data/maps/Hub1/scripts.pory"
	.string "You got a Heracronite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_97:
# 1934 "data/maps/Hub1/scripts.pory"
	.string "You got a Houndoominite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_98:
# 1949 "data/maps/Hub1/scripts.pory"
	.string "You got a Tyranitarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_99:
# 1964 "data/maps/Hub1/scripts.pory"
	.string "You got a Sceptilite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_100:
# 1979 "data/maps/Hub1/scripts.pory"
	.string "You got a Blazikenite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_101:
# 1994 "data/maps/Hub1/scripts.pory"
	.string "You got a Swampertite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_102:
# 2009 "data/maps/Hub1/scripts.pory"
	.string "You got a Gardevoirite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_103:
# 2024 "data/maps/Hub1/scripts.pory"
	.string "You got a Sablenite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_104:
# 2039 "data/maps/Hub1/scripts.pory"
	.string "You got a Mawilite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_105:
# 2054 "data/maps/Hub1/scripts.pory"
	.string "You got an Aggronite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_106:
# 2069 "data/maps/Hub1/scripts.pory"
	.string "You got a Medichamite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_107:
# 2084 "data/maps/Hub1/scripts.pory"
	.string "You got a Manectite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_108:
# 2099 "data/maps/Hub1/scripts.pory"
	.string "You got a Sharpedonite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_109:
# 2114 "data/maps/Hub1/scripts.pory"
	.string "You got a Cameruptite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_110:
# 2129 "data/maps/Hub1/scripts.pory"
	.string "You got an Altarianite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_111:
# 2144 "data/maps/Hub1/scripts.pory"
	.string "You got a Banettite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_112:
# 2159 "data/maps/Hub1/scripts.pory"
	.string "You got an Absolite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_113:
# 2174 "data/maps/Hub1/scripts.pory"
	.string "You got a Glalitite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_114:
# 2189 "data/maps/Hub1/scripts.pory"
	.string "You got a Salamencite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_115:
# 2204 "data/maps/Hub1/scripts.pory"
	.string "You got a Lopunnite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_116:
# 2219 "data/maps/Hub1/scripts.pory"
	.string "You got a Garchompite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_117:
# 2234 "data/maps/Hub1/scripts.pory"
	.string "You got a Lucarionite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_118:
# 2249 "data/maps/Hub1/scripts.pory"
	.string "You got an Abomasite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_119:
# 2264 "data/maps/Hub1/scripts.pory"
	.string "You got a Galladite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_120:
# 2279 "data/maps/Hub1/scripts.pory"
	.string "You got a Clefablite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_121:
# 2294 "data/maps/Hub1/scripts.pory"
	.string "You got a Victreebelite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_122:
# 2309 "data/maps/Hub1/scripts.pory"
	.string "You got a Starminite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_123:
# 2324 "data/maps/Hub1/scripts.pory"
	.string "You got a Dragoninite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_124:
# 2339 "data/maps/Hub1/scripts.pory"
	.string "You got a Meganiumite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_125:
# 2354 "data/maps/Hub1/scripts.pory"
	.string "You got a Feraligite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_126:
# 2369 "data/maps/Hub1/scripts.pory"
	.string "You got a Skarmorite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_127:
# 2384 "data/maps/Hub1/scripts.pory"
	.string "You got a Froslassite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_128:
# 2399 "data/maps/Hub1/scripts.pory"
	.string "You got an Emboarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_129:
# 2414 "data/maps/Hub1/scripts.pory"
	.string "You got an Excadrite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_130:
# 2429 "data/maps/Hub1/scripts.pory"
	.string "You got a Scolipite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_131:
# 2444 "data/maps/Hub1/scripts.pory"
	.string "You got a Scraftinite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_132:
# 2459 "data/maps/Hub1/scripts.pory"
	.string "You got an Eelektrossite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_133:
# 2474 "data/maps/Hub1/scripts.pory"
	.string "You got a Chandelurite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_134:
# 2489 "data/maps/Hub1/scripts.pory"
	.string "You got a Chesnaughtite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_135:
# 2504 "data/maps/Hub1/scripts.pory"
	.string "You got a Delphoxite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_136:
# 2519 "data/maps/Hub1/scripts.pory"
	.string "You got a Greninjite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_137:
# 2534 "data/maps/Hub1/scripts.pory"
	.string "You got a Pyroarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_138:
# 2549 "data/maps/Hub1/scripts.pory"
	.string "You got a Malamarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_139:
# 2564 "data/maps/Hub1/scripts.pory"
	.string "You got a Barbaracite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_140:
# 2579 "data/maps/Hub1/scripts.pory"
	.string "You got a Dragalgite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_141:
# 2594 "data/maps/Hub1/scripts.pory"
	.string "You got a Hawluchanite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_142:
# 2609 "data/maps/Hub1/scripts.pory"
	.string "You got a Drampanite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_143:
# 2624 "data/maps/Hub1/scripts.pory"
	.string "You got a Falinksite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_144:
# 2639 "data/maps/Hub1/scripts.pory"
	.string "You got a Raichunite X as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_145:
# 2654 "data/maps/Hub1/scripts.pory"
	.string "You got a Raichunite Y as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_146:
# 2669 "data/maps/Hub1/scripts.pory"
	.string "You got a Chimechite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_147:
# 2684 "data/maps/Hub1/scripts.pory"
	.string "You got a Staraptite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_148:
# 2699 "data/maps/Hub1/scripts.pory"
	.string "You got a Golurkite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_149:
# 2714 "data/maps/Hub1/scripts.pory"
	.string "You got a Meowsticite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_150:
# 2729 "data/maps/Hub1/scripts.pory"
	.string "You got a Crabominite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_151:
# 2744 "data/maps/Hub1/scripts.pory"
	.string "You got a Golisopite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_152:
# 2759 "data/maps/Hub1/scripts.pory"
	.string "You got a Scovillainite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_153:
# 2774 "data/maps/Hub1/scripts.pory"
	.string "You got a Glimmoranite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_154:
# 2789 "data/maps/Hub1/scripts.pory"
	.string "You got a Baxcalibrite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_155:
# 2796 "data/maps/Hub1/scripts.pory"
	.string "I don't have anything on sale right now,\n"
	.string "sorry.\p"
	.string "Try doing more runs and getting far\n"
	.string "with new pokemon!$"

Hub_Event_Script_Chimecho_Text_0:
# 2812 "data/maps/Hub1/scripts.pory"
	.string "Heya. I sell starter charms.\n"
	.string "But I'm not open just yet.\l"
	.string "Try playing some more runs first, chim!$"

Hub_Event_Script_Chimecho_Text_1:
# 2820 "data/maps/Hub1/scripts.pory"
	.string "Ding! Would you like to\nbuy a starter TM?$"

Hub_Event_Script_Chimecho_Text_2:
# 2822 "data/maps/Hub1/scripts.pory"
	.string "TM Rock Smash (¥8000)$"

Hub_Event_Script_Chimecho_Text_3:
# 2839 "data/maps/Hub1/scripts.pory"
	.string "You got TM Noble Roar as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Chimecho_Text_4:
# 2842 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry. You don't have the coins to\nbuy that item, kec.$"

Hub_Event_Script_Chimecho_Text_5:
# 2854 "data/maps/Hub1/scripts.pory"
	.string "You got TM Rock Smash as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Chimecho_Text_6:
# 2869 "data/maps/Hub1/scripts.pory"
	.string "You got TM Swift as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Chimecho_Text_7:
# 2884 "data/maps/Hub1/scripts.pory"
	.string "You got TM Cut as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Chimecho_Text_8:
# 2899 "data/maps/Hub1/scripts.pory"
	.string "You got TM Charm as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Chimecho_Text_9:
# 2914 "data/maps/Hub1/scripts.pory"
	.string "You got TM Fake Tears as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Chimecho_Text_10:
# 2929 "data/maps/Hub1/scripts.pory"
	.string "You got TM Confuse Ray as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Chimecho_Text_11:
# 2944 "data/maps/Hub1/scripts.pory"
	.string "You got TM Thunder Wave as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Chimecho_Text_12:
# 2959 "data/maps/Hub1/scripts.pory"
	.string "You got TM Will O Wisp as a starter\nitem!\pThank you for your purchase!$"

Hub_Event_Script_Chimecho_Text_13:
# 2974 "data/maps/Hub1/scripts.pory"
	.string "You got TM Toxic as a starter\nitem!\pThank you for your purchase!$"

GiveStarterCharm_Text_0:
# 3012 "data/maps/Hub1/scripts.pory"
	.string "Shiny Starter Charm$"

GiveStarterCharm_Text_1:
# 3015 "data/maps/Hub1/scripts.pory"
	.string "Lump Sum Charm$"

GiveStarterCharm_Text_2:
# 3018 "data/maps/Hub1/scripts.pory"
	.string "Berry Pack Charm$"

GiveStarterCharm_Text_3:
# 3041 "data/maps/Hub1/scripts.pory"
	.string "Good luck on your run!$"
