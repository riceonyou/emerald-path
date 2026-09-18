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
# 393 "data/maps/Hub1/scripts.pory"
	special UpdatePlayerSprite
# 394 "data/maps/Hub1/scripts.pory"
	special UpdateTransformedPlayerPalette
# 399 "data/maps/Hub1/scripts.pory"
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
# 404 "data/maps/Hub1/scripts.pory"
	lockall
# 405 "data/maps/Hub1/scripts.pory"
	faceplayer
# 406 "data/maps/Hub1/scripts.pory"
backtomain:
# 407 "data/maps/Hub1/scripts.pory"
	messageinstant Hub_Event_Script_Birch_Text_0
# 408 "data/maps/Hub1/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Hub_Event_Script_Birch_Text_1, Hub_Event_Script_Birch_Text_2
# 409 "data/maps/Hub1/scripts.pory"
	closemessage
# 410 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 411 "data/maps/Hub1/scripts.pory"
	case MULTI_B_PRESSED, Hub_Event_Script_Birch_2
# 415 "data/maps/Hub1/scripts.pory"
	case 0, Hub_Event_Script_Birch_3
# 446 "data/maps/Hub1/scripts.pory"
	case 1, Hub_Event_Script_Birch_4
	return

Hub_Event_Script_Birch_2:
# 412 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_3
# 413 "data/maps/Hub1/scripts.pory"
	releaseall
	end

Hub_Event_Script_Birch_3:
# 416 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_4, MSGBOX_YESNO
# 417 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 418 "data/maps/Hub1/scripts.pory"
	case YES, Hub_Event_Script_Birch_6
# 441 "data/maps/Hub1/scripts.pory"
	case NO, Hub_Event_Script_Birch_7
	return

Hub_Event_Script_Birch_4:
# 447 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CURRENT_DIFFICULTY
# 448 "data/maps/Hub1/scripts.pory"
	messageinstant Hub_Event_Script_Birch_Text_8
# 449 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_9, 0
# 450 "data/maps/Hub1/scripts.pory"
	compare VAR_UNLOCKED_DIFFICULTY, 0
	goto_if_gt Hub_Event_Script_Birch_9
Hub_Event_Script_Birch_8:
# 451 "data/maps/Hub1/scripts.pory"
	compare VAR_UNLOCKED_DIFFICULTY, 1
	goto_if_gt Hub_Event_Script_Birch_12
Hub_Event_Script_Birch_11:
# 452 "data/maps/Hub1/scripts.pory"
	compare VAR_UNLOCKED_DIFFICULTY, 2
	goto_if_gt Hub_Event_Script_Birch_15
Hub_Event_Script_Birch_14:
# 453 "data/maps/Hub1/scripts.pory"
	compare VAR_UNLOCKED_DIFFICULTY, 3
	goto_if_gt Hub_Event_Script_Birch_18
Hub_Event_Script_Birch_17:
# 454 "data/maps/Hub1/scripts.pory"
	compare VAR_UNLOCKED_DIFFICULTY, 4
	goto_if_gt Hub_Event_Script_Birch_21
Hub_Event_Script_Birch_20:
# 455 "data/maps/Hub1/scripts.pory"
	compare VAR_UNLOCKED_DIFFICULTY, 5
	goto_if_gt Hub_Event_Script_Birch_24
Hub_Event_Script_Birch_23:
# 456 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 457 "data/maps/Hub1/scripts.pory"
	closemessage
# 458 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 459 "data/maps/Hub1/scripts.pory"
	case MULTI_B_PRESSED, Hub_Event_Script_Birch_27
# 462 "data/maps/Hub1/scripts.pory"
	case 0, Hub_Event_Script_Birch_28
# 463 "data/maps/Hub1/scripts.pory"
	case 1, Hub_Event_Script_Birch_28
# 464 "data/maps/Hub1/scripts.pory"
	case 2, Hub_Event_Script_Birch_28
# 465 "data/maps/Hub1/scripts.pory"
	case 3, Hub_Event_Script_Birch_28
# 466 "data/maps/Hub1/scripts.pory"
	case 4, Hub_Event_Script_Birch_28
# 467 "data/maps/Hub1/scripts.pory"
	case 5, Hub_Event_Script_Birch_28
# 468 "data/maps/Hub1/scripts.pory"
	case 6, Hub_Event_Script_Birch_28
	return

Hub_Event_Script_Birch_6:
# 419 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_5
# 420 "data/maps/Hub1/scripts.pory"
	closemessage
# 421 "data/maps/Hub1/scripts.pory"
	applymovement Chimecho, Hub_Event_Script_Birch_Movement_0
# 425 "data/maps/Hub1/scripts.pory"
	waitmovement
# 426 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_6
# 427 "data/maps/Hub1/scripts.pory"
	call GiveStarterCharm
# 428 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_7
# 429 "data/maps/Hub1/scripts.pory"
	closemessage
# 430 "data/maps/Hub1/scripts.pory"
	applymovement Birch, Hub_Event_Script_Birch_Movement_1
# 435 "data/maps/Hub1/scripts.pory"
	waitmovement
# 436 "data/maps/Hub1/scripts.pory"
	applymovement LOCALID_PLAYER, Hub_Event_Script_Birch_Movement_2
# 439 "data/maps/Hub1/scripts.pory"
	waitmovement
# 440 "data/maps/Hub1/scripts.pory"
	special WarpToNextAct
	return

Hub_Event_Script_Birch_7:
# 442 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_3
# 443 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Birch_9:
# 450 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_10, 1
	goto Hub_Event_Script_Birch_8

Hub_Event_Script_Birch_12:
# 451 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_11, 2
	goto Hub_Event_Script_Birch_11

Hub_Event_Script_Birch_15:
# 452 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_12, 3
	goto Hub_Event_Script_Birch_14

Hub_Event_Script_Birch_18:
# 453 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_13, 4
	goto Hub_Event_Script_Birch_17

Hub_Event_Script_Birch_21:
# 454 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_14, 5
	goto Hub_Event_Script_Birch_20

Hub_Event_Script_Birch_24:
# 455 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_15, 6
	goto Hub_Event_Script_Birch_23

Hub_Event_Script_Birch_27:
# 460 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_16
# 461 "data/maps/Hub1/scripts.pory"
	goto backtomain
	return

Hub_Event_Script_Birch_28:
# 469 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 470 "data/maps/Hub1/scripts.pory"
	copyvar VAR_CURRENT_DIFFICULTY, VAR_RESULT
# 471 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_17
# 472 "data/maps/Hub1/scripts.pory"
	goto backtomain
	return


Hub_Event_Script_Miltank::
# 479 "data/maps/Hub1/scripts.pory"
	lockall
# 480 "data/maps/Hub1/scripts.pory"
	faceplayer
# 481 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 483 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_BULBASAUR_UNLOCKED, Hub_Event_Script_Miltank_2
Hub_Event_Script_Miltank_1:
# 484 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHARMANDER_UNLOCKED, Hub_Event_Script_Miltank_5
Hub_Event_Script_Miltank_4:
# 485 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SQUIRTLE_UNLOCKED, Hub_Event_Script_Miltank_8
Hub_Event_Script_Miltank_7:
# 486 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHIKORITA_UNLOCKED, Hub_Event_Script_Miltank_11
Hub_Event_Script_Miltank_10:
# 487 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CYNDAQUIL_UNLOCKED, Hub_Event_Script_Miltank_14
Hub_Event_Script_Miltank_13:
# 488 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TOTODILE_UNLOCKED, Hub_Event_Script_Miltank_17
Hub_Event_Script_Miltank_16:
# 489 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TREECKO_UNLOCKED, Hub_Event_Script_Miltank_20
Hub_Event_Script_Miltank_19:
# 490 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TORCHIC_UNLOCKED, Hub_Event_Script_Miltank_23
Hub_Event_Script_Miltank_22:
# 491 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MUDKIP_UNLOCKED, Hub_Event_Script_Miltank_26
Hub_Event_Script_Miltank_25:
# 492 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TURTWIG_UNLOCKED, Hub_Event_Script_Miltank_29
Hub_Event_Script_Miltank_28:
# 493 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHIMCHAR_UNLOCKED, Hub_Event_Script_Miltank_32
Hub_Event_Script_Miltank_31:
# 494 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_PIPLUP_UNLOCKED, Hub_Event_Script_Miltank_35
Hub_Event_Script_Miltank_34:
# 495 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SNIVY_UNLOCKED, Hub_Event_Script_Miltank_38
Hub_Event_Script_Miltank_37:
# 496 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TEPIG_UNLOCKED, Hub_Event_Script_Miltank_41
Hub_Event_Script_Miltank_40:
# 497 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_OSHAWOTT_UNLOCKED, Hub_Event_Script_Miltank_44
Hub_Event_Script_Miltank_43:
# 498 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHESPIN_UNLOCKED, Hub_Event_Script_Miltank_47
Hub_Event_Script_Miltank_46:
# 499 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FENNEKIN_UNLOCKED, Hub_Event_Script_Miltank_50
Hub_Event_Script_Miltank_49:
# 500 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FROAKIE_UNLOCKED, Hub_Event_Script_Miltank_53
Hub_Event_Script_Miltank_52:
# 501 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ROWLET_UNLOCKED, Hub_Event_Script_Miltank_56
Hub_Event_Script_Miltank_55:
# 502 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_LITTEN_UNLOCKED, Hub_Event_Script_Miltank_59
Hub_Event_Script_Miltank_58:
# 503 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_POPPLIO_UNLOCKED, Hub_Event_Script_Miltank_62
Hub_Event_Script_Miltank_61:
# 504 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_GROOKEY_UNLOCKED, Hub_Event_Script_Miltank_65
Hub_Event_Script_Miltank_64:
# 505 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SCORBUNNY_UNLOCKED, Hub_Event_Script_Miltank_68
Hub_Event_Script_Miltank_67:
# 506 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SOBBLE_UNLOCKED, Hub_Event_Script_Miltank_71
Hub_Event_Script_Miltank_70:
# 507 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SPRIGATITO_UNLOCKED, Hub_Event_Script_Miltank_74
Hub_Event_Script_Miltank_73:
# 508 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FUECOCO_UNLOCKED, Hub_Event_Script_Miltank_77
Hub_Event_Script_Miltank_76:
# 509 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_QUAXLY_UNLOCKED, Hub_Event_Script_Miltank_80
Hub_Event_Script_Miltank_79:
# 511 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Miltank_82
# 849 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_57
# 850 "data/maps/Hub1/scripts.pory"
	waitmessage
# 851 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Miltank_2:
# 483 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_0, SPECIES_BULBASAUR
# 483 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_1

Hub_Event_Script_Miltank_5:
# 484 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_1, SPECIES_CHARMANDER
# 484 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_4

Hub_Event_Script_Miltank_8:
# 485 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_2, SPECIES_SQUIRTLE
# 485 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_7

Hub_Event_Script_Miltank_11:
# 486 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_3, SPECIES_CHIKORITA
# 486 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_10

Hub_Event_Script_Miltank_14:
# 487 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_4, SPECIES_CYNDAQUIL
# 487 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_13

Hub_Event_Script_Miltank_17:
# 488 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_5, SPECIES_TOTODILE
# 488 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_16

Hub_Event_Script_Miltank_20:
# 489 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_6, SPECIES_TREECKO
# 489 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_19

Hub_Event_Script_Miltank_23:
# 490 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_7, SPECIES_TORCHIC
# 490 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_22

Hub_Event_Script_Miltank_26:
# 491 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_8, SPECIES_MUDKIP
# 491 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_25

Hub_Event_Script_Miltank_29:
# 492 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_9, SPECIES_TURTWIG
# 492 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_28

Hub_Event_Script_Miltank_32:
# 493 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_10, SPECIES_CHIMCHAR
# 493 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_31

Hub_Event_Script_Miltank_35:
# 494 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_11, SPECIES_PIPLUP
# 494 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_34

Hub_Event_Script_Miltank_38:
# 495 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_12, SPECIES_SNIVY
# 495 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_37

Hub_Event_Script_Miltank_41:
# 496 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_13, SPECIES_TEPIG
# 496 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_40

Hub_Event_Script_Miltank_44:
# 497 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_14, SPECIES_OSHAWOTT
# 497 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_43

Hub_Event_Script_Miltank_47:
# 498 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_15, SPECIES_CHESPIN
# 498 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_46

Hub_Event_Script_Miltank_50:
# 499 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_16, SPECIES_FENNEKIN
# 499 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_49

Hub_Event_Script_Miltank_53:
# 500 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_17, SPECIES_FROAKIE
# 500 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_52

Hub_Event_Script_Miltank_56:
# 501 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_18, SPECIES_ROWLET
# 501 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_55

Hub_Event_Script_Miltank_59:
# 502 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_19, SPECIES_LITTEN
# 502 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_58

Hub_Event_Script_Miltank_62:
# 503 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_20, SPECIES_POPPLIO
# 503 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_61

Hub_Event_Script_Miltank_65:
# 504 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_21, SPECIES_GROOKEY
# 504 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_64

Hub_Event_Script_Miltank_68:
# 505 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_22, SPECIES_SCORBUNNY
# 505 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_67

Hub_Event_Script_Miltank_71:
# 506 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_23, SPECIES_SOBBLE
# 506 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_70

Hub_Event_Script_Miltank_74:
# 507 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_24, SPECIES_SPRIGATITO
# 507 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_73

Hub_Event_Script_Miltank_77:
# 508 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_25, SPECIES_FUECOCO
# 508 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_76

Hub_Event_Script_Miltank_80:
# 509 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_26, SPECIES_QUAXLY
# 509 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_79

Hub_Event_Script_Miltank_82:
# 512 "data/maps/Hub1/scripts.pory"
	showcoinsbox 21, 11
# 513 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_27
# 514 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 515 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 516 "data/maps/Hub1/scripts.pory"
	case MULTI_B_PRESSED, Hub_Event_Script_Miltank_87
# 521 "data/maps/Hub1/scripts.pory"
	case SPECIES_BULBASAUR, Hub_Event_Script_Miltank_88
# 533 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHARMANDER, Hub_Event_Script_Miltank_89
# 545 "data/maps/Hub1/scripts.pory"
	case SPECIES_SQUIRTLE, Hub_Event_Script_Miltank_90
# 557 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIKORITA, Hub_Event_Script_Miltank_91
# 569 "data/maps/Hub1/scripts.pory"
	case SPECIES_CYNDAQUIL, Hub_Event_Script_Miltank_92
# 581 "data/maps/Hub1/scripts.pory"
	case SPECIES_TOTODILE, Hub_Event_Script_Miltank_93
# 593 "data/maps/Hub1/scripts.pory"
	case SPECIES_TREECKO, Hub_Event_Script_Miltank_94
# 605 "data/maps/Hub1/scripts.pory"
	case SPECIES_TORCHIC, Hub_Event_Script_Miltank_95
# 617 "data/maps/Hub1/scripts.pory"
	case SPECIES_MUDKIP, Hub_Event_Script_Miltank_96
# 629 "data/maps/Hub1/scripts.pory"
	case SPECIES_TURTWIG, Hub_Event_Script_Miltank_97
# 641 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIMCHAR, Hub_Event_Script_Miltank_98
# 653 "data/maps/Hub1/scripts.pory"
	case SPECIES_PIPLUP, Hub_Event_Script_Miltank_99
# 665 "data/maps/Hub1/scripts.pory"
	case SPECIES_SNIVY, Hub_Event_Script_Miltank_100
# 677 "data/maps/Hub1/scripts.pory"
	case SPECIES_TEPIG, Hub_Event_Script_Miltank_101
# 689 "data/maps/Hub1/scripts.pory"
	case SPECIES_OSHAWOTT, Hub_Event_Script_Miltank_102
# 701 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHESPIN, Hub_Event_Script_Miltank_103
# 713 "data/maps/Hub1/scripts.pory"
	case SPECIES_FENNEKIN, Hub_Event_Script_Miltank_104
# 725 "data/maps/Hub1/scripts.pory"
	case SPECIES_FROAKIE, Hub_Event_Script_Miltank_105
# 737 "data/maps/Hub1/scripts.pory"
	case SPECIES_ROWLET, Hub_Event_Script_Miltank_106
# 749 "data/maps/Hub1/scripts.pory"
	case SPECIES_LITTEN, Hub_Event_Script_Miltank_107
# 761 "data/maps/Hub1/scripts.pory"
	case SPECIES_POPPLIO, Hub_Event_Script_Miltank_108
# 773 "data/maps/Hub1/scripts.pory"
	case SPECIES_GROOKEY, Hub_Event_Script_Miltank_109
# 785 "data/maps/Hub1/scripts.pory"
	case SPECIES_SCORBUNNY, Hub_Event_Script_Miltank_110
# 797 "data/maps/Hub1/scripts.pory"
	case SPECIES_SOBBLE, Hub_Event_Script_Miltank_111
# 809 "data/maps/Hub1/scripts.pory"
	case SPECIES_SPRIGATITO, Hub_Event_Script_Miltank_112
# 821 "data/maps/Hub1/scripts.pory"
	case SPECIES_FUECOCO, Hub_Event_Script_Miltank_113
# 833 "data/maps/Hub1/scripts.pory"
	case SPECIES_QUAXLY, Hub_Event_Script_Miltank_114
Hub_Event_Script_Miltank_85:
# 846 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
# 847 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Miltank_87:
# 517 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
# 518 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_28
# 519 "data/maps/Hub1/scripts.pory"
	releaseall
	end

Hub_Event_Script_Miltank_88:
# 522 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 523 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_115
# 531 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_89:
# 534 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 535 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_118
# 543 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_90:
# 546 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 547 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_121
# 555 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_91:
# 558 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 559 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_124
# 567 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_92:
# 570 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 571 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_127
# 579 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_93:
# 582 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 583 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_130
# 591 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_94:
# 594 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 595 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_133
# 603 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_95:
# 606 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 607 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_136
# 615 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_96:
# 618 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 619 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_139
# 627 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_97:
# 630 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 631 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_142
# 639 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_98:
# 642 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 643 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_145
# 651 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_99:
# 654 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 655 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_148
# 663 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_100:
# 666 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 667 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_151
# 675 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_101:
# 678 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 679 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_154
# 687 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_102:
# 690 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 691 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_157
# 699 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_103:
# 702 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 703 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_160
# 711 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_104:
# 714 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 715 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_163
# 723 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_105:
# 726 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 727 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_166
# 735 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_106:
# 738 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 739 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_169
# 747 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_107:
# 750 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 751 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_172
# 759 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_108:
# 762 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 763 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_175
# 771 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_109:
# 774 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 775 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_178
# 783 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_110:
# 786 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 787 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_181
# 795 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_111:
# 798 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 799 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_184
# 807 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_112:
# 810 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 811 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_187
# 819 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_113:
# 822 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 823 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_190
# 831 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_114:
# 834 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 835 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_193
# 843 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_115:
# 524 "data/maps/Hub1/scripts.pory"
	setflag FLAG_BULBASAUR_UNLOCKED
# 525 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 526 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 527 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 528 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_118:
# 536 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHARMANDER_UNLOCKED
# 537 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 538 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 539 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 540 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_31
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_121:
# 548 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SQUIRTLE_UNLOCKED
# 549 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 550 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 551 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 552 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_32
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_124:
# 560 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIKORITA_UNLOCKED
# 561 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 562 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 563 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 564 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_33
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_127:
# 572 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CYNDAQUIL_UNLOCKED
# 573 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 574 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 575 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 576 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_34
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_130:
# 584 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TOTODILE_UNLOCKED
# 585 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 586 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 587 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 588 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_35
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_133:
# 596 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TREECKO_UNLOCKED
# 597 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 598 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 599 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 600 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_36
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_136:
# 608 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TORCHIC_UNLOCKED
# 609 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 610 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 611 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 612 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_37
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_139:
# 620 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MUDKIP_UNLOCKED
# 621 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 622 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 623 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 624 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_38
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_142:
# 632 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TURTWIG_UNLOCKED
# 633 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 634 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 635 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 636 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_39
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_145:
# 644 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIMCHAR_UNLOCKED
# 645 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 646 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 647 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 648 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_40
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_148:
# 656 "data/maps/Hub1/scripts.pory"
	setflag FLAG_PIPLUP_UNLOCKED
# 657 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 658 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 659 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 660 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_41
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_151:
# 668 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SNIVY_UNLOCKED
# 669 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 670 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 671 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 672 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_42
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_154:
# 680 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TEPIG_UNLOCKED
# 681 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 682 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 683 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 684 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_43
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_157:
# 692 "data/maps/Hub1/scripts.pory"
	setflag FLAG_OSHAWOTT_UNLOCKED
# 693 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 694 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 695 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 696 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_44
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_160:
# 704 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHESPIN_UNLOCKED
# 705 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 706 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 707 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 708 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_45
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_163:
# 716 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FENNEKIN_UNLOCKED
# 717 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 718 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 719 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 720 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_46
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_166:
# 728 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FROAKIE_UNLOCKED
# 729 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 730 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 731 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 732 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_47
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_169:
# 740 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ROWLET_UNLOCKED
# 741 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 742 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 743 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 744 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_48
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_172:
# 752 "data/maps/Hub1/scripts.pory"
	setflag FLAG_LITTEN_UNLOCKED
# 753 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 754 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 755 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 756 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_49
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_175:
# 764 "data/maps/Hub1/scripts.pory"
	setflag FLAG_POPPLIO_UNLOCKED
# 765 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 766 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 767 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 768 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_50
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_178:
# 776 "data/maps/Hub1/scripts.pory"
	setflag FLAG_GROOKEY_UNLOCKED
# 777 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 778 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 779 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 780 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_51
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_181:
# 788 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SCORBUNNY_UNLOCKED
# 789 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 790 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 791 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 792 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_52
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_184:
# 800 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SOBBLE_UNLOCKED
# 801 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 802 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 803 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 804 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_53
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_187:
# 812 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SPRIGATITO_UNLOCKED
# 813 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 814 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 815 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 816 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_54
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_190:
# 824 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FUECOCO_UNLOCKED
# 825 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 826 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 827 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 828 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_55
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_193:
# 836 "data/maps/Hub1/scripts.pory"
	setflag FLAG_QUAXLY_UNLOCKED
# 837 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 838 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 839 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 840 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_56
	goto Hub_Event_Script_Miltank_85


Hub_Event_Script_Chansey::
# 857 "data/maps/Hub1/scripts.pory"
	lockall
# 858 "data/maps/Hub1/scripts.pory"
	faceplayer
# 859 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 860 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_BULBASAUR_UNLOCKED, Hub_Event_Script_Chansey_3
Hub_Event_Script_Chansey_1:
# 861 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHARMANDER_UNLOCKED, Hub_Event_Script_Chansey_8
Hub_Event_Script_Chansey_6:
# 862 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SQUIRTLE_UNLOCKED, Hub_Event_Script_Chansey_13
Hub_Event_Script_Chansey_11:
# 863 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHIKORITA_UNLOCKED, Hub_Event_Script_Chansey_18
Hub_Event_Script_Chansey_16:
# 864 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CYNDAQUIL_UNLOCKED, Hub_Event_Script_Chansey_23
Hub_Event_Script_Chansey_21:
# 865 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TOTODILE_UNLOCKED, Hub_Event_Script_Chansey_28
Hub_Event_Script_Chansey_26:
# 866 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TREECKO_UNLOCKED, Hub_Event_Script_Chansey_33
Hub_Event_Script_Chansey_31:
# 867 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TORCHIC_UNLOCKED, Hub_Event_Script_Chansey_38
Hub_Event_Script_Chansey_36:
# 868 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_MUDKIP_UNLOCKED, Hub_Event_Script_Chansey_43
Hub_Event_Script_Chansey_41:
# 869 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TURTWIG_UNLOCKED, Hub_Event_Script_Chansey_48
Hub_Event_Script_Chansey_46:
# 870 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHIMCHAR_UNLOCKED, Hub_Event_Script_Chansey_53
Hub_Event_Script_Chansey_51:
# 871 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_PIPLUP_UNLOCKED, Hub_Event_Script_Chansey_58
Hub_Event_Script_Chansey_56:
# 872 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SNIVY_UNLOCKED, Hub_Event_Script_Chansey_63
Hub_Event_Script_Chansey_61:
# 873 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TEPIG_UNLOCKED, Hub_Event_Script_Chansey_68
Hub_Event_Script_Chansey_66:
# 874 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_OSHAWOTT_UNLOCKED, Hub_Event_Script_Chansey_73
Hub_Event_Script_Chansey_71:
# 875 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHESPIN_UNLOCKED, Hub_Event_Script_Chansey_78
Hub_Event_Script_Chansey_76:
# 876 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FENNEKIN_UNLOCKED, Hub_Event_Script_Chansey_83
Hub_Event_Script_Chansey_81:
# 877 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FROAKIE_UNLOCKED, Hub_Event_Script_Chansey_88
Hub_Event_Script_Chansey_86:
# 878 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ROWLET_UNLOCKED, Hub_Event_Script_Chansey_93
Hub_Event_Script_Chansey_91:
# 879 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_LITTEN_UNLOCKED, Hub_Event_Script_Chansey_98
Hub_Event_Script_Chansey_96:
# 880 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_POPPLIO_UNLOCKED, Hub_Event_Script_Chansey_103
Hub_Event_Script_Chansey_101:
# 881 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_GROOKEY_UNLOCKED, Hub_Event_Script_Chansey_108
Hub_Event_Script_Chansey_106:
# 882 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SCORBUNNY_UNLOCKED, Hub_Event_Script_Chansey_113
Hub_Event_Script_Chansey_111:
# 883 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SOBBLE_UNLOCKED, Hub_Event_Script_Chansey_118
Hub_Event_Script_Chansey_116:
# 884 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPRIGATITO_UNLOCKED, Hub_Event_Script_Chansey_123
Hub_Event_Script_Chansey_121:
# 885 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FUECOCO_UNLOCKED, Hub_Event_Script_Chansey_128
Hub_Event_Script_Chansey_126:
# 886 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_QUAXLY_UNLOCKED, Hub_Event_Script_Chansey_133
Hub_Event_Script_Chansey_131:
# 888 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Chansey_136
# 911 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_2
# 912 "data/maps/Hub1/scripts.pory"
	waitmessage
# 913 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Chansey_2:
# 860 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_1, SPECIES_BULBASAUR
# 860 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_1

Hub_Event_Script_Chansey_3:
# 860 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_BULBASAUR
	goto_if_ne Hub_Event_Script_Chansey_2
	goto Hub_Event_Script_Chansey_1

Hub_Event_Script_Chansey_7:
# 861 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_2, SPECIES_CHARMANDER
# 861 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_6

Hub_Event_Script_Chansey_8:
# 861 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHARMANDER
	goto_if_ne Hub_Event_Script_Chansey_7
	goto Hub_Event_Script_Chansey_6

Hub_Event_Script_Chansey_12:
# 862 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_3, SPECIES_SQUIRTLE
# 862 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_11

Hub_Event_Script_Chansey_13:
# 862 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SQUIRTLE
	goto_if_ne Hub_Event_Script_Chansey_12
	goto Hub_Event_Script_Chansey_11

Hub_Event_Script_Chansey_17:
# 863 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_4, SPECIES_CHIKORITA
# 863 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_16

Hub_Event_Script_Chansey_18:
# 863 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHIKORITA
	goto_if_ne Hub_Event_Script_Chansey_17
	goto Hub_Event_Script_Chansey_16

Hub_Event_Script_Chansey_22:
# 864 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_5, SPECIES_CYNDAQUIL
# 864 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_21

Hub_Event_Script_Chansey_23:
# 864 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CYNDAQUIL
	goto_if_ne Hub_Event_Script_Chansey_22
	goto Hub_Event_Script_Chansey_21

Hub_Event_Script_Chansey_27:
# 865 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_6, SPECIES_TOTODILE
# 865 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_26

Hub_Event_Script_Chansey_28:
# 865 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TOTODILE
	goto_if_ne Hub_Event_Script_Chansey_27
	goto Hub_Event_Script_Chansey_26

Hub_Event_Script_Chansey_32:
# 866 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_7, SPECIES_TREECKO
# 866 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_31

Hub_Event_Script_Chansey_33:
# 866 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TREECKO
	goto_if_ne Hub_Event_Script_Chansey_32
	goto Hub_Event_Script_Chansey_31

Hub_Event_Script_Chansey_37:
# 867 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_8, SPECIES_TORCHIC
# 867 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_36

Hub_Event_Script_Chansey_38:
# 867 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TORCHIC
	goto_if_ne Hub_Event_Script_Chansey_37
	goto Hub_Event_Script_Chansey_36

Hub_Event_Script_Chansey_42:
# 868 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_9, SPECIES_MUDKIP
# 868 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_41

Hub_Event_Script_Chansey_43:
# 868 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_MUDKIP
	goto_if_ne Hub_Event_Script_Chansey_42
	goto Hub_Event_Script_Chansey_41

Hub_Event_Script_Chansey_47:
# 869 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_10, SPECIES_TURTWIG
# 869 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_46

Hub_Event_Script_Chansey_48:
# 869 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TURTWIG
	goto_if_ne Hub_Event_Script_Chansey_47
	goto Hub_Event_Script_Chansey_46

Hub_Event_Script_Chansey_52:
# 870 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_11, SPECIES_CHIMCHAR
# 870 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_51

Hub_Event_Script_Chansey_53:
# 870 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHIMCHAR
	goto_if_ne Hub_Event_Script_Chansey_52
	goto Hub_Event_Script_Chansey_51

Hub_Event_Script_Chansey_57:
# 871 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_12, SPECIES_PIPLUP
# 871 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_56

Hub_Event_Script_Chansey_58:
# 871 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_PIPLUP
	goto_if_ne Hub_Event_Script_Chansey_57
	goto Hub_Event_Script_Chansey_56

Hub_Event_Script_Chansey_62:
# 872 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_13, SPECIES_SNIVY
# 872 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_61

Hub_Event_Script_Chansey_63:
# 872 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SNIVY
	goto_if_ne Hub_Event_Script_Chansey_62
	goto Hub_Event_Script_Chansey_61

Hub_Event_Script_Chansey_67:
# 873 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_14, SPECIES_TEPIG
# 873 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_66

Hub_Event_Script_Chansey_68:
# 873 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TEPIG
	goto_if_ne Hub_Event_Script_Chansey_67
	goto Hub_Event_Script_Chansey_66

Hub_Event_Script_Chansey_72:
# 874 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_15, SPECIES_OSHAWOTT
# 874 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_71

Hub_Event_Script_Chansey_73:
# 874 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_OSHAWOTT
	goto_if_ne Hub_Event_Script_Chansey_72
	goto Hub_Event_Script_Chansey_71

Hub_Event_Script_Chansey_77:
# 875 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_16, SPECIES_CHESPIN
# 875 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_76

Hub_Event_Script_Chansey_78:
# 875 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHESPIN
	goto_if_ne Hub_Event_Script_Chansey_77
	goto Hub_Event_Script_Chansey_76

Hub_Event_Script_Chansey_82:
# 876 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_17, SPECIES_FENNEKIN
# 876 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_81

Hub_Event_Script_Chansey_83:
# 876 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FENNEKIN
	goto_if_ne Hub_Event_Script_Chansey_82
	goto Hub_Event_Script_Chansey_81

Hub_Event_Script_Chansey_87:
# 877 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_18, SPECIES_FROAKIE
# 877 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_86

Hub_Event_Script_Chansey_88:
# 877 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FROAKIE
	goto_if_ne Hub_Event_Script_Chansey_87
	goto Hub_Event_Script_Chansey_86

Hub_Event_Script_Chansey_92:
# 878 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_19, SPECIES_ROWLET
# 878 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_91

Hub_Event_Script_Chansey_93:
# 878 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_ROWLET
	goto_if_ne Hub_Event_Script_Chansey_92
	goto Hub_Event_Script_Chansey_91

Hub_Event_Script_Chansey_97:
# 879 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_20, SPECIES_LITTEN
# 879 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_96

Hub_Event_Script_Chansey_98:
# 879 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_LITTEN
	goto_if_ne Hub_Event_Script_Chansey_97
	goto Hub_Event_Script_Chansey_96

Hub_Event_Script_Chansey_102:
# 880 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_21, SPECIES_POPPLIO
# 880 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_101

Hub_Event_Script_Chansey_103:
# 880 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_POPPLIO
	goto_if_ne Hub_Event_Script_Chansey_102
	goto Hub_Event_Script_Chansey_101

Hub_Event_Script_Chansey_107:
# 881 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_22, SPECIES_GROOKEY
# 881 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_106

Hub_Event_Script_Chansey_108:
# 881 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_GROOKEY
	goto_if_ne Hub_Event_Script_Chansey_107
	goto Hub_Event_Script_Chansey_106

Hub_Event_Script_Chansey_112:
# 882 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_23, SPECIES_SCORBUNNY
# 882 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_111

Hub_Event_Script_Chansey_113:
# 882 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SCORBUNNY
	goto_if_ne Hub_Event_Script_Chansey_112
	goto Hub_Event_Script_Chansey_111

Hub_Event_Script_Chansey_117:
# 883 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_24, SPECIES_SOBBLE
# 883 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_116

Hub_Event_Script_Chansey_118:
# 883 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SOBBLE
	goto_if_ne Hub_Event_Script_Chansey_117
	goto Hub_Event_Script_Chansey_116

Hub_Event_Script_Chansey_122:
# 884 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_25, SPECIES_SPRIGATITO
# 884 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_121

Hub_Event_Script_Chansey_123:
# 884 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SPRIGATITO
	goto_if_ne Hub_Event_Script_Chansey_122
	goto Hub_Event_Script_Chansey_121

Hub_Event_Script_Chansey_127:
# 885 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_26, SPECIES_FUECOCO
# 885 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_126

Hub_Event_Script_Chansey_128:
# 885 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FUECOCO
	goto_if_ne Hub_Event_Script_Chansey_127
	goto Hub_Event_Script_Chansey_126

Hub_Event_Script_Chansey_132:
# 886 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_27, SPECIES_QUAXLY
# 886 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_131

Hub_Event_Script_Chansey_133:
# 886 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_QUAXLY
	goto_if_ne Hub_Event_Script_Chansey_132
	goto Hub_Event_Script_Chansey_131

Hub_Event_Script_Chansey_136:
# 889 "data/maps/Hub1/scripts.pory"
	setvar VAR_RESULT, 0
# 890 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_0
# 891 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 893 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_ne Hub_Event_Script_Chansey_139
# 908 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Chansey_139:
# 894 "data/maps/Hub1/scripts.pory"
	copyvar VAR_STARTER_MON, VAR_RESULT
# 895 "data/maps/Hub1/scripts.pory"
	special ZeroPlayerPartyMons
# 896 "data/maps/Hub1/scripts.pory"
	special GiveSavedStarter
# 897 "data/maps/Hub1/scripts.pory"
	special UpdatePlayerSprite
# 898 "data/maps/Hub1/scripts.pory"
	special UpdateTransformedPlayerPalette
# 899 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 900 "data/maps/Hub1/scripts.pory"
	releaseall
# 901 "data/maps/Hub1/scripts.pory"
	lockall
# 902 "data/maps/Hub1/scripts.pory"
	playse SE_SUCCESS
# 903 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_1
# 904 "data/maps/Hub1/scripts.pory"
	waitmessage
# 905 "data/maps/Hub1/scripts.pory"
	releaseall
	return


KecShop_Sign::
# 917 "data/maps/Hub1/scripts.pory"
	lockall
# 918 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Sign_Text_0
# 919 "data/maps/Hub1/scripts.pory"
	waitmessage
# 920 "data/maps/Hub1/scripts.pory"
	releaseall
	return


KecShop::
# 924 "data/maps/Hub1/scripts.pory"
	lockall
# 925 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Sign_Text_0
# 926 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_0, ITEM_ORAN_BERRY
# 927 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_1, ITEM_MEMORY_MUSHROOM
# 928 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
# 929 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_LUM_BERRY_BUYABLE, KecShop_2
KecShop_1:
# 933 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SERIOUS_MINT_BUYABLE, KecShop_5
KecShop_4:
# 937 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_RARE_CANDY_BUYABLE, KecShop_8
KecShop_7:
# 941 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_POCKET_BIRCH_BAG_BUYABLE, KecShop_11
KecShop_10:
# 945 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_HP_BOTTLE_CAP_BUYABLE, KecShop_14
KecShop_13:
# 949 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ATK_BOTTLE_CAP_BUYABLE, KecShop_17
KecShop_16:
# 953 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_DEF_BOTTLE_CAP_BUYABLE, KecShop_20
KecShop_19:
# 957 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPEED_BOTTLE_CAP_BUYABLE, KecShop_23
KecShop_22:
# 961 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPATK_BOTTLE_CAP_BUYABLE, KecShop_26
KecShop_25:
# 965 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPDEF_BOTTLE_CAP_BUYABLE, KecShop_29
KecShop_28:
# 969 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_HP_GOLD_BOTTLE_CAP_BUYABLE, KecShop_32
KecShop_31:
# 973 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ATK_GOLD_BOTTLE_CAP_BUYABLE, KecShop_35
KecShop_34:
# 977 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_DEF_GOLD_BOTTLE_CAP_BUYABLE, KecShop_38
KecShop_37:
# 981 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPEED_GOLD_BOTTLE_CAP_BUYABLE, KecShop_41
KecShop_40:
# 985 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPATK_GOLD_BOTTLE_CAP_BUYABLE, KecShop_44
KecShop_43:
# 989 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPDEF_GOLD_BOTTLE_CAP_BUYABLE, KecShop_47
KecShop_46:
# 995 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne KecShop_50
# 1094 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
# 1095 "data/maps/Hub1/scripts.pory"
	waitmessage
# 1096 "data/maps/Hub1/scripts.pory"
	releaseall
KecShop_49:
# 1098 "data/maps/Hub1/scripts.pory"
	releaseall
	return

KecShop_2:
# 930 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_2, ITEM_LUM_BERRY
# 931 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_1

KecShop_5:
# 934 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_3, ITEM_SERIOUS_MINT
# 935 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_4

KecShop_8:
# 938 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_4, ITEM_RARE_CANDY
# 939 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_7

KecShop_11:
# 942 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_5, ITEM_POCKET_BIRCH_BAG
# 943 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_10

KecShop_14:
# 946 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_6, ITEM_HP_BOTTLE_CAP
# 947 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_13

KecShop_17:
# 950 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_7, ITEM_ATK_BOTTLE_CAP
# 951 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_16

KecShop_20:
# 954 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_8, ITEM_DEF_BOTTLE_CAP
# 955 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_19

KecShop_23:
# 958 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_9, ITEM_SPEED_BOTTLE_CAP
# 959 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_22

KecShop_26:
# 962 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_10, ITEM_SPATK_BOTTLE_CAP
# 963 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_25

KecShop_29:
# 966 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_11, ITEM_SPDEF_BOTTLE_CAP
# 967 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_28

KecShop_32:
# 970 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_12, ITEM_HP_GOLD_BOTTLE_CAP
# 971 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_31

KecShop_35:
# 974 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_13, ITEM_ATK_GOLD_BOTTLE_CAP
# 975 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_34

KecShop_38:
# 978 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_14, ITEM_DEF_GOLD_BOTTLE_CAP
# 979 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_37

KecShop_41:
# 982 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_15, ITEM_SPEED_GOLD_BOTTLE_CAP
# 983 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_40

KecShop_44:
# 986 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_16, ITEM_SPATK_GOLD_BOTTLE_CAP
# 987 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_43

KecShop_47:
# 990 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_17, ITEM_SPDEF_GOLD_BOTTLE_CAP
# 991 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_46

KecShop_50:
# 996 "data/maps/Hub1/scripts.pory"
	showmoneybox 18, 10
# 997 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 998 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 999 "data/maps/Hub1/scripts.pory"
	case ITEM_ORAN_BERRY, KecShop_55
# 1010 "data/maps/Hub1/scripts.pory"
	case ITEM_LUM_BERRY, KecShop_56
# 1021 "data/maps/Hub1/scripts.pory"
	case ITEM_SERIOUS_MINT, KecShop_57
# 1032 "data/maps/Hub1/scripts.pory"
	case ITEM_MEMORY_MUSHROOM, KecShop_58
# 1043 "data/maps/Hub1/scripts.pory"
	case ITEM_RARE_CANDY, KecShop_59
# 1054 "data/maps/Hub1/scripts.pory"
	case ITEM_POCKET_BIRCH_BAG, KecShop_60
# 1063 "data/maps/Hub1/scripts.pory"
	case ITEM_HP_BOTTLE_CAP, KecShop_61
# 1064 "data/maps/Hub1/scripts.pory"
	case ITEM_ATK_BOTTLE_CAP, KecShop_61
# 1065 "data/maps/Hub1/scripts.pory"
	case ITEM_DEF_BOTTLE_CAP, KecShop_61
# 1066 "data/maps/Hub1/scripts.pory"
	case ITEM_SPEED_BOTTLE_CAP, KecShop_61
# 1067 "data/maps/Hub1/scripts.pory"
	case ITEM_SPATK_BOTTLE_CAP, KecShop_61
# 1068 "data/maps/Hub1/scripts.pory"
	case ITEM_SPDEF_BOTTLE_CAP, KecShop_61
# 1077 "data/maps/Hub1/scripts.pory"
	case ITEM_HP_GOLD_BOTTLE_CAP, KecShop_62
# 1078 "data/maps/Hub1/scripts.pory"
	case ITEM_ATK_GOLD_BOTTLE_CAP, KecShop_62
# 1079 "data/maps/Hub1/scripts.pory"
	case ITEM_DEF_GOLD_BOTTLE_CAP, KecShop_62
# 1080 "data/maps/Hub1/scripts.pory"
	case ITEM_SPEED_GOLD_BOTTLE_CAP, KecShop_62
# 1081 "data/maps/Hub1/scripts.pory"
	case ITEM_SPATK_GOLD_BOTTLE_CAP, KecShop_62
# 1082 "data/maps/Hub1/scripts.pory"
	case ITEM_SPDEF_GOLD_BOTTLE_CAP, KecShop_62
KecShop_53:
# 1092 "data/maps/Hub1/scripts.pory"
	hidemoneybox
	goto KecShop_49

KecShop_55:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_63
# 1008 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_56:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_66
# 1019 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_57:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_69
# 1030 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_58:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_72
# 1041 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_59:
	checkmoney 2000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_75
# 1052 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_60:
	checkmoney 2000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_78
# 1062 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_61:
	checkmoney 300
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_81
# 1076 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_62:
	checkmoney 700
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_84
# 1090 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_63:
# 1001 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 1002 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1003 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1004 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ORAN_BERRY
# 1005 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_53

KecShop_66:
# 1012 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 1013 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1014 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1015 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUM_BERRY
# 1016 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_53

KecShop_69:
# 1023 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1024 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1025 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1026 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SERIOUS_MINT
# 1027 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_53

KecShop_72:
# 1034 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 1035 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1036 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1037 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM
# 1038 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_53

KecShop_75:
# 1045 "data/maps/Hub1/scripts.pory"
	removemoney 2000
# 1046 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1047 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1048 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 1049 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_53

KecShop_78:
# 1056 "data/maps/Hub1/scripts.pory"
	removemoney 2000
# 1057 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1058 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1059 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_POCKET_BIRCH_BAG
# 1060 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_53

KecShop_81:
# 1070 "data/maps/Hub1/scripts.pory"
	removemoney 300
# 1071 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1072 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1073 "data/maps/Hub1/scripts.pory"
	giveitem VAR_RESULT
# 1074 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_53

KecShop_84:
# 1084 "data/maps/Hub1/scripts.pory"
	removemoney 700
# 1085 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1086 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1087 "data/maps/Hub1/scripts.pory"
	giveitem VAR_RESULT
# 1088 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_53


KecShop_Shiny::
# 1102 "data/maps/Hub1/scripts.pory"
	lockall
# 1103 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Sign_Text_0
# 1104 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_NOBLE_ROAR_BUYABLE, KecShop_Shiny_2
KecShop_Shiny_1:
# 1108 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_CHARM_BUYABLE, KecShop_Shiny_5
KecShop_Shiny_4:
# 1112 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_FAKE_TEARS_BUYABLE, KecShop_Shiny_8
KecShop_Shiny_7:
# 1116 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_CONFUSE_RAY_BUYABLE, KecShop_Shiny_11
KecShop_Shiny_10:
# 1120 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_THUNDER_WAVE_BUYABLE, KecShop_Shiny_14
KecShop_Shiny_13:
# 1124 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_WILL_O_WISP_BUYABLE, KecShop_Shiny_17
KecShop_Shiny_16:
# 1128 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_TOXIC_BUYABLE, KecShop_Shiny_20
KecShop_Shiny_19:
# 1132 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_SWIFT_BUYABLE, KecShop_Shiny_23
KecShop_Shiny_22:
# 1136 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_CUT_BUYABLE, KecShop_Shiny_26
KecShop_Shiny_25:
# 1140 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_ROCK_SMASH_BUYABLE, KecShop_Shiny_29
KecShop_Shiny_28:
# 1144 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_SNARL_BUYABLE, KecShop_Shiny_32
KecShop_Shiny_31:
# 1148 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_ELECTROWEB_BUYABLE, KecShop_Shiny_35
KecShop_Shiny_34:
# 1152 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_AURORA_BEAM_BUYABLE, KecShop_Shiny_38
KecShop_Shiny_37:
# 1156 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_PSYBEAM_BUYABLE, KecShop_Shiny_41
KecShop_Shiny_40:
# 1160 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_FLAMETHROWER_BUYABLE, KecShop_Shiny_44
KecShop_Shiny_43:
# 1164 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_ICE_BEAM_BUYABLE, KecShop_Shiny_47
KecShop_Shiny_46:
# 1168 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_THUNDERBOLT_BUYABLE, KecShop_Shiny_50
KecShop_Shiny_49:
# 1172 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_SCALD_BUYABLE, KecShop_Shiny_53
KecShop_Shiny_52:
# 1176 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_MEGA_DRAIN_BUYABLE, KecShop_Shiny_56
KecShop_Shiny_55:
# 1180 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_SLUDGE_BOMB_BUYABLE, KecShop_Shiny_59
KecShop_Shiny_58:
# 1184 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_DUAL_WINGBEAT_BUYABLE, KecShop_Shiny_62
KecShop_Shiny_61:
# 1188 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_LEECH_LIFE_BUYABLE, KecShop_Shiny_65
KecShop_Shiny_64:
# 1192 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_PLAY_ROUGH_BUYABLE, KecShop_Shiny_68
KecShop_Shiny_67:
# 1196 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_SHADOW_BALL_BUYABLE, KecShop_Shiny_71
KecShop_Shiny_70:
# 1200 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_EARTH_POWER_BUYABLE, KecShop_Shiny_74
KecShop_Shiny_73:
# 1205 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne KecShop_Shiny_77
# 1488 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
# 1489 "data/maps/Hub1/scripts.pory"
	waitmessage
# 1490 "data/maps/Hub1/scripts.pory"
	releaseall
KecShop_Shiny_76:
# 1492 "data/maps/Hub1/scripts.pory"
	releaseall
	return

KecShop_Shiny_2:
# 1105 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_0, ITEM_TM_NOBLE_ROAR
# 1106 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_1

KecShop_Shiny_5:
# 1109 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_1, ITEM_TM_CHARM
# 1110 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_4

KecShop_Shiny_8:
# 1113 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_2, ITEM_TM_FAKE_TEARS
# 1114 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_7

KecShop_Shiny_11:
# 1117 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_3, ITEM_TM_CONFUSE_RAY
# 1118 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_10

KecShop_Shiny_14:
# 1121 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_4, ITEM_TM_THUNDER_WAVE
# 1122 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_13

KecShop_Shiny_17:
# 1125 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_5, ITEM_TM_WILL_O_WISP
# 1126 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_16

KecShop_Shiny_20:
# 1129 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_6, ITEM_TM_TOXIC
# 1130 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_19

KecShop_Shiny_23:
# 1133 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_7, ITEM_TM_SWIFT
# 1134 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_22

KecShop_Shiny_26:
# 1137 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_8, ITEM_TM_CUT
# 1138 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_25

KecShop_Shiny_29:
# 1141 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_9, ITEM_TM_ROCK_SMASH
# 1142 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_28

KecShop_Shiny_32:
# 1145 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_10, ITEM_TM_SNARL
# 1146 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_31

KecShop_Shiny_35:
# 1149 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_11, ITEM_TM_ELECTROWEB
# 1150 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_34

KecShop_Shiny_38:
# 1153 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_12, ITEM_TM_AURORA_BEAM
# 1154 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_37

KecShop_Shiny_41:
# 1157 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_13, ITEM_TM_PSYBEAM
# 1158 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_40

KecShop_Shiny_44:
# 1161 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_14, ITEM_TM_FLAMETHROWER
# 1162 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_43

KecShop_Shiny_47:
# 1165 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_15, ITEM_TM_ICE_BEAM
# 1166 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_46

KecShop_Shiny_50:
# 1169 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_16, ITEM_TM_THUNDERBOLT
# 1170 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_49

KecShop_Shiny_53:
# 1173 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_17, ITEM_TM_SCALD
# 1174 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_52

KecShop_Shiny_56:
# 1177 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_18, ITEM_TM_MEGA_DRAIN
# 1178 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_55

KecShop_Shiny_59:
# 1181 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_19, ITEM_TM_SLUDGE_BOMB
# 1182 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_58

KecShop_Shiny_62:
# 1185 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_20, ITEM_TM_DUAL_WINGBEAT
# 1186 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_61

KecShop_Shiny_65:
# 1189 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_21, ITEM_TM_LEECH_LIFE
# 1190 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_64

KecShop_Shiny_68:
# 1193 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_22, ITEM_TM_PLAY_ROUGH
# 1194 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_67

KecShop_Shiny_71:
# 1197 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_23, ITEM_TM_SHADOW_BALL
# 1198 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_70

KecShop_Shiny_74:
# 1201 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_24, ITEM_TM_EARTH_POWER
# 1202 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_73

KecShop_Shiny_77:
# 1206 "data/maps/Hub1/scripts.pory"
	showmoneybox 18, 10
# 1207 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 1208 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 1209 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_NOBLE_ROAR, KecShop_Shiny_82
# 1220 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ROCK_SMASH, KecShop_Shiny_83
# 1231 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SWIFT, KecShop_Shiny_84
# 1242 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CUT, KecShop_Shiny_85
# 1253 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CHARM, KecShop_Shiny_86
# 1264 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_FAKE_TEARS, KecShop_Shiny_87
# 1275 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CONFUSE_RAY, KecShop_Shiny_88
# 1286 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_THUNDER_WAVE, KecShop_Shiny_89
# 1297 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_WILL_O_WISP, KecShop_Shiny_90
# 1308 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_TOXIC, KecShop_Shiny_91
# 1319 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SNARL, KecShop_Shiny_92
# 1330 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ELECTROWEB, KecShop_Shiny_93
# 1341 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_AURORA_BEAM, KecShop_Shiny_94
# 1352 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_PSYBEAM, KecShop_Shiny_95
# 1363 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_FLAMETHROWER, KecShop_Shiny_96
# 1374 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ICE_BEAM, KecShop_Shiny_97
# 1385 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_THUNDERBOLT, KecShop_Shiny_98
# 1396 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SCALD, KecShop_Shiny_99
# 1407 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_MEGA_DRAIN, KecShop_Shiny_100
# 1418 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SLUDGE_BOMB, KecShop_Shiny_101
# 1429 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_DUAL_WINGBEAT, KecShop_Shiny_102
# 1440 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_LEECH_LIFE, KecShop_Shiny_103
# 1451 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_PLAY_ROUGH, KecShop_Shiny_104
# 1462 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SHADOW_BALL, KecShop_Shiny_105
# 1473 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_EARTH_POWER, KecShop_Shiny_106
KecShop_Shiny_80:
# 1486 "data/maps/Hub1/scripts.pory"
	hidemoneybox
	goto KecShop_Shiny_76

KecShop_Shiny_82:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_107
# 1218 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_83:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_110
# 1229 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_84:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_113
# 1240 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_85:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_116
# 1251 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_86:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_119
# 1262 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_87:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_122
# 1273 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_88:
	checkmoney 300
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_125
# 1284 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_89:
	checkmoney 300
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_128
# 1295 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_90:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_131
# 1306 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_91:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_134
# 1317 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_92:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_137
# 1328 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_93:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_140
# 1339 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_94:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_143
# 1350 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_95:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_146
# 1361 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_96:
	checkmoney 1200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_149
# 1372 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_97:
	checkmoney 1200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_152
# 1383 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_98:
	checkmoney 1200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_155
# 1394 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_99:
	checkmoney 1000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_158
# 1405 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_100:
	checkmoney 800
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_161
# 1416 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_101:
	checkmoney 1000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_164
# 1427 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_102:
	checkmoney 900
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_167
# 1438 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_103:
	checkmoney 1000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_170
# 1449 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_104:
	checkmoney 1000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_173
# 1460 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_105:
	checkmoney 1000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_176
# 1471 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_106:
	checkmoney 1000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_179
# 1482 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_107:
# 1211 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 1212 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1213 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1214 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_NOBLE_ROAR
# 1215 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_110:
# 1222 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1223 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1224 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1225 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_ROCK_SMASH
# 1226 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_113:
# 1233 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1234 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1235 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1236 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SWIFT
# 1237 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_116:
# 1244 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1245 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1246 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1247 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CUT
# 1248 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_119:
# 1255 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 1256 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1257 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1258 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CHARM
# 1259 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_122:
# 1266 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 1267 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1268 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1269 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_FAKE_TEARS
# 1270 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_125:
# 1277 "data/maps/Hub1/scripts.pory"
	removemoney 300
# 1278 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1279 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1280 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CONFUSE_RAY
# 1281 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_128:
# 1288 "data/maps/Hub1/scripts.pory"
	removemoney 300
# 1289 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1290 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1291 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_THUNDER_WAVE
# 1292 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_131:
# 1299 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1300 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1301 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1302 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_WILL_O_WISP
# 1303 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_134:
# 1310 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1311 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1312 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1313 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_TOXIC
# 1314 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_137:
# 1321 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1322 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1323 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1324 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SNARL
# 1325 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_140:
# 1332 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1333 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1334 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1335 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_ELECTROWEB
# 1336 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_143:
# 1343 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1344 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1345 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1346 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_AURORA_BEAM
# 1347 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_146:
# 1354 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1355 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1356 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1357 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_PSYBEAM
# 1358 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_149:
# 1365 "data/maps/Hub1/scripts.pory"
	removemoney 1200
# 1366 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1367 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1368 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_FLAMETHROWER
# 1369 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_152:
# 1376 "data/maps/Hub1/scripts.pory"
	removemoney 1200
# 1377 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1378 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1379 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_ICE_BEAM
# 1380 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_155:
# 1387 "data/maps/Hub1/scripts.pory"
	removemoney 1200
# 1388 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1389 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1390 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 1391 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_158:
# 1398 "data/maps/Hub1/scripts.pory"
	removemoney 1000
# 1399 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1400 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1401 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SCALD
# 1402 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_161:
# 1409 "data/maps/Hub1/scripts.pory"
	removemoney 800
# 1410 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1411 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1412 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_MEGA_DRAIN
# 1413 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_164:
# 1420 "data/maps/Hub1/scripts.pory"
	removemoney 1000
# 1421 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1422 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1423 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SLUDGE_BOMB
# 1424 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_167:
# 1431 "data/maps/Hub1/scripts.pory"
	removemoney 900
# 1432 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1433 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1434 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_DUAL_WINGBEAT
# 1435 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_170:
# 1442 "data/maps/Hub1/scripts.pory"
	removemoney 1000
# 1443 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1444 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1445 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_LEECH_LIFE
# 1446 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_173:
# 1453 "data/maps/Hub1/scripts.pory"
	removemoney 1000
# 1454 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1455 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1456 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_PLAY_ROUGH
# 1457 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_176:
# 1464 "data/maps/Hub1/scripts.pory"
	removemoney 1000
# 1465 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1466 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1467 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SHADOW_BALL
# 1468 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_179:
# 1475 "data/maps/Hub1/scripts.pory"
	removemoney 1000
# 1476 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1477 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1478 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_EARTH_POWER
# 1479 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80


Hub_Event_Script_Kecleon::
# 1496 "data/maps/Hub1/scripts.pory"
	lockall
# 1497 "data/maps/Hub1/scripts.pory"
	faceplayer
# 1498 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1499 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_0
# 1500 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED, Hub_Event_Script_Kecleon_2
Hub_Event_Script_Kecleon_1:
# 1505 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_LUM_BERRY_UNLOCKED, Hub_Event_Script_Kecleon_5
Hub_Event_Script_Kecleon_4:
# 1510 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SERIOUS_MINT_UNLOCKED, Hub_Event_Script_Kecleon_8
Hub_Event_Script_Kecleon_7:
# 1515 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_IV_BOTTLE_CAPS_UNLOCKED, Hub_Event_Script_Kecleon_11
Hub_Event_Script_Kecleon_10:
# 1520 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_IV_GOLD_BOTTLE_CAPS_UNLOCKED, Hub_Event_Script_Kecleon_14
Hub_Event_Script_Kecleon_13:
# 1525 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_POCKET_BIRCH_BAG_UNLOCKED, Hub_Event_Script_Kecleon_17
Hub_Event_Script_Kecleon_16:
# 1531 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Kecleon_20
# 1621 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_13
# 1622 "data/maps/Hub1/scripts.pory"
	waitmessage
# 1623 "data/maps/Hub1/scripts.pory"
	releaseall
Hub_Event_Script_Kecleon_19:
# 1625 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
# 1626 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Kecleon_2:
# 1501 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_4, ITEM_RARE_CANDY
# 1502 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_5:
# 1506 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_1, ITEM_LUM_BERRY
# 1507 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_4

Hub_Event_Script_Kecleon_8:
# 1511 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_2, ITEM_SERIOUS_MINT
# 1512 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_7

Hub_Event_Script_Kecleon_11:
# 1516 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_3, ITEM_HP_BOTTLE_CAP
# 1517 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_10

Hub_Event_Script_Kecleon_14:
# 1521 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_4, ITEM_HP_GOLD_BOTTLE_CAP
# 1522 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_13

Hub_Event_Script_Kecleon_17:
# 1526 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_5, ITEM_POCKET_BIRCH_BAG
# 1527 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_16

Hub_Event_Script_Kecleon_20:
# 1532 "data/maps/Hub1/scripts.pory"
	showcoinsbox 21, 11
# 1533 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 1534 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 1535 "data/maps/Hub1/scripts.pory"
	case ITEM_LUM_BERRY, Hub_Event_Script_Kecleon_24
# 1549 "data/maps/Hub1/scripts.pory"
	case ITEM_SERIOUS_MINT, Hub_Event_Script_Kecleon_25
# 1563 "data/maps/Hub1/scripts.pory"
	case ITEM_RARE_CANDY, Hub_Event_Script_Kecleon_26
# 1577 "data/maps/Hub1/scripts.pory"
	case ITEM_HP_BOTTLE_CAP, Hub_Event_Script_Kecleon_27
# 1591 "data/maps/Hub1/scripts.pory"
	case ITEM_HP_GOLD_BOTTLE_CAP, Hub_Event_Script_Kecleon_28
# 1605 "data/maps/Hub1/scripts.pory"
	case ITEM_POCKET_BIRCH_BAG, Hub_Event_Script_Kecleon_29
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_24:
# 1536 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_LUM_BERRY_UNLOCKED, Hub_Event_Script_Kecleon_30
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_25:
# 1550 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SERIOUS_MINT_UNLOCKED, Hub_Event_Script_Kecleon_32
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_26:
# 1564 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED, Hub_Event_Script_Kecleon_34
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_27:
# 1578 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_IV_BOTTLE_CAPS_UNLOCKED, Hub_Event_Script_Kecleon_36
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_28:
# 1592 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_IV_GOLD_BOTTLE_CAPS_UNLOCKED, Hub_Event_Script_Kecleon_38
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_29:
# 1606 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_POCKET_BIRCH_BAG_UNLOCKED, Hub_Event_Script_Kecleon_40
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_30:
# 1537 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1538 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Kecleon_42
# 1546 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_32:
# 1551 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1552 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_45
# 1560 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_34:
# 1565 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1566 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_48
# 1574 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_36:
# 1579 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1580 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_51
# 1588 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_38:
# 1593 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1594 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_54
# 1602 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_40:
# 1607 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1608 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_57
# 1616 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_42:
# 1539 "data/maps/Hub1/scripts.pory"
	setflag FLAG_LUM_BERRY_UNLOCKED
# 1540 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 1541 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1542 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1543 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_6
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_45:
# 1553 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SERIOUS_MINT_UNLOCKED
# 1554 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1555 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1556 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1557 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_48:
# 1567 "data/maps/Hub1/scripts.pory"
	setflag FLAG_RARE_CANDY_UNLOCKED
# 1568 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1569 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1570 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1571 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_9
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_51:
# 1581 "data/maps/Hub1/scripts.pory"
	setflag FLAG_IV_BOTTLE_CAPS_UNLOCKED
# 1582 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1583 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1584 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1585 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_10
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_54:
# 1595 "data/maps/Hub1/scripts.pory"
	setflag FLAG_IV_GOLD_BOTTLE_CAPS_UNLOCKED
# 1596 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1597 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1598 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1599 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_11
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_57:
# 1609 "data/maps/Hub1/scripts.pory"
	setflag FLAG_POCKET_BIRCH_BAG_UNLOCKED
# 1610 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1611 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1612 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1613 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_12
	goto Hub_Event_Script_Kecleon_19


Hub_Event_Script_Shiny_Kecleon::
# 1631 "data/maps/Hub1/scripts.pory"
	lockall
# 1632 "data/maps/Hub1/scripts.pory"
	faceplayer
# 1633 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1634 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_0
# 1635 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_NOBLE_ROAR_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_2
Hub_Event_Script_Shiny_Kecleon_1:
# 1639 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CHARM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_5
Hub_Event_Script_Shiny_Kecleon_4:
# 1643 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_FAKE_TEARS_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_8
Hub_Event_Script_Shiny_Kecleon_7:
# 1647 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CONFUSE_RAY_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_11
Hub_Event_Script_Shiny_Kecleon_10:
# 1651 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_THUNDER_WAVE_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_14
Hub_Event_Script_Shiny_Kecleon_13:
# 1655 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_WILL_O_WISP_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_17
Hub_Event_Script_Shiny_Kecleon_16:
# 1659 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_TOXIC_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_20
Hub_Event_Script_Shiny_Kecleon_19:
# 1663 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ROCK_SMASH_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_23
Hub_Event_Script_Shiny_Kecleon_22:
# 1667 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SNARL_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_26
Hub_Event_Script_Shiny_Kecleon_25:
# 1671 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ELECTROWEB_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_29
Hub_Event_Script_Shiny_Kecleon_28:
# 1675 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_AURORA_BEAM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_32
Hub_Event_Script_Shiny_Kecleon_31:
# 1679 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_PSYBEAM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_35
Hub_Event_Script_Shiny_Kecleon_34:
# 1683 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_MEGA_DRAIN_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_38
Hub_Event_Script_Shiny_Kecleon_37:
# 1687 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_FLAMETHROWER_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_41
Hub_Event_Script_Shiny_Kecleon_40:
# 1691 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ICE_BEAM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_44
Hub_Event_Script_Shiny_Kecleon_43:
# 1695 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_THUNDERBOLT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_47
Hub_Event_Script_Shiny_Kecleon_46:
# 1699 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SCALD_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_50
Hub_Event_Script_Shiny_Kecleon_49:
# 1703 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SLUDGE_BOMB_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_53
Hub_Event_Script_Shiny_Kecleon_52:
# 1707 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_DUAL_WINGBEAT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_56
Hub_Event_Script_Shiny_Kecleon_55:
# 1711 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_LEECH_LIFE_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_59
Hub_Event_Script_Shiny_Kecleon_58:
# 1715 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_PLAY_ROUGH_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_62
Hub_Event_Script_Shiny_Kecleon_61:
# 1719 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SHADOW_BALL_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_65
Hub_Event_Script_Shiny_Kecleon_64:
# 1723 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_EARTH_POWER_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_68
Hub_Event_Script_Shiny_Kecleon_67:
# 1729 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Shiny_Kecleon_71
# 2102 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_46
# 2103 "data/maps/Hub1/scripts.pory"
	waitmessage
# 2104 "data/maps/Hub1/scripts.pory"
	releaseall
Hub_Event_Script_Shiny_Kecleon_70:
# 2106 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
# 2107 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Shiny_Kecleon_2:
# 1636 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_1, ITEM_TM_NOBLE_ROAR
# 1637 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_1

Hub_Event_Script_Shiny_Kecleon_5:
# 1640 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_2, ITEM_TM_CHARM
# 1641 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_4

Hub_Event_Script_Shiny_Kecleon_8:
# 1644 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_3, ITEM_TM_FAKE_TEARS
# 1645 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_7

Hub_Event_Script_Shiny_Kecleon_11:
# 1648 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_4, ITEM_TM_CONFUSE_RAY
# 1649 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_10

Hub_Event_Script_Shiny_Kecleon_14:
# 1652 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_5, ITEM_TM_THUNDER_WAVE
# 1653 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_13

Hub_Event_Script_Shiny_Kecleon_17:
# 1656 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_6, ITEM_TM_WILL_O_WISP
# 1657 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_16

Hub_Event_Script_Shiny_Kecleon_20:
# 1660 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_7, ITEM_TM_TOXIC
# 1661 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_19

Hub_Event_Script_Shiny_Kecleon_23:
# 1664 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_8, ITEM_TM_ROCK_SMASH
# 1665 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_22

Hub_Event_Script_Shiny_Kecleon_26:
# 1668 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_9, ITEM_TM_SNARL
# 1669 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_25

Hub_Event_Script_Shiny_Kecleon_29:
# 1672 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_10, ITEM_TM_ELECTROWEB
# 1673 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_28

Hub_Event_Script_Shiny_Kecleon_32:
# 1676 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_11, ITEM_TM_AURORA_BEAM
# 1677 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_35:
# 1680 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_12, ITEM_TM_PSYBEAM
# 1681 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_34

Hub_Event_Script_Shiny_Kecleon_38:
# 1684 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_13, ITEM_TM_MEGA_DRAIN
# 1685 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_37

Hub_Event_Script_Shiny_Kecleon_41:
# 1688 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_14, ITEM_TM_FLAMETHROWER
# 1689 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_40

Hub_Event_Script_Shiny_Kecleon_44:
# 1692 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_15, ITEM_TM_ICE_BEAM
# 1693 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_43

Hub_Event_Script_Shiny_Kecleon_47:
# 1696 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_16, ITEM_TM_THUNDERBOLT
# 1697 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_46

Hub_Event_Script_Shiny_Kecleon_50:
# 1700 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_14, ITEM_TM_SCALD
# 1701 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_49

Hub_Event_Script_Shiny_Kecleon_53:
# 1704 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_15, ITEM_TM_SLUDGE_BOMB
# 1705 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_52

Hub_Event_Script_Shiny_Kecleon_56:
# 1708 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_16, ITEM_TM_DUAL_WINGBEAT
# 1709 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_55

Hub_Event_Script_Shiny_Kecleon_59:
# 1712 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_17, ITEM_TM_LEECH_LIFE
# 1713 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_58

Hub_Event_Script_Shiny_Kecleon_62:
# 1716 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_18, ITEM_TM_PLAY_ROUGH
# 1717 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_61

Hub_Event_Script_Shiny_Kecleon_65:
# 1720 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_19, ITEM_TM_SHADOW_BALL
# 1721 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_64

Hub_Event_Script_Shiny_Kecleon_68:
# 1724 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_20, ITEM_TM_EARTH_POWER
# 1725 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_67

Hub_Event_Script_Shiny_Kecleon_71:
# 1730 "data/maps/Hub1/scripts.pory"
	showcoinsbox 21, 11
# 1731 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 1732 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 1733 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_NOBLE_ROAR, Hub_Event_Script_Shiny_Kecleon_75
# 1747 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ROCK_SMASH, Hub_Event_Script_Shiny_Kecleon_76
# 1761 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SWIFT, Hub_Event_Script_Shiny_Kecleon_77
# 1775 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CUT, Hub_Event_Script_Shiny_Kecleon_78
# 1789 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CHARM, Hub_Event_Script_Shiny_Kecleon_79
# 1803 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_FAKE_TEARS, Hub_Event_Script_Shiny_Kecleon_80
# 1817 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CONFUSE_RAY, Hub_Event_Script_Shiny_Kecleon_81
# 1831 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_THUNDER_WAVE, Hub_Event_Script_Shiny_Kecleon_82
# 1845 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_WILL_O_WISP, Hub_Event_Script_Shiny_Kecleon_83
# 1860 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_TOXIC, Hub_Event_Script_Shiny_Kecleon_84
# 1875 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SNARL, Hub_Event_Script_Shiny_Kecleon_85
# 1890 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ELECTROWEB, Hub_Event_Script_Shiny_Kecleon_86
# 1905 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_AURORA_BEAM, Hub_Event_Script_Shiny_Kecleon_87
# 1920 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_PSYBEAM, Hub_Event_Script_Shiny_Kecleon_88
# 1935 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_FLAMETHROWER, Hub_Event_Script_Shiny_Kecleon_89
# 1950 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ICE_BEAM, Hub_Event_Script_Shiny_Kecleon_90
# 1965 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_THUNDERBOLT, Hub_Event_Script_Shiny_Kecleon_91
# 1980 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SCALD, Hub_Event_Script_Shiny_Kecleon_92
# 1995 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_MEGA_DRAIN, Hub_Event_Script_Shiny_Kecleon_93
# 2010 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SLUDGE_BOMB, Hub_Event_Script_Shiny_Kecleon_94
# 2025 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_DUAL_WINGBEAT, Hub_Event_Script_Shiny_Kecleon_95
# 2040 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_LEECH_LIFE, Hub_Event_Script_Shiny_Kecleon_96
# 2055 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_PLAY_ROUGH, Hub_Event_Script_Shiny_Kecleon_97
# 2070 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SHADOW_BALL, Hub_Event_Script_Shiny_Kecleon_98
# 2085 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_EARTH_POWER, Hub_Event_Script_Shiny_Kecleon_99
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_75:
# 1734 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_NOBLE_ROAR_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_100
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_76:
# 1748 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ROCK_SMASH_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_102
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_77:
# 1762 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SWIFT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_104
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_78:
# 1776 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CUT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_106
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_79:
# 1790 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CHARM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_108
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_80:
# 1804 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_FAKE_TEARS_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_110
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_81:
# 1818 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CONFUSE_RAY_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_112
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_82:
# 1832 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_THUNDER_WAVE_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_114
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_83:
# 1846 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_WILL_O_WISP_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_116
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_84:
# 1861 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_TOXIC_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_118
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_85:
# 1876 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SNARL_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_120
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_86:
# 1891 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ELECTROWEB_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_122
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_87:
# 1906 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_AURORA_BEAM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_124
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_88:
# 1921 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_PSYBEAM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_126
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_89:
# 1936 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_FLAMETHROWER_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_128
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_90:
# 1951 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ICE_BEAM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_130
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_91:
# 1966 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_THUNDERBOLT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_132
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_92:
# 1981 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SCALD_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_134
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_93:
# 1996 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_MEGA_DRAIN_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_136
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_94:
# 2011 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SLUDGE_BOMB_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_138
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_95:
# 2026 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_DUAL_WINGBEAT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_140
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_96:
# 2041 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_LEECH_LIFE_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_142
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_97:
# 2056 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_PLAY_ROUGH_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_144
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_98:
# 2071 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SHADOW_BALL_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_146
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_99:
# 2086 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_EARTH_POWER_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_148
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_100:
# 1735 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1736 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 400
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_150
# 1744 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_102:
# 1749 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1750 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 900
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_153
# 1758 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_104:
# 1763 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1764 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_156
# 1772 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_106:
# 1777 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1778 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_159
# 1786 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_108:
# 1791 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1792 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 400
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_162
# 1800 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_110:
# 1805 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1806 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 400
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_165
# 1814 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_112:
# 1819 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1820 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 800
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_168
# 1828 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_114:
# 1833 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1834 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 800
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_171
# 1842 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_116:
# 1847 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1848 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 800
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_174
# 1857 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_118:
# 1862 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1863 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 800
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_177
# 1872 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_120:
# 1877 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1878 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 900
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_180
# 1887 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_122:
# 1892 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1893 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 900
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_183
# 1902 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_124:
# 1907 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1908 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 900
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_186
# 1917 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_126:
# 1922 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1923 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 900
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_189
# 1932 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_128:
# 1937 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1938 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_192
# 1947 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_130:
# 1952 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1953 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_195
# 1962 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_132:
# 1967 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1968 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_198
# 1977 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_134:
# 1982 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1983 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_201
# 1992 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_136:
# 1997 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1998 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_204
# 2007 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_138:
# 2012 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2013 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_207
# 2022 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_140:
# 2027 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2028 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_210
# 2037 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_142:
# 2042 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2043 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_213
# 2052 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_144:
# 2057 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2058 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_216
# 2067 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_146:
# 2072 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2073 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_219
# 2082 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_148:
# 2087 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2088 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_222
# 2097 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_150:
# 1737 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_NOBLE_ROAR_UNLOCKED
# 1738 "data/maps/Hub1/scripts.pory"
	removecoins 400
# 1739 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1740 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1741 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_21
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_153:
# 1751 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_ROCK_SMASH_UNLOCKED
# 1752 "data/maps/Hub1/scripts.pory"
	removecoins 900
# 1753 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1754 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1755 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_22
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_156:
# 1765 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_SWIFT_UNLOCKED
# 1766 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 1767 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1768 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1769 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_23
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_159:
# 1779 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CUT_UNLOCKED
# 1780 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 1781 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1782 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1783 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_24
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_162:
# 1793 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CHARM_UNLOCKED
# 1794 "data/maps/Hub1/scripts.pory"
	removecoins 400
# 1795 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1796 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1797 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_25
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_165:
# 1807 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_FAKE_TEARS_UNLOCKED
# 1808 "data/maps/Hub1/scripts.pory"
	removecoins 400
# 1809 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1810 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1811 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_26
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_168:
# 1821 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CONFUSE_RAY_UNLOCKED
# 1822 "data/maps/Hub1/scripts.pory"
	removecoins 800
# 1823 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1824 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1825 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_27
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_171:
# 1835 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_THUNDER_WAVE_UNLOCKED
# 1836 "data/maps/Hub1/scripts.pory"
	removecoins 800
# 1837 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1838 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1839 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_28
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_174:
# 1849 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_WILL_O_WISP_UNLOCKED
# 1850 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_WILL_O_WISP, 1
# 1851 "data/maps/Hub1/scripts.pory"
	removecoins 800
# 1852 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1853 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1854 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_29
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_177:
# 1864 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_TOXIC_UNLOCKED
# 1865 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_TOXIC, 1
# 1866 "data/maps/Hub1/scripts.pory"
	removecoins 800
# 1867 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1868 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1869 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_30
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_180:
# 1879 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_SNARL_UNLOCKED
# 1880 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SNARL, 1
# 1881 "data/maps/Hub1/scripts.pory"
	removecoins 900
# 1882 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1883 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1884 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_31
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_183:
# 1894 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_ELECTROWEB_UNLOCKED
# 1895 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_ELECTROWEB, 1
# 1896 "data/maps/Hub1/scripts.pory"
	removecoins 900
# 1897 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1898 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1899 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_32
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_186:
# 1909 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_AURORA_BEAM_UNLOCKED
# 1910 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_AURORA_BEAM, 1
# 1911 "data/maps/Hub1/scripts.pory"
	removecoins 900
# 1912 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1913 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1914 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_33
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_189:
# 1924 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_PSYBEAM_UNLOCKED
# 1925 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_PSYBEAM, 1
# 1926 "data/maps/Hub1/scripts.pory"
	removecoins 900
# 1927 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1928 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1929 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_34
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_192:
# 1939 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_FLAMETHROWER_UNLOCKED
# 1940 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_FLAMETHROWER, 1
# 1941 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 1942 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1943 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1944 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_35
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_195:
# 1954 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_ICE_BEAM_UNLOCKED
# 1955 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_ICE_BEAM, 1
# 1956 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 1957 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1958 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1959 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_36
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_198:
# 1969 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_THUNDERBOLT_UNLOCKED
# 1970 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT, 1
# 1971 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 1972 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1973 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1974 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_37
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_201:
# 1984 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_SCALD_UNLOCKED
# 1985 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SCALD, 1
# 1986 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 1987 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1988 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1989 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_38
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_204:
# 1999 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_MEGA_DRAIN_UNLOCKED
# 2000 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_MEGA_DRAIN, 1
# 2001 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2002 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2003 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2004 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_39
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_207:
# 2014 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_SLUDGE_BOMB_UNLOCKED
# 2015 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SLUDGE_BOMB, 1
# 2016 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2017 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2018 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2019 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_40
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_210:
# 2029 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_DUAL_WINGBEAT_UNLOCKED
# 2030 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_DUAL_WINGBEAT, 1
# 2031 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2032 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2033 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2034 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_41
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_213:
# 2044 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_LEECH_LIFE_UNLOCKED
# 2045 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_LEECH_LIFE, 1
# 2046 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2047 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2048 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2049 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_42
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_216:
# 2059 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_PLAY_ROUGH_UNLOCKED
# 2060 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_PLAY_ROUGH, 1
# 2061 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2062 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2063 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2064 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_43
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_219:
# 2074 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_SHADOW_BALL_UNLOCKED
# 2075 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SHADOW_BALL, 1
# 2076 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2077 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2078 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2079 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_44
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_222:
# 2089 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_EARTH_POWER_UNLOCKED
# 2090 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_EARTH_POWER, 1
# 2091 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2092 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2093 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2094 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_45
	goto Hub_Event_Script_Shiny_Kecleon_70


Hub_Event_Script_Diancie::
# 2112 "data/maps/Hub1/scripts.pory"
	lockall
# 2113 "data/maps/Hub1/scripts.pory"
	faceplayer
# 2114 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEGA_SHOP_UNLOCKED, Hub_Event_Script_Diancie_9
Hub_Event_Script_Diancie_7:
# 2122 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_MEGA_SHOP_UNLOCKED, Hub_Event_Script_Diancie_6
Hub_Event_Script_Diancie_5:
# 2136 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHARIZARDITE_X_UNLOCKED, Hub_Event_Script_Diancie_4
Hub_Event_Script_Diancie_1:
# 3574 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Diancie_2:
# 2115 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_0
	goto Hub_Event_Script_Diancie_1

Hub_Event_Script_Diancie_3:
# 2123 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_1
# 2127 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHARIZARDITE_X, 1
# 2128 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_VENUSAURITE_BUYABLE
# 2129 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHARIZARDITE_Y_BUYABLE
# 2130 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BLASTOISINITE_BUYABLE
# 2131 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHARIZARDITE_X_UNLOCKED
# 2132 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_2
	goto Hub_Event_Script_Diancie_1

Hub_Event_Script_Diancie_4:
# 2137 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 2138 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_VENUSAURITE_BUYABLE, Hub_Event_Script_Diancie_13
Hub_Event_Script_Diancie_12:
# 2142 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHARIZARDITE_Y_BUYABLE, Hub_Event_Script_Diancie_16
Hub_Event_Script_Diancie_15:
# 2146 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BLASTOISINITE_BUYABLE, Hub_Event_Script_Diancie_19
Hub_Event_Script_Diancie_18:
# 2150 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BEEDRILLITE_BUYABLE, Hub_Event_Script_Diancie_22
Hub_Event_Script_Diancie_21:
# 2154 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_PIDGEOTITE_BUYABLE, Hub_Event_Script_Diancie_25
Hub_Event_Script_Diancie_24:
# 2158 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ALAKAZITE_BUYABLE, Hub_Event_Script_Diancie_28
Hub_Event_Script_Diancie_27:
# 2162 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SLOWBRONITE_BUYABLE, Hub_Event_Script_Diancie_31
Hub_Event_Script_Diancie_30:
# 2166 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GENGARITE_BUYABLE, Hub_Event_Script_Diancie_34
Hub_Event_Script_Diancie_33:
# 2170 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_KANGASKHANITE_BUYABLE, Hub_Event_Script_Diancie_37
Hub_Event_Script_Diancie_36:
# 2174 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_PINSIRITE_BUYABLE, Hub_Event_Script_Diancie_40
Hub_Event_Script_Diancie_39:
# 2178 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GYARADOSITE_BUYABLE, Hub_Event_Script_Diancie_43
Hub_Event_Script_Diancie_42:
# 2182 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_AERODACTYLITE_BUYABLE, Hub_Event_Script_Diancie_46
Hub_Event_Script_Diancie_45:
# 2186 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_AMPHAROSITE_BUYABLE, Hub_Event_Script_Diancie_49
Hub_Event_Script_Diancie_48:
# 2190 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_STEELIXITE_BUYABLE, Hub_Event_Script_Diancie_52
Hub_Event_Script_Diancie_51:
# 2194 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCIZORITE_BUYABLE, Hub_Event_Script_Diancie_55
Hub_Event_Script_Diancie_54:
# 2198 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_HERACRONITE_BUYABLE, Hub_Event_Script_Diancie_58
Hub_Event_Script_Diancie_57:
# 2202 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_HOUNDOOMINITE_BUYABLE, Hub_Event_Script_Diancie_61
Hub_Event_Script_Diancie_60:
# 2206 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_TYRANITARITE_BUYABLE, Hub_Event_Script_Diancie_64
Hub_Event_Script_Diancie_63:
# 2210 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCEPTILITE_BUYABLE, Hub_Event_Script_Diancie_67
Hub_Event_Script_Diancie_66:
# 2214 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BLAZIKENITE_BUYABLE, Hub_Event_Script_Diancie_70
Hub_Event_Script_Diancie_69:
# 2218 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SWAMPERTITE_BUYABLE, Hub_Event_Script_Diancie_73
Hub_Event_Script_Diancie_72:
# 2222 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GARDEVOIRITE_BUYABLE, Hub_Event_Script_Diancie_76
Hub_Event_Script_Diancie_75:
# 2226 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SABLENITE_BUYABLE, Hub_Event_Script_Diancie_79
Hub_Event_Script_Diancie_78:
# 2230 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MAWILITE_BUYABLE, Hub_Event_Script_Diancie_82
Hub_Event_Script_Diancie_81:
# 2234 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_AGGRONITE_BUYABLE, Hub_Event_Script_Diancie_85
Hub_Event_Script_Diancie_84:
# 2238 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MEDICHAMITE_BUYABLE, Hub_Event_Script_Diancie_88
Hub_Event_Script_Diancie_87:
# 2242 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MANECTITE_BUYABLE, Hub_Event_Script_Diancie_91
Hub_Event_Script_Diancie_90:
# 2246 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SHARPEDONITE_BUYABLE, Hub_Event_Script_Diancie_94
Hub_Event_Script_Diancie_93:
# 2250 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CAMERUPTITE_BUYABLE, Hub_Event_Script_Diancie_97
Hub_Event_Script_Diancie_96:
# 2254 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ALTARIANITE_BUYABLE, Hub_Event_Script_Diancie_100
Hub_Event_Script_Diancie_99:
# 2258 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BANETTITE_BUYABLE, Hub_Event_Script_Diancie_103
Hub_Event_Script_Diancie_102:
# 2262 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ABSOLITE_BUYABLE, Hub_Event_Script_Diancie_106
Hub_Event_Script_Diancie_105:
# 2266 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GLALITITE_BUYABLE, Hub_Event_Script_Diancie_109
Hub_Event_Script_Diancie_108:
# 2270 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SALAMENCITE_BUYABLE, Hub_Event_Script_Diancie_112
Hub_Event_Script_Diancie_111:
# 2274 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_METAGROSSITE_BUYABLE, Hub_Event_Script_Diancie_115
Hub_Event_Script_Diancie_114:
# 2278 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_LOPUNNITE_BUYABLE, Hub_Event_Script_Diancie_118
Hub_Event_Script_Diancie_117:
# 2282 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GARCHOMPITE_BUYABLE, Hub_Event_Script_Diancie_121
Hub_Event_Script_Diancie_120:
# 2286 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_LUCARIONITE_BUYABLE, Hub_Event_Script_Diancie_124
Hub_Event_Script_Diancie_123:
# 2290 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ABOMASITE_BUYABLE, Hub_Event_Script_Diancie_127
Hub_Event_Script_Diancie_126:
# 2294 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GALLADITE_BUYABLE, Hub_Event_Script_Diancie_130
Hub_Event_Script_Diancie_129:
# 2298 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CLEFABLITE_BUYABLE, Hub_Event_Script_Diancie_133
Hub_Event_Script_Diancie_132:
# 2302 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_VICTREEBELITE_BUYABLE, Hub_Event_Script_Diancie_136
Hub_Event_Script_Diancie_135:
# 2306 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_STARMINITE_BUYABLE, Hub_Event_Script_Diancie_139
Hub_Event_Script_Diancie_138:
# 2310 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DRAGONINITE_BUYABLE, Hub_Event_Script_Diancie_142
Hub_Event_Script_Diancie_141:
# 2314 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MEGANIUMITE_BUYABLE, Hub_Event_Script_Diancie_145
Hub_Event_Script_Diancie_144:
# 2318 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_FERALIGITE_BUYABLE, Hub_Event_Script_Diancie_148
Hub_Event_Script_Diancie_147:
# 2322 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SKARMORITE_BUYABLE, Hub_Event_Script_Diancie_151
Hub_Event_Script_Diancie_150:
# 2326 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_FROSLASSITE_BUYABLE, Hub_Event_Script_Diancie_154
Hub_Event_Script_Diancie_153:
# 2330 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_EMBOARITE_BUYABLE, Hub_Event_Script_Diancie_157
Hub_Event_Script_Diancie_156:
# 2334 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_EXCADRITE_BUYABLE, Hub_Event_Script_Diancie_160
Hub_Event_Script_Diancie_159:
# 2338 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCOLIPITE_BUYABLE, Hub_Event_Script_Diancie_163
Hub_Event_Script_Diancie_162:
# 2342 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCRAFTINITE_BUYABLE, Hub_Event_Script_Diancie_166
Hub_Event_Script_Diancie_165:
# 2346 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_EELEKTROSSITE_BUYABLE, Hub_Event_Script_Diancie_169
Hub_Event_Script_Diancie_168:
# 2350 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHANDELURITE_BUYABLE, Hub_Event_Script_Diancie_172
Hub_Event_Script_Diancie_171:
# 2354 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHESNAUGHTITE_BUYABLE, Hub_Event_Script_Diancie_175
Hub_Event_Script_Diancie_174:
# 2358 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DELPHOXITE_BUYABLE, Hub_Event_Script_Diancie_178
Hub_Event_Script_Diancie_177:
# 2362 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GRENINJITE_BUYABLE, Hub_Event_Script_Diancie_181
Hub_Event_Script_Diancie_180:
# 2366 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_PYROARITE_BUYABLE, Hub_Event_Script_Diancie_184
Hub_Event_Script_Diancie_183:
# 2370 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MALAMARITE_BUYABLE, Hub_Event_Script_Diancie_187
Hub_Event_Script_Diancie_186:
# 2374 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BARBARACITE_BUYABLE, Hub_Event_Script_Diancie_190
Hub_Event_Script_Diancie_189:
# 2378 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DRAGALGITE_BUYABLE, Hub_Event_Script_Diancie_193
Hub_Event_Script_Diancie_192:
# 2382 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_HAWLUCHANITE_BUYABLE, Hub_Event_Script_Diancie_196
Hub_Event_Script_Diancie_195:
# 2386 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DRAMPANITE_BUYABLE, Hub_Event_Script_Diancie_199
Hub_Event_Script_Diancie_198:
# 2390 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_FALINKSITE_BUYABLE, Hub_Event_Script_Diancie_202
Hub_Event_Script_Diancie_201:
# 2394 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_RAICHUNITE_X_BUYABLE, Hub_Event_Script_Diancie_205
Hub_Event_Script_Diancie_204:
# 2398 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_RAICHUNITE_Y_BUYABLE, Hub_Event_Script_Diancie_208
Hub_Event_Script_Diancie_207:
# 2402 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHIMECHITE_BUYABLE, Hub_Event_Script_Diancie_211
Hub_Event_Script_Diancie_210:
# 2406 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_STARAPTITE_BUYABLE, Hub_Event_Script_Diancie_214
Hub_Event_Script_Diancie_213:
# 2410 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GOLURKITE_BUYABLE, Hub_Event_Script_Diancie_217
Hub_Event_Script_Diancie_216:
# 2414 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MEOWSTICITE_BUYABLE, Hub_Event_Script_Diancie_220
Hub_Event_Script_Diancie_219:
# 2418 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CRABOMINITE_BUYABLE, Hub_Event_Script_Diancie_223
Hub_Event_Script_Diancie_222:
# 2422 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GOLISOPITE_BUYABLE, Hub_Event_Script_Diancie_226
Hub_Event_Script_Diancie_225:
# 2426 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCOVILLAINITE_BUYABLE, Hub_Event_Script_Diancie_229
Hub_Event_Script_Diancie_228:
# 2430 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GLIMMORANITE_BUYABLE, Hub_Event_Script_Diancie_232
Hub_Event_Script_Diancie_231:
# 2434 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BAXCALIBRITE_BUYABLE, Hub_Event_Script_Diancie_235
Hub_Event_Script_Diancie_234:
# 2439 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Diancie_238
# 3564 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_155
# 3569 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3570 "data/maps/Hub1/scripts.pory"
	releaseall
Hub_Event_Script_Diancie_237:
# 3572 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
	goto Hub_Event_Script_Diancie_1

Hub_Event_Script_Diancie_6:
# 2122 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ITEM_CHARIZARDITE_X_UNLOCKED, Hub_Event_Script_Diancie_3
	goto Hub_Event_Script_Diancie_5

Hub_Event_Script_Diancie_9:
# 2114 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ITEM_CHARIZARDITE_X_UNLOCKED, Hub_Event_Script_Diancie_2
	goto Hub_Event_Script_Diancie_7

Hub_Event_Script_Diancie_13:
# 2139 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_3, ITEM_VENUSAURITE
# 2140 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_12

Hub_Event_Script_Diancie_16:
# 2143 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_4, ITEM_CHARIZARDITE_Y
# 2144 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_15

Hub_Event_Script_Diancie_19:
# 2147 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_5, ITEM_BLASTOISINITE
# 2148 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_18

Hub_Event_Script_Diancie_22:
# 2151 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_6, ITEM_BEEDRILLITE
# 2152 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_21

Hub_Event_Script_Diancie_25:
# 2155 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_7, ITEM_PIDGEOTITE
# 2156 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_24

Hub_Event_Script_Diancie_28:
# 2159 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_8, ITEM_ALAKAZITE
# 2160 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_27

Hub_Event_Script_Diancie_31:
# 2163 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_9, ITEM_SLOWBRONITE
# 2164 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_30

Hub_Event_Script_Diancie_34:
# 2167 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_10, ITEM_GENGARITE
# 2168 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_33

Hub_Event_Script_Diancie_37:
# 2171 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_11, ITEM_KANGASKHANITE
# 2172 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_36

Hub_Event_Script_Diancie_40:
# 2175 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_12, ITEM_PINSIRITE
# 2176 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_39

Hub_Event_Script_Diancie_43:
# 2179 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_13, ITEM_GYARADOSITE
# 2180 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_42

Hub_Event_Script_Diancie_46:
# 2183 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_14, ITEM_AERODACTYLITE
# 2184 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_45

Hub_Event_Script_Diancie_49:
# 2187 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_15, ITEM_AMPHAROSITE
# 2188 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_48

Hub_Event_Script_Diancie_52:
# 2191 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_16, ITEM_STEELIXITE
# 2192 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_51

Hub_Event_Script_Diancie_55:
# 2195 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_17, ITEM_SCIZORITE
# 2196 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_54

Hub_Event_Script_Diancie_58:
# 2199 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_18, ITEM_HERACRONITE
# 2200 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_57

Hub_Event_Script_Diancie_61:
# 2203 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_19, ITEM_HOUNDOOMINITE
# 2204 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_60

Hub_Event_Script_Diancie_64:
# 2207 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_20, ITEM_TYRANITARITE
# 2208 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_63

Hub_Event_Script_Diancie_67:
# 2211 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_21, ITEM_SCEPTILITE
# 2212 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_66

Hub_Event_Script_Diancie_70:
# 2215 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_22, ITEM_BLAZIKENITE
# 2216 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_69

Hub_Event_Script_Diancie_73:
# 2219 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_23, ITEM_SWAMPERTITE
# 2220 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_72

Hub_Event_Script_Diancie_76:
# 2223 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_24, ITEM_GARDEVOIRITE
# 2224 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_75

Hub_Event_Script_Diancie_79:
# 2227 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_25, ITEM_SABLENITE
# 2228 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_78

Hub_Event_Script_Diancie_82:
# 2231 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_26, ITEM_MAWILITE
# 2232 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_81

Hub_Event_Script_Diancie_85:
# 2235 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_27, ITEM_AGGRONITE
# 2236 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_84

Hub_Event_Script_Diancie_88:
# 2239 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_28, ITEM_MEDICHAMITE
# 2240 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_87

Hub_Event_Script_Diancie_91:
# 2243 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_29, ITEM_MANECTITE
# 2244 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_90

Hub_Event_Script_Diancie_94:
# 2247 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_30, ITEM_SHARPEDONITE
# 2248 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_93

Hub_Event_Script_Diancie_97:
# 2251 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_31, ITEM_CAMERUPTITE
# 2252 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_96

Hub_Event_Script_Diancie_100:
# 2255 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_32, ITEM_ALTARIANITE
# 2256 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_99

Hub_Event_Script_Diancie_103:
# 2259 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_33, ITEM_BANETTITE
# 2260 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_102

Hub_Event_Script_Diancie_106:
# 2263 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_34, ITEM_ABSOLITE
# 2264 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_105

Hub_Event_Script_Diancie_109:
# 2267 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_35, ITEM_GLALITITE
# 2268 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_108

Hub_Event_Script_Diancie_112:
# 2271 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_36, ITEM_SALAMENCITE
# 2272 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_111

Hub_Event_Script_Diancie_115:
# 2275 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_37, ITEM_METAGROSSITE
# 2276 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_114

Hub_Event_Script_Diancie_118:
# 2279 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_38, ITEM_LOPUNNITE
# 2280 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_117

Hub_Event_Script_Diancie_121:
# 2283 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_39, ITEM_GARCHOMPITE
# 2284 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_120

Hub_Event_Script_Diancie_124:
# 2287 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_40, ITEM_LUCARIONITE
# 2288 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_123

Hub_Event_Script_Diancie_127:
# 2291 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_41, ITEM_ABOMASITE
# 2292 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_126

Hub_Event_Script_Diancie_130:
# 2295 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_42, ITEM_GALLADITE
# 2296 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_129

Hub_Event_Script_Diancie_133:
# 2299 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_43, ITEM_CLEFABLITE
# 2300 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_132

Hub_Event_Script_Diancie_136:
# 2303 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_44, ITEM_VICTREEBELITE
# 2304 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_135

Hub_Event_Script_Diancie_139:
# 2307 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_45, ITEM_STARMINITE
# 2308 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_138

Hub_Event_Script_Diancie_142:
# 2311 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_46, ITEM_DRAGONINITE
# 2312 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_141

Hub_Event_Script_Diancie_145:
# 2315 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_47, ITEM_MEGANIUMITE
# 2316 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_144

Hub_Event_Script_Diancie_148:
# 2319 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_48, ITEM_FERALIGITE
# 2320 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_147

Hub_Event_Script_Diancie_151:
# 2323 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_49, ITEM_SKARMORITE
# 2324 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_150

Hub_Event_Script_Diancie_154:
# 2327 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_50, ITEM_FROSLASSITE
# 2328 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_153

Hub_Event_Script_Diancie_157:
# 2331 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_51, ITEM_EMBOARITE
# 2332 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_156

Hub_Event_Script_Diancie_160:
# 2335 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_52, ITEM_EXCADRITE
# 2336 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_159

Hub_Event_Script_Diancie_163:
# 2339 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_53, ITEM_SCOLIPITE
# 2340 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_162

Hub_Event_Script_Diancie_166:
# 2343 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_54, ITEM_SCRAFTINITE
# 2344 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_165

Hub_Event_Script_Diancie_169:
# 2347 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_55, ITEM_EELEKTROSSITE
# 2348 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_168

Hub_Event_Script_Diancie_172:
# 2351 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_56, ITEM_CHANDELURITE
# 2352 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_171

Hub_Event_Script_Diancie_175:
# 2355 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_57, ITEM_CHESNAUGHTITE
# 2356 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_174

Hub_Event_Script_Diancie_178:
# 2359 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_58, ITEM_DELPHOXITE
# 2360 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_177

Hub_Event_Script_Diancie_181:
# 2363 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_59, ITEM_GRENINJITE
# 2364 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_180

Hub_Event_Script_Diancie_184:
# 2367 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_60, ITEM_PYROARITE
# 2368 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_183

Hub_Event_Script_Diancie_187:
# 2371 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_61, ITEM_MALAMARITE
# 2372 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_186

Hub_Event_Script_Diancie_190:
# 2375 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_62, ITEM_BARBARACITE
# 2376 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_189

Hub_Event_Script_Diancie_193:
# 2379 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_63, ITEM_DRAGALGITE
# 2380 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_192

Hub_Event_Script_Diancie_196:
# 2383 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_64, ITEM_HAWLUCHANITE
# 2384 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_195

Hub_Event_Script_Diancie_199:
# 2387 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_65, ITEM_DRAMPANITE
# 2388 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_198

Hub_Event_Script_Diancie_202:
# 2391 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_66, ITEM_FALINKSITE
# 2392 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_201

Hub_Event_Script_Diancie_205:
# 2395 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_67, ITEM_RAICHUNITE_X
# 2396 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_204

Hub_Event_Script_Diancie_208:
# 2399 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_68, ITEM_RAICHUNITE_Y
# 2400 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_207

Hub_Event_Script_Diancie_211:
# 2403 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_69, ITEM_CHIMECHITE
# 2404 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_210

Hub_Event_Script_Diancie_214:
# 2407 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_70, ITEM_STARAPTITE
# 2408 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_213

Hub_Event_Script_Diancie_217:
# 2411 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_71, ITEM_GOLURKITE
# 2412 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_216

Hub_Event_Script_Diancie_220:
# 2415 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_72, ITEM_MEOWSTICITE
# 2416 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_219

Hub_Event_Script_Diancie_223:
# 2419 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_73, ITEM_CRABOMINITE
# 2420 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_222

Hub_Event_Script_Diancie_226:
# 2423 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_74, ITEM_GOLISOPITE
# 2424 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_225

Hub_Event_Script_Diancie_229:
# 2427 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_75, ITEM_SCOVILLAINITE
# 2428 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_228

Hub_Event_Script_Diancie_232:
# 2431 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_76, ITEM_GLIMMORANITE
# 2432 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_231

Hub_Event_Script_Diancie_235:
# 2435 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_77, ITEM_BAXCALIBRITE
# 2436 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_234

Hub_Event_Script_Diancie_238:
# 2441 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_NEW_MEGA_BUYABLE, Hub_Event_Script_Diancie_242
# 2448 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_79
Hub_Event_Script_Diancie_241:
# 2450 "data/maps/Hub1/scripts.pory"
	showcoinsbox 21, 11
# 2451 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 2452 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 2453 "data/maps/Hub1/scripts.pory"
	case ITEM_VENUSAURITE, Hub_Event_Script_Diancie_246
# 2468 "data/maps/Hub1/scripts.pory"
	case ITEM_CHARIZARDITE_Y, Hub_Event_Script_Diancie_247
# 2483 "data/maps/Hub1/scripts.pory"
	case ITEM_BLASTOISINITE, Hub_Event_Script_Diancie_248
# 2498 "data/maps/Hub1/scripts.pory"
	case ITEM_BEEDRILLITE, Hub_Event_Script_Diancie_249
# 2513 "data/maps/Hub1/scripts.pory"
	case ITEM_PIDGEOTITE, Hub_Event_Script_Diancie_250
# 2528 "data/maps/Hub1/scripts.pory"
	case ITEM_ALAKAZITE, Hub_Event_Script_Diancie_251
# 2543 "data/maps/Hub1/scripts.pory"
	case ITEM_SLOWBRONITE, Hub_Event_Script_Diancie_252
# 2558 "data/maps/Hub1/scripts.pory"
	case ITEM_GENGARITE, Hub_Event_Script_Diancie_253
# 2573 "data/maps/Hub1/scripts.pory"
	case ITEM_KANGASKHANITE, Hub_Event_Script_Diancie_254
# 2588 "data/maps/Hub1/scripts.pory"
	case ITEM_PINSIRITE, Hub_Event_Script_Diancie_255
# 2603 "data/maps/Hub1/scripts.pory"
	case ITEM_GYARADOSITE, Hub_Event_Script_Diancie_256
# 2618 "data/maps/Hub1/scripts.pory"
	case ITEM_AERODACTYLITE, Hub_Event_Script_Diancie_257
# 2633 "data/maps/Hub1/scripts.pory"
	case ITEM_AMPHAROSITE, Hub_Event_Script_Diancie_258
# 2648 "data/maps/Hub1/scripts.pory"
	case ITEM_STEELIXITE, Hub_Event_Script_Diancie_259
# 2663 "data/maps/Hub1/scripts.pory"
	case ITEM_SCIZORITE, Hub_Event_Script_Diancie_260
# 2678 "data/maps/Hub1/scripts.pory"
	case ITEM_HERACRONITE, Hub_Event_Script_Diancie_261
# 2693 "data/maps/Hub1/scripts.pory"
	case ITEM_HOUNDOOMINITE, Hub_Event_Script_Diancie_262
# 2708 "data/maps/Hub1/scripts.pory"
	case ITEM_TYRANITARITE, Hub_Event_Script_Diancie_263
# 2723 "data/maps/Hub1/scripts.pory"
	case ITEM_SCEPTILITE, Hub_Event_Script_Diancie_264
# 2738 "data/maps/Hub1/scripts.pory"
	case ITEM_BLAZIKENITE, Hub_Event_Script_Diancie_265
# 2753 "data/maps/Hub1/scripts.pory"
	case ITEM_SWAMPERTITE, Hub_Event_Script_Diancie_266
# 2768 "data/maps/Hub1/scripts.pory"
	case ITEM_GARDEVOIRITE, Hub_Event_Script_Diancie_267
# 2783 "data/maps/Hub1/scripts.pory"
	case ITEM_SABLENITE, Hub_Event_Script_Diancie_268
# 2798 "data/maps/Hub1/scripts.pory"
	case ITEM_MAWILITE, Hub_Event_Script_Diancie_269
# 2813 "data/maps/Hub1/scripts.pory"
	case ITEM_AGGRONITE, Hub_Event_Script_Diancie_270
# 2828 "data/maps/Hub1/scripts.pory"
	case ITEM_MEDICHAMITE, Hub_Event_Script_Diancie_271
# 2843 "data/maps/Hub1/scripts.pory"
	case ITEM_MANECTITE, Hub_Event_Script_Diancie_272
# 2858 "data/maps/Hub1/scripts.pory"
	case ITEM_SHARPEDONITE, Hub_Event_Script_Diancie_273
# 2873 "data/maps/Hub1/scripts.pory"
	case ITEM_CAMERUPTITE, Hub_Event_Script_Diancie_274
# 2888 "data/maps/Hub1/scripts.pory"
	case ITEM_ALTARIANITE, Hub_Event_Script_Diancie_275
# 2903 "data/maps/Hub1/scripts.pory"
	case ITEM_BANETTITE, Hub_Event_Script_Diancie_276
# 2918 "data/maps/Hub1/scripts.pory"
	case ITEM_ABSOLITE, Hub_Event_Script_Diancie_277
# 2933 "data/maps/Hub1/scripts.pory"
	case ITEM_GLALITITE, Hub_Event_Script_Diancie_278
# 2948 "data/maps/Hub1/scripts.pory"
	case ITEM_SALAMENCITE, Hub_Event_Script_Diancie_279
# 2963 "data/maps/Hub1/scripts.pory"
	case ITEM_LOPUNNITE, Hub_Event_Script_Diancie_280
# 2978 "data/maps/Hub1/scripts.pory"
	case ITEM_GARCHOMPITE, Hub_Event_Script_Diancie_281
# 2993 "data/maps/Hub1/scripts.pory"
	case ITEM_LUCARIONITE, Hub_Event_Script_Diancie_282
# 3008 "data/maps/Hub1/scripts.pory"
	case ITEM_ABOMASITE, Hub_Event_Script_Diancie_283
# 3023 "data/maps/Hub1/scripts.pory"
	case ITEM_GALLADITE, Hub_Event_Script_Diancie_284
# 3038 "data/maps/Hub1/scripts.pory"
	case ITEM_CLEFABLITE, Hub_Event_Script_Diancie_285
# 3053 "data/maps/Hub1/scripts.pory"
	case ITEM_VICTREEBELITE, Hub_Event_Script_Diancie_286
# 3068 "data/maps/Hub1/scripts.pory"
	case ITEM_STARMINITE, Hub_Event_Script_Diancie_287
# 3083 "data/maps/Hub1/scripts.pory"
	case ITEM_DRAGONINITE, Hub_Event_Script_Diancie_288
# 3098 "data/maps/Hub1/scripts.pory"
	case ITEM_MEGANIUMITE, Hub_Event_Script_Diancie_289
# 3113 "data/maps/Hub1/scripts.pory"
	case ITEM_FERALIGITE, Hub_Event_Script_Diancie_290
# 3128 "data/maps/Hub1/scripts.pory"
	case ITEM_SKARMORITE, Hub_Event_Script_Diancie_291
# 3143 "data/maps/Hub1/scripts.pory"
	case ITEM_FROSLASSITE, Hub_Event_Script_Diancie_292
# 3158 "data/maps/Hub1/scripts.pory"
	case ITEM_EMBOARITE, Hub_Event_Script_Diancie_293
# 3173 "data/maps/Hub1/scripts.pory"
	case ITEM_EXCADRITE, Hub_Event_Script_Diancie_294
# 3188 "data/maps/Hub1/scripts.pory"
	case ITEM_SCOLIPITE, Hub_Event_Script_Diancie_295
# 3203 "data/maps/Hub1/scripts.pory"
	case ITEM_SCRAFTINITE, Hub_Event_Script_Diancie_296
# 3218 "data/maps/Hub1/scripts.pory"
	case ITEM_EELEKTROSSITE, Hub_Event_Script_Diancie_297
# 3233 "data/maps/Hub1/scripts.pory"
	case ITEM_CHANDELURITE, Hub_Event_Script_Diancie_298
# 3248 "data/maps/Hub1/scripts.pory"
	case ITEM_CHESNAUGHTITE, Hub_Event_Script_Diancie_299
# 3263 "data/maps/Hub1/scripts.pory"
	case ITEM_DELPHOXITE, Hub_Event_Script_Diancie_300
# 3278 "data/maps/Hub1/scripts.pory"
	case ITEM_GRENINJITE, Hub_Event_Script_Diancie_301
# 3293 "data/maps/Hub1/scripts.pory"
	case ITEM_PYROARITE, Hub_Event_Script_Diancie_302
# 3308 "data/maps/Hub1/scripts.pory"
	case ITEM_MALAMARITE, Hub_Event_Script_Diancie_303
# 3323 "data/maps/Hub1/scripts.pory"
	case ITEM_BARBARACITE, Hub_Event_Script_Diancie_304
# 3338 "data/maps/Hub1/scripts.pory"
	case ITEM_DRAGALGITE, Hub_Event_Script_Diancie_305
# 3353 "data/maps/Hub1/scripts.pory"
	case ITEM_HAWLUCHANITE, Hub_Event_Script_Diancie_306
# 3368 "data/maps/Hub1/scripts.pory"
	case ITEM_DRAMPANITE, Hub_Event_Script_Diancie_307
# 3383 "data/maps/Hub1/scripts.pory"
	case ITEM_FALINKSITE, Hub_Event_Script_Diancie_308
# 3398 "data/maps/Hub1/scripts.pory"
	case ITEM_RAICHUNITE_X, Hub_Event_Script_Diancie_309
# 3413 "data/maps/Hub1/scripts.pory"
	case ITEM_RAICHUNITE_Y, Hub_Event_Script_Diancie_310
# 3428 "data/maps/Hub1/scripts.pory"
	case ITEM_CHIMECHITE, Hub_Event_Script_Diancie_311
# 3443 "data/maps/Hub1/scripts.pory"
	case ITEM_STARAPTITE, Hub_Event_Script_Diancie_312
# 3458 "data/maps/Hub1/scripts.pory"
	case ITEM_GOLURKITE, Hub_Event_Script_Diancie_313
# 3473 "data/maps/Hub1/scripts.pory"
	case ITEM_MEOWSTICITE, Hub_Event_Script_Diancie_314
# 3488 "data/maps/Hub1/scripts.pory"
	case ITEM_CRABOMINITE, Hub_Event_Script_Diancie_315
# 3503 "data/maps/Hub1/scripts.pory"
	case ITEM_GOLISOPITE, Hub_Event_Script_Diancie_316
# 3518 "data/maps/Hub1/scripts.pory"
	case ITEM_SCOVILLAINITE, Hub_Event_Script_Diancie_317
# 3533 "data/maps/Hub1/scripts.pory"
	case ITEM_GLIMMORANITE, Hub_Event_Script_Diancie_318
# 3548 "data/maps/Hub1/scripts.pory"
	case ITEM_BAXCALIBRITE, Hub_Event_Script_Diancie_319
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_242:
# 2442 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_78
# 2445 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_NEW_MEGA_BUYABLE
	goto Hub_Event_Script_Diancie_241

Hub_Event_Script_Diancie_246:
# 2454 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2455 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_320
# 2465 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_247:
# 2469 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2470 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_323
# 2480 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_248:
# 2484 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2485 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_326
# 2495 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_249:
# 2499 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2500 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_329
# 2510 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_250:
# 2514 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2515 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_332
# 2525 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_251:
# 2529 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2530 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_335
# 2540 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_252:
# 2544 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2545 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_338
# 2555 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_253:
# 2559 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2560 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_341
# 2570 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_254:
# 2574 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2575 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_344
# 2585 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_255:
# 2589 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2590 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_347
# 2600 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_256:
# 2604 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2605 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_350
# 2615 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_257:
# 2619 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2620 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_353
# 2630 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_258:
# 2634 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2635 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_356
# 2645 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_259:
# 2649 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2650 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_359
# 2660 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_260:
# 2664 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2665 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_362
# 2675 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_261:
# 2679 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2680 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_365
# 2690 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_262:
# 2694 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2695 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_368
# 2705 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_263:
# 2709 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2710 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_371
# 2720 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_264:
# 2724 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2725 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_374
# 2735 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_265:
# 2739 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2740 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_377
# 2750 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_266:
# 2754 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2755 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_380
# 2765 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_267:
# 2769 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2770 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_383
# 2780 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_268:
# 2784 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2785 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_386
# 2795 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_269:
# 2799 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2800 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_389
# 2810 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_270:
# 2814 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2815 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_392
# 2825 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_271:
# 2829 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2830 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_395
# 2840 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_272:
# 2844 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2845 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_398
# 2855 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_273:
# 2859 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2860 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_401
# 2870 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_274:
# 2874 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2875 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_404
# 2885 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_275:
# 2889 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2890 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_407
# 2900 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_276:
# 2904 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2905 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_410
# 2915 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_277:
# 2919 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2920 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_413
# 2930 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_278:
# 2934 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2935 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_416
# 2945 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_279:
# 2949 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2950 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_419
# 2960 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_280:
# 2964 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2965 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_422
# 2975 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_281:
# 2979 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2980 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_425
# 2990 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_282:
# 2994 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2995 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_428
# 3005 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_283:
# 3009 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3010 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_431
# 3020 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_284:
# 3024 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3025 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_434
# 3035 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_285:
# 3039 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3040 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_437
# 3050 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_286:
# 3054 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3055 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_440
# 3065 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_287:
# 3069 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3070 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_443
# 3080 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_288:
# 3084 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3085 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_446
# 3095 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_289:
# 3099 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3100 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_449
# 3110 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_290:
# 3114 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3115 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_452
# 3125 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_291:
# 3129 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3130 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_455
# 3140 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_292:
# 3144 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3145 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_458
# 3155 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_293:
# 3159 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3160 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_461
# 3170 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_294:
# 3174 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3175 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_464
# 3185 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_295:
# 3189 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3190 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_467
# 3200 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_296:
# 3204 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3205 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_470
# 3215 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_297:
# 3219 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3220 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_473
# 3230 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_298:
# 3234 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3235 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_476
# 3245 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_299:
# 3249 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3250 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_479
# 3260 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_300:
# 3264 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3265 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_482
# 3275 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_301:
# 3279 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3280 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_485
# 3290 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_302:
# 3294 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3295 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_488
# 3305 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_303:
# 3309 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3310 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_491
# 3320 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_304:
# 3324 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3325 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_494
# 3335 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_305:
# 3339 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3340 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_497
# 3350 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_306:
# 3354 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3355 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_500
# 3365 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_307:
# 3369 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3370 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_503
# 3380 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_308:
# 3384 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3385 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_506
# 3395 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_309:
# 3399 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3400 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_509
# 3410 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_310:
# 3414 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3415 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_512
# 3425 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_311:
# 3429 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3430 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_515
# 3440 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_312:
# 3444 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3445 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_518
# 3455 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_313:
# 3459 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3460 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_521
# 3470 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_314:
# 3474 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3475 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_524
# 3485 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_315:
# 3489 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3490 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_527
# 3500 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_316:
# 3504 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3505 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_530
# 3515 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_317:
# 3519 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3520 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_533
# 3530 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_318:
# 3534 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3535 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_536
# 3545 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_319:
# 3549 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3550 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_539
# 3560 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_320:
# 2456 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_VENUSAURITE_UNLOCKED
# 2457 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_VENUSAURITE_BUYABLE
# 2458 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_VENUSAURITE, 1
# 2459 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2460 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2461 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2462 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_80
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_323:
# 2471 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHARIZARDITE_Y_UNLOCKED
# 2472 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHARIZARDITE_Y_BUYABLE
# 2473 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHARIZARDITE_Y, 1
# 2474 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2475 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2476 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2477 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_82
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_326:
# 2486 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BLASTOISINITE_UNLOCKED
# 2487 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BLASTOISINITE_BUYABLE
# 2488 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BLASTOISINITE, 1
# 2489 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2490 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2491 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2492 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_83
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_329:
# 2501 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BEEDRILLITE_UNLOCKED
# 2502 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BEEDRILLITE_BUYABLE
# 2503 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BEEDRILLITE, 1
# 2504 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2505 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2506 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2507 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_84
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_332:
# 2516 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_PIDGEOTITE_UNLOCKED
# 2517 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_PIDGEOTITE_BUYABLE
# 2518 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_PIDGEOTITE, 1
# 2519 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2520 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2521 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2522 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_85
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_335:
# 2531 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ALAKAZITE_UNLOCKED
# 2532 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ALAKAZITE_BUYABLE
# 2533 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ALAKAZITE, 1
# 2534 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2535 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2536 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2537 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_86
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_338:
# 2546 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SLOWBRONITE_UNLOCKED
# 2547 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SLOWBRONITE_BUYABLE
# 2548 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SLOWBRONITE, 1
# 2549 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2550 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2551 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2552 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_87
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_341:
# 2561 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GENGARITE_UNLOCKED
# 2562 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GENGARITE_BUYABLE
# 2563 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GENGARITE, 1
# 2564 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2565 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2566 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2567 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_88
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_344:
# 2576 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_KANGASKHANITE_UNLOCKED
# 2577 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_KANGASKHANITE_BUYABLE
# 2578 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_KANGASKHANITE, 1
# 2579 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2580 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2581 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2582 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_89
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_347:
# 2591 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_PINSIRITE_UNLOCKED
# 2592 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_PINSIRITE_BUYABLE
# 2593 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_PINSIRITE, 1
# 2594 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2595 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2596 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2597 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_90
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_350:
# 2606 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GYARADOSITE_UNLOCKED
# 2607 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GYARADOSITE_BUYABLE
# 2608 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GYARADOSITE, 1
# 2609 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2610 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2611 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2612 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_91
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_353:
# 2621 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_AERODACTYLITE_UNLOCKED
# 2622 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_AERODACTYLITE_BUYABLE
# 2623 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_AERODACTYLITE, 1
# 2624 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2625 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2626 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2627 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_92
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_356:
# 2636 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_AMPHAROSITE_UNLOCKED
# 2637 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_AMPHAROSITE_BUYABLE
# 2638 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_AMPHAROSITE, 1
# 2639 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2640 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2641 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2642 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_93
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_359:
# 2651 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_STEELIXITE_UNLOCKED
# 2652 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_STEELIXITE_BUYABLE
# 2653 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_STEELIXITE, 1
# 2654 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2655 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2656 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2657 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_94
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_362:
# 2666 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCIZORITE_UNLOCKED
# 2667 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCIZORITE_BUYABLE
# 2668 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCIZORITE, 1
# 2669 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2670 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2671 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2672 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_95
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_365:
# 2681 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_HERACRONITE_UNLOCKED
# 2682 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_HERACRONITE_BUYABLE
# 2683 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_HERACRONITE, 1
# 2684 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2685 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2686 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2687 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_96
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_368:
# 2696 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_HOUNDOOMINITE_UNLOCKED
# 2697 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_HOUNDOOMINITE_BUYABLE
# 2698 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_HOUNDOOMINITE, 1
# 2699 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2700 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2701 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2702 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_97
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_371:
# 2711 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_TYRANITARITE_UNLOCKED
# 2712 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_TYRANITARITE_BUYABLE
# 2713 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TYRANITARITE, 1
# 2714 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2715 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2716 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2717 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_98
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_374:
# 2726 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCEPTILITE_UNLOCKED
# 2727 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCEPTILITE_BUYABLE
# 2728 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCEPTILITE, 1
# 2729 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2730 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2731 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2732 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_99
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_377:
# 2741 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BLAZIKENITE_UNLOCKED
# 2742 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BLAZIKENITE_BUYABLE
# 2743 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BLAZIKENITE, 1
# 2744 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2745 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2746 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2747 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_100
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_380:
# 2756 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SWAMPERTITE_UNLOCKED
# 2757 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SWAMPERTITE_BUYABLE
# 2758 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SWAMPERTITE, 1
# 2759 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2760 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2761 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2762 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_101
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_383:
# 2771 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GARDEVOIRITE_UNLOCKED
# 2772 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GARDEVOIRITE_BUYABLE
# 2773 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GARDEVOIRITE, 1
# 2774 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2775 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2776 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2777 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_102
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_386:
# 2786 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SABLENITE_UNLOCKED
# 2787 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SABLENITE_BUYABLE
# 2788 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SABLENITE, 1
# 2789 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2790 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2791 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2792 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_103
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_389:
# 2801 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MAWILITE_UNLOCKED
# 2802 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MAWILITE_BUYABLE
# 2803 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MAWILITE, 1
# 2804 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2805 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2806 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2807 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_104
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_392:
# 2816 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_AGGRONITE_UNLOCKED
# 2817 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_AGGRONITE_BUYABLE
# 2818 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_AGGRONITE, 1
# 2819 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2820 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2821 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2822 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_105
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_395:
# 2831 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MEDICHAMITE_UNLOCKED
# 2832 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MEDICHAMITE_BUYABLE
# 2833 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEDICHAMITE, 1
# 2834 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2835 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2836 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2837 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_106
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_398:
# 2846 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MANECTITE_UNLOCKED
# 2847 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MANECTITE_BUYABLE
# 2848 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MANECTITE, 1
# 2849 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2850 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2851 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2852 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_107
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_401:
# 2861 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SHARPEDONITE_UNLOCKED
# 2862 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SHARPEDONITE_BUYABLE
# 2863 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SHARPEDONITE, 1
# 2864 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2865 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2866 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2867 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_108
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_404:
# 2876 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CAMERUPTITE_UNLOCKED
# 2877 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CAMERUPTITE_BUYABLE
# 2878 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CAMERUPTITE, 1
# 2879 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2880 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2881 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2882 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_109
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_407:
# 2891 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ALTARIANITE_UNLOCKED
# 2892 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ALTARIANITE_BUYABLE
# 2893 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ALTARIANITE, 1
# 2894 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2895 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2896 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2897 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_110
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_410:
# 2906 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BANETTITE_UNLOCKED
# 2907 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BANETTITE_BUYABLE
# 2908 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BANETTITE, 1
# 2909 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2910 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2911 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2912 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_111
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_413:
# 2921 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ABSOLITE_UNLOCKED
# 2922 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ABSOLITE_BUYABLE
# 2923 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ABSOLITE, 1
# 2924 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2925 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2926 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2927 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_112
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_416:
# 2936 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GLALITITE_UNLOCKED
# 2937 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GLALITITE_BUYABLE
# 2938 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GLALITITE, 1
# 2939 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2940 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2941 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2942 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_113
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_419:
# 2951 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SALAMENCITE_UNLOCKED
# 2952 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SALAMENCITE_BUYABLE
# 2953 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SALAMENCITE, 1
# 2954 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2955 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2956 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2957 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_114
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_422:
# 2966 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_LOPUNNITE_UNLOCKED
# 2967 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_LOPUNNITE_BUYABLE
# 2968 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LOPUNNITE, 1
# 2969 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2970 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2971 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2972 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_115
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_425:
# 2981 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GARCHOMPITE_UNLOCKED
# 2982 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GARCHOMPITE_BUYABLE
# 2983 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GARCHOMPITE, 1
# 2984 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2985 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2986 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2987 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_116
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_428:
# 2996 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_LUCARIONITE_UNLOCKED
# 2997 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_LUCARIONITE_BUYABLE
# 2998 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUCARIONITE, 1
# 2999 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3000 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3001 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3002 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_117
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_431:
# 3011 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ABOMASITE_UNLOCKED
# 3012 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ABOMASITE_BUYABLE
# 3013 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ABOMASITE, 1
# 3014 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3015 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3016 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3017 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_118
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_434:
# 3026 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GALLADITE_UNLOCKED
# 3027 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GALLADITE_BUYABLE
# 3028 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GALLADITE, 1
# 3029 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3030 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3031 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3032 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_119
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_437:
# 3041 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CLEFABLITE_UNLOCKED
# 3042 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CLEFABLITE_BUYABLE
# 3043 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CLEFABLITE, 1
# 3044 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3045 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3046 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3047 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_120
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_440:
# 3056 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_VICTREEBELITE_UNLOCKED
# 3057 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_VICTREEBELITE_BUYABLE
# 3058 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_VICTREEBELITE, 1
# 3059 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3060 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3061 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3062 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_121
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_443:
# 3071 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_STARMINITE_UNLOCKED
# 3072 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_STARMINITE_BUYABLE
# 3073 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_STARMINITE, 1
# 3074 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3075 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3076 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3077 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_122
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_446:
# 3086 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DRAGONINITE_UNLOCKED
# 3087 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DRAGONINITE_BUYABLE
# 3088 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DRAGONINITE, 1
# 3089 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3090 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3091 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3092 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_123
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_449:
# 3101 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MEGANIUMITE_UNLOCKED
# 3102 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MEGANIUMITE_BUYABLE
# 3103 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEGANIUMITE, 1
# 3104 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3105 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3106 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3107 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_124
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_452:
# 3116 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_FERALIGITE_UNLOCKED
# 3117 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_FERALIGITE_BUYABLE
# 3118 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_FERALIGITE, 1
# 3119 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3120 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3121 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3122 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_125
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_455:
# 3131 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SKARMORITE_UNLOCKED
# 3132 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SKARMORITE_BUYABLE
# 3133 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SKARMORITE, 1
# 3134 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3135 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3136 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3137 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_126
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_458:
# 3146 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_FROSLASSITE_UNLOCKED
# 3147 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_FROSLASSITE_BUYABLE
# 3148 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_FROSLASSITE, 1
# 3149 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3150 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3151 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3152 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_127
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_461:
# 3161 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_EMBOARITE_UNLOCKED
# 3162 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_EMBOARITE_BUYABLE
# 3163 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_EMBOARITE, 1
# 3164 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3165 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3166 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3167 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_128
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_464:
# 3176 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_EXCADRITE_UNLOCKED
# 3177 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_EXCADRITE_BUYABLE
# 3178 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_EXCADRITE, 1
# 3179 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3180 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3181 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3182 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_129
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_467:
# 3191 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCOLIPITE_UNLOCKED
# 3192 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCOLIPITE_BUYABLE
# 3193 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCOLIPITE, 1
# 3194 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3195 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3196 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3197 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_130
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_470:
# 3206 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCRAFTINITE_UNLOCKED
# 3207 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCRAFTINITE_BUYABLE
# 3208 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCRAFTINITE, 1
# 3209 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3210 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3211 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3212 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_131
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_473:
# 3221 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_EELEKTROSSITE_UNLOCKED
# 3222 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_EELEKTROSSITE_BUYABLE
# 3223 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_EELEKTROSSITE, 1
# 3224 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3225 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3226 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3227 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_132
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_476:
# 3236 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHANDELURITE_UNLOCKED
# 3237 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHANDELURITE_BUYABLE
# 3238 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHANDELURITE, 1
# 3239 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3240 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3241 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3242 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_133
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_479:
# 3251 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHESNAUGHTITE_UNLOCKED
# 3252 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHESNAUGHTITE_BUYABLE
# 3253 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHESNAUGHTITE, 1
# 3254 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3255 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3256 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3257 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_134
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_482:
# 3266 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DELPHOXITE_UNLOCKED
# 3267 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DELPHOXITE_BUYABLE
# 3268 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DELPHOXITE, 1
# 3269 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3270 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3271 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3272 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_135
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_485:
# 3281 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GRENINJITE_UNLOCKED
# 3282 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GRENINJITE_BUYABLE
# 3283 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GRENINJITE, 1
# 3284 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3285 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3286 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3287 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_136
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_488:
# 3296 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_PYROARITE_UNLOCKED
# 3297 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_PYROARITE_BUYABLE
# 3298 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_PYROARITE, 1
# 3299 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3300 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3301 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3302 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_137
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_491:
# 3311 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MALAMARITE_UNLOCKED
# 3312 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MALAMARITE_BUYABLE
# 3313 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MALAMARITE, 1
# 3314 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3315 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3316 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3317 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_138
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_494:
# 3326 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BARBARACITE_UNLOCKED
# 3327 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BARBARACITE_BUYABLE
# 3328 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BARBARACITE, 1
# 3329 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3330 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3331 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3332 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_139
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_497:
# 3341 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DRAGALGITE_UNLOCKED
# 3342 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DRAGALGITE_BUYABLE
# 3343 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DRAGALGITE, 1
# 3344 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3345 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3346 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3347 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_140
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_500:
# 3356 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_HAWLUCHANITE_UNLOCKED
# 3357 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_HAWLUCHANITE_BUYABLE
# 3358 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_HAWLUCHANITE, 1
# 3359 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3360 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3361 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3362 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_141
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_503:
# 3371 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DRAMPANITE_UNLOCKED
# 3372 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DRAMPANITE_BUYABLE
# 3373 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DRAMPANITE, 1
# 3374 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3375 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3376 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3377 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_142
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_506:
# 3386 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_FALINKSITE_UNLOCKED
# 3387 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_FALINKSITE_BUYABLE
# 3388 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_FALINKSITE, 1
# 3389 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3390 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3391 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3392 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_143
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_509:
# 3401 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_RAICHUNITE_X_UNLOCKED
# 3402 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_RAICHUNITE_X_BUYABLE
# 3403 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RAICHUNITE_X, 1
# 3404 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3405 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3406 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3407 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_144
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_512:
# 3416 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_RAICHUNITE_Y_UNLOCKED
# 3417 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_RAICHUNITE_Y_BUYABLE
# 3418 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RAICHUNITE_Y, 1
# 3419 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3420 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3421 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3422 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_145
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_515:
# 3431 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHIMECHITE_UNLOCKED
# 3432 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHIMECHITE_BUYABLE
# 3433 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHIMECHITE, 1
# 3434 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3435 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3436 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3437 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_146
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_518:
# 3446 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_STARAPTITE_UNLOCKED
# 3447 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_STARAPTITE_BUYABLE
# 3448 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_STARAPTITE, 1
# 3449 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3450 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3451 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3452 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_147
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_521:
# 3461 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GOLURKITE_UNLOCKED
# 3462 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GOLURKITE_BUYABLE
# 3463 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GOLURKITE, 1
# 3464 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3465 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3466 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3467 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_148
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_524:
# 3476 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MEOWSTICITE_UNLOCKED
# 3477 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MEOWSTICITE_BUYABLE
# 3478 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEOWSTICITE, 1
# 3479 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3480 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3481 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3482 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_149
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_527:
# 3491 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CRABOMINITE_UNLOCKED
# 3492 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CRABOMINITE_BUYABLE
# 3493 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CRABOMINITE, 1
# 3494 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3495 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3496 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3497 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_150
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_530:
# 3506 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GOLISOPITE_UNLOCKED
# 3507 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GOLISOPITE_BUYABLE
# 3508 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GOLISOPITE, 1
# 3509 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3510 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3511 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3512 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_151
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_533:
# 3521 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCOVILLAINITE_UNLOCKED
# 3522 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCOVILLAINITE_BUYABLE
# 3523 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCOVILLAINITE, 1
# 3524 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3525 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3526 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3527 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_152
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_536:
# 3536 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GLIMMORANITE_UNLOCKED
# 3537 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GLIMMORANITE_BUYABLE
# 3538 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GLIMMORANITE, 1
# 3539 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3540 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3541 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3542 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_153
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_539:
# 3551 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BAXCALIBRITE_UNLOCKED
# 3552 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BAXCALIBRITE_BUYABLE
# 3553 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BAXCALIBRITE, 1
# 3554 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3555 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3556 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3557 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_154
	goto Hub_Event_Script_Diancie_237


Hub_Event_Script_Marowak::
# 3578 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3579 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Marowak_Text_0
# 3580 "data/maps/Hub1/scripts.pory"
	closemessage
# 3581 "data/maps/Hub1/scripts.pory"
	applymovement 1, Hub_Event_Script_Marowak_Movement_0
	return


Hub_Event_Script_Chimecho::
# 3591 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_0, type = MSGBOX_YESNO
# 3592 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Chimecho_1
# 3631 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_18
# 3632 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Chimecho_1:
# 3593 "data/maps/Hub1/scripts.pory"
	closemessage
# 3594 "data/maps/Hub1/scripts.pory"
backtocharmslist:
# 3595 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_1, ITEM_SHINY_STARTER_CHARM
# 3596 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_2, ITEM_LUMP_SUM_CHARM
# 3597 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_3, ITEM_BERRY_PACK_CHARM
# 3598 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TINTED_CHARM_STARTER_UNLOCKED, Hub_Event_Script_Chimecho_5
Hub_Event_Script_Chimecho_4:
# 3599 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_NORMAL_CHARM_STARTER_UNLOCKED, Hub_Event_Script_Chimecho_8
Hub_Event_Script_Chimecho_7:
# 3600 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_MINTY_CHARM_STARTER_UNLOCKED, Hub_Event_Script_Chimecho_11
Hub_Event_Script_Chimecho_10:
# 3601 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_BRUXISH_FLOSS_CHARM_UNLOCKED, Hub_Event_Script_Chimecho_14
Hub_Event_Script_Chimecho_13:
# 3602 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_UNOWN_BUDDY_CHARM_UNLOCKED, Hub_Event_Script_Chimecho_17
Hub_Event_Script_Chimecho_16:
# 3604 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 8, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 3605 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 3606 "data/maps/Hub1/scripts.pory"
	case MULTI_B_PRESSED, Hub_Event_Script_Chimecho_21
# 3610 "data/maps/Hub1/scripts.pory"
	case ITEM_SHINY_STARTER_CHARM, Hub_Event_Script_Chimecho_22
# 3612 "data/maps/Hub1/scripts.pory"
	case ITEM_LUMP_SUM_CHARM, Hub_Event_Script_Chimecho_23
# 3614 "data/maps/Hub1/scripts.pory"
	case ITEM_BERRY_PACK_CHARM, Hub_Event_Script_Chimecho_24
# 3616 "data/maps/Hub1/scripts.pory"
	case ITEM_TINTED_CHARM, Hub_Event_Script_Chimecho_25
# 3618 "data/maps/Hub1/scripts.pory"
	case ITEM_NORMAL_CHARM, Hub_Event_Script_Chimecho_26
# 3620 "data/maps/Hub1/scripts.pory"
	case ITEM_MINTY_CHARM, Hub_Event_Script_Chimecho_27
# 3622 "data/maps/Hub1/scripts.pory"
	case ITEM_BRUXISH_FLOSS_CHARM, Hub_Event_Script_Chimecho_28
# 3624 "data/maps/Hub1/scripts.pory"
	case ITEM_UNOWN_BUDDY_CHARM, Hub_Event_Script_Chimecho_29
Hub_Event_Script_Chimecho_19:
# 3627 "data/maps/Hub1/scripts.pory"
	closemessage
# 3628 "data/maps/Hub1/scripts.pory"
	goto backtocharmslist
	return

Hub_Event_Script_Chimecho_5:
# 3598 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_4, ITEM_TINTED_CHARM
	goto Hub_Event_Script_Chimecho_4

Hub_Event_Script_Chimecho_8:
# 3599 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_5, ITEM_NORMAL_CHARM
	goto Hub_Event_Script_Chimecho_7

Hub_Event_Script_Chimecho_11:
# 3600 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_6, ITEM_MINTY_CHARM
	goto Hub_Event_Script_Chimecho_10

Hub_Event_Script_Chimecho_14:
# 3601 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_7, ITEM_BRUXISH_FLOSS_CHARM
	goto Hub_Event_Script_Chimecho_13

Hub_Event_Script_Chimecho_17:
# 3602 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_8, ITEM_UNOWN_BUDDY_CHARM
	goto Hub_Event_Script_Chimecho_16

Hub_Event_Script_Chimecho_21:
# 3607 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_9
# 3608 "data/maps/Hub1/scripts.pory"
	releaseall
	end

Hub_Event_Script_Chimecho_22:
# 3611 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_10
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_23:
# 3613 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_11
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_24:
# 3615 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_12
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_25:
# 3617 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_13
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_26:
# 3619 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_14
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_27:
# 3621 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_15
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_28:
# 3623 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_16
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_29:
# 3625 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_17
	goto Hub_Event_Script_Chimecho_19


GiveStarterCharm::
# 3638 "data/maps/Hub1/scripts.pory"
	special BufferStarterCharms
# 3639 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_SHINY_STARTER_CHARM
	goto_if_eq GiveStarterCharm_2
# 3639 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_SHINY_STARTER_CHARM
	goto_if_eq GiveStarterCharm_2
# 3639 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_SHINY_STARTER_CHARM
	goto_if_eq GiveStarterCharm_2
GiveStarterCharm_1:
# 3642 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_LUMP_SUM_CHARM
	goto_if_eq GiveStarterCharm_9
# 3642 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_LUMP_SUM_CHARM
	goto_if_eq GiveStarterCharm_9
# 3642 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_LUMP_SUM_CHARM
	goto_if_eq GiveStarterCharm_9
GiveStarterCharm_8:
# 3645 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_BERRY_PACK_CHARM
	goto_if_eq GiveStarterCharm_16
# 3645 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_BERRY_PACK_CHARM
	goto_if_eq GiveStarterCharm_16
# 3645 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_BERRY_PACK_CHARM
	goto_if_eq GiveStarterCharm_16
GiveStarterCharm_15:
# 3648 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_TINTED_CHARM
	goto_if_eq GiveStarterCharm_23
# 3648 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_TINTED_CHARM
	goto_if_eq GiveStarterCharm_23
# 3648 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_TINTED_CHARM
	goto_if_eq GiveStarterCharm_23
GiveStarterCharm_22:
# 3651 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_NORMAL_CHARM
	goto_if_eq GiveStarterCharm_30
# 3651 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_NORMAL_CHARM
	goto_if_eq GiveStarterCharm_30
# 3651 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_NORMAL_CHARM
	goto_if_eq GiveStarterCharm_30
GiveStarterCharm_29:
# 3654 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_MINTY_CHARM
	goto_if_eq GiveStarterCharm_37
# 3654 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_MINTY_CHARM
	goto_if_eq GiveStarterCharm_37
# 3654 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_MINTY_CHARM
	goto_if_eq GiveStarterCharm_37
GiveStarterCharm_36:
# 3657 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_BRUXISH_FLOSS_CHARM
	goto_if_eq GiveStarterCharm_44
# 3657 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_BRUXISH_FLOSS_CHARM
	goto_if_eq GiveStarterCharm_44
# 3657 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_BRUXISH_FLOSS_CHARM
	goto_if_eq GiveStarterCharm_44
GiveStarterCharm_43:
# 3660 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_UNOWN_BUDDY_CHARM
	goto_if_eq GiveStarterCharm_51
# 3660 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_UNOWN_BUDDY_CHARM
	goto_if_eq GiveStarterCharm_51
# 3660 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_UNOWN_BUDDY_CHARM
	goto_if_eq GiveStarterCharm_51
GiveStarterCharm_50:
# 3663 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, TRUE, 3, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 3664 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 3665 "data/maps/Hub1/scripts.pory"
	case ITEM_SHINY_STARTER_CHARM, GiveStarterCharm_59
# 3673 "data/maps/Hub1/scripts.pory"
	case ITEM_LUMP_SUM_CHARM, GiveStarterCharm_60
# 3677 "data/maps/Hub1/scripts.pory"
	case ITEM_BERRY_PACK_CHARM, GiveStarterCharm_61
# 3683 "data/maps/Hub1/scripts.pory"
	case ITEM_TINTED_CHARM, GiveStarterCharm_62
# 3685 "data/maps/Hub1/scripts.pory"
	case ITEM_NORMAL_CHARM, GiveStarterCharm_63
# 3687 "data/maps/Hub1/scripts.pory"
	case ITEM_MINTY_CHARM, GiveStarterCharm_64
# 3689 "data/maps/Hub1/scripts.pory"
	case ITEM_BRUXISH_FLOSS_CHARM, GiveStarterCharm_65
# 3691 "data/maps/Hub1/scripts.pory"
	case ITEM_UNOWN_BUDDY_CHARM, GiveStarterCharm_66
GiveStarterCharm_57:
# 3696 "data/maps/Hub1/scripts.pory"
	msgbox GiveStarterCharm_Text_0
# 3697 "data/maps/Hub1/scripts.pory"
	waitmessage
	return

GiveStarterCharm_2:
# 3640 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_1, ITEM_SHINY_STARTER_CHARM
	goto GiveStarterCharm_1

GiveStarterCharm_9:
# 3643 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_2, ITEM_LUMP_SUM_CHARM
	goto GiveStarterCharm_8

GiveStarterCharm_16:
# 3646 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_3, ITEM_BERRY_PACK_CHARM
	goto GiveStarterCharm_15

GiveStarterCharm_23:
# 3649 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_4, ITEM_TINTED_CHARM
	goto GiveStarterCharm_22

GiveStarterCharm_30:
# 3652 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_5, ITEM_NORMAL_CHARM
	goto GiveStarterCharm_29

GiveStarterCharm_37:
# 3655 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_6, ITEM_MINTY_CHARM
	goto GiveStarterCharm_36

GiveStarterCharm_44:
# 3658 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_7, ITEM_BRUXISH_FLOSS_CHARM
	goto GiveStarterCharm_43

GiveStarterCharm_51:
# 3661 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_8, ITEM_UNOWN_BUDDY_CHARM
	goto GiveStarterCharm_50

GiveStarterCharm_59:
# 3666 "data/maps/Hub1/scripts.pory"
	setflag FLAG_NEXT_GIVE_MON_SHINY
# 3667 "data/maps/Hub1/scripts.pory"
	special ZeroPlayerPartyMons
# 3668 "data/maps/Hub1/scripts.pory"
	special GiveSavedStarter
# 3669 "data/maps/Hub1/scripts.pory"
	special UpdatePlayerSprite
# 3670 "data/maps/Hub1/scripts.pory"
	special UpdateTransformedPlayerPalette
# 3671 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SHINY_STARTER_CHARM, 1
# 3672 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_LEVEL_UP
	goto GiveStarterCharm_57

GiveStarterCharm_60:
# 3674 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUMP_SUM_CHARM, 1
# 3675 "data/maps/Hub1/scripts.pory"
	addmoney 1500
# 3676 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
	goto GiveStarterCharm_57

GiveStarterCharm_61:
# 3678 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BERRY_PACK_CHARM, 1
# 3679 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 1
# 3680 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
# 3681 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BERRY_JUICE, 1
# 3682 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto GiveStarterCharm_57

GiveStarterCharm_62:
# 3684 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TINTED_CHARM, 1
	goto GiveStarterCharm_57

GiveStarterCharm_63:
# 3686 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_NORMAL_CHARM, 1
	goto GiveStarterCharm_57

GiveStarterCharm_64:
# 3688 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MINTY_CHARM, 1
	goto GiveStarterCharm_57

GiveStarterCharm_65:
# 3690 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BRUXISH_FLOSS_CHARM, 1
	goto GiveStarterCharm_57

GiveStarterCharm_66:
# 3692 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_UNOWN_BUDDY_CHARM, 1
# 3693 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_UNOWN, 14
	goto GiveStarterCharm_57


Hub_Event_Script_Golem::
# 3703 "data/maps/Hub1/scripts.pory"
	lockall
# 3704 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3705 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEGA_SHOP_UNLOCKED, Hub_Event_Script_Golem_2
# 3708 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Golem_Text_1
Hub_Event_Script_Golem_1:
# 3710 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3711 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Golem_2:
# 3706 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Golem_Text_0
	goto Hub_Event_Script_Golem_1


Hub_Event_Script_Togedemaru::
# 3715 "data/maps/Hub1/scripts.pory"
	lockall
# 3716 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3717 "data/maps/Hub1/scripts.pory"
	random 2
# 3718 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 3719 "data/maps/Hub1/scripts.pory"
	case 0, Hub_Event_Script_Togedemaru_3
# 3721 "data/maps/Hub1/scripts.pory"
	case 1, Hub_Event_Script_Togedemaru_4
Hub_Event_Script_Togedemaru_1:
# 3725 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3726 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Togedemaru_3:
# 3720 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Togedemaru_Text_0
	goto Hub_Event_Script_Togedemaru_1

Hub_Event_Script_Togedemaru_4:
# 3722 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Togedemaru_Text_1
	goto Hub_Event_Script_Togedemaru_1


Hub_Event_Script_Klang::
# 3730 "data/maps/Hub1/scripts.pory"
	lockall
# 3731 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3732 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Klang_Text_0
# 3733 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3734 "data/maps/Hub1/scripts.pory"
	releaseall
	return


Hub_Event_Script_Bruxish::
# 3738 "data/maps/Hub1/scripts.pory"
	lockall
# 3739 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3740 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_BRUXISH_FLOSS_CHARM_UNLOCKED, Hub_Event_Script_Bruxish_2
# 3747 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Bruxish_Text_2
# 3748 "data/maps/Hub1/scripts.pory"
	waitmessage
Hub_Event_Script_Bruxish_1:
# 3750 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Bruxish_2:
# 3741 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Bruxish_Text_0
# 3742 "data/maps/Hub1/scripts.pory"
	setflag FLAG_BRUXISH_FLOSS_CHARM_UNLOCKED
# 3743 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_EVOLVED
# 3744 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Bruxish_Text_1
# 3745 "data/maps/Hub1/scripts.pory"
	waitmessage
	goto Hub_Event_Script_Bruxish_1


Hub_Event_Script_Simisage::
# 3754 "data/maps/Hub1/scripts.pory"
	lockall
# 3755 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3756 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Simisage_Text_0
# 3757 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3758 "data/maps/Hub1/scripts.pory"
	releaseall
	return


Hub_Event_Script_Woobat::
# 3762 "data/maps/Hub1/scripts.pory"
	lockall
# 3763 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3764 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Woobat_Text_0
# 3765 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3766 "data/maps/Hub1/scripts.pory"
	releaseall
	return


Hub_Event_Script_Unown::
# 3771 "data/maps/Hub1/scripts.pory"
	lockall
# 3772 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3773 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_UNOWN_BUDDY_CHARM_UNLOCKED, Hub_Event_Script_Unown_2
# 3780 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Unown_Text_2
# 3781 "data/maps/Hub1/scripts.pory"
	waitmessage
Hub_Event_Script_Unown_1:
# 3783 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Unown_2:
# 3774 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Unown_Text_0
# 3775 "data/maps/Hub1/scripts.pory"
	setflag FLAG_UNOWN_BUDDY_CHARM_UNLOCKED
# 3776 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Unown_Text_1
# 3777 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_EVOLVED
# 3778 "data/maps/Hub1/scripts.pory"
	waitmessage
	goto Hub_Event_Script_Unown_1


Hub_Event_Script_Smoliv::
# 3787 "data/maps/Hub1/scripts.pory"
	lockall
# 3788 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3789 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Smoliv_Text_0
# 3790 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3791 "data/maps/Hub1/scripts.pory"
	releaseall
	return


# 421 "data/maps/Hub1/scripts.pory"
Hub_Event_Script_Birch_Movement_0:
# 422 "data/maps/Hub1/scripts.pory"
	walk_down
# 423 "data/maps/Hub1/scripts.pory"
	face_left
	step_end

# 430 "data/maps/Hub1/scripts.pory"
Hub_Event_Script_Birch_Movement_1:
# 431 "data/maps/Hub1/scripts.pory"
	walk_up
# 432 "data/maps/Hub1/scripts.pory"
	walk_left
# 433 "data/maps/Hub1/scripts.pory"
	face_right
	step_end

# 436 "data/maps/Hub1/scripts.pory"
Hub_Event_Script_Birch_Movement_2:
# 437 "data/maps/Hub1/scripts.pory"
	walk_up
# 437 "data/maps/Hub1/scripts.pory"
	walk_up
# 437 "data/maps/Hub1/scripts.pory"
	walk_up
# 437 "data/maps/Hub1/scripts.pory"
	walk_up
	step_end

# 3581 "data/maps/Hub1/scripts.pory"
Hub_Event_Script_Marowak_Movement_0:
# 3582 "data/maps/Hub1/scripts.pory"
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
	.string "Welcome to Pokemon Path!\pTo start a run, talk to\nProfessor Birch up ahead.\pNow choose a pokemon to\nstart your adventure with.$"

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

Hub_Event_Script_Birch_Text_0:
# 407 "data/maps/Hub1/scripts.pory"
	.string "What would you like to do?$"

Hub_Event_Script_Birch_Text_1:
# 408 "data/maps/Hub1/scripts.pory"
	.string "Start a run$"

Hub_Event_Script_Birch_Text_2:
# 408 "data/maps/Hub1/scripts.pory"
	.string "Change the difficulty$"

Hub_Event_Script_Birch_Text_3:
# 412 "data/maps/Hub1/scripts.pory"
	.string "Let me know when you're ready to start\n"
	.string "a run!$"

Hub_Event_Script_Birch_Text_4:
# 416 "data/maps/Hub1/scripts.pory"
	.string "Would you like to start a run?$"

Hub_Event_Script_Birch_Text_5:
# 419 "data/maps/Hub1/scripts.pory"
	.string "Alright then!$"

Hub_Event_Script_Birch_Text_6:
# 426 "data/maps/Hub1/scripts.pory"
	.string "Don't forget to take a starter charm\n"
	.string "with you!$"

Hub_Event_Script_Birch_Text_7:
# 428 "data/maps/Hub1/scripts.pory"
	.string "Now off you go! Good luck!$"

Hub_Event_Script_Birch_Text_8:
# 448 "data/maps/Hub1/scripts.pory"
	.string "Current difficulty: {STR_VAR_1}\nNote the modifiers stack at each level.$"

Hub_Event_Script_Birch_Text_9:
# 449 "data/maps/Hub1/scripts.pory"
	.string "0 - No modifiers$"

Hub_Event_Script_Birch_Text_10:
# 450 "data/maps/Hub1/scripts.pory"
	.string "1 - +1 Enemies Level$"

Hub_Event_Script_Birch_Text_11:
# 451 "data/maps/Hub1/scripts.pory"
	.string "2 - -1 Birch Bag each path$"

Hub_Event_Script_Birch_Text_12:
# 452 "data/maps/Hub1/scripts.pory"
	.string "3 - Less Money$"

Hub_Event_Script_Birch_Text_13:
# 453 "data/maps/Hub1/scripts.pory"
	.string "4 - Enemies crit more$"

Hub_Event_Script_Birch_Text_14:
# 454 "data/maps/Hub1/scripts.pory"
	.string "5 - +1 Enemies Level$"

Hub_Event_Script_Birch_Text_15:
# 455 "data/maps/Hub1/scripts.pory"
	.string "6 - -1 Birch Bag each path$"

Hub_Event_Script_Birch_Text_16:
# 460 "data/maps/Hub1/scripts.pory"
	.string "Beat all 4 paths to unlock the next\n"
	.string "difficulty!$"

Hub_Event_Script_Birch_Text_17:
# 471 "data/maps/Hub1/scripts.pory"
	.string "Difficulty set to {STR_VAR_1}$"

Hub_Event_Script_Miltank_Text_0:
# 483 "data/maps/Hub1/scripts.pory"
	.string "Bulbasaur (500C)$"

Hub_Event_Script_Miltank_Text_1:
# 484 "data/maps/Hub1/scripts.pory"
	.string "Charmander (500C)$"

Hub_Event_Script_Miltank_Text_2:
# 485 "data/maps/Hub1/scripts.pory"
	.string "Squirtle (500C)$"

Hub_Event_Script_Miltank_Text_3:
# 486 "data/maps/Hub1/scripts.pory"
	.string "Chikorita (500C)$"

Hub_Event_Script_Miltank_Text_4:
# 487 "data/maps/Hub1/scripts.pory"
	.string "Cyndaquil (500C)$"

Hub_Event_Script_Miltank_Text_5:
# 488 "data/maps/Hub1/scripts.pory"
	.string "Totodile (500C)$"

Hub_Event_Script_Miltank_Text_6:
# 489 "data/maps/Hub1/scripts.pory"
	.string "Treecko (500C)$"

Hub_Event_Script_Miltank_Text_7:
# 490 "data/maps/Hub1/scripts.pory"
	.string "Torchic (500C)$"

Hub_Event_Script_Miltank_Text_8:
# 491 "data/maps/Hub1/scripts.pory"
	.string "Mudkip (500C)$"

Hub_Event_Script_Miltank_Text_9:
# 492 "data/maps/Hub1/scripts.pory"
	.string "Turtwig (500C)$"

Hub_Event_Script_Miltank_Text_10:
# 493 "data/maps/Hub1/scripts.pory"
	.string "Chimchar (500C)$"

Hub_Event_Script_Miltank_Text_11:
# 494 "data/maps/Hub1/scripts.pory"
	.string "Piplup (500C)$"

Hub_Event_Script_Miltank_Text_12:
# 495 "data/maps/Hub1/scripts.pory"
	.string "Snivy (500C)$"

Hub_Event_Script_Miltank_Text_13:
# 496 "data/maps/Hub1/scripts.pory"
	.string "Tepig (500C)$"

Hub_Event_Script_Miltank_Text_14:
# 497 "data/maps/Hub1/scripts.pory"
	.string "Oshawott (500C)$"

Hub_Event_Script_Miltank_Text_15:
# 498 "data/maps/Hub1/scripts.pory"
	.string "Chespin (500C)$"

Hub_Event_Script_Miltank_Text_16:
# 499 "data/maps/Hub1/scripts.pory"
	.string "Fennekin (500C)$"

Hub_Event_Script_Miltank_Text_17:
# 500 "data/maps/Hub1/scripts.pory"
	.string "Froakie (500C)$"

Hub_Event_Script_Miltank_Text_18:
# 501 "data/maps/Hub1/scripts.pory"
	.string "Rowlet (500C)$"

Hub_Event_Script_Miltank_Text_19:
# 502 "data/maps/Hub1/scripts.pory"
	.string "Litten (500C)$"

Hub_Event_Script_Miltank_Text_20:
# 503 "data/maps/Hub1/scripts.pory"
	.string "Popplio (500C)$"

Hub_Event_Script_Miltank_Text_21:
# 504 "data/maps/Hub1/scripts.pory"
	.string "Grookey (500C)$"

Hub_Event_Script_Miltank_Text_22:
# 505 "data/maps/Hub1/scripts.pory"
	.string "Scorbunny (500C)$"

Hub_Event_Script_Miltank_Text_23:
# 506 "data/maps/Hub1/scripts.pory"
	.string "Sobble (500C)$"

Hub_Event_Script_Miltank_Text_24:
# 507 "data/maps/Hub1/scripts.pory"
	.string "Sprigatito (500C)$"

Hub_Event_Script_Miltank_Text_25:
# 508 "data/maps/Hub1/scripts.pory"
	.string "Fuecoco (500C)$"

Hub_Event_Script_Miltank_Text_26:
# 509 "data/maps/Hub1/scripts.pory"
	.string "Quaxly (500C)$"

Hub_Event_Script_Miltank_Text_27:
# 513 "data/maps/Hub1/scripts.pory"
	.string "Would you like to adopt a pokemon?$"

Hub_Event_Script_Miltank_Text_28:
# 518 "data/maps/Hub1/scripts.pory"
	.string "Come back anytime!$"

Hub_Event_Script_Miltank_Text_29:
# 528 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Bulbasaur as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_30:
# 531 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry. You don't have the coins to\nadopt that pokemon.$"

Hub_Event_Script_Miltank_Text_31:
# 540 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Charmander as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_32:
# 552 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Squirtle as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_33:
# 564 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chikorita as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_34:
# 576 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Cyndaquil as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_35:
# 588 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Totodile as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_36:
# 600 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Treecko as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_37:
# 612 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Torchic as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_38:
# 624 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Mudkip as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_39:
# 636 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Turtwig as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_40:
# 648 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chimchar as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_41:
# 660 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Piplup as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_42:
# 672 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Snivy as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_43:
# 684 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Tepig as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_44:
# 696 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Oshawott as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_45:
# 708 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chespin as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_46:
# 720 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Fennekin as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_47:
# 732 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Froakie as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_48:
# 744 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Rowlet as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_49:
# 756 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Litten as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_50:
# 768 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Popplio as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_51:
# 780 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Grookey as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_52:
# 792 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Scorbunny as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_53:
# 804 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Sobble as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_54:
# 816 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Sprigatito as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_55:
# 828 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Fuecoco as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_56:
# 840 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Quaxly as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_57:
# 849 "data/maps/Hub1/scripts.pory"
	.string "You have no more starters left\nto adopt!$"

Hub_Event_Script_Chansey_Text_0:
# 890 "data/maps/Hub1/scripts.pory"
	.string "Would you like to change your starter?$"

Hub_Event_Script_Chansey_Text_1:
# 903 "data/maps/Hub1/scripts.pory"
	.string "There you go!$"

Hub_Event_Script_Chansey_Text_2:
# 911 "data/maps/Hub1/scripts.pory"
	.string "You don't have any starter pokemon yet.\pPlease consider adopting some pokemon\nfrom my friend Miltank to the right.$"

KecShop_Sign_Text_0:
# 918 "data/maps/Hub1/scripts.pory"
	.string "Welcome to the Kecleon Brother's shop!$"

KecShop_Text_0:
# 926 "data/maps/Hub1/scripts.pory"
	.string "Oran Berry (¥200)$"

KecShop_Text_1:
# 927 "data/maps/Hub1/scripts.pory"
	.string "Mem. Mushroom (¥200)$"

KecShop_Text_2:
# 930 "data/maps/Hub1/scripts.pory"
	.string "Lum Berry (¥200)$"

KecShop_Text_3:
# 934 "data/maps/Hub1/scripts.pory"
	.string "Serious Mint (¥500)$"

KecShop_Text_4:
# 938 "data/maps/Hub1/scripts.pory"
	.string "Rare Candy (¥2000)$"

KecShop_Text_5:
# 942 "data/maps/Hub1/scripts.pory"
	.string "Pkt Birch Bag (¥2000)$"

KecShop_Text_6:
# 946 "data/maps/Hub1/scripts.pory"
	.string "HP Bottle Cap (¥300)$"

KecShop_Text_7:
# 950 "data/maps/Hub1/scripts.pory"
	.string "Attack Bottle Cap (¥300)$"

KecShop_Text_8:
# 954 "data/maps/Hub1/scripts.pory"
	.string "Defense Bottle Cap (¥300)$"

KecShop_Text_9:
# 958 "data/maps/Hub1/scripts.pory"
	.string "Speed Bottle Cap (¥300)$"

KecShop_Text_10:
# 962 "data/maps/Hub1/scripts.pory"
	.string "Sp. Atk Bottle Cap (¥300)$"

KecShop_Text_11:
# 966 "data/maps/Hub1/scripts.pory"
	.string "Sp. Def Bottle Cap (¥300)$"

KecShop_Text_12:
# 970 "data/maps/Hub1/scripts.pory"
	.string "HP Gold Bottle Cap (¥700)$"

KecShop_Text_13:
# 974 "data/maps/Hub1/scripts.pory"
	.string "Attack Gold Bottle Cap (¥700)$"

KecShop_Text_14:
# 978 "data/maps/Hub1/scripts.pory"
	.string "Defense Gold Bottle Cap (¥700)$"

KecShop_Text_15:
# 982 "data/maps/Hub1/scripts.pory"
	.string "Speed Gold Bottle Cap (¥700)$"

KecShop_Text_16:
# 986 "data/maps/Hub1/scripts.pory"
	.string "Sp. Atk Gold Bottle Cap (¥700)$"

KecShop_Text_17:
# 990 "data/maps/Hub1/scripts.pory"
	.string "Sp. Def Gold Bottle Cap (¥700)$"

KecShop_Text_18:
# 1005 "data/maps/Hub1/scripts.pory"
	.string "Thank you for your purchase!$"

KecShop_Text_19:
# 1008 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry. You don't have the money to\nbuy that, kec.$"

KecShop_Text_20:
# 1094 "data/maps/Hub1/scripts.pory"
	.string "Sorry, but there's nothing for you\nto buy right now, Kec.$"

KecShop_Shiny_Text_0:
# 1105 "data/maps/Hub1/scripts.pory"
	.string "TM Noble Roar (¥200)$"

KecShop_Shiny_Text_1:
# 1109 "data/maps/Hub1/scripts.pory"
	.string "TM Charm (¥200)$"

KecShop_Shiny_Text_2:
# 1113 "data/maps/Hub1/scripts.pory"
	.string "TM Fake Tears (¥200)$"

KecShop_Shiny_Text_3:
# 1117 "data/maps/Hub1/scripts.pory"
	.string "TM Confuse Ray (¥300)$"

KecShop_Shiny_Text_4:
# 1121 "data/maps/Hub1/scripts.pory"
	.string "TM Thunder Wave (¥300)$"

KecShop_Shiny_Text_5:
# 1125 "data/maps/Hub1/scripts.pory"
	.string "TM Will-O-Wisp (¥500)$"

KecShop_Shiny_Text_6:
# 1129 "data/maps/Hub1/scripts.pory"
	.string "TM Toxic (¥500)$"

KecShop_Shiny_Text_7:
# 1133 "data/maps/Hub1/scripts.pory"
	.string "TM Swift (¥500)$"

KecShop_Shiny_Text_8:
# 1137 "data/maps/Hub1/scripts.pory"
	.string "TM Cut (¥500)$"

KecShop_Shiny_Text_9:
# 1141 "data/maps/Hub1/scripts.pory"
	.string "TM Rock Smash (¥500)$"

KecShop_Shiny_Text_10:
# 1145 "data/maps/Hub1/scripts.pory"
	.string "TM Snarl (¥500)$"

KecShop_Shiny_Text_11:
# 1149 "data/maps/Hub1/scripts.pory"
	.string "TM Electroweb (¥500)$"

KecShop_Shiny_Text_12:
# 1153 "data/maps/Hub1/scripts.pory"
	.string "TM Aurora Beam (¥500)$"

KecShop_Shiny_Text_13:
# 1157 "data/maps/Hub1/scripts.pory"
	.string "TM Psybeam (¥500)$"

KecShop_Shiny_Text_14:
# 1161 "data/maps/Hub1/scripts.pory"
	.string "TM Flamethrower (¥1200)$"

KecShop_Shiny_Text_15:
# 1165 "data/maps/Hub1/scripts.pory"
	.string "TM Ice Beam (¥1200)$"

KecShop_Shiny_Text_16:
# 1169 "data/maps/Hub1/scripts.pory"
	.string "TM Thunderbolt (¥1200)$"

KecShop_Shiny_Text_17:
# 1173 "data/maps/Hub1/scripts.pory"
	.string "TM Scald (¥1000)$"

KecShop_Shiny_Text_18:
# 1177 "data/maps/Hub1/scripts.pory"
	.string "TM Mega Drain (¥800)$"

KecShop_Shiny_Text_19:
# 1181 "data/maps/Hub1/scripts.pory"
	.string "TM Sludge Bomb (¥1000)$"

KecShop_Shiny_Text_20:
# 1185 "data/maps/Hub1/scripts.pory"
	.string "TM Dual Wingbeat (¥900)$"

KecShop_Shiny_Text_21:
# 1189 "data/maps/Hub1/scripts.pory"
	.string "TM Leech Life (¥1000)$"

KecShop_Shiny_Text_22:
# 1193 "data/maps/Hub1/scripts.pory"
	.string "TM Play Rough (¥1000)$"

KecShop_Shiny_Text_23:
# 1197 "data/maps/Hub1/scripts.pory"
	.string "TM Shadow Ball (¥1000)$"

KecShop_Shiny_Text_24:
# 1201 "data/maps/Hub1/scripts.pory"
	.string "TM Earth Power (¥1000)$"

Hub_Event_Script_Kecleon_Text_0:
# 1499 "data/maps/Hub1/scripts.pory"
	.string "Hey there! Would you like me to\nstock an item?$"

Hub_Event_Script_Kecleon_Text_1:
# 1506 "data/maps/Hub1/scripts.pory"
	.string "Lum Berry (¥500)$"

Hub_Event_Script_Kecleon_Text_2:
# 1511 "data/maps/Hub1/scripts.pory"
	.string "Serious Mint (¥2000)$"

Hub_Event_Script_Kecleon_Text_3:
# 1516 "data/maps/Hub1/scripts.pory"
	.string "Bottle Caps (¥1000)$"

Hub_Event_Script_Kecleon_Text_4:
# 1521 "data/maps/Hub1/scripts.pory"
	.string "Gold Bottle Caps (¥2000)$"

Hub_Event_Script_Kecleon_Text_5:
# 1526 "data/maps/Hub1/scripts.pory"
	.string "Pkt Birch Bag (¥1000)$"

Hub_Event_Script_Kecleon_Text_6:
# 1543 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Lum Berry as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_7:
# 1546 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry. You don't have the coins to\nstock that item, kec.$"

Hub_Event_Script_Kecleon_Text_8:
# 1557 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Serious Mint as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_9:
# 1571 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Rare Candy as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_10:
# 1585 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked IV Bottle caps as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_11:
# 1599 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Gold Bottle caps as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_12:
# 1613 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Pocket Birch bags as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_13:
# 1621 "data/maps/Hub1/scripts.pory"
	.string "You don't have anything left\nto stock right now. Thank you for\lyour consistent patronage!\p$"

Hub_Event_Script_Shiny_Kecleon_Text_0:
# 1634 "data/maps/Hub1/scripts.pory"
	.string "Howdy! Would you like me to\nstock a new TM?$"

Hub_Event_Script_Shiny_Kecleon_Text_1:
# 1636 "data/maps/Hub1/scripts.pory"
	.string "TM Noble Roar (¥400)$"

Hub_Event_Script_Shiny_Kecleon_Text_2:
# 1640 "data/maps/Hub1/scripts.pory"
	.string "TM Charm (¥400)$"

Hub_Event_Script_Shiny_Kecleon_Text_3:
# 1644 "data/maps/Hub1/scripts.pory"
	.string "TM Fake Tears (¥400)$"

Hub_Event_Script_Shiny_Kecleon_Text_4:
# 1648 "data/maps/Hub1/scripts.pory"
	.string "TM Confuse Ray (¥800)$"

Hub_Event_Script_Shiny_Kecleon_Text_5:
# 1652 "data/maps/Hub1/scripts.pory"
	.string "TM Thunder Wave (¥800)$"

Hub_Event_Script_Shiny_Kecleon_Text_6:
# 1656 "data/maps/Hub1/scripts.pory"
	.string "TM Will-O-Wisp (¥800)$"

Hub_Event_Script_Shiny_Kecleon_Text_7:
# 1660 "data/maps/Hub1/scripts.pory"
	.string "TM Toxic (¥800)$"

Hub_Event_Script_Shiny_Kecleon_Text_8:
# 1664 "data/maps/Hub1/scripts.pory"
	.string "TM Rock Smash (¥900)$"

Hub_Event_Script_Shiny_Kecleon_Text_9:
# 1668 "data/maps/Hub1/scripts.pory"
	.string "TM Snarl (¥900)$"

Hub_Event_Script_Shiny_Kecleon_Text_10:
# 1672 "data/maps/Hub1/scripts.pory"
	.string "TM Electroweb (¥900)$"

Hub_Event_Script_Shiny_Kecleon_Text_11:
# 1676 "data/maps/Hub1/scripts.pory"
	.string "TM Aurora Beam (¥900)$"

Hub_Event_Script_Shiny_Kecleon_Text_12:
# 1680 "data/maps/Hub1/scripts.pory"
	.string "TM Psybeam (¥900)$"

Hub_Event_Script_Shiny_Kecleon_Text_13:
# 1684 "data/maps/Hub1/scripts.pory"
	.string "TM Mega Drain (¥900)$"

Hub_Event_Script_Shiny_Kecleon_Text_14:
# 1700 "data/maps/Hub1/scripts.pory"
	.string "TM Scald (¥1200)$"

Hub_Event_Script_Shiny_Kecleon_Text_15:
# 1704 "data/maps/Hub1/scripts.pory"
	.string "TM Sludge Bomb (¥1200)$"

Hub_Event_Script_Shiny_Kecleon_Text_16:
# 1708 "data/maps/Hub1/scripts.pory"
	.string "TM Dual Wingbeat (¥1200)$"

Hub_Event_Script_Shiny_Kecleon_Text_17:
# 1712 "data/maps/Hub1/scripts.pory"
	.string "TM Leech Life (¥1200)$"

Hub_Event_Script_Shiny_Kecleon_Text_18:
# 1716 "data/maps/Hub1/scripts.pory"
	.string "TM Play Rough (¥1200)$"

Hub_Event_Script_Shiny_Kecleon_Text_19:
# 1720 "data/maps/Hub1/scripts.pory"
	.string "TM Shadow Ball (¥1200)$"

Hub_Event_Script_Shiny_Kecleon_Text_20:
# 1724 "data/maps/Hub1/scripts.pory"
	.string "TM Earth Power (¥1200)$"

Hub_Event_Script_Shiny_Kecleon_Text_21:
# 1741 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Noble Roar as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_22:
# 1755 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Rock Smash as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_23:
# 1769 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Swift as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_24:
# 1783 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Cut as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_25:
# 1797 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Charm as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_26:
# 1811 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Fake Tears as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_27:
# 1825 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Confuse Ray as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_28:
# 1839 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Thunder Wave as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_29:
# 1854 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Will O Wisp as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_30:
# 1869 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Toxic as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_31:
# 1884 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Snarl as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_32:
# 1899 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Electroweb as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_33:
# 1914 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Aurora Beam as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_34:
# 1929 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Psybeam as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_35:
# 1944 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Flamethrower as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_36:
# 1959 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Ice Beam as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_37:
# 1974 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Thunderbolt as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_38:
# 1989 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Scald as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_39:
# 2004 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Mega Drain as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_40:
# 2019 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Sludge Bomb as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_41:
# 2034 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Dual Wingbeat as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_42:
# 2049 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Leech Life as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_43:
# 2064 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Play Rough as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_44:
# 2079 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Shadow Ball as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_45:
# 2094 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Earth Power as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_46:
# 2102 "data/maps/Hub1/scripts.pory"
	.string "You don't have anything left\nto puchase right now. Thank you for\lyour consistent patronage!\p$"

Hub_Event_Script_Diancie_Text_0:
# 2115 "data/maps/Hub1/scripts.pory"
	.string "Hey there! I'm Diancie.\n"
	.string "I love collecting special gems.\l"
	.string "I plan on selling some of them soon\l"
	.string "but I don't have any to sell right now.\l"
	.string "I hope you come visit again another\l"
	.string "time.$"

Hub_Event_Script_Diancie_Text_1:
# 2123 "data/maps/Hub1/scripts.pory"
	.string "Hiya! I've finally started selling\n"
	.string "some of my precious gems.\l"
	.string "To celebrate, I'll give you this\l"
	.string "one on the house!$"

Hub_Event_Script_Diancie_Text_2:
# 2132 "data/maps/Hub1/scripts.pory"
	.string "There aren't so many gems I want to,\n"
	.string "sell right now. But I might sell more\l"
	.string "in the future.$"

Hub_Event_Script_Diancie_Text_3:
# 2139 "data/maps/Hub1/scripts.pory"
	.string "Venusaurite (¥1000)$"

Hub_Event_Script_Diancie_Text_4:
# 2143 "data/maps/Hub1/scripts.pory"
	.string "Charizardite Y (¥1000)$"

Hub_Event_Script_Diancie_Text_5:
# 2147 "data/maps/Hub1/scripts.pory"
	.string "Blastoisinite (¥1000)$"

Hub_Event_Script_Diancie_Text_6:
# 2151 "data/maps/Hub1/scripts.pory"
	.string "Beedrillite (¥1000)$"

Hub_Event_Script_Diancie_Text_7:
# 2155 "data/maps/Hub1/scripts.pory"
	.string "Pidgeotite (¥1000)$"

Hub_Event_Script_Diancie_Text_8:
# 2159 "data/maps/Hub1/scripts.pory"
	.string "Alakazite (¥1000)$"

Hub_Event_Script_Diancie_Text_9:
# 2163 "data/maps/Hub1/scripts.pory"
	.string "Slowbronite (¥1000)$"

Hub_Event_Script_Diancie_Text_10:
# 2167 "data/maps/Hub1/scripts.pory"
	.string "Gengarite (¥1000)$"

Hub_Event_Script_Diancie_Text_11:
# 2171 "data/maps/Hub1/scripts.pory"
	.string "Kangaskhanite (¥1000)$"

Hub_Event_Script_Diancie_Text_12:
# 2175 "data/maps/Hub1/scripts.pory"
	.string "Pinsirite (¥1000)$"

Hub_Event_Script_Diancie_Text_13:
# 2179 "data/maps/Hub1/scripts.pory"
	.string "Gyaradosite (¥1000)$"

Hub_Event_Script_Diancie_Text_14:
# 2183 "data/maps/Hub1/scripts.pory"
	.string "Aerodactylite (¥1000)$"

Hub_Event_Script_Diancie_Text_15:
# 2187 "data/maps/Hub1/scripts.pory"
	.string "Ampharosite (¥1000)$"

Hub_Event_Script_Diancie_Text_16:
# 2191 "data/maps/Hub1/scripts.pory"
	.string "Steelixite (¥1000)$"

Hub_Event_Script_Diancie_Text_17:
# 2195 "data/maps/Hub1/scripts.pory"
	.string "Scizorite (¥1000)$"

Hub_Event_Script_Diancie_Text_18:
# 2199 "data/maps/Hub1/scripts.pory"
	.string "Heracronite (¥1000)$"

Hub_Event_Script_Diancie_Text_19:
# 2203 "data/maps/Hub1/scripts.pory"
	.string "Houndoominite (¥1000)$"

Hub_Event_Script_Diancie_Text_20:
# 2207 "data/maps/Hub1/scripts.pory"
	.string "Tyranitarite (¥1000)$"

Hub_Event_Script_Diancie_Text_21:
# 2211 "data/maps/Hub1/scripts.pory"
	.string "Sceptilite (¥1000)$"

Hub_Event_Script_Diancie_Text_22:
# 2215 "data/maps/Hub1/scripts.pory"
	.string "Blazikenite (¥1000)$"

Hub_Event_Script_Diancie_Text_23:
# 2219 "data/maps/Hub1/scripts.pory"
	.string "Swampertite (¥1000)$"

Hub_Event_Script_Diancie_Text_24:
# 2223 "data/maps/Hub1/scripts.pory"
	.string "Gardevoirite (¥1000)$"

Hub_Event_Script_Diancie_Text_25:
# 2227 "data/maps/Hub1/scripts.pory"
	.string "Sablenite (¥1000)$"

Hub_Event_Script_Diancie_Text_26:
# 2231 "data/maps/Hub1/scripts.pory"
	.string "Mawilite (¥1000)$"

Hub_Event_Script_Diancie_Text_27:
# 2235 "data/maps/Hub1/scripts.pory"
	.string "Aggronite (¥1000)$"

Hub_Event_Script_Diancie_Text_28:
# 2239 "data/maps/Hub1/scripts.pory"
	.string "Medichamite (¥1000)$"

Hub_Event_Script_Diancie_Text_29:
# 2243 "data/maps/Hub1/scripts.pory"
	.string "Manectite (¥1000)$"

Hub_Event_Script_Diancie_Text_30:
# 2247 "data/maps/Hub1/scripts.pory"
	.string "Sharpedonite (¥1000)$"

Hub_Event_Script_Diancie_Text_31:
# 2251 "data/maps/Hub1/scripts.pory"
	.string "Cameruptite (¥1000)$"

Hub_Event_Script_Diancie_Text_32:
# 2255 "data/maps/Hub1/scripts.pory"
	.string "Altarianite (¥1000)$"

Hub_Event_Script_Diancie_Text_33:
# 2259 "data/maps/Hub1/scripts.pory"
	.string "Banettite (¥1000)$"

Hub_Event_Script_Diancie_Text_34:
# 2263 "data/maps/Hub1/scripts.pory"
	.string "Absolite (¥1000)$"

Hub_Event_Script_Diancie_Text_35:
# 2267 "data/maps/Hub1/scripts.pory"
	.string "Glalitite (¥1000)$"

Hub_Event_Script_Diancie_Text_36:
# 2271 "data/maps/Hub1/scripts.pory"
	.string "Salamencite (¥1000)$"

Hub_Event_Script_Diancie_Text_37:
# 2275 "data/maps/Hub1/scripts.pory"
	.string "Metagrossite (¥1000)$"

Hub_Event_Script_Diancie_Text_38:
# 2279 "data/maps/Hub1/scripts.pory"
	.string "Lopunnite (¥1000)$"

Hub_Event_Script_Diancie_Text_39:
# 2283 "data/maps/Hub1/scripts.pory"
	.string "Garchompite (¥1000)$"

Hub_Event_Script_Diancie_Text_40:
# 2287 "data/maps/Hub1/scripts.pory"
	.string "Lucarionite (¥1000)$"

Hub_Event_Script_Diancie_Text_41:
# 2291 "data/maps/Hub1/scripts.pory"
	.string "Abomasite (¥1000)$"

Hub_Event_Script_Diancie_Text_42:
# 2295 "data/maps/Hub1/scripts.pory"
	.string "Galladite (¥1000)$"

Hub_Event_Script_Diancie_Text_43:
# 2299 "data/maps/Hub1/scripts.pory"
	.string "Clefablite (¥1000)$"

Hub_Event_Script_Diancie_Text_44:
# 2303 "data/maps/Hub1/scripts.pory"
	.string "Victreebelite (¥1000)$"

Hub_Event_Script_Diancie_Text_45:
# 2307 "data/maps/Hub1/scripts.pory"
	.string "Starminite (¥1000)$"

Hub_Event_Script_Diancie_Text_46:
# 2311 "data/maps/Hub1/scripts.pory"
	.string "Dragoninite (¥1000)$"

Hub_Event_Script_Diancie_Text_47:
# 2315 "data/maps/Hub1/scripts.pory"
	.string "Meganiumite (¥1000)$"

Hub_Event_Script_Diancie_Text_48:
# 2319 "data/maps/Hub1/scripts.pory"
	.string "Feraligite (¥1000)$"

Hub_Event_Script_Diancie_Text_49:
# 2323 "data/maps/Hub1/scripts.pory"
	.string "Skarmorite (¥1000)$"

Hub_Event_Script_Diancie_Text_50:
# 2327 "data/maps/Hub1/scripts.pory"
	.string "Froslassite (¥1000)$"

Hub_Event_Script_Diancie_Text_51:
# 2331 "data/maps/Hub1/scripts.pory"
	.string "Emboarite (¥1000)$"

Hub_Event_Script_Diancie_Text_52:
# 2335 "data/maps/Hub1/scripts.pory"
	.string "Excadrite (¥1000)$"

Hub_Event_Script_Diancie_Text_53:
# 2339 "data/maps/Hub1/scripts.pory"
	.string "Scolipite (¥1000)$"

Hub_Event_Script_Diancie_Text_54:
# 2343 "data/maps/Hub1/scripts.pory"
	.string "Scraftinite (¥1000)$"

Hub_Event_Script_Diancie_Text_55:
# 2347 "data/maps/Hub1/scripts.pory"
	.string "Eelektrossite (¥1000)$"

Hub_Event_Script_Diancie_Text_56:
# 2351 "data/maps/Hub1/scripts.pory"
	.string "Chandelurite (¥1000)$"

Hub_Event_Script_Diancie_Text_57:
# 2355 "data/maps/Hub1/scripts.pory"
	.string "Chesnaughtite (¥1000)$"

Hub_Event_Script_Diancie_Text_58:
# 2359 "data/maps/Hub1/scripts.pory"
	.string "Delphoxite (¥1000)$"

Hub_Event_Script_Diancie_Text_59:
# 2363 "data/maps/Hub1/scripts.pory"
	.string "Greninjite (¥1000)$"

Hub_Event_Script_Diancie_Text_60:
# 2367 "data/maps/Hub1/scripts.pory"
	.string "Pyroarite (¥1000)$"

Hub_Event_Script_Diancie_Text_61:
# 2371 "data/maps/Hub1/scripts.pory"
	.string "Malamarite (¥1000)$"

Hub_Event_Script_Diancie_Text_62:
# 2375 "data/maps/Hub1/scripts.pory"
	.string "Barbaracite (¥1000)$"

Hub_Event_Script_Diancie_Text_63:
# 2379 "data/maps/Hub1/scripts.pory"
	.string "Dragalgite (¥1000)$"

Hub_Event_Script_Diancie_Text_64:
# 2383 "data/maps/Hub1/scripts.pory"
	.string "Hawluchanite (¥1000)$"

Hub_Event_Script_Diancie_Text_65:
# 2387 "data/maps/Hub1/scripts.pory"
	.string "Drampanite (¥1000)$"

Hub_Event_Script_Diancie_Text_66:
# 2391 "data/maps/Hub1/scripts.pory"
	.string "Falinksite (¥1000)$"

Hub_Event_Script_Diancie_Text_67:
# 2395 "data/maps/Hub1/scripts.pory"
	.string "Raichunite X (¥1000)$"

Hub_Event_Script_Diancie_Text_68:
# 2399 "data/maps/Hub1/scripts.pory"
	.string "Raichunite Y (¥1000)$"

Hub_Event_Script_Diancie_Text_69:
# 2403 "data/maps/Hub1/scripts.pory"
	.string "Chimechite (¥1000)$"

Hub_Event_Script_Diancie_Text_70:
# 2407 "data/maps/Hub1/scripts.pory"
	.string "Staraptite (¥1000)$"

Hub_Event_Script_Diancie_Text_71:
# 2411 "data/maps/Hub1/scripts.pory"
	.string "Golurkite (¥1000)$"

Hub_Event_Script_Diancie_Text_72:
# 2415 "data/maps/Hub1/scripts.pory"
	.string "Meowsticite (¥1000)$"

Hub_Event_Script_Diancie_Text_73:
# 2419 "data/maps/Hub1/scripts.pory"
	.string "Crabominite (¥1000)$"

Hub_Event_Script_Diancie_Text_74:
# 2423 "data/maps/Hub1/scripts.pory"
	.string "Golisopite (¥1000)$"

Hub_Event_Script_Diancie_Text_75:
# 2427 "data/maps/Hub1/scripts.pory"
	.string "Scovillainite (¥1000)$"

Hub_Event_Script_Diancie_Text_76:
# 2431 "data/maps/Hub1/scripts.pory"
	.string "Glimmoranite (¥1000)$"

Hub_Event_Script_Diancie_Text_77:
# 2435 "data/maps/Hub1/scripts.pory"
	.string "Baxcalibrite (¥1000)$"

Hub_Event_Script_Diancie_Text_78:
# 2442 "data/maps/Hub1/scripts.pory"
	.string "Hello! Good news! I have a new\n"
	.string "Mega Stone in stock!\l"
	.string "Please take a look!$"

Hub_Event_Script_Diancie_Text_79:
# 2448 "data/maps/Hub1/scripts.pory"
	.string "Hello! Would you like to\nbuy a Mega Stone?$"

Hub_Event_Script_Diancie_Text_80:
# 2462 "data/maps/Hub1/scripts.pory"
	.string "You got a Venusaurite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_81:
# 2465 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry, but you don't have the\n coins for that right now.$"

Hub_Event_Script_Diancie_Text_82:
# 2477 "data/maps/Hub1/scripts.pory"
	.string "You got a Charizardite Y as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_83:
# 2492 "data/maps/Hub1/scripts.pory"
	.string "You got a Blastoisinite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_84:
# 2507 "data/maps/Hub1/scripts.pory"
	.string "You got a Beedrillite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_85:
# 2522 "data/maps/Hub1/scripts.pory"
	.string "You got a Pidgeotite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_86:
# 2537 "data/maps/Hub1/scripts.pory"
	.string "You got an Alakazite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_87:
# 2552 "data/maps/Hub1/scripts.pory"
	.string "You got a Slowbronite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_88:
# 2567 "data/maps/Hub1/scripts.pory"
	.string "You got a Gengarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_89:
# 2582 "data/maps/Hub1/scripts.pory"
	.string "You got a Kangaskhanite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_90:
# 2597 "data/maps/Hub1/scripts.pory"
	.string "You got a Pinsirite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_91:
# 2612 "data/maps/Hub1/scripts.pory"
	.string "You got a Gyaradosite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_92:
# 2627 "data/maps/Hub1/scripts.pory"
	.string "You got an Aerodactylite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_93:
# 2642 "data/maps/Hub1/scripts.pory"
	.string "You got an Ampharosite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_94:
# 2657 "data/maps/Hub1/scripts.pory"
	.string "You got a Steelixite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_95:
# 2672 "data/maps/Hub1/scripts.pory"
	.string "You got a Scizorite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_96:
# 2687 "data/maps/Hub1/scripts.pory"
	.string "You got a Heracronite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_97:
# 2702 "data/maps/Hub1/scripts.pory"
	.string "You got a Houndoominite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_98:
# 2717 "data/maps/Hub1/scripts.pory"
	.string "You got a Tyranitarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_99:
# 2732 "data/maps/Hub1/scripts.pory"
	.string "You got a Sceptilite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_100:
# 2747 "data/maps/Hub1/scripts.pory"
	.string "You got a Blazikenite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_101:
# 2762 "data/maps/Hub1/scripts.pory"
	.string "You got a Swampertite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_102:
# 2777 "data/maps/Hub1/scripts.pory"
	.string "You got a Gardevoirite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_103:
# 2792 "data/maps/Hub1/scripts.pory"
	.string "You got a Sablenite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_104:
# 2807 "data/maps/Hub1/scripts.pory"
	.string "You got a Mawilite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_105:
# 2822 "data/maps/Hub1/scripts.pory"
	.string "You got an Aggronite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_106:
# 2837 "data/maps/Hub1/scripts.pory"
	.string "You got a Medichamite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_107:
# 2852 "data/maps/Hub1/scripts.pory"
	.string "You got a Manectite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_108:
# 2867 "data/maps/Hub1/scripts.pory"
	.string "You got a Sharpedonite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_109:
# 2882 "data/maps/Hub1/scripts.pory"
	.string "You got a Cameruptite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_110:
# 2897 "data/maps/Hub1/scripts.pory"
	.string "You got an Altarianite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_111:
# 2912 "data/maps/Hub1/scripts.pory"
	.string "You got a Banettite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_112:
# 2927 "data/maps/Hub1/scripts.pory"
	.string "You got an Absolite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_113:
# 2942 "data/maps/Hub1/scripts.pory"
	.string "You got a Glalitite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_114:
# 2957 "data/maps/Hub1/scripts.pory"
	.string "You got a Salamencite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_115:
# 2972 "data/maps/Hub1/scripts.pory"
	.string "You got a Lopunnite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_116:
# 2987 "data/maps/Hub1/scripts.pory"
	.string "You got a Garchompite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_117:
# 3002 "data/maps/Hub1/scripts.pory"
	.string "You got a Lucarionite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_118:
# 3017 "data/maps/Hub1/scripts.pory"
	.string "You got an Abomasite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_119:
# 3032 "data/maps/Hub1/scripts.pory"
	.string "You got a Galladite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_120:
# 3047 "data/maps/Hub1/scripts.pory"
	.string "You got a Clefablite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_121:
# 3062 "data/maps/Hub1/scripts.pory"
	.string "You got a Victreebelite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_122:
# 3077 "data/maps/Hub1/scripts.pory"
	.string "You got a Starminite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_123:
# 3092 "data/maps/Hub1/scripts.pory"
	.string "You got a Dragoninite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_124:
# 3107 "data/maps/Hub1/scripts.pory"
	.string "You got a Meganiumite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_125:
# 3122 "data/maps/Hub1/scripts.pory"
	.string "You got a Feraligite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_126:
# 3137 "data/maps/Hub1/scripts.pory"
	.string "You got a Skarmorite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_127:
# 3152 "data/maps/Hub1/scripts.pory"
	.string "You got a Froslassite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_128:
# 3167 "data/maps/Hub1/scripts.pory"
	.string "You got an Emboarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_129:
# 3182 "data/maps/Hub1/scripts.pory"
	.string "You got an Excadrite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_130:
# 3197 "data/maps/Hub1/scripts.pory"
	.string "You got a Scolipite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_131:
# 3212 "data/maps/Hub1/scripts.pory"
	.string "You got a Scraftinite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_132:
# 3227 "data/maps/Hub1/scripts.pory"
	.string "You got an Eelektrossite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_133:
# 3242 "data/maps/Hub1/scripts.pory"
	.string "You got a Chandelurite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_134:
# 3257 "data/maps/Hub1/scripts.pory"
	.string "You got a Chesnaughtite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_135:
# 3272 "data/maps/Hub1/scripts.pory"
	.string "You got a Delphoxite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_136:
# 3287 "data/maps/Hub1/scripts.pory"
	.string "You got a Greninjite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_137:
# 3302 "data/maps/Hub1/scripts.pory"
	.string "You got a Pyroarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_138:
# 3317 "data/maps/Hub1/scripts.pory"
	.string "You got a Malamarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_139:
# 3332 "data/maps/Hub1/scripts.pory"
	.string "You got a Barbaracite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_140:
# 3347 "data/maps/Hub1/scripts.pory"
	.string "You got a Dragalgite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_141:
# 3362 "data/maps/Hub1/scripts.pory"
	.string "You got a Hawluchanite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_142:
# 3377 "data/maps/Hub1/scripts.pory"
	.string "You got a Drampanite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_143:
# 3392 "data/maps/Hub1/scripts.pory"
	.string "You got a Falinksite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_144:
# 3407 "data/maps/Hub1/scripts.pory"
	.string "You got a Raichunite X as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_145:
# 3422 "data/maps/Hub1/scripts.pory"
	.string "You got a Raichunite Y as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_146:
# 3437 "data/maps/Hub1/scripts.pory"
	.string "You got a Chimechite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_147:
# 3452 "data/maps/Hub1/scripts.pory"
	.string "You got a Staraptite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_148:
# 3467 "data/maps/Hub1/scripts.pory"
	.string "You got a Golurkite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_149:
# 3482 "data/maps/Hub1/scripts.pory"
	.string "You got a Meowsticite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_150:
# 3497 "data/maps/Hub1/scripts.pory"
	.string "You got a Crabominite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_151:
# 3512 "data/maps/Hub1/scripts.pory"
	.string "You got a Golisopite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_152:
# 3527 "data/maps/Hub1/scripts.pory"
	.string "You got a Scovillainite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_153:
# 3542 "data/maps/Hub1/scripts.pory"
	.string "You got a Glimmoranite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_154:
# 3557 "data/maps/Hub1/scripts.pory"
	.string "You got a Baxcalibrite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_155:
# 3564 "data/maps/Hub1/scripts.pory"
	.string "I don't have anything on sale right now,\n"
	.string "sorry.\p"
	.string "Try doing more runs and getting far\n"
	.string "with new pokemon!$"

Hub_Event_Script_Marowak_Text_0:
# 3579 "data/maps/Hub1/scripts.pory"
	.string "Hi. My dojo is closed right now. Maybe it\n"
	.string "will open in a future update.$"

Hub_Event_Script_Chimecho_Text_0:
# 3591 "data/maps/Hub1/scripts.pory"
	.string "Heya. Would you like to\nsee your unlocked starter charms?$"

Hub_Event_Script_Chimecho_Text_1:
# 3595 "data/maps/Hub1/scripts.pory"
	.string "Shiny Starter Charm$"

Hub_Event_Script_Chimecho_Text_2:
# 3596 "data/maps/Hub1/scripts.pory"
	.string "Lump Sum$"

Hub_Event_Script_Chimecho_Text_3:
# 3597 "data/maps/Hub1/scripts.pory"
	.string "Berry Pack$"

Hub_Event_Script_Chimecho_Text_4:
# 3598 "data/maps/Hub1/scripts.pory"
	.string "Tinted Scope$"

Hub_Event_Script_Chimecho_Text_5:
# 3599 "data/maps/Hub1/scripts.pory"
	.string "Normal Charm$"

Hub_Event_Script_Chimecho_Text_6:
# 3600 "data/maps/Hub1/scripts.pory"
	.string "Mint Pot$"

Hub_Event_Script_Chimecho_Text_7:
# 3601 "data/maps/Hub1/scripts.pory"
	.string "Bruxish Floss$"

Hub_Event_Script_Chimecho_Text_8:
# 3602 "data/maps/Hub1/scripts.pory"
	.string "Unown Buddy$"

Hub_Event_Script_Chimecho_Text_9:
# 3607 "data/maps/Hub1/scripts.pory"
	.string "Keep playing more to unlock more\n"
	.string "starter charms!$"

Hub_Event_Script_Chimecho_Text_10:
# 3611 "data/maps/Hub1/scripts.pory"
	.string "Your starter pokemon becomes shiny.$"

Hub_Event_Script_Chimecho_Text_11:
# 3613 "data/maps/Hub1/scripts.pory"
	.string "Gain ¥1500.$"

Hub_Event_Script_Chimecho_Text_12:
# 3615 "data/maps/Hub1/scripts.pory"
	.string "Gain an oran berry, a sitrus berry, a lum\n"
	.string "berry and a berry juice.$"

Hub_Event_Script_Chimecho_Text_13:
# 3617 "data/maps/Hub1/scripts.pory"
	.string "Your not very effective moves do 1.5\n"
	.string "times more damage.$"

Hub_Event_Script_Chimecho_Text_14:
# 3619 "data/maps/Hub1/scripts.pory"
	.string "Your normal moves do 1.1 times more\n"
	.string "damage.$"

Hub_Event_Script_Chimecho_Text_15:
# 3621 "data/maps/Hub1/scripts.pory"
	.string "Gain a random mint at the start of each\n"
	.string "path.$"

Hub_Event_Script_Chimecho_Text_16:
# 3623 "data/maps/Hub1/scripts.pory"
	.string "Your biting moves do 1.2 dmg.$"

Hub_Event_Script_Chimecho_Text_17:
# 3625 "data/maps/Hub1/scripts.pory"
	.string "Get an extra unown at the start of the\n"
	.string "run.$"

Hub_Event_Script_Chimecho_Text_18:
# 3631 "data/maps/Hub1/scripts.pory"
	.string "Ok then! Keep playing more to unlock\n"
	.string "more starter charms!$"

GiveStarterCharm_Text_0:
# 3696 "data/maps/Hub1/scripts.pory"
	.string "Good luck on your run!$"

Hub_Event_Script_Golem_Text_0:
# 3706 "data/maps/Hub1/scripts.pory"
	.string "Diancie over there has a large mega\n"
	.string "stone collection.\p"
	.string "I wonder if she'll start selling them one\n"
	.string "day... I've heard that getting to the\l"
	.string "4th path might do it...\p"
	.string "Not that I would be able to make use of\n"
	.string "one anyway... I wish I had a mega\l"
	.string "evolution...$"

Hub_Event_Script_Golem_Text_1:
# 3708 "data/maps/Hub1/scripts.pory"
	.string "So Diancie's finally started to sell\n"
	.string "mega stones! Apparently if you get to\l"
	.string "the 4th path with a pokemon that can\l"
	.string "mega evolve, she'll start selling that\l"
	.string "pokemon's mega stone.$"

Hub_Event_Script_Togedemaru_Text_0:
# 3720 "data/maps/Hub1/scripts.pory"
	.string "Hey. I'm Togedemaru. I'm spiky and\n"
	.string "round!$"

Hub_Event_Script_Togedemaru_Text_1:
# 3722 "data/maps/Hub1/scripts.pory"
	.string "Hey. In this game, pokemon can have up\n"
	.string "to 4 abilities! Like me! I have Iron\l"
	.string "Barbs, Static, Sturdy and Cute Charm!\l"
	.string "But not all pokemon have as many\l"
	.string "abilites as me hehe.$"

Hub_Event_Script_Klang_Text_0:
# 3732 "data/maps/Hub1/scripts.pory"
	.string "Hello.$"

Hub_Event_Script_Bruxish_Text_0:
# 3741 "data/maps/Hub1/scripts.pory"
	.string "You want to know how I have such\n"
	.string "beatiful teeth? Well you've got to take\l"
	.string "good care of them of course! Make sure\l"
	.string "to brush twice a day, and floss every\l"
	.string "night!$"

Hub_Event_Script_Bruxish_Text_1:
# 3744 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Bruxish Floss as\na starter charm!$"

Hub_Event_Script_Bruxish_Text_2:
# 3747 "data/maps/Hub1/scripts.pory"
	.string "Don't forget to floss everyday!$"

Hub_Event_Script_Simisage_Text_0:
# 3756 "data/maps/Hub1/scripts.pory"
	.string "Hi. Did you know that in this game, a\n"
	.string "pokemon can learn any TM. That means\l"
	.string "even a grass-type like me can learn a\l"
	.string "fire-type move by TM!\p"
	.string "But of course I won't get a same type\n"
	.string "attack bonus from it.$"

Hub_Event_Script_Woobat_Text_0:
# 3764 "data/maps/Hub1/scripts.pory"
	.string "Did you know that some abilities got\n"
	.string "changed in this game? Like my ability\l"
	.string "Klutz. It still doesn't let me use items,\l"
	.string "but it also gives me a 10% chance to\l"
	.string "dodge moves!$"

Hub_Event_Script_Unown_Text_0:
# 3774 "data/maps/Hub1/scripts.pory"
	.string "Hi. I know I'm a pretty weak pokemon,\n"
	.string "but If you choose me, you'll get an\l"
	.string "extra unown for free, thanks to my Herd\l"
	.string "ability!$"

Hub_Event_Script_Unown_Text_1:
# 3776 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Unown Buddy as\na starter charm!$"

Hub_Event_Script_Unown_Text_2:
# 3780 "data/maps/Hub1/scripts.pory"
	.string "If you choose me, you'll get an\nextra unown as well!$"

Hub_Event_Script_Smoliv_Text_0:
# 3789 "data/maps/Hub1/scripts.pory"
	.string "Hey.\p"
	.string "You should know that the money you get\n"
	.string "during a run (¥) is different to the\l"
	.string "money you spend when you're here at the\l"
	.string "hub (Coins).$"
