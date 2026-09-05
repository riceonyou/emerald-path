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
	goto_if_set FLAG_GIVE_MINTY_CHARM_MINT, AfterWarpIntoNewAct_7
AfterWarpIntoNewAct_6:
# 31 "data/maps/Hub1/scripts.pory"
	compare VAR_CURRENT_ACT, 0
	goto_if_eq AfterWarpIntoNewAct_10
AfterWarpIntoNewAct_9:
# 52 "data/maps/Hub1/scripts.pory"
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

AfterWarpIntoNewAct_7:
# 24 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_1
# 25 "data/maps/Hub1/scripts.pory"
	randomelement ITEM_LONELY_MINT, ITEM_ADAMANT_MINT, ITEM_NAUGHTY_MINT, ITEM_BRAVE_MINT, ITEM_BOLD_MINT, ITEM_IMPISH_MINT, ITEM_LAX_MINT, ITEM_RELAXED_MINT, ITEM_MODEST_MINT, ITEM_MILD_MINT, ITEM_RASH_MINT, ITEM_QUIET_MINT, ITEM_CALM_MINT, ITEM_GENTLE_MINT, ITEM_CAREFUL_MINT, ITEM_SASSY_MINT, ITEM_SERIOUS_MINT
# 26 "data/maps/Hub1/scripts.pory"
	giveitem VAR_RESULT
# 27 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_GIVE_MINTY_CHARM_MINT
	goto AfterWarpIntoNewAct_6

AfterWarpIntoNewAct_10:
# 33 "data/maps/Hub1/scripts.pory"
	compare VAR_COINS_COLLECTED_IN_A_RUN, 0
	goto_if_gt AfterWarpIntoNewAct_13
AfterWarpIntoNewAct_12:
# 39 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MINTY_CHARM_STARTER_UNLOCKED, AfterWarpIntoNewAct_17
AfterWarpIntoNewAct_15:
# 43 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TINTED_CHARM_STARTER_UNLOCKED, AfterWarpIntoNewAct_22
AfterWarpIntoNewAct_20:
# 47 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_NORMAL_CHARM_STARTER_UNLOCKED, AfterWarpIntoNewAct_26
	goto AfterWarpIntoNewAct_9

AfterWarpIntoNewAct_13:
# 34 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_COINS_COLLECTED_IN_A_RUN
# 35 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_2
	goto AfterWarpIntoNewAct_12

AfterWarpIntoNewAct_16:
# 40 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MINTY_CHARM_STARTER_UNLOCKED
# 41 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_3
	goto AfterWarpIntoNewAct_15

AfterWarpIntoNewAct_17:
# 39 "data/maps/Hub1/scripts.pory"
	compare VAR_TOTAL_RUNS, 0
	goto_if_gt AfterWarpIntoNewAct_16
	goto AfterWarpIntoNewAct_15

AfterWarpIntoNewAct_21:
# 44 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TINTED_CHARM_STARTER_UNLOCKED
# 45 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_4
	goto AfterWarpIntoNewAct_20

AfterWarpIntoNewAct_22:
# 43 "data/maps/Hub1/scripts.pory"
	compare VAR_TOTAL_RUNS, 3
	goto_if_gt AfterWarpIntoNewAct_21
	goto AfterWarpIntoNewAct_20

AfterWarpIntoNewAct_25:
# 48 "data/maps/Hub1/scripts.pory"
	setflag FLAG_NORMAL_CHARM_STARTER_UNLOCKED
# 49 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_5
	goto AfterWarpIntoNewAct_9

AfterWarpIntoNewAct_26:
# 47 "data/maps/Hub1/scripts.pory"
	compare VAR_TOTAL_RUNS, 6
	goto_if_gt AfterWarpIntoNewAct_25
	goto AfterWarpIntoNewAct_9


GiveCommonItem::
# 58 "data/maps/Hub1/scripts.pory"
	special BufferCommonItem
# 59 "data/maps/Hub1/scripts.pory"
	giveitem VAR_RESULT
	return


GiveUncommonItem::
# 63 "data/maps/Hub1/scripts.pory"
	special BufferUncommonItem
# 64 "data/maps/Hub1/scripts.pory"
	giveitem VAR_RESULT
	return


GiveRareItem::
# 68 "data/maps/Hub1/scripts.pory"
	special BufferRareItem
# 69 "data/maps/Hub1/scripts.pory"
	giveitem VAR_RESULT
	return


Act1BirchBag::
# 73 "data/maps/Hub1/scripts.pory"
	playse SE_CLICK
# 74 "data/maps/Hub1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 75 "data/maps/Hub1/scripts.pory"
	setvar VAR_0x8000, 33
# 76 "data/maps/Hub1/scripts.pory"
	special LoadBirchBagPoolById
# 77 "data/maps/Hub1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 78 "data/maps/Hub1/scripts.pory"
	waitstate
# 79 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_EVOLVED
# 80 "data/maps/Hub1/scripts.pory"
	msgbox Act1BirchBag_Text_0
	return


Act2BirchBag::
# 83 "data/maps/Hub1/scripts.pory"
	playse SE_CLICK
# 84 "data/maps/Hub1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 85 "data/maps/Hub1/scripts.pory"
	setvar VAR_0x8000, 34
# 86 "data/maps/Hub1/scripts.pory"
	special LoadBirchBagPoolById
# 87 "data/maps/Hub1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 88 "data/maps/Hub1/scripts.pory"
	waitstate
# 89 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_EVOLVED
# 90 "data/maps/Hub1/scripts.pory"
	msgbox Act1BirchBag_Text_0
	return


Act3BirchBag::
# 93 "data/maps/Hub1/scripts.pory"
	playse SE_CLICK
# 94 "data/maps/Hub1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 95 "data/maps/Hub1/scripts.pory"
	setvar VAR_0x8000, 35
# 96 "data/maps/Hub1/scripts.pory"
	special LoadBirchBagPoolById
# 97 "data/maps/Hub1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 98 "data/maps/Hub1/scripts.pory"
	waitstate
# 99 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_EVOLVED
# 100 "data/maps/Hub1/scripts.pory"
	msgbox Act1BirchBag_Text_0
	return


AbraTeleport::
# 104 "data/maps/Hub1/scripts.pory"
	lockall
# 105 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_DEFEATED_PATH_LEADER, AbraTeleport_1
# 110 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_1, MSGBOX_YESNO
# 111 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 112 "data/maps/Hub1/scripts.pory"
	case YES, AbraTeleport_5
# 116 "data/maps/Hub1/scripts.pory"
	case NO, AbraTeleport_6
	return

AbraTeleport_1:
# 106 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_0
# 107 "data/maps/Hub1/scripts.pory"
	releaseall
	return

AbraTeleport_5:
# 113 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_2
# 114 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_DEFEATED_PATH_LEADER
# 115 "data/maps/Hub1/scripts.pory"
	special WarpToNextAncient
	return

AbraTeleport_6:
# 117 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_3
# 118 "data/maps/Hub1/scripts.pory"
	releaseall
	return


RivalFight1::
# 124 "data/maps/Hub1/scripts.pory"
	switch VAR_CURRENT_RIVAL
# 125 "data/maps/Hub1/scripts.pory"
	case 0, RivalFight1_2
# 130 "data/maps/Hub1/scripts.pory"
	case 1, RivalFight1_3
	return

RivalFight1_2:
# 126 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_TREECKO, RivalFight1_Text_0, RivalFight1_Text_1
# 127 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight1_Text_2, MSGBOX_AUTOCLOSE
# 128 "data/maps/Hub1/scripts.pory"
	waitmessage
	end

RivalFight1_3:
# 131 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_TORCHIC, RivalFight1_Text_3, RivalFight1_Text_1
# 132 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight1_Text_2, MSGBOX_AUTOCLOSE
# 133 "data/maps/Hub1/scripts.pory"
	waitmessage
	end


RivalFight2::
# 139 "data/maps/Hub1/scripts.pory"
	switch VAR_CURRENT_RIVAL
# 140 "data/maps/Hub1/scripts.pory"
	case 0, RivalFight2_2
# 145 "data/maps/Hub1/scripts.pory"
	case 1, RivalFight2_3
	return

RivalFight2_2:
# 141 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_GROVYLE, RivalFight1_Text_0, RivalFight1_Text_1
# 142 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight1_Text_2, MSGBOX_AUTOCLOSE
# 143 "data/maps/Hub1/scripts.pory"
	waitmessage
	end

RivalFight2_3:
# 146 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_COMBUSKEN, RivalFight1_Text_3, RivalFight1_Text_1
# 147 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight1_Text_2, MSGBOX_AUTOCLOSE
# 148 "data/maps/Hub1/scripts.pory"
	waitmessage
	end


RivalFight3::
# 154 "data/maps/Hub1/scripts.pory"
	switch VAR_CURRENT_RIVAL
# 155 "data/maps/Hub1/scripts.pory"
	case 0, RivalFight3_2
# 160 "data/maps/Hub1/scripts.pory"
	case 1, RivalFight3_3
	return

RivalFight3_2:
# 156 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_SCEPTILE, RivalFight1_Text_0, RivalFight1_Text_1
# 157 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight1_Text_2, MSGBOX_AUTOCLOSE
# 158 "data/maps/Hub1/scripts.pory"
	waitmessage
	end

RivalFight3_3:
# 161 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_BLAZIKEN, RivalFight1_Text_3, RivalFight1_Text_1
# 162 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight1_Text_2, MSGBOX_AUTOCLOSE
# 163 "data/maps/Hub1/scripts.pory"
	waitmessage
	end


RivalFight4::
# 169 "data/maps/Hub1/scripts.pory"
	switch VAR_CURRENT_RIVAL
# 170 "data/maps/Hub1/scripts.pory"
	case 0, RivalFight4_2
# 175 "data/maps/Hub1/scripts.pory"
	case 1, RivalFight4_3
	return

RivalFight4_2:
# 171 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_MEGASCEPTILE, RivalFight1_Text_0, RivalFight1_Text_1
# 172 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight1_Text_2, MSGBOX_AUTOCLOSE
# 173 "data/maps/Hub1/scripts.pory"
	waitmessage
	end

RivalFight4_3:
# 176 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_MBLAZIKEN, RivalFight1_Text_3, RivalFight1_Text_1
# 177 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight1_Text_2, MSGBOX_AUTOCLOSE
# 178 "data/maps/Hub1/scripts.pory"
	waitmessage
	end


HUB1_Run_Stats_Sign::
# 190 "data/maps/Hub1/scripts.pory"
	lockall
# 192 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TOTAL_RUNS
# 193 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_ACT1_WINS
# 194 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_ACT2_WINS
# 195 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_Run_Stats_Sign_Text_0
# 196 "data/maps/Hub1/scripts.pory"
	waitmessage
# 198 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_ACT3_WINS
# 199 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_ACT4_WINS
# 200 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_ACT2_WINS
# 201 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_Run_Stats_Sign_Text_1
# 202 "data/maps/Hub1/scripts.pory"
	waitmessage
# 204 "data/maps/Hub1/scripts.pory"
	releaseall
	return


HUB1_ONWARP::
# 208 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


HUB1_ONFRAME::
# 212 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_2, 1
# 213 "data/maps/Hub1/scripts.pory"
	call AfterWarpIntoNewAct
# 216 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SYS_NEW_GAME, HUB1_ONFRAME_1
	return

HUB1_ONFRAME_1:
# 217 "data/maps/Hub1/scripts.pory"
	lockall
# 220 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SYS_NEW_GAME
# 221 "data/maps/Hub1/scripts.pory"
	setvar VAR_SHINY_RATE, 4096
# 222 "data/maps/Hub1/scripts.pory"
	setvar VAR_LEVEL_CAP, 14
# 225 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_ONFRAME_Text_0
# 228 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_1, SPECIES_BULBASAUR
# 229 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_2, SPECIES_CHARMANDER
# 230 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_3, SPECIES_SQUIRTLE
# 231 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_4, SPECIES_CHIKORITA
# 232 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_5, SPECIES_CYNDAQUIL
# 233 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_6, SPECIES_TOTODILE
# 234 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_7, SPECIES_TREECKO
# 235 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_8, SPECIES_TORCHIC
# 236 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_9, SPECIES_MUDKIP
# 237 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_10, SPECIES_TURTWIG
# 238 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_11, SPECIES_CHIMCHAR
# 239 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_12, SPECIES_PIPLUP
# 240 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_13, SPECIES_SNIVY
# 241 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_14, SPECIES_TEPIG
# 242 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_15, SPECIES_OSHAWOTT
# 243 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_16, SPECIES_CHESPIN
# 244 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_17, SPECIES_FENNEKIN
# 245 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_18, SPECIES_FROAKIE
# 246 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_19, SPECIES_ROWLET
# 247 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_20, SPECIES_LITTEN
# 248 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_21, SPECIES_POPPLIO
# 249 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_22, SPECIES_GROOKEY
# 250 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_23, SPECIES_SCORBUNNY
# 251 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_24, SPECIES_SOBBLE
# 252 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_25, SPECIES_SPRIGATITO
# 253 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_26, SPECIES_FUECOCO
# 254 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_27, SPECIES_QUAXLY
# 255 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 257 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 258 "data/maps/Hub1/scripts.pory"
	case SPECIES_BULBASAUR, HUB1_ONFRAME_5
# 262 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHARMANDER, HUB1_ONFRAME_6
# 266 "data/maps/Hub1/scripts.pory"
	case SPECIES_SQUIRTLE, HUB1_ONFRAME_7
# 270 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIKORITA, HUB1_ONFRAME_8
# 274 "data/maps/Hub1/scripts.pory"
	case SPECIES_CYNDAQUIL, HUB1_ONFRAME_9
# 278 "data/maps/Hub1/scripts.pory"
	case SPECIES_TOTODILE, HUB1_ONFRAME_10
# 282 "data/maps/Hub1/scripts.pory"
	case SPECIES_TREECKO, HUB1_ONFRAME_11
# 286 "data/maps/Hub1/scripts.pory"
	case SPECIES_TORCHIC, HUB1_ONFRAME_12
# 290 "data/maps/Hub1/scripts.pory"
	case SPECIES_MUDKIP, HUB1_ONFRAME_13
# 294 "data/maps/Hub1/scripts.pory"
	case SPECIES_TURTWIG, HUB1_ONFRAME_14
# 298 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIMCHAR, HUB1_ONFRAME_15
# 302 "data/maps/Hub1/scripts.pory"
	case SPECIES_PIPLUP, HUB1_ONFRAME_16
# 306 "data/maps/Hub1/scripts.pory"
	case SPECIES_SNIVY, HUB1_ONFRAME_17
# 310 "data/maps/Hub1/scripts.pory"
	case SPECIES_TEPIG, HUB1_ONFRAME_18
# 314 "data/maps/Hub1/scripts.pory"
	case SPECIES_OSHAWOTT, HUB1_ONFRAME_19
# 318 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHESPIN, HUB1_ONFRAME_20
# 322 "data/maps/Hub1/scripts.pory"
	case SPECIES_FENNEKIN, HUB1_ONFRAME_21
# 326 "data/maps/Hub1/scripts.pory"
	case SPECIES_FROAKIE, HUB1_ONFRAME_22
# 330 "data/maps/Hub1/scripts.pory"
	case SPECIES_ROWLET, HUB1_ONFRAME_23
# 334 "data/maps/Hub1/scripts.pory"
	case SPECIES_LITTEN, HUB1_ONFRAME_24
# 338 "data/maps/Hub1/scripts.pory"
	case SPECIES_POPPLIO, HUB1_ONFRAME_25
# 342 "data/maps/Hub1/scripts.pory"
	case SPECIES_GROOKEY, HUB1_ONFRAME_26
# 346 "data/maps/Hub1/scripts.pory"
	case SPECIES_SCORBUNNY, HUB1_ONFRAME_27
# 350 "data/maps/Hub1/scripts.pory"
	case SPECIES_SOBBLE, HUB1_ONFRAME_28
# 354 "data/maps/Hub1/scripts.pory"
	case SPECIES_SPRIGATITO, HUB1_ONFRAME_29
# 358 "data/maps/Hub1/scripts.pory"
	case SPECIES_FUECOCO, HUB1_ONFRAME_30
# 362 "data/maps/Hub1/scripts.pory"
	case SPECIES_QUAXLY, HUB1_ONFRAME_31
HUB1_ONFRAME_3:
# 367 "data/maps/Hub1/scripts.pory"
	special UpdatePlayerSprite
# 368 "data/maps/Hub1/scripts.pory"
	special UpdateTransformedPlayerPalette
# 369 "data/maps/Hub1/scripts.pory"
	releaseall
# 371 "data/maps/Hub1/scripts.pory"
	lockall
# 372 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_ONFRAME_Text_28
# 373 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CANDY_JAR
# 375 "data/maps/Hub1/scripts.pory"
	releaseall
	return

HUB1_ONFRAME_5:
# 259 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_BULBASAUR, 14
# 260 "data/maps/Hub1/scripts.pory"
	setflag FLAG_BULBASAUR_UNLOCKED
# 261 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_BULBASAUR
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_6:
# 263 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHARMANDER, 14
# 264 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHARMANDER_UNLOCKED
# 265 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHARMANDER
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_7:
# 267 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SQUIRTLE, 14
# 268 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SQUIRTLE_UNLOCKED
# 269 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SQUIRTLE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_8:
# 271 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHIKORITA, 14
# 272 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIKORITA_UNLOCKED
# 273 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHIKORITA
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_9:
# 275 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 14
# 276 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CYNDAQUIL_UNLOCKED
# 277 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CYNDAQUIL
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_10:
# 279 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TOTODILE, 14
# 280 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TOTODILE_UNLOCKED
# 281 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TOTODILE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_11:
# 283 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TREECKO, 14
# 284 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TREECKO_UNLOCKED
# 285 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TREECKO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_12:
# 287 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TORCHIC, 14
# 288 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TORCHIC_UNLOCKED
# 289 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TORCHIC
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_13:
# 291 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_MUDKIP, 14
# 292 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MUDKIP_UNLOCKED
# 293 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_MUDKIP
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_14:
# 295 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TURTWIG, 14
# 296 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TURTWIG_UNLOCKED
# 297 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TURTWIG
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_15:
# 299 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHIMCHAR, 14
# 300 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIMCHAR_UNLOCKED
# 301 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHIMCHAR
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_16:
# 303 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_PIPLUP, 14
# 304 "data/maps/Hub1/scripts.pory"
	setflag FLAG_PIPLUP_UNLOCKED
# 305 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_PIPLUP
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_17:
# 307 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SNIVY, 14
# 308 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SNIVY_UNLOCKED
# 309 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SNIVY
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_18:
# 311 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TEPIG, 14
# 312 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TEPIG_UNLOCKED
# 313 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TEPIG
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_19:
# 315 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_OSHAWOTT, 14
# 316 "data/maps/Hub1/scripts.pory"
	setflag FLAG_OSHAWOTT_UNLOCKED
# 317 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_OSHAWOTT
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_20:
# 319 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHESPIN, 14
# 320 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHESPIN_UNLOCKED
# 321 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHESPIN
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_21:
# 323 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FENNEKIN, 14
# 324 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FENNEKIN_UNLOCKED
# 325 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_FENNEKIN
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_22:
# 327 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FROAKIE, 14
# 328 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FROAKIE_UNLOCKED
# 329 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_FROAKIE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_23:
# 331 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_ROWLET, 14
# 332 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ROWLET_UNLOCKED
# 333 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_ROWLET
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_24:
# 335 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_LITTEN, 14
# 336 "data/maps/Hub1/scripts.pory"
	setflag FLAG_LITTEN_UNLOCKED
# 337 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_LITTEN
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_25:
# 339 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_POPPLIO, 14
# 340 "data/maps/Hub1/scripts.pory"
	setflag FLAG_POPPLIO_UNLOCKED
# 341 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_POPPLIO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_26:
# 343 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_GROOKEY, 14
# 344 "data/maps/Hub1/scripts.pory"
	setflag FLAG_GROOKEY_UNLOCKED
# 345 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_GROOKEY
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_27:
# 347 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SCORBUNNY, 14
# 348 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SCORBUNNY_UNLOCKED
# 349 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SCORBUNNY
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_28:
# 351 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SOBBLE, 14
# 352 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SOBBLE_UNLOCKED
# 353 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SOBBLE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_29:
# 355 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SPRIGATITO, 14
# 356 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SPRIGATITO_UNLOCKED
# 357 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SPRIGATITO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_30:
# 359 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FUECOCO, 14
# 360 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FUECOCO_UNLOCKED
# 361 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_FUECOCO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_31:
# 363 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_QUAXLY, 14
# 364 "data/maps/Hub1/scripts.pory"
	setflag FLAG_QUAXLY_UNLOCKED
# 365 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_QUAXLY
	goto HUB1_ONFRAME_3


Hub_Event_Script_Birch::
# 380 "data/maps/Hub1/scripts.pory"
	lockall
# 381 "data/maps/Hub1/scripts.pory"
	faceplayer
# 382 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_0, MSGBOX_YESNO
# 383 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 384 "data/maps/Hub1/scripts.pory"
	case YES, Hub_Event_Script_Birch_2
# 407 "data/maps/Hub1/scripts.pory"
	case NO, Hub_Event_Script_Birch_3
	return

Hub_Event_Script_Birch_2:
# 385 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_1
# 386 "data/maps/Hub1/scripts.pory"
	closemessage
# 387 "data/maps/Hub1/scripts.pory"
	applymovement Chimecho, Hub_Event_Script_Birch_Movement_0
# 391 "data/maps/Hub1/scripts.pory"
	waitmovement
# 392 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_2
# 393 "data/maps/Hub1/scripts.pory"
	call GiveStarterCharm
# 394 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_3
# 395 "data/maps/Hub1/scripts.pory"
	closemessage
# 396 "data/maps/Hub1/scripts.pory"
	applymovement Birch, Hub_Event_Script_Birch_Movement_1
# 401 "data/maps/Hub1/scripts.pory"
	waitmovement
# 402 "data/maps/Hub1/scripts.pory"
	applymovement LOCALID_PLAYER, Hub_Event_Script_Birch_Movement_2
# 405 "data/maps/Hub1/scripts.pory"
	waitmovement
# 406 "data/maps/Hub1/scripts.pory"
	special WarpToNextAct
	return

Hub_Event_Script_Birch_3:
# 408 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_3
# 409 "data/maps/Hub1/scripts.pory"
	releaseall
	return


Hub_Event_Script_Miltank::
# 414 "data/maps/Hub1/scripts.pory"
	lockall
# 415 "data/maps/Hub1/scripts.pory"
	faceplayer
# 416 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 418 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_BULBASAUR_UNLOCKED, Hub_Event_Script_Miltank_2
Hub_Event_Script_Miltank_1:
# 419 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHARMANDER_UNLOCKED, Hub_Event_Script_Miltank_5
Hub_Event_Script_Miltank_4:
# 420 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SQUIRTLE_UNLOCKED, Hub_Event_Script_Miltank_8
Hub_Event_Script_Miltank_7:
# 421 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHIKORITA_UNLOCKED, Hub_Event_Script_Miltank_11
Hub_Event_Script_Miltank_10:
# 422 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CYNDAQUIL_UNLOCKED, Hub_Event_Script_Miltank_14
Hub_Event_Script_Miltank_13:
# 423 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TOTODILE_UNLOCKED, Hub_Event_Script_Miltank_17
Hub_Event_Script_Miltank_16:
# 424 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TREECKO_UNLOCKED, Hub_Event_Script_Miltank_20
Hub_Event_Script_Miltank_19:
# 425 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TORCHIC_UNLOCKED, Hub_Event_Script_Miltank_23
Hub_Event_Script_Miltank_22:
# 426 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MUDKIP_UNLOCKED, Hub_Event_Script_Miltank_26
Hub_Event_Script_Miltank_25:
# 427 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TURTWIG_UNLOCKED, Hub_Event_Script_Miltank_29
Hub_Event_Script_Miltank_28:
# 428 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHIMCHAR_UNLOCKED, Hub_Event_Script_Miltank_32
Hub_Event_Script_Miltank_31:
# 429 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_PIPLUP_UNLOCKED, Hub_Event_Script_Miltank_35
Hub_Event_Script_Miltank_34:
# 430 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SNIVY_UNLOCKED, Hub_Event_Script_Miltank_38
Hub_Event_Script_Miltank_37:
# 431 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TEPIG_UNLOCKED, Hub_Event_Script_Miltank_41
Hub_Event_Script_Miltank_40:
# 432 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_OSHAWOTT_UNLOCKED, Hub_Event_Script_Miltank_44
Hub_Event_Script_Miltank_43:
# 433 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHESPIN_UNLOCKED, Hub_Event_Script_Miltank_47
Hub_Event_Script_Miltank_46:
# 434 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FENNEKIN_UNLOCKED, Hub_Event_Script_Miltank_50
Hub_Event_Script_Miltank_49:
# 435 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FROAKIE_UNLOCKED, Hub_Event_Script_Miltank_53
Hub_Event_Script_Miltank_52:
# 436 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ROWLET_UNLOCKED, Hub_Event_Script_Miltank_56
Hub_Event_Script_Miltank_55:
# 437 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_LITTEN_UNLOCKED, Hub_Event_Script_Miltank_59
Hub_Event_Script_Miltank_58:
# 438 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_POPPLIO_UNLOCKED, Hub_Event_Script_Miltank_62
Hub_Event_Script_Miltank_61:
# 439 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_GROOKEY_UNLOCKED, Hub_Event_Script_Miltank_65
Hub_Event_Script_Miltank_64:
# 440 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SCORBUNNY_UNLOCKED, Hub_Event_Script_Miltank_68
Hub_Event_Script_Miltank_67:
# 441 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SOBBLE_UNLOCKED, Hub_Event_Script_Miltank_71
Hub_Event_Script_Miltank_70:
# 442 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SPRIGATITO_UNLOCKED, Hub_Event_Script_Miltank_74
Hub_Event_Script_Miltank_73:
# 443 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FUECOCO_UNLOCKED, Hub_Event_Script_Miltank_77
Hub_Event_Script_Miltank_76:
# 444 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_QUAXLY_UNLOCKED, Hub_Event_Script_Miltank_80
Hub_Event_Script_Miltank_79:
# 446 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Miltank_82
# 781 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_56
# 782 "data/maps/Hub1/scripts.pory"
	waitmessage
# 783 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Miltank_2:
# 418 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_0, SPECIES_BULBASAUR
# 418 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_1

Hub_Event_Script_Miltank_5:
# 419 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_1, SPECIES_CHARMANDER
# 419 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_4

Hub_Event_Script_Miltank_8:
# 420 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_2, SPECIES_SQUIRTLE
# 420 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_7

Hub_Event_Script_Miltank_11:
# 421 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_3, SPECIES_CHIKORITA
# 421 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_10

Hub_Event_Script_Miltank_14:
# 422 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_4, SPECIES_CYNDAQUIL
# 422 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_13

Hub_Event_Script_Miltank_17:
# 423 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_5, SPECIES_TOTODILE
# 423 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_16

Hub_Event_Script_Miltank_20:
# 424 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_6, SPECIES_TREECKO
# 424 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_19

Hub_Event_Script_Miltank_23:
# 425 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_7, SPECIES_TORCHIC
# 425 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_22

Hub_Event_Script_Miltank_26:
# 426 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_8, SPECIES_MUDKIP
# 426 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_25

Hub_Event_Script_Miltank_29:
# 427 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_9, SPECIES_TURTWIG
# 427 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_28

Hub_Event_Script_Miltank_32:
# 428 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_10, SPECIES_CHIMCHAR
# 428 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_31

Hub_Event_Script_Miltank_35:
# 429 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_11, SPECIES_PIPLUP
# 429 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_34

Hub_Event_Script_Miltank_38:
# 430 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_12, SPECIES_SNIVY
# 430 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_37

Hub_Event_Script_Miltank_41:
# 431 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_13, SPECIES_TEPIG
# 431 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_40

Hub_Event_Script_Miltank_44:
# 432 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_14, SPECIES_OSHAWOTT
# 432 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_43

Hub_Event_Script_Miltank_47:
# 433 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_15, SPECIES_CHESPIN
# 433 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_46

Hub_Event_Script_Miltank_50:
# 434 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_16, SPECIES_FENNEKIN
# 434 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_49

Hub_Event_Script_Miltank_53:
# 435 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_17, SPECIES_FROAKIE
# 435 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_52

Hub_Event_Script_Miltank_56:
# 436 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_18, SPECIES_ROWLET
# 436 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_55

Hub_Event_Script_Miltank_59:
# 437 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_19, SPECIES_LITTEN
# 437 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_58

Hub_Event_Script_Miltank_62:
# 438 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_20, SPECIES_POPPLIO
# 438 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_61

Hub_Event_Script_Miltank_65:
# 439 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_21, SPECIES_GROOKEY
# 439 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_64

Hub_Event_Script_Miltank_68:
# 440 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_22, SPECIES_SCORBUNNY
# 440 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_67

Hub_Event_Script_Miltank_71:
# 441 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_23, SPECIES_SOBBLE
# 441 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_70

Hub_Event_Script_Miltank_74:
# 442 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_24, SPECIES_SPRIGATITO
# 442 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_73

Hub_Event_Script_Miltank_77:
# 443 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_25, SPECIES_FUECOCO
# 443 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_76

Hub_Event_Script_Miltank_80:
# 444 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_26, SPECIES_QUAXLY
# 444 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_79

Hub_Event_Script_Miltank_82:
# 447 "data/maps/Hub1/scripts.pory"
	showcoinsbox 21, 11
# 448 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_27
# 449 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 450 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 451 "data/maps/Hub1/scripts.pory"
	case MULTI_B_PRESSED, Hub_Event_Script_Miltank_87
# 453 "data/maps/Hub1/scripts.pory"
	case SPECIES_BULBASAUR, Hub_Event_Script_Miltank_88
# 465 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHARMANDER, Hub_Event_Script_Miltank_89
# 477 "data/maps/Hub1/scripts.pory"
	case SPECIES_SQUIRTLE, Hub_Event_Script_Miltank_90
# 489 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIKORITA, Hub_Event_Script_Miltank_91
# 501 "data/maps/Hub1/scripts.pory"
	case SPECIES_CYNDAQUIL, Hub_Event_Script_Miltank_92
# 513 "data/maps/Hub1/scripts.pory"
	case SPECIES_TOTODILE, Hub_Event_Script_Miltank_93
# 525 "data/maps/Hub1/scripts.pory"
	case SPECIES_TREECKO, Hub_Event_Script_Miltank_94
# 537 "data/maps/Hub1/scripts.pory"
	case SPECIES_TORCHIC, Hub_Event_Script_Miltank_95
# 549 "data/maps/Hub1/scripts.pory"
	case SPECIES_MUDKIP, Hub_Event_Script_Miltank_96
# 561 "data/maps/Hub1/scripts.pory"
	case SPECIES_TURTWIG, Hub_Event_Script_Miltank_97
# 573 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIMCHAR, Hub_Event_Script_Miltank_98
# 585 "data/maps/Hub1/scripts.pory"
	case SPECIES_PIPLUP, Hub_Event_Script_Miltank_99
# 597 "data/maps/Hub1/scripts.pory"
	case SPECIES_SNIVY, Hub_Event_Script_Miltank_100
# 609 "data/maps/Hub1/scripts.pory"
	case SPECIES_TEPIG, Hub_Event_Script_Miltank_101
# 621 "data/maps/Hub1/scripts.pory"
	case SPECIES_OSHAWOTT, Hub_Event_Script_Miltank_102
# 633 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHESPIN, Hub_Event_Script_Miltank_103
# 645 "data/maps/Hub1/scripts.pory"
	case SPECIES_FENNEKIN, Hub_Event_Script_Miltank_104
# 657 "data/maps/Hub1/scripts.pory"
	case SPECIES_FROAKIE, Hub_Event_Script_Miltank_105
# 669 "data/maps/Hub1/scripts.pory"
	case SPECIES_ROWLET, Hub_Event_Script_Miltank_106
# 681 "data/maps/Hub1/scripts.pory"
	case SPECIES_LITTEN, Hub_Event_Script_Miltank_107
# 693 "data/maps/Hub1/scripts.pory"
	case SPECIES_POPPLIO, Hub_Event_Script_Miltank_108
# 705 "data/maps/Hub1/scripts.pory"
	case SPECIES_GROOKEY, Hub_Event_Script_Miltank_109
# 717 "data/maps/Hub1/scripts.pory"
	case SPECIES_SCORBUNNY, Hub_Event_Script_Miltank_110
# 729 "data/maps/Hub1/scripts.pory"
	case SPECIES_SOBBLE, Hub_Event_Script_Miltank_111
# 741 "data/maps/Hub1/scripts.pory"
	case SPECIES_SPRIGATITO, Hub_Event_Script_Miltank_112
# 753 "data/maps/Hub1/scripts.pory"
	case SPECIES_FUECOCO, Hub_Event_Script_Miltank_113
# 765 "data/maps/Hub1/scripts.pory"
	case SPECIES_QUAXLY, Hub_Event_Script_Miltank_114
Hub_Event_Script_Miltank_85:
# 778 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
# 779 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Miltank_87:
# 452 "data/maps/Hub1/scripts.pory"
	releaseall
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_88:
# 454 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 455 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_115
# 463 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_89:
# 466 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 467 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_118
# 475 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_90:
# 478 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 479 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_121
# 487 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_91:
# 490 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 491 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_124
# 499 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_92:
# 502 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 503 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_127
# 511 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_93:
# 514 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 515 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_130
# 523 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_94:
# 526 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 527 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_133
# 535 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_95:
# 538 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 539 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_136
# 547 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_96:
# 550 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 551 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_139
# 559 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_97:
# 562 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 563 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_142
# 571 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_98:
# 574 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 575 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_145
# 583 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_99:
# 586 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 587 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_148
# 595 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_100:
# 598 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 599 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_151
# 607 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_101:
# 610 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 611 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_154
# 619 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_102:
# 622 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 623 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_157
# 631 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_103:
# 634 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 635 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_160
# 643 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_104:
# 646 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 647 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_163
# 655 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_105:
# 658 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 659 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_166
# 667 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_106:
# 670 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 671 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_169
# 679 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_107:
# 682 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 683 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_172
# 691 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_108:
# 694 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 695 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_175
# 703 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_109:
# 706 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 707 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_178
# 715 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_110:
# 718 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 719 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_181
# 727 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_111:
# 730 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 731 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_184
# 739 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_112:
# 742 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 743 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_187
# 751 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_113:
# 754 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 755 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_190
# 763 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_114:
# 766 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 767 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_193
# 775 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_115:
# 456 "data/maps/Hub1/scripts.pory"
	setflag FLAG_BULBASAUR_UNLOCKED
# 457 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 458 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 459 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 460 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_28
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_118:
# 468 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHARMANDER_UNLOCKED
# 469 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 470 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 471 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 472 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_121:
# 480 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SQUIRTLE_UNLOCKED
# 481 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 482 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 483 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 484 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_31
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_124:
# 492 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIKORITA_UNLOCKED
# 493 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 494 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 495 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 496 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_32
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_127:
# 504 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CYNDAQUIL_UNLOCKED
# 505 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 506 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 507 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 508 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_33
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_130:
# 516 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TOTODILE_UNLOCKED
# 517 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 518 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 519 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 520 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_34
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_133:
# 528 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TREECKO_UNLOCKED
# 529 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 530 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 531 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 532 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_35
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_136:
# 540 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TORCHIC_UNLOCKED
# 541 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 542 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 543 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 544 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_36
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_139:
# 552 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MUDKIP_UNLOCKED
# 553 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 554 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 555 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 556 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_37
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_142:
# 564 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TURTWIG_UNLOCKED
# 565 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 566 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 567 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 568 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_38
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_145:
# 576 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIMCHAR_UNLOCKED
# 577 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 578 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 579 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 580 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_39
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_148:
# 588 "data/maps/Hub1/scripts.pory"
	setflag FLAG_PIPLUP_UNLOCKED
# 589 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 590 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 591 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 592 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_40
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_151:
# 600 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SNIVY_UNLOCKED
# 601 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 602 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 603 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 604 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_41
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_154:
# 612 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TEPIG_UNLOCKED
# 613 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 614 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 615 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 616 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_42
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_157:
# 624 "data/maps/Hub1/scripts.pory"
	setflag FLAG_OSHAWOTT_UNLOCKED
# 625 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 626 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 627 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 628 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_43
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_160:
# 636 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHESPIN_UNLOCKED
# 637 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 638 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 639 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 640 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_44
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_163:
# 648 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FENNEKIN_UNLOCKED
# 649 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 650 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 651 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 652 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_45
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_166:
# 660 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FROAKIE_UNLOCKED
# 661 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 662 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 663 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 664 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_46
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_169:
# 672 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ROWLET_UNLOCKED
# 673 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 674 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 675 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 676 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_47
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_172:
# 684 "data/maps/Hub1/scripts.pory"
	setflag FLAG_LITTEN_UNLOCKED
# 685 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 686 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 687 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 688 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_48
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_175:
# 696 "data/maps/Hub1/scripts.pory"
	setflag FLAG_POPPLIO_UNLOCKED
# 697 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 698 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 699 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 700 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_49
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_178:
# 708 "data/maps/Hub1/scripts.pory"
	setflag FLAG_GROOKEY_UNLOCKED
# 709 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 710 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 711 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 712 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_50
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_181:
# 720 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SCORBUNNY_UNLOCKED
# 721 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 722 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 723 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 724 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_51
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_184:
# 732 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SOBBLE_UNLOCKED
# 733 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 734 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 735 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 736 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_52
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_187:
# 744 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SPRIGATITO_UNLOCKED
# 745 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 746 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 747 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 748 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_53
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_190:
# 756 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FUECOCO_UNLOCKED
# 757 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 758 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 759 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 760 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_54
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_193:
# 768 "data/maps/Hub1/scripts.pory"
	setflag FLAG_QUAXLY_UNLOCKED
# 769 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 770 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 771 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 772 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_55
	goto Hub_Event_Script_Miltank_85


Hub_Event_Script_Chansey::
# 789 "data/maps/Hub1/scripts.pory"
	lockall
# 790 "data/maps/Hub1/scripts.pory"
	faceplayer
# 791 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 792 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_BULBASAUR_UNLOCKED, Hub_Event_Script_Chansey_3
Hub_Event_Script_Chansey_1:
# 793 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHARMANDER_UNLOCKED, Hub_Event_Script_Chansey_8
Hub_Event_Script_Chansey_6:
# 794 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SQUIRTLE_UNLOCKED, Hub_Event_Script_Chansey_13
Hub_Event_Script_Chansey_11:
# 795 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHIKORITA_UNLOCKED, Hub_Event_Script_Chansey_18
Hub_Event_Script_Chansey_16:
# 796 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CYNDAQUIL_UNLOCKED, Hub_Event_Script_Chansey_23
Hub_Event_Script_Chansey_21:
# 797 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TOTODILE_UNLOCKED, Hub_Event_Script_Chansey_28
Hub_Event_Script_Chansey_26:
# 798 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TREECKO_UNLOCKED, Hub_Event_Script_Chansey_33
Hub_Event_Script_Chansey_31:
# 799 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TORCHIC_UNLOCKED, Hub_Event_Script_Chansey_38
Hub_Event_Script_Chansey_36:
# 800 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_MUDKIP_UNLOCKED, Hub_Event_Script_Chansey_43
Hub_Event_Script_Chansey_41:
# 801 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TURTWIG_UNLOCKED, Hub_Event_Script_Chansey_48
Hub_Event_Script_Chansey_46:
# 802 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHIMCHAR_UNLOCKED, Hub_Event_Script_Chansey_53
Hub_Event_Script_Chansey_51:
# 803 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_PIPLUP_UNLOCKED, Hub_Event_Script_Chansey_58
Hub_Event_Script_Chansey_56:
# 804 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SNIVY_UNLOCKED, Hub_Event_Script_Chansey_63
Hub_Event_Script_Chansey_61:
# 805 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TEPIG_UNLOCKED, Hub_Event_Script_Chansey_68
Hub_Event_Script_Chansey_66:
# 806 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_OSHAWOTT_UNLOCKED, Hub_Event_Script_Chansey_73
Hub_Event_Script_Chansey_71:
# 807 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHESPIN_UNLOCKED, Hub_Event_Script_Chansey_78
Hub_Event_Script_Chansey_76:
# 808 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FENNEKIN_UNLOCKED, Hub_Event_Script_Chansey_83
Hub_Event_Script_Chansey_81:
# 809 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FROAKIE_UNLOCKED, Hub_Event_Script_Chansey_88
Hub_Event_Script_Chansey_86:
# 810 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ROWLET_UNLOCKED, Hub_Event_Script_Chansey_93
Hub_Event_Script_Chansey_91:
# 811 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_LITTEN_UNLOCKED, Hub_Event_Script_Chansey_98
Hub_Event_Script_Chansey_96:
# 812 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_POPPLIO_UNLOCKED, Hub_Event_Script_Chansey_103
Hub_Event_Script_Chansey_101:
# 813 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_GROOKEY_UNLOCKED, Hub_Event_Script_Chansey_108
Hub_Event_Script_Chansey_106:
# 814 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SCORBUNNY_UNLOCKED, Hub_Event_Script_Chansey_113
Hub_Event_Script_Chansey_111:
# 815 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SOBBLE_UNLOCKED, Hub_Event_Script_Chansey_118
Hub_Event_Script_Chansey_116:
# 816 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPRIGATITO_UNLOCKED, Hub_Event_Script_Chansey_123
Hub_Event_Script_Chansey_121:
# 817 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FUECOCO_UNLOCKED, Hub_Event_Script_Chansey_128
Hub_Event_Script_Chansey_126:
# 818 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_QUAXLY_UNLOCKED, Hub_Event_Script_Chansey_133
Hub_Event_Script_Chansey_131:
# 820 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Chansey_136
# 843 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_2
# 844 "data/maps/Hub1/scripts.pory"
	waitmessage
# 845 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Chansey_2:
# 792 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_1, SPECIES_BULBASAUR
# 792 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_1

Hub_Event_Script_Chansey_3:
# 792 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_BULBASAUR
	goto_if_ne Hub_Event_Script_Chansey_2
	goto Hub_Event_Script_Chansey_1

Hub_Event_Script_Chansey_7:
# 793 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_2, SPECIES_CHARMANDER
# 793 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_6

Hub_Event_Script_Chansey_8:
# 793 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHARMANDER
	goto_if_ne Hub_Event_Script_Chansey_7
	goto Hub_Event_Script_Chansey_6

Hub_Event_Script_Chansey_12:
# 794 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_3, SPECIES_SQUIRTLE
# 794 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_11

Hub_Event_Script_Chansey_13:
# 794 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SQUIRTLE
	goto_if_ne Hub_Event_Script_Chansey_12
	goto Hub_Event_Script_Chansey_11

Hub_Event_Script_Chansey_17:
# 795 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_4, SPECIES_CHIKORITA
# 795 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_16

Hub_Event_Script_Chansey_18:
# 795 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHIKORITA
	goto_if_ne Hub_Event_Script_Chansey_17
	goto Hub_Event_Script_Chansey_16

Hub_Event_Script_Chansey_22:
# 796 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_5, SPECIES_CYNDAQUIL
# 796 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_21

Hub_Event_Script_Chansey_23:
# 796 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CYNDAQUIL
	goto_if_ne Hub_Event_Script_Chansey_22
	goto Hub_Event_Script_Chansey_21

Hub_Event_Script_Chansey_27:
# 797 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_6, SPECIES_TOTODILE
# 797 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_26

Hub_Event_Script_Chansey_28:
# 797 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TOTODILE
	goto_if_ne Hub_Event_Script_Chansey_27
	goto Hub_Event_Script_Chansey_26

Hub_Event_Script_Chansey_32:
# 798 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_7, SPECIES_TREECKO
# 798 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_31

Hub_Event_Script_Chansey_33:
# 798 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TREECKO
	goto_if_ne Hub_Event_Script_Chansey_32
	goto Hub_Event_Script_Chansey_31

Hub_Event_Script_Chansey_37:
# 799 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_8, SPECIES_TORCHIC
# 799 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_36

Hub_Event_Script_Chansey_38:
# 799 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TORCHIC
	goto_if_ne Hub_Event_Script_Chansey_37
	goto Hub_Event_Script_Chansey_36

Hub_Event_Script_Chansey_42:
# 800 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_9, SPECIES_MUDKIP
# 800 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_41

Hub_Event_Script_Chansey_43:
# 800 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_MUDKIP
	goto_if_ne Hub_Event_Script_Chansey_42
	goto Hub_Event_Script_Chansey_41

Hub_Event_Script_Chansey_47:
# 801 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_10, SPECIES_TURTWIG
# 801 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_46

Hub_Event_Script_Chansey_48:
# 801 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TURTWIG
	goto_if_ne Hub_Event_Script_Chansey_47
	goto Hub_Event_Script_Chansey_46

Hub_Event_Script_Chansey_52:
# 802 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_11, SPECIES_CHIMCHAR
# 802 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_51

Hub_Event_Script_Chansey_53:
# 802 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHIMCHAR
	goto_if_ne Hub_Event_Script_Chansey_52
	goto Hub_Event_Script_Chansey_51

Hub_Event_Script_Chansey_57:
# 803 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_12, SPECIES_PIPLUP
# 803 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_56

Hub_Event_Script_Chansey_58:
# 803 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_PIPLUP
	goto_if_ne Hub_Event_Script_Chansey_57
	goto Hub_Event_Script_Chansey_56

Hub_Event_Script_Chansey_62:
# 804 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_13, SPECIES_SNIVY
# 804 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_61

Hub_Event_Script_Chansey_63:
# 804 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SNIVY
	goto_if_ne Hub_Event_Script_Chansey_62
	goto Hub_Event_Script_Chansey_61

Hub_Event_Script_Chansey_67:
# 805 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_14, SPECIES_TEPIG
# 805 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_66

Hub_Event_Script_Chansey_68:
# 805 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TEPIG
	goto_if_ne Hub_Event_Script_Chansey_67
	goto Hub_Event_Script_Chansey_66

Hub_Event_Script_Chansey_72:
# 806 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_15, SPECIES_OSHAWOTT
# 806 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_71

Hub_Event_Script_Chansey_73:
# 806 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_OSHAWOTT
	goto_if_ne Hub_Event_Script_Chansey_72
	goto Hub_Event_Script_Chansey_71

Hub_Event_Script_Chansey_77:
# 807 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_16, SPECIES_CHESPIN
# 807 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_76

Hub_Event_Script_Chansey_78:
# 807 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHESPIN
	goto_if_ne Hub_Event_Script_Chansey_77
	goto Hub_Event_Script_Chansey_76

Hub_Event_Script_Chansey_82:
# 808 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_17, SPECIES_FENNEKIN
# 808 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_81

Hub_Event_Script_Chansey_83:
# 808 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FENNEKIN
	goto_if_ne Hub_Event_Script_Chansey_82
	goto Hub_Event_Script_Chansey_81

Hub_Event_Script_Chansey_87:
# 809 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_18, SPECIES_FROAKIE
# 809 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_86

Hub_Event_Script_Chansey_88:
# 809 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FROAKIE
	goto_if_ne Hub_Event_Script_Chansey_87
	goto Hub_Event_Script_Chansey_86

Hub_Event_Script_Chansey_92:
# 810 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_19, SPECIES_ROWLET
# 810 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_91

Hub_Event_Script_Chansey_93:
# 810 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_ROWLET
	goto_if_ne Hub_Event_Script_Chansey_92
	goto Hub_Event_Script_Chansey_91

Hub_Event_Script_Chansey_97:
# 811 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_20, SPECIES_LITTEN
# 811 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_96

Hub_Event_Script_Chansey_98:
# 811 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_LITTEN
	goto_if_ne Hub_Event_Script_Chansey_97
	goto Hub_Event_Script_Chansey_96

Hub_Event_Script_Chansey_102:
# 812 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_21, SPECIES_POPPLIO
# 812 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_101

Hub_Event_Script_Chansey_103:
# 812 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_POPPLIO
	goto_if_ne Hub_Event_Script_Chansey_102
	goto Hub_Event_Script_Chansey_101

Hub_Event_Script_Chansey_107:
# 813 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_22, SPECIES_GROOKEY
# 813 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_106

Hub_Event_Script_Chansey_108:
# 813 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_GROOKEY
	goto_if_ne Hub_Event_Script_Chansey_107
	goto Hub_Event_Script_Chansey_106

Hub_Event_Script_Chansey_112:
# 814 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_23, SPECIES_SCORBUNNY
# 814 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_111

Hub_Event_Script_Chansey_113:
# 814 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SCORBUNNY
	goto_if_ne Hub_Event_Script_Chansey_112
	goto Hub_Event_Script_Chansey_111

Hub_Event_Script_Chansey_117:
# 815 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_24, SPECIES_SOBBLE
# 815 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_116

Hub_Event_Script_Chansey_118:
# 815 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SOBBLE
	goto_if_ne Hub_Event_Script_Chansey_117
	goto Hub_Event_Script_Chansey_116

Hub_Event_Script_Chansey_122:
# 816 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_25, SPECIES_SPRIGATITO
# 816 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_121

Hub_Event_Script_Chansey_123:
# 816 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SPRIGATITO
	goto_if_ne Hub_Event_Script_Chansey_122
	goto Hub_Event_Script_Chansey_121

Hub_Event_Script_Chansey_127:
# 817 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_26, SPECIES_FUECOCO
# 817 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_126

Hub_Event_Script_Chansey_128:
# 817 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FUECOCO
	goto_if_ne Hub_Event_Script_Chansey_127
	goto Hub_Event_Script_Chansey_126

Hub_Event_Script_Chansey_132:
# 818 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_27, SPECIES_QUAXLY
# 818 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_131

Hub_Event_Script_Chansey_133:
# 818 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_QUAXLY
	goto_if_ne Hub_Event_Script_Chansey_132
	goto Hub_Event_Script_Chansey_131

Hub_Event_Script_Chansey_136:
# 821 "data/maps/Hub1/scripts.pory"
	setvar VAR_RESULT, 0
# 822 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_0
# 823 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 825 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_ne Hub_Event_Script_Chansey_139
# 840 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Chansey_139:
# 826 "data/maps/Hub1/scripts.pory"
	copyvar VAR_STARTER_MON, VAR_RESULT
# 827 "data/maps/Hub1/scripts.pory"
	special ZeroPlayerPartyMons
# 828 "data/maps/Hub1/scripts.pory"
	special GiveSavedStarter
# 829 "data/maps/Hub1/scripts.pory"
	special UpdatePlayerSprite
# 830 "data/maps/Hub1/scripts.pory"
	special UpdateTransformedPlayerPalette
# 831 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 832 "data/maps/Hub1/scripts.pory"
	releaseall
# 833 "data/maps/Hub1/scripts.pory"
	lockall
# 834 "data/maps/Hub1/scripts.pory"
	playse SE_SUCCESS
# 835 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_1
# 836 "data/maps/Hub1/scripts.pory"
	waitmessage
# 837 "data/maps/Hub1/scripts.pory"
	releaseall
	return


KecShop_Sign::
# 849 "data/maps/Hub1/scripts.pory"
	lockall
# 850 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Sign_Text_0
# 851 "data/maps/Hub1/scripts.pory"
	waitmessage
# 852 "data/maps/Hub1/scripts.pory"
	releaseall
	return


KecShop::
# 856 "data/maps/Hub1/scripts.pory"
	lockall
# 857 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Sign_Text_0
# 858 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_0, ITEM_ORAN_BERRY
# 859 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_LUM_BERRY_BUYABLE, KecShop_2
KecShop_1:
# 862 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_2, ITEM_MEMORY_MUSHROOM
# 863 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_RARE_CANDY_BUYABLE, KecShop_5
KecShop_4:
# 866 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SERIOUS_MINT_BUYABLE, KecShop_8
KecShop_7:
# 870 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne KecShop_11
# 932 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_7
# 933 "data/maps/Hub1/scripts.pory"
	waitmessage
# 934 "data/maps/Hub1/scripts.pory"
	releaseall
KecShop_10:
# 936 "data/maps/Hub1/scripts.pory"
	releaseall
	return

KecShop_2:
# 860 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_1, ITEM_LUM_BERRY
	goto KecShop_1

KecShop_5:
# 864 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_3, ITEM_RARE_CANDY
	goto KecShop_4

KecShop_8:
# 867 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_4, ITEM_SERIOUS_MINT
	goto KecShop_7

KecShop_11:
# 871 "data/maps/Hub1/scripts.pory"
	showmoneybox 18, 10
# 872 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 873 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 874 "data/maps/Hub1/scripts.pory"
	case ITEM_ORAN_BERRY, KecShop_16
# 885 "data/maps/Hub1/scripts.pory"
	case ITEM_LUM_BERRY, KecShop_17
# 896 "data/maps/Hub1/scripts.pory"
	case ITEM_SERIOUS_MINT, KecShop_18
# 907 "data/maps/Hub1/scripts.pory"
	case ITEM_MEMORY_MUSHROOM, KecShop_19
# 918 "data/maps/Hub1/scripts.pory"
	case ITEM_RARE_CANDY, KecShop_20
KecShop_14:
# 930 "data/maps/Hub1/scripts.pory"
	hidemoneybox
	goto KecShop_10

KecShop_16:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_21
# 883 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_14

KecShop_17:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_24
# 894 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_14

KecShop_18:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_27
# 905 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_14

KecShop_19:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_30
# 916 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_14

KecShop_20:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_33
# 927 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_14

KecShop_21:
# 876 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 877 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 878 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 879 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ORAN_BERRY
# 880 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_14

KecShop_24:
# 887 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 888 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 889 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 890 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUM_BERRY
# 891 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_14

KecShop_27:
# 898 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 899 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 900 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 901 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SERIOUS_MINT
# 902 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_14

KecShop_30:
# 909 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 910 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 911 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 912 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM
# 913 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_14

KecShop_33:
# 920 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 921 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 922 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 923 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 924 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_14


KecShop_Shiny::
# 940 "data/maps/Hub1/scripts.pory"
	lockall
# 941 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Sign_Text_0
# 942 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_ROCK_SMASH_BUYABLE, KecShop_Shiny_2
KecShop_Shiny_1:
# 946 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_SWIFT_BUYABLE, KecShop_Shiny_5
KecShop_Shiny_4:
# 950 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_CUT_BUYABLE, KecShop_Shiny_8
KecShop_Shiny_7:
# 954 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_NOBLE_ROAR_BUYABLE, KecShop_Shiny_11
KecShop_Shiny_10:
# 958 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_CHARM_BUYABLE, KecShop_Shiny_14
KecShop_Shiny_13:
# 962 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_FAKE_TEARS_BUYABLE, KecShop_Shiny_17
KecShop_Shiny_16:
# 966 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_CONFUSE_RAY_BUYABLE, KecShop_Shiny_20
KecShop_Shiny_19:
# 970 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_THUNDER_WAVE_BUYABLE, KecShop_Shiny_23
KecShop_Shiny_22:
# 974 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_WILL_O_WISP_BUYABLE, KecShop_Shiny_26
KecShop_Shiny_25:
# 978 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_TOXIC_BUYABLE, KecShop_Shiny_29
KecShop_Shiny_28:
# 983 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne KecShop_Shiny_32
# 1101 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_7
# 1102 "data/maps/Hub1/scripts.pory"
	waitmessage
# 1103 "data/maps/Hub1/scripts.pory"
	releaseall
KecShop_Shiny_31:
# 1105 "data/maps/Hub1/scripts.pory"
	releaseall
	return

KecShop_Shiny_2:
# 943 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_0, ITEM_TM_ROCK_SMASH
# 944 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_1

KecShop_Shiny_5:
# 947 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_1, ITEM_TM_SWIFT
# 948 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_4

KecShop_Shiny_8:
# 951 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_2, ITEM_TM_CUT
# 952 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_7

KecShop_Shiny_11:
# 955 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_3, ITEM_TM_NOBLE_ROAR
# 956 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_10

KecShop_Shiny_14:
# 959 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_4, ITEM_TM_CHARM
# 960 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_13

KecShop_Shiny_17:
# 963 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_5, ITEM_TM_FAKE_TEARS
# 964 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_16

KecShop_Shiny_20:
# 967 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_6, ITEM_TM_CONFUSE_RAY
# 968 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_19

KecShop_Shiny_23:
# 971 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_7, ITEM_TM_THUNDER_WAVE
# 972 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_22

KecShop_Shiny_26:
# 975 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_8, ITEM_TM_WILL_O_WISP
# 976 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_25

KecShop_Shiny_29:
# 979 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_9, ITEM_TM_TOXIC
# 980 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_28

KecShop_Shiny_32:
# 984 "data/maps/Hub1/scripts.pory"
	showmoneybox 18, 10
# 985 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 986 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 987 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_NOBLE_ROAR, KecShop_Shiny_37
# 998 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ROCK_SMASH, KecShop_Shiny_38
# 1009 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SWIFT, KecShop_Shiny_39
# 1020 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CUT, KecShop_Shiny_40
# 1031 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CHARM, KecShop_Shiny_41
# 1042 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_FAKE_TEARS, KecShop_Shiny_42
# 1053 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CONFUSE_RAY, KecShop_Shiny_43
# 1064 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_THUNDER_WAVE, KecShop_Shiny_44
# 1075 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_WILL_O_WISP, KecShop_Shiny_45
# 1086 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_TOXIC, KecShop_Shiny_46
KecShop_Shiny_35:
# 1099 "data/maps/Hub1/scripts.pory"
	hidemoneybox
	goto KecShop_Shiny_31

KecShop_Shiny_37:
	checkmoney 400
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_47
# 996 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_Shiny_35

KecShop_Shiny_38:
	checkmoney 400
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_50
# 1007 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_Shiny_35

KecShop_Shiny_39:
	checkmoney 400
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_53
# 1018 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_Shiny_35

KecShop_Shiny_40:
	checkmoney 400
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_56
# 1029 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_Shiny_35

KecShop_Shiny_41:
	checkmoney 400
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_59
# 1040 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_Shiny_35

KecShop_Shiny_42:
	checkmoney 400
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_62
# 1051 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_Shiny_35

KecShop_Shiny_43:
	checkmoney 400
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_65
# 1062 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_Shiny_35

KecShop_Shiny_44:
	checkmoney 400
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_68
# 1073 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_Shiny_35

KecShop_Shiny_45:
	checkmoney 400
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_71
# 1084 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_Shiny_35

KecShop_Shiny_46:
	checkmoney 400
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_74
# 1095 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_6
	goto KecShop_Shiny_35

KecShop_Shiny_47:
# 989 "data/maps/Hub1/scripts.pory"
	removemoney 400
# 990 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 991 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 992 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_NOBLE_ROAR
# 993 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_Shiny_35

KecShop_Shiny_50:
# 1000 "data/maps/Hub1/scripts.pory"
	removemoney 400
# 1001 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1002 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1003 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_ROCK_SMASH
# 1004 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_Shiny_35

KecShop_Shiny_53:
# 1011 "data/maps/Hub1/scripts.pory"
	removemoney 400
# 1012 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1013 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1014 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SWIFT
# 1015 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_Shiny_35

KecShop_Shiny_56:
# 1022 "data/maps/Hub1/scripts.pory"
	removemoney 400
# 1023 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1024 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1025 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CUT
# 1026 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_Shiny_35

KecShop_Shiny_59:
# 1033 "data/maps/Hub1/scripts.pory"
	removemoney 400
# 1034 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1035 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1036 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CHARM
# 1037 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_Shiny_35

KecShop_Shiny_62:
# 1044 "data/maps/Hub1/scripts.pory"
	removemoney 400
# 1045 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1046 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1047 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_FAKE_TEARS
# 1048 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_Shiny_35

KecShop_Shiny_65:
# 1055 "data/maps/Hub1/scripts.pory"
	removemoney 400
# 1056 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1057 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1058 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CONFUSE_RAY
# 1059 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_Shiny_35

KecShop_Shiny_68:
# 1066 "data/maps/Hub1/scripts.pory"
	removemoney 400
# 1067 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1068 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1069 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_THUNDER_WAVE
# 1070 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_Shiny_35

KecShop_Shiny_71:
# 1077 "data/maps/Hub1/scripts.pory"
	removemoney 400
# 1078 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1079 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1080 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_WILL_O_WISP
# 1081 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_Shiny_35

KecShop_Shiny_74:
# 1088 "data/maps/Hub1/scripts.pory"
	removemoney 400
# 1089 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1090 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1091 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_TOXIC
# 1092 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_5
	goto KecShop_Shiny_35


Hub_Event_Script_Kecleon::
# 1109 "data/maps/Hub1/scripts.pory"
	lockall
# 1110 "data/maps/Hub1/scripts.pory"
	faceplayer
# 1111 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1112 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_0
# 1113 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED, Hub_Event_Script_Kecleon_2
Hub_Event_Script_Kecleon_1:
# 1118 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_LUM_BERRY_UNLOCKED, Hub_Event_Script_Kecleon_5
Hub_Event_Script_Kecleon_4:
# 1123 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SERIOUS_MINT_UNLOCKED, Hub_Event_Script_Kecleon_8
Hub_Event_Script_Kecleon_7:
# 1128 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_IV_BOTTLE_CAPS_UNLOCKED, Hub_Event_Script_Kecleon_11
Hub_Event_Script_Kecleon_10:
# 1133 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_IV_GOLD_BOTTLE_CAPS_UNLOCKED, Hub_Event_Script_Kecleon_14
Hub_Event_Script_Kecleon_13:
# 1138 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_POCKET_BIRCH_BAG_UNLOCKED, Hub_Event_Script_Kecleon_17
Hub_Event_Script_Kecleon_16:
# 1144 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Kecleon_20
# 1234 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_11
# 1235 "data/maps/Hub1/scripts.pory"
	waitmessage
# 1236 "data/maps/Hub1/scripts.pory"
	releaseall
Hub_Event_Script_Kecleon_19:
# 1238 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
# 1239 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Kecleon_2:
# 1114 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_3, ITEM_RARE_CANDY
# 1115 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_5:
# 1119 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_1, ITEM_LUM_BERRY
# 1120 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_4

Hub_Event_Script_Kecleon_8:
# 1124 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_4, ITEM_SERIOUS_MINT
# 1125 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_7

Hub_Event_Script_Kecleon_11:
# 1129 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_1, ITEM_HP_BOTTLE_CAP
# 1130 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_10

Hub_Event_Script_Kecleon_14:
# 1134 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_2, ITEM_HP_GOLD_BOTTLE_CAP
# 1135 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_13

Hub_Event_Script_Kecleon_17:
# 1139 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_3, ITEM_POCKET_BIRCH_BAG
# 1140 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_16

Hub_Event_Script_Kecleon_20:
# 1145 "data/maps/Hub1/scripts.pory"
	showcoinsbox 21, 11
# 1146 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 1147 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 1148 "data/maps/Hub1/scripts.pory"
	case ITEM_LUM_BERRY, Hub_Event_Script_Kecleon_24
# 1162 "data/maps/Hub1/scripts.pory"
	case ITEM_SERIOUS_MINT, Hub_Event_Script_Kecleon_25
# 1176 "data/maps/Hub1/scripts.pory"
	case ITEM_RARE_CANDY, Hub_Event_Script_Kecleon_26
# 1190 "data/maps/Hub1/scripts.pory"
	case ITEM_HP_BOTTLE_CAP, Hub_Event_Script_Kecleon_27
# 1204 "data/maps/Hub1/scripts.pory"
	case ITEM_HP_GOLD_BOTTLE_CAP, Hub_Event_Script_Kecleon_28
# 1218 "data/maps/Hub1/scripts.pory"
	case ITEM_POCKET_BIRCH_BAG, Hub_Event_Script_Kecleon_29
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_24:
# 1149 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_LUM_BERRY_UNLOCKED, Hub_Event_Script_Kecleon_30
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_25:
# 1163 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SERIOUS_MINT_UNLOCKED, Hub_Event_Script_Kecleon_32
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_26:
# 1177 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED, Hub_Event_Script_Kecleon_34
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_27:
# 1191 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_IV_BOTTLE_CAPS_UNLOCKED, Hub_Event_Script_Kecleon_36
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_28:
# 1205 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_IV_GOLD_BOTTLE_CAPS_UNLOCKED, Hub_Event_Script_Kecleon_38
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_29:
# 1219 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_POCKET_BIRCH_BAG_UNLOCKED, Hub_Event_Script_Kecleon_40
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_30:
# 1150 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1151 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Kecleon_42
# 1159 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_5
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_32:
# 1164 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1165 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_45
# 1173 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_5
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_34:
# 1178 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1179 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_48
# 1187 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_5
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_36:
# 1192 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1193 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_51
# 1201 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_5
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_38:
# 1206 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1207 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_54
# 1215 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_5
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_40:
# 1220 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1221 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_57
# 1229 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_5
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_42:
# 1152 "data/maps/Hub1/scripts.pory"
	setflag FLAG_LUM_BERRY_UNLOCKED
# 1153 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 1154 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1155 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1156 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_4
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_45:
# 1166 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SERIOUS_MINT_UNLOCKED
# 1167 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1168 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1169 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1170 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_6
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_48:
# 1180 "data/maps/Hub1/scripts.pory"
	setflag FLAG_RARE_CANDY_UNLOCKED
# 1181 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1182 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1183 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1184 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_51:
# 1194 "data/maps/Hub1/scripts.pory"
	setflag FLAG_IV_BOTTLE_CAPS_UNLOCKED
# 1195 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1196 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1197 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1198 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_54:
# 1208 "data/maps/Hub1/scripts.pory"
	setflag FLAG_IV_GOLD_BOTTLE_CAPS_UNLOCKED
# 1209 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1210 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1211 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1212 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_9
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_57:
# 1222 "data/maps/Hub1/scripts.pory"
	setflag FLAG_POCKET_BIRCH_BAG_UNLOCKED
# 1223 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1224 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1225 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1226 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_10
	goto Hub_Event_Script_Kecleon_19


Hub_Event_Script_Shiny_Kecleon::
# 1244 "data/maps/Hub1/scripts.pory"
	lockall
# 1245 "data/maps/Hub1/scripts.pory"
	faceplayer
# 1246 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1247 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_0
# 1248 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ROCK_SMASH_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_2
Hub_Event_Script_Shiny_Kecleon_1:
# 1252 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SWIFT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_5
Hub_Event_Script_Shiny_Kecleon_4:
# 1256 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CUT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_8
Hub_Event_Script_Shiny_Kecleon_7:
# 1260 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_NOBLE_ROAR_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_11
Hub_Event_Script_Shiny_Kecleon_10:
# 1264 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CHARM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_14
Hub_Event_Script_Shiny_Kecleon_13:
# 1268 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_FAKE_TEARS_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_17
Hub_Event_Script_Shiny_Kecleon_16:
# 1272 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CONFUSE_RAY_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_20
Hub_Event_Script_Shiny_Kecleon_19:
# 1276 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_THUNDER_WAVE_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_23
Hub_Event_Script_Shiny_Kecleon_22:
# 1280 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_WILL_O_WISP_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_26
Hub_Event_Script_Shiny_Kecleon_25:
# 1284 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_TOXIC_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_29
Hub_Event_Script_Shiny_Kecleon_28:
# 1290 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Shiny_Kecleon_32
# 1438 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_11
# 1439 "data/maps/Hub1/scripts.pory"
	waitmessage
# 1440 "data/maps/Hub1/scripts.pory"
	releaseall
Hub_Event_Script_Shiny_Kecleon_31:
# 1442 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
# 1443 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Shiny_Kecleon_2:
# 1249 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_0, ITEM_TM_ROCK_SMASH
# 1250 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_1

Hub_Event_Script_Shiny_Kecleon_5:
# 1253 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_1, ITEM_TM_SWIFT
# 1254 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_4

Hub_Event_Script_Shiny_Kecleon_8:
# 1257 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_2, ITEM_TM_CUT
# 1258 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_7

Hub_Event_Script_Shiny_Kecleon_11:
# 1261 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_3, ITEM_TM_NOBLE_ROAR
# 1262 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_10

Hub_Event_Script_Shiny_Kecleon_14:
# 1265 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_4, ITEM_TM_CHARM
# 1266 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_13

Hub_Event_Script_Shiny_Kecleon_17:
# 1269 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_5, ITEM_TM_FAKE_TEARS
# 1270 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_16

Hub_Event_Script_Shiny_Kecleon_20:
# 1273 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_6, ITEM_TM_CONFUSE_RAY
# 1274 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_19

Hub_Event_Script_Shiny_Kecleon_23:
# 1277 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_7, ITEM_TM_THUNDER_WAVE
# 1278 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_22

Hub_Event_Script_Shiny_Kecleon_26:
# 1281 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_8, ITEM_TM_WILL_O_WISP
# 1282 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_25

Hub_Event_Script_Shiny_Kecleon_29:
# 1285 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_9, ITEM_TM_TOXIC
# 1286 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_28

Hub_Event_Script_Shiny_Kecleon_32:
# 1291 "data/maps/Hub1/scripts.pory"
	showcoinsbox 21, 11
# 1292 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 1293 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 1294 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_NOBLE_ROAR, Hub_Event_Script_Shiny_Kecleon_36
# 1308 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ROCK_SMASH, Hub_Event_Script_Shiny_Kecleon_37
# 1322 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SWIFT, Hub_Event_Script_Shiny_Kecleon_38
# 1336 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CUT, Hub_Event_Script_Shiny_Kecleon_39
# 1350 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CHARM, Hub_Event_Script_Shiny_Kecleon_40
# 1364 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_FAKE_TEARS, Hub_Event_Script_Shiny_Kecleon_41
# 1378 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CONFUSE_RAY, Hub_Event_Script_Shiny_Kecleon_42
# 1392 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_THUNDER_WAVE, Hub_Event_Script_Shiny_Kecleon_43
# 1406 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_WILL_O_WISP, Hub_Event_Script_Shiny_Kecleon_44
# 1421 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_TOXIC, Hub_Event_Script_Shiny_Kecleon_45
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_36:
# 1295 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_NOBLE_ROAR_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_46
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_37:
# 1309 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ROCK_SMASH_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_48
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_38:
# 1323 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SWIFT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_50
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_39:
# 1337 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CUT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_52
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_40:
# 1351 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CHARM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_54
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_41:
# 1365 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_FAKE_TEARS_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_56
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_42:
# 1379 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CONFUSE_RAY_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_58
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_43:
# 1393 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_THUNDER_WAVE_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_60
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_44:
# 1407 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_WILL_O_WISP_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_62
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_45:
# 1422 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_TOXIC_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_64
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_46:
# 1296 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1297 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 400
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_66
# 1305 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_5
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_48:
# 1310 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1311 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 900
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_69
# 1319 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_5
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_50:
# 1324 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1325 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_72
# 1333 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_5
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_52:
# 1338 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1339 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_75
# 1347 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_5
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_54:
# 1352 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1353 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 400
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_78
# 1361 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_5
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_56:
# 1366 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1367 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 400
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_81
# 1375 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_5
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_58:
# 1380 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1381 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 800
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_84
# 1389 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_5
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_60:
# 1394 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1395 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 800
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_87
# 1403 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_5
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_62:
# 1408 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1409 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 800
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_90
# 1418 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_5
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_64:
# 1423 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1424 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 800
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_93
# 1433 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_5
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_66:
# 1298 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_NOBLE_ROAR_UNLOCKED
# 1299 "data/maps/Hub1/scripts.pory"
	removecoins 400
# 1300 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1301 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1302 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_1
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_69:
# 1312 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_ROCK_SMASH_UNLOCKED
# 1313 "data/maps/Hub1/scripts.pory"
	removecoins 900
# 1314 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1315 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1316 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_2
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_72:
# 1326 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_SWIFT_UNLOCKED
# 1327 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 1328 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1329 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1330 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_3
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_75:
# 1340 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CUT_UNLOCKED
# 1341 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 1342 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1343 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1344 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_4
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_78:
# 1354 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CHARM_UNLOCKED
# 1355 "data/maps/Hub1/scripts.pory"
	removecoins 400
# 1356 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1357 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1358 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_5
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_81:
# 1368 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_FAKE_TEARS_UNLOCKED
# 1369 "data/maps/Hub1/scripts.pory"
	removecoins 400
# 1370 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1371 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1372 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_6
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_84:
# 1382 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CONFUSE_RAY_UNLOCKED
# 1383 "data/maps/Hub1/scripts.pory"
	removecoins 800
# 1384 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1385 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1386 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_87:
# 1396 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_THUNDER_WAVE_UNLOCKED
# 1397 "data/maps/Hub1/scripts.pory"
	removecoins 800
# 1398 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1399 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1400 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_90:
# 1410 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_WILL_O_WISP_UNLOCKED
# 1411 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_WILL_O_WISP, 1
# 1412 "data/maps/Hub1/scripts.pory"
	removecoins 800
# 1413 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1414 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1415 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_9
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_93:
# 1425 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_TOXIC_UNLOCKED
# 1426 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_TOXIC, 1
# 1427 "data/maps/Hub1/scripts.pory"
	removecoins 800
# 1428 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1429 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1430 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_10
	goto Hub_Event_Script_Shiny_Kecleon_31


Hub_Event_Script_Diancie::
# 1448 "data/maps/Hub1/scripts.pory"
	lockall
# 1449 "data/maps/Hub1/scripts.pory"
	faceplayer
# 1450 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEGA_SHOP_UNLOCKED, Hub_Event_Script_Diancie_9
Hub_Event_Script_Diancie_7:
# 1458 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_MEGA_SHOP_UNLOCKED, Hub_Event_Script_Diancie_6
Hub_Event_Script_Diancie_5:
# 1472 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHARIZARDITE_X_UNLOCKED, Hub_Event_Script_Diancie_4
Hub_Event_Script_Diancie_1:
# 2910 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Diancie_2:
# 1451 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_0
	goto Hub_Event_Script_Diancie_1

Hub_Event_Script_Diancie_3:
# 1459 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_1
# 1463 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHARIZARDITE_X, 1
# 1464 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_VENUSAURITE_BUYABLE
# 1465 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHARIZARDITE_Y_BUYABLE
# 1466 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BLASTOISINITE_BUYABLE
# 1467 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHARIZARDITE_X_UNLOCKED
# 1468 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_2
	goto Hub_Event_Script_Diancie_1

Hub_Event_Script_Diancie_4:
# 1473 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1474 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_VENUSAURITE_BUYABLE, Hub_Event_Script_Diancie_13
Hub_Event_Script_Diancie_12:
# 1478 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHARIZARDITE_Y_BUYABLE, Hub_Event_Script_Diancie_16
Hub_Event_Script_Diancie_15:
# 1482 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BLASTOISINITE_BUYABLE, Hub_Event_Script_Diancie_19
Hub_Event_Script_Diancie_18:
# 1486 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BEEDRILLITE_BUYABLE, Hub_Event_Script_Diancie_22
Hub_Event_Script_Diancie_21:
# 1490 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_PIDGEOTITE_BUYABLE, Hub_Event_Script_Diancie_25
Hub_Event_Script_Diancie_24:
# 1494 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ALAKAZITE_BUYABLE, Hub_Event_Script_Diancie_28
Hub_Event_Script_Diancie_27:
# 1498 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SLOWBRONITE_BUYABLE, Hub_Event_Script_Diancie_31
Hub_Event_Script_Diancie_30:
# 1502 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GENGARITE_BUYABLE, Hub_Event_Script_Diancie_34
Hub_Event_Script_Diancie_33:
# 1506 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_KANGASKHANITE_BUYABLE, Hub_Event_Script_Diancie_37
Hub_Event_Script_Diancie_36:
# 1510 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_PINSIRITE_BUYABLE, Hub_Event_Script_Diancie_40
Hub_Event_Script_Diancie_39:
# 1514 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GYARADOSITE_BUYABLE, Hub_Event_Script_Diancie_43
Hub_Event_Script_Diancie_42:
# 1518 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_AERODACTYLITE_BUYABLE, Hub_Event_Script_Diancie_46
Hub_Event_Script_Diancie_45:
# 1522 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_AMPHAROSITE_BUYABLE, Hub_Event_Script_Diancie_49
Hub_Event_Script_Diancie_48:
# 1526 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_STEELIXITE_BUYABLE, Hub_Event_Script_Diancie_52
Hub_Event_Script_Diancie_51:
# 1530 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCIZORITE_BUYABLE, Hub_Event_Script_Diancie_55
Hub_Event_Script_Diancie_54:
# 1534 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_HERACRONITE_BUYABLE, Hub_Event_Script_Diancie_58
Hub_Event_Script_Diancie_57:
# 1538 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_HOUNDOOMINITE_BUYABLE, Hub_Event_Script_Diancie_61
Hub_Event_Script_Diancie_60:
# 1542 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_TYRANITARITE_BUYABLE, Hub_Event_Script_Diancie_64
Hub_Event_Script_Diancie_63:
# 1546 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCEPTILITE_BUYABLE, Hub_Event_Script_Diancie_67
Hub_Event_Script_Diancie_66:
# 1550 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BLAZIKENITE_BUYABLE, Hub_Event_Script_Diancie_70
Hub_Event_Script_Diancie_69:
# 1554 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SWAMPERTITE_BUYABLE, Hub_Event_Script_Diancie_73
Hub_Event_Script_Diancie_72:
# 1558 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GARDEVOIRITE_BUYABLE, Hub_Event_Script_Diancie_76
Hub_Event_Script_Diancie_75:
# 1562 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SABLENITE_BUYABLE, Hub_Event_Script_Diancie_79
Hub_Event_Script_Diancie_78:
# 1566 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MAWILITE_BUYABLE, Hub_Event_Script_Diancie_82
Hub_Event_Script_Diancie_81:
# 1570 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_AGGRONITE_BUYABLE, Hub_Event_Script_Diancie_85
Hub_Event_Script_Diancie_84:
# 1574 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MEDICHAMITE_BUYABLE, Hub_Event_Script_Diancie_88
Hub_Event_Script_Diancie_87:
# 1578 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MANECTITE_BUYABLE, Hub_Event_Script_Diancie_91
Hub_Event_Script_Diancie_90:
# 1582 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SHARPEDONITE_BUYABLE, Hub_Event_Script_Diancie_94
Hub_Event_Script_Diancie_93:
# 1586 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CAMERUPTITE_BUYABLE, Hub_Event_Script_Diancie_97
Hub_Event_Script_Diancie_96:
# 1590 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ALTARIANITE_BUYABLE, Hub_Event_Script_Diancie_100
Hub_Event_Script_Diancie_99:
# 1594 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BANETTITE_BUYABLE, Hub_Event_Script_Diancie_103
Hub_Event_Script_Diancie_102:
# 1598 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ABSOLITE_BUYABLE, Hub_Event_Script_Diancie_106
Hub_Event_Script_Diancie_105:
# 1602 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GLALITITE_BUYABLE, Hub_Event_Script_Diancie_109
Hub_Event_Script_Diancie_108:
# 1606 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SALAMENCITE_BUYABLE, Hub_Event_Script_Diancie_112
Hub_Event_Script_Diancie_111:
# 1610 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_METAGROSSITE_BUYABLE, Hub_Event_Script_Diancie_115
Hub_Event_Script_Diancie_114:
# 1614 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_LOPUNNITE_BUYABLE, Hub_Event_Script_Diancie_118
Hub_Event_Script_Diancie_117:
# 1618 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GARCHOMPITE_BUYABLE, Hub_Event_Script_Diancie_121
Hub_Event_Script_Diancie_120:
# 1622 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_LUCARIONITE_BUYABLE, Hub_Event_Script_Diancie_124
Hub_Event_Script_Diancie_123:
# 1626 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ABOMASITE_BUYABLE, Hub_Event_Script_Diancie_127
Hub_Event_Script_Diancie_126:
# 1630 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GALLADITE_BUYABLE, Hub_Event_Script_Diancie_130
Hub_Event_Script_Diancie_129:
# 1634 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CLEFABLITE_BUYABLE, Hub_Event_Script_Diancie_133
Hub_Event_Script_Diancie_132:
# 1638 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_VICTREEBELITE_BUYABLE, Hub_Event_Script_Diancie_136
Hub_Event_Script_Diancie_135:
# 1642 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_STARMINITE_BUYABLE, Hub_Event_Script_Diancie_139
Hub_Event_Script_Diancie_138:
# 1646 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DRAGONINITE_BUYABLE, Hub_Event_Script_Diancie_142
Hub_Event_Script_Diancie_141:
# 1650 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MEGANIUMITE_BUYABLE, Hub_Event_Script_Diancie_145
Hub_Event_Script_Diancie_144:
# 1654 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_FERALIGITE_BUYABLE, Hub_Event_Script_Diancie_148
Hub_Event_Script_Diancie_147:
# 1658 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SKARMORITE_BUYABLE, Hub_Event_Script_Diancie_151
Hub_Event_Script_Diancie_150:
# 1662 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_FROSLASSITE_BUYABLE, Hub_Event_Script_Diancie_154
Hub_Event_Script_Diancie_153:
# 1666 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_EMBOARITE_BUYABLE, Hub_Event_Script_Diancie_157
Hub_Event_Script_Diancie_156:
# 1670 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_EXCADRITE_BUYABLE, Hub_Event_Script_Diancie_160
Hub_Event_Script_Diancie_159:
# 1674 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCOLIPITE_BUYABLE, Hub_Event_Script_Diancie_163
Hub_Event_Script_Diancie_162:
# 1678 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCRAFTINITE_BUYABLE, Hub_Event_Script_Diancie_166
Hub_Event_Script_Diancie_165:
# 1682 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_EELEKTROSSITE_BUYABLE, Hub_Event_Script_Diancie_169
Hub_Event_Script_Diancie_168:
# 1686 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHANDELURITE_BUYABLE, Hub_Event_Script_Diancie_172
Hub_Event_Script_Diancie_171:
# 1690 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHESNAUGHTITE_BUYABLE, Hub_Event_Script_Diancie_175
Hub_Event_Script_Diancie_174:
# 1694 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DELPHOXITE_BUYABLE, Hub_Event_Script_Diancie_178
Hub_Event_Script_Diancie_177:
# 1698 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GRENINJITE_BUYABLE, Hub_Event_Script_Diancie_181
Hub_Event_Script_Diancie_180:
# 1702 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_PYROARITE_BUYABLE, Hub_Event_Script_Diancie_184
Hub_Event_Script_Diancie_183:
# 1706 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MALAMARITE_BUYABLE, Hub_Event_Script_Diancie_187
Hub_Event_Script_Diancie_186:
# 1710 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BARBARACITE_BUYABLE, Hub_Event_Script_Diancie_190
Hub_Event_Script_Diancie_189:
# 1714 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DRAGALGITE_BUYABLE, Hub_Event_Script_Diancie_193
Hub_Event_Script_Diancie_192:
# 1718 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_HAWLUCHANITE_BUYABLE, Hub_Event_Script_Diancie_196
Hub_Event_Script_Diancie_195:
# 1722 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DRAMPANITE_BUYABLE, Hub_Event_Script_Diancie_199
Hub_Event_Script_Diancie_198:
# 1726 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_FALINKSITE_BUYABLE, Hub_Event_Script_Diancie_202
Hub_Event_Script_Diancie_201:
# 1730 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_RAICHUNITE_X_BUYABLE, Hub_Event_Script_Diancie_205
Hub_Event_Script_Diancie_204:
# 1734 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_RAICHUNITE_Y_BUYABLE, Hub_Event_Script_Diancie_208
Hub_Event_Script_Diancie_207:
# 1738 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHIMECHITE_BUYABLE, Hub_Event_Script_Diancie_211
Hub_Event_Script_Diancie_210:
# 1742 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_STARAPTITE_BUYABLE, Hub_Event_Script_Diancie_214
Hub_Event_Script_Diancie_213:
# 1746 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GOLURKITE_BUYABLE, Hub_Event_Script_Diancie_217
Hub_Event_Script_Diancie_216:
# 1750 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MEOWSTICITE_BUYABLE, Hub_Event_Script_Diancie_220
Hub_Event_Script_Diancie_219:
# 1754 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CRABOMINITE_BUYABLE, Hub_Event_Script_Diancie_223
Hub_Event_Script_Diancie_222:
# 1758 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GOLISOPITE_BUYABLE, Hub_Event_Script_Diancie_226
Hub_Event_Script_Diancie_225:
# 1762 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCOVILLAINITE_BUYABLE, Hub_Event_Script_Diancie_229
Hub_Event_Script_Diancie_228:
# 1766 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GLIMMORANITE_BUYABLE, Hub_Event_Script_Diancie_232
Hub_Event_Script_Diancie_231:
# 1770 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BAXCALIBRITE_BUYABLE, Hub_Event_Script_Diancie_235
Hub_Event_Script_Diancie_234:
# 1775 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Diancie_238
# 2900 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_155
# 2905 "data/maps/Hub1/scripts.pory"
	waitmessage
# 2906 "data/maps/Hub1/scripts.pory"
	releaseall
Hub_Event_Script_Diancie_237:
# 2908 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
	goto Hub_Event_Script_Diancie_1

Hub_Event_Script_Diancie_6:
# 1458 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ITEM_CHARIZARDITE_X_UNLOCKED, Hub_Event_Script_Diancie_3
	goto Hub_Event_Script_Diancie_5

Hub_Event_Script_Diancie_9:
# 1450 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ITEM_CHARIZARDITE_X_UNLOCKED, Hub_Event_Script_Diancie_2
	goto Hub_Event_Script_Diancie_7

Hub_Event_Script_Diancie_13:
# 1475 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_3, ITEM_VENUSAURITE
# 1476 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_12

Hub_Event_Script_Diancie_16:
# 1479 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_4, ITEM_CHARIZARDITE_Y
# 1480 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_15

Hub_Event_Script_Diancie_19:
# 1483 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_5, ITEM_BLASTOISINITE
# 1484 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_18

Hub_Event_Script_Diancie_22:
# 1487 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_6, ITEM_BEEDRILLITE
# 1488 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_21

Hub_Event_Script_Diancie_25:
# 1491 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_7, ITEM_PIDGEOTITE
# 1492 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_24

Hub_Event_Script_Diancie_28:
# 1495 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_8, ITEM_ALAKAZITE
# 1496 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_27

Hub_Event_Script_Diancie_31:
# 1499 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_9, ITEM_SLOWBRONITE
# 1500 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_30

Hub_Event_Script_Diancie_34:
# 1503 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_10, ITEM_GENGARITE
# 1504 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_33

Hub_Event_Script_Diancie_37:
# 1507 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_11, ITEM_KANGASKHANITE
# 1508 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_36

Hub_Event_Script_Diancie_40:
# 1511 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_12, ITEM_PINSIRITE
# 1512 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_39

Hub_Event_Script_Diancie_43:
# 1515 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_13, ITEM_GYARADOSITE
# 1516 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_42

Hub_Event_Script_Diancie_46:
# 1519 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_14, ITEM_AERODACTYLITE
# 1520 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_45

Hub_Event_Script_Diancie_49:
# 1523 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_15, ITEM_AMPHAROSITE
# 1524 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_48

Hub_Event_Script_Diancie_52:
# 1527 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_16, ITEM_STEELIXITE
# 1528 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_51

Hub_Event_Script_Diancie_55:
# 1531 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_17, ITEM_SCIZORITE
# 1532 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_54

Hub_Event_Script_Diancie_58:
# 1535 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_18, ITEM_HERACRONITE
# 1536 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_57

Hub_Event_Script_Diancie_61:
# 1539 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_19, ITEM_HOUNDOOMINITE
# 1540 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_60

Hub_Event_Script_Diancie_64:
# 1543 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_20, ITEM_TYRANITARITE
# 1544 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_63

Hub_Event_Script_Diancie_67:
# 1547 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_21, ITEM_SCEPTILITE
# 1548 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_66

Hub_Event_Script_Diancie_70:
# 1551 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_22, ITEM_BLAZIKENITE
# 1552 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_69

Hub_Event_Script_Diancie_73:
# 1555 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_23, ITEM_SWAMPERTITE
# 1556 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_72

Hub_Event_Script_Diancie_76:
# 1559 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_24, ITEM_GARDEVOIRITE
# 1560 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_75

Hub_Event_Script_Diancie_79:
# 1563 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_25, ITEM_SABLENITE
# 1564 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_78

Hub_Event_Script_Diancie_82:
# 1567 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_26, ITEM_MAWILITE
# 1568 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_81

Hub_Event_Script_Diancie_85:
# 1571 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_27, ITEM_AGGRONITE
# 1572 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_84

Hub_Event_Script_Diancie_88:
# 1575 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_28, ITEM_MEDICHAMITE
# 1576 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_87

Hub_Event_Script_Diancie_91:
# 1579 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_29, ITEM_MANECTITE
# 1580 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_90

Hub_Event_Script_Diancie_94:
# 1583 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_30, ITEM_SHARPEDONITE
# 1584 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_93

Hub_Event_Script_Diancie_97:
# 1587 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_31, ITEM_CAMERUPTITE
# 1588 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_96

Hub_Event_Script_Diancie_100:
# 1591 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_32, ITEM_ALTARIANITE
# 1592 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_99

Hub_Event_Script_Diancie_103:
# 1595 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_33, ITEM_BANETTITE
# 1596 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_102

Hub_Event_Script_Diancie_106:
# 1599 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_34, ITEM_ABSOLITE
# 1600 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_105

Hub_Event_Script_Diancie_109:
# 1603 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_35, ITEM_GLALITITE
# 1604 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_108

Hub_Event_Script_Diancie_112:
# 1607 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_36, ITEM_SALAMENCITE
# 1608 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_111

Hub_Event_Script_Diancie_115:
# 1611 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_37, ITEM_METAGROSSITE
# 1612 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_114

Hub_Event_Script_Diancie_118:
# 1615 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_38, ITEM_LOPUNNITE
# 1616 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_117

Hub_Event_Script_Diancie_121:
# 1619 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_39, ITEM_GARCHOMPITE
# 1620 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_120

Hub_Event_Script_Diancie_124:
# 1623 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_40, ITEM_LUCARIONITE
# 1624 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_123

Hub_Event_Script_Diancie_127:
# 1627 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_41, ITEM_ABOMASITE
# 1628 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_126

Hub_Event_Script_Diancie_130:
# 1631 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_42, ITEM_GALLADITE
# 1632 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_129

Hub_Event_Script_Diancie_133:
# 1635 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_43, ITEM_CLEFABLITE
# 1636 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_132

Hub_Event_Script_Diancie_136:
# 1639 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_44, ITEM_VICTREEBELITE
# 1640 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_135

Hub_Event_Script_Diancie_139:
# 1643 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_45, ITEM_STARMINITE
# 1644 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_138

Hub_Event_Script_Diancie_142:
# 1647 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_46, ITEM_DRAGONINITE
# 1648 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_141

Hub_Event_Script_Diancie_145:
# 1651 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_47, ITEM_MEGANIUMITE
# 1652 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_144

Hub_Event_Script_Diancie_148:
# 1655 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_48, ITEM_FERALIGITE
# 1656 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_147

Hub_Event_Script_Diancie_151:
# 1659 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_49, ITEM_SKARMORITE
# 1660 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_150

Hub_Event_Script_Diancie_154:
# 1663 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_50, ITEM_FROSLASSITE
# 1664 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_153

Hub_Event_Script_Diancie_157:
# 1667 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_51, ITEM_EMBOARITE
# 1668 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_156

Hub_Event_Script_Diancie_160:
# 1671 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_52, ITEM_EXCADRITE
# 1672 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_159

Hub_Event_Script_Diancie_163:
# 1675 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_53, ITEM_SCOLIPITE
# 1676 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_162

Hub_Event_Script_Diancie_166:
# 1679 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_54, ITEM_SCRAFTINITE
# 1680 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_165

Hub_Event_Script_Diancie_169:
# 1683 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_55, ITEM_EELEKTROSSITE
# 1684 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_168

Hub_Event_Script_Diancie_172:
# 1687 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_56, ITEM_CHANDELURITE
# 1688 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_171

Hub_Event_Script_Diancie_175:
# 1691 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_57, ITEM_CHESNAUGHTITE
# 1692 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_174

Hub_Event_Script_Diancie_178:
# 1695 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_58, ITEM_DELPHOXITE
# 1696 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_177

Hub_Event_Script_Diancie_181:
# 1699 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_59, ITEM_GRENINJITE
# 1700 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_180

Hub_Event_Script_Diancie_184:
# 1703 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_60, ITEM_PYROARITE
# 1704 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_183

Hub_Event_Script_Diancie_187:
# 1707 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_61, ITEM_MALAMARITE
# 1708 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_186

Hub_Event_Script_Diancie_190:
# 1711 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_62, ITEM_BARBARACITE
# 1712 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_189

Hub_Event_Script_Diancie_193:
# 1715 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_63, ITEM_DRAGALGITE
# 1716 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_192

Hub_Event_Script_Diancie_196:
# 1719 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_64, ITEM_HAWLUCHANITE
# 1720 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_195

Hub_Event_Script_Diancie_199:
# 1723 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_65, ITEM_DRAMPANITE
# 1724 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_198

Hub_Event_Script_Diancie_202:
# 1727 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_66, ITEM_FALINKSITE
# 1728 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_201

Hub_Event_Script_Diancie_205:
# 1731 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_67, ITEM_RAICHUNITE_X
# 1732 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_204

Hub_Event_Script_Diancie_208:
# 1735 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_68, ITEM_RAICHUNITE_Y
# 1736 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_207

Hub_Event_Script_Diancie_211:
# 1739 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_69, ITEM_CHIMECHITE
# 1740 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_210

Hub_Event_Script_Diancie_214:
# 1743 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_70, ITEM_STARAPTITE
# 1744 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_213

Hub_Event_Script_Diancie_217:
# 1747 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_71, ITEM_GOLURKITE
# 1748 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_216

Hub_Event_Script_Diancie_220:
# 1751 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_72, ITEM_MEOWSTICITE
# 1752 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_219

Hub_Event_Script_Diancie_223:
# 1755 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_73, ITEM_CRABOMINITE
# 1756 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_222

Hub_Event_Script_Diancie_226:
# 1759 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_74, ITEM_GOLISOPITE
# 1760 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_225

Hub_Event_Script_Diancie_229:
# 1763 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_75, ITEM_SCOVILLAINITE
# 1764 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_228

Hub_Event_Script_Diancie_232:
# 1767 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_76, ITEM_GLIMMORANITE
# 1768 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_231

Hub_Event_Script_Diancie_235:
# 1771 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_77, ITEM_BAXCALIBRITE
# 1772 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_234

Hub_Event_Script_Diancie_238:
# 1777 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_NEW_MEGA_BUYABLE, Hub_Event_Script_Diancie_242
# 1784 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_79
Hub_Event_Script_Diancie_241:
# 1786 "data/maps/Hub1/scripts.pory"
	showcoinsbox 21, 11
# 1787 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 1788 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 1789 "data/maps/Hub1/scripts.pory"
	case ITEM_VENUSAURITE, Hub_Event_Script_Diancie_246
# 1804 "data/maps/Hub1/scripts.pory"
	case ITEM_CHARIZARDITE_Y, Hub_Event_Script_Diancie_247
# 1819 "data/maps/Hub1/scripts.pory"
	case ITEM_BLASTOISINITE, Hub_Event_Script_Diancie_248
# 1834 "data/maps/Hub1/scripts.pory"
	case ITEM_BEEDRILLITE, Hub_Event_Script_Diancie_249
# 1849 "data/maps/Hub1/scripts.pory"
	case ITEM_PIDGEOTITE, Hub_Event_Script_Diancie_250
# 1864 "data/maps/Hub1/scripts.pory"
	case ITEM_ALAKAZITE, Hub_Event_Script_Diancie_251
# 1879 "data/maps/Hub1/scripts.pory"
	case ITEM_SLOWBRONITE, Hub_Event_Script_Diancie_252
# 1894 "data/maps/Hub1/scripts.pory"
	case ITEM_GENGARITE, Hub_Event_Script_Diancie_253
# 1909 "data/maps/Hub1/scripts.pory"
	case ITEM_KANGASKHANITE, Hub_Event_Script_Diancie_254
# 1924 "data/maps/Hub1/scripts.pory"
	case ITEM_PINSIRITE, Hub_Event_Script_Diancie_255
# 1939 "data/maps/Hub1/scripts.pory"
	case ITEM_GYARADOSITE, Hub_Event_Script_Diancie_256
# 1954 "data/maps/Hub1/scripts.pory"
	case ITEM_AERODACTYLITE, Hub_Event_Script_Diancie_257
# 1969 "data/maps/Hub1/scripts.pory"
	case ITEM_AMPHAROSITE, Hub_Event_Script_Diancie_258
# 1984 "data/maps/Hub1/scripts.pory"
	case ITEM_STEELIXITE, Hub_Event_Script_Diancie_259
# 1999 "data/maps/Hub1/scripts.pory"
	case ITEM_SCIZORITE, Hub_Event_Script_Diancie_260
# 2014 "data/maps/Hub1/scripts.pory"
	case ITEM_HERACRONITE, Hub_Event_Script_Diancie_261
# 2029 "data/maps/Hub1/scripts.pory"
	case ITEM_HOUNDOOMINITE, Hub_Event_Script_Diancie_262
# 2044 "data/maps/Hub1/scripts.pory"
	case ITEM_TYRANITARITE, Hub_Event_Script_Diancie_263
# 2059 "data/maps/Hub1/scripts.pory"
	case ITEM_SCEPTILITE, Hub_Event_Script_Diancie_264
# 2074 "data/maps/Hub1/scripts.pory"
	case ITEM_BLAZIKENITE, Hub_Event_Script_Diancie_265
# 2089 "data/maps/Hub1/scripts.pory"
	case ITEM_SWAMPERTITE, Hub_Event_Script_Diancie_266
# 2104 "data/maps/Hub1/scripts.pory"
	case ITEM_GARDEVOIRITE, Hub_Event_Script_Diancie_267
# 2119 "data/maps/Hub1/scripts.pory"
	case ITEM_SABLENITE, Hub_Event_Script_Diancie_268
# 2134 "data/maps/Hub1/scripts.pory"
	case ITEM_MAWILITE, Hub_Event_Script_Diancie_269
# 2149 "data/maps/Hub1/scripts.pory"
	case ITEM_AGGRONITE, Hub_Event_Script_Diancie_270
# 2164 "data/maps/Hub1/scripts.pory"
	case ITEM_MEDICHAMITE, Hub_Event_Script_Diancie_271
# 2179 "data/maps/Hub1/scripts.pory"
	case ITEM_MANECTITE, Hub_Event_Script_Diancie_272
# 2194 "data/maps/Hub1/scripts.pory"
	case ITEM_SHARPEDONITE, Hub_Event_Script_Diancie_273
# 2209 "data/maps/Hub1/scripts.pory"
	case ITEM_CAMERUPTITE, Hub_Event_Script_Diancie_274
# 2224 "data/maps/Hub1/scripts.pory"
	case ITEM_ALTARIANITE, Hub_Event_Script_Diancie_275
# 2239 "data/maps/Hub1/scripts.pory"
	case ITEM_BANETTITE, Hub_Event_Script_Diancie_276
# 2254 "data/maps/Hub1/scripts.pory"
	case ITEM_ABSOLITE, Hub_Event_Script_Diancie_277
# 2269 "data/maps/Hub1/scripts.pory"
	case ITEM_GLALITITE, Hub_Event_Script_Diancie_278
# 2284 "data/maps/Hub1/scripts.pory"
	case ITEM_SALAMENCITE, Hub_Event_Script_Diancie_279
# 2299 "data/maps/Hub1/scripts.pory"
	case ITEM_LOPUNNITE, Hub_Event_Script_Diancie_280
# 2314 "data/maps/Hub1/scripts.pory"
	case ITEM_GARCHOMPITE, Hub_Event_Script_Diancie_281
# 2329 "data/maps/Hub1/scripts.pory"
	case ITEM_LUCARIONITE, Hub_Event_Script_Diancie_282
# 2344 "data/maps/Hub1/scripts.pory"
	case ITEM_ABOMASITE, Hub_Event_Script_Diancie_283
# 2359 "data/maps/Hub1/scripts.pory"
	case ITEM_GALLADITE, Hub_Event_Script_Diancie_284
# 2374 "data/maps/Hub1/scripts.pory"
	case ITEM_CLEFABLITE, Hub_Event_Script_Diancie_285
# 2389 "data/maps/Hub1/scripts.pory"
	case ITEM_VICTREEBELITE, Hub_Event_Script_Diancie_286
# 2404 "data/maps/Hub1/scripts.pory"
	case ITEM_STARMINITE, Hub_Event_Script_Diancie_287
# 2419 "data/maps/Hub1/scripts.pory"
	case ITEM_DRAGONINITE, Hub_Event_Script_Diancie_288
# 2434 "data/maps/Hub1/scripts.pory"
	case ITEM_MEGANIUMITE, Hub_Event_Script_Diancie_289
# 2449 "data/maps/Hub1/scripts.pory"
	case ITEM_FERALIGITE, Hub_Event_Script_Diancie_290
# 2464 "data/maps/Hub1/scripts.pory"
	case ITEM_SKARMORITE, Hub_Event_Script_Diancie_291
# 2479 "data/maps/Hub1/scripts.pory"
	case ITEM_FROSLASSITE, Hub_Event_Script_Diancie_292
# 2494 "data/maps/Hub1/scripts.pory"
	case ITEM_EMBOARITE, Hub_Event_Script_Diancie_293
# 2509 "data/maps/Hub1/scripts.pory"
	case ITEM_EXCADRITE, Hub_Event_Script_Diancie_294
# 2524 "data/maps/Hub1/scripts.pory"
	case ITEM_SCOLIPITE, Hub_Event_Script_Diancie_295
# 2539 "data/maps/Hub1/scripts.pory"
	case ITEM_SCRAFTINITE, Hub_Event_Script_Diancie_296
# 2554 "data/maps/Hub1/scripts.pory"
	case ITEM_EELEKTROSSITE, Hub_Event_Script_Diancie_297
# 2569 "data/maps/Hub1/scripts.pory"
	case ITEM_CHANDELURITE, Hub_Event_Script_Diancie_298
# 2584 "data/maps/Hub1/scripts.pory"
	case ITEM_CHESNAUGHTITE, Hub_Event_Script_Diancie_299
# 2599 "data/maps/Hub1/scripts.pory"
	case ITEM_DELPHOXITE, Hub_Event_Script_Diancie_300
# 2614 "data/maps/Hub1/scripts.pory"
	case ITEM_GRENINJITE, Hub_Event_Script_Diancie_301
# 2629 "data/maps/Hub1/scripts.pory"
	case ITEM_PYROARITE, Hub_Event_Script_Diancie_302
# 2644 "data/maps/Hub1/scripts.pory"
	case ITEM_MALAMARITE, Hub_Event_Script_Diancie_303
# 2659 "data/maps/Hub1/scripts.pory"
	case ITEM_BARBARACITE, Hub_Event_Script_Diancie_304
# 2674 "data/maps/Hub1/scripts.pory"
	case ITEM_DRAGALGITE, Hub_Event_Script_Diancie_305
# 2689 "data/maps/Hub1/scripts.pory"
	case ITEM_HAWLUCHANITE, Hub_Event_Script_Diancie_306
# 2704 "data/maps/Hub1/scripts.pory"
	case ITEM_DRAMPANITE, Hub_Event_Script_Diancie_307
# 2719 "data/maps/Hub1/scripts.pory"
	case ITEM_FALINKSITE, Hub_Event_Script_Diancie_308
# 2734 "data/maps/Hub1/scripts.pory"
	case ITEM_RAICHUNITE_X, Hub_Event_Script_Diancie_309
# 2749 "data/maps/Hub1/scripts.pory"
	case ITEM_RAICHUNITE_Y, Hub_Event_Script_Diancie_310
# 2764 "data/maps/Hub1/scripts.pory"
	case ITEM_CHIMECHITE, Hub_Event_Script_Diancie_311
# 2779 "data/maps/Hub1/scripts.pory"
	case ITEM_STARAPTITE, Hub_Event_Script_Diancie_312
# 2794 "data/maps/Hub1/scripts.pory"
	case ITEM_GOLURKITE, Hub_Event_Script_Diancie_313
# 2809 "data/maps/Hub1/scripts.pory"
	case ITEM_MEOWSTICITE, Hub_Event_Script_Diancie_314
# 2824 "data/maps/Hub1/scripts.pory"
	case ITEM_CRABOMINITE, Hub_Event_Script_Diancie_315
# 2839 "data/maps/Hub1/scripts.pory"
	case ITEM_GOLISOPITE, Hub_Event_Script_Diancie_316
# 2854 "data/maps/Hub1/scripts.pory"
	case ITEM_SCOVILLAINITE, Hub_Event_Script_Diancie_317
# 2869 "data/maps/Hub1/scripts.pory"
	case ITEM_GLIMMORANITE, Hub_Event_Script_Diancie_318
# 2884 "data/maps/Hub1/scripts.pory"
	case ITEM_BAXCALIBRITE, Hub_Event_Script_Diancie_319
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_242:
# 1778 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_78
# 1781 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_NEW_MEGA_BUYABLE
	goto Hub_Event_Script_Diancie_241

Hub_Event_Script_Diancie_246:
# 1790 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1791 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_320
# 1801 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_247:
# 1805 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1806 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_323
# 1816 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_248:
# 1820 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1821 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_326
# 1831 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_249:
# 1835 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1836 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_329
# 1846 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_250:
# 1850 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1851 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_332
# 1861 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_251:
# 1865 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1866 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_335
# 1876 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_252:
# 1880 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1881 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_338
# 1891 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_253:
# 1895 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1896 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_341
# 1906 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_254:
# 1910 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1911 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_344
# 1921 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_255:
# 1925 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1926 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_347
# 1936 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_256:
# 1940 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1941 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_350
# 1951 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_257:
# 1955 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1956 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_353
# 1966 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_258:
# 1970 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1971 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_356
# 1981 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_259:
# 1985 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1986 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_359
# 1996 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_260:
# 2000 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2001 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_362
# 2011 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_261:
# 2015 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2016 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_365
# 2026 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_262:
# 2030 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2031 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_368
# 2041 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_263:
# 2045 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2046 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_371
# 2056 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_264:
# 2060 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2061 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_374
# 2071 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_265:
# 2075 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2076 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_377
# 2086 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_266:
# 2090 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2091 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_380
# 2101 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_267:
# 2105 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2106 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_383
# 2116 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_268:
# 2120 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2121 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_386
# 2131 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_269:
# 2135 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2136 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_389
# 2146 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_270:
# 2150 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2151 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_392
# 2161 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_271:
# 2165 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2166 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_395
# 2176 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_272:
# 2180 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2181 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_398
# 2191 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_273:
# 2195 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2196 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_401
# 2206 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_274:
# 2210 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2211 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_404
# 2221 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_275:
# 2225 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2226 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_407
# 2236 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_276:
# 2240 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2241 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_410
# 2251 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_277:
# 2255 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2256 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_413
# 2266 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_278:
# 2270 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2271 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_416
# 2281 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_279:
# 2285 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2286 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_419
# 2296 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_280:
# 2300 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2301 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_422
# 2311 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_281:
# 2315 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2316 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_425
# 2326 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_282:
# 2330 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2331 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_428
# 2341 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_283:
# 2345 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2346 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_431
# 2356 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_284:
# 2360 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2361 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_434
# 2371 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_285:
# 2375 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2376 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_437
# 2386 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_286:
# 2390 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2391 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_440
# 2401 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_287:
# 2405 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2406 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_443
# 2416 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_288:
# 2420 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2421 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_446
# 2431 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_289:
# 2435 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2436 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_449
# 2446 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_290:
# 2450 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2451 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_452
# 2461 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_291:
# 2465 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2466 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_455
# 2476 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_292:
# 2480 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2481 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_458
# 2491 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_293:
# 2495 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2496 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_461
# 2506 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_294:
# 2510 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2511 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_464
# 2521 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_295:
# 2525 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2526 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_467
# 2536 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_296:
# 2540 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2541 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_470
# 2551 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_297:
# 2555 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2556 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_473
# 2566 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_298:
# 2570 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2571 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_476
# 2581 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_299:
# 2585 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2586 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_479
# 2596 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_300:
# 2600 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2601 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_482
# 2611 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_301:
# 2615 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2616 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_485
# 2626 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_302:
# 2630 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2631 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_488
# 2641 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_303:
# 2645 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2646 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_491
# 2656 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_304:
# 2660 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2661 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_494
# 2671 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_305:
# 2675 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2676 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_497
# 2686 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_306:
# 2690 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2691 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_500
# 2701 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_307:
# 2705 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2706 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_503
# 2716 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_308:
# 2720 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2721 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_506
# 2731 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_309:
# 2735 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2736 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_509
# 2746 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_310:
# 2750 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2751 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_512
# 2761 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_311:
# 2765 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2766 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_515
# 2776 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_312:
# 2780 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2781 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_518
# 2791 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_313:
# 2795 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2796 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_521
# 2806 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_314:
# 2810 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2811 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_524
# 2821 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_315:
# 2825 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2826 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_527
# 2836 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_316:
# 2840 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2841 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_530
# 2851 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_317:
# 2855 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2856 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_533
# 2866 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_318:
# 2870 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2871 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_536
# 2881 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_319:
# 2885 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2886 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_539
# 2896 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_320:
# 1792 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_VENUSAURITE_UNLOCKED
# 1793 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_VENUSAURITE_BUYABLE
# 1794 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_VENUSAURITE, 1
# 1795 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1796 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1797 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1798 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_80
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_323:
# 1807 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHARIZARDITE_Y_UNLOCKED
# 1808 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHARIZARDITE_Y_BUYABLE
# 1809 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHARIZARDITE_Y, 1
# 1810 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1811 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1812 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1813 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_82
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_326:
# 1822 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BLASTOISINITE_UNLOCKED
# 1823 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BLASTOISINITE_BUYABLE
# 1824 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BLASTOISINITE, 1
# 1825 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1826 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1827 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1828 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_83
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_329:
# 1837 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BEEDRILLITE_UNLOCKED
# 1838 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BEEDRILLITE_BUYABLE
# 1839 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BEEDRILLITE, 1
# 1840 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1841 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1842 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1843 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_84
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_332:
# 1852 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_PIDGEOTITE_UNLOCKED
# 1853 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_PIDGEOTITE_BUYABLE
# 1854 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_PIDGEOTITE, 1
# 1855 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1856 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1857 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1858 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_85
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_335:
# 1867 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ALAKAZITE_UNLOCKED
# 1868 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ALAKAZITE_BUYABLE
# 1869 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ALAKAZITE, 1
# 1870 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1871 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1872 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1873 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_86
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_338:
# 1882 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SLOWBRONITE_UNLOCKED
# 1883 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SLOWBRONITE_BUYABLE
# 1884 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SLOWBRONITE, 1
# 1885 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1886 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1887 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1888 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_87
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_341:
# 1897 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GENGARITE_UNLOCKED
# 1898 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GENGARITE_BUYABLE
# 1899 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GENGARITE, 1
# 1900 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1901 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1902 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1903 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_88
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_344:
# 1912 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_KANGASKHANITE_UNLOCKED
# 1913 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_KANGASKHANITE_BUYABLE
# 1914 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_KANGASKHANITE, 1
# 1915 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1916 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1917 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1918 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_89
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_347:
# 1927 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_PINSIRITE_UNLOCKED
# 1928 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_PINSIRITE_BUYABLE
# 1929 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_PINSIRITE, 1
# 1930 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1931 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1932 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1933 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_90
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_350:
# 1942 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GYARADOSITE_UNLOCKED
# 1943 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GYARADOSITE_BUYABLE
# 1944 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GYARADOSITE, 1
# 1945 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1946 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1947 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1948 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_91
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_353:
# 1957 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_AERODACTYLITE_UNLOCKED
# 1958 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_AERODACTYLITE_BUYABLE
# 1959 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_AERODACTYLITE, 1
# 1960 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1961 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1962 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1963 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_92
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_356:
# 1972 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_AMPHAROSITE_UNLOCKED
# 1973 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_AMPHAROSITE_BUYABLE
# 1974 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_AMPHAROSITE, 1
# 1975 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1976 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1977 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1978 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_93
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_359:
# 1987 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_STEELIXITE_UNLOCKED
# 1988 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_STEELIXITE_BUYABLE
# 1989 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_STEELIXITE, 1
# 1990 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 1991 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1992 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1993 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_94
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_362:
# 2002 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCIZORITE_UNLOCKED
# 2003 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCIZORITE_BUYABLE
# 2004 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCIZORITE, 1
# 2005 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2006 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2007 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2008 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_95
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_365:
# 2017 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_HERACRONITE_UNLOCKED
# 2018 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_HERACRONITE_BUYABLE
# 2019 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_HERACRONITE, 1
# 2020 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2021 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2022 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2023 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_96
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_368:
# 2032 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_HOUNDOOMINITE_UNLOCKED
# 2033 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_HOUNDOOMINITE_BUYABLE
# 2034 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_HOUNDOOMINITE, 1
# 2035 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2036 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2037 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2038 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_97
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_371:
# 2047 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_TYRANITARITE_UNLOCKED
# 2048 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_TYRANITARITE_BUYABLE
# 2049 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TYRANITARITE, 1
# 2050 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2051 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2052 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2053 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_98
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_374:
# 2062 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCEPTILITE_UNLOCKED
# 2063 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCEPTILITE_BUYABLE
# 2064 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCEPTILITE, 1
# 2065 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2066 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2067 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2068 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_99
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_377:
# 2077 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BLAZIKENITE_UNLOCKED
# 2078 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BLAZIKENITE_BUYABLE
# 2079 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BLAZIKENITE, 1
# 2080 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2081 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2082 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2083 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_100
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_380:
# 2092 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SWAMPERTITE_UNLOCKED
# 2093 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SWAMPERTITE_BUYABLE
# 2094 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SWAMPERTITE, 1
# 2095 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2096 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2097 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2098 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_101
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_383:
# 2107 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GARDEVOIRITE_UNLOCKED
# 2108 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GARDEVOIRITE_BUYABLE
# 2109 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GARDEVOIRITE, 1
# 2110 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2111 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2112 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2113 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_102
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_386:
# 2122 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SABLENITE_UNLOCKED
# 2123 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SABLENITE_BUYABLE
# 2124 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SABLENITE, 1
# 2125 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2126 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2127 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2128 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_103
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_389:
# 2137 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MAWILITE_UNLOCKED
# 2138 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MAWILITE_BUYABLE
# 2139 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MAWILITE, 1
# 2140 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2141 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2142 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2143 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_104
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_392:
# 2152 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_AGGRONITE_UNLOCKED
# 2153 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_AGGRONITE_BUYABLE
# 2154 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_AGGRONITE, 1
# 2155 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2156 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2157 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2158 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_105
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_395:
# 2167 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MEDICHAMITE_UNLOCKED
# 2168 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MEDICHAMITE_BUYABLE
# 2169 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEDICHAMITE, 1
# 2170 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2171 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2172 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2173 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_106
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_398:
# 2182 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MANECTITE_UNLOCKED
# 2183 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MANECTITE_BUYABLE
# 2184 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MANECTITE, 1
# 2185 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2186 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2187 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2188 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_107
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_401:
# 2197 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SHARPEDONITE_UNLOCKED
# 2198 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SHARPEDONITE_BUYABLE
# 2199 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SHARPEDONITE, 1
# 2200 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2201 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2202 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2203 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_108
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_404:
# 2212 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CAMERUPTITE_UNLOCKED
# 2213 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CAMERUPTITE_BUYABLE
# 2214 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CAMERUPTITE, 1
# 2215 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2216 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2217 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2218 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_109
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_407:
# 2227 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ALTARIANITE_UNLOCKED
# 2228 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ALTARIANITE_BUYABLE
# 2229 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ALTARIANITE, 1
# 2230 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2231 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2232 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2233 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_110
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_410:
# 2242 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BANETTITE_UNLOCKED
# 2243 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BANETTITE_BUYABLE
# 2244 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BANETTITE, 1
# 2245 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2246 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2247 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2248 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_111
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_413:
# 2257 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ABSOLITE_UNLOCKED
# 2258 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ABSOLITE_BUYABLE
# 2259 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ABSOLITE, 1
# 2260 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2261 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2262 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2263 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_112
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_416:
# 2272 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GLALITITE_UNLOCKED
# 2273 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GLALITITE_BUYABLE
# 2274 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GLALITITE, 1
# 2275 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2276 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2277 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2278 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_113
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_419:
# 2287 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SALAMENCITE_UNLOCKED
# 2288 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SALAMENCITE_BUYABLE
# 2289 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SALAMENCITE, 1
# 2290 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2291 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2292 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2293 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_114
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_422:
# 2302 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_LOPUNNITE_UNLOCKED
# 2303 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_LOPUNNITE_BUYABLE
# 2304 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LOPUNNITE, 1
# 2305 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2306 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2307 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2308 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_115
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_425:
# 2317 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GARCHOMPITE_UNLOCKED
# 2318 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GARCHOMPITE_BUYABLE
# 2319 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GARCHOMPITE, 1
# 2320 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2321 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2322 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2323 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_116
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_428:
# 2332 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_LUCARIONITE_UNLOCKED
# 2333 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_LUCARIONITE_BUYABLE
# 2334 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUCARIONITE, 1
# 2335 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2336 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2337 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2338 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_117
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_431:
# 2347 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ABOMASITE_UNLOCKED
# 2348 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ABOMASITE_BUYABLE
# 2349 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ABOMASITE, 1
# 2350 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2351 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2352 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2353 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_118
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_434:
# 2362 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GALLADITE_UNLOCKED
# 2363 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GALLADITE_BUYABLE
# 2364 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GALLADITE, 1
# 2365 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2366 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2367 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2368 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_119
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_437:
# 2377 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CLEFABLITE_UNLOCKED
# 2378 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CLEFABLITE_BUYABLE
# 2379 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CLEFABLITE, 1
# 2380 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2381 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2382 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2383 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_120
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_440:
# 2392 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_VICTREEBELITE_UNLOCKED
# 2393 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_VICTREEBELITE_BUYABLE
# 2394 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_VICTREEBELITE, 1
# 2395 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2396 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2397 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2398 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_121
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_443:
# 2407 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_STARMINITE_UNLOCKED
# 2408 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_STARMINITE_BUYABLE
# 2409 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_STARMINITE, 1
# 2410 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2411 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2412 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2413 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_122
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_446:
# 2422 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DRAGONINITE_UNLOCKED
# 2423 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DRAGONINITE_BUYABLE
# 2424 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DRAGONINITE, 1
# 2425 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2426 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2427 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2428 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_123
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_449:
# 2437 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MEGANIUMITE_UNLOCKED
# 2438 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MEGANIUMITE_BUYABLE
# 2439 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEGANIUMITE, 1
# 2440 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2441 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2442 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2443 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_124
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_452:
# 2452 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_FERALIGITE_UNLOCKED
# 2453 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_FERALIGITE_BUYABLE
# 2454 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_FERALIGITE, 1
# 2455 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2456 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2457 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2458 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_125
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_455:
# 2467 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SKARMORITE_UNLOCKED
# 2468 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SKARMORITE_BUYABLE
# 2469 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SKARMORITE, 1
# 2470 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2471 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2472 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2473 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_126
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_458:
# 2482 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_FROSLASSITE_UNLOCKED
# 2483 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_FROSLASSITE_BUYABLE
# 2484 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_FROSLASSITE, 1
# 2485 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2486 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2487 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2488 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_127
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_461:
# 2497 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_EMBOARITE_UNLOCKED
# 2498 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_EMBOARITE_BUYABLE
# 2499 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_EMBOARITE, 1
# 2500 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2501 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2502 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2503 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_128
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_464:
# 2512 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_EXCADRITE_UNLOCKED
# 2513 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_EXCADRITE_BUYABLE
# 2514 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_EXCADRITE, 1
# 2515 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2516 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2517 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2518 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_129
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_467:
# 2527 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCOLIPITE_UNLOCKED
# 2528 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCOLIPITE_BUYABLE
# 2529 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCOLIPITE, 1
# 2530 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2531 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2532 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2533 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_130
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_470:
# 2542 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCRAFTINITE_UNLOCKED
# 2543 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCRAFTINITE_BUYABLE
# 2544 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCRAFTINITE, 1
# 2545 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2546 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2547 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2548 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_131
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_473:
# 2557 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_EELEKTROSSITE_UNLOCKED
# 2558 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_EELEKTROSSITE_BUYABLE
# 2559 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_EELEKTROSSITE, 1
# 2560 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2561 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2562 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2563 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_132
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_476:
# 2572 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHANDELURITE_UNLOCKED
# 2573 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHANDELURITE_BUYABLE
# 2574 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHANDELURITE, 1
# 2575 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2576 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2577 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2578 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_133
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_479:
# 2587 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHESNAUGHTITE_UNLOCKED
# 2588 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHESNAUGHTITE_BUYABLE
# 2589 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHESNAUGHTITE, 1
# 2590 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2591 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2592 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2593 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_134
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_482:
# 2602 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DELPHOXITE_UNLOCKED
# 2603 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DELPHOXITE_BUYABLE
# 2604 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DELPHOXITE, 1
# 2605 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2606 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2607 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2608 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_135
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_485:
# 2617 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GRENINJITE_UNLOCKED
# 2618 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GRENINJITE_BUYABLE
# 2619 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GRENINJITE, 1
# 2620 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2621 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2622 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2623 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_136
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_488:
# 2632 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_PYROARITE_UNLOCKED
# 2633 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_PYROARITE_BUYABLE
# 2634 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_PYROARITE, 1
# 2635 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2636 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2637 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2638 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_137
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_491:
# 2647 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MALAMARITE_UNLOCKED
# 2648 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MALAMARITE_BUYABLE
# 2649 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MALAMARITE, 1
# 2650 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2651 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2652 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2653 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_138
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_494:
# 2662 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BARBARACITE_UNLOCKED
# 2663 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BARBARACITE_BUYABLE
# 2664 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BARBARACITE, 1
# 2665 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2666 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2667 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2668 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_139
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_497:
# 2677 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DRAGALGITE_UNLOCKED
# 2678 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DRAGALGITE_BUYABLE
# 2679 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DRAGALGITE, 1
# 2680 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2681 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2682 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2683 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_140
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_500:
# 2692 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_HAWLUCHANITE_UNLOCKED
# 2693 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_HAWLUCHANITE_BUYABLE
# 2694 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_HAWLUCHANITE, 1
# 2695 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2696 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2697 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2698 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_141
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_503:
# 2707 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DRAMPANITE_UNLOCKED
# 2708 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DRAMPANITE_BUYABLE
# 2709 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DRAMPANITE, 1
# 2710 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2711 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2712 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2713 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_142
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_506:
# 2722 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_FALINKSITE_UNLOCKED
# 2723 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_FALINKSITE_BUYABLE
# 2724 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_FALINKSITE, 1
# 2725 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2726 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2727 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2728 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_143
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_509:
# 2737 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_RAICHUNITE_X_UNLOCKED
# 2738 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_RAICHUNITE_X_BUYABLE
# 2739 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RAICHUNITE_X, 1
# 2740 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2741 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2742 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2743 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_144
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_512:
# 2752 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_RAICHUNITE_Y_UNLOCKED
# 2753 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_RAICHUNITE_Y_BUYABLE
# 2754 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RAICHUNITE_Y, 1
# 2755 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2756 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2757 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2758 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_145
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_515:
# 2767 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHIMECHITE_UNLOCKED
# 2768 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHIMECHITE_BUYABLE
# 2769 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHIMECHITE, 1
# 2770 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2771 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2772 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2773 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_146
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_518:
# 2782 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_STARAPTITE_UNLOCKED
# 2783 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_STARAPTITE_BUYABLE
# 2784 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_STARAPTITE, 1
# 2785 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2786 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2787 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2788 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_147
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_521:
# 2797 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GOLURKITE_UNLOCKED
# 2798 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GOLURKITE_BUYABLE
# 2799 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GOLURKITE, 1
# 2800 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2801 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2802 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2803 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_148
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_524:
# 2812 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MEOWSTICITE_UNLOCKED
# 2813 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MEOWSTICITE_BUYABLE
# 2814 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEOWSTICITE, 1
# 2815 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2816 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2817 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2818 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_149
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_527:
# 2827 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CRABOMINITE_UNLOCKED
# 2828 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CRABOMINITE_BUYABLE
# 2829 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CRABOMINITE, 1
# 2830 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2831 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2832 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2833 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_150
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_530:
# 2842 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GOLISOPITE_UNLOCKED
# 2843 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GOLISOPITE_BUYABLE
# 2844 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GOLISOPITE, 1
# 2845 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2846 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2847 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2848 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_151
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_533:
# 2857 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCOVILLAINITE_UNLOCKED
# 2858 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCOVILLAINITE_BUYABLE
# 2859 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCOVILLAINITE, 1
# 2860 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2861 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2862 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2863 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_152
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_536:
# 2872 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GLIMMORANITE_UNLOCKED
# 2873 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GLIMMORANITE_BUYABLE
# 2874 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GLIMMORANITE, 1
# 2875 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2876 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2877 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2878 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_153
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_539:
# 2887 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BAXCALIBRITE_UNLOCKED
# 2888 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BAXCALIBRITE_BUYABLE
# 2889 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BAXCALIBRITE, 1
# 2890 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2891 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2892 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2893 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_154
	goto Hub_Event_Script_Diancie_237


Hub_Event_Script_Marowak::
# 2914 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Marowak_Text_0
# 2915 "data/maps/Hub1/scripts.pory"
	closemessage
	return


Hub_Event_Script_Chimecho::
# 2923 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_0, type = MSGBOX_YESNO
# 2924 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Chimecho_1
# 2956 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_13
# 2957 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Chimecho_1:
# 2925 "data/maps/Hub1/scripts.pory"
	closemessage
# 2926 "data/maps/Hub1/scripts.pory"
backtocharmslist:
# 2927 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_1, ITEM_SHINY_STARTER_CHARM
# 2928 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_2, ITEM_LUMP_SUM_CHARM
# 2929 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_3, ITEM_BERRY_PACK_CHARM
# 2930 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TINTED_CHARM_STARTER_UNLOCKED, Hub_Event_Script_Chimecho_5
Hub_Event_Script_Chimecho_4:
# 2931 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_NORMAL_CHARM_STARTER_UNLOCKED, Hub_Event_Script_Chimecho_8
Hub_Event_Script_Chimecho_7:
# 2932 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_MINTY_CHARM_STARTER_UNLOCKED, Hub_Event_Script_Chimecho_11
Hub_Event_Script_Chimecho_10:
# 2934 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 8, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 2935 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 2936 "data/maps/Hub1/scripts.pory"
	case MULTI_B_PRESSED, Hub_Event_Script_Chimecho_15
# 2939 "data/maps/Hub1/scripts.pory"
	case ITEM_SHINY_STARTER_CHARM, Hub_Event_Script_Chimecho_16
# 2941 "data/maps/Hub1/scripts.pory"
	case ITEM_LUMP_SUM_CHARM, Hub_Event_Script_Chimecho_17
# 2943 "data/maps/Hub1/scripts.pory"
	case ITEM_BERRY_PACK_CHARM, Hub_Event_Script_Chimecho_18
# 2945 "data/maps/Hub1/scripts.pory"
	case ITEM_TINTED_CHARM, Hub_Event_Script_Chimecho_19
# 2947 "data/maps/Hub1/scripts.pory"
	case ITEM_NORMAL_CHARM, Hub_Event_Script_Chimecho_20
# 2949 "data/maps/Hub1/scripts.pory"
	case ITEM_MINTY_CHARM, Hub_Event_Script_Chimecho_21
Hub_Event_Script_Chimecho_13:
# 2952 "data/maps/Hub1/scripts.pory"
	closemessage
# 2953 "data/maps/Hub1/scripts.pory"
	goto backtocharmslist
	return

Hub_Event_Script_Chimecho_5:
# 2930 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_4, ITEM_TINTED_CHARM
	goto Hub_Event_Script_Chimecho_4

Hub_Event_Script_Chimecho_8:
# 2931 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_5, ITEM_NORMAL_CHARM
	goto Hub_Event_Script_Chimecho_7

Hub_Event_Script_Chimecho_11:
# 2932 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_6, ITEM_MINTY_CHARM
	goto Hub_Event_Script_Chimecho_10

Hub_Event_Script_Chimecho_15:
# 2937 "data/maps/Hub1/scripts.pory"
	releaseall
	end

Hub_Event_Script_Chimecho_16:
# 2940 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_7
	goto Hub_Event_Script_Chimecho_13

Hub_Event_Script_Chimecho_17:
# 2942 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_8
	goto Hub_Event_Script_Chimecho_13

Hub_Event_Script_Chimecho_18:
# 2944 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_9
	goto Hub_Event_Script_Chimecho_13

Hub_Event_Script_Chimecho_19:
# 2946 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_10
	goto Hub_Event_Script_Chimecho_13

Hub_Event_Script_Chimecho_20:
# 2948 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_11
	goto Hub_Event_Script_Chimecho_13

Hub_Event_Script_Chimecho_21:
# 2950 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_12
	goto Hub_Event_Script_Chimecho_13


GiveStarterCharm::
# 2963 "data/maps/Hub1/scripts.pory"
	special BufferStarterCharms
# 2964 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_SHINY_STARTER_CHARM
	goto_if_eq GiveStarterCharm_2
# 2964 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_SHINY_STARTER_CHARM
	goto_if_eq GiveStarterCharm_2
# 2964 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_SHINY_STARTER_CHARM
	goto_if_eq GiveStarterCharm_2
GiveStarterCharm_1:
# 2967 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_LUMP_SUM_CHARM
	goto_if_eq GiveStarterCharm_9
# 2967 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_LUMP_SUM_CHARM
	goto_if_eq GiveStarterCharm_9
# 2967 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_LUMP_SUM_CHARM
	goto_if_eq GiveStarterCharm_9
GiveStarterCharm_8:
# 2970 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_BERRY_PACK_CHARM
	goto_if_eq GiveStarterCharm_16
# 2970 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_BERRY_PACK_CHARM
	goto_if_eq GiveStarterCharm_16
# 2970 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_BERRY_PACK_CHARM
	goto_if_eq GiveStarterCharm_16
GiveStarterCharm_15:
# 2973 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_TINTED_CHARM
	goto_if_eq GiveStarterCharm_23
# 2973 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_TINTED_CHARM
	goto_if_eq GiveStarterCharm_23
# 2973 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_TINTED_CHARM
	goto_if_eq GiveStarterCharm_23
GiveStarterCharm_22:
# 2976 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_NORMAL_CHARM
	goto_if_eq GiveStarterCharm_30
# 2976 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_NORMAL_CHARM
	goto_if_eq GiveStarterCharm_30
# 2976 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_NORMAL_CHARM
	goto_if_eq GiveStarterCharm_30
GiveStarterCharm_29:
# 2979 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_MINTY_CHARM
	goto_if_eq GiveStarterCharm_37
# 2979 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_MINTY_CHARM
	goto_if_eq GiveStarterCharm_37
# 2979 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_MINTY_CHARM
	goto_if_eq GiveStarterCharm_37
GiveStarterCharm_36:
# 2982 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, TRUE, 3, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 2983 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 2984 "data/maps/Hub1/scripts.pory"
	case ITEM_SHINY_STARTER_CHARM, GiveStarterCharm_45
# 2992 "data/maps/Hub1/scripts.pory"
	case ITEM_LUMP_SUM_CHARM, GiveStarterCharm_46
# 2996 "data/maps/Hub1/scripts.pory"
	case ITEM_BERRY_PACK_CHARM, GiveStarterCharm_47
# 3002 "data/maps/Hub1/scripts.pory"
	case ITEM_TINTED_CHARM, GiveStarterCharm_48
# 3004 "data/maps/Hub1/scripts.pory"
	case ITEM_NORMAL_CHARM, GiveStarterCharm_49
# 3006 "data/maps/Hub1/scripts.pory"
	case ITEM_MINTY_CHARM, GiveStarterCharm_50
GiveStarterCharm_43:
# 3010 "data/maps/Hub1/scripts.pory"
	msgbox GiveStarterCharm_Text_0
# 3011 "data/maps/Hub1/scripts.pory"
	waitmessage
	return

GiveStarterCharm_2:
# 2965 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_1, ITEM_SHINY_STARTER_CHARM
	goto GiveStarterCharm_1

GiveStarterCharm_9:
# 2968 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_2, ITEM_LUMP_SUM_CHARM
	goto GiveStarterCharm_8

GiveStarterCharm_16:
# 2971 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_3, ITEM_BERRY_PACK_CHARM
	goto GiveStarterCharm_15

GiveStarterCharm_23:
# 2974 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_4, ITEM_TINTED_CHARM
	goto GiveStarterCharm_22

GiveStarterCharm_30:
# 2977 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_5, ITEM_NORMAL_CHARM
	goto GiveStarterCharm_29

GiveStarterCharm_37:
# 2980 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_6, ITEM_MINTY_CHARM
	goto GiveStarterCharm_36

GiveStarterCharm_45:
# 2985 "data/maps/Hub1/scripts.pory"
	setflag FLAG_NEXT_GIVE_MON_SHINY
# 2986 "data/maps/Hub1/scripts.pory"
	special ZeroPlayerPartyMons
# 2987 "data/maps/Hub1/scripts.pory"
	special GiveSavedStarter
# 2988 "data/maps/Hub1/scripts.pory"
	special UpdatePlayerSprite
# 2989 "data/maps/Hub1/scripts.pory"
	special UpdateTransformedPlayerPalette
# 2990 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SHINY_STARTER_CHARM, 1
# 2991 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_LEVEL_UP
	goto GiveStarterCharm_43

GiveStarterCharm_46:
# 2993 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUMP_SUM_CHARM, 1
# 2994 "data/maps/Hub1/scripts.pory"
	addmoney 1500
# 2995 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
	goto GiveStarterCharm_43

GiveStarterCharm_47:
# 2997 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BERRY_PACK_CHARM, 1
# 2998 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 1
# 2999 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
# 3000 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BERRY_JUICE, 1
# 3001 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto GiveStarterCharm_43

GiveStarterCharm_48:
# 3003 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TINTED_CHARM, 1
	goto GiveStarterCharm_43

GiveStarterCharm_49:
# 3005 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_NORMAL_CHARM, 1
	goto GiveStarterCharm_43

GiveStarterCharm_50:
# 3007 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MINTY_CHARM, 1
	goto GiveStarterCharm_43


Hub_Event_Script_Golem::
	return


Hub_Event_Script_Togedemaru::
	return


Hub_Event_Script_Klang::
	return


Hub_Event_Script_Bruxish::
	return


Hub_Event_Script_Simisage::
	return


Hub_Event_Script_Woobat::
	return


Hub_Event_Script_Ekans::
	return


Hub_Event_Script_Unown::
	return


Hub_Event_Script_Smoliv::
	return


Hub_Event_Script_Dachsbun::
	return


# 387 "data/maps/Hub1/scripts.pory"
Hub_Event_Script_Birch_Movement_0:
# 388 "data/maps/Hub1/scripts.pory"
	walk_down
# 389 "data/maps/Hub1/scripts.pory"
	face_left
	step_end

# 396 "data/maps/Hub1/scripts.pory"
Hub_Event_Script_Birch_Movement_1:
# 397 "data/maps/Hub1/scripts.pory"
	walk_up
# 398 "data/maps/Hub1/scripts.pory"
	walk_left
# 399 "data/maps/Hub1/scripts.pory"
	face_right
	step_end

# 402 "data/maps/Hub1/scripts.pory"
Hub_Event_Script_Birch_Movement_2:
# 403 "data/maps/Hub1/scripts.pory"
	walk_up
# 403 "data/maps/Hub1/scripts.pory"
	walk_up
# 403 "data/maps/Hub1/scripts.pory"
	walk_up
# 403 "data/maps/Hub1/scripts.pory"
	walk_up
	step_end

AfterWarpIntoNewAct_Text_0:
# 19 "data/maps/Hub1/scripts.pory"
	.string "Your Phione egg hatched into a Phione!$"

AfterWarpIntoNewAct_Text_1:
# 24 "data/maps/Hub1/scripts.pory"
	.string "Your Minty Charm activated!$"

AfterWarpIntoNewAct_Text_2:
# 35 "data/maps/Hub1/scripts.pory"
	.string "You managed to collect\n{STR_VAR_1} COINS in your last run!$"

AfterWarpIntoNewAct_Text_3:
# 41 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked the Minty Charm as a\n"
	.string "starter charm!$"

AfterWarpIntoNewAct_Text_4:
# 45 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked the Tinted Charm as a\n"
	.string "starter charm!$"

AfterWarpIntoNewAct_Text_5:
# 49 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked the Normal Charm as a\n"
	.string "starter charm!$"

Act1BirchBag_Text_0:
# 80 "data/maps/Hub1/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

AbraTeleport_Text_0:
# 106 "data/maps/Hub1/scripts.pory"
	.string "You'll have to defeat the leader first\nbefore I can teleport you\lto the next act.$"

AbraTeleport_Text_1:
# 110 "data/maps/Hub1/scripts.pory"
	.string "Would you like to teleport\nto the next act?$"

AbraTeleport_Text_2:
# 113 "data/maps/Hub1/scripts.pory"
	.string "Alright then! Here we go!$"

AbraTeleport_Text_3:
# 117 "data/maps/Hub1/scripts.pory"
	.string "Okay! Let me know when you're ready.$"

RivalFight1_Text_0:
# 126 "data/maps/Hub1/scripts.pory"
	.string "Yo I'm Treecko. Grrr.$"

RivalFight1_Text_1:
# 126 "data/maps/Hub1/scripts.pory"
	.string "Damn you got me.$"

RivalFight1_Text_2:
# 127 "data/maps/Hub1/scripts.pory"
	.string "I'll get you next time.$"

RivalFight1_Text_3:
# 131 "data/maps/Hub1/scripts.pory"
	.string "Yo I'm Torchic. Grrr.$"

HUB1_Run_Stats_Sign_Text_0:
# 195 "data/maps/Hub1/scripts.pory"
	.string "Total Runs: {STR_VAR_1}\nAct 1 Wins: {STR_VAR_2}$"

HUB1_Run_Stats_Sign_Text_1:
# 201 "data/maps/Hub1/scripts.pory"
	.string "Act 2 Wins: {STR_VAR_3}\nAct 3 Wins: {STR_VAR_1}\pAct 4 Wins: {STR_VAR_2}$"

HUB1_ONFRAME_Text_0:
# 225 "data/maps/Hub1/scripts.pory"
	.string "Welcome to Pokemon Path!\pTo start a run, talk to\nProfessor Birch up ahead.\pNow choose a pokemon to\nstart your adventure with.$"

HUB1_ONFRAME_Text_1:
# 228 "data/maps/Hub1/scripts.pory"
	.string "Bulbasaur$"

HUB1_ONFRAME_Text_2:
# 229 "data/maps/Hub1/scripts.pory"
	.string "Charmander$"

HUB1_ONFRAME_Text_3:
# 230 "data/maps/Hub1/scripts.pory"
	.string "Squirtle$"

HUB1_ONFRAME_Text_4:
# 231 "data/maps/Hub1/scripts.pory"
	.string "Chikorita$"

HUB1_ONFRAME_Text_5:
# 232 "data/maps/Hub1/scripts.pory"
	.string "Cyndaquil$"

HUB1_ONFRAME_Text_6:
# 233 "data/maps/Hub1/scripts.pory"
	.string "Totodile$"

HUB1_ONFRAME_Text_7:
# 234 "data/maps/Hub1/scripts.pory"
	.string "Treecko$"

HUB1_ONFRAME_Text_8:
# 235 "data/maps/Hub1/scripts.pory"
	.string "Torchic$"

HUB1_ONFRAME_Text_9:
# 236 "data/maps/Hub1/scripts.pory"
	.string "Mudkip$"

HUB1_ONFRAME_Text_10:
# 237 "data/maps/Hub1/scripts.pory"
	.string "Turtwig$"

HUB1_ONFRAME_Text_11:
# 238 "data/maps/Hub1/scripts.pory"
	.string "Chimchar$"

HUB1_ONFRAME_Text_12:
# 239 "data/maps/Hub1/scripts.pory"
	.string "Piplup$"

HUB1_ONFRAME_Text_13:
# 240 "data/maps/Hub1/scripts.pory"
	.string "Snivy$"

HUB1_ONFRAME_Text_14:
# 241 "data/maps/Hub1/scripts.pory"
	.string "Tepig$"

HUB1_ONFRAME_Text_15:
# 242 "data/maps/Hub1/scripts.pory"
	.string "Oshawott$"

HUB1_ONFRAME_Text_16:
# 243 "data/maps/Hub1/scripts.pory"
	.string "Chespin$"

HUB1_ONFRAME_Text_17:
# 244 "data/maps/Hub1/scripts.pory"
	.string "Fennekin$"

HUB1_ONFRAME_Text_18:
# 245 "data/maps/Hub1/scripts.pory"
	.string "Froakie$"

HUB1_ONFRAME_Text_19:
# 246 "data/maps/Hub1/scripts.pory"
	.string "Rowlet$"

HUB1_ONFRAME_Text_20:
# 247 "data/maps/Hub1/scripts.pory"
	.string "Litten$"

HUB1_ONFRAME_Text_21:
# 248 "data/maps/Hub1/scripts.pory"
	.string "Popplio$"

HUB1_ONFRAME_Text_22:
# 249 "data/maps/Hub1/scripts.pory"
	.string "Grookey$"

HUB1_ONFRAME_Text_23:
# 250 "data/maps/Hub1/scripts.pory"
	.string "Scorbunny$"

HUB1_ONFRAME_Text_24:
# 251 "data/maps/Hub1/scripts.pory"
	.string "Sobble$"

HUB1_ONFRAME_Text_25:
# 252 "data/maps/Hub1/scripts.pory"
	.string "Sprigatito$"

HUB1_ONFRAME_Text_26:
# 253 "data/maps/Hub1/scripts.pory"
	.string "Fuecoco$"

HUB1_ONFRAME_Text_27:
# 254 "data/maps/Hub1/scripts.pory"
	.string "Quaxly$"

HUB1_ONFRAME_Text_28:
# 372 "data/maps/Hub1/scripts.pory"
	.string "Use this item to level up your\nPokemon.$"

Hub_Event_Script_Birch_Text_0:
# 382 "data/maps/Hub1/scripts.pory"
	.string "Would you like to start a run?$"

Hub_Event_Script_Birch_Text_1:
# 385 "data/maps/Hub1/scripts.pory"
	.string "Alright then!$"

Hub_Event_Script_Birch_Text_2:
# 392 "data/maps/Hub1/scripts.pory"
	.string "Don't forget to take a starter charm\n"
	.string "with you!$"

Hub_Event_Script_Birch_Text_3:
# 394 "data/maps/Hub1/scripts.pory"
	.string "Now off you go! Good luck!$"

Hub_Event_Script_Miltank_Text_0:
# 418 "data/maps/Hub1/scripts.pory"
	.string "Bulbasaur (¥500)$"

Hub_Event_Script_Miltank_Text_1:
# 419 "data/maps/Hub1/scripts.pory"
	.string "Charmander (¥500)$"

Hub_Event_Script_Miltank_Text_2:
# 420 "data/maps/Hub1/scripts.pory"
	.string "Squirtle (¥500)$"

Hub_Event_Script_Miltank_Text_3:
# 421 "data/maps/Hub1/scripts.pory"
	.string "Chikorita (¥500)$"

Hub_Event_Script_Miltank_Text_4:
# 422 "data/maps/Hub1/scripts.pory"
	.string "Cyndaquil (¥500)$"

Hub_Event_Script_Miltank_Text_5:
# 423 "data/maps/Hub1/scripts.pory"
	.string "Totodile (¥500)$"

Hub_Event_Script_Miltank_Text_6:
# 424 "data/maps/Hub1/scripts.pory"
	.string "Treecko (¥500)$"

Hub_Event_Script_Miltank_Text_7:
# 425 "data/maps/Hub1/scripts.pory"
	.string "Torchic (¥500)$"

Hub_Event_Script_Miltank_Text_8:
# 426 "data/maps/Hub1/scripts.pory"
	.string "Mudkip (¥500)$"

Hub_Event_Script_Miltank_Text_9:
# 427 "data/maps/Hub1/scripts.pory"
	.string "Turtwig (¥500)$"

Hub_Event_Script_Miltank_Text_10:
# 428 "data/maps/Hub1/scripts.pory"
	.string "Chimchar (¥500)$"

Hub_Event_Script_Miltank_Text_11:
# 429 "data/maps/Hub1/scripts.pory"
	.string "Piplup (¥500)$"

Hub_Event_Script_Miltank_Text_12:
# 430 "data/maps/Hub1/scripts.pory"
	.string "Snivy (¥500)$"

Hub_Event_Script_Miltank_Text_13:
# 431 "data/maps/Hub1/scripts.pory"
	.string "Tepig (¥500)$"

Hub_Event_Script_Miltank_Text_14:
# 432 "data/maps/Hub1/scripts.pory"
	.string "Oshawott (¥500)$"

Hub_Event_Script_Miltank_Text_15:
# 433 "data/maps/Hub1/scripts.pory"
	.string "Chespin (¥500)$"

Hub_Event_Script_Miltank_Text_16:
# 434 "data/maps/Hub1/scripts.pory"
	.string "Fennekin (¥500)$"

Hub_Event_Script_Miltank_Text_17:
# 435 "data/maps/Hub1/scripts.pory"
	.string "Froakie (¥500)$"

Hub_Event_Script_Miltank_Text_18:
# 436 "data/maps/Hub1/scripts.pory"
	.string "Rowlet (¥500)$"

Hub_Event_Script_Miltank_Text_19:
# 437 "data/maps/Hub1/scripts.pory"
	.string "Litten (¥500)$"

Hub_Event_Script_Miltank_Text_20:
# 438 "data/maps/Hub1/scripts.pory"
	.string "Popplio (¥500)$"

Hub_Event_Script_Miltank_Text_21:
# 439 "data/maps/Hub1/scripts.pory"
	.string "Grookey (¥500)$"

Hub_Event_Script_Miltank_Text_22:
# 440 "data/maps/Hub1/scripts.pory"
	.string "Scorbunny (¥500)$"

Hub_Event_Script_Miltank_Text_23:
# 441 "data/maps/Hub1/scripts.pory"
	.string "Sobble (¥500)$"

Hub_Event_Script_Miltank_Text_24:
# 442 "data/maps/Hub1/scripts.pory"
	.string "Sprigatito (¥500)$"

Hub_Event_Script_Miltank_Text_25:
# 443 "data/maps/Hub1/scripts.pory"
	.string "Fuecoco (¥500)$"

Hub_Event_Script_Miltank_Text_26:
# 444 "data/maps/Hub1/scripts.pory"
	.string "Quaxly (¥500)$"

Hub_Event_Script_Miltank_Text_27:
# 448 "data/maps/Hub1/scripts.pory"
	.string "Would you like to adopt a pokemon?$"

Hub_Event_Script_Miltank_Text_28:
# 460 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Bulbasaur as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_29:
# 463 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry. You don't have the coins to\nadopt that pokemon.$"

Hub_Event_Script_Miltank_Text_30:
# 472 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Charmander as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_31:
# 484 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Squirtle as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_32:
# 496 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chikorita as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_33:
# 508 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Cyndaquil as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_34:
# 520 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Totodile as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_35:
# 532 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Treecko as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_36:
# 544 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Torchic as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_37:
# 556 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Mudkip as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_38:
# 568 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Turtwig as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_39:
# 580 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chimchar as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_40:
# 592 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Piplup as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_41:
# 604 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Snivy as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_42:
# 616 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Tepig as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_43:
# 628 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Oshawott as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_44:
# 640 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chespin as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_45:
# 652 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Fennekin as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_46:
# 664 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Froakie as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_47:
# 676 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Rowlet as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_48:
# 688 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Litten as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_49:
# 700 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Popplio as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_50:
# 712 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Grookey as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_51:
# 724 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Scorbunny as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_52:
# 736 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Sobble as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_53:
# 748 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Sprigatito as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_54:
# 760 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Fuecoco as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_55:
# 772 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Quaxly as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_56:
# 781 "data/maps/Hub1/scripts.pory"
	.string "You have no more starters left\nto adopt!$"

Hub_Event_Script_Chansey_Text_0:
# 822 "data/maps/Hub1/scripts.pory"
	.string "Would you like to change your starter?$"

Hub_Event_Script_Chansey_Text_1:
# 835 "data/maps/Hub1/scripts.pory"
	.string "There you go!$"

Hub_Event_Script_Chansey_Text_2:
# 843 "data/maps/Hub1/scripts.pory"
	.string "You don't have any starter pokemon yet.\pPlease consider adopting some pokemon\nfrom my friend Miltank to the right.$"

KecShop_Sign_Text_0:
# 850 "data/maps/Hub1/scripts.pory"
	.string "Welcome to the Kecleon Brother's shop!$"

KecShop_Text_0:
# 858 "data/maps/Hub1/scripts.pory"
	.string "Oran Berry (¥200)$"

KecShop_Text_1:
# 860 "data/maps/Hub1/scripts.pory"
	.string "Lum Berry (¥500)$"

KecShop_Text_2:
# 862 "data/maps/Hub1/scripts.pory"
	.string "Mem. Mushroom (¥200)$"

KecShop_Text_3:
# 864 "data/maps/Hub1/scripts.pory"
	.string "Rare Candy (¥2000)$"

KecShop_Text_4:
# 867 "data/maps/Hub1/scripts.pory"
	.string "Serious Mint (¥2000)$"

KecShop_Text_5:
# 880 "data/maps/Hub1/scripts.pory"
	.string "Thank you for your purchase!$"

KecShop_Text_6:
# 883 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry. You don't have the money to\nbuy that, kec.$"

KecShop_Text_7:
# 932 "data/maps/Hub1/scripts.pory"
	.string "Sorry, but there's nothing for you\nto buy right now, Kec.$"

KecShop_Shiny_Text_0:
# 943 "data/maps/Hub1/scripts.pory"
	.string "TM Rock Smash (¥900)$"

KecShop_Shiny_Text_1:
# 947 "data/maps/Hub1/scripts.pory"
	.string "TM Swift (¥500)$"

KecShop_Shiny_Text_2:
# 951 "data/maps/Hub1/scripts.pory"
	.string "TM Cut (¥500)$"

KecShop_Shiny_Text_3:
# 955 "data/maps/Hub1/scripts.pory"
	.string "TM Noble Roar (¥400)$"

KecShop_Shiny_Text_4:
# 959 "data/maps/Hub1/scripts.pory"
	.string "TM Charm (¥400)$"

KecShop_Shiny_Text_5:
# 963 "data/maps/Hub1/scripts.pory"
	.string "TM Fake Tears (¥400)$"

KecShop_Shiny_Text_6:
# 967 "data/maps/Hub1/scripts.pory"
	.string "TM Confuse Ray (¥800)$"

KecShop_Shiny_Text_7:
# 971 "data/maps/Hub1/scripts.pory"
	.string "TM Thunder Wave (¥800)$"

KecShop_Shiny_Text_8:
# 975 "data/maps/Hub1/scripts.pory"
	.string "TM Will-O-Wisp (¥800)$"

KecShop_Shiny_Text_9:
# 979 "data/maps/Hub1/scripts.pory"
	.string "TM Toxic (¥800)$"

Hub_Event_Script_Kecleon_Text_0:
# 1112 "data/maps/Hub1/scripts.pory"
	.string "Hey there! Would you like me to\nstock an item?$"

Hub_Event_Script_Kecleon_Text_1:
# 1129 "data/maps/Hub1/scripts.pory"
	.string "Bottle Caps (¥1000)$"

Hub_Event_Script_Kecleon_Text_2:
# 1134 "data/maps/Hub1/scripts.pory"
	.string "Gold Bottle Caps (¥2000)$"

Hub_Event_Script_Kecleon_Text_3:
# 1139 "data/maps/Hub1/scripts.pory"
	.string "Pocket Birch Bag (¥1000)$"

Hub_Event_Script_Kecleon_Text_4:
# 1156 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Lum Berry as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_5:
# 1159 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry. You don't have the coins to\nstock that item, kec.$"

Hub_Event_Script_Kecleon_Text_6:
# 1170 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Serious Mint as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_7:
# 1184 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Rare Candy as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_8:
# 1198 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked IV Bottle caps as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_9:
# 1212 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Gold Bottle caps as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_10:
# 1226 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Pocket Birch bags as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_11:
# 1234 "data/maps/Hub1/scripts.pory"
	.string "You don't have anything left\nto stock right now. Thank you for\lyour consistent patronage!\p$"

Hub_Event_Script_Shiny_Kecleon_Text_0:
# 1247 "data/maps/Hub1/scripts.pory"
	.string "Howdy! Would you like me to\nstock a new TM?$"

Hub_Event_Script_Shiny_Kecleon_Text_1:
# 1302 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Noble Roar as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_2:
# 1316 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Rock Smash as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_3:
# 1330 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Swift as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_4:
# 1344 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Cut as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_5:
# 1358 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Charm as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_6:
# 1372 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Fake Tears as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_7:
# 1386 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Confuse Ray as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_8:
# 1400 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Thunder Wave as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_9:
# 1415 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Will O Wisp as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_10:
# 1430 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Toxic as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_11:
# 1438 "data/maps/Hub1/scripts.pory"
	.string "You don't have anything left\nto puchase right now. Thank you for\lyour consistent patronage!\p$"

Hub_Event_Script_Diancie_Text_0:
# 1451 "data/maps/Hub1/scripts.pory"
	.string "Hey there! I'm Diancie.\n"
	.string "I love collecting special gems.\l"
	.string "I plan on selling some of them soon\l"
	.string "but I don't have any to sell right now.\l"
	.string "I hope you come visit again another\l"
	.string "time.$"

Hub_Event_Script_Diancie_Text_1:
# 1459 "data/maps/Hub1/scripts.pory"
	.string "Hiya! I've finally started selling\n"
	.string "some of my precious gems.\l"
	.string "To celebrate, I'll give you this\l"
	.string "one on the house!$"

Hub_Event_Script_Diancie_Text_2:
# 1468 "data/maps/Hub1/scripts.pory"
	.string "There aren't so many gems I want to,\n"
	.string "sell right now. But I might sell more\l"
	.string "in the future.$"

Hub_Event_Script_Diancie_Text_3:
# 1475 "data/maps/Hub1/scripts.pory"
	.string "Venusaurite (¥1000)$"

Hub_Event_Script_Diancie_Text_4:
# 1479 "data/maps/Hub1/scripts.pory"
	.string "Charizardite Y (¥1000)$"

Hub_Event_Script_Diancie_Text_5:
# 1483 "data/maps/Hub1/scripts.pory"
	.string "Blastoisinite (¥1000)$"

Hub_Event_Script_Diancie_Text_6:
# 1487 "data/maps/Hub1/scripts.pory"
	.string "Beedrillite (¥1000)$"

Hub_Event_Script_Diancie_Text_7:
# 1491 "data/maps/Hub1/scripts.pory"
	.string "Pidgeotite (¥1000)$"

Hub_Event_Script_Diancie_Text_8:
# 1495 "data/maps/Hub1/scripts.pory"
	.string "Alakazite (¥1000)$"

Hub_Event_Script_Diancie_Text_9:
# 1499 "data/maps/Hub1/scripts.pory"
	.string "Slowbronite (¥1000)$"

Hub_Event_Script_Diancie_Text_10:
# 1503 "data/maps/Hub1/scripts.pory"
	.string "Gengarite (¥1000)$"

Hub_Event_Script_Diancie_Text_11:
# 1507 "data/maps/Hub1/scripts.pory"
	.string "Kangaskhanite (¥1000)$"

Hub_Event_Script_Diancie_Text_12:
# 1511 "data/maps/Hub1/scripts.pory"
	.string "Pinsirite (¥1000)$"

Hub_Event_Script_Diancie_Text_13:
# 1515 "data/maps/Hub1/scripts.pory"
	.string "Gyaradosite (¥1000)$"

Hub_Event_Script_Diancie_Text_14:
# 1519 "data/maps/Hub1/scripts.pory"
	.string "Aerodactylite (¥1000)$"

Hub_Event_Script_Diancie_Text_15:
# 1523 "data/maps/Hub1/scripts.pory"
	.string "Ampharosite (¥1000)$"

Hub_Event_Script_Diancie_Text_16:
# 1527 "data/maps/Hub1/scripts.pory"
	.string "Steelixite (¥1000)$"

Hub_Event_Script_Diancie_Text_17:
# 1531 "data/maps/Hub1/scripts.pory"
	.string "Scizorite (¥1000)$"

Hub_Event_Script_Diancie_Text_18:
# 1535 "data/maps/Hub1/scripts.pory"
	.string "Heracronite (¥1000)$"

Hub_Event_Script_Diancie_Text_19:
# 1539 "data/maps/Hub1/scripts.pory"
	.string "Houndoominite (¥1000)$"

Hub_Event_Script_Diancie_Text_20:
# 1543 "data/maps/Hub1/scripts.pory"
	.string "Tyranitarite (¥1000)$"

Hub_Event_Script_Diancie_Text_21:
# 1547 "data/maps/Hub1/scripts.pory"
	.string "Sceptilite (¥1000)$"

Hub_Event_Script_Diancie_Text_22:
# 1551 "data/maps/Hub1/scripts.pory"
	.string "Blazikenite (¥1000)$"

Hub_Event_Script_Diancie_Text_23:
# 1555 "data/maps/Hub1/scripts.pory"
	.string "Swampertite (¥1000)$"

Hub_Event_Script_Diancie_Text_24:
# 1559 "data/maps/Hub1/scripts.pory"
	.string "Gardevoirite (¥1000)$"

Hub_Event_Script_Diancie_Text_25:
# 1563 "data/maps/Hub1/scripts.pory"
	.string "Sablenite (¥1000)$"

Hub_Event_Script_Diancie_Text_26:
# 1567 "data/maps/Hub1/scripts.pory"
	.string "Mawilite (¥1000)$"

Hub_Event_Script_Diancie_Text_27:
# 1571 "data/maps/Hub1/scripts.pory"
	.string "Aggronite (¥1000)$"

Hub_Event_Script_Diancie_Text_28:
# 1575 "data/maps/Hub1/scripts.pory"
	.string "Medichamite (¥1000)$"

Hub_Event_Script_Diancie_Text_29:
# 1579 "data/maps/Hub1/scripts.pory"
	.string "Manectite (¥1000)$"

Hub_Event_Script_Diancie_Text_30:
# 1583 "data/maps/Hub1/scripts.pory"
	.string "Sharpedonite (¥1000)$"

Hub_Event_Script_Diancie_Text_31:
# 1587 "data/maps/Hub1/scripts.pory"
	.string "Cameruptite (¥1000)$"

Hub_Event_Script_Diancie_Text_32:
# 1591 "data/maps/Hub1/scripts.pory"
	.string "Altarianite (¥1000)$"

Hub_Event_Script_Diancie_Text_33:
# 1595 "data/maps/Hub1/scripts.pory"
	.string "Banettite (¥1000)$"

Hub_Event_Script_Diancie_Text_34:
# 1599 "data/maps/Hub1/scripts.pory"
	.string "Absolite (¥1000)$"

Hub_Event_Script_Diancie_Text_35:
# 1603 "data/maps/Hub1/scripts.pory"
	.string "Glalitite (¥1000)$"

Hub_Event_Script_Diancie_Text_36:
# 1607 "data/maps/Hub1/scripts.pory"
	.string "Salamencite (¥1000)$"

Hub_Event_Script_Diancie_Text_37:
# 1611 "data/maps/Hub1/scripts.pory"
	.string "Metagrossite (¥1000)$"

Hub_Event_Script_Diancie_Text_38:
# 1615 "data/maps/Hub1/scripts.pory"
	.string "Lopunnite (¥1000)$"

Hub_Event_Script_Diancie_Text_39:
# 1619 "data/maps/Hub1/scripts.pory"
	.string "Garchompite (¥1000)$"

Hub_Event_Script_Diancie_Text_40:
# 1623 "data/maps/Hub1/scripts.pory"
	.string "Lucarionite (¥1000)$"

Hub_Event_Script_Diancie_Text_41:
# 1627 "data/maps/Hub1/scripts.pory"
	.string "Abomasite (¥1000)$"

Hub_Event_Script_Diancie_Text_42:
# 1631 "data/maps/Hub1/scripts.pory"
	.string "Galladite (¥1000)$"

Hub_Event_Script_Diancie_Text_43:
# 1635 "data/maps/Hub1/scripts.pory"
	.string "Clefablite (¥1000)$"

Hub_Event_Script_Diancie_Text_44:
# 1639 "data/maps/Hub1/scripts.pory"
	.string "Victreebelite (¥1000)$"

Hub_Event_Script_Diancie_Text_45:
# 1643 "data/maps/Hub1/scripts.pory"
	.string "Starminite (¥1000)$"

Hub_Event_Script_Diancie_Text_46:
# 1647 "data/maps/Hub1/scripts.pory"
	.string "Dragoninite (¥1000)$"

Hub_Event_Script_Diancie_Text_47:
# 1651 "data/maps/Hub1/scripts.pory"
	.string "Meganiumite (¥1000)$"

Hub_Event_Script_Diancie_Text_48:
# 1655 "data/maps/Hub1/scripts.pory"
	.string "Feraligite (¥1000)$"

Hub_Event_Script_Diancie_Text_49:
# 1659 "data/maps/Hub1/scripts.pory"
	.string "Skarmorite (¥1000)$"

Hub_Event_Script_Diancie_Text_50:
# 1663 "data/maps/Hub1/scripts.pory"
	.string "Froslassite (¥1000)$"

Hub_Event_Script_Diancie_Text_51:
# 1667 "data/maps/Hub1/scripts.pory"
	.string "Emboarite (¥1000)$"

Hub_Event_Script_Diancie_Text_52:
# 1671 "data/maps/Hub1/scripts.pory"
	.string "Excadrite (¥1000)$"

Hub_Event_Script_Diancie_Text_53:
# 1675 "data/maps/Hub1/scripts.pory"
	.string "Scolipite (¥1000)$"

Hub_Event_Script_Diancie_Text_54:
# 1679 "data/maps/Hub1/scripts.pory"
	.string "Scraftinite (¥1000)$"

Hub_Event_Script_Diancie_Text_55:
# 1683 "data/maps/Hub1/scripts.pory"
	.string "Eelektrossite (¥1000)$"

Hub_Event_Script_Diancie_Text_56:
# 1687 "data/maps/Hub1/scripts.pory"
	.string "Chandelurite (¥1000)$"

Hub_Event_Script_Diancie_Text_57:
# 1691 "data/maps/Hub1/scripts.pory"
	.string "Chesnaughtite (¥1000)$"

Hub_Event_Script_Diancie_Text_58:
# 1695 "data/maps/Hub1/scripts.pory"
	.string "Delphoxite (¥1000)$"

Hub_Event_Script_Diancie_Text_59:
# 1699 "data/maps/Hub1/scripts.pory"
	.string "Greninjite (¥1000)$"

Hub_Event_Script_Diancie_Text_60:
# 1703 "data/maps/Hub1/scripts.pory"
	.string "Pyroarite (¥1000)$"

Hub_Event_Script_Diancie_Text_61:
# 1707 "data/maps/Hub1/scripts.pory"
	.string "Malamarite (¥1000)$"

Hub_Event_Script_Diancie_Text_62:
# 1711 "data/maps/Hub1/scripts.pory"
	.string "Barbaracite (¥1000)$"

Hub_Event_Script_Diancie_Text_63:
# 1715 "data/maps/Hub1/scripts.pory"
	.string "Dragalgite (¥1000)$"

Hub_Event_Script_Diancie_Text_64:
# 1719 "data/maps/Hub1/scripts.pory"
	.string "Hawluchanite (¥1000)$"

Hub_Event_Script_Diancie_Text_65:
# 1723 "data/maps/Hub1/scripts.pory"
	.string "Drampanite (¥1000)$"

Hub_Event_Script_Diancie_Text_66:
# 1727 "data/maps/Hub1/scripts.pory"
	.string "Falinksite (¥1000)$"

Hub_Event_Script_Diancie_Text_67:
# 1731 "data/maps/Hub1/scripts.pory"
	.string "Raichunite X (¥1000)$"

Hub_Event_Script_Diancie_Text_68:
# 1735 "data/maps/Hub1/scripts.pory"
	.string "Raichunite Y (¥1000)$"

Hub_Event_Script_Diancie_Text_69:
# 1739 "data/maps/Hub1/scripts.pory"
	.string "Chimechite (¥1000)$"

Hub_Event_Script_Diancie_Text_70:
# 1743 "data/maps/Hub1/scripts.pory"
	.string "Staraptite (¥1000)$"

Hub_Event_Script_Diancie_Text_71:
# 1747 "data/maps/Hub1/scripts.pory"
	.string "Golurkite (¥1000)$"

Hub_Event_Script_Diancie_Text_72:
# 1751 "data/maps/Hub1/scripts.pory"
	.string "Meowsticite (¥1000)$"

Hub_Event_Script_Diancie_Text_73:
# 1755 "data/maps/Hub1/scripts.pory"
	.string "Crabominite (¥1000)$"

Hub_Event_Script_Diancie_Text_74:
# 1759 "data/maps/Hub1/scripts.pory"
	.string "Golisopite (¥1000)$"

Hub_Event_Script_Diancie_Text_75:
# 1763 "data/maps/Hub1/scripts.pory"
	.string "Scovillainite (¥1000)$"

Hub_Event_Script_Diancie_Text_76:
# 1767 "data/maps/Hub1/scripts.pory"
	.string "Glimmoranite (¥1000)$"

Hub_Event_Script_Diancie_Text_77:
# 1771 "data/maps/Hub1/scripts.pory"
	.string "Baxcalibrite (¥1000)$"

Hub_Event_Script_Diancie_Text_78:
# 1778 "data/maps/Hub1/scripts.pory"
	.string "Hello! Good news! I have a new\n"
	.string "Mega Stone in stock!\l"
	.string "Please take a look!$"

Hub_Event_Script_Diancie_Text_79:
# 1784 "data/maps/Hub1/scripts.pory"
	.string "Hello! Would you like to\nbuy a Mega Stone?$"

Hub_Event_Script_Diancie_Text_80:
# 1798 "data/maps/Hub1/scripts.pory"
	.string "You got a Venusaurite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_81:
# 1801 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry, but you don't have the\n coins for that right now.$"

Hub_Event_Script_Diancie_Text_82:
# 1813 "data/maps/Hub1/scripts.pory"
	.string "You got a Charizardite Y as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_83:
# 1828 "data/maps/Hub1/scripts.pory"
	.string "You got a Blastoisinite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_84:
# 1843 "data/maps/Hub1/scripts.pory"
	.string "You got a Beedrillite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_85:
# 1858 "data/maps/Hub1/scripts.pory"
	.string "You got a Pidgeotite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_86:
# 1873 "data/maps/Hub1/scripts.pory"
	.string "You got an Alakazite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_87:
# 1888 "data/maps/Hub1/scripts.pory"
	.string "You got a Slowbronite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_88:
# 1903 "data/maps/Hub1/scripts.pory"
	.string "You got a Gengarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_89:
# 1918 "data/maps/Hub1/scripts.pory"
	.string "You got a Kangaskhanite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_90:
# 1933 "data/maps/Hub1/scripts.pory"
	.string "You got a Pinsirite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_91:
# 1948 "data/maps/Hub1/scripts.pory"
	.string "You got a Gyaradosite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_92:
# 1963 "data/maps/Hub1/scripts.pory"
	.string "You got an Aerodactylite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_93:
# 1978 "data/maps/Hub1/scripts.pory"
	.string "You got an Ampharosite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_94:
# 1993 "data/maps/Hub1/scripts.pory"
	.string "You got a Steelixite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_95:
# 2008 "data/maps/Hub1/scripts.pory"
	.string "You got a Scizorite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_96:
# 2023 "data/maps/Hub1/scripts.pory"
	.string "You got a Heracronite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_97:
# 2038 "data/maps/Hub1/scripts.pory"
	.string "You got a Houndoominite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_98:
# 2053 "data/maps/Hub1/scripts.pory"
	.string "You got a Tyranitarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_99:
# 2068 "data/maps/Hub1/scripts.pory"
	.string "You got a Sceptilite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_100:
# 2083 "data/maps/Hub1/scripts.pory"
	.string "You got a Blazikenite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_101:
# 2098 "data/maps/Hub1/scripts.pory"
	.string "You got a Swampertite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_102:
# 2113 "data/maps/Hub1/scripts.pory"
	.string "You got a Gardevoirite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_103:
# 2128 "data/maps/Hub1/scripts.pory"
	.string "You got a Sablenite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_104:
# 2143 "data/maps/Hub1/scripts.pory"
	.string "You got a Mawilite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_105:
# 2158 "data/maps/Hub1/scripts.pory"
	.string "You got an Aggronite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_106:
# 2173 "data/maps/Hub1/scripts.pory"
	.string "You got a Medichamite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_107:
# 2188 "data/maps/Hub1/scripts.pory"
	.string "You got a Manectite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_108:
# 2203 "data/maps/Hub1/scripts.pory"
	.string "You got a Sharpedonite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_109:
# 2218 "data/maps/Hub1/scripts.pory"
	.string "You got a Cameruptite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_110:
# 2233 "data/maps/Hub1/scripts.pory"
	.string "You got an Altarianite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_111:
# 2248 "data/maps/Hub1/scripts.pory"
	.string "You got a Banettite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_112:
# 2263 "data/maps/Hub1/scripts.pory"
	.string "You got an Absolite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_113:
# 2278 "data/maps/Hub1/scripts.pory"
	.string "You got a Glalitite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_114:
# 2293 "data/maps/Hub1/scripts.pory"
	.string "You got a Salamencite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_115:
# 2308 "data/maps/Hub1/scripts.pory"
	.string "You got a Lopunnite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_116:
# 2323 "data/maps/Hub1/scripts.pory"
	.string "You got a Garchompite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_117:
# 2338 "data/maps/Hub1/scripts.pory"
	.string "You got a Lucarionite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_118:
# 2353 "data/maps/Hub1/scripts.pory"
	.string "You got an Abomasite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_119:
# 2368 "data/maps/Hub1/scripts.pory"
	.string "You got a Galladite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_120:
# 2383 "data/maps/Hub1/scripts.pory"
	.string "You got a Clefablite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_121:
# 2398 "data/maps/Hub1/scripts.pory"
	.string "You got a Victreebelite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_122:
# 2413 "data/maps/Hub1/scripts.pory"
	.string "You got a Starminite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_123:
# 2428 "data/maps/Hub1/scripts.pory"
	.string "You got a Dragoninite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_124:
# 2443 "data/maps/Hub1/scripts.pory"
	.string "You got a Meganiumite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_125:
# 2458 "data/maps/Hub1/scripts.pory"
	.string "You got a Feraligite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_126:
# 2473 "data/maps/Hub1/scripts.pory"
	.string "You got a Skarmorite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_127:
# 2488 "data/maps/Hub1/scripts.pory"
	.string "You got a Froslassite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_128:
# 2503 "data/maps/Hub1/scripts.pory"
	.string "You got an Emboarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_129:
# 2518 "data/maps/Hub1/scripts.pory"
	.string "You got an Excadrite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_130:
# 2533 "data/maps/Hub1/scripts.pory"
	.string "You got a Scolipite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_131:
# 2548 "data/maps/Hub1/scripts.pory"
	.string "You got a Scraftinite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_132:
# 2563 "data/maps/Hub1/scripts.pory"
	.string "You got an Eelektrossite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_133:
# 2578 "data/maps/Hub1/scripts.pory"
	.string "You got a Chandelurite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_134:
# 2593 "data/maps/Hub1/scripts.pory"
	.string "You got a Chesnaughtite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_135:
# 2608 "data/maps/Hub1/scripts.pory"
	.string "You got a Delphoxite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_136:
# 2623 "data/maps/Hub1/scripts.pory"
	.string "You got a Greninjite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_137:
# 2638 "data/maps/Hub1/scripts.pory"
	.string "You got a Pyroarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_138:
# 2653 "data/maps/Hub1/scripts.pory"
	.string "You got a Malamarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_139:
# 2668 "data/maps/Hub1/scripts.pory"
	.string "You got a Barbaracite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_140:
# 2683 "data/maps/Hub1/scripts.pory"
	.string "You got a Dragalgite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_141:
# 2698 "data/maps/Hub1/scripts.pory"
	.string "You got a Hawluchanite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_142:
# 2713 "data/maps/Hub1/scripts.pory"
	.string "You got a Drampanite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_143:
# 2728 "data/maps/Hub1/scripts.pory"
	.string "You got a Falinksite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_144:
# 2743 "data/maps/Hub1/scripts.pory"
	.string "You got a Raichunite X as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_145:
# 2758 "data/maps/Hub1/scripts.pory"
	.string "You got a Raichunite Y as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_146:
# 2773 "data/maps/Hub1/scripts.pory"
	.string "You got a Chimechite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_147:
# 2788 "data/maps/Hub1/scripts.pory"
	.string "You got a Staraptite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_148:
# 2803 "data/maps/Hub1/scripts.pory"
	.string "You got a Golurkite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_149:
# 2818 "data/maps/Hub1/scripts.pory"
	.string "You got a Meowsticite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_150:
# 2833 "data/maps/Hub1/scripts.pory"
	.string "You got a Crabominite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_151:
# 2848 "data/maps/Hub1/scripts.pory"
	.string "You got a Golisopite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_152:
# 2863 "data/maps/Hub1/scripts.pory"
	.string "You got a Scovillainite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_153:
# 2878 "data/maps/Hub1/scripts.pory"
	.string "You got a Glimmoranite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_154:
# 2893 "data/maps/Hub1/scripts.pory"
	.string "You got a Baxcalibrite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_155:
# 2900 "data/maps/Hub1/scripts.pory"
	.string "I don't have anything on sale right now,\n"
	.string "sorry.\p"
	.string "Try doing more runs and getting far\n"
	.string "with new pokemon!$"

Hub_Event_Script_Marowak_Text_0:
# 2914 "data/maps/Hub1/scripts.pory"
	.string "Hi. My dojo is closed right now. Maybe it\n"
	.string "will open in a future update.$"

Hub_Event_Script_Chimecho_Text_0:
# 2923 "data/maps/Hub1/scripts.pory"
	.string "Heya. Would you like to\nsee your unlocked starter charms?$"

Hub_Event_Script_Chimecho_Text_1:
# 2927 "data/maps/Hub1/scripts.pory"
	.string "Shiny Starter Charm$"

Hub_Event_Script_Chimecho_Text_2:
# 2928 "data/maps/Hub1/scripts.pory"
	.string "Lump Sum Charm$"

Hub_Event_Script_Chimecho_Text_3:
# 2929 "data/maps/Hub1/scripts.pory"
	.string "Berry Pack Charm$"

Hub_Event_Script_Chimecho_Text_4:
# 2930 "data/maps/Hub1/scripts.pory"
	.string "Tinted Charm$"

Hub_Event_Script_Chimecho_Text_5:
# 2931 "data/maps/Hub1/scripts.pory"
	.string "Normal Charm$"

Hub_Event_Script_Chimecho_Text_6:
# 2932 "data/maps/Hub1/scripts.pory"
	.string "Minty Charm$"

Hub_Event_Script_Chimecho_Text_7:
# 2940 "data/maps/Hub1/scripts.pory"
	.string "Your starter pokemon becomes shiny.$"

Hub_Event_Script_Chimecho_Text_8:
# 2942 "data/maps/Hub1/scripts.pory"
	.string "Gain ¥1500.$"

Hub_Event_Script_Chimecho_Text_9:
# 2944 "data/maps/Hub1/scripts.pory"
	.string "Gain an oran berry, a sitrus berry, a lum\n"
	.string "berry and a berry juice.$"

Hub_Event_Script_Chimecho_Text_10:
# 2946 "data/maps/Hub1/scripts.pory"
	.string "Your not very effective moves do 1.5\n"
	.string "times more damage.$"

Hub_Event_Script_Chimecho_Text_11:
# 2948 "data/maps/Hub1/scripts.pory"
	.string "Your normal moves do 1.1 times more\n"
	.string "damage.$"

Hub_Event_Script_Chimecho_Text_12:
# 2950 "data/maps/Hub1/scripts.pory"
	.string "Gain a random mint at the start of each\n"
	.string "path.$"

Hub_Event_Script_Chimecho_Text_13:
# 2956 "data/maps/Hub1/scripts.pory"
	.string "Ok then! Keep playing more to unlock\n"
	.string "more starter charms!$"

GiveStarterCharm_Text_0:
# 3010 "data/maps/Hub1/scripts.pory"
	.string "Good luck on your run!$"
