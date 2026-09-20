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
	goto_if_set FLAG_HOOH_FEATHER_USED, AfterWarpIntoNewAct_2
AfterWarpIntoNewAct_1:
# 15 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_WARPED_INTO_NEW_ACT, AfterWarpIntoNewAct_4
	return

AfterWarpIntoNewAct_2:
# 10 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_0
# 11 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_HOOH_FEATHER_USED
# 12 "data/maps/Hub1/scripts.pory"
	releaseall
	goto AfterWarpIntoNewAct_1

AfterWarpIntoNewAct_4:
# 16 "data/maps/Hub1/scripts.pory"
	setflag FLAG_WARPED_INTO_NEW_ACT
# 19 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_PHIONE_EGG_HATCHED, AfterWarpIntoNewAct_7
AfterWarpIntoNewAct_6:
# 29 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_GIVE_MINTY_CHARM_MINT, AfterWarpIntoNewAct_10
AfterWarpIntoNewAct_9:
# 37 "data/maps/Hub1/scripts.pory"
	compare VAR_CURRENT_ACT, 1
	goto_if_gt AfterWarpIntoNewAct_13
AfterWarpIntoNewAct_12:
# 45 "data/maps/Hub1/scripts.pory"
	compare VAR_CURRENT_ACT, 0
	goto_if_eq AfterWarpIntoNewAct_16
AfterWarpIntoNewAct_15:
# 78 "data/maps/Hub1/scripts.pory"
	releaseall
	return

AfterWarpIntoNewAct_7:
# 20 "data/maps/Hub1/scripts.pory"
	removeitem ITEM_PHIONE_EGG_CHARM, 1
# 21 "data/maps/Hub1/scripts.pory"
	setvar VAR_RESULT, SPECIES_PHIONE
# 22 "data/maps/Hub1/scripts.pory"
	special GiveBufferedMon
# 23 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_EVOLVED
# 24 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_PHIONE_EGG_HATCHED
# 25 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_1
	goto AfterWarpIntoNewAct_6

AfterWarpIntoNewAct_10:
# 30 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_2
# 31 "data/maps/Hub1/scripts.pory"
	randomelement ITEM_LONELY_MINT, ITEM_ADAMANT_MINT, ITEM_NAUGHTY_MINT, ITEM_BRAVE_MINT, ITEM_BOLD_MINT, ITEM_IMPISH_MINT, ITEM_LAX_MINT, ITEM_RELAXED_MINT, ITEM_MODEST_MINT, ITEM_MILD_MINT, ITEM_RASH_MINT, ITEM_QUIET_MINT, ITEM_CALM_MINT, ITEM_GENTLE_MINT, ITEM_CAREFUL_MINT, ITEM_SASSY_MINT, ITEM_SERIOUS_MINT
# 32 "data/maps/Hub1/scripts.pory"
	giveitem VAR_RESULT
# 33 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_GIVE_MINTY_CHARM_MINT
	goto AfterWarpIntoNewAct_9

AfterWarpIntoNewAct_13:
# 38 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 39 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_LEVEL_CAP
# 40 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_3
	goto AfterWarpIntoNewAct_12

AfterWarpIntoNewAct_16:
# 47 "data/maps/Hub1/scripts.pory"
	compare VAR_COINS_COLLECTED_IN_A_RUN, 0
	goto_if_gt AfterWarpIntoNewAct_19
AfterWarpIntoNewAct_18:
# 55 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MINTY_CHARM_STARTER_UNLOCKED, AfterWarpIntoNewAct_23
AfterWarpIntoNewAct_21:
# 59 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TINTED_CHARM_STARTER_UNLOCKED, AfterWarpIntoNewAct_28
AfterWarpIntoNewAct_26:
# 63 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_NORMAL_CHARM_STARTER_UNLOCKED, AfterWarpIntoNewAct_33
AfterWarpIntoNewAct_31:
# 68 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_NEW_DIFFICULTY_UNLOCKED, AfterWarpIntoNewAct_37
AfterWarpIntoNewAct_36:
# 73 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_HOENN1_ALT_UNLOCKED, AfterWarpIntoNewAct_40
	goto AfterWarpIntoNewAct_15

AfterWarpIntoNewAct_19:
# 48 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_COINS_COLLECTED_IN_A_RUN
# 49 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_4
# 50 "data/maps/Hub1/scripts.pory"
	setvar VAR_COINS_COLLECTED_IN_A_RUN, 0
	goto AfterWarpIntoNewAct_18

AfterWarpIntoNewAct_22:
# 56 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MINTY_CHARM_STARTER_UNLOCKED
# 57 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_5
	goto AfterWarpIntoNewAct_21

AfterWarpIntoNewAct_23:
# 55 "data/maps/Hub1/scripts.pory"
	compare VAR_TOTAL_RUNS, 0
	goto_if_gt AfterWarpIntoNewAct_22
	goto AfterWarpIntoNewAct_21

AfterWarpIntoNewAct_27:
# 60 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TINTED_CHARM_STARTER_UNLOCKED
# 61 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_6
	goto AfterWarpIntoNewAct_26

AfterWarpIntoNewAct_28:
# 59 "data/maps/Hub1/scripts.pory"
	compare VAR_TOTAL_RUNS, 3
	goto_if_gt AfterWarpIntoNewAct_27
	goto AfterWarpIntoNewAct_26

AfterWarpIntoNewAct_32:
# 64 "data/maps/Hub1/scripts.pory"
	setflag FLAG_NORMAL_CHARM_STARTER_UNLOCKED
# 65 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_7
	goto AfterWarpIntoNewAct_31

AfterWarpIntoNewAct_33:
# 63 "data/maps/Hub1/scripts.pory"
	compare VAR_TOTAL_RUNS, 6
	goto_if_gt AfterWarpIntoNewAct_32
	goto AfterWarpIntoNewAct_31

AfterWarpIntoNewAct_37:
# 69 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_8
# 70 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_NEW_DIFFICULTY_UNLOCKED
	goto AfterWarpIntoNewAct_36

AfterWarpIntoNewAct_39:
# 74 "data/maps/Hub1/scripts.pory"
	setflag FLAG_HOENN1_ALT_UNLOCKED
# 75 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_9
	goto AfterWarpIntoNewAct_15

AfterWarpIntoNewAct_40:
# 73 "data/maps/Hub1/scripts.pory"
	compare VAR_ACT1_WINS, 1
	goto_if_gt AfterWarpIntoNewAct_39
	goto AfterWarpIntoNewAct_15


GiveCommonItem::
# 84 "data/maps/Hub1/scripts.pory"
	special BufferCommonItem
# 85 "data/maps/Hub1/scripts.pory"
	giveitem VAR_RESULT
	return


GiveUncommonItem::
# 89 "data/maps/Hub1/scripts.pory"
	special BufferUncommonItem
# 90 "data/maps/Hub1/scripts.pory"
	giveitem VAR_RESULT
	return


GiveRareItem::
# 94 "data/maps/Hub1/scripts.pory"
	special BufferRareItem
# 95 "data/maps/Hub1/scripts.pory"
	giveitem VAR_RESULT
	return


Act1BirchBag::
# 99 "data/maps/Hub1/scripts.pory"
	playse SE_CLICK
# 100 "data/maps/Hub1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 101 "data/maps/Hub1/scripts.pory"
	setvar VAR_0x8000, 33
# 102 "data/maps/Hub1/scripts.pory"
	special LoadBirchBagPoolById
# 103 "data/maps/Hub1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 104 "data/maps/Hub1/scripts.pory"
	waitstate
# 105 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_EVOLVED
# 106 "data/maps/Hub1/scripts.pory"
	msgbox Act1BirchBag_Text_0
	return


Act2BirchBag::
# 109 "data/maps/Hub1/scripts.pory"
	playse SE_CLICK
# 110 "data/maps/Hub1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 111 "data/maps/Hub1/scripts.pory"
	setvar VAR_0x8000, 34
# 112 "data/maps/Hub1/scripts.pory"
	special LoadBirchBagPoolById
# 113 "data/maps/Hub1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 114 "data/maps/Hub1/scripts.pory"
	waitstate
# 115 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_EVOLVED
# 116 "data/maps/Hub1/scripts.pory"
	msgbox Act1BirchBag_Text_0
	return


Act3BirchBag::
# 119 "data/maps/Hub1/scripts.pory"
	playse SE_CLICK
# 120 "data/maps/Hub1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 121 "data/maps/Hub1/scripts.pory"
	setvar VAR_0x8000, 35
# 122 "data/maps/Hub1/scripts.pory"
	special LoadBirchBagPoolById
# 123 "data/maps/Hub1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 124 "data/maps/Hub1/scripts.pory"
	waitstate
# 125 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_EVOLVED
# 126 "data/maps/Hub1/scripts.pory"
	msgbox Act1BirchBag_Text_0
	return


AbraTeleport::
# 130 "data/maps/Hub1/scripts.pory"
	lockall
# 131 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_DEFEATED_PATH_LEADER, AbraTeleport_1
# 136 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_1, MSGBOX_YESNO
# 137 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 138 "data/maps/Hub1/scripts.pory"
	case YES, AbraTeleport_5
# 142 "data/maps/Hub1/scripts.pory"
	case NO, AbraTeleport_6
	return

AbraTeleport_1:
# 132 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_0
# 133 "data/maps/Hub1/scripts.pory"
	releaseall
	return

AbraTeleport_5:
# 139 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_2
# 140 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_DEFEATED_PATH_LEADER
# 141 "data/maps/Hub1/scripts.pory"
	special WarpToNextAncient
	return

AbraTeleport_6:
# 143 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_3
# 144 "data/maps/Hub1/scripts.pory"
	releaseall
	return


RivalFight1::
# 150 "data/maps/Hub1/scripts.pory"
	switch VAR_CURRENT_RIVAL
# 151 "data/maps/Hub1/scripts.pory"
	case 0, RivalFight1_2
# 156 "data/maps/Hub1/scripts.pory"
	case 1, RivalFight1_3
	return

RivalFight1_2:
# 152 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_TREECKO, RivalFight1_Text_0, RivalFight1_Text_1
# 153 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight1_Text_2, MSGBOX_AUTOCLOSE
# 154 "data/maps/Hub1/scripts.pory"
	waitmessage
	end

RivalFight1_3:
# 157 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_TORCHIC, RivalFight1_Text_3, RivalFight1_Text_1
# 158 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight1_Text_2, MSGBOX_AUTOCLOSE
# 159 "data/maps/Hub1/scripts.pory"
	waitmessage
	end


RivalFight2::
# 165 "data/maps/Hub1/scripts.pory"
	switch VAR_CURRENT_RIVAL
# 166 "data/maps/Hub1/scripts.pory"
	case 0, RivalFight2_2
# 171 "data/maps/Hub1/scripts.pory"
	case 1, RivalFight2_3
	return

RivalFight2_2:
# 167 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_GROVYLE, RivalFight2_Text_0, RivalFight2_Text_1
# 168 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight2_Text_2, MSGBOX_AUTOCLOSE
# 169 "data/maps/Hub1/scripts.pory"
	waitmessage
	end

RivalFight2_3:
# 172 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_COMBUSKEN, RivalFight2_Text_3, RivalFight2_Text_4
# 173 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight2_Text_5, MSGBOX_AUTOCLOSE
# 174 "data/maps/Hub1/scripts.pory"
	waitmessage
	end


RivalFight3::
# 180 "data/maps/Hub1/scripts.pory"
	switch VAR_CURRENT_RIVAL
# 181 "data/maps/Hub1/scripts.pory"
	case 0, RivalFight3_2
# 186 "data/maps/Hub1/scripts.pory"
	case 1, RivalFight3_3
	return

RivalFight3_2:
# 182 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_SCEPTILE, RivalFight3_Text_0, RivalFight3_Text_1
# 183 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight3_Text_2, MSGBOX_AUTOCLOSE
# 184 "data/maps/Hub1/scripts.pory"
	waitmessage
	end

RivalFight3_3:
# 187 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_BLAZIKEN, RivalFight3_Text_3, RivalFight3_Text_4
# 188 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight3_Text_4, MSGBOX_AUTOCLOSE
# 189 "data/maps/Hub1/scripts.pory"
	waitmessage
	end


RivalFight4::
# 195 "data/maps/Hub1/scripts.pory"
	switch VAR_CURRENT_RIVAL
# 196 "data/maps/Hub1/scripts.pory"
	case 0, RivalFight4_2
# 201 "data/maps/Hub1/scripts.pory"
	case 1, RivalFight4_3
	return

RivalFight4_2:
# 197 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_MEGASCEPTILE, RivalFight4_Text_0, RivalFight4_Text_1
# 198 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight4_Text_2, MSGBOX_AUTOCLOSE
# 199 "data/maps/Hub1/scripts.pory"
	waitmessage
	end

RivalFight4_3:
# 202 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_MBLAZIKEN, RivalFight4_Text_3, RivalFight4_Text_4
# 203 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight4_Text_5, MSGBOX_AUTOCLOSE
# 204 "data/maps/Hub1/scripts.pory"
	waitmessage
	end


HUB1_Run_Stats_Sign::
# 216 "data/maps/Hub1/scripts.pory"
	lockall
# 218 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TOTAL_RUNS
# 219 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_ACT1_WINS
# 220 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_ACT2_WINS
# 221 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_Run_Stats_Sign_Text_0
# 222 "data/maps/Hub1/scripts.pory"
	waitmessage
# 224 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_ACT3_WINS
# 225 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_ACT4_WINS
# 226 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_ACT2_WINS
# 227 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_Run_Stats_Sign_Text_1
# 228 "data/maps/Hub1/scripts.pory"
	waitmessage
# 230 "data/maps/Hub1/scripts.pory"
	releaseall
	return


HUB1_ONWARP::
# 234 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


HUB1_ONFRAME::
# 238 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_2, 1
# 239 "data/maps/Hub1/scripts.pory"
	call AfterWarpIntoNewAct
# 242 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SYS_NEW_GAME, HUB1_ONFRAME_1
	return

HUB1_ONFRAME_1:
# 243 "data/maps/Hub1/scripts.pory"
	lockall
# 246 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SYS_NEW_GAME
# 247 "data/maps/Hub1/scripts.pory"
	setvar VAR_SHINY_RATE, 4096
# 248 "data/maps/Hub1/scripts.pory"
	setvar VAR_LEVEL_CAP, 14
# 251 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_ONFRAME_Text_0
# 254 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_1, SPECIES_BULBASAUR
# 255 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_2, SPECIES_CHARMANDER
# 256 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_3, SPECIES_SQUIRTLE
# 257 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_4, SPECIES_CHIKORITA
# 258 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_5, SPECIES_CYNDAQUIL
# 259 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_6, SPECIES_TOTODILE
# 260 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_7, SPECIES_TREECKO
# 261 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_8, SPECIES_TORCHIC
# 262 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_9, SPECIES_MUDKIP
# 263 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_10, SPECIES_TURTWIG
# 264 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_11, SPECIES_CHIMCHAR
# 265 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_12, SPECIES_PIPLUP
# 266 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_13, SPECIES_SNIVY
# 267 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_14, SPECIES_TEPIG
# 268 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_15, SPECIES_OSHAWOTT
# 269 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_16, SPECIES_CHESPIN
# 270 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_17, SPECIES_FENNEKIN
# 271 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_18, SPECIES_FROAKIE
# 272 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_19, SPECIES_ROWLET
# 273 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_20, SPECIES_LITTEN
# 274 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_21, SPECIES_POPPLIO
# 275 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_22, SPECIES_GROOKEY
# 276 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_23, SPECIES_SCORBUNNY
# 277 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_24, SPECIES_SOBBLE
# 278 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_25, SPECIES_SPRIGATITO
# 279 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_26, SPECIES_FUECOCO
# 280 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_27, SPECIES_QUAXLY
# 281 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 283 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 284 "data/maps/Hub1/scripts.pory"
	case SPECIES_BULBASAUR, HUB1_ONFRAME_5
# 288 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHARMANDER, HUB1_ONFRAME_6
# 292 "data/maps/Hub1/scripts.pory"
	case SPECIES_SQUIRTLE, HUB1_ONFRAME_7
# 296 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIKORITA, HUB1_ONFRAME_8
# 300 "data/maps/Hub1/scripts.pory"
	case SPECIES_CYNDAQUIL, HUB1_ONFRAME_9
# 304 "data/maps/Hub1/scripts.pory"
	case SPECIES_TOTODILE, HUB1_ONFRAME_10
# 308 "data/maps/Hub1/scripts.pory"
	case SPECIES_TREECKO, HUB1_ONFRAME_11
# 312 "data/maps/Hub1/scripts.pory"
	case SPECIES_TORCHIC, HUB1_ONFRAME_12
# 316 "data/maps/Hub1/scripts.pory"
	case SPECIES_MUDKIP, HUB1_ONFRAME_13
# 320 "data/maps/Hub1/scripts.pory"
	case SPECIES_TURTWIG, HUB1_ONFRAME_14
# 324 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIMCHAR, HUB1_ONFRAME_15
# 328 "data/maps/Hub1/scripts.pory"
	case SPECIES_PIPLUP, HUB1_ONFRAME_16
# 332 "data/maps/Hub1/scripts.pory"
	case SPECIES_SNIVY, HUB1_ONFRAME_17
# 336 "data/maps/Hub1/scripts.pory"
	case SPECIES_TEPIG, HUB1_ONFRAME_18
# 340 "data/maps/Hub1/scripts.pory"
	case SPECIES_OSHAWOTT, HUB1_ONFRAME_19
# 344 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHESPIN, HUB1_ONFRAME_20
# 348 "data/maps/Hub1/scripts.pory"
	case SPECIES_FENNEKIN, HUB1_ONFRAME_21
# 352 "data/maps/Hub1/scripts.pory"
	case SPECIES_FROAKIE, HUB1_ONFRAME_22
# 356 "data/maps/Hub1/scripts.pory"
	case SPECIES_ROWLET, HUB1_ONFRAME_23
# 360 "data/maps/Hub1/scripts.pory"
	case SPECIES_LITTEN, HUB1_ONFRAME_24
# 364 "data/maps/Hub1/scripts.pory"
	case SPECIES_POPPLIO, HUB1_ONFRAME_25
# 368 "data/maps/Hub1/scripts.pory"
	case SPECIES_GROOKEY, HUB1_ONFRAME_26
# 372 "data/maps/Hub1/scripts.pory"
	case SPECIES_SCORBUNNY, HUB1_ONFRAME_27
# 376 "data/maps/Hub1/scripts.pory"
	case SPECIES_SOBBLE, HUB1_ONFRAME_28
# 380 "data/maps/Hub1/scripts.pory"
	case SPECIES_SPRIGATITO, HUB1_ONFRAME_29
# 384 "data/maps/Hub1/scripts.pory"
	case SPECIES_FUECOCO, HUB1_ONFRAME_30
# 388 "data/maps/Hub1/scripts.pory"
	case SPECIES_QUAXLY, HUB1_ONFRAME_31
HUB1_ONFRAME_3:
# 394 "data/maps/Hub1/scripts.pory"
	special UpdateTransformedPlayerPalette
# 395 "data/maps/Hub1/scripts.pory"
	special UpdatePlayerSprite
# 396 "data/maps/Hub1/scripts.pory"
	releaseall
# 398 "data/maps/Hub1/scripts.pory"
	lockall
# 401 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_ONFRAME_Text_28
# 403 "data/maps/Hub1/scripts.pory"
	releaseall
	return

HUB1_ONFRAME_5:
# 285 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_BULBASAUR, 14
# 286 "data/maps/Hub1/scripts.pory"
	setflag FLAG_BULBASAUR_UNLOCKED
# 287 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_BULBASAUR
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_6:
# 289 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHARMANDER, 14
# 290 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHARMANDER_UNLOCKED
# 291 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHARMANDER
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_7:
# 293 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SQUIRTLE, 14
# 294 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SQUIRTLE_UNLOCKED
# 295 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SQUIRTLE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_8:
# 297 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHIKORITA, 14
# 298 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIKORITA_UNLOCKED
# 299 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHIKORITA
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_9:
# 301 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 14
# 302 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CYNDAQUIL_UNLOCKED
# 303 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CYNDAQUIL
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_10:
# 305 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TOTODILE, 14
# 306 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TOTODILE_UNLOCKED
# 307 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TOTODILE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_11:
# 309 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TREECKO, 14
# 310 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TREECKO_UNLOCKED
# 311 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TREECKO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_12:
# 313 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TORCHIC, 14
# 314 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TORCHIC_UNLOCKED
# 315 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TORCHIC
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_13:
# 317 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_MUDKIP, 14
# 318 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MUDKIP_UNLOCKED
# 319 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_MUDKIP
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_14:
# 321 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TURTWIG, 14
# 322 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TURTWIG_UNLOCKED
# 323 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TURTWIG
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_15:
# 325 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHIMCHAR, 14
# 326 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIMCHAR_UNLOCKED
# 327 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHIMCHAR
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_16:
# 329 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_PIPLUP, 14
# 330 "data/maps/Hub1/scripts.pory"
	setflag FLAG_PIPLUP_UNLOCKED
# 331 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_PIPLUP
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_17:
# 333 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SNIVY, 14
# 334 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SNIVY_UNLOCKED
# 335 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SNIVY
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_18:
# 337 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TEPIG, 14
# 338 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TEPIG_UNLOCKED
# 339 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TEPIG
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_19:
# 341 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_OSHAWOTT, 14
# 342 "data/maps/Hub1/scripts.pory"
	setflag FLAG_OSHAWOTT_UNLOCKED
# 343 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_OSHAWOTT
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_20:
# 345 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHESPIN, 14
# 346 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHESPIN_UNLOCKED
# 347 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHESPIN
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_21:
# 349 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FENNEKIN, 14
# 350 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FENNEKIN_UNLOCKED
# 351 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_FENNEKIN
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_22:
# 353 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FROAKIE, 14
# 354 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FROAKIE_UNLOCKED
# 355 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_FROAKIE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_23:
# 357 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_ROWLET, 14
# 358 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ROWLET_UNLOCKED
# 359 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_ROWLET
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_24:
# 361 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_LITTEN, 14
# 362 "data/maps/Hub1/scripts.pory"
	setflag FLAG_LITTEN_UNLOCKED
# 363 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_LITTEN
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_25:
# 365 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_POPPLIO, 14
# 366 "data/maps/Hub1/scripts.pory"
	setflag FLAG_POPPLIO_UNLOCKED
# 367 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_POPPLIO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_26:
# 369 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_GROOKEY, 14
# 370 "data/maps/Hub1/scripts.pory"
	setflag FLAG_GROOKEY_UNLOCKED
# 371 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_GROOKEY
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_27:
# 373 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SCORBUNNY, 14
# 374 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SCORBUNNY_UNLOCKED
# 375 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SCORBUNNY
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_28:
# 377 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SOBBLE, 14
# 378 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SOBBLE_UNLOCKED
# 379 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SOBBLE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_29:
# 381 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SPRIGATITO, 14
# 382 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SPRIGATITO_UNLOCKED
# 383 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SPRIGATITO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_30:
# 385 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FUECOCO, 14
# 386 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FUECOCO_UNLOCKED
# 387 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_FUECOCO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_31:
# 389 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_QUAXLY, 14
# 390 "data/maps/Hub1/scripts.pory"
	setflag FLAG_QUAXLY_UNLOCKED
# 391 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_QUAXLY
	goto HUB1_ONFRAME_3


Hub_Event_Script_Birch::
# 408 "data/maps/Hub1/scripts.pory"
	lockall
# 409 "data/maps/Hub1/scripts.pory"
	faceplayer
# 410 "data/maps/Hub1/scripts.pory"
backtomain:
# 411 "data/maps/Hub1/scripts.pory"
	messageinstant Hub_Event_Script_Birch_Text_0
# 412 "data/maps/Hub1/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Hub_Event_Script_Birch_Text_1, Hub_Event_Script_Birch_Text_2
# 413 "data/maps/Hub1/scripts.pory"
	closemessage
# 414 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 415 "data/maps/Hub1/scripts.pory"
	case MULTI_B_PRESSED, Hub_Event_Script_Birch_2
# 419 "data/maps/Hub1/scripts.pory"
	case 0, Hub_Event_Script_Birch_3
# 450 "data/maps/Hub1/scripts.pory"
	case 1, Hub_Event_Script_Birch_4
	return

Hub_Event_Script_Birch_2:
# 416 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_3
# 417 "data/maps/Hub1/scripts.pory"
	releaseall
	end

Hub_Event_Script_Birch_3:
# 420 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_4, MSGBOX_YESNO
# 421 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 422 "data/maps/Hub1/scripts.pory"
	case YES, Hub_Event_Script_Birch_6
# 445 "data/maps/Hub1/scripts.pory"
	case NO, Hub_Event_Script_Birch_7
	return

Hub_Event_Script_Birch_4:
# 451 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CURRENT_DIFFICULTY
# 452 "data/maps/Hub1/scripts.pory"
	messageinstant Hub_Event_Script_Birch_Text_8
# 453 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_9, 0
# 454 "data/maps/Hub1/scripts.pory"
	compare VAR_UNLOCKED_DIFFICULTY, 0
	goto_if_gt Hub_Event_Script_Birch_9
Hub_Event_Script_Birch_8:
# 455 "data/maps/Hub1/scripts.pory"
	compare VAR_UNLOCKED_DIFFICULTY, 1
	goto_if_gt Hub_Event_Script_Birch_12
Hub_Event_Script_Birch_11:
# 456 "data/maps/Hub1/scripts.pory"
	compare VAR_UNLOCKED_DIFFICULTY, 2
	goto_if_gt Hub_Event_Script_Birch_15
Hub_Event_Script_Birch_14:
# 457 "data/maps/Hub1/scripts.pory"
	compare VAR_UNLOCKED_DIFFICULTY, 3
	goto_if_gt Hub_Event_Script_Birch_18
Hub_Event_Script_Birch_17:
# 458 "data/maps/Hub1/scripts.pory"
	compare VAR_UNLOCKED_DIFFICULTY, 4
	goto_if_gt Hub_Event_Script_Birch_21
Hub_Event_Script_Birch_20:
# 459 "data/maps/Hub1/scripts.pory"
	compare VAR_UNLOCKED_DIFFICULTY, 5
	goto_if_gt Hub_Event_Script_Birch_24
Hub_Event_Script_Birch_23:
# 460 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 461 "data/maps/Hub1/scripts.pory"
	closemessage
# 462 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 463 "data/maps/Hub1/scripts.pory"
	case MULTI_B_PRESSED, Hub_Event_Script_Birch_27
# 466 "data/maps/Hub1/scripts.pory"
	case 0, Hub_Event_Script_Birch_28
# 467 "data/maps/Hub1/scripts.pory"
	case 1, Hub_Event_Script_Birch_28
# 468 "data/maps/Hub1/scripts.pory"
	case 2, Hub_Event_Script_Birch_28
# 469 "data/maps/Hub1/scripts.pory"
	case 3, Hub_Event_Script_Birch_28
# 470 "data/maps/Hub1/scripts.pory"
	case 4, Hub_Event_Script_Birch_28
# 471 "data/maps/Hub1/scripts.pory"
	case 5, Hub_Event_Script_Birch_28
# 472 "data/maps/Hub1/scripts.pory"
	case 6, Hub_Event_Script_Birch_28
	return

Hub_Event_Script_Birch_6:
# 423 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_5
# 424 "data/maps/Hub1/scripts.pory"
	closemessage
# 425 "data/maps/Hub1/scripts.pory"
	applymovement Chimecho, Hub_Event_Script_Birch_Movement_0
# 429 "data/maps/Hub1/scripts.pory"
	waitmovement
# 430 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_6
# 431 "data/maps/Hub1/scripts.pory"
	call GiveStarterCharm
# 432 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_7
# 433 "data/maps/Hub1/scripts.pory"
	closemessage
# 434 "data/maps/Hub1/scripts.pory"
	applymovement Birch, Hub_Event_Script_Birch_Movement_1
# 439 "data/maps/Hub1/scripts.pory"
	waitmovement
# 440 "data/maps/Hub1/scripts.pory"
	applymovement LOCALID_PLAYER, Hub_Event_Script_Birch_Movement_2
# 443 "data/maps/Hub1/scripts.pory"
	waitmovement
# 444 "data/maps/Hub1/scripts.pory"
	special WarpToNextAct
	return

Hub_Event_Script_Birch_7:
# 446 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_3
# 447 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Birch_9:
# 454 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_10, 1
	goto Hub_Event_Script_Birch_8

Hub_Event_Script_Birch_12:
# 455 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_11, 2
	goto Hub_Event_Script_Birch_11

Hub_Event_Script_Birch_15:
# 456 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_12, 3
	goto Hub_Event_Script_Birch_14

Hub_Event_Script_Birch_18:
# 457 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_13, 4
	goto Hub_Event_Script_Birch_17

Hub_Event_Script_Birch_21:
# 458 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_14, 5
	goto Hub_Event_Script_Birch_20

Hub_Event_Script_Birch_24:
# 459 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_15, 6
	goto Hub_Event_Script_Birch_23

Hub_Event_Script_Birch_27:
# 464 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_16
# 465 "data/maps/Hub1/scripts.pory"
	goto backtomain
	return

Hub_Event_Script_Birch_28:
# 473 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 474 "data/maps/Hub1/scripts.pory"
	copyvar VAR_CURRENT_DIFFICULTY, VAR_RESULT
# 475 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_17
# 476 "data/maps/Hub1/scripts.pory"
	goto backtomain
	return


Hub_Event_Script_Miltank::
# 483 "data/maps/Hub1/scripts.pory"
	lockall
# 484 "data/maps/Hub1/scripts.pory"
	faceplayer
# 485 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 487 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_BULBASAUR_UNLOCKED, Hub_Event_Script_Miltank_2
Hub_Event_Script_Miltank_1:
# 488 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHARMANDER_UNLOCKED, Hub_Event_Script_Miltank_5
Hub_Event_Script_Miltank_4:
# 489 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SQUIRTLE_UNLOCKED, Hub_Event_Script_Miltank_8
Hub_Event_Script_Miltank_7:
# 490 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHIKORITA_UNLOCKED, Hub_Event_Script_Miltank_11
Hub_Event_Script_Miltank_10:
# 491 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CYNDAQUIL_UNLOCKED, Hub_Event_Script_Miltank_14
Hub_Event_Script_Miltank_13:
# 492 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TOTODILE_UNLOCKED, Hub_Event_Script_Miltank_17
Hub_Event_Script_Miltank_16:
# 493 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TREECKO_UNLOCKED, Hub_Event_Script_Miltank_20
Hub_Event_Script_Miltank_19:
# 494 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TORCHIC_UNLOCKED, Hub_Event_Script_Miltank_23
Hub_Event_Script_Miltank_22:
# 495 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MUDKIP_UNLOCKED, Hub_Event_Script_Miltank_26
Hub_Event_Script_Miltank_25:
# 496 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TURTWIG_UNLOCKED, Hub_Event_Script_Miltank_29
Hub_Event_Script_Miltank_28:
# 497 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHIMCHAR_UNLOCKED, Hub_Event_Script_Miltank_32
Hub_Event_Script_Miltank_31:
# 498 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_PIPLUP_UNLOCKED, Hub_Event_Script_Miltank_35
Hub_Event_Script_Miltank_34:
# 499 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SNIVY_UNLOCKED, Hub_Event_Script_Miltank_38
Hub_Event_Script_Miltank_37:
# 500 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TEPIG_UNLOCKED, Hub_Event_Script_Miltank_41
Hub_Event_Script_Miltank_40:
# 501 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_OSHAWOTT_UNLOCKED, Hub_Event_Script_Miltank_44
Hub_Event_Script_Miltank_43:
# 502 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHESPIN_UNLOCKED, Hub_Event_Script_Miltank_47
Hub_Event_Script_Miltank_46:
# 503 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FENNEKIN_UNLOCKED, Hub_Event_Script_Miltank_50
Hub_Event_Script_Miltank_49:
# 504 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FROAKIE_UNLOCKED, Hub_Event_Script_Miltank_53
Hub_Event_Script_Miltank_52:
# 505 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ROWLET_UNLOCKED, Hub_Event_Script_Miltank_56
Hub_Event_Script_Miltank_55:
# 506 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_LITTEN_UNLOCKED, Hub_Event_Script_Miltank_59
Hub_Event_Script_Miltank_58:
# 507 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_POPPLIO_UNLOCKED, Hub_Event_Script_Miltank_62
Hub_Event_Script_Miltank_61:
# 508 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_GROOKEY_UNLOCKED, Hub_Event_Script_Miltank_65
Hub_Event_Script_Miltank_64:
# 509 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SCORBUNNY_UNLOCKED, Hub_Event_Script_Miltank_68
Hub_Event_Script_Miltank_67:
# 510 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SOBBLE_UNLOCKED, Hub_Event_Script_Miltank_71
Hub_Event_Script_Miltank_70:
# 511 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SPRIGATITO_UNLOCKED, Hub_Event_Script_Miltank_74
Hub_Event_Script_Miltank_73:
# 512 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FUECOCO_UNLOCKED, Hub_Event_Script_Miltank_77
Hub_Event_Script_Miltank_76:
# 513 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_QUAXLY_UNLOCKED, Hub_Event_Script_Miltank_80
Hub_Event_Script_Miltank_79:
# 515 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Miltank_82
# 853 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_57
# 854 "data/maps/Hub1/scripts.pory"
	waitmessage
# 855 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Miltank_2:
# 487 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_0, SPECIES_BULBASAUR
# 487 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_1

Hub_Event_Script_Miltank_5:
# 488 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_1, SPECIES_CHARMANDER
# 488 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_4

Hub_Event_Script_Miltank_8:
# 489 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_2, SPECIES_SQUIRTLE
# 489 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_7

Hub_Event_Script_Miltank_11:
# 490 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_3, SPECIES_CHIKORITA
# 490 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_10

Hub_Event_Script_Miltank_14:
# 491 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_4, SPECIES_CYNDAQUIL
# 491 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_13

Hub_Event_Script_Miltank_17:
# 492 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_5, SPECIES_TOTODILE
# 492 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_16

Hub_Event_Script_Miltank_20:
# 493 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_6, SPECIES_TREECKO
# 493 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_19

Hub_Event_Script_Miltank_23:
# 494 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_7, SPECIES_TORCHIC
# 494 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_22

Hub_Event_Script_Miltank_26:
# 495 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_8, SPECIES_MUDKIP
# 495 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_25

Hub_Event_Script_Miltank_29:
# 496 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_9, SPECIES_TURTWIG
# 496 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_28

Hub_Event_Script_Miltank_32:
# 497 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_10, SPECIES_CHIMCHAR
# 497 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_31

Hub_Event_Script_Miltank_35:
# 498 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_11, SPECIES_PIPLUP
# 498 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_34

Hub_Event_Script_Miltank_38:
# 499 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_12, SPECIES_SNIVY
# 499 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_37

Hub_Event_Script_Miltank_41:
# 500 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_13, SPECIES_TEPIG
# 500 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_40

Hub_Event_Script_Miltank_44:
# 501 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_14, SPECIES_OSHAWOTT
# 501 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_43

Hub_Event_Script_Miltank_47:
# 502 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_15, SPECIES_CHESPIN
# 502 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_46

Hub_Event_Script_Miltank_50:
# 503 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_16, SPECIES_FENNEKIN
# 503 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_49

Hub_Event_Script_Miltank_53:
# 504 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_17, SPECIES_FROAKIE
# 504 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_52

Hub_Event_Script_Miltank_56:
# 505 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_18, SPECIES_ROWLET
# 505 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_55

Hub_Event_Script_Miltank_59:
# 506 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_19, SPECIES_LITTEN
# 506 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_58

Hub_Event_Script_Miltank_62:
# 507 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_20, SPECIES_POPPLIO
# 507 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_61

Hub_Event_Script_Miltank_65:
# 508 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_21, SPECIES_GROOKEY
# 508 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_64

Hub_Event_Script_Miltank_68:
# 509 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_22, SPECIES_SCORBUNNY
# 509 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_67

Hub_Event_Script_Miltank_71:
# 510 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_23, SPECIES_SOBBLE
# 510 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_70

Hub_Event_Script_Miltank_74:
# 511 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_24, SPECIES_SPRIGATITO
# 511 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_73

Hub_Event_Script_Miltank_77:
# 512 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_25, SPECIES_FUECOCO
# 512 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_76

Hub_Event_Script_Miltank_80:
# 513 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_26, SPECIES_QUAXLY
# 513 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_79

Hub_Event_Script_Miltank_82:
# 516 "data/maps/Hub1/scripts.pory"
	showcoinsbox 21, 11
# 517 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_27
# 518 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 519 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 520 "data/maps/Hub1/scripts.pory"
	case MULTI_B_PRESSED, Hub_Event_Script_Miltank_87
# 525 "data/maps/Hub1/scripts.pory"
	case SPECIES_BULBASAUR, Hub_Event_Script_Miltank_88
# 537 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHARMANDER, Hub_Event_Script_Miltank_89
# 549 "data/maps/Hub1/scripts.pory"
	case SPECIES_SQUIRTLE, Hub_Event_Script_Miltank_90
# 561 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIKORITA, Hub_Event_Script_Miltank_91
# 573 "data/maps/Hub1/scripts.pory"
	case SPECIES_CYNDAQUIL, Hub_Event_Script_Miltank_92
# 585 "data/maps/Hub1/scripts.pory"
	case SPECIES_TOTODILE, Hub_Event_Script_Miltank_93
# 597 "data/maps/Hub1/scripts.pory"
	case SPECIES_TREECKO, Hub_Event_Script_Miltank_94
# 609 "data/maps/Hub1/scripts.pory"
	case SPECIES_TORCHIC, Hub_Event_Script_Miltank_95
# 621 "data/maps/Hub1/scripts.pory"
	case SPECIES_MUDKIP, Hub_Event_Script_Miltank_96
# 633 "data/maps/Hub1/scripts.pory"
	case SPECIES_TURTWIG, Hub_Event_Script_Miltank_97
# 645 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIMCHAR, Hub_Event_Script_Miltank_98
# 657 "data/maps/Hub1/scripts.pory"
	case SPECIES_PIPLUP, Hub_Event_Script_Miltank_99
# 669 "data/maps/Hub1/scripts.pory"
	case SPECIES_SNIVY, Hub_Event_Script_Miltank_100
# 681 "data/maps/Hub1/scripts.pory"
	case SPECIES_TEPIG, Hub_Event_Script_Miltank_101
# 693 "data/maps/Hub1/scripts.pory"
	case SPECIES_OSHAWOTT, Hub_Event_Script_Miltank_102
# 705 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHESPIN, Hub_Event_Script_Miltank_103
# 717 "data/maps/Hub1/scripts.pory"
	case SPECIES_FENNEKIN, Hub_Event_Script_Miltank_104
# 729 "data/maps/Hub1/scripts.pory"
	case SPECIES_FROAKIE, Hub_Event_Script_Miltank_105
# 741 "data/maps/Hub1/scripts.pory"
	case SPECIES_ROWLET, Hub_Event_Script_Miltank_106
# 753 "data/maps/Hub1/scripts.pory"
	case SPECIES_LITTEN, Hub_Event_Script_Miltank_107
# 765 "data/maps/Hub1/scripts.pory"
	case SPECIES_POPPLIO, Hub_Event_Script_Miltank_108
# 777 "data/maps/Hub1/scripts.pory"
	case SPECIES_GROOKEY, Hub_Event_Script_Miltank_109
# 789 "data/maps/Hub1/scripts.pory"
	case SPECIES_SCORBUNNY, Hub_Event_Script_Miltank_110
# 801 "data/maps/Hub1/scripts.pory"
	case SPECIES_SOBBLE, Hub_Event_Script_Miltank_111
# 813 "data/maps/Hub1/scripts.pory"
	case SPECIES_SPRIGATITO, Hub_Event_Script_Miltank_112
# 825 "data/maps/Hub1/scripts.pory"
	case SPECIES_FUECOCO, Hub_Event_Script_Miltank_113
# 837 "data/maps/Hub1/scripts.pory"
	case SPECIES_QUAXLY, Hub_Event_Script_Miltank_114
Hub_Event_Script_Miltank_85:
# 850 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
# 851 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Miltank_87:
# 521 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
# 522 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_28
# 523 "data/maps/Hub1/scripts.pory"
	releaseall
	end

Hub_Event_Script_Miltank_88:
# 526 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 527 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_115
# 535 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_89:
# 538 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 539 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_118
# 547 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_90:
# 550 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 551 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_121
# 559 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_91:
# 562 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 563 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_124
# 571 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_92:
# 574 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 575 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_127
# 583 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_93:
# 586 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 587 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_130
# 595 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_94:
# 598 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 599 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_133
# 607 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_95:
# 610 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 611 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_136
# 619 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_96:
# 622 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 623 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_139
# 631 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_97:
# 634 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 635 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_142
# 643 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_98:
# 646 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 647 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_145
# 655 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_99:
# 658 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 659 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_148
# 667 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_100:
# 670 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 671 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_151
# 679 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_101:
# 682 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 683 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_154
# 691 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_102:
# 694 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 695 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_157
# 703 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_103:
# 706 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 707 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_160
# 715 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_104:
# 718 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 719 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_163
# 727 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_105:
# 730 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 731 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_166
# 739 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_106:
# 742 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 743 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_169
# 751 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_107:
# 754 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 755 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_172
# 763 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_108:
# 766 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 767 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_175
# 775 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_109:
# 778 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 779 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_178
# 787 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_110:
# 790 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 791 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_181
# 799 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_111:
# 802 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 803 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_184
# 811 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_112:
# 814 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 815 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_187
# 823 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_113:
# 826 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 827 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_190
# 835 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_114:
# 838 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 839 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_193
# 847 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_115:
# 528 "data/maps/Hub1/scripts.pory"
	setflag FLAG_BULBASAUR_UNLOCKED
# 529 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 530 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 531 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 532 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_118:
# 540 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHARMANDER_UNLOCKED
# 541 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 542 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 543 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 544 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_31
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_121:
# 552 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SQUIRTLE_UNLOCKED
# 553 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 554 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 555 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 556 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_32
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_124:
# 564 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIKORITA_UNLOCKED
# 565 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 566 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 567 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 568 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_33
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_127:
# 576 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CYNDAQUIL_UNLOCKED
# 577 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 578 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 579 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 580 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_34
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_130:
# 588 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TOTODILE_UNLOCKED
# 589 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 590 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 591 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 592 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_35
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_133:
# 600 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TREECKO_UNLOCKED
# 601 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 602 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 603 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 604 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_36
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_136:
# 612 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TORCHIC_UNLOCKED
# 613 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 614 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 615 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 616 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_37
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_139:
# 624 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MUDKIP_UNLOCKED
# 625 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 626 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 627 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 628 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_38
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_142:
# 636 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TURTWIG_UNLOCKED
# 637 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 638 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 639 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 640 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_39
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_145:
# 648 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIMCHAR_UNLOCKED
# 649 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 650 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 651 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 652 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_40
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_148:
# 660 "data/maps/Hub1/scripts.pory"
	setflag FLAG_PIPLUP_UNLOCKED
# 661 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 662 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 663 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 664 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_41
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_151:
# 672 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SNIVY_UNLOCKED
# 673 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 674 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 675 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 676 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_42
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_154:
# 684 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TEPIG_UNLOCKED
# 685 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 686 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 687 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 688 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_43
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_157:
# 696 "data/maps/Hub1/scripts.pory"
	setflag FLAG_OSHAWOTT_UNLOCKED
# 697 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 698 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 699 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 700 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_44
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_160:
# 708 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHESPIN_UNLOCKED
# 709 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 710 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 711 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 712 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_45
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_163:
# 720 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FENNEKIN_UNLOCKED
# 721 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 722 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 723 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 724 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_46
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_166:
# 732 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FROAKIE_UNLOCKED
# 733 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 734 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 735 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 736 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_47
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_169:
# 744 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ROWLET_UNLOCKED
# 745 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 746 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 747 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 748 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_48
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_172:
# 756 "data/maps/Hub1/scripts.pory"
	setflag FLAG_LITTEN_UNLOCKED
# 757 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 758 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 759 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 760 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_49
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_175:
# 768 "data/maps/Hub1/scripts.pory"
	setflag FLAG_POPPLIO_UNLOCKED
# 769 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 770 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 771 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 772 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_50
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_178:
# 780 "data/maps/Hub1/scripts.pory"
	setflag FLAG_GROOKEY_UNLOCKED
# 781 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 782 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 783 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 784 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_51
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_181:
# 792 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SCORBUNNY_UNLOCKED
# 793 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 794 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 795 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 796 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_52
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_184:
# 804 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SOBBLE_UNLOCKED
# 805 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 806 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 807 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 808 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_53
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_187:
# 816 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SPRIGATITO_UNLOCKED
# 817 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 818 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 819 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 820 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_54
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_190:
# 828 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FUECOCO_UNLOCKED
# 829 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 830 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 831 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 832 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_55
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_193:
# 840 "data/maps/Hub1/scripts.pory"
	setflag FLAG_QUAXLY_UNLOCKED
# 841 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 842 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 843 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 844 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_56
	goto Hub_Event_Script_Miltank_85


Hub_Event_Script_Chansey::
# 861 "data/maps/Hub1/scripts.pory"
	lockall
# 862 "data/maps/Hub1/scripts.pory"
	faceplayer
# 863 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 864 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_BULBASAUR_UNLOCKED, Hub_Event_Script_Chansey_3
Hub_Event_Script_Chansey_1:
# 865 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHARMANDER_UNLOCKED, Hub_Event_Script_Chansey_8
Hub_Event_Script_Chansey_6:
# 866 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SQUIRTLE_UNLOCKED, Hub_Event_Script_Chansey_13
Hub_Event_Script_Chansey_11:
# 867 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHIKORITA_UNLOCKED, Hub_Event_Script_Chansey_18
Hub_Event_Script_Chansey_16:
# 868 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CYNDAQUIL_UNLOCKED, Hub_Event_Script_Chansey_23
Hub_Event_Script_Chansey_21:
# 869 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TOTODILE_UNLOCKED, Hub_Event_Script_Chansey_28
Hub_Event_Script_Chansey_26:
# 870 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TREECKO_UNLOCKED, Hub_Event_Script_Chansey_33
Hub_Event_Script_Chansey_31:
# 871 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TORCHIC_UNLOCKED, Hub_Event_Script_Chansey_38
Hub_Event_Script_Chansey_36:
# 872 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_MUDKIP_UNLOCKED, Hub_Event_Script_Chansey_43
Hub_Event_Script_Chansey_41:
# 873 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TURTWIG_UNLOCKED, Hub_Event_Script_Chansey_48
Hub_Event_Script_Chansey_46:
# 874 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHIMCHAR_UNLOCKED, Hub_Event_Script_Chansey_53
Hub_Event_Script_Chansey_51:
# 875 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_PIPLUP_UNLOCKED, Hub_Event_Script_Chansey_58
Hub_Event_Script_Chansey_56:
# 876 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SNIVY_UNLOCKED, Hub_Event_Script_Chansey_63
Hub_Event_Script_Chansey_61:
# 877 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TEPIG_UNLOCKED, Hub_Event_Script_Chansey_68
Hub_Event_Script_Chansey_66:
# 878 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_OSHAWOTT_UNLOCKED, Hub_Event_Script_Chansey_73
Hub_Event_Script_Chansey_71:
# 879 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHESPIN_UNLOCKED, Hub_Event_Script_Chansey_78
Hub_Event_Script_Chansey_76:
# 880 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FENNEKIN_UNLOCKED, Hub_Event_Script_Chansey_83
Hub_Event_Script_Chansey_81:
# 881 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FROAKIE_UNLOCKED, Hub_Event_Script_Chansey_88
Hub_Event_Script_Chansey_86:
# 882 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ROWLET_UNLOCKED, Hub_Event_Script_Chansey_93
Hub_Event_Script_Chansey_91:
# 883 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_LITTEN_UNLOCKED, Hub_Event_Script_Chansey_98
Hub_Event_Script_Chansey_96:
# 884 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_POPPLIO_UNLOCKED, Hub_Event_Script_Chansey_103
Hub_Event_Script_Chansey_101:
# 885 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_GROOKEY_UNLOCKED, Hub_Event_Script_Chansey_108
Hub_Event_Script_Chansey_106:
# 886 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SCORBUNNY_UNLOCKED, Hub_Event_Script_Chansey_113
Hub_Event_Script_Chansey_111:
# 887 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SOBBLE_UNLOCKED, Hub_Event_Script_Chansey_118
Hub_Event_Script_Chansey_116:
# 888 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPRIGATITO_UNLOCKED, Hub_Event_Script_Chansey_123
Hub_Event_Script_Chansey_121:
# 889 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FUECOCO_UNLOCKED, Hub_Event_Script_Chansey_128
Hub_Event_Script_Chansey_126:
# 890 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_QUAXLY_UNLOCKED, Hub_Event_Script_Chansey_133
Hub_Event_Script_Chansey_131:
# 892 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Chansey_136
# 915 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_2
# 916 "data/maps/Hub1/scripts.pory"
	waitmessage
# 917 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Chansey_2:
# 864 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_1, SPECIES_BULBASAUR
# 864 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_1

Hub_Event_Script_Chansey_3:
# 864 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_BULBASAUR
	goto_if_ne Hub_Event_Script_Chansey_2
	goto Hub_Event_Script_Chansey_1

Hub_Event_Script_Chansey_7:
# 865 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_2, SPECIES_CHARMANDER
# 865 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_6

Hub_Event_Script_Chansey_8:
# 865 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHARMANDER
	goto_if_ne Hub_Event_Script_Chansey_7
	goto Hub_Event_Script_Chansey_6

Hub_Event_Script_Chansey_12:
# 866 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_3, SPECIES_SQUIRTLE
# 866 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_11

Hub_Event_Script_Chansey_13:
# 866 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SQUIRTLE
	goto_if_ne Hub_Event_Script_Chansey_12
	goto Hub_Event_Script_Chansey_11

Hub_Event_Script_Chansey_17:
# 867 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_4, SPECIES_CHIKORITA
# 867 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_16

Hub_Event_Script_Chansey_18:
# 867 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHIKORITA
	goto_if_ne Hub_Event_Script_Chansey_17
	goto Hub_Event_Script_Chansey_16

Hub_Event_Script_Chansey_22:
# 868 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_5, SPECIES_CYNDAQUIL
# 868 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_21

Hub_Event_Script_Chansey_23:
# 868 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CYNDAQUIL
	goto_if_ne Hub_Event_Script_Chansey_22
	goto Hub_Event_Script_Chansey_21

Hub_Event_Script_Chansey_27:
# 869 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_6, SPECIES_TOTODILE
# 869 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_26

Hub_Event_Script_Chansey_28:
# 869 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TOTODILE
	goto_if_ne Hub_Event_Script_Chansey_27
	goto Hub_Event_Script_Chansey_26

Hub_Event_Script_Chansey_32:
# 870 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_7, SPECIES_TREECKO
# 870 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_31

Hub_Event_Script_Chansey_33:
# 870 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TREECKO
	goto_if_ne Hub_Event_Script_Chansey_32
	goto Hub_Event_Script_Chansey_31

Hub_Event_Script_Chansey_37:
# 871 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_8, SPECIES_TORCHIC
# 871 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_36

Hub_Event_Script_Chansey_38:
# 871 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TORCHIC
	goto_if_ne Hub_Event_Script_Chansey_37
	goto Hub_Event_Script_Chansey_36

Hub_Event_Script_Chansey_42:
# 872 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_9, SPECIES_MUDKIP
# 872 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_41

Hub_Event_Script_Chansey_43:
# 872 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_MUDKIP
	goto_if_ne Hub_Event_Script_Chansey_42
	goto Hub_Event_Script_Chansey_41

Hub_Event_Script_Chansey_47:
# 873 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_10, SPECIES_TURTWIG
# 873 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_46

Hub_Event_Script_Chansey_48:
# 873 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TURTWIG
	goto_if_ne Hub_Event_Script_Chansey_47
	goto Hub_Event_Script_Chansey_46

Hub_Event_Script_Chansey_52:
# 874 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_11, SPECIES_CHIMCHAR
# 874 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_51

Hub_Event_Script_Chansey_53:
# 874 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHIMCHAR
	goto_if_ne Hub_Event_Script_Chansey_52
	goto Hub_Event_Script_Chansey_51

Hub_Event_Script_Chansey_57:
# 875 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_12, SPECIES_PIPLUP
# 875 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_56

Hub_Event_Script_Chansey_58:
# 875 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_PIPLUP
	goto_if_ne Hub_Event_Script_Chansey_57
	goto Hub_Event_Script_Chansey_56

Hub_Event_Script_Chansey_62:
# 876 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_13, SPECIES_SNIVY
# 876 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_61

Hub_Event_Script_Chansey_63:
# 876 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SNIVY
	goto_if_ne Hub_Event_Script_Chansey_62
	goto Hub_Event_Script_Chansey_61

Hub_Event_Script_Chansey_67:
# 877 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_14, SPECIES_TEPIG
# 877 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_66

Hub_Event_Script_Chansey_68:
# 877 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TEPIG
	goto_if_ne Hub_Event_Script_Chansey_67
	goto Hub_Event_Script_Chansey_66

Hub_Event_Script_Chansey_72:
# 878 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_15, SPECIES_OSHAWOTT
# 878 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_71

Hub_Event_Script_Chansey_73:
# 878 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_OSHAWOTT
	goto_if_ne Hub_Event_Script_Chansey_72
	goto Hub_Event_Script_Chansey_71

Hub_Event_Script_Chansey_77:
# 879 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_16, SPECIES_CHESPIN
# 879 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_76

Hub_Event_Script_Chansey_78:
# 879 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHESPIN
	goto_if_ne Hub_Event_Script_Chansey_77
	goto Hub_Event_Script_Chansey_76

Hub_Event_Script_Chansey_82:
# 880 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_17, SPECIES_FENNEKIN
# 880 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_81

Hub_Event_Script_Chansey_83:
# 880 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FENNEKIN
	goto_if_ne Hub_Event_Script_Chansey_82
	goto Hub_Event_Script_Chansey_81

Hub_Event_Script_Chansey_87:
# 881 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_18, SPECIES_FROAKIE
# 881 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_86

Hub_Event_Script_Chansey_88:
# 881 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FROAKIE
	goto_if_ne Hub_Event_Script_Chansey_87
	goto Hub_Event_Script_Chansey_86

Hub_Event_Script_Chansey_92:
# 882 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_19, SPECIES_ROWLET
# 882 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_91

Hub_Event_Script_Chansey_93:
# 882 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_ROWLET
	goto_if_ne Hub_Event_Script_Chansey_92
	goto Hub_Event_Script_Chansey_91

Hub_Event_Script_Chansey_97:
# 883 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_20, SPECIES_LITTEN
# 883 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_96

Hub_Event_Script_Chansey_98:
# 883 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_LITTEN
	goto_if_ne Hub_Event_Script_Chansey_97
	goto Hub_Event_Script_Chansey_96

Hub_Event_Script_Chansey_102:
# 884 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_21, SPECIES_POPPLIO
# 884 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_101

Hub_Event_Script_Chansey_103:
# 884 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_POPPLIO
	goto_if_ne Hub_Event_Script_Chansey_102
	goto Hub_Event_Script_Chansey_101

Hub_Event_Script_Chansey_107:
# 885 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_22, SPECIES_GROOKEY
# 885 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_106

Hub_Event_Script_Chansey_108:
# 885 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_GROOKEY
	goto_if_ne Hub_Event_Script_Chansey_107
	goto Hub_Event_Script_Chansey_106

Hub_Event_Script_Chansey_112:
# 886 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_23, SPECIES_SCORBUNNY
# 886 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_111

Hub_Event_Script_Chansey_113:
# 886 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SCORBUNNY
	goto_if_ne Hub_Event_Script_Chansey_112
	goto Hub_Event_Script_Chansey_111

Hub_Event_Script_Chansey_117:
# 887 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_24, SPECIES_SOBBLE
# 887 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_116

Hub_Event_Script_Chansey_118:
# 887 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SOBBLE
	goto_if_ne Hub_Event_Script_Chansey_117
	goto Hub_Event_Script_Chansey_116

Hub_Event_Script_Chansey_122:
# 888 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_25, SPECIES_SPRIGATITO
# 888 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_121

Hub_Event_Script_Chansey_123:
# 888 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SPRIGATITO
	goto_if_ne Hub_Event_Script_Chansey_122
	goto Hub_Event_Script_Chansey_121

Hub_Event_Script_Chansey_127:
# 889 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_26, SPECIES_FUECOCO
# 889 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_126

Hub_Event_Script_Chansey_128:
# 889 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FUECOCO
	goto_if_ne Hub_Event_Script_Chansey_127
	goto Hub_Event_Script_Chansey_126

Hub_Event_Script_Chansey_132:
# 890 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_27, SPECIES_QUAXLY
# 890 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_131

Hub_Event_Script_Chansey_133:
# 890 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_QUAXLY
	goto_if_ne Hub_Event_Script_Chansey_132
	goto Hub_Event_Script_Chansey_131

Hub_Event_Script_Chansey_136:
# 893 "data/maps/Hub1/scripts.pory"
	setvar VAR_RESULT, 0
# 894 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_0
# 895 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 897 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_ne Hub_Event_Script_Chansey_139
# 912 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Chansey_139:
# 898 "data/maps/Hub1/scripts.pory"
	copyvar VAR_STARTER_MON, VAR_RESULT
# 899 "data/maps/Hub1/scripts.pory"
	special ZeroPlayerPartyMons
# 900 "data/maps/Hub1/scripts.pory"
	special GiveSavedStarter
# 901 "data/maps/Hub1/scripts.pory"
	special UpdatePlayerSprite
# 902 "data/maps/Hub1/scripts.pory"
	special UpdateTransformedPlayerPalette
# 903 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 904 "data/maps/Hub1/scripts.pory"
	releaseall
# 905 "data/maps/Hub1/scripts.pory"
	lockall
# 906 "data/maps/Hub1/scripts.pory"
	playse SE_SUCCESS
# 907 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_1
# 908 "data/maps/Hub1/scripts.pory"
	waitmessage
# 909 "data/maps/Hub1/scripts.pory"
	releaseall
	return


KecShop_Sign::
# 921 "data/maps/Hub1/scripts.pory"
	lockall
# 922 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Sign_Text_0
# 923 "data/maps/Hub1/scripts.pory"
	waitmessage
# 924 "data/maps/Hub1/scripts.pory"
	releaseall
	return


KecShop::
# 928 "data/maps/Hub1/scripts.pory"
	lockall
# 929 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Sign_Text_0
# 930 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_0, ITEM_ORAN_BERRY
# 931 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_1, ITEM_MEMORY_MUSHROOM
# 932 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
# 933 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_LUM_BERRY_BUYABLE, KecShop_2
KecShop_1:
# 937 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SERIOUS_MINT_BUYABLE, KecShop_5
KecShop_4:
# 941 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_RARE_CANDY_BUYABLE, KecShop_8
KecShop_7:
# 945 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_POCKET_BIRCH_BAG_BUYABLE, KecShop_11
KecShop_10:
# 949 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_HP_BOTTLE_CAP_BUYABLE, KecShop_14
KecShop_13:
# 953 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ATK_BOTTLE_CAP_BUYABLE, KecShop_17
KecShop_16:
# 957 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_DEF_BOTTLE_CAP_BUYABLE, KecShop_20
KecShop_19:
# 961 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPEED_BOTTLE_CAP_BUYABLE, KecShop_23
KecShop_22:
# 965 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPATK_BOTTLE_CAP_BUYABLE, KecShop_26
KecShop_25:
# 969 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPDEF_BOTTLE_CAP_BUYABLE, KecShop_29
KecShop_28:
# 973 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_HP_GOLD_BOTTLE_CAP_BUYABLE, KecShop_32
KecShop_31:
# 977 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ATK_GOLD_BOTTLE_CAP_BUYABLE, KecShop_35
KecShop_34:
# 981 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_DEF_GOLD_BOTTLE_CAP_BUYABLE, KecShop_38
KecShop_37:
# 985 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPEED_GOLD_BOTTLE_CAP_BUYABLE, KecShop_41
KecShop_40:
# 989 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPATK_GOLD_BOTTLE_CAP_BUYABLE, KecShop_44
KecShop_43:
# 993 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPDEF_GOLD_BOTTLE_CAP_BUYABLE, KecShop_47
KecShop_46:
# 999 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne KecShop_50
# 1098 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
# 1099 "data/maps/Hub1/scripts.pory"
	waitmessage
# 1100 "data/maps/Hub1/scripts.pory"
	releaseall
KecShop_49:
# 1102 "data/maps/Hub1/scripts.pory"
	releaseall
	return

KecShop_2:
# 934 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_2, ITEM_LUM_BERRY
# 935 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_1

KecShop_5:
# 938 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_3, ITEM_SERIOUS_MINT
# 939 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_4

KecShop_8:
# 942 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_4, ITEM_RARE_CANDY
# 943 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_7

KecShop_11:
# 946 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_5, ITEM_POCKET_BIRCH_BAG
# 947 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_10

KecShop_14:
# 950 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_6, ITEM_HP_BOTTLE_CAP
# 951 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_13

KecShop_17:
# 954 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_7, ITEM_ATK_BOTTLE_CAP
# 955 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_16

KecShop_20:
# 958 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_8, ITEM_DEF_BOTTLE_CAP
# 959 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_19

KecShop_23:
# 962 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_9, ITEM_SPEED_BOTTLE_CAP
# 963 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_22

KecShop_26:
# 966 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_10, ITEM_SPATK_BOTTLE_CAP
# 967 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_25

KecShop_29:
# 970 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_11, ITEM_SPDEF_BOTTLE_CAP
# 971 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_28

KecShop_32:
# 974 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_12, ITEM_HP_GOLD_BOTTLE_CAP
# 975 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_31

KecShop_35:
# 978 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_13, ITEM_ATK_GOLD_BOTTLE_CAP
# 979 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_34

KecShop_38:
# 982 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_14, ITEM_DEF_GOLD_BOTTLE_CAP
# 983 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_37

KecShop_41:
# 986 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_15, ITEM_SPEED_GOLD_BOTTLE_CAP
# 987 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_40

KecShop_44:
# 990 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_16, ITEM_SPATK_GOLD_BOTTLE_CAP
# 991 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_43

KecShop_47:
# 994 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_17, ITEM_SPDEF_GOLD_BOTTLE_CAP
# 995 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_46

KecShop_50:
# 1000 "data/maps/Hub1/scripts.pory"
	showmoneybox 18, 10
# 1001 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 1002 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 1003 "data/maps/Hub1/scripts.pory"
	case ITEM_ORAN_BERRY, KecShop_55
# 1014 "data/maps/Hub1/scripts.pory"
	case ITEM_LUM_BERRY, KecShop_56
# 1025 "data/maps/Hub1/scripts.pory"
	case ITEM_SERIOUS_MINT, KecShop_57
# 1036 "data/maps/Hub1/scripts.pory"
	case ITEM_MEMORY_MUSHROOM, KecShop_58
# 1047 "data/maps/Hub1/scripts.pory"
	case ITEM_RARE_CANDY, KecShop_59
# 1058 "data/maps/Hub1/scripts.pory"
	case ITEM_POCKET_BIRCH_BAG, KecShop_60
# 1067 "data/maps/Hub1/scripts.pory"
	case ITEM_HP_BOTTLE_CAP, KecShop_61
# 1068 "data/maps/Hub1/scripts.pory"
	case ITEM_ATK_BOTTLE_CAP, KecShop_61
# 1069 "data/maps/Hub1/scripts.pory"
	case ITEM_DEF_BOTTLE_CAP, KecShop_61
# 1070 "data/maps/Hub1/scripts.pory"
	case ITEM_SPEED_BOTTLE_CAP, KecShop_61
# 1071 "data/maps/Hub1/scripts.pory"
	case ITEM_SPATK_BOTTLE_CAP, KecShop_61
# 1072 "data/maps/Hub1/scripts.pory"
	case ITEM_SPDEF_BOTTLE_CAP, KecShop_61
# 1081 "data/maps/Hub1/scripts.pory"
	case ITEM_HP_GOLD_BOTTLE_CAP, KecShop_62
# 1082 "data/maps/Hub1/scripts.pory"
	case ITEM_ATK_GOLD_BOTTLE_CAP, KecShop_62
# 1083 "data/maps/Hub1/scripts.pory"
	case ITEM_DEF_GOLD_BOTTLE_CAP, KecShop_62
# 1084 "data/maps/Hub1/scripts.pory"
	case ITEM_SPEED_GOLD_BOTTLE_CAP, KecShop_62
# 1085 "data/maps/Hub1/scripts.pory"
	case ITEM_SPATK_GOLD_BOTTLE_CAP, KecShop_62
# 1086 "data/maps/Hub1/scripts.pory"
	case ITEM_SPDEF_GOLD_BOTTLE_CAP, KecShop_62
KecShop_53:
# 1096 "data/maps/Hub1/scripts.pory"
	hidemoneybox
	goto KecShop_49

KecShop_55:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_63
# 1012 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_56:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_66
# 1023 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_57:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_69
# 1034 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_58:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_72
# 1045 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_59:
	checkmoney 2000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_75
# 1056 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_60:
	checkmoney 2000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_78
# 1066 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_61:
	checkmoney 300
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_81
# 1080 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_62:
	checkmoney 700
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_84
# 1094 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_63:
# 1005 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 1006 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1007 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1008 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ORAN_BERRY
# 1009 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_53

KecShop_66:
# 1016 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 1017 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1018 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1019 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUM_BERRY
# 1020 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_53

KecShop_69:
# 1027 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1028 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1029 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1030 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SERIOUS_MINT
# 1031 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_53

KecShop_72:
# 1038 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 1039 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1040 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1041 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM
# 1042 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_53

KecShop_75:
# 1049 "data/maps/Hub1/scripts.pory"
	removemoney 2000
# 1050 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1051 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1052 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 1053 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_53

KecShop_78:
# 1060 "data/maps/Hub1/scripts.pory"
	removemoney 2000
# 1061 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1062 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1063 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_POCKET_BIRCH_BAG
# 1064 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_53

KecShop_81:
# 1074 "data/maps/Hub1/scripts.pory"
	removemoney 300
# 1075 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1076 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1077 "data/maps/Hub1/scripts.pory"
	giveitem VAR_RESULT
# 1078 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_53

KecShop_84:
# 1088 "data/maps/Hub1/scripts.pory"
	removemoney 700
# 1089 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1090 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1091 "data/maps/Hub1/scripts.pory"
	giveitem VAR_RESULT
# 1092 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_53


KecShop_Shiny::
# 1106 "data/maps/Hub1/scripts.pory"
	lockall
# 1107 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Sign_Text_0
# 1108 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_NOBLE_ROAR_BUYABLE, KecShop_Shiny_2
KecShop_Shiny_1:
# 1112 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_CHARM_BUYABLE, KecShop_Shiny_5
KecShop_Shiny_4:
# 1116 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_FAKE_TEARS_BUYABLE, KecShop_Shiny_8
KecShop_Shiny_7:
# 1120 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_CONFUSE_RAY_BUYABLE, KecShop_Shiny_11
KecShop_Shiny_10:
# 1124 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_THUNDER_WAVE_BUYABLE, KecShop_Shiny_14
KecShop_Shiny_13:
# 1128 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_WILL_O_WISP_BUYABLE, KecShop_Shiny_17
KecShop_Shiny_16:
# 1132 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_TOXIC_BUYABLE, KecShop_Shiny_20
KecShop_Shiny_19:
# 1136 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_SWIFT_BUYABLE, KecShop_Shiny_23
KecShop_Shiny_22:
# 1140 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_CUT_BUYABLE, KecShop_Shiny_26
KecShop_Shiny_25:
# 1144 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_ROCK_SMASH_BUYABLE, KecShop_Shiny_29
KecShop_Shiny_28:
# 1148 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_SNARL_BUYABLE, KecShop_Shiny_32
KecShop_Shiny_31:
# 1152 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_ELECTROWEB_BUYABLE, KecShop_Shiny_35
KecShop_Shiny_34:
# 1156 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_AURORA_BEAM_BUYABLE, KecShop_Shiny_38
KecShop_Shiny_37:
# 1160 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_PSYBEAM_BUYABLE, KecShop_Shiny_41
KecShop_Shiny_40:
# 1164 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_FLAMETHROWER_BUYABLE, KecShop_Shiny_44
KecShop_Shiny_43:
# 1168 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_ICE_BEAM_BUYABLE, KecShop_Shiny_47
KecShop_Shiny_46:
# 1172 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_THUNDERBOLT_BUYABLE, KecShop_Shiny_50
KecShop_Shiny_49:
# 1176 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_SCALD_BUYABLE, KecShop_Shiny_53
KecShop_Shiny_52:
# 1180 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_MEGA_DRAIN_BUYABLE, KecShop_Shiny_56
KecShop_Shiny_55:
# 1184 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_SLUDGE_BOMB_BUYABLE, KecShop_Shiny_59
KecShop_Shiny_58:
# 1188 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_DUAL_WINGBEAT_BUYABLE, KecShop_Shiny_62
KecShop_Shiny_61:
# 1192 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_LEECH_LIFE_BUYABLE, KecShop_Shiny_65
KecShop_Shiny_64:
# 1196 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_PLAY_ROUGH_BUYABLE, KecShop_Shiny_68
KecShop_Shiny_67:
# 1200 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_SHADOW_BALL_BUYABLE, KecShop_Shiny_71
KecShop_Shiny_70:
# 1204 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_EARTH_POWER_BUYABLE, KecShop_Shiny_74
KecShop_Shiny_73:
# 1209 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne KecShop_Shiny_77
# 1492 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
# 1493 "data/maps/Hub1/scripts.pory"
	waitmessage
# 1494 "data/maps/Hub1/scripts.pory"
	releaseall
KecShop_Shiny_76:
# 1496 "data/maps/Hub1/scripts.pory"
	releaseall
	return

KecShop_Shiny_2:
# 1109 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_0, ITEM_TM_NOBLE_ROAR
# 1110 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_1

KecShop_Shiny_5:
# 1113 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_1, ITEM_TM_CHARM
# 1114 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_4

KecShop_Shiny_8:
# 1117 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_2, ITEM_TM_FAKE_TEARS
# 1118 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_7

KecShop_Shiny_11:
# 1121 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_3, ITEM_TM_CONFUSE_RAY
# 1122 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_10

KecShop_Shiny_14:
# 1125 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_4, ITEM_TM_THUNDER_WAVE
# 1126 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_13

KecShop_Shiny_17:
# 1129 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_5, ITEM_TM_WILL_O_WISP
# 1130 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_16

KecShop_Shiny_20:
# 1133 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_6, ITEM_TM_TOXIC
# 1134 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_19

KecShop_Shiny_23:
# 1137 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_7, ITEM_TM_SWIFT
# 1138 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_22

KecShop_Shiny_26:
# 1141 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_8, ITEM_TM_CUT
# 1142 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_25

KecShop_Shiny_29:
# 1145 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_9, ITEM_TM_ROCK_SMASH
# 1146 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_28

KecShop_Shiny_32:
# 1149 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_10, ITEM_TM_SNARL
# 1150 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_31

KecShop_Shiny_35:
# 1153 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_11, ITEM_TM_ELECTROWEB
# 1154 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_34

KecShop_Shiny_38:
# 1157 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_12, ITEM_TM_AURORA_BEAM
# 1158 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_37

KecShop_Shiny_41:
# 1161 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_13, ITEM_TM_PSYBEAM
# 1162 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_40

KecShop_Shiny_44:
# 1165 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_14, ITEM_TM_FLAMETHROWER
# 1166 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_43

KecShop_Shiny_47:
# 1169 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_15, ITEM_TM_ICE_BEAM
# 1170 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_46

KecShop_Shiny_50:
# 1173 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_16, ITEM_TM_THUNDERBOLT
# 1174 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_49

KecShop_Shiny_53:
# 1177 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_17, ITEM_TM_SCALD
# 1178 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_52

KecShop_Shiny_56:
# 1181 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_18, ITEM_TM_MEGA_DRAIN
# 1182 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_55

KecShop_Shiny_59:
# 1185 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_19, ITEM_TM_SLUDGE_BOMB
# 1186 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_58

KecShop_Shiny_62:
# 1189 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_20, ITEM_TM_DUAL_WINGBEAT
# 1190 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_61

KecShop_Shiny_65:
# 1193 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_21, ITEM_TM_LEECH_LIFE
# 1194 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_64

KecShop_Shiny_68:
# 1197 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_22, ITEM_TM_PLAY_ROUGH
# 1198 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_67

KecShop_Shiny_71:
# 1201 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_23, ITEM_TM_SHADOW_BALL
# 1202 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_70

KecShop_Shiny_74:
# 1205 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_24, ITEM_TM_EARTH_POWER
# 1206 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_73

KecShop_Shiny_77:
# 1210 "data/maps/Hub1/scripts.pory"
	showmoneybox 18, 10
# 1211 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 1212 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 1213 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_NOBLE_ROAR, KecShop_Shiny_82
# 1224 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ROCK_SMASH, KecShop_Shiny_83
# 1235 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SWIFT, KecShop_Shiny_84
# 1246 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CUT, KecShop_Shiny_85
# 1257 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CHARM, KecShop_Shiny_86
# 1268 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_FAKE_TEARS, KecShop_Shiny_87
# 1279 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CONFUSE_RAY, KecShop_Shiny_88
# 1290 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_THUNDER_WAVE, KecShop_Shiny_89
# 1301 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_WILL_O_WISP, KecShop_Shiny_90
# 1312 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_TOXIC, KecShop_Shiny_91
# 1323 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SNARL, KecShop_Shiny_92
# 1334 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ELECTROWEB, KecShop_Shiny_93
# 1345 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_AURORA_BEAM, KecShop_Shiny_94
# 1356 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_PSYBEAM, KecShop_Shiny_95
# 1367 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_FLAMETHROWER, KecShop_Shiny_96
# 1378 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ICE_BEAM, KecShop_Shiny_97
# 1389 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_THUNDERBOLT, KecShop_Shiny_98
# 1400 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SCALD, KecShop_Shiny_99
# 1411 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_MEGA_DRAIN, KecShop_Shiny_100
# 1422 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SLUDGE_BOMB, KecShop_Shiny_101
# 1433 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_DUAL_WINGBEAT, KecShop_Shiny_102
# 1444 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_LEECH_LIFE, KecShop_Shiny_103
# 1455 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_PLAY_ROUGH, KecShop_Shiny_104
# 1466 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SHADOW_BALL, KecShop_Shiny_105
# 1477 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_EARTH_POWER, KecShop_Shiny_106
KecShop_Shiny_80:
# 1490 "data/maps/Hub1/scripts.pory"
	hidemoneybox
	goto KecShop_Shiny_76

KecShop_Shiny_82:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_107
# 1222 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_83:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_110
# 1233 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_84:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_113
# 1244 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_85:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_116
# 1255 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_86:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_119
# 1266 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_87:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_122
# 1277 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_88:
	checkmoney 300
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_125
# 1288 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_89:
	checkmoney 300
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_128
# 1299 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_90:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_131
# 1310 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_91:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_134
# 1321 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_92:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_137
# 1332 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_93:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_140
# 1343 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_94:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_143
# 1354 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_95:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_146
# 1365 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_96:
	checkmoney 1200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_149
# 1376 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_97:
	checkmoney 1200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_152
# 1387 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_98:
	checkmoney 1200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_155
# 1398 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_99:
	checkmoney 1000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_158
# 1409 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_100:
	checkmoney 800
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_161
# 1420 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_101:
	checkmoney 1000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_164
# 1431 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_102:
	checkmoney 900
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_167
# 1442 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_103:
	checkmoney 1000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_170
# 1453 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_104:
	checkmoney 1000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_173
# 1464 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_105:
	checkmoney 1000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_176
# 1475 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_106:
	checkmoney 1000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_179
# 1486 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_107:
# 1215 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 1216 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1217 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1218 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_NOBLE_ROAR
# 1219 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_110:
# 1226 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1227 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1228 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1229 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_ROCK_SMASH
# 1230 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_113:
# 1237 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1238 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1239 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1240 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SWIFT
# 1241 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_116:
# 1248 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1249 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1250 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1251 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CUT
# 1252 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_119:
# 1259 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 1260 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1261 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1262 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CHARM
# 1263 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_122:
# 1270 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 1271 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1272 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1273 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_FAKE_TEARS
# 1274 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_125:
# 1281 "data/maps/Hub1/scripts.pory"
	removemoney 300
# 1282 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1283 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1284 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CONFUSE_RAY
# 1285 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_128:
# 1292 "data/maps/Hub1/scripts.pory"
	removemoney 300
# 1293 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1294 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1295 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_THUNDER_WAVE
# 1296 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_131:
# 1303 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1304 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1305 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1306 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_WILL_O_WISP
# 1307 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_134:
# 1314 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1315 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1316 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1317 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_TOXIC
# 1318 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_137:
# 1325 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1326 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1327 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1328 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SNARL
# 1329 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_140:
# 1336 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1337 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1338 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1339 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_ELECTROWEB
# 1340 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_143:
# 1347 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1348 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1349 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1350 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_AURORA_BEAM
# 1351 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_146:
# 1358 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1359 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1360 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1361 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_PSYBEAM
# 1362 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_149:
# 1369 "data/maps/Hub1/scripts.pory"
	removemoney 1200
# 1370 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1371 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1372 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_FLAMETHROWER
# 1373 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_152:
# 1380 "data/maps/Hub1/scripts.pory"
	removemoney 1200
# 1381 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1382 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1383 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_ICE_BEAM
# 1384 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_155:
# 1391 "data/maps/Hub1/scripts.pory"
	removemoney 1200
# 1392 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1393 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1394 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 1395 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_158:
# 1402 "data/maps/Hub1/scripts.pory"
	removemoney 1000
# 1403 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1404 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1405 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SCALD
# 1406 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_161:
# 1413 "data/maps/Hub1/scripts.pory"
	removemoney 800
# 1414 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1415 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1416 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_MEGA_DRAIN
# 1417 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_164:
# 1424 "data/maps/Hub1/scripts.pory"
	removemoney 1000
# 1425 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1426 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1427 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SLUDGE_BOMB
# 1428 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_167:
# 1435 "data/maps/Hub1/scripts.pory"
	removemoney 900
# 1436 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1437 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1438 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_DUAL_WINGBEAT
# 1439 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_170:
# 1446 "data/maps/Hub1/scripts.pory"
	removemoney 1000
# 1447 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1448 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1449 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_LEECH_LIFE
# 1450 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_173:
# 1457 "data/maps/Hub1/scripts.pory"
	removemoney 1000
# 1458 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1459 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1460 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_PLAY_ROUGH
# 1461 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_176:
# 1468 "data/maps/Hub1/scripts.pory"
	removemoney 1000
# 1469 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1470 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1471 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SHADOW_BALL
# 1472 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_179:
# 1479 "data/maps/Hub1/scripts.pory"
	removemoney 1000
# 1480 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1481 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1482 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_EARTH_POWER
# 1483 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80


Hub_Event_Script_Kecleon::
# 1500 "data/maps/Hub1/scripts.pory"
	lockall
# 1501 "data/maps/Hub1/scripts.pory"
	faceplayer
# 1502 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1503 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_0
# 1504 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED, Hub_Event_Script_Kecleon_2
Hub_Event_Script_Kecleon_1:
# 1509 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_LUM_BERRY_UNLOCKED, Hub_Event_Script_Kecleon_5
Hub_Event_Script_Kecleon_4:
# 1514 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SERIOUS_MINT_UNLOCKED, Hub_Event_Script_Kecleon_8
Hub_Event_Script_Kecleon_7:
# 1519 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_IV_BOTTLE_CAPS_UNLOCKED, Hub_Event_Script_Kecleon_11
Hub_Event_Script_Kecleon_10:
# 1524 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_IV_GOLD_BOTTLE_CAPS_UNLOCKED, Hub_Event_Script_Kecleon_14
Hub_Event_Script_Kecleon_13:
# 1529 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_POCKET_BIRCH_BAG_UNLOCKED, Hub_Event_Script_Kecleon_17
Hub_Event_Script_Kecleon_16:
# 1535 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Kecleon_20
# 1625 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_13
# 1626 "data/maps/Hub1/scripts.pory"
	waitmessage
# 1627 "data/maps/Hub1/scripts.pory"
	releaseall
Hub_Event_Script_Kecleon_19:
# 1629 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
# 1630 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Kecleon_2:
# 1505 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_4, ITEM_RARE_CANDY
# 1506 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_5:
# 1510 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_1, ITEM_LUM_BERRY
# 1511 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_4

Hub_Event_Script_Kecleon_8:
# 1515 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_2, ITEM_SERIOUS_MINT
# 1516 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_7

Hub_Event_Script_Kecleon_11:
# 1520 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_3, ITEM_HP_BOTTLE_CAP
# 1521 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_10

Hub_Event_Script_Kecleon_14:
# 1525 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_4, ITEM_HP_GOLD_BOTTLE_CAP
# 1526 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_13

Hub_Event_Script_Kecleon_17:
# 1530 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_5, ITEM_POCKET_BIRCH_BAG
# 1531 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_16

Hub_Event_Script_Kecleon_20:
# 1536 "data/maps/Hub1/scripts.pory"
	showcoinsbox 21, 11
# 1537 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 1538 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 1539 "data/maps/Hub1/scripts.pory"
	case ITEM_LUM_BERRY, Hub_Event_Script_Kecleon_24
# 1553 "data/maps/Hub1/scripts.pory"
	case ITEM_SERIOUS_MINT, Hub_Event_Script_Kecleon_25
# 1567 "data/maps/Hub1/scripts.pory"
	case ITEM_RARE_CANDY, Hub_Event_Script_Kecleon_26
# 1581 "data/maps/Hub1/scripts.pory"
	case ITEM_HP_BOTTLE_CAP, Hub_Event_Script_Kecleon_27
# 1595 "data/maps/Hub1/scripts.pory"
	case ITEM_HP_GOLD_BOTTLE_CAP, Hub_Event_Script_Kecleon_28
# 1609 "data/maps/Hub1/scripts.pory"
	case ITEM_POCKET_BIRCH_BAG, Hub_Event_Script_Kecleon_29
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_24:
# 1540 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_LUM_BERRY_UNLOCKED, Hub_Event_Script_Kecleon_30
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_25:
# 1554 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SERIOUS_MINT_UNLOCKED, Hub_Event_Script_Kecleon_32
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_26:
# 1568 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED, Hub_Event_Script_Kecleon_34
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_27:
# 1582 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_IV_BOTTLE_CAPS_UNLOCKED, Hub_Event_Script_Kecleon_36
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_28:
# 1596 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_IV_GOLD_BOTTLE_CAPS_UNLOCKED, Hub_Event_Script_Kecleon_38
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_29:
# 1610 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_POCKET_BIRCH_BAG_UNLOCKED, Hub_Event_Script_Kecleon_40
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_30:
# 1541 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1542 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Kecleon_42
# 1550 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_32:
# 1555 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1556 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_45
# 1564 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_34:
# 1569 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1570 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_48
# 1578 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_36:
# 1583 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1584 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_51
# 1592 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_38:
# 1597 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1598 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_54
# 1606 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_40:
# 1611 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1612 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_57
# 1620 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_42:
# 1543 "data/maps/Hub1/scripts.pory"
	setflag FLAG_LUM_BERRY_UNLOCKED
# 1544 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 1545 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1546 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1547 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_6
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_45:
# 1557 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SERIOUS_MINT_UNLOCKED
# 1558 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1559 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1560 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1561 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_48:
# 1571 "data/maps/Hub1/scripts.pory"
	setflag FLAG_RARE_CANDY_UNLOCKED
# 1572 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1573 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1574 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1575 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_9
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_51:
# 1585 "data/maps/Hub1/scripts.pory"
	setflag FLAG_IV_BOTTLE_CAPS_UNLOCKED
# 1586 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1587 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1588 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1589 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_10
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_54:
# 1599 "data/maps/Hub1/scripts.pory"
	setflag FLAG_IV_GOLD_BOTTLE_CAPS_UNLOCKED
# 1600 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1601 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1602 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1603 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_11
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_57:
# 1613 "data/maps/Hub1/scripts.pory"
	setflag FLAG_POCKET_BIRCH_BAG_UNLOCKED
# 1614 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1615 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1616 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1617 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_12
	goto Hub_Event_Script_Kecleon_19


Hub_Event_Script_Shiny_Kecleon::
# 1635 "data/maps/Hub1/scripts.pory"
	lockall
# 1636 "data/maps/Hub1/scripts.pory"
	faceplayer
# 1637 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1638 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_0
# 1639 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_NOBLE_ROAR_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_2
Hub_Event_Script_Shiny_Kecleon_1:
# 1643 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CHARM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_5
Hub_Event_Script_Shiny_Kecleon_4:
# 1647 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_FAKE_TEARS_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_8
Hub_Event_Script_Shiny_Kecleon_7:
# 1651 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CONFUSE_RAY_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_11
Hub_Event_Script_Shiny_Kecleon_10:
# 1655 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_THUNDER_WAVE_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_14
Hub_Event_Script_Shiny_Kecleon_13:
# 1659 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_WILL_O_WISP_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_17
Hub_Event_Script_Shiny_Kecleon_16:
# 1663 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_TOXIC_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_20
Hub_Event_Script_Shiny_Kecleon_19:
# 1667 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ROCK_SMASH_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_23
Hub_Event_Script_Shiny_Kecleon_22:
# 1671 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SNARL_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_26
Hub_Event_Script_Shiny_Kecleon_25:
# 1675 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ELECTROWEB_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_29
Hub_Event_Script_Shiny_Kecleon_28:
# 1679 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_AURORA_BEAM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_32
Hub_Event_Script_Shiny_Kecleon_31:
# 1683 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_PSYBEAM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_35
Hub_Event_Script_Shiny_Kecleon_34:
# 1687 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_MEGA_DRAIN_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_38
Hub_Event_Script_Shiny_Kecleon_37:
# 1691 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_FLAMETHROWER_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_41
Hub_Event_Script_Shiny_Kecleon_40:
# 1695 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ICE_BEAM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_44
Hub_Event_Script_Shiny_Kecleon_43:
# 1699 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_THUNDERBOLT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_47
Hub_Event_Script_Shiny_Kecleon_46:
# 1703 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SCALD_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_50
Hub_Event_Script_Shiny_Kecleon_49:
# 1707 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SLUDGE_BOMB_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_53
Hub_Event_Script_Shiny_Kecleon_52:
# 1711 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_DUAL_WINGBEAT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_56
Hub_Event_Script_Shiny_Kecleon_55:
# 1715 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_LEECH_LIFE_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_59
Hub_Event_Script_Shiny_Kecleon_58:
# 1719 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_PLAY_ROUGH_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_62
Hub_Event_Script_Shiny_Kecleon_61:
# 1723 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SHADOW_BALL_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_65
Hub_Event_Script_Shiny_Kecleon_64:
# 1727 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_EARTH_POWER_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_68
Hub_Event_Script_Shiny_Kecleon_67:
# 1733 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Shiny_Kecleon_71
# 2106 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_46
# 2107 "data/maps/Hub1/scripts.pory"
	waitmessage
# 2108 "data/maps/Hub1/scripts.pory"
	releaseall
Hub_Event_Script_Shiny_Kecleon_70:
# 2110 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
# 2111 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Shiny_Kecleon_2:
# 1640 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_1, ITEM_TM_NOBLE_ROAR
# 1641 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_1

Hub_Event_Script_Shiny_Kecleon_5:
# 1644 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_2, ITEM_TM_CHARM
# 1645 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_4

Hub_Event_Script_Shiny_Kecleon_8:
# 1648 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_3, ITEM_TM_FAKE_TEARS
# 1649 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_7

Hub_Event_Script_Shiny_Kecleon_11:
# 1652 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_4, ITEM_TM_CONFUSE_RAY
# 1653 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_10

Hub_Event_Script_Shiny_Kecleon_14:
# 1656 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_5, ITEM_TM_THUNDER_WAVE
# 1657 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_13

Hub_Event_Script_Shiny_Kecleon_17:
# 1660 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_6, ITEM_TM_WILL_O_WISP
# 1661 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_16

Hub_Event_Script_Shiny_Kecleon_20:
# 1664 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_7, ITEM_TM_TOXIC
# 1665 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_19

Hub_Event_Script_Shiny_Kecleon_23:
# 1668 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_8, ITEM_TM_ROCK_SMASH
# 1669 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_22

Hub_Event_Script_Shiny_Kecleon_26:
# 1672 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_9, ITEM_TM_SNARL
# 1673 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_25

Hub_Event_Script_Shiny_Kecleon_29:
# 1676 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_10, ITEM_TM_ELECTROWEB
# 1677 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_28

Hub_Event_Script_Shiny_Kecleon_32:
# 1680 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_11, ITEM_TM_AURORA_BEAM
# 1681 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_35:
# 1684 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_12, ITEM_TM_PSYBEAM
# 1685 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_34

Hub_Event_Script_Shiny_Kecleon_38:
# 1688 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_13, ITEM_TM_MEGA_DRAIN
# 1689 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_37

Hub_Event_Script_Shiny_Kecleon_41:
# 1692 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_14, ITEM_TM_FLAMETHROWER
# 1693 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_40

Hub_Event_Script_Shiny_Kecleon_44:
# 1696 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_15, ITEM_TM_ICE_BEAM
# 1697 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_43

Hub_Event_Script_Shiny_Kecleon_47:
# 1700 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_16, ITEM_TM_THUNDERBOLT
# 1701 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_46

Hub_Event_Script_Shiny_Kecleon_50:
# 1704 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_14, ITEM_TM_SCALD
# 1705 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_49

Hub_Event_Script_Shiny_Kecleon_53:
# 1708 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_15, ITEM_TM_SLUDGE_BOMB
# 1709 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_52

Hub_Event_Script_Shiny_Kecleon_56:
# 1712 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_16, ITEM_TM_DUAL_WINGBEAT
# 1713 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_55

Hub_Event_Script_Shiny_Kecleon_59:
# 1716 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_17, ITEM_TM_LEECH_LIFE
# 1717 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_58

Hub_Event_Script_Shiny_Kecleon_62:
# 1720 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_18, ITEM_TM_PLAY_ROUGH
# 1721 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_61

Hub_Event_Script_Shiny_Kecleon_65:
# 1724 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_19, ITEM_TM_SHADOW_BALL
# 1725 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_64

Hub_Event_Script_Shiny_Kecleon_68:
# 1728 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_20, ITEM_TM_EARTH_POWER
# 1729 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_67

Hub_Event_Script_Shiny_Kecleon_71:
# 1734 "data/maps/Hub1/scripts.pory"
	showcoinsbox 21, 11
# 1735 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 1736 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 1737 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_NOBLE_ROAR, Hub_Event_Script_Shiny_Kecleon_75
# 1751 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ROCK_SMASH, Hub_Event_Script_Shiny_Kecleon_76
# 1765 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SWIFT, Hub_Event_Script_Shiny_Kecleon_77
# 1779 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CUT, Hub_Event_Script_Shiny_Kecleon_78
# 1793 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CHARM, Hub_Event_Script_Shiny_Kecleon_79
# 1807 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_FAKE_TEARS, Hub_Event_Script_Shiny_Kecleon_80
# 1821 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CONFUSE_RAY, Hub_Event_Script_Shiny_Kecleon_81
# 1835 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_THUNDER_WAVE, Hub_Event_Script_Shiny_Kecleon_82
# 1849 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_WILL_O_WISP, Hub_Event_Script_Shiny_Kecleon_83
# 1864 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_TOXIC, Hub_Event_Script_Shiny_Kecleon_84
# 1879 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SNARL, Hub_Event_Script_Shiny_Kecleon_85
# 1894 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ELECTROWEB, Hub_Event_Script_Shiny_Kecleon_86
# 1909 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_AURORA_BEAM, Hub_Event_Script_Shiny_Kecleon_87
# 1924 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_PSYBEAM, Hub_Event_Script_Shiny_Kecleon_88
# 1939 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_FLAMETHROWER, Hub_Event_Script_Shiny_Kecleon_89
# 1954 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ICE_BEAM, Hub_Event_Script_Shiny_Kecleon_90
# 1969 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_THUNDERBOLT, Hub_Event_Script_Shiny_Kecleon_91
# 1984 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SCALD, Hub_Event_Script_Shiny_Kecleon_92
# 1999 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_MEGA_DRAIN, Hub_Event_Script_Shiny_Kecleon_93
# 2014 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SLUDGE_BOMB, Hub_Event_Script_Shiny_Kecleon_94
# 2029 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_DUAL_WINGBEAT, Hub_Event_Script_Shiny_Kecleon_95
# 2044 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_LEECH_LIFE, Hub_Event_Script_Shiny_Kecleon_96
# 2059 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_PLAY_ROUGH, Hub_Event_Script_Shiny_Kecleon_97
# 2074 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SHADOW_BALL, Hub_Event_Script_Shiny_Kecleon_98
# 2089 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_EARTH_POWER, Hub_Event_Script_Shiny_Kecleon_99
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_75:
# 1738 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_NOBLE_ROAR_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_100
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_76:
# 1752 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ROCK_SMASH_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_102
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_77:
# 1766 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SWIFT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_104
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_78:
# 1780 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CUT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_106
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_79:
# 1794 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CHARM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_108
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_80:
# 1808 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_FAKE_TEARS_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_110
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_81:
# 1822 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CONFUSE_RAY_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_112
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_82:
# 1836 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_THUNDER_WAVE_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_114
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_83:
# 1850 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_WILL_O_WISP_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_116
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_84:
# 1865 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_TOXIC_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_118
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_85:
# 1880 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SNARL_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_120
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_86:
# 1895 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ELECTROWEB_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_122
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_87:
# 1910 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_AURORA_BEAM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_124
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_88:
# 1925 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_PSYBEAM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_126
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_89:
# 1940 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_FLAMETHROWER_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_128
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_90:
# 1955 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ICE_BEAM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_130
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_91:
# 1970 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_THUNDERBOLT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_132
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_92:
# 1985 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SCALD_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_134
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_93:
# 2000 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_MEGA_DRAIN_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_136
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_94:
# 2015 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SLUDGE_BOMB_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_138
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_95:
# 2030 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_DUAL_WINGBEAT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_140
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_96:
# 2045 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_LEECH_LIFE_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_142
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_97:
# 2060 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_PLAY_ROUGH_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_144
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_98:
# 2075 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SHADOW_BALL_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_146
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_99:
# 2090 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_EARTH_POWER_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_148
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_100:
# 1739 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1740 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 400
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_150
# 1748 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_102:
# 1753 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1754 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 900
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_153
# 1762 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_104:
# 1767 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1768 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_156
# 1776 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_106:
# 1781 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1782 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_159
# 1790 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_108:
# 1795 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1796 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 400
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_162
# 1804 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_110:
# 1809 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1810 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 400
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_165
# 1818 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_112:
# 1823 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1824 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 800
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_168
# 1832 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_114:
# 1837 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1838 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 800
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_171
# 1846 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_116:
# 1851 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1852 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 800
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_174
# 1861 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_118:
# 1866 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1867 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 800
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_177
# 1876 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_120:
# 1881 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1882 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 900
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_180
# 1891 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_122:
# 1896 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1897 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 900
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_183
# 1906 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_124:
# 1911 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1912 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 900
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_186
# 1921 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_126:
# 1926 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1927 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 900
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_189
# 1936 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_128:
# 1941 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1942 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_192
# 1951 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_130:
# 1956 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1957 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_195
# 1966 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_132:
# 1971 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1972 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_198
# 1981 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_134:
# 1986 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1987 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_201
# 1996 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_136:
# 2001 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2002 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_204
# 2011 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_138:
# 2016 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2017 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_207
# 2026 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_140:
# 2031 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2032 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_210
# 2041 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_142:
# 2046 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2047 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_213
# 2056 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_144:
# 2061 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2062 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_216
# 2071 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_146:
# 2076 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2077 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_219
# 2086 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_148:
# 2091 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2092 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_222
# 2101 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_150:
# 1741 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_NOBLE_ROAR_UNLOCKED
# 1742 "data/maps/Hub1/scripts.pory"
	removecoins 400
# 1743 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1744 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1745 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_21
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_153:
# 1755 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_ROCK_SMASH_UNLOCKED
# 1756 "data/maps/Hub1/scripts.pory"
	removecoins 900
# 1757 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1758 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1759 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_22
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_156:
# 1769 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_SWIFT_UNLOCKED
# 1770 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 1771 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1772 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1773 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_23
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_159:
# 1783 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CUT_UNLOCKED
# 1784 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 1785 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1786 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1787 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_24
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_162:
# 1797 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CHARM_UNLOCKED
# 1798 "data/maps/Hub1/scripts.pory"
	removecoins 400
# 1799 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1800 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1801 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_25
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_165:
# 1811 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_FAKE_TEARS_UNLOCKED
# 1812 "data/maps/Hub1/scripts.pory"
	removecoins 400
# 1813 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1814 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1815 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_26
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_168:
# 1825 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CONFUSE_RAY_UNLOCKED
# 1826 "data/maps/Hub1/scripts.pory"
	removecoins 800
# 1827 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1828 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1829 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_27
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_171:
# 1839 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_THUNDER_WAVE_UNLOCKED
# 1840 "data/maps/Hub1/scripts.pory"
	removecoins 800
# 1841 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1842 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1843 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_28
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_174:
# 1853 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_WILL_O_WISP_UNLOCKED
# 1854 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_WILL_O_WISP, 1
# 1855 "data/maps/Hub1/scripts.pory"
	removecoins 800
# 1856 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1857 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1858 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_29
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_177:
# 1868 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_TOXIC_UNLOCKED
# 1869 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_TOXIC, 1
# 1870 "data/maps/Hub1/scripts.pory"
	removecoins 800
# 1871 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1872 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1873 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_30
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_180:
# 1883 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_SNARL_UNLOCKED
# 1884 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SNARL, 1
# 1885 "data/maps/Hub1/scripts.pory"
	removecoins 900
# 1886 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1887 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1888 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_31
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_183:
# 1898 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_ELECTROWEB_UNLOCKED
# 1899 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_ELECTROWEB, 1
# 1900 "data/maps/Hub1/scripts.pory"
	removecoins 900
# 1901 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1902 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1903 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_32
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_186:
# 1913 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_AURORA_BEAM_UNLOCKED
# 1914 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_AURORA_BEAM, 1
# 1915 "data/maps/Hub1/scripts.pory"
	removecoins 900
# 1916 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1917 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1918 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_33
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_189:
# 1928 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_PSYBEAM_UNLOCKED
# 1929 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_PSYBEAM, 1
# 1930 "data/maps/Hub1/scripts.pory"
	removecoins 900
# 1931 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1932 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1933 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_34
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_192:
# 1943 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_FLAMETHROWER_UNLOCKED
# 1944 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_FLAMETHROWER, 1
# 1945 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 1946 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1947 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1948 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_35
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_195:
# 1958 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_ICE_BEAM_UNLOCKED
# 1959 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_ICE_BEAM, 1
# 1960 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 1961 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1962 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1963 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_36
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_198:
# 1973 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_THUNDERBOLT_UNLOCKED
# 1974 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT, 1
# 1975 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 1976 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1977 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1978 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_37
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_201:
# 1988 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_SCALD_UNLOCKED
# 1989 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SCALD, 1
# 1990 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 1991 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1992 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1993 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_38
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_204:
# 2003 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_MEGA_DRAIN_UNLOCKED
# 2004 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_MEGA_DRAIN, 1
# 2005 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2006 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2007 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2008 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_39
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_207:
# 2018 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_SLUDGE_BOMB_UNLOCKED
# 2019 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SLUDGE_BOMB, 1
# 2020 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2021 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2022 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2023 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_40
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_210:
# 2033 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_DUAL_WINGBEAT_UNLOCKED
# 2034 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_DUAL_WINGBEAT, 1
# 2035 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2036 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2037 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2038 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_41
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_213:
# 2048 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_LEECH_LIFE_UNLOCKED
# 2049 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_LEECH_LIFE, 1
# 2050 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2051 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2052 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2053 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_42
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_216:
# 2063 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_PLAY_ROUGH_UNLOCKED
# 2064 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_PLAY_ROUGH, 1
# 2065 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2066 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2067 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2068 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_43
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_219:
# 2078 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_SHADOW_BALL_UNLOCKED
# 2079 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SHADOW_BALL, 1
# 2080 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2081 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2082 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2083 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_44
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_222:
# 2093 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_EARTH_POWER_UNLOCKED
# 2094 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_EARTH_POWER, 1
# 2095 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2096 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2097 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2098 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_45
	goto Hub_Event_Script_Shiny_Kecleon_70


Hub_Event_Script_Diancie::
# 2116 "data/maps/Hub1/scripts.pory"
	lockall
# 2117 "data/maps/Hub1/scripts.pory"
	faceplayer
# 2118 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEGA_SHOP_UNLOCKED, Hub_Event_Script_Diancie_9
Hub_Event_Script_Diancie_7:
# 2126 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_MEGA_SHOP_UNLOCKED, Hub_Event_Script_Diancie_6
Hub_Event_Script_Diancie_5:
# 2140 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHARIZARDITE_X_UNLOCKED, Hub_Event_Script_Diancie_4
Hub_Event_Script_Diancie_1:
# 3578 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Diancie_2:
# 2119 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_0
	goto Hub_Event_Script_Diancie_1

Hub_Event_Script_Diancie_3:
# 2127 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_1
# 2131 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHARIZARDITE_X, 1
# 2132 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_VENUSAURITE_BUYABLE
# 2133 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHARIZARDITE_Y_BUYABLE
# 2134 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BLASTOISINITE_BUYABLE
# 2135 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHARIZARDITE_X_UNLOCKED
# 2136 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_2
	goto Hub_Event_Script_Diancie_1

Hub_Event_Script_Diancie_4:
# 2141 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 2142 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_VENUSAURITE_BUYABLE, Hub_Event_Script_Diancie_13
Hub_Event_Script_Diancie_12:
# 2146 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHARIZARDITE_Y_BUYABLE, Hub_Event_Script_Diancie_16
Hub_Event_Script_Diancie_15:
# 2150 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BLASTOISINITE_BUYABLE, Hub_Event_Script_Diancie_19
Hub_Event_Script_Diancie_18:
# 2154 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BEEDRILLITE_BUYABLE, Hub_Event_Script_Diancie_22
Hub_Event_Script_Diancie_21:
# 2158 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_PIDGEOTITE_BUYABLE, Hub_Event_Script_Diancie_25
Hub_Event_Script_Diancie_24:
# 2162 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ALAKAZITE_BUYABLE, Hub_Event_Script_Diancie_28
Hub_Event_Script_Diancie_27:
# 2166 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SLOWBRONITE_BUYABLE, Hub_Event_Script_Diancie_31
Hub_Event_Script_Diancie_30:
# 2170 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GENGARITE_BUYABLE, Hub_Event_Script_Diancie_34
Hub_Event_Script_Diancie_33:
# 2174 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_KANGASKHANITE_BUYABLE, Hub_Event_Script_Diancie_37
Hub_Event_Script_Diancie_36:
# 2178 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_PINSIRITE_BUYABLE, Hub_Event_Script_Diancie_40
Hub_Event_Script_Diancie_39:
# 2182 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GYARADOSITE_BUYABLE, Hub_Event_Script_Diancie_43
Hub_Event_Script_Diancie_42:
# 2186 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_AERODACTYLITE_BUYABLE, Hub_Event_Script_Diancie_46
Hub_Event_Script_Diancie_45:
# 2190 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_AMPHAROSITE_BUYABLE, Hub_Event_Script_Diancie_49
Hub_Event_Script_Diancie_48:
# 2194 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_STEELIXITE_BUYABLE, Hub_Event_Script_Diancie_52
Hub_Event_Script_Diancie_51:
# 2198 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCIZORITE_BUYABLE, Hub_Event_Script_Diancie_55
Hub_Event_Script_Diancie_54:
# 2202 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_HERACRONITE_BUYABLE, Hub_Event_Script_Diancie_58
Hub_Event_Script_Diancie_57:
# 2206 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_HOUNDOOMINITE_BUYABLE, Hub_Event_Script_Diancie_61
Hub_Event_Script_Diancie_60:
# 2210 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_TYRANITARITE_BUYABLE, Hub_Event_Script_Diancie_64
Hub_Event_Script_Diancie_63:
# 2214 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCEPTILITE_BUYABLE, Hub_Event_Script_Diancie_67
Hub_Event_Script_Diancie_66:
# 2218 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BLAZIKENITE_BUYABLE, Hub_Event_Script_Diancie_70
Hub_Event_Script_Diancie_69:
# 2222 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SWAMPERTITE_BUYABLE, Hub_Event_Script_Diancie_73
Hub_Event_Script_Diancie_72:
# 2226 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GARDEVOIRITE_BUYABLE, Hub_Event_Script_Diancie_76
Hub_Event_Script_Diancie_75:
# 2230 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SABLENITE_BUYABLE, Hub_Event_Script_Diancie_79
Hub_Event_Script_Diancie_78:
# 2234 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MAWILITE_BUYABLE, Hub_Event_Script_Diancie_82
Hub_Event_Script_Diancie_81:
# 2238 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_AGGRONITE_BUYABLE, Hub_Event_Script_Diancie_85
Hub_Event_Script_Diancie_84:
# 2242 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MEDICHAMITE_BUYABLE, Hub_Event_Script_Diancie_88
Hub_Event_Script_Diancie_87:
# 2246 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MANECTITE_BUYABLE, Hub_Event_Script_Diancie_91
Hub_Event_Script_Diancie_90:
# 2250 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SHARPEDONITE_BUYABLE, Hub_Event_Script_Diancie_94
Hub_Event_Script_Diancie_93:
# 2254 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CAMERUPTITE_BUYABLE, Hub_Event_Script_Diancie_97
Hub_Event_Script_Diancie_96:
# 2258 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ALTARIANITE_BUYABLE, Hub_Event_Script_Diancie_100
Hub_Event_Script_Diancie_99:
# 2262 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BANETTITE_BUYABLE, Hub_Event_Script_Diancie_103
Hub_Event_Script_Diancie_102:
# 2266 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ABSOLITE_BUYABLE, Hub_Event_Script_Diancie_106
Hub_Event_Script_Diancie_105:
# 2270 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GLALITITE_BUYABLE, Hub_Event_Script_Diancie_109
Hub_Event_Script_Diancie_108:
# 2274 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SALAMENCITE_BUYABLE, Hub_Event_Script_Diancie_112
Hub_Event_Script_Diancie_111:
# 2278 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_METAGROSSITE_BUYABLE, Hub_Event_Script_Diancie_115
Hub_Event_Script_Diancie_114:
# 2282 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_LOPUNNITE_BUYABLE, Hub_Event_Script_Diancie_118
Hub_Event_Script_Diancie_117:
# 2286 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GARCHOMPITE_BUYABLE, Hub_Event_Script_Diancie_121
Hub_Event_Script_Diancie_120:
# 2290 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_LUCARIONITE_BUYABLE, Hub_Event_Script_Diancie_124
Hub_Event_Script_Diancie_123:
# 2294 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ABOMASITE_BUYABLE, Hub_Event_Script_Diancie_127
Hub_Event_Script_Diancie_126:
# 2298 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GALLADITE_BUYABLE, Hub_Event_Script_Diancie_130
Hub_Event_Script_Diancie_129:
# 2302 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CLEFABLITE_BUYABLE, Hub_Event_Script_Diancie_133
Hub_Event_Script_Diancie_132:
# 2306 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_VICTREEBELITE_BUYABLE, Hub_Event_Script_Diancie_136
Hub_Event_Script_Diancie_135:
# 2310 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_STARMINITE_BUYABLE, Hub_Event_Script_Diancie_139
Hub_Event_Script_Diancie_138:
# 2314 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DRAGONINITE_BUYABLE, Hub_Event_Script_Diancie_142
Hub_Event_Script_Diancie_141:
# 2318 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MEGANIUMITE_BUYABLE, Hub_Event_Script_Diancie_145
Hub_Event_Script_Diancie_144:
# 2322 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_FERALIGITE_BUYABLE, Hub_Event_Script_Diancie_148
Hub_Event_Script_Diancie_147:
# 2326 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SKARMORITE_BUYABLE, Hub_Event_Script_Diancie_151
Hub_Event_Script_Diancie_150:
# 2330 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_FROSLASSITE_BUYABLE, Hub_Event_Script_Diancie_154
Hub_Event_Script_Diancie_153:
# 2334 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_EMBOARITE_BUYABLE, Hub_Event_Script_Diancie_157
Hub_Event_Script_Diancie_156:
# 2338 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_EXCADRITE_BUYABLE, Hub_Event_Script_Diancie_160
Hub_Event_Script_Diancie_159:
# 2342 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCOLIPITE_BUYABLE, Hub_Event_Script_Diancie_163
Hub_Event_Script_Diancie_162:
# 2346 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCRAFTINITE_BUYABLE, Hub_Event_Script_Diancie_166
Hub_Event_Script_Diancie_165:
# 2350 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_EELEKTROSSITE_BUYABLE, Hub_Event_Script_Diancie_169
Hub_Event_Script_Diancie_168:
# 2354 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHANDELURITE_BUYABLE, Hub_Event_Script_Diancie_172
Hub_Event_Script_Diancie_171:
# 2358 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHESNAUGHTITE_BUYABLE, Hub_Event_Script_Diancie_175
Hub_Event_Script_Diancie_174:
# 2362 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DELPHOXITE_BUYABLE, Hub_Event_Script_Diancie_178
Hub_Event_Script_Diancie_177:
# 2366 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GRENINJITE_BUYABLE, Hub_Event_Script_Diancie_181
Hub_Event_Script_Diancie_180:
# 2370 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_PYROARITE_BUYABLE, Hub_Event_Script_Diancie_184
Hub_Event_Script_Diancie_183:
# 2374 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MALAMARITE_BUYABLE, Hub_Event_Script_Diancie_187
Hub_Event_Script_Diancie_186:
# 2378 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BARBARACITE_BUYABLE, Hub_Event_Script_Diancie_190
Hub_Event_Script_Diancie_189:
# 2382 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DRAGALGITE_BUYABLE, Hub_Event_Script_Diancie_193
Hub_Event_Script_Diancie_192:
# 2386 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_HAWLUCHANITE_BUYABLE, Hub_Event_Script_Diancie_196
Hub_Event_Script_Diancie_195:
# 2390 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DRAMPANITE_BUYABLE, Hub_Event_Script_Diancie_199
Hub_Event_Script_Diancie_198:
# 2394 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_FALINKSITE_BUYABLE, Hub_Event_Script_Diancie_202
Hub_Event_Script_Diancie_201:
# 2398 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_RAICHUNITE_X_BUYABLE, Hub_Event_Script_Diancie_205
Hub_Event_Script_Diancie_204:
# 2402 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_RAICHUNITE_Y_BUYABLE, Hub_Event_Script_Diancie_208
Hub_Event_Script_Diancie_207:
# 2406 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHIMECHITE_BUYABLE, Hub_Event_Script_Diancie_211
Hub_Event_Script_Diancie_210:
# 2410 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_STARAPTITE_BUYABLE, Hub_Event_Script_Diancie_214
Hub_Event_Script_Diancie_213:
# 2414 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GOLURKITE_BUYABLE, Hub_Event_Script_Diancie_217
Hub_Event_Script_Diancie_216:
# 2418 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MEOWSTICITE_BUYABLE, Hub_Event_Script_Diancie_220
Hub_Event_Script_Diancie_219:
# 2422 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CRABOMINITE_BUYABLE, Hub_Event_Script_Diancie_223
Hub_Event_Script_Diancie_222:
# 2426 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GOLISOPITE_BUYABLE, Hub_Event_Script_Diancie_226
Hub_Event_Script_Diancie_225:
# 2430 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCOVILLAINITE_BUYABLE, Hub_Event_Script_Diancie_229
Hub_Event_Script_Diancie_228:
# 2434 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GLIMMORANITE_BUYABLE, Hub_Event_Script_Diancie_232
Hub_Event_Script_Diancie_231:
# 2438 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BAXCALIBRITE_BUYABLE, Hub_Event_Script_Diancie_235
Hub_Event_Script_Diancie_234:
# 2443 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Diancie_238
# 3568 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_155
# 3573 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3574 "data/maps/Hub1/scripts.pory"
	releaseall
Hub_Event_Script_Diancie_237:
# 3576 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
	goto Hub_Event_Script_Diancie_1

Hub_Event_Script_Diancie_6:
# 2126 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ITEM_CHARIZARDITE_X_UNLOCKED, Hub_Event_Script_Diancie_3
	goto Hub_Event_Script_Diancie_5

Hub_Event_Script_Diancie_9:
# 2118 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ITEM_CHARIZARDITE_X_UNLOCKED, Hub_Event_Script_Diancie_2
	goto Hub_Event_Script_Diancie_7

Hub_Event_Script_Diancie_13:
# 2143 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_3, ITEM_VENUSAURITE
# 2144 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_12

Hub_Event_Script_Diancie_16:
# 2147 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_4, ITEM_CHARIZARDITE_Y
# 2148 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_15

Hub_Event_Script_Diancie_19:
# 2151 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_5, ITEM_BLASTOISINITE
# 2152 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_18

Hub_Event_Script_Diancie_22:
# 2155 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_6, ITEM_BEEDRILLITE
# 2156 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_21

Hub_Event_Script_Diancie_25:
# 2159 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_7, ITEM_PIDGEOTITE
# 2160 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_24

Hub_Event_Script_Diancie_28:
# 2163 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_8, ITEM_ALAKAZITE
# 2164 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_27

Hub_Event_Script_Diancie_31:
# 2167 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_9, ITEM_SLOWBRONITE
# 2168 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_30

Hub_Event_Script_Diancie_34:
# 2171 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_10, ITEM_GENGARITE
# 2172 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_33

Hub_Event_Script_Diancie_37:
# 2175 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_11, ITEM_KANGASKHANITE
# 2176 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_36

Hub_Event_Script_Diancie_40:
# 2179 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_12, ITEM_PINSIRITE
# 2180 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_39

Hub_Event_Script_Diancie_43:
# 2183 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_13, ITEM_GYARADOSITE
# 2184 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_42

Hub_Event_Script_Diancie_46:
# 2187 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_14, ITEM_AERODACTYLITE
# 2188 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_45

Hub_Event_Script_Diancie_49:
# 2191 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_15, ITEM_AMPHAROSITE
# 2192 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_48

Hub_Event_Script_Diancie_52:
# 2195 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_16, ITEM_STEELIXITE
# 2196 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_51

Hub_Event_Script_Diancie_55:
# 2199 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_17, ITEM_SCIZORITE
# 2200 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_54

Hub_Event_Script_Diancie_58:
# 2203 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_18, ITEM_HERACRONITE
# 2204 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_57

Hub_Event_Script_Diancie_61:
# 2207 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_19, ITEM_HOUNDOOMINITE
# 2208 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_60

Hub_Event_Script_Diancie_64:
# 2211 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_20, ITEM_TYRANITARITE
# 2212 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_63

Hub_Event_Script_Diancie_67:
# 2215 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_21, ITEM_SCEPTILITE
# 2216 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_66

Hub_Event_Script_Diancie_70:
# 2219 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_22, ITEM_BLAZIKENITE
# 2220 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_69

Hub_Event_Script_Diancie_73:
# 2223 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_23, ITEM_SWAMPERTITE
# 2224 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_72

Hub_Event_Script_Diancie_76:
# 2227 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_24, ITEM_GARDEVOIRITE
# 2228 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_75

Hub_Event_Script_Diancie_79:
# 2231 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_25, ITEM_SABLENITE
# 2232 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_78

Hub_Event_Script_Diancie_82:
# 2235 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_26, ITEM_MAWILITE
# 2236 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_81

Hub_Event_Script_Diancie_85:
# 2239 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_27, ITEM_AGGRONITE
# 2240 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_84

Hub_Event_Script_Diancie_88:
# 2243 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_28, ITEM_MEDICHAMITE
# 2244 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_87

Hub_Event_Script_Diancie_91:
# 2247 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_29, ITEM_MANECTITE
# 2248 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_90

Hub_Event_Script_Diancie_94:
# 2251 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_30, ITEM_SHARPEDONITE
# 2252 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_93

Hub_Event_Script_Diancie_97:
# 2255 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_31, ITEM_CAMERUPTITE
# 2256 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_96

Hub_Event_Script_Diancie_100:
# 2259 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_32, ITEM_ALTARIANITE
# 2260 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_99

Hub_Event_Script_Diancie_103:
# 2263 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_33, ITEM_BANETTITE
# 2264 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_102

Hub_Event_Script_Diancie_106:
# 2267 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_34, ITEM_ABSOLITE
# 2268 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_105

Hub_Event_Script_Diancie_109:
# 2271 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_35, ITEM_GLALITITE
# 2272 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_108

Hub_Event_Script_Diancie_112:
# 2275 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_36, ITEM_SALAMENCITE
# 2276 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_111

Hub_Event_Script_Diancie_115:
# 2279 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_37, ITEM_METAGROSSITE
# 2280 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_114

Hub_Event_Script_Diancie_118:
# 2283 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_38, ITEM_LOPUNNITE
# 2284 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_117

Hub_Event_Script_Diancie_121:
# 2287 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_39, ITEM_GARCHOMPITE
# 2288 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_120

Hub_Event_Script_Diancie_124:
# 2291 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_40, ITEM_LUCARIONITE
# 2292 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_123

Hub_Event_Script_Diancie_127:
# 2295 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_41, ITEM_ABOMASITE
# 2296 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_126

Hub_Event_Script_Diancie_130:
# 2299 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_42, ITEM_GALLADITE
# 2300 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_129

Hub_Event_Script_Diancie_133:
# 2303 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_43, ITEM_CLEFABLITE
# 2304 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_132

Hub_Event_Script_Diancie_136:
# 2307 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_44, ITEM_VICTREEBELITE
# 2308 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_135

Hub_Event_Script_Diancie_139:
# 2311 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_45, ITEM_STARMINITE
# 2312 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_138

Hub_Event_Script_Diancie_142:
# 2315 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_46, ITEM_DRAGONINITE
# 2316 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_141

Hub_Event_Script_Diancie_145:
# 2319 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_47, ITEM_MEGANIUMITE
# 2320 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_144

Hub_Event_Script_Diancie_148:
# 2323 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_48, ITEM_FERALIGITE
# 2324 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_147

Hub_Event_Script_Diancie_151:
# 2327 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_49, ITEM_SKARMORITE
# 2328 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_150

Hub_Event_Script_Diancie_154:
# 2331 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_50, ITEM_FROSLASSITE
# 2332 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_153

Hub_Event_Script_Diancie_157:
# 2335 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_51, ITEM_EMBOARITE
# 2336 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_156

Hub_Event_Script_Diancie_160:
# 2339 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_52, ITEM_EXCADRITE
# 2340 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_159

Hub_Event_Script_Diancie_163:
# 2343 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_53, ITEM_SCOLIPITE
# 2344 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_162

Hub_Event_Script_Diancie_166:
# 2347 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_54, ITEM_SCRAFTINITE
# 2348 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_165

Hub_Event_Script_Diancie_169:
# 2351 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_55, ITEM_EELEKTROSSITE
# 2352 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_168

Hub_Event_Script_Diancie_172:
# 2355 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_56, ITEM_CHANDELURITE
# 2356 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_171

Hub_Event_Script_Diancie_175:
# 2359 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_57, ITEM_CHESNAUGHTITE
# 2360 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_174

Hub_Event_Script_Diancie_178:
# 2363 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_58, ITEM_DELPHOXITE
# 2364 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_177

Hub_Event_Script_Diancie_181:
# 2367 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_59, ITEM_GRENINJITE
# 2368 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_180

Hub_Event_Script_Diancie_184:
# 2371 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_60, ITEM_PYROARITE
# 2372 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_183

Hub_Event_Script_Diancie_187:
# 2375 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_61, ITEM_MALAMARITE
# 2376 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_186

Hub_Event_Script_Diancie_190:
# 2379 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_62, ITEM_BARBARACITE
# 2380 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_189

Hub_Event_Script_Diancie_193:
# 2383 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_63, ITEM_DRAGALGITE
# 2384 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_192

Hub_Event_Script_Diancie_196:
# 2387 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_64, ITEM_HAWLUCHANITE
# 2388 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_195

Hub_Event_Script_Diancie_199:
# 2391 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_65, ITEM_DRAMPANITE
# 2392 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_198

Hub_Event_Script_Diancie_202:
# 2395 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_66, ITEM_FALINKSITE
# 2396 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_201

Hub_Event_Script_Diancie_205:
# 2399 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_67, ITEM_RAICHUNITE_X
# 2400 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_204

Hub_Event_Script_Diancie_208:
# 2403 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_68, ITEM_RAICHUNITE_Y
# 2404 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_207

Hub_Event_Script_Diancie_211:
# 2407 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_69, ITEM_CHIMECHITE
# 2408 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_210

Hub_Event_Script_Diancie_214:
# 2411 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_70, ITEM_STARAPTITE
# 2412 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_213

Hub_Event_Script_Diancie_217:
# 2415 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_71, ITEM_GOLURKITE
# 2416 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_216

Hub_Event_Script_Diancie_220:
# 2419 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_72, ITEM_MEOWSTICITE
# 2420 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_219

Hub_Event_Script_Diancie_223:
# 2423 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_73, ITEM_CRABOMINITE
# 2424 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_222

Hub_Event_Script_Diancie_226:
# 2427 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_74, ITEM_GOLISOPITE
# 2428 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_225

Hub_Event_Script_Diancie_229:
# 2431 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_75, ITEM_SCOVILLAINITE
# 2432 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_228

Hub_Event_Script_Diancie_232:
# 2435 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_76, ITEM_GLIMMORANITE
# 2436 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_231

Hub_Event_Script_Diancie_235:
# 2439 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_77, ITEM_BAXCALIBRITE
# 2440 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_234

Hub_Event_Script_Diancie_238:
# 2445 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_NEW_MEGA_BUYABLE, Hub_Event_Script_Diancie_242
# 2452 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_79
Hub_Event_Script_Diancie_241:
# 2454 "data/maps/Hub1/scripts.pory"
	showcoinsbox 21, 11
# 2455 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 2456 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 2457 "data/maps/Hub1/scripts.pory"
	case ITEM_VENUSAURITE, Hub_Event_Script_Diancie_246
# 2472 "data/maps/Hub1/scripts.pory"
	case ITEM_CHARIZARDITE_Y, Hub_Event_Script_Diancie_247
# 2487 "data/maps/Hub1/scripts.pory"
	case ITEM_BLASTOISINITE, Hub_Event_Script_Diancie_248
# 2502 "data/maps/Hub1/scripts.pory"
	case ITEM_BEEDRILLITE, Hub_Event_Script_Diancie_249
# 2517 "data/maps/Hub1/scripts.pory"
	case ITEM_PIDGEOTITE, Hub_Event_Script_Diancie_250
# 2532 "data/maps/Hub1/scripts.pory"
	case ITEM_ALAKAZITE, Hub_Event_Script_Diancie_251
# 2547 "data/maps/Hub1/scripts.pory"
	case ITEM_SLOWBRONITE, Hub_Event_Script_Diancie_252
# 2562 "data/maps/Hub1/scripts.pory"
	case ITEM_GENGARITE, Hub_Event_Script_Diancie_253
# 2577 "data/maps/Hub1/scripts.pory"
	case ITEM_KANGASKHANITE, Hub_Event_Script_Diancie_254
# 2592 "data/maps/Hub1/scripts.pory"
	case ITEM_PINSIRITE, Hub_Event_Script_Diancie_255
# 2607 "data/maps/Hub1/scripts.pory"
	case ITEM_GYARADOSITE, Hub_Event_Script_Diancie_256
# 2622 "data/maps/Hub1/scripts.pory"
	case ITEM_AERODACTYLITE, Hub_Event_Script_Diancie_257
# 2637 "data/maps/Hub1/scripts.pory"
	case ITEM_AMPHAROSITE, Hub_Event_Script_Diancie_258
# 2652 "data/maps/Hub1/scripts.pory"
	case ITEM_STEELIXITE, Hub_Event_Script_Diancie_259
# 2667 "data/maps/Hub1/scripts.pory"
	case ITEM_SCIZORITE, Hub_Event_Script_Diancie_260
# 2682 "data/maps/Hub1/scripts.pory"
	case ITEM_HERACRONITE, Hub_Event_Script_Diancie_261
# 2697 "data/maps/Hub1/scripts.pory"
	case ITEM_HOUNDOOMINITE, Hub_Event_Script_Diancie_262
# 2712 "data/maps/Hub1/scripts.pory"
	case ITEM_TYRANITARITE, Hub_Event_Script_Diancie_263
# 2727 "data/maps/Hub1/scripts.pory"
	case ITEM_SCEPTILITE, Hub_Event_Script_Diancie_264
# 2742 "data/maps/Hub1/scripts.pory"
	case ITEM_BLAZIKENITE, Hub_Event_Script_Diancie_265
# 2757 "data/maps/Hub1/scripts.pory"
	case ITEM_SWAMPERTITE, Hub_Event_Script_Diancie_266
# 2772 "data/maps/Hub1/scripts.pory"
	case ITEM_GARDEVOIRITE, Hub_Event_Script_Diancie_267
# 2787 "data/maps/Hub1/scripts.pory"
	case ITEM_SABLENITE, Hub_Event_Script_Diancie_268
# 2802 "data/maps/Hub1/scripts.pory"
	case ITEM_MAWILITE, Hub_Event_Script_Diancie_269
# 2817 "data/maps/Hub1/scripts.pory"
	case ITEM_AGGRONITE, Hub_Event_Script_Diancie_270
# 2832 "data/maps/Hub1/scripts.pory"
	case ITEM_MEDICHAMITE, Hub_Event_Script_Diancie_271
# 2847 "data/maps/Hub1/scripts.pory"
	case ITEM_MANECTITE, Hub_Event_Script_Diancie_272
# 2862 "data/maps/Hub1/scripts.pory"
	case ITEM_SHARPEDONITE, Hub_Event_Script_Diancie_273
# 2877 "data/maps/Hub1/scripts.pory"
	case ITEM_CAMERUPTITE, Hub_Event_Script_Diancie_274
# 2892 "data/maps/Hub1/scripts.pory"
	case ITEM_ALTARIANITE, Hub_Event_Script_Diancie_275
# 2907 "data/maps/Hub1/scripts.pory"
	case ITEM_BANETTITE, Hub_Event_Script_Diancie_276
# 2922 "data/maps/Hub1/scripts.pory"
	case ITEM_ABSOLITE, Hub_Event_Script_Diancie_277
# 2937 "data/maps/Hub1/scripts.pory"
	case ITEM_GLALITITE, Hub_Event_Script_Diancie_278
# 2952 "data/maps/Hub1/scripts.pory"
	case ITEM_SALAMENCITE, Hub_Event_Script_Diancie_279
# 2967 "data/maps/Hub1/scripts.pory"
	case ITEM_LOPUNNITE, Hub_Event_Script_Diancie_280
# 2982 "data/maps/Hub1/scripts.pory"
	case ITEM_GARCHOMPITE, Hub_Event_Script_Diancie_281
# 2997 "data/maps/Hub1/scripts.pory"
	case ITEM_LUCARIONITE, Hub_Event_Script_Diancie_282
# 3012 "data/maps/Hub1/scripts.pory"
	case ITEM_ABOMASITE, Hub_Event_Script_Diancie_283
# 3027 "data/maps/Hub1/scripts.pory"
	case ITEM_GALLADITE, Hub_Event_Script_Diancie_284
# 3042 "data/maps/Hub1/scripts.pory"
	case ITEM_CLEFABLITE, Hub_Event_Script_Diancie_285
# 3057 "data/maps/Hub1/scripts.pory"
	case ITEM_VICTREEBELITE, Hub_Event_Script_Diancie_286
# 3072 "data/maps/Hub1/scripts.pory"
	case ITEM_STARMINITE, Hub_Event_Script_Diancie_287
# 3087 "data/maps/Hub1/scripts.pory"
	case ITEM_DRAGONINITE, Hub_Event_Script_Diancie_288
# 3102 "data/maps/Hub1/scripts.pory"
	case ITEM_MEGANIUMITE, Hub_Event_Script_Diancie_289
# 3117 "data/maps/Hub1/scripts.pory"
	case ITEM_FERALIGITE, Hub_Event_Script_Diancie_290
# 3132 "data/maps/Hub1/scripts.pory"
	case ITEM_SKARMORITE, Hub_Event_Script_Diancie_291
# 3147 "data/maps/Hub1/scripts.pory"
	case ITEM_FROSLASSITE, Hub_Event_Script_Diancie_292
# 3162 "data/maps/Hub1/scripts.pory"
	case ITEM_EMBOARITE, Hub_Event_Script_Diancie_293
# 3177 "data/maps/Hub1/scripts.pory"
	case ITEM_EXCADRITE, Hub_Event_Script_Diancie_294
# 3192 "data/maps/Hub1/scripts.pory"
	case ITEM_SCOLIPITE, Hub_Event_Script_Diancie_295
# 3207 "data/maps/Hub1/scripts.pory"
	case ITEM_SCRAFTINITE, Hub_Event_Script_Diancie_296
# 3222 "data/maps/Hub1/scripts.pory"
	case ITEM_EELEKTROSSITE, Hub_Event_Script_Diancie_297
# 3237 "data/maps/Hub1/scripts.pory"
	case ITEM_CHANDELURITE, Hub_Event_Script_Diancie_298
# 3252 "data/maps/Hub1/scripts.pory"
	case ITEM_CHESNAUGHTITE, Hub_Event_Script_Diancie_299
# 3267 "data/maps/Hub1/scripts.pory"
	case ITEM_DELPHOXITE, Hub_Event_Script_Diancie_300
# 3282 "data/maps/Hub1/scripts.pory"
	case ITEM_GRENINJITE, Hub_Event_Script_Diancie_301
# 3297 "data/maps/Hub1/scripts.pory"
	case ITEM_PYROARITE, Hub_Event_Script_Diancie_302
# 3312 "data/maps/Hub1/scripts.pory"
	case ITEM_MALAMARITE, Hub_Event_Script_Diancie_303
# 3327 "data/maps/Hub1/scripts.pory"
	case ITEM_BARBARACITE, Hub_Event_Script_Diancie_304
# 3342 "data/maps/Hub1/scripts.pory"
	case ITEM_DRAGALGITE, Hub_Event_Script_Diancie_305
# 3357 "data/maps/Hub1/scripts.pory"
	case ITEM_HAWLUCHANITE, Hub_Event_Script_Diancie_306
# 3372 "data/maps/Hub1/scripts.pory"
	case ITEM_DRAMPANITE, Hub_Event_Script_Diancie_307
# 3387 "data/maps/Hub1/scripts.pory"
	case ITEM_FALINKSITE, Hub_Event_Script_Diancie_308
# 3402 "data/maps/Hub1/scripts.pory"
	case ITEM_RAICHUNITE_X, Hub_Event_Script_Diancie_309
# 3417 "data/maps/Hub1/scripts.pory"
	case ITEM_RAICHUNITE_Y, Hub_Event_Script_Diancie_310
# 3432 "data/maps/Hub1/scripts.pory"
	case ITEM_CHIMECHITE, Hub_Event_Script_Diancie_311
# 3447 "data/maps/Hub1/scripts.pory"
	case ITEM_STARAPTITE, Hub_Event_Script_Diancie_312
# 3462 "data/maps/Hub1/scripts.pory"
	case ITEM_GOLURKITE, Hub_Event_Script_Diancie_313
# 3477 "data/maps/Hub1/scripts.pory"
	case ITEM_MEOWSTICITE, Hub_Event_Script_Diancie_314
# 3492 "data/maps/Hub1/scripts.pory"
	case ITEM_CRABOMINITE, Hub_Event_Script_Diancie_315
# 3507 "data/maps/Hub1/scripts.pory"
	case ITEM_GOLISOPITE, Hub_Event_Script_Diancie_316
# 3522 "data/maps/Hub1/scripts.pory"
	case ITEM_SCOVILLAINITE, Hub_Event_Script_Diancie_317
# 3537 "data/maps/Hub1/scripts.pory"
	case ITEM_GLIMMORANITE, Hub_Event_Script_Diancie_318
# 3552 "data/maps/Hub1/scripts.pory"
	case ITEM_BAXCALIBRITE, Hub_Event_Script_Diancie_319
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_242:
# 2446 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_78
# 2449 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_NEW_MEGA_BUYABLE
	goto Hub_Event_Script_Diancie_241

Hub_Event_Script_Diancie_246:
# 2458 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2459 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_320
# 2469 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_247:
# 2473 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2474 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_323
# 2484 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_248:
# 2488 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2489 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_326
# 2499 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_249:
# 2503 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2504 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_329
# 2514 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_250:
# 2518 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2519 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_332
# 2529 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_251:
# 2533 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2534 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_335
# 2544 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_252:
# 2548 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2549 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_338
# 2559 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_253:
# 2563 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2564 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_341
# 2574 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_254:
# 2578 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2579 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_344
# 2589 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_255:
# 2593 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2594 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_347
# 2604 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_256:
# 2608 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2609 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_350
# 2619 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_257:
# 2623 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2624 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_353
# 2634 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_258:
# 2638 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2639 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_356
# 2649 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_259:
# 2653 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2654 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_359
# 2664 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_260:
# 2668 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2669 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_362
# 2679 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_261:
# 2683 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2684 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_365
# 2694 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_262:
# 2698 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2699 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_368
# 2709 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_263:
# 2713 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2714 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_371
# 2724 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_264:
# 2728 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2729 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_374
# 2739 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_265:
# 2743 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2744 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_377
# 2754 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_266:
# 2758 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2759 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_380
# 2769 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_267:
# 2773 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2774 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_383
# 2784 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_268:
# 2788 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2789 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_386
# 2799 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_269:
# 2803 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2804 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_389
# 2814 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_270:
# 2818 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2819 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_392
# 2829 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_271:
# 2833 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2834 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_395
# 2844 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_272:
# 2848 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2849 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_398
# 2859 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_273:
# 2863 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2864 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_401
# 2874 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_274:
# 2878 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2879 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_404
# 2889 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_275:
# 2893 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2894 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_407
# 2904 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_276:
# 2908 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2909 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_410
# 2919 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_277:
# 2923 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2924 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_413
# 2934 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_278:
# 2938 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2939 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_416
# 2949 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_279:
# 2953 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2954 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_419
# 2964 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_280:
# 2968 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2969 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_422
# 2979 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_281:
# 2983 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2984 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_425
# 2994 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_282:
# 2998 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2999 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_428
# 3009 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_283:
# 3013 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3014 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_431
# 3024 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_284:
# 3028 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3029 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_434
# 3039 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_285:
# 3043 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3044 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_437
# 3054 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_286:
# 3058 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3059 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_440
# 3069 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_287:
# 3073 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3074 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_443
# 3084 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_288:
# 3088 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3089 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_446
# 3099 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_289:
# 3103 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3104 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_449
# 3114 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_290:
# 3118 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3119 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_452
# 3129 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_291:
# 3133 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3134 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_455
# 3144 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_292:
# 3148 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3149 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_458
# 3159 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_293:
# 3163 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3164 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_461
# 3174 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_294:
# 3178 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3179 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_464
# 3189 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_295:
# 3193 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3194 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_467
# 3204 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_296:
# 3208 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3209 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_470
# 3219 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_297:
# 3223 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3224 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_473
# 3234 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_298:
# 3238 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3239 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_476
# 3249 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_299:
# 3253 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3254 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_479
# 3264 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_300:
# 3268 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3269 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_482
# 3279 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_301:
# 3283 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3284 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_485
# 3294 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_302:
# 3298 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3299 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_488
# 3309 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_303:
# 3313 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3314 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_491
# 3324 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_304:
# 3328 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3329 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_494
# 3339 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_305:
# 3343 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3344 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_497
# 3354 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_306:
# 3358 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3359 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_500
# 3369 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_307:
# 3373 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3374 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_503
# 3384 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_308:
# 3388 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3389 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_506
# 3399 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_309:
# 3403 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3404 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_509
# 3414 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_310:
# 3418 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3419 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_512
# 3429 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_311:
# 3433 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3434 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_515
# 3444 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_312:
# 3448 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3449 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_518
# 3459 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_313:
# 3463 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3464 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_521
# 3474 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_314:
# 3478 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3479 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_524
# 3489 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_315:
# 3493 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3494 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_527
# 3504 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_316:
# 3508 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3509 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_530
# 3519 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_317:
# 3523 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3524 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_533
# 3534 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_318:
# 3538 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3539 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_536
# 3549 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_319:
# 3553 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3554 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_539
# 3564 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_320:
# 2460 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_VENUSAURITE_UNLOCKED
# 2461 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_VENUSAURITE_BUYABLE
# 2462 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_VENUSAURITE, 1
# 2463 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2464 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2465 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2466 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_80
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_323:
# 2475 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHARIZARDITE_Y_UNLOCKED
# 2476 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHARIZARDITE_Y_BUYABLE
# 2477 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHARIZARDITE_Y, 1
# 2478 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2479 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2480 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2481 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_82
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_326:
# 2490 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BLASTOISINITE_UNLOCKED
# 2491 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BLASTOISINITE_BUYABLE
# 2492 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BLASTOISINITE, 1
# 2493 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2494 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2495 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2496 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_83
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_329:
# 2505 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BEEDRILLITE_UNLOCKED
# 2506 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BEEDRILLITE_BUYABLE
# 2507 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BEEDRILLITE, 1
# 2508 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2509 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2510 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2511 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_84
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_332:
# 2520 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_PIDGEOTITE_UNLOCKED
# 2521 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_PIDGEOTITE_BUYABLE
# 2522 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_PIDGEOTITE, 1
# 2523 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2524 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2525 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2526 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_85
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_335:
# 2535 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ALAKAZITE_UNLOCKED
# 2536 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ALAKAZITE_BUYABLE
# 2537 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ALAKAZITE, 1
# 2538 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2539 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2540 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2541 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_86
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_338:
# 2550 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SLOWBRONITE_UNLOCKED
# 2551 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SLOWBRONITE_BUYABLE
# 2552 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SLOWBRONITE, 1
# 2553 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2554 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2555 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2556 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_87
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_341:
# 2565 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GENGARITE_UNLOCKED
# 2566 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GENGARITE_BUYABLE
# 2567 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GENGARITE, 1
# 2568 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2569 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2570 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2571 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_88
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_344:
# 2580 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_KANGASKHANITE_UNLOCKED
# 2581 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_KANGASKHANITE_BUYABLE
# 2582 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_KANGASKHANITE, 1
# 2583 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2584 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2585 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2586 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_89
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_347:
# 2595 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_PINSIRITE_UNLOCKED
# 2596 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_PINSIRITE_BUYABLE
# 2597 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_PINSIRITE, 1
# 2598 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2599 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2600 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2601 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_90
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_350:
# 2610 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GYARADOSITE_UNLOCKED
# 2611 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GYARADOSITE_BUYABLE
# 2612 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GYARADOSITE, 1
# 2613 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2614 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2615 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2616 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_91
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_353:
# 2625 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_AERODACTYLITE_UNLOCKED
# 2626 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_AERODACTYLITE_BUYABLE
# 2627 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_AERODACTYLITE, 1
# 2628 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2629 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2630 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2631 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_92
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_356:
# 2640 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_AMPHAROSITE_UNLOCKED
# 2641 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_AMPHAROSITE_BUYABLE
# 2642 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_AMPHAROSITE, 1
# 2643 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2644 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2645 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2646 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_93
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_359:
# 2655 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_STEELIXITE_UNLOCKED
# 2656 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_STEELIXITE_BUYABLE
# 2657 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_STEELIXITE, 1
# 2658 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2659 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2660 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2661 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_94
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_362:
# 2670 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCIZORITE_UNLOCKED
# 2671 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCIZORITE_BUYABLE
# 2672 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCIZORITE, 1
# 2673 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2674 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2675 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2676 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_95
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_365:
# 2685 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_HERACRONITE_UNLOCKED
# 2686 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_HERACRONITE_BUYABLE
# 2687 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_HERACRONITE, 1
# 2688 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2689 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2690 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2691 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_96
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_368:
# 2700 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_HOUNDOOMINITE_UNLOCKED
# 2701 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_HOUNDOOMINITE_BUYABLE
# 2702 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_HOUNDOOMINITE, 1
# 2703 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2704 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2705 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2706 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_97
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_371:
# 2715 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_TYRANITARITE_UNLOCKED
# 2716 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_TYRANITARITE_BUYABLE
# 2717 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TYRANITARITE, 1
# 2718 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2719 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2720 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2721 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_98
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_374:
# 2730 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCEPTILITE_UNLOCKED
# 2731 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCEPTILITE_BUYABLE
# 2732 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCEPTILITE, 1
# 2733 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2734 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2735 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2736 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_99
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_377:
# 2745 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BLAZIKENITE_UNLOCKED
# 2746 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BLAZIKENITE_BUYABLE
# 2747 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BLAZIKENITE, 1
# 2748 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2749 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2750 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2751 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_100
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_380:
# 2760 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SWAMPERTITE_UNLOCKED
# 2761 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SWAMPERTITE_BUYABLE
# 2762 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SWAMPERTITE, 1
# 2763 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2764 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2765 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2766 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_101
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_383:
# 2775 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GARDEVOIRITE_UNLOCKED
# 2776 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GARDEVOIRITE_BUYABLE
# 2777 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GARDEVOIRITE, 1
# 2778 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2779 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2780 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2781 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_102
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_386:
# 2790 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SABLENITE_UNLOCKED
# 2791 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SABLENITE_BUYABLE
# 2792 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SABLENITE, 1
# 2793 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2794 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2795 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2796 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_103
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_389:
# 2805 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MAWILITE_UNLOCKED
# 2806 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MAWILITE_BUYABLE
# 2807 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MAWILITE, 1
# 2808 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2809 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2810 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2811 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_104
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_392:
# 2820 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_AGGRONITE_UNLOCKED
# 2821 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_AGGRONITE_BUYABLE
# 2822 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_AGGRONITE, 1
# 2823 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2824 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2825 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2826 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_105
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_395:
# 2835 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MEDICHAMITE_UNLOCKED
# 2836 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MEDICHAMITE_BUYABLE
# 2837 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEDICHAMITE, 1
# 2838 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2839 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2840 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2841 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_106
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_398:
# 2850 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MANECTITE_UNLOCKED
# 2851 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MANECTITE_BUYABLE
# 2852 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MANECTITE, 1
# 2853 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2854 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2855 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2856 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_107
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_401:
# 2865 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SHARPEDONITE_UNLOCKED
# 2866 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SHARPEDONITE_BUYABLE
# 2867 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SHARPEDONITE, 1
# 2868 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2869 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2870 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2871 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_108
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_404:
# 2880 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CAMERUPTITE_UNLOCKED
# 2881 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CAMERUPTITE_BUYABLE
# 2882 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CAMERUPTITE, 1
# 2883 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2884 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2885 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2886 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_109
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_407:
# 2895 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ALTARIANITE_UNLOCKED
# 2896 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ALTARIANITE_BUYABLE
# 2897 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ALTARIANITE, 1
# 2898 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2899 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2900 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2901 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_110
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_410:
# 2910 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BANETTITE_UNLOCKED
# 2911 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BANETTITE_BUYABLE
# 2912 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BANETTITE, 1
# 2913 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2914 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2915 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2916 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_111
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_413:
# 2925 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ABSOLITE_UNLOCKED
# 2926 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ABSOLITE_BUYABLE
# 2927 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ABSOLITE, 1
# 2928 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2929 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2930 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2931 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_112
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_416:
# 2940 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GLALITITE_UNLOCKED
# 2941 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GLALITITE_BUYABLE
# 2942 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GLALITITE, 1
# 2943 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2944 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2945 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2946 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_113
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_419:
# 2955 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SALAMENCITE_UNLOCKED
# 2956 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SALAMENCITE_BUYABLE
# 2957 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SALAMENCITE, 1
# 2958 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2959 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2960 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2961 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_114
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_422:
# 2970 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_LOPUNNITE_UNLOCKED
# 2971 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_LOPUNNITE_BUYABLE
# 2972 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LOPUNNITE, 1
# 2973 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2974 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2975 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2976 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_115
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_425:
# 2985 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GARCHOMPITE_UNLOCKED
# 2986 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GARCHOMPITE_BUYABLE
# 2987 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GARCHOMPITE, 1
# 2988 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2989 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2990 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2991 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_116
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_428:
# 3000 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_LUCARIONITE_UNLOCKED
# 3001 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_LUCARIONITE_BUYABLE
# 3002 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUCARIONITE, 1
# 3003 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3004 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3005 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3006 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_117
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_431:
# 3015 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ABOMASITE_UNLOCKED
# 3016 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ABOMASITE_BUYABLE
# 3017 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ABOMASITE, 1
# 3018 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3019 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3020 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3021 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_118
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_434:
# 3030 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GALLADITE_UNLOCKED
# 3031 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GALLADITE_BUYABLE
# 3032 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GALLADITE, 1
# 3033 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3034 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3035 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3036 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_119
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_437:
# 3045 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CLEFABLITE_UNLOCKED
# 3046 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CLEFABLITE_BUYABLE
# 3047 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CLEFABLITE, 1
# 3048 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3049 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3050 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3051 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_120
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_440:
# 3060 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_VICTREEBELITE_UNLOCKED
# 3061 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_VICTREEBELITE_BUYABLE
# 3062 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_VICTREEBELITE, 1
# 3063 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3064 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3065 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3066 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_121
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_443:
# 3075 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_STARMINITE_UNLOCKED
# 3076 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_STARMINITE_BUYABLE
# 3077 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_STARMINITE, 1
# 3078 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3079 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3080 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3081 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_122
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_446:
# 3090 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DRAGONINITE_UNLOCKED
# 3091 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DRAGONINITE_BUYABLE
# 3092 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DRAGONINITE, 1
# 3093 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3094 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3095 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3096 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_123
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_449:
# 3105 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MEGANIUMITE_UNLOCKED
# 3106 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MEGANIUMITE_BUYABLE
# 3107 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEGANIUMITE, 1
# 3108 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3109 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3110 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3111 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_124
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_452:
# 3120 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_FERALIGITE_UNLOCKED
# 3121 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_FERALIGITE_BUYABLE
# 3122 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_FERALIGITE, 1
# 3123 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3124 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3125 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3126 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_125
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_455:
# 3135 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SKARMORITE_UNLOCKED
# 3136 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SKARMORITE_BUYABLE
# 3137 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SKARMORITE, 1
# 3138 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3139 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3140 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3141 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_126
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_458:
# 3150 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_FROSLASSITE_UNLOCKED
# 3151 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_FROSLASSITE_BUYABLE
# 3152 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_FROSLASSITE, 1
# 3153 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3154 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3155 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3156 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_127
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_461:
# 3165 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_EMBOARITE_UNLOCKED
# 3166 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_EMBOARITE_BUYABLE
# 3167 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_EMBOARITE, 1
# 3168 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3169 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3170 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3171 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_128
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_464:
# 3180 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_EXCADRITE_UNLOCKED
# 3181 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_EXCADRITE_BUYABLE
# 3182 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_EXCADRITE, 1
# 3183 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3184 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3185 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3186 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_129
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_467:
# 3195 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCOLIPITE_UNLOCKED
# 3196 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCOLIPITE_BUYABLE
# 3197 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCOLIPITE, 1
# 3198 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3199 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3200 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3201 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_130
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_470:
# 3210 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCRAFTINITE_UNLOCKED
# 3211 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCRAFTINITE_BUYABLE
# 3212 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCRAFTINITE, 1
# 3213 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3214 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3215 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3216 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_131
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_473:
# 3225 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_EELEKTROSSITE_UNLOCKED
# 3226 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_EELEKTROSSITE_BUYABLE
# 3227 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_EELEKTROSSITE, 1
# 3228 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3229 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3230 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3231 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_132
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_476:
# 3240 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHANDELURITE_UNLOCKED
# 3241 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHANDELURITE_BUYABLE
# 3242 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHANDELURITE, 1
# 3243 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3244 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3245 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3246 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_133
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_479:
# 3255 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHESNAUGHTITE_UNLOCKED
# 3256 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHESNAUGHTITE_BUYABLE
# 3257 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHESNAUGHTITE, 1
# 3258 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3259 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3260 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3261 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_134
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_482:
# 3270 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DELPHOXITE_UNLOCKED
# 3271 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DELPHOXITE_BUYABLE
# 3272 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DELPHOXITE, 1
# 3273 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3274 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3275 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3276 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_135
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_485:
# 3285 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GRENINJITE_UNLOCKED
# 3286 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GRENINJITE_BUYABLE
# 3287 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GRENINJITE, 1
# 3288 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3289 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3290 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3291 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_136
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_488:
# 3300 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_PYROARITE_UNLOCKED
# 3301 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_PYROARITE_BUYABLE
# 3302 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_PYROARITE, 1
# 3303 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3304 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3305 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3306 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_137
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_491:
# 3315 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MALAMARITE_UNLOCKED
# 3316 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MALAMARITE_BUYABLE
# 3317 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MALAMARITE, 1
# 3318 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3319 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3320 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3321 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_138
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_494:
# 3330 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BARBARACITE_UNLOCKED
# 3331 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BARBARACITE_BUYABLE
# 3332 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BARBARACITE, 1
# 3333 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3334 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3335 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3336 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_139
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_497:
# 3345 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DRAGALGITE_UNLOCKED
# 3346 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DRAGALGITE_BUYABLE
# 3347 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DRAGALGITE, 1
# 3348 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3349 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3350 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3351 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_140
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_500:
# 3360 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_HAWLUCHANITE_UNLOCKED
# 3361 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_HAWLUCHANITE_BUYABLE
# 3362 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_HAWLUCHANITE, 1
# 3363 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3364 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3365 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3366 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_141
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_503:
# 3375 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DRAMPANITE_UNLOCKED
# 3376 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DRAMPANITE_BUYABLE
# 3377 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DRAMPANITE, 1
# 3378 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3379 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3380 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3381 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_142
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_506:
# 3390 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_FALINKSITE_UNLOCKED
# 3391 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_FALINKSITE_BUYABLE
# 3392 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_FALINKSITE, 1
# 3393 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3394 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3395 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3396 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_143
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_509:
# 3405 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_RAICHUNITE_X_UNLOCKED
# 3406 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_RAICHUNITE_X_BUYABLE
# 3407 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RAICHUNITE_X, 1
# 3408 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3409 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3410 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3411 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_144
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_512:
# 3420 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_RAICHUNITE_Y_UNLOCKED
# 3421 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_RAICHUNITE_Y_BUYABLE
# 3422 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RAICHUNITE_Y, 1
# 3423 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3424 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3425 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3426 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_145
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_515:
# 3435 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHIMECHITE_UNLOCKED
# 3436 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHIMECHITE_BUYABLE
# 3437 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHIMECHITE, 1
# 3438 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3439 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3440 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3441 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_146
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_518:
# 3450 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_STARAPTITE_UNLOCKED
# 3451 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_STARAPTITE_BUYABLE
# 3452 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_STARAPTITE, 1
# 3453 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3454 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3455 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3456 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_147
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_521:
# 3465 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GOLURKITE_UNLOCKED
# 3466 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GOLURKITE_BUYABLE
# 3467 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GOLURKITE, 1
# 3468 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3469 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3470 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3471 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_148
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_524:
# 3480 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MEOWSTICITE_UNLOCKED
# 3481 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MEOWSTICITE_BUYABLE
# 3482 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEOWSTICITE, 1
# 3483 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3484 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3485 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3486 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_149
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_527:
# 3495 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CRABOMINITE_UNLOCKED
# 3496 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CRABOMINITE_BUYABLE
# 3497 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CRABOMINITE, 1
# 3498 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3499 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3500 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3501 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_150
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_530:
# 3510 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GOLISOPITE_UNLOCKED
# 3511 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GOLISOPITE_BUYABLE
# 3512 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GOLISOPITE, 1
# 3513 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3514 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3515 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3516 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_151
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_533:
# 3525 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCOVILLAINITE_UNLOCKED
# 3526 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCOVILLAINITE_BUYABLE
# 3527 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCOVILLAINITE, 1
# 3528 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3529 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3530 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3531 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_152
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_536:
# 3540 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GLIMMORANITE_UNLOCKED
# 3541 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GLIMMORANITE_BUYABLE
# 3542 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GLIMMORANITE, 1
# 3543 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3544 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3545 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3546 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_153
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_539:
# 3555 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BAXCALIBRITE_UNLOCKED
# 3556 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BAXCALIBRITE_BUYABLE
# 3557 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BAXCALIBRITE, 1
# 3558 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3559 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3560 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3561 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_154
	goto Hub_Event_Script_Diancie_237


Hub_Event_Script_Marowak::
# 3582 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3583 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Marowak_Text_0
# 3584 "data/maps/Hub1/scripts.pory"
	closemessage
# 3585 "data/maps/Hub1/scripts.pory"
	applymovement 1, Hub_Event_Script_Marowak_Movement_0
	return


Hub_Event_Script_Chimecho::
# 3595 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_0, type = MSGBOX_YESNO
# 3596 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Chimecho_1
# 3635 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_18
# 3636 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Chimecho_1:
# 3597 "data/maps/Hub1/scripts.pory"
	closemessage
# 3598 "data/maps/Hub1/scripts.pory"
backtocharmslist:
# 3599 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_1, ITEM_SHINY_STARTER_CHARM
# 3600 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_2, ITEM_LUMP_SUM_CHARM
# 3601 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_3, ITEM_BERRY_PACK_CHARM
# 3602 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TINTED_CHARM_STARTER_UNLOCKED, Hub_Event_Script_Chimecho_5
Hub_Event_Script_Chimecho_4:
# 3603 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_NORMAL_CHARM_STARTER_UNLOCKED, Hub_Event_Script_Chimecho_8
Hub_Event_Script_Chimecho_7:
# 3604 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_MINTY_CHARM_STARTER_UNLOCKED, Hub_Event_Script_Chimecho_11
Hub_Event_Script_Chimecho_10:
# 3605 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_BRUXISH_FLOSS_CHARM_UNLOCKED, Hub_Event_Script_Chimecho_14
Hub_Event_Script_Chimecho_13:
# 3606 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_UNOWN_BUDDY_CHARM_UNLOCKED, Hub_Event_Script_Chimecho_17
Hub_Event_Script_Chimecho_16:
# 3608 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 8, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 3609 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 3610 "data/maps/Hub1/scripts.pory"
	case MULTI_B_PRESSED, Hub_Event_Script_Chimecho_21
# 3614 "data/maps/Hub1/scripts.pory"
	case ITEM_SHINY_STARTER_CHARM, Hub_Event_Script_Chimecho_22
# 3616 "data/maps/Hub1/scripts.pory"
	case ITEM_LUMP_SUM_CHARM, Hub_Event_Script_Chimecho_23
# 3618 "data/maps/Hub1/scripts.pory"
	case ITEM_BERRY_PACK_CHARM, Hub_Event_Script_Chimecho_24
# 3620 "data/maps/Hub1/scripts.pory"
	case ITEM_TINTED_CHARM, Hub_Event_Script_Chimecho_25
# 3622 "data/maps/Hub1/scripts.pory"
	case ITEM_NORMAL_CHARM, Hub_Event_Script_Chimecho_26
# 3624 "data/maps/Hub1/scripts.pory"
	case ITEM_MINTY_CHARM, Hub_Event_Script_Chimecho_27
# 3626 "data/maps/Hub1/scripts.pory"
	case ITEM_BRUXISH_FLOSS_CHARM, Hub_Event_Script_Chimecho_28
# 3628 "data/maps/Hub1/scripts.pory"
	case ITEM_UNOWN_BUDDY_CHARM, Hub_Event_Script_Chimecho_29
Hub_Event_Script_Chimecho_19:
# 3631 "data/maps/Hub1/scripts.pory"
	closemessage
# 3632 "data/maps/Hub1/scripts.pory"
	goto backtocharmslist
	return

Hub_Event_Script_Chimecho_5:
# 3602 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_4, ITEM_TINTED_CHARM
	goto Hub_Event_Script_Chimecho_4

Hub_Event_Script_Chimecho_8:
# 3603 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_5, ITEM_NORMAL_CHARM
	goto Hub_Event_Script_Chimecho_7

Hub_Event_Script_Chimecho_11:
# 3604 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_6, ITEM_MINTY_CHARM
	goto Hub_Event_Script_Chimecho_10

Hub_Event_Script_Chimecho_14:
# 3605 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_7, ITEM_BRUXISH_FLOSS_CHARM
	goto Hub_Event_Script_Chimecho_13

Hub_Event_Script_Chimecho_17:
# 3606 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_8, ITEM_UNOWN_BUDDY_CHARM
	goto Hub_Event_Script_Chimecho_16

Hub_Event_Script_Chimecho_21:
# 3611 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_9
# 3612 "data/maps/Hub1/scripts.pory"
	releaseall
	end

Hub_Event_Script_Chimecho_22:
# 3615 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_10
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_23:
# 3617 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_11
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_24:
# 3619 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_12
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_25:
# 3621 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_13
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_26:
# 3623 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_14
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_27:
# 3625 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_15
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_28:
# 3627 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_16
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_29:
# 3629 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_17
	goto Hub_Event_Script_Chimecho_19


GiveStarterCharm::
# 3642 "data/maps/Hub1/scripts.pory"
	special BufferStarterCharms
# 3643 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_SHINY_STARTER_CHARM
	goto_if_eq GiveStarterCharm_2
# 3643 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_SHINY_STARTER_CHARM
	goto_if_eq GiveStarterCharm_2
# 3643 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_SHINY_STARTER_CHARM
	goto_if_eq GiveStarterCharm_2
GiveStarterCharm_1:
# 3646 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_LUMP_SUM_CHARM
	goto_if_eq GiveStarterCharm_9
# 3646 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_LUMP_SUM_CHARM
	goto_if_eq GiveStarterCharm_9
# 3646 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_LUMP_SUM_CHARM
	goto_if_eq GiveStarterCharm_9
GiveStarterCharm_8:
# 3649 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_BERRY_PACK_CHARM
	goto_if_eq GiveStarterCharm_16
# 3649 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_BERRY_PACK_CHARM
	goto_if_eq GiveStarterCharm_16
# 3649 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_BERRY_PACK_CHARM
	goto_if_eq GiveStarterCharm_16
GiveStarterCharm_15:
# 3652 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_TINTED_CHARM
	goto_if_eq GiveStarterCharm_23
# 3652 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_TINTED_CHARM
	goto_if_eq GiveStarterCharm_23
# 3652 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_TINTED_CHARM
	goto_if_eq GiveStarterCharm_23
GiveStarterCharm_22:
# 3655 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_NORMAL_CHARM
	goto_if_eq GiveStarterCharm_30
# 3655 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_NORMAL_CHARM
	goto_if_eq GiveStarterCharm_30
# 3655 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_NORMAL_CHARM
	goto_if_eq GiveStarterCharm_30
GiveStarterCharm_29:
# 3658 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_MINTY_CHARM
	goto_if_eq GiveStarterCharm_37
# 3658 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_MINTY_CHARM
	goto_if_eq GiveStarterCharm_37
# 3658 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_MINTY_CHARM
	goto_if_eq GiveStarterCharm_37
GiveStarterCharm_36:
# 3661 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_BRUXISH_FLOSS_CHARM
	goto_if_eq GiveStarterCharm_44
# 3661 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_BRUXISH_FLOSS_CHARM
	goto_if_eq GiveStarterCharm_44
# 3661 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_BRUXISH_FLOSS_CHARM
	goto_if_eq GiveStarterCharm_44
GiveStarterCharm_43:
# 3664 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_UNOWN_BUDDY_CHARM
	goto_if_eq GiveStarterCharm_51
# 3664 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_UNOWN_BUDDY_CHARM
	goto_if_eq GiveStarterCharm_51
# 3664 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_UNOWN_BUDDY_CHARM
	goto_if_eq GiveStarterCharm_51
GiveStarterCharm_50:
# 3667 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, TRUE, 3, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 3668 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 3669 "data/maps/Hub1/scripts.pory"
	case ITEM_SHINY_STARTER_CHARM, GiveStarterCharm_59
# 3677 "data/maps/Hub1/scripts.pory"
	case ITEM_LUMP_SUM_CHARM, GiveStarterCharm_60
# 3681 "data/maps/Hub1/scripts.pory"
	case ITEM_BERRY_PACK_CHARM, GiveStarterCharm_61
# 3687 "data/maps/Hub1/scripts.pory"
	case ITEM_TINTED_CHARM, GiveStarterCharm_62
# 3689 "data/maps/Hub1/scripts.pory"
	case ITEM_NORMAL_CHARM, GiveStarterCharm_63
# 3691 "data/maps/Hub1/scripts.pory"
	case ITEM_MINTY_CHARM, GiveStarterCharm_64
# 3693 "data/maps/Hub1/scripts.pory"
	case ITEM_BRUXISH_FLOSS_CHARM, GiveStarterCharm_65
# 3695 "data/maps/Hub1/scripts.pory"
	case ITEM_UNOWN_BUDDY_CHARM, GiveStarterCharm_66
GiveStarterCharm_57:
# 3700 "data/maps/Hub1/scripts.pory"
	msgbox GiveStarterCharm_Text_0
# 3701 "data/maps/Hub1/scripts.pory"
	waitmessage
	return

GiveStarterCharm_2:
# 3644 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_1, ITEM_SHINY_STARTER_CHARM
	goto GiveStarterCharm_1

GiveStarterCharm_9:
# 3647 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_2, ITEM_LUMP_SUM_CHARM
	goto GiveStarterCharm_8

GiveStarterCharm_16:
# 3650 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_3, ITEM_BERRY_PACK_CHARM
	goto GiveStarterCharm_15

GiveStarterCharm_23:
# 3653 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_4, ITEM_TINTED_CHARM
	goto GiveStarterCharm_22

GiveStarterCharm_30:
# 3656 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_5, ITEM_NORMAL_CHARM
	goto GiveStarterCharm_29

GiveStarterCharm_37:
# 3659 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_6, ITEM_MINTY_CHARM
	goto GiveStarterCharm_36

GiveStarterCharm_44:
# 3662 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_7, ITEM_BRUXISH_FLOSS_CHARM
	goto GiveStarterCharm_43

GiveStarterCharm_51:
# 3665 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_8, ITEM_UNOWN_BUDDY_CHARM
	goto GiveStarterCharm_50

GiveStarterCharm_59:
# 3670 "data/maps/Hub1/scripts.pory"
	setflag FLAG_NEXT_GIVE_MON_SHINY
# 3671 "data/maps/Hub1/scripts.pory"
	special ZeroPlayerPartyMons
# 3672 "data/maps/Hub1/scripts.pory"
	special GiveSavedStarter
# 3673 "data/maps/Hub1/scripts.pory"
	special UpdatePlayerSprite
# 3674 "data/maps/Hub1/scripts.pory"
	special UpdateTransformedPlayerPalette
# 3675 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SHINY_STARTER_CHARM, 1
# 3676 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_LEVEL_UP
	goto GiveStarterCharm_57

GiveStarterCharm_60:
# 3678 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUMP_SUM_CHARM, 1
# 3679 "data/maps/Hub1/scripts.pory"
	addmoney 1500
# 3680 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
	goto GiveStarterCharm_57

GiveStarterCharm_61:
# 3682 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BERRY_PACK_CHARM, 1
# 3683 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 1
# 3684 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
# 3685 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BERRY_JUICE, 1
# 3686 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto GiveStarterCharm_57

GiveStarterCharm_62:
# 3688 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TINTED_CHARM, 1
	goto GiveStarterCharm_57

GiveStarterCharm_63:
# 3690 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_NORMAL_CHARM, 1
	goto GiveStarterCharm_57

GiveStarterCharm_64:
# 3692 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MINTY_CHARM, 1
	goto GiveStarterCharm_57

GiveStarterCharm_65:
# 3694 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BRUXISH_FLOSS_CHARM, 1
	goto GiveStarterCharm_57

GiveStarterCharm_66:
# 3696 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_UNOWN_BUDDY_CHARM, 1
# 3697 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_UNOWN, 14
	goto GiveStarterCharm_57


Hub_Event_Script_Golem::
# 3707 "data/maps/Hub1/scripts.pory"
	lockall
# 3708 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3709 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEGA_SHOP_UNLOCKED, Hub_Event_Script_Golem_2
# 3712 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Golem_Text_1
Hub_Event_Script_Golem_1:
# 3714 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3715 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Golem_2:
# 3710 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Golem_Text_0
	goto Hub_Event_Script_Golem_1


Hub_Event_Script_Togedemaru::
# 3719 "data/maps/Hub1/scripts.pory"
	lockall
# 3720 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3721 "data/maps/Hub1/scripts.pory"
	random 2
# 3722 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 3723 "data/maps/Hub1/scripts.pory"
	case 0, Hub_Event_Script_Togedemaru_3
# 3725 "data/maps/Hub1/scripts.pory"
	case 1, Hub_Event_Script_Togedemaru_4
Hub_Event_Script_Togedemaru_1:
# 3729 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3730 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Togedemaru_3:
# 3724 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Togedemaru_Text_0
	goto Hub_Event_Script_Togedemaru_1

Hub_Event_Script_Togedemaru_4:
# 3726 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Togedemaru_Text_1
	goto Hub_Event_Script_Togedemaru_1


Hub_Event_Script_Klang::
# 3734 "data/maps/Hub1/scripts.pory"
	lockall
# 3735 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3736 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Klang_Text_0
# 3737 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3738 "data/maps/Hub1/scripts.pory"
	releaseall
	return


Hub_Event_Script_Bruxish::
# 3742 "data/maps/Hub1/scripts.pory"
	lockall
# 3743 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3744 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_BRUXISH_FLOSS_CHARM_UNLOCKED, Hub_Event_Script_Bruxish_2
# 3751 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Bruxish_Text_2
# 3752 "data/maps/Hub1/scripts.pory"
	waitmessage
Hub_Event_Script_Bruxish_1:
# 3754 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Bruxish_2:
# 3745 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Bruxish_Text_0
# 3746 "data/maps/Hub1/scripts.pory"
	setflag FLAG_BRUXISH_FLOSS_CHARM_UNLOCKED
# 3747 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_EVOLVED
# 3748 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Bruxish_Text_1
# 3749 "data/maps/Hub1/scripts.pory"
	waitmessage
	goto Hub_Event_Script_Bruxish_1


Hub_Event_Script_Simisage::
# 3758 "data/maps/Hub1/scripts.pory"
	lockall
# 3759 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3760 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Simisage_Text_0
# 3761 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3762 "data/maps/Hub1/scripts.pory"
	releaseall
	return


Hub_Event_Script_Woobat::
# 3766 "data/maps/Hub1/scripts.pory"
	lockall
# 3767 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3768 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Woobat_Text_0
# 3769 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3770 "data/maps/Hub1/scripts.pory"
	releaseall
	return


Hub_Event_Script_Unown::
# 3775 "data/maps/Hub1/scripts.pory"
	lockall
# 3776 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3777 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_UNOWN_BUDDY_CHARM_UNLOCKED, Hub_Event_Script_Unown_2
# 3784 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Unown_Text_2
# 3785 "data/maps/Hub1/scripts.pory"
	waitmessage
Hub_Event_Script_Unown_1:
# 3787 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Unown_2:
# 3778 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Unown_Text_0
# 3779 "data/maps/Hub1/scripts.pory"
	setflag FLAG_UNOWN_BUDDY_CHARM_UNLOCKED
# 3780 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Unown_Text_1
# 3781 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_EVOLVED
# 3782 "data/maps/Hub1/scripts.pory"
	waitmessage
	goto Hub_Event_Script_Unown_1


Hub_Event_Script_Smoliv::
# 3791 "data/maps/Hub1/scripts.pory"
	lockall
# 3792 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3793 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Smoliv_Text_0
# 3794 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3795 "data/maps/Hub1/scripts.pory"
	releaseall
	return


# 425 "data/maps/Hub1/scripts.pory"
Hub_Event_Script_Birch_Movement_0:
# 426 "data/maps/Hub1/scripts.pory"
	walk_down
# 427 "data/maps/Hub1/scripts.pory"
	face_left
	step_end

# 434 "data/maps/Hub1/scripts.pory"
Hub_Event_Script_Birch_Movement_1:
# 435 "data/maps/Hub1/scripts.pory"
	walk_up
# 436 "data/maps/Hub1/scripts.pory"
	walk_left
# 437 "data/maps/Hub1/scripts.pory"
	face_right
	step_end

# 440 "data/maps/Hub1/scripts.pory"
Hub_Event_Script_Birch_Movement_2:
# 441 "data/maps/Hub1/scripts.pory"
	walk_up
# 441 "data/maps/Hub1/scripts.pory"
	walk_up
# 441 "data/maps/Hub1/scripts.pory"
	walk_up
# 441 "data/maps/Hub1/scripts.pory"
	walk_up
	step_end

# 3585 "data/maps/Hub1/scripts.pory"
Hub_Event_Script_Marowak_Movement_0:
# 3586 "data/maps/Hub1/scripts.pory"
	face_down
	step_end

AfterWarpIntoNewAct_Text_0:
# 10 "data/maps/Hub1/scripts.pory"
	.string "Your Ho-Oh Feather activated! You were\n"
	.string "given another chance!$"

AfterWarpIntoNewAct_Text_1:
# 25 "data/maps/Hub1/scripts.pory"
	.string "Your Phione egg hatched into a Phione!$"

AfterWarpIntoNewAct_Text_2:
# 30 "data/maps/Hub1/scripts.pory"
	.string "Your Minty Charm activated!$"

AfterWarpIntoNewAct_Text_3:
# 40 "data/maps/Hub1/scripts.pory"
	.string "The level cap has been raised to\n"
	.string "{STR_VAR_1}!\p"
	.string "You can level your pokemon up to the\n"
	.string "cap via the party menu.$"

AfterWarpIntoNewAct_Text_4:
# 49 "data/maps/Hub1/scripts.pory"
	.string "You managed to collect\n{STR_VAR_1} COINS in your last run!$"

AfterWarpIntoNewAct_Text_5:
# 57 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked the Minty Charm as a\n"
	.string "starter charm!$"

AfterWarpIntoNewAct_Text_6:
# 61 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked the Tinted Charm as a\n"
	.string "starter charm!$"

AfterWarpIntoNewAct_Text_7:
# 65 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked the Normal Charm as a\n"
	.string "starter charm!$"

AfterWarpIntoNewAct_Text_8:
# 69 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked a new difficulty!$"

AfterWarpIntoNewAct_Text_9:
# 75 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked an alternate first\n"
	.string "path! Each time you enter a path, you\l"
	.string "now have a chance to enter the\l"
	.string "alternate path.$"

Act1BirchBag_Text_0:
# 106 "data/maps/Hub1/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

AbraTeleport_Text_0:
# 132 "data/maps/Hub1/scripts.pory"
	.string "You'll have to defeat the leader first\nbefore I can teleport you\lto the next act.$"

AbraTeleport_Text_1:
# 136 "data/maps/Hub1/scripts.pory"
	.string "Would you like to teleport\nto the next act?$"

AbraTeleport_Text_2:
# 139 "data/maps/Hub1/scripts.pory"
	.string "Alright then! Here we go!$"

AbraTeleport_Text_3:
# 143 "data/maps/Hub1/scripts.pory"
	.string "Okay! Let me know when you're ready.$"

RivalFight1_Text_0:
# 152 "data/maps/Hub1/scripts.pory"
	.string "Yo I'm Treecko. You seem like\nA worthy rival! Grrr!$"

RivalFight1_Text_1:
# 152 "data/maps/Hub1/scripts.pory"
	.string "Damn you got me.$"

RivalFight1_Text_2:
# 153 "data/maps/Hub1/scripts.pory"
	.string "I'll get you next time. Just you\nwait and see!$"

RivalFight1_Text_3:
# 157 "data/maps/Hub1/scripts.pory"
	.string "Yo I'm Torchic. You seem like\nA worthy rival! Grrr!$"

RivalFight2_Text_0:
# 167 "data/maps/Hub1/scripts.pory"
	.string "Sup. Let's do this.$"

RivalFight2_Text_1:
# 167 "data/maps/Hub1/scripts.pory"
	.string "Grrrr...$"

RivalFight2_Text_2:
# 168 "data/maps/Hub1/scripts.pory"
	.string "Just you wait. I'll come back even\nstronger.$"

RivalFight2_Text_3:
# 172 "data/maps/Hub1/scripts.pory"
	.string "I'm fired up and ready to fight!$"

RivalFight2_Text_4:
# 172 "data/maps/Hub1/scripts.pory"
	.string "Noooo!$"

RivalFight2_Text_5:
# 173 "data/maps/Hub1/scripts.pory"
	.string "I need to train even more...$"

RivalFight3_Text_0:
# 182 "data/maps/Hub1/scripts.pory"
	.string "You ready?$"

RivalFight3_Text_1:
# 182 "data/maps/Hub1/scripts.pory"
	.string "I still can't beat you...$"

RivalFight3_Text_2:
# 183 "data/maps/Hub1/scripts.pory"
	.string "Let's fight again.$"

RivalFight3_Text_3:
# 187 "data/maps/Hub1/scripts.pory"
	.string "Raaaa!\nLet's give it our all!$"

RivalFight3_Text_4:
# 187 "data/maps/Hub1/scripts.pory"
	.string "I'm still not strong enough...$"

RivalFight4_Text_0:
# 197 "data/maps/Hub1/scripts.pory"
	.string "One last time...$"

RivalFight4_Text_1:
# 197 "data/maps/Hub1/scripts.pory"
	.string "......$"

RivalFight4_Text_2:
# 198 "data/maps/Hub1/scripts.pory"
	.string "Good luck.$"

RivalFight4_Text_3:
# 202 "data/maps/Hub1/scripts.pory"
	.string "I can't wait to show you how much\nstronger I've gotten!$"

RivalFight4_Text_4:
# 202 "data/maps/Hub1/scripts.pory"
	.string "I'm in shock...\pYou really are the strongest.$"

RivalFight4_Text_5:
# 203 "data/maps/Hub1/scripts.pory"
	.string "I hope you crush it with the last\nremaining fights!$"

HUB1_Run_Stats_Sign_Text_0:
# 221 "data/maps/Hub1/scripts.pory"
	.string "Total Runs: {STR_VAR_1}\nAct 1 Wins: {STR_VAR_2}$"

HUB1_Run_Stats_Sign_Text_1:
# 227 "data/maps/Hub1/scripts.pory"
	.string "Act 2 Wins: {STR_VAR_3}\nAct 3 Wins: {STR_VAR_1}\pAct 4 Wins: {STR_VAR_2}$"

HUB1_ONFRAME_Text_0:
# 251 "data/maps/Hub1/scripts.pory"
	.string "Welcome to Pokemon Path!\pTo start, please choose\na starter pokemon.$"

HUB1_ONFRAME_Text_1:
# 254 "data/maps/Hub1/scripts.pory"
	.string "Bulbasaur$"

HUB1_ONFRAME_Text_2:
# 255 "data/maps/Hub1/scripts.pory"
	.string "Charmander$"

HUB1_ONFRAME_Text_3:
# 256 "data/maps/Hub1/scripts.pory"
	.string "Squirtle$"

HUB1_ONFRAME_Text_4:
# 257 "data/maps/Hub1/scripts.pory"
	.string "Chikorita$"

HUB1_ONFRAME_Text_5:
# 258 "data/maps/Hub1/scripts.pory"
	.string "Cyndaquil$"

HUB1_ONFRAME_Text_6:
# 259 "data/maps/Hub1/scripts.pory"
	.string "Totodile$"

HUB1_ONFRAME_Text_7:
# 260 "data/maps/Hub1/scripts.pory"
	.string "Treecko$"

HUB1_ONFRAME_Text_8:
# 261 "data/maps/Hub1/scripts.pory"
	.string "Torchic$"

HUB1_ONFRAME_Text_9:
# 262 "data/maps/Hub1/scripts.pory"
	.string "Mudkip$"

HUB1_ONFRAME_Text_10:
# 263 "data/maps/Hub1/scripts.pory"
	.string "Turtwig$"

HUB1_ONFRAME_Text_11:
# 264 "data/maps/Hub1/scripts.pory"
	.string "Chimchar$"

HUB1_ONFRAME_Text_12:
# 265 "data/maps/Hub1/scripts.pory"
	.string "Piplup$"

HUB1_ONFRAME_Text_13:
# 266 "data/maps/Hub1/scripts.pory"
	.string "Snivy$"

HUB1_ONFRAME_Text_14:
# 267 "data/maps/Hub1/scripts.pory"
	.string "Tepig$"

HUB1_ONFRAME_Text_15:
# 268 "data/maps/Hub1/scripts.pory"
	.string "Oshawott$"

HUB1_ONFRAME_Text_16:
# 269 "data/maps/Hub1/scripts.pory"
	.string "Chespin$"

HUB1_ONFRAME_Text_17:
# 270 "data/maps/Hub1/scripts.pory"
	.string "Fennekin$"

HUB1_ONFRAME_Text_18:
# 271 "data/maps/Hub1/scripts.pory"
	.string "Froakie$"

HUB1_ONFRAME_Text_19:
# 272 "data/maps/Hub1/scripts.pory"
	.string "Rowlet$"

HUB1_ONFRAME_Text_20:
# 273 "data/maps/Hub1/scripts.pory"
	.string "Litten$"

HUB1_ONFRAME_Text_21:
# 274 "data/maps/Hub1/scripts.pory"
	.string "Popplio$"

HUB1_ONFRAME_Text_22:
# 275 "data/maps/Hub1/scripts.pory"
	.string "Grookey$"

HUB1_ONFRAME_Text_23:
# 276 "data/maps/Hub1/scripts.pory"
	.string "Scorbunny$"

HUB1_ONFRAME_Text_24:
# 277 "data/maps/Hub1/scripts.pory"
	.string "Sobble$"

HUB1_ONFRAME_Text_25:
# 278 "data/maps/Hub1/scripts.pory"
	.string "Sprigatito$"

HUB1_ONFRAME_Text_26:
# 279 "data/maps/Hub1/scripts.pory"
	.string "Fuecoco$"

HUB1_ONFRAME_Text_27:
# 280 "data/maps/Hub1/scripts.pory"
	.string "Quaxly$"

HUB1_ONFRAME_Text_28:
# 401 "data/maps/Hub1/scripts.pory"
	.string "Nice choice!\p"
	.string "Now for an introduction...\p"
	.string "This area is the Hub.\n"
	.string "You start every run and end every run\l"
	.string "here.\p"
	.string "In the hub, you can unlock new starter\n"
	.string "pokemon, new shop items, and more.\p"
	.string "To start a run, talk to professor Birch\n"
	.string "above you.\p"
	.string "Each run, you must go through paths,\n"
	.string "collecting pokemon, gathering items and\l"
	.string "battling trainers.\p"
	.string "That's the gist of it.\p"
	.string "Now go ahead and start a run when\n"
	.string "you're ready!$"

Hub_Event_Script_Birch_Text_0:
# 411 "data/maps/Hub1/scripts.pory"
	.string "What would you like to do?$"

Hub_Event_Script_Birch_Text_1:
# 412 "data/maps/Hub1/scripts.pory"
	.string "Start a run$"

Hub_Event_Script_Birch_Text_2:
# 412 "data/maps/Hub1/scripts.pory"
	.string "Change the difficulty$"

Hub_Event_Script_Birch_Text_3:
# 416 "data/maps/Hub1/scripts.pory"
	.string "Let me know when you're ready to start\n"
	.string "a run!$"

Hub_Event_Script_Birch_Text_4:
# 420 "data/maps/Hub1/scripts.pory"
	.string "Would you like to start a run?$"

Hub_Event_Script_Birch_Text_5:
# 423 "data/maps/Hub1/scripts.pory"
	.string "Alright then!$"

Hub_Event_Script_Birch_Text_6:
# 430 "data/maps/Hub1/scripts.pory"
	.string "Don't forget to take a starter charm\n"
	.string "with you!$"

Hub_Event_Script_Birch_Text_7:
# 432 "data/maps/Hub1/scripts.pory"
	.string "Now off you go! Good luck!$"

Hub_Event_Script_Birch_Text_8:
# 452 "data/maps/Hub1/scripts.pory"
	.string "Current difficulty: {STR_VAR_1}\nNote the modifiers stack at each level.$"

Hub_Event_Script_Birch_Text_9:
# 453 "data/maps/Hub1/scripts.pory"
	.string "0 - No modifiers$"

Hub_Event_Script_Birch_Text_10:
# 454 "data/maps/Hub1/scripts.pory"
	.string "1 - +1 Enemies Level$"

Hub_Event_Script_Birch_Text_11:
# 455 "data/maps/Hub1/scripts.pory"
	.string "2 - -1 Birch Bag each path$"

Hub_Event_Script_Birch_Text_12:
# 456 "data/maps/Hub1/scripts.pory"
	.string "3 - Less Money$"

Hub_Event_Script_Birch_Text_13:
# 457 "data/maps/Hub1/scripts.pory"
	.string "4 - Enemies crit more$"

Hub_Event_Script_Birch_Text_14:
# 458 "data/maps/Hub1/scripts.pory"
	.string "5 - +1 Enemies Level$"

Hub_Event_Script_Birch_Text_15:
# 459 "data/maps/Hub1/scripts.pory"
	.string "6 - -1 Birch Bag each path$"

Hub_Event_Script_Birch_Text_16:
# 464 "data/maps/Hub1/scripts.pory"
	.string "Beat all 4 paths to unlock the next\n"
	.string "difficulty!$"

Hub_Event_Script_Birch_Text_17:
# 475 "data/maps/Hub1/scripts.pory"
	.string "Difficulty set to {STR_VAR_1}$"

Hub_Event_Script_Miltank_Text_0:
# 487 "data/maps/Hub1/scripts.pory"
	.string "Bulbasaur (500C)$"

Hub_Event_Script_Miltank_Text_1:
# 488 "data/maps/Hub1/scripts.pory"
	.string "Charmander (500C)$"

Hub_Event_Script_Miltank_Text_2:
# 489 "data/maps/Hub1/scripts.pory"
	.string "Squirtle (500C)$"

Hub_Event_Script_Miltank_Text_3:
# 490 "data/maps/Hub1/scripts.pory"
	.string "Chikorita (500C)$"

Hub_Event_Script_Miltank_Text_4:
# 491 "data/maps/Hub1/scripts.pory"
	.string "Cyndaquil (500C)$"

Hub_Event_Script_Miltank_Text_5:
# 492 "data/maps/Hub1/scripts.pory"
	.string "Totodile (500C)$"

Hub_Event_Script_Miltank_Text_6:
# 493 "data/maps/Hub1/scripts.pory"
	.string "Treecko (500C)$"

Hub_Event_Script_Miltank_Text_7:
# 494 "data/maps/Hub1/scripts.pory"
	.string "Torchic (500C)$"

Hub_Event_Script_Miltank_Text_8:
# 495 "data/maps/Hub1/scripts.pory"
	.string "Mudkip (500C)$"

Hub_Event_Script_Miltank_Text_9:
# 496 "data/maps/Hub1/scripts.pory"
	.string "Turtwig (500C)$"

Hub_Event_Script_Miltank_Text_10:
# 497 "data/maps/Hub1/scripts.pory"
	.string "Chimchar (500C)$"

Hub_Event_Script_Miltank_Text_11:
# 498 "data/maps/Hub1/scripts.pory"
	.string "Piplup (500C)$"

Hub_Event_Script_Miltank_Text_12:
# 499 "data/maps/Hub1/scripts.pory"
	.string "Snivy (500C)$"

Hub_Event_Script_Miltank_Text_13:
# 500 "data/maps/Hub1/scripts.pory"
	.string "Tepig (500C)$"

Hub_Event_Script_Miltank_Text_14:
# 501 "data/maps/Hub1/scripts.pory"
	.string "Oshawott (500C)$"

Hub_Event_Script_Miltank_Text_15:
# 502 "data/maps/Hub1/scripts.pory"
	.string "Chespin (500C)$"

Hub_Event_Script_Miltank_Text_16:
# 503 "data/maps/Hub1/scripts.pory"
	.string "Fennekin (500C)$"

Hub_Event_Script_Miltank_Text_17:
# 504 "data/maps/Hub1/scripts.pory"
	.string "Froakie (500C)$"

Hub_Event_Script_Miltank_Text_18:
# 505 "data/maps/Hub1/scripts.pory"
	.string "Rowlet (500C)$"

Hub_Event_Script_Miltank_Text_19:
# 506 "data/maps/Hub1/scripts.pory"
	.string "Litten (500C)$"

Hub_Event_Script_Miltank_Text_20:
# 507 "data/maps/Hub1/scripts.pory"
	.string "Popplio (500C)$"

Hub_Event_Script_Miltank_Text_21:
# 508 "data/maps/Hub1/scripts.pory"
	.string "Grookey (500C)$"

Hub_Event_Script_Miltank_Text_22:
# 509 "data/maps/Hub1/scripts.pory"
	.string "Scorbunny (500C)$"

Hub_Event_Script_Miltank_Text_23:
# 510 "data/maps/Hub1/scripts.pory"
	.string "Sobble (500C)$"

Hub_Event_Script_Miltank_Text_24:
# 511 "data/maps/Hub1/scripts.pory"
	.string "Sprigatito (500C)$"

Hub_Event_Script_Miltank_Text_25:
# 512 "data/maps/Hub1/scripts.pory"
	.string "Fuecoco (500C)$"

Hub_Event_Script_Miltank_Text_26:
# 513 "data/maps/Hub1/scripts.pory"
	.string "Quaxly (500C)$"

Hub_Event_Script_Miltank_Text_27:
# 517 "data/maps/Hub1/scripts.pory"
	.string "Would you like to adopt a pokemon?$"

Hub_Event_Script_Miltank_Text_28:
# 522 "data/maps/Hub1/scripts.pory"
	.string "Come back anytime!$"

Hub_Event_Script_Miltank_Text_29:
# 532 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Bulbasaur as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_30:
# 535 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry. You don't have the coins to\nadopt that pokemon.$"

Hub_Event_Script_Miltank_Text_31:
# 544 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Charmander as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_32:
# 556 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Squirtle as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_33:
# 568 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chikorita as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_34:
# 580 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Cyndaquil as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_35:
# 592 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Totodile as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_36:
# 604 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Treecko as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_37:
# 616 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Torchic as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_38:
# 628 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Mudkip as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_39:
# 640 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Turtwig as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_40:
# 652 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chimchar as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_41:
# 664 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Piplup as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_42:
# 676 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Snivy as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_43:
# 688 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Tepig as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_44:
# 700 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Oshawott as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_45:
# 712 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chespin as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_46:
# 724 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Fennekin as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_47:
# 736 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Froakie as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_48:
# 748 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Rowlet as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_49:
# 760 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Litten as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_50:
# 772 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Popplio as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_51:
# 784 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Grookey as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_52:
# 796 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Scorbunny as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_53:
# 808 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Sobble as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_54:
# 820 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Sprigatito as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_55:
# 832 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Fuecoco as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_56:
# 844 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Quaxly as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_57:
# 853 "data/maps/Hub1/scripts.pory"
	.string "You have no more starters left\nto adopt!$"

Hub_Event_Script_Chansey_Text_0:
# 894 "data/maps/Hub1/scripts.pory"
	.string "Would you like to change your starter?$"

Hub_Event_Script_Chansey_Text_1:
# 907 "data/maps/Hub1/scripts.pory"
	.string "There you go!$"

Hub_Event_Script_Chansey_Text_2:
# 915 "data/maps/Hub1/scripts.pory"
	.string "You don't have any starter pokemon yet.\pPlease consider adopting some pokemon\nfrom my friend Miltank to the right.$"

KecShop_Sign_Text_0:
# 922 "data/maps/Hub1/scripts.pory"
	.string "Welcome to the Kecleon Brother's shop!$"

KecShop_Text_0:
# 930 "data/maps/Hub1/scripts.pory"
	.string "Oran Berry (¥200)$"

KecShop_Text_1:
# 931 "data/maps/Hub1/scripts.pory"
	.string "Mem. Mushroom (¥200)$"

KecShop_Text_2:
# 934 "data/maps/Hub1/scripts.pory"
	.string "Lum Berry (¥200)$"

KecShop_Text_3:
# 938 "data/maps/Hub1/scripts.pory"
	.string "Serious Mint (¥500)$"

KecShop_Text_4:
# 942 "data/maps/Hub1/scripts.pory"
	.string "Rare Candy (¥2000)$"

KecShop_Text_5:
# 946 "data/maps/Hub1/scripts.pory"
	.string "Pkt Birch Bag (¥2000)$"

KecShop_Text_6:
# 950 "data/maps/Hub1/scripts.pory"
	.string "HP Bottle Cap (¥300)$"

KecShop_Text_7:
# 954 "data/maps/Hub1/scripts.pory"
	.string "Attack Bottle Cap (¥300)$"

KecShop_Text_8:
# 958 "data/maps/Hub1/scripts.pory"
	.string "Defense Bottle Cap (¥300)$"

KecShop_Text_9:
# 962 "data/maps/Hub1/scripts.pory"
	.string "Speed Bottle Cap (¥300)$"

KecShop_Text_10:
# 966 "data/maps/Hub1/scripts.pory"
	.string "Sp. Atk Bottle Cap (¥300)$"

KecShop_Text_11:
# 970 "data/maps/Hub1/scripts.pory"
	.string "Sp. Def Bottle Cap (¥300)$"

KecShop_Text_12:
# 974 "data/maps/Hub1/scripts.pory"
	.string "HP Gold Bottle Cap (¥700)$"

KecShop_Text_13:
# 978 "data/maps/Hub1/scripts.pory"
	.string "Attack Gold Bottle Cap (¥700)$"

KecShop_Text_14:
# 982 "data/maps/Hub1/scripts.pory"
	.string "Defense Gold Bottle Cap (¥700)$"

KecShop_Text_15:
# 986 "data/maps/Hub1/scripts.pory"
	.string "Speed Gold Bottle Cap (¥700)$"

KecShop_Text_16:
# 990 "data/maps/Hub1/scripts.pory"
	.string "Sp. Atk Gold Bottle Cap (¥700)$"

KecShop_Text_17:
# 994 "data/maps/Hub1/scripts.pory"
	.string "Sp. Def Gold Bottle Cap (¥700)$"

KecShop_Text_18:
# 1009 "data/maps/Hub1/scripts.pory"
	.string "Thank you for your purchase!$"

KecShop_Text_19:
# 1012 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry. You don't have the money to\nbuy that, kec.$"

KecShop_Text_20:
# 1098 "data/maps/Hub1/scripts.pory"
	.string "Sorry, but there's nothing for you\nto buy right now, Kec.$"

KecShop_Shiny_Text_0:
# 1109 "data/maps/Hub1/scripts.pory"
	.string "TM Noble Roar (¥200)$"

KecShop_Shiny_Text_1:
# 1113 "data/maps/Hub1/scripts.pory"
	.string "TM Charm (¥200)$"

KecShop_Shiny_Text_2:
# 1117 "data/maps/Hub1/scripts.pory"
	.string "TM Fake Tears (¥200)$"

KecShop_Shiny_Text_3:
# 1121 "data/maps/Hub1/scripts.pory"
	.string "TM Confuse Ray (¥300)$"

KecShop_Shiny_Text_4:
# 1125 "data/maps/Hub1/scripts.pory"
	.string "TM Thunder Wave (¥300)$"

KecShop_Shiny_Text_5:
# 1129 "data/maps/Hub1/scripts.pory"
	.string "TM Will-O-Wisp (¥500)$"

KecShop_Shiny_Text_6:
# 1133 "data/maps/Hub1/scripts.pory"
	.string "TM Toxic (¥500)$"

KecShop_Shiny_Text_7:
# 1137 "data/maps/Hub1/scripts.pory"
	.string "TM Swift (¥500)$"

KecShop_Shiny_Text_8:
# 1141 "data/maps/Hub1/scripts.pory"
	.string "TM Cut (¥500)$"

KecShop_Shiny_Text_9:
# 1145 "data/maps/Hub1/scripts.pory"
	.string "TM Rock Smash (¥500)$"

KecShop_Shiny_Text_10:
# 1149 "data/maps/Hub1/scripts.pory"
	.string "TM Snarl (¥500)$"

KecShop_Shiny_Text_11:
# 1153 "data/maps/Hub1/scripts.pory"
	.string "TM Electroweb (¥500)$"

KecShop_Shiny_Text_12:
# 1157 "data/maps/Hub1/scripts.pory"
	.string "TM Aurora Beam (¥500)$"

KecShop_Shiny_Text_13:
# 1161 "data/maps/Hub1/scripts.pory"
	.string "TM Psybeam (¥500)$"

KecShop_Shiny_Text_14:
# 1165 "data/maps/Hub1/scripts.pory"
	.string "TM Flamethrower (¥1200)$"

KecShop_Shiny_Text_15:
# 1169 "data/maps/Hub1/scripts.pory"
	.string "TM Ice Beam (¥1200)$"

KecShop_Shiny_Text_16:
# 1173 "data/maps/Hub1/scripts.pory"
	.string "TM Thunderbolt (¥1200)$"

KecShop_Shiny_Text_17:
# 1177 "data/maps/Hub1/scripts.pory"
	.string "TM Scald (¥1000)$"

KecShop_Shiny_Text_18:
# 1181 "data/maps/Hub1/scripts.pory"
	.string "TM Mega Drain (¥800)$"

KecShop_Shiny_Text_19:
# 1185 "data/maps/Hub1/scripts.pory"
	.string "TM Sludge Bomb (¥1000)$"

KecShop_Shiny_Text_20:
# 1189 "data/maps/Hub1/scripts.pory"
	.string "TM Dual Wingbeat (¥900)$"

KecShop_Shiny_Text_21:
# 1193 "data/maps/Hub1/scripts.pory"
	.string "TM Leech Life (¥1000)$"

KecShop_Shiny_Text_22:
# 1197 "data/maps/Hub1/scripts.pory"
	.string "TM Play Rough (¥1000)$"

KecShop_Shiny_Text_23:
# 1201 "data/maps/Hub1/scripts.pory"
	.string "TM Shadow Ball (¥1000)$"

KecShop_Shiny_Text_24:
# 1205 "data/maps/Hub1/scripts.pory"
	.string "TM Earth Power (¥1000)$"

Hub_Event_Script_Kecleon_Text_0:
# 1503 "data/maps/Hub1/scripts.pory"
	.string "Hey there! Would you like me to\nstock an item?$"

Hub_Event_Script_Kecleon_Text_1:
# 1510 "data/maps/Hub1/scripts.pory"
	.string "Lum Berry (¥500)$"

Hub_Event_Script_Kecleon_Text_2:
# 1515 "data/maps/Hub1/scripts.pory"
	.string "Serious Mint (¥2000)$"

Hub_Event_Script_Kecleon_Text_3:
# 1520 "data/maps/Hub1/scripts.pory"
	.string "Bottle Caps (¥1000)$"

Hub_Event_Script_Kecleon_Text_4:
# 1525 "data/maps/Hub1/scripts.pory"
	.string "Gold Bottle Caps (¥2000)$"

Hub_Event_Script_Kecleon_Text_5:
# 1530 "data/maps/Hub1/scripts.pory"
	.string "Pkt Birch Bag (¥1000)$"

Hub_Event_Script_Kecleon_Text_6:
# 1547 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Lum Berry as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_7:
# 1550 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry. You don't have the coins to\nstock that item, kec.$"

Hub_Event_Script_Kecleon_Text_8:
# 1561 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Serious Mint as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_9:
# 1575 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Rare Candy as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_10:
# 1589 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked IV Bottle caps as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_11:
# 1603 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Gold Bottle caps as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_12:
# 1617 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Pocket Birch bags as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_13:
# 1625 "data/maps/Hub1/scripts.pory"
	.string "You don't have anything left\nto stock right now. Thank you for\lyour consistent patronage!\p$"

Hub_Event_Script_Shiny_Kecleon_Text_0:
# 1638 "data/maps/Hub1/scripts.pory"
	.string "Howdy! Would you like me to\nstock a new TM?$"

Hub_Event_Script_Shiny_Kecleon_Text_1:
# 1640 "data/maps/Hub1/scripts.pory"
	.string "TM Noble Roar (¥400)$"

Hub_Event_Script_Shiny_Kecleon_Text_2:
# 1644 "data/maps/Hub1/scripts.pory"
	.string "TM Charm (¥400)$"

Hub_Event_Script_Shiny_Kecleon_Text_3:
# 1648 "data/maps/Hub1/scripts.pory"
	.string "TM Fake Tears (¥400)$"

Hub_Event_Script_Shiny_Kecleon_Text_4:
# 1652 "data/maps/Hub1/scripts.pory"
	.string "TM Confuse Ray (¥800)$"

Hub_Event_Script_Shiny_Kecleon_Text_5:
# 1656 "data/maps/Hub1/scripts.pory"
	.string "TM Thunder Wave (¥800)$"

Hub_Event_Script_Shiny_Kecleon_Text_6:
# 1660 "data/maps/Hub1/scripts.pory"
	.string "TM Will-O-Wisp (¥800)$"

Hub_Event_Script_Shiny_Kecleon_Text_7:
# 1664 "data/maps/Hub1/scripts.pory"
	.string "TM Toxic (¥800)$"

Hub_Event_Script_Shiny_Kecleon_Text_8:
# 1668 "data/maps/Hub1/scripts.pory"
	.string "TM Rock Smash (¥900)$"

Hub_Event_Script_Shiny_Kecleon_Text_9:
# 1672 "data/maps/Hub1/scripts.pory"
	.string "TM Snarl (¥900)$"

Hub_Event_Script_Shiny_Kecleon_Text_10:
# 1676 "data/maps/Hub1/scripts.pory"
	.string "TM Electroweb (¥900)$"

Hub_Event_Script_Shiny_Kecleon_Text_11:
# 1680 "data/maps/Hub1/scripts.pory"
	.string "TM Aurora Beam (¥900)$"

Hub_Event_Script_Shiny_Kecleon_Text_12:
# 1684 "data/maps/Hub1/scripts.pory"
	.string "TM Psybeam (¥900)$"

Hub_Event_Script_Shiny_Kecleon_Text_13:
# 1688 "data/maps/Hub1/scripts.pory"
	.string "TM Mega Drain (¥900)$"

Hub_Event_Script_Shiny_Kecleon_Text_14:
# 1704 "data/maps/Hub1/scripts.pory"
	.string "TM Scald (¥1200)$"

Hub_Event_Script_Shiny_Kecleon_Text_15:
# 1708 "data/maps/Hub1/scripts.pory"
	.string "TM Sludge Bomb (¥1200)$"

Hub_Event_Script_Shiny_Kecleon_Text_16:
# 1712 "data/maps/Hub1/scripts.pory"
	.string "TM Dual Wingbeat (¥1200)$"

Hub_Event_Script_Shiny_Kecleon_Text_17:
# 1716 "data/maps/Hub1/scripts.pory"
	.string "TM Leech Life (¥1200)$"

Hub_Event_Script_Shiny_Kecleon_Text_18:
# 1720 "data/maps/Hub1/scripts.pory"
	.string "TM Play Rough (¥1200)$"

Hub_Event_Script_Shiny_Kecleon_Text_19:
# 1724 "data/maps/Hub1/scripts.pory"
	.string "TM Shadow Ball (¥1200)$"

Hub_Event_Script_Shiny_Kecleon_Text_20:
# 1728 "data/maps/Hub1/scripts.pory"
	.string "TM Earth Power (¥1200)$"

Hub_Event_Script_Shiny_Kecleon_Text_21:
# 1745 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Noble Roar as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_22:
# 1759 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Rock Smash as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_23:
# 1773 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Swift as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_24:
# 1787 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Cut as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_25:
# 1801 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Charm as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_26:
# 1815 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Fake Tears as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_27:
# 1829 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Confuse Ray as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_28:
# 1843 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Thunder Wave as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_29:
# 1858 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Will O Wisp as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_30:
# 1873 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Toxic as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_31:
# 1888 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Snarl as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_32:
# 1903 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Electroweb as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_33:
# 1918 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Aurora Beam as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_34:
# 1933 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Psybeam as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_35:
# 1948 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Flamethrower as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_36:
# 1963 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Ice Beam as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_37:
# 1978 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Thunderbolt as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_38:
# 1993 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Scald as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_39:
# 2008 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Mega Drain as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_40:
# 2023 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Sludge Bomb as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_41:
# 2038 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Dual Wingbeat as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_42:
# 2053 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Leech Life as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_43:
# 2068 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Play Rough as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_44:
# 2083 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Shadow Ball as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_45:
# 2098 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Earth Power as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_46:
# 2106 "data/maps/Hub1/scripts.pory"
	.string "You don't have anything left\nto puchase right now. Thank you for\lyour consistent patronage!\p$"

Hub_Event_Script_Diancie_Text_0:
# 2119 "data/maps/Hub1/scripts.pory"
	.string "Hey there! I'm Diancie.\n"
	.string "I love collecting special gems.\l"
	.string "I plan on selling some of them soon\l"
	.string "but I don't have any to sell right now.\l"
	.string "I hope you come visit again another\l"
	.string "time.$"

Hub_Event_Script_Diancie_Text_1:
# 2127 "data/maps/Hub1/scripts.pory"
	.string "Hiya! I've finally started selling\n"
	.string "some of my precious gems.\l"
	.string "To celebrate, I'll give you this\l"
	.string "one on the house!$"

Hub_Event_Script_Diancie_Text_2:
# 2136 "data/maps/Hub1/scripts.pory"
	.string "There aren't so many gems I want to,\n"
	.string "sell right now. But I might sell more\l"
	.string "in the future.$"

Hub_Event_Script_Diancie_Text_3:
# 2143 "data/maps/Hub1/scripts.pory"
	.string "Venusaurite (¥1000)$"

Hub_Event_Script_Diancie_Text_4:
# 2147 "data/maps/Hub1/scripts.pory"
	.string "Charizardite Y (¥1000)$"

Hub_Event_Script_Diancie_Text_5:
# 2151 "data/maps/Hub1/scripts.pory"
	.string "Blastoisinite (¥1000)$"

Hub_Event_Script_Diancie_Text_6:
# 2155 "data/maps/Hub1/scripts.pory"
	.string "Beedrillite (¥1000)$"

Hub_Event_Script_Diancie_Text_7:
# 2159 "data/maps/Hub1/scripts.pory"
	.string "Pidgeotite (¥1000)$"

Hub_Event_Script_Diancie_Text_8:
# 2163 "data/maps/Hub1/scripts.pory"
	.string "Alakazite (¥1000)$"

Hub_Event_Script_Diancie_Text_9:
# 2167 "data/maps/Hub1/scripts.pory"
	.string "Slowbronite (¥1000)$"

Hub_Event_Script_Diancie_Text_10:
# 2171 "data/maps/Hub1/scripts.pory"
	.string "Gengarite (¥1000)$"

Hub_Event_Script_Diancie_Text_11:
# 2175 "data/maps/Hub1/scripts.pory"
	.string "Kangaskhanite (¥1000)$"

Hub_Event_Script_Diancie_Text_12:
# 2179 "data/maps/Hub1/scripts.pory"
	.string "Pinsirite (¥1000)$"

Hub_Event_Script_Diancie_Text_13:
# 2183 "data/maps/Hub1/scripts.pory"
	.string "Gyaradosite (¥1000)$"

Hub_Event_Script_Diancie_Text_14:
# 2187 "data/maps/Hub1/scripts.pory"
	.string "Aerodactylite (¥1000)$"

Hub_Event_Script_Diancie_Text_15:
# 2191 "data/maps/Hub1/scripts.pory"
	.string "Ampharosite (¥1000)$"

Hub_Event_Script_Diancie_Text_16:
# 2195 "data/maps/Hub1/scripts.pory"
	.string "Steelixite (¥1000)$"

Hub_Event_Script_Diancie_Text_17:
# 2199 "data/maps/Hub1/scripts.pory"
	.string "Scizorite (¥1000)$"

Hub_Event_Script_Diancie_Text_18:
# 2203 "data/maps/Hub1/scripts.pory"
	.string "Heracronite (¥1000)$"

Hub_Event_Script_Diancie_Text_19:
# 2207 "data/maps/Hub1/scripts.pory"
	.string "Houndoominite (¥1000)$"

Hub_Event_Script_Diancie_Text_20:
# 2211 "data/maps/Hub1/scripts.pory"
	.string "Tyranitarite (¥1000)$"

Hub_Event_Script_Diancie_Text_21:
# 2215 "data/maps/Hub1/scripts.pory"
	.string "Sceptilite (¥1000)$"

Hub_Event_Script_Diancie_Text_22:
# 2219 "data/maps/Hub1/scripts.pory"
	.string "Blazikenite (¥1000)$"

Hub_Event_Script_Diancie_Text_23:
# 2223 "data/maps/Hub1/scripts.pory"
	.string "Swampertite (¥1000)$"

Hub_Event_Script_Diancie_Text_24:
# 2227 "data/maps/Hub1/scripts.pory"
	.string "Gardevoirite (¥1000)$"

Hub_Event_Script_Diancie_Text_25:
# 2231 "data/maps/Hub1/scripts.pory"
	.string "Sablenite (¥1000)$"

Hub_Event_Script_Diancie_Text_26:
# 2235 "data/maps/Hub1/scripts.pory"
	.string "Mawilite (¥1000)$"

Hub_Event_Script_Diancie_Text_27:
# 2239 "data/maps/Hub1/scripts.pory"
	.string "Aggronite (¥1000)$"

Hub_Event_Script_Diancie_Text_28:
# 2243 "data/maps/Hub1/scripts.pory"
	.string "Medichamite (¥1000)$"

Hub_Event_Script_Diancie_Text_29:
# 2247 "data/maps/Hub1/scripts.pory"
	.string "Manectite (¥1000)$"

Hub_Event_Script_Diancie_Text_30:
# 2251 "data/maps/Hub1/scripts.pory"
	.string "Sharpedonite (¥1000)$"

Hub_Event_Script_Diancie_Text_31:
# 2255 "data/maps/Hub1/scripts.pory"
	.string "Cameruptite (¥1000)$"

Hub_Event_Script_Diancie_Text_32:
# 2259 "data/maps/Hub1/scripts.pory"
	.string "Altarianite (¥1000)$"

Hub_Event_Script_Diancie_Text_33:
# 2263 "data/maps/Hub1/scripts.pory"
	.string "Banettite (¥1000)$"

Hub_Event_Script_Diancie_Text_34:
# 2267 "data/maps/Hub1/scripts.pory"
	.string "Absolite (¥1000)$"

Hub_Event_Script_Diancie_Text_35:
# 2271 "data/maps/Hub1/scripts.pory"
	.string "Glalitite (¥1000)$"

Hub_Event_Script_Diancie_Text_36:
# 2275 "data/maps/Hub1/scripts.pory"
	.string "Salamencite (¥1000)$"

Hub_Event_Script_Diancie_Text_37:
# 2279 "data/maps/Hub1/scripts.pory"
	.string "Metagrossite (¥1000)$"

Hub_Event_Script_Diancie_Text_38:
# 2283 "data/maps/Hub1/scripts.pory"
	.string "Lopunnite (¥1000)$"

Hub_Event_Script_Diancie_Text_39:
# 2287 "data/maps/Hub1/scripts.pory"
	.string "Garchompite (¥1000)$"

Hub_Event_Script_Diancie_Text_40:
# 2291 "data/maps/Hub1/scripts.pory"
	.string "Lucarionite (¥1000)$"

Hub_Event_Script_Diancie_Text_41:
# 2295 "data/maps/Hub1/scripts.pory"
	.string "Abomasite (¥1000)$"

Hub_Event_Script_Diancie_Text_42:
# 2299 "data/maps/Hub1/scripts.pory"
	.string "Galladite (¥1000)$"

Hub_Event_Script_Diancie_Text_43:
# 2303 "data/maps/Hub1/scripts.pory"
	.string "Clefablite (¥1000)$"

Hub_Event_Script_Diancie_Text_44:
# 2307 "data/maps/Hub1/scripts.pory"
	.string "Victreebelite (¥1000)$"

Hub_Event_Script_Diancie_Text_45:
# 2311 "data/maps/Hub1/scripts.pory"
	.string "Starminite (¥1000)$"

Hub_Event_Script_Diancie_Text_46:
# 2315 "data/maps/Hub1/scripts.pory"
	.string "Dragoninite (¥1000)$"

Hub_Event_Script_Diancie_Text_47:
# 2319 "data/maps/Hub1/scripts.pory"
	.string "Meganiumite (¥1000)$"

Hub_Event_Script_Diancie_Text_48:
# 2323 "data/maps/Hub1/scripts.pory"
	.string "Feraligite (¥1000)$"

Hub_Event_Script_Diancie_Text_49:
# 2327 "data/maps/Hub1/scripts.pory"
	.string "Skarmorite (¥1000)$"

Hub_Event_Script_Diancie_Text_50:
# 2331 "data/maps/Hub1/scripts.pory"
	.string "Froslassite (¥1000)$"

Hub_Event_Script_Diancie_Text_51:
# 2335 "data/maps/Hub1/scripts.pory"
	.string "Emboarite (¥1000)$"

Hub_Event_Script_Diancie_Text_52:
# 2339 "data/maps/Hub1/scripts.pory"
	.string "Excadrite (¥1000)$"

Hub_Event_Script_Diancie_Text_53:
# 2343 "data/maps/Hub1/scripts.pory"
	.string "Scolipite (¥1000)$"

Hub_Event_Script_Diancie_Text_54:
# 2347 "data/maps/Hub1/scripts.pory"
	.string "Scraftinite (¥1000)$"

Hub_Event_Script_Diancie_Text_55:
# 2351 "data/maps/Hub1/scripts.pory"
	.string "Eelektrossite (¥1000)$"

Hub_Event_Script_Diancie_Text_56:
# 2355 "data/maps/Hub1/scripts.pory"
	.string "Chandelurite (¥1000)$"

Hub_Event_Script_Diancie_Text_57:
# 2359 "data/maps/Hub1/scripts.pory"
	.string "Chesnaughtite (¥1000)$"

Hub_Event_Script_Diancie_Text_58:
# 2363 "data/maps/Hub1/scripts.pory"
	.string "Delphoxite (¥1000)$"

Hub_Event_Script_Diancie_Text_59:
# 2367 "data/maps/Hub1/scripts.pory"
	.string "Greninjite (¥1000)$"

Hub_Event_Script_Diancie_Text_60:
# 2371 "data/maps/Hub1/scripts.pory"
	.string "Pyroarite (¥1000)$"

Hub_Event_Script_Diancie_Text_61:
# 2375 "data/maps/Hub1/scripts.pory"
	.string "Malamarite (¥1000)$"

Hub_Event_Script_Diancie_Text_62:
# 2379 "data/maps/Hub1/scripts.pory"
	.string "Barbaracite (¥1000)$"

Hub_Event_Script_Diancie_Text_63:
# 2383 "data/maps/Hub1/scripts.pory"
	.string "Dragalgite (¥1000)$"

Hub_Event_Script_Diancie_Text_64:
# 2387 "data/maps/Hub1/scripts.pory"
	.string "Hawluchanite (¥1000)$"

Hub_Event_Script_Diancie_Text_65:
# 2391 "data/maps/Hub1/scripts.pory"
	.string "Drampanite (¥1000)$"

Hub_Event_Script_Diancie_Text_66:
# 2395 "data/maps/Hub1/scripts.pory"
	.string "Falinksite (¥1000)$"

Hub_Event_Script_Diancie_Text_67:
# 2399 "data/maps/Hub1/scripts.pory"
	.string "Raichunite X (¥1000)$"

Hub_Event_Script_Diancie_Text_68:
# 2403 "data/maps/Hub1/scripts.pory"
	.string "Raichunite Y (¥1000)$"

Hub_Event_Script_Diancie_Text_69:
# 2407 "data/maps/Hub1/scripts.pory"
	.string "Chimechite (¥1000)$"

Hub_Event_Script_Diancie_Text_70:
# 2411 "data/maps/Hub1/scripts.pory"
	.string "Staraptite (¥1000)$"

Hub_Event_Script_Diancie_Text_71:
# 2415 "data/maps/Hub1/scripts.pory"
	.string "Golurkite (¥1000)$"

Hub_Event_Script_Diancie_Text_72:
# 2419 "data/maps/Hub1/scripts.pory"
	.string "Meowsticite (¥1000)$"

Hub_Event_Script_Diancie_Text_73:
# 2423 "data/maps/Hub1/scripts.pory"
	.string "Crabominite (¥1000)$"

Hub_Event_Script_Diancie_Text_74:
# 2427 "data/maps/Hub1/scripts.pory"
	.string "Golisopite (¥1000)$"

Hub_Event_Script_Diancie_Text_75:
# 2431 "data/maps/Hub1/scripts.pory"
	.string "Scovillainite (¥1000)$"

Hub_Event_Script_Diancie_Text_76:
# 2435 "data/maps/Hub1/scripts.pory"
	.string "Glimmoranite (¥1000)$"

Hub_Event_Script_Diancie_Text_77:
# 2439 "data/maps/Hub1/scripts.pory"
	.string "Baxcalibrite (¥1000)$"

Hub_Event_Script_Diancie_Text_78:
# 2446 "data/maps/Hub1/scripts.pory"
	.string "Hello! Good news! I have a new\n"
	.string "Mega Stone in stock!\l"
	.string "Please take a look!$"

Hub_Event_Script_Diancie_Text_79:
# 2452 "data/maps/Hub1/scripts.pory"
	.string "Hello! Would you like to\nbuy a Mega Stone?$"

Hub_Event_Script_Diancie_Text_80:
# 2466 "data/maps/Hub1/scripts.pory"
	.string "You got a Venusaurite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_81:
# 2469 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry, but you don't have the\n coins for that right now.$"

Hub_Event_Script_Diancie_Text_82:
# 2481 "data/maps/Hub1/scripts.pory"
	.string "You got a Charizardite Y as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_83:
# 2496 "data/maps/Hub1/scripts.pory"
	.string "You got a Blastoisinite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_84:
# 2511 "data/maps/Hub1/scripts.pory"
	.string "You got a Beedrillite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_85:
# 2526 "data/maps/Hub1/scripts.pory"
	.string "You got a Pidgeotite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_86:
# 2541 "data/maps/Hub1/scripts.pory"
	.string "You got an Alakazite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_87:
# 2556 "data/maps/Hub1/scripts.pory"
	.string "You got a Slowbronite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_88:
# 2571 "data/maps/Hub1/scripts.pory"
	.string "You got a Gengarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_89:
# 2586 "data/maps/Hub1/scripts.pory"
	.string "You got a Kangaskhanite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_90:
# 2601 "data/maps/Hub1/scripts.pory"
	.string "You got a Pinsirite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_91:
# 2616 "data/maps/Hub1/scripts.pory"
	.string "You got a Gyaradosite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_92:
# 2631 "data/maps/Hub1/scripts.pory"
	.string "You got an Aerodactylite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_93:
# 2646 "data/maps/Hub1/scripts.pory"
	.string "You got an Ampharosite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_94:
# 2661 "data/maps/Hub1/scripts.pory"
	.string "You got a Steelixite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_95:
# 2676 "data/maps/Hub1/scripts.pory"
	.string "You got a Scizorite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_96:
# 2691 "data/maps/Hub1/scripts.pory"
	.string "You got a Heracronite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_97:
# 2706 "data/maps/Hub1/scripts.pory"
	.string "You got a Houndoominite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_98:
# 2721 "data/maps/Hub1/scripts.pory"
	.string "You got a Tyranitarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_99:
# 2736 "data/maps/Hub1/scripts.pory"
	.string "You got a Sceptilite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_100:
# 2751 "data/maps/Hub1/scripts.pory"
	.string "You got a Blazikenite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_101:
# 2766 "data/maps/Hub1/scripts.pory"
	.string "You got a Swampertite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_102:
# 2781 "data/maps/Hub1/scripts.pory"
	.string "You got a Gardevoirite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_103:
# 2796 "data/maps/Hub1/scripts.pory"
	.string "You got a Sablenite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_104:
# 2811 "data/maps/Hub1/scripts.pory"
	.string "You got a Mawilite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_105:
# 2826 "data/maps/Hub1/scripts.pory"
	.string "You got an Aggronite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_106:
# 2841 "data/maps/Hub1/scripts.pory"
	.string "You got a Medichamite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_107:
# 2856 "data/maps/Hub1/scripts.pory"
	.string "You got a Manectite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_108:
# 2871 "data/maps/Hub1/scripts.pory"
	.string "You got a Sharpedonite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_109:
# 2886 "data/maps/Hub1/scripts.pory"
	.string "You got a Cameruptite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_110:
# 2901 "data/maps/Hub1/scripts.pory"
	.string "You got an Altarianite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_111:
# 2916 "data/maps/Hub1/scripts.pory"
	.string "You got a Banettite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_112:
# 2931 "data/maps/Hub1/scripts.pory"
	.string "You got an Absolite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_113:
# 2946 "data/maps/Hub1/scripts.pory"
	.string "You got a Glalitite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_114:
# 2961 "data/maps/Hub1/scripts.pory"
	.string "You got a Salamencite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_115:
# 2976 "data/maps/Hub1/scripts.pory"
	.string "You got a Lopunnite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_116:
# 2991 "data/maps/Hub1/scripts.pory"
	.string "You got a Garchompite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_117:
# 3006 "data/maps/Hub1/scripts.pory"
	.string "You got a Lucarionite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_118:
# 3021 "data/maps/Hub1/scripts.pory"
	.string "You got an Abomasite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_119:
# 3036 "data/maps/Hub1/scripts.pory"
	.string "You got a Galladite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_120:
# 3051 "data/maps/Hub1/scripts.pory"
	.string "You got a Clefablite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_121:
# 3066 "data/maps/Hub1/scripts.pory"
	.string "You got a Victreebelite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_122:
# 3081 "data/maps/Hub1/scripts.pory"
	.string "You got a Starminite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_123:
# 3096 "data/maps/Hub1/scripts.pory"
	.string "You got a Dragoninite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_124:
# 3111 "data/maps/Hub1/scripts.pory"
	.string "You got a Meganiumite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_125:
# 3126 "data/maps/Hub1/scripts.pory"
	.string "You got a Feraligite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_126:
# 3141 "data/maps/Hub1/scripts.pory"
	.string "You got a Skarmorite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_127:
# 3156 "data/maps/Hub1/scripts.pory"
	.string "You got a Froslassite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_128:
# 3171 "data/maps/Hub1/scripts.pory"
	.string "You got an Emboarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_129:
# 3186 "data/maps/Hub1/scripts.pory"
	.string "You got an Excadrite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_130:
# 3201 "data/maps/Hub1/scripts.pory"
	.string "You got a Scolipite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_131:
# 3216 "data/maps/Hub1/scripts.pory"
	.string "You got a Scraftinite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_132:
# 3231 "data/maps/Hub1/scripts.pory"
	.string "You got an Eelektrossite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_133:
# 3246 "data/maps/Hub1/scripts.pory"
	.string "You got a Chandelurite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_134:
# 3261 "data/maps/Hub1/scripts.pory"
	.string "You got a Chesnaughtite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_135:
# 3276 "data/maps/Hub1/scripts.pory"
	.string "You got a Delphoxite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_136:
# 3291 "data/maps/Hub1/scripts.pory"
	.string "You got a Greninjite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_137:
# 3306 "data/maps/Hub1/scripts.pory"
	.string "You got a Pyroarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_138:
# 3321 "data/maps/Hub1/scripts.pory"
	.string "You got a Malamarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_139:
# 3336 "data/maps/Hub1/scripts.pory"
	.string "You got a Barbaracite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_140:
# 3351 "data/maps/Hub1/scripts.pory"
	.string "You got a Dragalgite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_141:
# 3366 "data/maps/Hub1/scripts.pory"
	.string "You got a Hawluchanite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_142:
# 3381 "data/maps/Hub1/scripts.pory"
	.string "You got a Drampanite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_143:
# 3396 "data/maps/Hub1/scripts.pory"
	.string "You got a Falinksite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_144:
# 3411 "data/maps/Hub1/scripts.pory"
	.string "You got a Raichunite X as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_145:
# 3426 "data/maps/Hub1/scripts.pory"
	.string "You got a Raichunite Y as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_146:
# 3441 "data/maps/Hub1/scripts.pory"
	.string "You got a Chimechite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_147:
# 3456 "data/maps/Hub1/scripts.pory"
	.string "You got a Staraptite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_148:
# 3471 "data/maps/Hub1/scripts.pory"
	.string "You got a Golurkite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_149:
# 3486 "data/maps/Hub1/scripts.pory"
	.string "You got a Meowsticite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_150:
# 3501 "data/maps/Hub1/scripts.pory"
	.string "You got a Crabominite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_151:
# 3516 "data/maps/Hub1/scripts.pory"
	.string "You got a Golisopite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_152:
# 3531 "data/maps/Hub1/scripts.pory"
	.string "You got a Scovillainite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_153:
# 3546 "data/maps/Hub1/scripts.pory"
	.string "You got a Glimmoranite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_154:
# 3561 "data/maps/Hub1/scripts.pory"
	.string "You got a Baxcalibrite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_155:
# 3568 "data/maps/Hub1/scripts.pory"
	.string "I don't have anything on sale right now,\n"
	.string "sorry.\p"
	.string "Try doing more runs and getting far\n"
	.string "with new pokemon!$"

Hub_Event_Script_Marowak_Text_0:
# 3583 "data/maps/Hub1/scripts.pory"
	.string "Hi. My dojo is closed right now. Maybe it\n"
	.string "will open in a future update.$"

Hub_Event_Script_Chimecho_Text_0:
# 3595 "data/maps/Hub1/scripts.pory"
	.string "Heya. Would you like to\nsee your unlocked starter charms?$"

Hub_Event_Script_Chimecho_Text_1:
# 3599 "data/maps/Hub1/scripts.pory"
	.string "Shiny Starter Charm$"

Hub_Event_Script_Chimecho_Text_2:
# 3600 "data/maps/Hub1/scripts.pory"
	.string "Lump Sum$"

Hub_Event_Script_Chimecho_Text_3:
# 3601 "data/maps/Hub1/scripts.pory"
	.string "Berry Pack$"

Hub_Event_Script_Chimecho_Text_4:
# 3602 "data/maps/Hub1/scripts.pory"
	.string "Tinted Scope$"

Hub_Event_Script_Chimecho_Text_5:
# 3603 "data/maps/Hub1/scripts.pory"
	.string "Normal Charm$"

Hub_Event_Script_Chimecho_Text_6:
# 3604 "data/maps/Hub1/scripts.pory"
	.string "Mint Pot$"

Hub_Event_Script_Chimecho_Text_7:
# 3605 "data/maps/Hub1/scripts.pory"
	.string "Bruxish Floss$"

Hub_Event_Script_Chimecho_Text_8:
# 3606 "data/maps/Hub1/scripts.pory"
	.string "Unown Buddy$"

Hub_Event_Script_Chimecho_Text_9:
# 3611 "data/maps/Hub1/scripts.pory"
	.string "Keep playing more to unlock more\n"
	.string "starter charms!$"

Hub_Event_Script_Chimecho_Text_10:
# 3615 "data/maps/Hub1/scripts.pory"
	.string "Your starter pokemon becomes shiny.$"

Hub_Event_Script_Chimecho_Text_11:
# 3617 "data/maps/Hub1/scripts.pory"
	.string "Gain ¥1500.$"

Hub_Event_Script_Chimecho_Text_12:
# 3619 "data/maps/Hub1/scripts.pory"
	.string "Gain an oran berry, a sitrus berry, a lum\n"
	.string "berry and a berry juice.$"

Hub_Event_Script_Chimecho_Text_13:
# 3621 "data/maps/Hub1/scripts.pory"
	.string "Your not very effective moves do 1.5\n"
	.string "times more damage.$"

Hub_Event_Script_Chimecho_Text_14:
# 3623 "data/maps/Hub1/scripts.pory"
	.string "Your normal moves do 1.1 times more\n"
	.string "damage.$"

Hub_Event_Script_Chimecho_Text_15:
# 3625 "data/maps/Hub1/scripts.pory"
	.string "Gain a random mint at the start of each\n"
	.string "path.$"

Hub_Event_Script_Chimecho_Text_16:
# 3627 "data/maps/Hub1/scripts.pory"
	.string "Your biting moves do 1.2 dmg.$"

Hub_Event_Script_Chimecho_Text_17:
# 3629 "data/maps/Hub1/scripts.pory"
	.string "Get an extra unown at the start of the\n"
	.string "run.$"

Hub_Event_Script_Chimecho_Text_18:
# 3635 "data/maps/Hub1/scripts.pory"
	.string "Ok then! Keep playing more to unlock\n"
	.string "more starter charms!$"

GiveStarterCharm_Text_0:
# 3700 "data/maps/Hub1/scripts.pory"
	.string "Good luck on your run!$"

Hub_Event_Script_Golem_Text_0:
# 3710 "data/maps/Hub1/scripts.pory"
	.string "Diancie over there has a large mega\n"
	.string "stone collection.\p"
	.string "I wonder if she'll start selling them one\n"
	.string "day... I've heard that getting to the\l"
	.string "4th path might do it...\p"
	.string "Not that I would be able to make use of\n"
	.string "one anyway... I wish I had a mega\l"
	.string "evolution...$"

Hub_Event_Script_Golem_Text_1:
# 3712 "data/maps/Hub1/scripts.pory"
	.string "So Diancie's finally started to sell\n"
	.string "mega stones! Apparently if you get to\l"
	.string "the 4th path with a pokemon that can\l"
	.string "mega evolve, she'll start selling that\l"
	.string "pokemon's mega stone.$"

Hub_Event_Script_Togedemaru_Text_0:
# 3724 "data/maps/Hub1/scripts.pory"
	.string "Hey. I'm Togedemaru. I'm spiky and\n"
	.string "round!$"

Hub_Event_Script_Togedemaru_Text_1:
# 3726 "data/maps/Hub1/scripts.pory"
	.string "Hey. In this game, pokemon can have up\n"
	.string "to 4 abilities! Like me! I have Iron\l"
	.string "Barbs, Static, Sturdy and Cute Charm!\l"
	.string "But not all pokemon have as many\l"
	.string "abilites as me hehe.$"

Hub_Event_Script_Klang_Text_0:
# 3736 "data/maps/Hub1/scripts.pory"
	.string "Hello. You should know that the items\n"
	.string "your pokemon are holding before a\l"
	.string "battle are restored at the end of a\l"
	.string "battle.\p"
	.string "This means that the berries your\n"
	.string "pokemon consume will be returned.\p"
	.string "It also means any item you might steal\n"
	.string "during a battle are not kept.$"

Hub_Event_Script_Bruxish_Text_0:
# 3745 "data/maps/Hub1/scripts.pory"
	.string "You want to know how I have such\n"
	.string "beatiful teeth? Well you've got to take\l"
	.string "good care of them of course! Make sure\l"
	.string "to brush twice a day, and floss every\l"
	.string "night!$"

Hub_Event_Script_Bruxish_Text_1:
# 3748 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Bruxish Floss as\na starter charm!$"

Hub_Event_Script_Bruxish_Text_2:
# 3751 "data/maps/Hub1/scripts.pory"
	.string "Don't forget to floss everyday!$"

Hub_Event_Script_Simisage_Text_0:
# 3760 "data/maps/Hub1/scripts.pory"
	.string "Hi. Did you know that in this game, a\n"
	.string "pokemon can learn any TM. That means\l"
	.string "even a grass-type like me can learn a\l"
	.string "fire-type move by TM!\p"
	.string "But of course I won't get a same type\n"
	.string "attack bonus from it.$"

Hub_Event_Script_Woobat_Text_0:
# 3768 "data/maps/Hub1/scripts.pory"
	.string "Did you know that some abilities got\n"
	.string "changed in this game? Like my ability\l"
	.string "Klutz. It still doesn't let me use items,\l"
	.string "but it also gives me a 10% chance to\l"
	.string "dodge moves!$"

Hub_Event_Script_Unown_Text_0:
# 3778 "data/maps/Hub1/scripts.pory"
	.string "Hi. I know I'm a pretty weak pokemon,\n"
	.string "but If you choose me, you'll get an\l"
	.string "extra unown for free, thanks to my Herd\l"
	.string "ability!$"

Hub_Event_Script_Unown_Text_1:
# 3780 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Unown Buddy as\na starter charm!$"

Hub_Event_Script_Unown_Text_2:
# 3784 "data/maps/Hub1/scripts.pory"
	.string "If you choose me, you'll get an\nextra unown as well!$"

Hub_Event_Script_Smoliv_Text_0:
# 3793 "data/maps/Hub1/scripts.pory"
	.string "Hey.\p"
	.string "You should know that the money you get\n"
	.string "during a run (¥) is different to the\l"
	.string "money you spend when you're here at the\l"
	.string "hub (Coins).$"
