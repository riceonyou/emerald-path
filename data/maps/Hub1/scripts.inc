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
# 30 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_GIVE_MINTY_CHARM_MINT, AfterWarpIntoNewAct_10
AfterWarpIntoNewAct_9:
# 38 "data/maps/Hub1/scripts.pory"
	compare VAR_CURRENT_ACT, 1
	goto_if_gt AfterWarpIntoNewAct_13
AfterWarpIntoNewAct_12:
# 47 "data/maps/Hub1/scripts.pory"
	compare VAR_CURRENT_ACT, 0
	goto_if_eq AfterWarpIntoNewAct_16
AfterWarpIntoNewAct_15:
# 91 "data/maps/Hub1/scripts.pory"
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
# 26 "data/maps/Hub1/scripts.pory"
	waitfanfare
	goto AfterWarpIntoNewAct_6

AfterWarpIntoNewAct_10:
# 31 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_2
# 32 "data/maps/Hub1/scripts.pory"
	randomelement ITEM_LONELY_MINT, ITEM_ADAMANT_MINT, ITEM_NAUGHTY_MINT, ITEM_BRAVE_MINT, ITEM_BOLD_MINT, ITEM_IMPISH_MINT, ITEM_LAX_MINT, ITEM_RELAXED_MINT, ITEM_MODEST_MINT, ITEM_MILD_MINT, ITEM_RASH_MINT, ITEM_QUIET_MINT, ITEM_CALM_MINT, ITEM_GENTLE_MINT, ITEM_CAREFUL_MINT, ITEM_SASSY_MINT, ITEM_SERIOUS_MINT
# 33 "data/maps/Hub1/scripts.pory"
	giveitem VAR_RESULT
# 34 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_GIVE_MINTY_CHARM_MINT
	goto AfterWarpIntoNewAct_9

AfterWarpIntoNewAct_13:
# 39 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 40 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_LEVEL_CAP
# 41 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_3
# 42 "data/maps/Hub1/scripts.pory"
	waitfanfare
	goto AfterWarpIntoNewAct_12

AfterWarpIntoNewAct_16:
# 49 "data/maps/Hub1/scripts.pory"
	compare VAR_COINS_COLLECTED_IN_A_RUN, 0
	goto_if_gt AfterWarpIntoNewAct_19
AfterWarpIntoNewAct_18:
# 58 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MINTY_CHARM_STARTER_UNLOCKED, AfterWarpIntoNewAct_23
AfterWarpIntoNewAct_21:
# 64 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TINTED_CHARM_STARTER_UNLOCKED, AfterWarpIntoNewAct_28
AfterWarpIntoNewAct_26:
# 70 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_NORMAL_CHARM_STARTER_UNLOCKED, AfterWarpIntoNewAct_33
AfterWarpIntoNewAct_31:
# 77 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_NEW_DIFFICULTY_UNLOCKED, AfterWarpIntoNewAct_37
AfterWarpIntoNewAct_36:
# 84 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_HOENN1_ALT_UNLOCKED, AfterWarpIntoNewAct_40
	goto AfterWarpIntoNewAct_15

AfterWarpIntoNewAct_19:
# 50 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_COINS_COLLECTED_IN_A_RUN
# 51 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 52 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_4
# 53 "data/maps/Hub1/scripts.pory"
	setvar VAR_COINS_COLLECTED_IN_A_RUN, 0
	goto AfterWarpIntoNewAct_18

AfterWarpIntoNewAct_22:
# 59 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MINTY_CHARM_STARTER_UNLOCKED
# 60 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 61 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_5
# 62 "data/maps/Hub1/scripts.pory"
	waitfanfare
	goto AfterWarpIntoNewAct_21

AfterWarpIntoNewAct_23:
# 58 "data/maps/Hub1/scripts.pory"
	compare VAR_TOTAL_RUNS, 0
	goto_if_gt AfterWarpIntoNewAct_22
	goto AfterWarpIntoNewAct_21

AfterWarpIntoNewAct_27:
# 65 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TINTED_CHARM_STARTER_UNLOCKED
# 66 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 67 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_6
# 68 "data/maps/Hub1/scripts.pory"
	waitfanfare
	goto AfterWarpIntoNewAct_26

AfterWarpIntoNewAct_28:
# 64 "data/maps/Hub1/scripts.pory"
	compare VAR_TOTAL_RUNS, 3
	goto_if_gt AfterWarpIntoNewAct_27
	goto AfterWarpIntoNewAct_26

AfterWarpIntoNewAct_32:
# 71 "data/maps/Hub1/scripts.pory"
	setflag FLAG_NORMAL_CHARM_STARTER_UNLOCKED
# 72 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 73 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_7
# 74 "data/maps/Hub1/scripts.pory"
	waitfanfare
	goto AfterWarpIntoNewAct_31

AfterWarpIntoNewAct_33:
# 70 "data/maps/Hub1/scripts.pory"
	compare VAR_TOTAL_RUNS, 6
	goto_if_gt AfterWarpIntoNewAct_32
	goto AfterWarpIntoNewAct_31

AfterWarpIntoNewAct_37:
# 78 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 79 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_8
# 80 "data/maps/Hub1/scripts.pory"
	waitfanfare
# 81 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_NEW_DIFFICULTY_UNLOCKED
	goto AfterWarpIntoNewAct_36

AfterWarpIntoNewAct_39:
# 85 "data/maps/Hub1/scripts.pory"
	setflag FLAG_HOENN1_ALT_UNLOCKED
# 86 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 87 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_9
# 88 "data/maps/Hub1/scripts.pory"
	waitfanfare
	goto AfterWarpIntoNewAct_15

AfterWarpIntoNewAct_40:
# 84 "data/maps/Hub1/scripts.pory"
	compare VAR_ACT1_WINS, 1
	goto_if_gt AfterWarpIntoNewAct_39
	goto AfterWarpIntoNewAct_15


GiveCommonItem::
# 97 "data/maps/Hub1/scripts.pory"
	special BufferCommonItem
# 98 "data/maps/Hub1/scripts.pory"
	giveitem VAR_RESULT
	return


GiveUncommonItem::
# 102 "data/maps/Hub1/scripts.pory"
	special BufferUncommonItem
# 103 "data/maps/Hub1/scripts.pory"
	giveitem VAR_RESULT
	return


GiveRareItem::
# 107 "data/maps/Hub1/scripts.pory"
	special BufferRareItem
# 108 "data/maps/Hub1/scripts.pory"
	giveitem VAR_RESULT
	return


Act1BirchBag::
# 112 "data/maps/Hub1/scripts.pory"
	playse SE_CLICK
# 113 "data/maps/Hub1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 114 "data/maps/Hub1/scripts.pory"
	setvar VAR_0x8000, 33
# 115 "data/maps/Hub1/scripts.pory"
	special LoadBirchBagPoolById
# 116 "data/maps/Hub1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 117 "data/maps/Hub1/scripts.pory"
	waitstate
# 118 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_EVOLVED
# 120 "data/maps/Hub1/scripts.pory"
	msgbox Act1BirchBag_Text_0
# 121 "data/maps/Hub1/scripts.pory"
	waitfanfare
	return


Act2BirchBag::
# 124 "data/maps/Hub1/scripts.pory"
	playse SE_CLICK
# 125 "data/maps/Hub1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 126 "data/maps/Hub1/scripts.pory"
	setvar VAR_0x8000, 34
# 127 "data/maps/Hub1/scripts.pory"
	special LoadBirchBagPoolById
# 128 "data/maps/Hub1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 129 "data/maps/Hub1/scripts.pory"
	waitstate
# 130 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_EVOLVED
# 132 "data/maps/Hub1/scripts.pory"
	msgbox Act1BirchBag_Text_0
# 133 "data/maps/Hub1/scripts.pory"
	waitfanfare
	return


Act3BirchBag::
# 136 "data/maps/Hub1/scripts.pory"
	playse SE_CLICK
# 137 "data/maps/Hub1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 138 "data/maps/Hub1/scripts.pory"
	setvar VAR_0x8000, 35
# 139 "data/maps/Hub1/scripts.pory"
	special LoadBirchBagPoolById
# 140 "data/maps/Hub1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 141 "data/maps/Hub1/scripts.pory"
	waitstate
# 142 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_EVOLVED
# 144 "data/maps/Hub1/scripts.pory"
	msgbox Act1BirchBag_Text_0
# 145 "data/maps/Hub1/scripts.pory"
	waitfanfare
	return


AbraTeleport::
# 149 "data/maps/Hub1/scripts.pory"
	lockall
# 150 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_DEFEATED_PATH_LEADER, AbraTeleport_1
# 155 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_1, MSGBOX_YESNO
# 156 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 157 "data/maps/Hub1/scripts.pory"
	case YES, AbraTeleport_5
# 161 "data/maps/Hub1/scripts.pory"
	case NO, AbraTeleport_6
	return

AbraTeleport_1:
# 151 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_0
# 152 "data/maps/Hub1/scripts.pory"
	releaseall
	return

AbraTeleport_5:
# 158 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_2
# 159 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_DEFEATED_PATH_LEADER
# 160 "data/maps/Hub1/scripts.pory"
	special WarpToNextAncient
	return

AbraTeleport_6:
# 162 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_3
# 163 "data/maps/Hub1/scripts.pory"
	releaseall
	return


RivalFight1::
# 169 "data/maps/Hub1/scripts.pory"
	switch VAR_CURRENT_RIVAL
# 170 "data/maps/Hub1/scripts.pory"
	case 0, RivalFight1_2
# 175 "data/maps/Hub1/scripts.pory"
	case 1, RivalFight1_3
	return

RivalFight1_2:
# 171 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_TREECKO, RivalFight1_Text_0, RivalFight1_Text_1
# 172 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight1_Text_2, MSGBOX_AUTOCLOSE
# 173 "data/maps/Hub1/scripts.pory"
	waitmessage
	end

RivalFight1_3:
# 176 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_TORCHIC, RivalFight1_Text_3, RivalFight1_Text_1
# 177 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight1_Text_2, MSGBOX_AUTOCLOSE
# 178 "data/maps/Hub1/scripts.pory"
	waitmessage
	end


RivalFight2::
# 184 "data/maps/Hub1/scripts.pory"
	switch VAR_CURRENT_RIVAL
# 185 "data/maps/Hub1/scripts.pory"
	case 0, RivalFight2_2
# 190 "data/maps/Hub1/scripts.pory"
	case 1, RivalFight2_3
	return

RivalFight2_2:
# 186 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_GROVYLE, RivalFight2_Text_0, RivalFight2_Text_1
# 187 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight2_Text_2, MSGBOX_AUTOCLOSE
# 188 "data/maps/Hub1/scripts.pory"
	waitmessage
	end

RivalFight2_3:
# 191 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_COMBUSKEN, RivalFight2_Text_3, RivalFight2_Text_4
# 192 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight2_Text_5, MSGBOX_AUTOCLOSE
# 193 "data/maps/Hub1/scripts.pory"
	waitmessage
	end


RivalFight3::
# 199 "data/maps/Hub1/scripts.pory"
	switch VAR_CURRENT_RIVAL
# 200 "data/maps/Hub1/scripts.pory"
	case 0, RivalFight3_2
# 205 "data/maps/Hub1/scripts.pory"
	case 1, RivalFight3_3
	return

RivalFight3_2:
# 201 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_SCEPTILE, RivalFight3_Text_0, RivalFight3_Text_1
# 202 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight3_Text_2, MSGBOX_AUTOCLOSE
# 203 "data/maps/Hub1/scripts.pory"
	waitmessage
	end

RivalFight3_3:
# 206 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_BLAZIKEN, RivalFight3_Text_3, RivalFight3_Text_4
# 207 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight3_Text_4, MSGBOX_AUTOCLOSE
# 208 "data/maps/Hub1/scripts.pory"
	waitmessage
	end


RivalFight4::
# 214 "data/maps/Hub1/scripts.pory"
	switch VAR_CURRENT_RIVAL
# 215 "data/maps/Hub1/scripts.pory"
	case 0, RivalFight4_2
# 220 "data/maps/Hub1/scripts.pory"
	case 1, RivalFight4_3
	return

RivalFight4_2:
# 216 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_MEGASCEPTILE, RivalFight4_Text_0, RivalFight4_Text_1
# 217 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight4_Text_2, MSGBOX_AUTOCLOSE
# 218 "data/maps/Hub1/scripts.pory"
	waitmessage
	end

RivalFight4_3:
# 221 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_MBLAZIKEN, RivalFight4_Text_3, RivalFight4_Text_4
# 222 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight4_Text_5, MSGBOX_AUTOCLOSE
# 223 "data/maps/Hub1/scripts.pory"
	waitmessage
	end


HUB1_Run_Stats_Sign::
# 235 "data/maps/Hub1/scripts.pory"
	lockall
# 237 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TOTAL_RUNS
# 238 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_ACT1_WINS
# 239 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_Run_Stats_Sign_Text_0
# 240 "data/maps/Hub1/scripts.pory"
	waitmessage
# 242 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_ACT3_WINS
# 243 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_ACT4_WINS
# 244 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_ACT2_WINS
# 245 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_Run_Stats_Sign_Text_1
# 246 "data/maps/Hub1/scripts.pory"
	waitmessage
# 248 "data/maps/Hub1/scripts.pory"
	releaseall
	return


HUB1_ONWARP::
# 252 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


HUB1_ONFRAME::
# 256 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_2, 1
# 257 "data/maps/Hub1/scripts.pory"
	call AfterWarpIntoNewAct
# 260 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SYS_NEW_GAME, HUB1_ONFRAME_1
	return

HUB1_ONFRAME_1:
# 261 "data/maps/Hub1/scripts.pory"
	lockall
# 264 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SYS_NEW_GAME
# 265 "data/maps/Hub1/scripts.pory"
	setvar VAR_SHINY_RATE, 4096
# 266 "data/maps/Hub1/scripts.pory"
	setvar VAR_LEVEL_CAP, 14
# 267 "data/maps/Hub1/scripts.pory"
	setvar VAR_CURRENT_DIFFICULTY, 0
# 268 "data/maps/Hub1/scripts.pory"
	setvar VAR_CURRENT_ACT, 0
# 269 "data/maps/Hub1/scripts.pory"
	setvar VAR_TOTAL_RUNS, 0
# 270 "data/maps/Hub1/scripts.pory"
	setvar VAR_ACT1_WINS, 0
# 271 "data/maps/Hub1/scripts.pory"
	setvar VAR_ACT2_WINS, 0
# 272 "data/maps/Hub1/scripts.pory"
	setvar VAR_ACT3_WINS, 0
# 273 "data/maps/Hub1/scripts.pory"
	setvar VAR_ACT4_WINS, 0
# 276 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_ONFRAME_Text_0
# 279 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_1, SPECIES_BULBASAUR
# 280 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_2, SPECIES_CHARMANDER
# 281 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_3, SPECIES_SQUIRTLE
# 282 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_4, SPECIES_CHIKORITA
# 283 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_5, SPECIES_CYNDAQUIL
# 284 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_6, SPECIES_TOTODILE
# 285 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_7, SPECIES_TREECKO
# 286 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_8, SPECIES_TORCHIC
# 287 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_9, SPECIES_MUDKIP
# 288 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_10, SPECIES_TURTWIG
# 289 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_11, SPECIES_CHIMCHAR
# 290 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_12, SPECIES_PIPLUP
# 291 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_13, SPECIES_SNIVY
# 292 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_14, SPECIES_TEPIG
# 293 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_15, SPECIES_OSHAWOTT
# 294 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_16, SPECIES_CHESPIN
# 295 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_17, SPECIES_FENNEKIN
# 296 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_18, SPECIES_FROAKIE
# 297 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_19, SPECIES_ROWLET
# 298 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_20, SPECIES_LITTEN
# 299 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_21, SPECIES_POPPLIO
# 300 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_22, SPECIES_GROOKEY
# 301 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_23, SPECIES_SCORBUNNY
# 302 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_24, SPECIES_SOBBLE
# 303 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_25, SPECIES_SPRIGATITO
# 304 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_26, SPECIES_FUECOCO
# 305 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_27, SPECIES_QUAXLY
# 306 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 308 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 309 "data/maps/Hub1/scripts.pory"
	case SPECIES_BULBASAUR, HUB1_ONFRAME_5
# 313 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHARMANDER, HUB1_ONFRAME_6
# 317 "data/maps/Hub1/scripts.pory"
	case SPECIES_SQUIRTLE, HUB1_ONFRAME_7
# 321 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIKORITA, HUB1_ONFRAME_8
# 325 "data/maps/Hub1/scripts.pory"
	case SPECIES_CYNDAQUIL, HUB1_ONFRAME_9
# 329 "data/maps/Hub1/scripts.pory"
	case SPECIES_TOTODILE, HUB1_ONFRAME_10
# 333 "data/maps/Hub1/scripts.pory"
	case SPECIES_TREECKO, HUB1_ONFRAME_11
# 337 "data/maps/Hub1/scripts.pory"
	case SPECIES_TORCHIC, HUB1_ONFRAME_12
# 341 "data/maps/Hub1/scripts.pory"
	case SPECIES_MUDKIP, HUB1_ONFRAME_13
# 345 "data/maps/Hub1/scripts.pory"
	case SPECIES_TURTWIG, HUB1_ONFRAME_14
# 349 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIMCHAR, HUB1_ONFRAME_15
# 353 "data/maps/Hub1/scripts.pory"
	case SPECIES_PIPLUP, HUB1_ONFRAME_16
# 357 "data/maps/Hub1/scripts.pory"
	case SPECIES_SNIVY, HUB1_ONFRAME_17
# 361 "data/maps/Hub1/scripts.pory"
	case SPECIES_TEPIG, HUB1_ONFRAME_18
# 365 "data/maps/Hub1/scripts.pory"
	case SPECIES_OSHAWOTT, HUB1_ONFRAME_19
# 369 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHESPIN, HUB1_ONFRAME_20
# 373 "data/maps/Hub1/scripts.pory"
	case SPECIES_FENNEKIN, HUB1_ONFRAME_21
# 377 "data/maps/Hub1/scripts.pory"
	case SPECIES_FROAKIE, HUB1_ONFRAME_22
# 381 "data/maps/Hub1/scripts.pory"
	case SPECIES_ROWLET, HUB1_ONFRAME_23
# 385 "data/maps/Hub1/scripts.pory"
	case SPECIES_LITTEN, HUB1_ONFRAME_24
# 389 "data/maps/Hub1/scripts.pory"
	case SPECIES_POPPLIO, HUB1_ONFRAME_25
# 393 "data/maps/Hub1/scripts.pory"
	case SPECIES_GROOKEY, HUB1_ONFRAME_26
# 397 "data/maps/Hub1/scripts.pory"
	case SPECIES_SCORBUNNY, HUB1_ONFRAME_27
# 401 "data/maps/Hub1/scripts.pory"
	case SPECIES_SOBBLE, HUB1_ONFRAME_28
# 405 "data/maps/Hub1/scripts.pory"
	case SPECIES_SPRIGATITO, HUB1_ONFRAME_29
# 409 "data/maps/Hub1/scripts.pory"
	case SPECIES_FUECOCO, HUB1_ONFRAME_30
# 413 "data/maps/Hub1/scripts.pory"
	case SPECIES_QUAXLY, HUB1_ONFRAME_31
HUB1_ONFRAME_3:
# 419 "data/maps/Hub1/scripts.pory"
	special UpdateTransformedPlayerPalette
# 420 "data/maps/Hub1/scripts.pory"
	special UpdatePlayerSprite
# 421 "data/maps/Hub1/scripts.pory"
	releaseall
# 423 "data/maps/Hub1/scripts.pory"
	lockall
# 426 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_ONFRAME_Text_28
# 428 "data/maps/Hub1/scripts.pory"
	releaseall
	return

HUB1_ONFRAME_5:
# 310 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_BULBASAUR, 14
# 311 "data/maps/Hub1/scripts.pory"
	setflag FLAG_BULBASAUR_UNLOCKED
# 312 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_BULBASAUR
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_6:
# 314 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHARMANDER, 14
# 315 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHARMANDER_UNLOCKED
# 316 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHARMANDER
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_7:
# 318 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SQUIRTLE, 14
# 319 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SQUIRTLE_UNLOCKED
# 320 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SQUIRTLE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_8:
# 322 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHIKORITA, 14
# 323 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIKORITA_UNLOCKED
# 324 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHIKORITA
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_9:
# 326 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 14
# 327 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CYNDAQUIL_UNLOCKED
# 328 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CYNDAQUIL
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_10:
# 330 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TOTODILE, 14
# 331 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TOTODILE_UNLOCKED
# 332 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TOTODILE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_11:
# 334 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TREECKO, 14
# 335 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TREECKO_UNLOCKED
# 336 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TREECKO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_12:
# 338 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TORCHIC, 14
# 339 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TORCHIC_UNLOCKED
# 340 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TORCHIC
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_13:
# 342 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_MUDKIP, 14
# 343 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MUDKIP_UNLOCKED
# 344 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_MUDKIP
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_14:
# 346 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TURTWIG, 14
# 347 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TURTWIG_UNLOCKED
# 348 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TURTWIG
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_15:
# 350 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHIMCHAR, 14
# 351 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIMCHAR_UNLOCKED
# 352 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHIMCHAR
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_16:
# 354 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_PIPLUP, 14
# 355 "data/maps/Hub1/scripts.pory"
	setflag FLAG_PIPLUP_UNLOCKED
# 356 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_PIPLUP
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_17:
# 358 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SNIVY, 14
# 359 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SNIVY_UNLOCKED
# 360 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SNIVY
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_18:
# 362 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TEPIG, 14
# 363 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TEPIG_UNLOCKED
# 364 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TEPIG
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_19:
# 366 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_OSHAWOTT, 14
# 367 "data/maps/Hub1/scripts.pory"
	setflag FLAG_OSHAWOTT_UNLOCKED
# 368 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_OSHAWOTT
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_20:
# 370 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHESPIN, 14
# 371 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHESPIN_UNLOCKED
# 372 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHESPIN
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_21:
# 374 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FENNEKIN, 14
# 375 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FENNEKIN_UNLOCKED
# 376 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_FENNEKIN
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_22:
# 378 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FROAKIE, 14
# 379 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FROAKIE_UNLOCKED
# 380 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_FROAKIE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_23:
# 382 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_ROWLET, 14
# 383 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ROWLET_UNLOCKED
# 384 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_ROWLET
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_24:
# 386 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_LITTEN, 14
# 387 "data/maps/Hub1/scripts.pory"
	setflag FLAG_LITTEN_UNLOCKED
# 388 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_LITTEN
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_25:
# 390 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_POPPLIO, 14
# 391 "data/maps/Hub1/scripts.pory"
	setflag FLAG_POPPLIO_UNLOCKED
# 392 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_POPPLIO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_26:
# 394 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_GROOKEY, 14
# 395 "data/maps/Hub1/scripts.pory"
	setflag FLAG_GROOKEY_UNLOCKED
# 396 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_GROOKEY
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_27:
# 398 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SCORBUNNY, 14
# 399 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SCORBUNNY_UNLOCKED
# 400 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SCORBUNNY
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_28:
# 402 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SOBBLE, 14
# 403 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SOBBLE_UNLOCKED
# 404 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SOBBLE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_29:
# 406 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SPRIGATITO, 14
# 407 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SPRIGATITO_UNLOCKED
# 408 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SPRIGATITO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_30:
# 410 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FUECOCO, 14
# 411 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FUECOCO_UNLOCKED
# 412 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_FUECOCO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_31:
# 414 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_QUAXLY, 14
# 415 "data/maps/Hub1/scripts.pory"
	setflag FLAG_QUAXLY_UNLOCKED
# 416 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_QUAXLY
	goto HUB1_ONFRAME_3


Hub_Event_Script_Birch::
# 433 "data/maps/Hub1/scripts.pory"
	lockall
# 434 "data/maps/Hub1/scripts.pory"
	faceplayer
# 435 "data/maps/Hub1/scripts.pory"
backtomain:
# 436 "data/maps/Hub1/scripts.pory"
	messageinstant Hub_Event_Script_Birch_Text_0
# 437 "data/maps/Hub1/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Hub_Event_Script_Birch_Text_1, Hub_Event_Script_Birch_Text_2
# 438 "data/maps/Hub1/scripts.pory"
	closemessage
# 439 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 440 "data/maps/Hub1/scripts.pory"
	case MULTI_B_PRESSED, Hub_Event_Script_Birch_2
# 444 "data/maps/Hub1/scripts.pory"
	case 0, Hub_Event_Script_Birch_3
# 475 "data/maps/Hub1/scripts.pory"
	case 1, Hub_Event_Script_Birch_4
	return

Hub_Event_Script_Birch_2:
# 441 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_3
# 442 "data/maps/Hub1/scripts.pory"
	releaseall
	end

Hub_Event_Script_Birch_3:
# 445 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_4, MSGBOX_YESNO
# 446 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 447 "data/maps/Hub1/scripts.pory"
	case YES, Hub_Event_Script_Birch_6
# 470 "data/maps/Hub1/scripts.pory"
	case NO, Hub_Event_Script_Birch_7
	return

Hub_Event_Script_Birch_4:
# 476 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CURRENT_DIFFICULTY
# 477 "data/maps/Hub1/scripts.pory"
	messageinstant Hub_Event_Script_Birch_Text_8
# 478 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_9, 0
# 479 "data/maps/Hub1/scripts.pory"
	compare VAR_UNLOCKED_DIFFICULTY, 0
	goto_if_gt Hub_Event_Script_Birch_9
Hub_Event_Script_Birch_8:
# 480 "data/maps/Hub1/scripts.pory"
	compare VAR_UNLOCKED_DIFFICULTY, 1
	goto_if_gt Hub_Event_Script_Birch_12
Hub_Event_Script_Birch_11:
# 481 "data/maps/Hub1/scripts.pory"
	compare VAR_UNLOCKED_DIFFICULTY, 2
	goto_if_gt Hub_Event_Script_Birch_15
Hub_Event_Script_Birch_14:
# 482 "data/maps/Hub1/scripts.pory"
	compare VAR_UNLOCKED_DIFFICULTY, 3
	goto_if_gt Hub_Event_Script_Birch_18
Hub_Event_Script_Birch_17:
# 483 "data/maps/Hub1/scripts.pory"
	compare VAR_UNLOCKED_DIFFICULTY, 4
	goto_if_gt Hub_Event_Script_Birch_21
Hub_Event_Script_Birch_20:
# 484 "data/maps/Hub1/scripts.pory"
	compare VAR_UNLOCKED_DIFFICULTY, 5
	goto_if_gt Hub_Event_Script_Birch_24
Hub_Event_Script_Birch_23:
# 485 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 486 "data/maps/Hub1/scripts.pory"
	closemessage
# 487 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 488 "data/maps/Hub1/scripts.pory"
	case MULTI_B_PRESSED, Hub_Event_Script_Birch_27
# 491 "data/maps/Hub1/scripts.pory"
	case 0, Hub_Event_Script_Birch_28
# 492 "data/maps/Hub1/scripts.pory"
	case 1, Hub_Event_Script_Birch_28
# 493 "data/maps/Hub1/scripts.pory"
	case 2, Hub_Event_Script_Birch_28
# 494 "data/maps/Hub1/scripts.pory"
	case 3, Hub_Event_Script_Birch_28
# 495 "data/maps/Hub1/scripts.pory"
	case 4, Hub_Event_Script_Birch_28
# 496 "data/maps/Hub1/scripts.pory"
	case 5, Hub_Event_Script_Birch_28
# 497 "data/maps/Hub1/scripts.pory"
	case 6, Hub_Event_Script_Birch_28
	return

Hub_Event_Script_Birch_6:
# 448 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_5
# 449 "data/maps/Hub1/scripts.pory"
	closemessage
# 450 "data/maps/Hub1/scripts.pory"
	applymovement Chimecho, Hub_Event_Script_Birch_Movement_0
# 454 "data/maps/Hub1/scripts.pory"
	waitmovement
# 455 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_6
# 456 "data/maps/Hub1/scripts.pory"
	call GiveStarterCharm
# 457 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_7
# 458 "data/maps/Hub1/scripts.pory"
	closemessage
# 459 "data/maps/Hub1/scripts.pory"
	applymovement Birch, Hub_Event_Script_Birch_Movement_1
# 464 "data/maps/Hub1/scripts.pory"
	waitmovement
# 465 "data/maps/Hub1/scripts.pory"
	applymovement LOCALID_PLAYER, Hub_Event_Script_Birch_Movement_2
# 468 "data/maps/Hub1/scripts.pory"
	waitmovement
# 469 "data/maps/Hub1/scripts.pory"
	special WarpToNextAct
	return

Hub_Event_Script_Birch_7:
# 471 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_3
# 472 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Birch_9:
# 479 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_10, 1
	goto Hub_Event_Script_Birch_8

Hub_Event_Script_Birch_12:
# 480 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_11, 2
	goto Hub_Event_Script_Birch_11

Hub_Event_Script_Birch_15:
# 481 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_12, 3
	goto Hub_Event_Script_Birch_14

Hub_Event_Script_Birch_18:
# 482 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_13, 4
	goto Hub_Event_Script_Birch_17

Hub_Event_Script_Birch_21:
# 483 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_14, 5
	goto Hub_Event_Script_Birch_20

Hub_Event_Script_Birch_24:
# 484 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_15, 6
	goto Hub_Event_Script_Birch_23

Hub_Event_Script_Birch_27:
# 489 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_16
# 490 "data/maps/Hub1/scripts.pory"
	goto backtomain
	return

Hub_Event_Script_Birch_28:
# 498 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 499 "data/maps/Hub1/scripts.pory"
	copyvar VAR_CURRENT_DIFFICULTY, VAR_RESULT
# 500 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_17
# 501 "data/maps/Hub1/scripts.pory"
	goto backtomain
	return


Hub_Event_Script_Miltank::
# 508 "data/maps/Hub1/scripts.pory"
	lockall
# 509 "data/maps/Hub1/scripts.pory"
	faceplayer
# 510 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 512 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_BULBASAUR_UNLOCKED, Hub_Event_Script_Miltank_2
Hub_Event_Script_Miltank_1:
# 513 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHARMANDER_UNLOCKED, Hub_Event_Script_Miltank_5
Hub_Event_Script_Miltank_4:
# 514 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SQUIRTLE_UNLOCKED, Hub_Event_Script_Miltank_8
Hub_Event_Script_Miltank_7:
# 515 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHIKORITA_UNLOCKED, Hub_Event_Script_Miltank_11
Hub_Event_Script_Miltank_10:
# 516 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CYNDAQUIL_UNLOCKED, Hub_Event_Script_Miltank_14
Hub_Event_Script_Miltank_13:
# 517 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TOTODILE_UNLOCKED, Hub_Event_Script_Miltank_17
Hub_Event_Script_Miltank_16:
# 518 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TREECKO_UNLOCKED, Hub_Event_Script_Miltank_20
Hub_Event_Script_Miltank_19:
# 519 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TORCHIC_UNLOCKED, Hub_Event_Script_Miltank_23
Hub_Event_Script_Miltank_22:
# 520 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MUDKIP_UNLOCKED, Hub_Event_Script_Miltank_26
Hub_Event_Script_Miltank_25:
# 521 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TURTWIG_UNLOCKED, Hub_Event_Script_Miltank_29
Hub_Event_Script_Miltank_28:
# 522 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHIMCHAR_UNLOCKED, Hub_Event_Script_Miltank_32
Hub_Event_Script_Miltank_31:
# 523 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_PIPLUP_UNLOCKED, Hub_Event_Script_Miltank_35
Hub_Event_Script_Miltank_34:
# 524 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SNIVY_UNLOCKED, Hub_Event_Script_Miltank_38
Hub_Event_Script_Miltank_37:
# 525 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TEPIG_UNLOCKED, Hub_Event_Script_Miltank_41
Hub_Event_Script_Miltank_40:
# 526 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_OSHAWOTT_UNLOCKED, Hub_Event_Script_Miltank_44
Hub_Event_Script_Miltank_43:
# 527 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHESPIN_UNLOCKED, Hub_Event_Script_Miltank_47
Hub_Event_Script_Miltank_46:
# 528 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FENNEKIN_UNLOCKED, Hub_Event_Script_Miltank_50
Hub_Event_Script_Miltank_49:
# 529 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FROAKIE_UNLOCKED, Hub_Event_Script_Miltank_53
Hub_Event_Script_Miltank_52:
# 530 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ROWLET_UNLOCKED, Hub_Event_Script_Miltank_56
Hub_Event_Script_Miltank_55:
# 531 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_LITTEN_UNLOCKED, Hub_Event_Script_Miltank_59
Hub_Event_Script_Miltank_58:
# 532 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_POPPLIO_UNLOCKED, Hub_Event_Script_Miltank_62
Hub_Event_Script_Miltank_61:
# 533 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_GROOKEY_UNLOCKED, Hub_Event_Script_Miltank_65
Hub_Event_Script_Miltank_64:
# 534 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SCORBUNNY_UNLOCKED, Hub_Event_Script_Miltank_68
Hub_Event_Script_Miltank_67:
# 535 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SOBBLE_UNLOCKED, Hub_Event_Script_Miltank_71
Hub_Event_Script_Miltank_70:
# 536 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SPRIGATITO_UNLOCKED, Hub_Event_Script_Miltank_74
Hub_Event_Script_Miltank_73:
# 537 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FUECOCO_UNLOCKED, Hub_Event_Script_Miltank_77
Hub_Event_Script_Miltank_76:
# 538 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_QUAXLY_UNLOCKED, Hub_Event_Script_Miltank_80
Hub_Event_Script_Miltank_79:
# 540 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Miltank_82
# 878 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_57
# 879 "data/maps/Hub1/scripts.pory"
	waitmessage
# 880 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Miltank_2:
# 512 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_0, SPECIES_BULBASAUR
# 512 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_1

Hub_Event_Script_Miltank_5:
# 513 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_1, SPECIES_CHARMANDER
# 513 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_4

Hub_Event_Script_Miltank_8:
# 514 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_2, SPECIES_SQUIRTLE
# 514 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_7

Hub_Event_Script_Miltank_11:
# 515 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_3, SPECIES_CHIKORITA
# 515 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_10

Hub_Event_Script_Miltank_14:
# 516 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_4, SPECIES_CYNDAQUIL
# 516 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_13

Hub_Event_Script_Miltank_17:
# 517 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_5, SPECIES_TOTODILE
# 517 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_16

Hub_Event_Script_Miltank_20:
# 518 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_6, SPECIES_TREECKO
# 518 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_19

Hub_Event_Script_Miltank_23:
# 519 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_7, SPECIES_TORCHIC
# 519 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_22

Hub_Event_Script_Miltank_26:
# 520 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_8, SPECIES_MUDKIP
# 520 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_25

Hub_Event_Script_Miltank_29:
# 521 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_9, SPECIES_TURTWIG
# 521 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_28

Hub_Event_Script_Miltank_32:
# 522 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_10, SPECIES_CHIMCHAR
# 522 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_31

Hub_Event_Script_Miltank_35:
# 523 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_11, SPECIES_PIPLUP
# 523 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_34

Hub_Event_Script_Miltank_38:
# 524 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_12, SPECIES_SNIVY
# 524 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_37

Hub_Event_Script_Miltank_41:
# 525 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_13, SPECIES_TEPIG
# 525 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_40

Hub_Event_Script_Miltank_44:
# 526 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_14, SPECIES_OSHAWOTT
# 526 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_43

Hub_Event_Script_Miltank_47:
# 527 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_15, SPECIES_CHESPIN
# 527 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_46

Hub_Event_Script_Miltank_50:
# 528 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_16, SPECIES_FENNEKIN
# 528 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_49

Hub_Event_Script_Miltank_53:
# 529 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_17, SPECIES_FROAKIE
# 529 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_52

Hub_Event_Script_Miltank_56:
# 530 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_18, SPECIES_ROWLET
# 530 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_55

Hub_Event_Script_Miltank_59:
# 531 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_19, SPECIES_LITTEN
# 531 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_58

Hub_Event_Script_Miltank_62:
# 532 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_20, SPECIES_POPPLIO
# 532 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_61

Hub_Event_Script_Miltank_65:
# 533 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_21, SPECIES_GROOKEY
# 533 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_64

Hub_Event_Script_Miltank_68:
# 534 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_22, SPECIES_SCORBUNNY
# 534 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_67

Hub_Event_Script_Miltank_71:
# 535 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_23, SPECIES_SOBBLE
# 535 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_70

Hub_Event_Script_Miltank_74:
# 536 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_24, SPECIES_SPRIGATITO
# 536 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_73

Hub_Event_Script_Miltank_77:
# 537 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_25, SPECIES_FUECOCO
# 537 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_76

Hub_Event_Script_Miltank_80:
# 538 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_26, SPECIES_QUAXLY
# 538 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_79

Hub_Event_Script_Miltank_82:
# 541 "data/maps/Hub1/scripts.pory"
	showcoinsbox 21, 11
# 542 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_27
# 543 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 544 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 545 "data/maps/Hub1/scripts.pory"
	case MULTI_B_PRESSED, Hub_Event_Script_Miltank_87
# 550 "data/maps/Hub1/scripts.pory"
	case SPECIES_BULBASAUR, Hub_Event_Script_Miltank_88
# 562 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHARMANDER, Hub_Event_Script_Miltank_89
# 574 "data/maps/Hub1/scripts.pory"
	case SPECIES_SQUIRTLE, Hub_Event_Script_Miltank_90
# 586 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIKORITA, Hub_Event_Script_Miltank_91
# 598 "data/maps/Hub1/scripts.pory"
	case SPECIES_CYNDAQUIL, Hub_Event_Script_Miltank_92
# 610 "data/maps/Hub1/scripts.pory"
	case SPECIES_TOTODILE, Hub_Event_Script_Miltank_93
# 622 "data/maps/Hub1/scripts.pory"
	case SPECIES_TREECKO, Hub_Event_Script_Miltank_94
# 634 "data/maps/Hub1/scripts.pory"
	case SPECIES_TORCHIC, Hub_Event_Script_Miltank_95
# 646 "data/maps/Hub1/scripts.pory"
	case SPECIES_MUDKIP, Hub_Event_Script_Miltank_96
# 658 "data/maps/Hub1/scripts.pory"
	case SPECIES_TURTWIG, Hub_Event_Script_Miltank_97
# 670 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIMCHAR, Hub_Event_Script_Miltank_98
# 682 "data/maps/Hub1/scripts.pory"
	case SPECIES_PIPLUP, Hub_Event_Script_Miltank_99
# 694 "data/maps/Hub1/scripts.pory"
	case SPECIES_SNIVY, Hub_Event_Script_Miltank_100
# 706 "data/maps/Hub1/scripts.pory"
	case SPECIES_TEPIG, Hub_Event_Script_Miltank_101
# 718 "data/maps/Hub1/scripts.pory"
	case SPECIES_OSHAWOTT, Hub_Event_Script_Miltank_102
# 730 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHESPIN, Hub_Event_Script_Miltank_103
# 742 "data/maps/Hub1/scripts.pory"
	case SPECIES_FENNEKIN, Hub_Event_Script_Miltank_104
# 754 "data/maps/Hub1/scripts.pory"
	case SPECIES_FROAKIE, Hub_Event_Script_Miltank_105
# 766 "data/maps/Hub1/scripts.pory"
	case SPECIES_ROWLET, Hub_Event_Script_Miltank_106
# 778 "data/maps/Hub1/scripts.pory"
	case SPECIES_LITTEN, Hub_Event_Script_Miltank_107
# 790 "data/maps/Hub1/scripts.pory"
	case SPECIES_POPPLIO, Hub_Event_Script_Miltank_108
# 802 "data/maps/Hub1/scripts.pory"
	case SPECIES_GROOKEY, Hub_Event_Script_Miltank_109
# 814 "data/maps/Hub1/scripts.pory"
	case SPECIES_SCORBUNNY, Hub_Event_Script_Miltank_110
# 826 "data/maps/Hub1/scripts.pory"
	case SPECIES_SOBBLE, Hub_Event_Script_Miltank_111
# 838 "data/maps/Hub1/scripts.pory"
	case SPECIES_SPRIGATITO, Hub_Event_Script_Miltank_112
# 850 "data/maps/Hub1/scripts.pory"
	case SPECIES_FUECOCO, Hub_Event_Script_Miltank_113
# 862 "data/maps/Hub1/scripts.pory"
	case SPECIES_QUAXLY, Hub_Event_Script_Miltank_114
Hub_Event_Script_Miltank_85:
# 875 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
# 876 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Miltank_87:
# 546 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
# 547 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_28
# 548 "data/maps/Hub1/scripts.pory"
	releaseall
	end

Hub_Event_Script_Miltank_88:
# 551 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 552 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_115
# 560 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_89:
# 563 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 564 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_118
# 572 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_90:
# 575 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 576 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_121
# 584 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_91:
# 587 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 588 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_124
# 596 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_92:
# 599 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 600 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_127
# 608 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_93:
# 611 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 612 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_130
# 620 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_94:
# 623 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 624 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_133
# 632 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_95:
# 635 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 636 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_136
# 644 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_96:
# 647 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 648 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_139
# 656 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_97:
# 659 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 660 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_142
# 668 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_98:
# 671 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 672 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_145
# 680 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_99:
# 683 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 684 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_148
# 692 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_100:
# 695 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 696 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_151
# 704 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_101:
# 707 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 708 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_154
# 716 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_102:
# 719 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 720 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_157
# 728 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_103:
# 731 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 732 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_160
# 740 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_104:
# 743 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 744 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_163
# 752 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_105:
# 755 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 756 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_166
# 764 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_106:
# 767 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 768 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_169
# 776 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_107:
# 779 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 780 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_172
# 788 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_108:
# 791 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 792 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_175
# 800 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_109:
# 803 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 804 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_178
# 812 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_110:
# 815 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 816 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_181
# 824 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_111:
# 827 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 828 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_184
# 836 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_112:
# 839 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 840 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_187
# 848 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_113:
# 851 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 852 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_190
# 860 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_114:
# 863 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 864 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_193
# 872 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_115:
# 553 "data/maps/Hub1/scripts.pory"
	setflag FLAG_BULBASAUR_UNLOCKED
# 554 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 555 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 556 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 557 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_118:
# 565 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHARMANDER_UNLOCKED
# 566 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 567 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 568 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 569 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_31
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_121:
# 577 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SQUIRTLE_UNLOCKED
# 578 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 579 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 580 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 581 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_32
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_124:
# 589 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIKORITA_UNLOCKED
# 590 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 591 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 592 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 593 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_33
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_127:
# 601 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CYNDAQUIL_UNLOCKED
# 602 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 603 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 604 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 605 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_34
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_130:
# 613 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TOTODILE_UNLOCKED
# 614 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 615 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 616 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 617 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_35
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_133:
# 625 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TREECKO_UNLOCKED
# 626 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 627 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 628 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 629 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_36
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_136:
# 637 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TORCHIC_UNLOCKED
# 638 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 639 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 640 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 641 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_37
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_139:
# 649 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MUDKIP_UNLOCKED
# 650 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 651 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 652 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 653 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_38
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_142:
# 661 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TURTWIG_UNLOCKED
# 662 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 663 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 664 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 665 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_39
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_145:
# 673 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIMCHAR_UNLOCKED
# 674 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 675 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 676 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 677 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_40
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_148:
# 685 "data/maps/Hub1/scripts.pory"
	setflag FLAG_PIPLUP_UNLOCKED
# 686 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 687 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 688 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 689 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_41
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_151:
# 697 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SNIVY_UNLOCKED
# 698 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 699 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 700 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 701 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_42
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_154:
# 709 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TEPIG_UNLOCKED
# 710 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 711 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 712 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 713 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_43
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_157:
# 721 "data/maps/Hub1/scripts.pory"
	setflag FLAG_OSHAWOTT_UNLOCKED
# 722 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 723 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 724 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 725 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_44
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_160:
# 733 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHESPIN_UNLOCKED
# 734 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 735 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 736 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 737 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_45
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_163:
# 745 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FENNEKIN_UNLOCKED
# 746 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 747 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 748 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 749 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_46
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_166:
# 757 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FROAKIE_UNLOCKED
# 758 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 759 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 760 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 761 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_47
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_169:
# 769 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ROWLET_UNLOCKED
# 770 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 771 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 772 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 773 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_48
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_172:
# 781 "data/maps/Hub1/scripts.pory"
	setflag FLAG_LITTEN_UNLOCKED
# 782 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 783 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 784 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 785 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_49
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_175:
# 793 "data/maps/Hub1/scripts.pory"
	setflag FLAG_POPPLIO_UNLOCKED
# 794 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 795 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 796 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 797 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_50
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_178:
# 805 "data/maps/Hub1/scripts.pory"
	setflag FLAG_GROOKEY_UNLOCKED
# 806 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 807 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 808 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 809 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_51
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_181:
# 817 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SCORBUNNY_UNLOCKED
# 818 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 819 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 820 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 821 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_52
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_184:
# 829 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SOBBLE_UNLOCKED
# 830 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 831 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 832 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 833 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_53
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_187:
# 841 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SPRIGATITO_UNLOCKED
# 842 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 843 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 844 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 845 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_54
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_190:
# 853 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FUECOCO_UNLOCKED
# 854 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 855 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 856 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 857 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_55
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_193:
# 865 "data/maps/Hub1/scripts.pory"
	setflag FLAG_QUAXLY_UNLOCKED
# 866 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 867 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 868 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 869 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_56
	goto Hub_Event_Script_Miltank_85


Hub_Event_Script_Chansey::
# 886 "data/maps/Hub1/scripts.pory"
	lockall
# 887 "data/maps/Hub1/scripts.pory"
	faceplayer
# 888 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 889 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_BULBASAUR_UNLOCKED, Hub_Event_Script_Chansey_3
Hub_Event_Script_Chansey_1:
# 890 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHARMANDER_UNLOCKED, Hub_Event_Script_Chansey_8
Hub_Event_Script_Chansey_6:
# 891 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SQUIRTLE_UNLOCKED, Hub_Event_Script_Chansey_13
Hub_Event_Script_Chansey_11:
# 892 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHIKORITA_UNLOCKED, Hub_Event_Script_Chansey_18
Hub_Event_Script_Chansey_16:
# 893 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CYNDAQUIL_UNLOCKED, Hub_Event_Script_Chansey_23
Hub_Event_Script_Chansey_21:
# 894 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TOTODILE_UNLOCKED, Hub_Event_Script_Chansey_28
Hub_Event_Script_Chansey_26:
# 895 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TREECKO_UNLOCKED, Hub_Event_Script_Chansey_33
Hub_Event_Script_Chansey_31:
# 896 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TORCHIC_UNLOCKED, Hub_Event_Script_Chansey_38
Hub_Event_Script_Chansey_36:
# 897 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_MUDKIP_UNLOCKED, Hub_Event_Script_Chansey_43
Hub_Event_Script_Chansey_41:
# 898 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TURTWIG_UNLOCKED, Hub_Event_Script_Chansey_48
Hub_Event_Script_Chansey_46:
# 899 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHIMCHAR_UNLOCKED, Hub_Event_Script_Chansey_53
Hub_Event_Script_Chansey_51:
# 900 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_PIPLUP_UNLOCKED, Hub_Event_Script_Chansey_58
Hub_Event_Script_Chansey_56:
# 901 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SNIVY_UNLOCKED, Hub_Event_Script_Chansey_63
Hub_Event_Script_Chansey_61:
# 902 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TEPIG_UNLOCKED, Hub_Event_Script_Chansey_68
Hub_Event_Script_Chansey_66:
# 903 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_OSHAWOTT_UNLOCKED, Hub_Event_Script_Chansey_73
Hub_Event_Script_Chansey_71:
# 904 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHESPIN_UNLOCKED, Hub_Event_Script_Chansey_78
Hub_Event_Script_Chansey_76:
# 905 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FENNEKIN_UNLOCKED, Hub_Event_Script_Chansey_83
Hub_Event_Script_Chansey_81:
# 906 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FROAKIE_UNLOCKED, Hub_Event_Script_Chansey_88
Hub_Event_Script_Chansey_86:
# 907 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ROWLET_UNLOCKED, Hub_Event_Script_Chansey_93
Hub_Event_Script_Chansey_91:
# 908 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_LITTEN_UNLOCKED, Hub_Event_Script_Chansey_98
Hub_Event_Script_Chansey_96:
# 909 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_POPPLIO_UNLOCKED, Hub_Event_Script_Chansey_103
Hub_Event_Script_Chansey_101:
# 910 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_GROOKEY_UNLOCKED, Hub_Event_Script_Chansey_108
Hub_Event_Script_Chansey_106:
# 911 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SCORBUNNY_UNLOCKED, Hub_Event_Script_Chansey_113
Hub_Event_Script_Chansey_111:
# 912 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SOBBLE_UNLOCKED, Hub_Event_Script_Chansey_118
Hub_Event_Script_Chansey_116:
# 913 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPRIGATITO_UNLOCKED, Hub_Event_Script_Chansey_123
Hub_Event_Script_Chansey_121:
# 914 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FUECOCO_UNLOCKED, Hub_Event_Script_Chansey_128
Hub_Event_Script_Chansey_126:
# 915 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_QUAXLY_UNLOCKED, Hub_Event_Script_Chansey_133
Hub_Event_Script_Chansey_131:
# 917 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Chansey_136
# 940 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_2
# 941 "data/maps/Hub1/scripts.pory"
	waitmessage
# 942 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Chansey_2:
# 889 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_1, SPECIES_BULBASAUR
# 889 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_1

Hub_Event_Script_Chansey_3:
# 889 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_BULBASAUR
	goto_if_ne Hub_Event_Script_Chansey_2
	goto Hub_Event_Script_Chansey_1

Hub_Event_Script_Chansey_7:
# 890 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_2, SPECIES_CHARMANDER
# 890 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_6

Hub_Event_Script_Chansey_8:
# 890 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHARMANDER
	goto_if_ne Hub_Event_Script_Chansey_7
	goto Hub_Event_Script_Chansey_6

Hub_Event_Script_Chansey_12:
# 891 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_3, SPECIES_SQUIRTLE
# 891 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_11

Hub_Event_Script_Chansey_13:
# 891 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SQUIRTLE
	goto_if_ne Hub_Event_Script_Chansey_12
	goto Hub_Event_Script_Chansey_11

Hub_Event_Script_Chansey_17:
# 892 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_4, SPECIES_CHIKORITA
# 892 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_16

Hub_Event_Script_Chansey_18:
# 892 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHIKORITA
	goto_if_ne Hub_Event_Script_Chansey_17
	goto Hub_Event_Script_Chansey_16

Hub_Event_Script_Chansey_22:
# 893 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_5, SPECIES_CYNDAQUIL
# 893 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_21

Hub_Event_Script_Chansey_23:
# 893 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CYNDAQUIL
	goto_if_ne Hub_Event_Script_Chansey_22
	goto Hub_Event_Script_Chansey_21

Hub_Event_Script_Chansey_27:
# 894 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_6, SPECIES_TOTODILE
# 894 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_26

Hub_Event_Script_Chansey_28:
# 894 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TOTODILE
	goto_if_ne Hub_Event_Script_Chansey_27
	goto Hub_Event_Script_Chansey_26

Hub_Event_Script_Chansey_32:
# 895 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_7, SPECIES_TREECKO
# 895 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_31

Hub_Event_Script_Chansey_33:
# 895 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TREECKO
	goto_if_ne Hub_Event_Script_Chansey_32
	goto Hub_Event_Script_Chansey_31

Hub_Event_Script_Chansey_37:
# 896 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_8, SPECIES_TORCHIC
# 896 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_36

Hub_Event_Script_Chansey_38:
# 896 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TORCHIC
	goto_if_ne Hub_Event_Script_Chansey_37
	goto Hub_Event_Script_Chansey_36

Hub_Event_Script_Chansey_42:
# 897 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_9, SPECIES_MUDKIP
# 897 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_41

Hub_Event_Script_Chansey_43:
# 897 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_MUDKIP
	goto_if_ne Hub_Event_Script_Chansey_42
	goto Hub_Event_Script_Chansey_41

Hub_Event_Script_Chansey_47:
# 898 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_10, SPECIES_TURTWIG
# 898 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_46

Hub_Event_Script_Chansey_48:
# 898 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TURTWIG
	goto_if_ne Hub_Event_Script_Chansey_47
	goto Hub_Event_Script_Chansey_46

Hub_Event_Script_Chansey_52:
# 899 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_11, SPECIES_CHIMCHAR
# 899 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_51

Hub_Event_Script_Chansey_53:
# 899 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHIMCHAR
	goto_if_ne Hub_Event_Script_Chansey_52
	goto Hub_Event_Script_Chansey_51

Hub_Event_Script_Chansey_57:
# 900 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_12, SPECIES_PIPLUP
# 900 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_56

Hub_Event_Script_Chansey_58:
# 900 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_PIPLUP
	goto_if_ne Hub_Event_Script_Chansey_57
	goto Hub_Event_Script_Chansey_56

Hub_Event_Script_Chansey_62:
# 901 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_13, SPECIES_SNIVY
# 901 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_61

Hub_Event_Script_Chansey_63:
# 901 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SNIVY
	goto_if_ne Hub_Event_Script_Chansey_62
	goto Hub_Event_Script_Chansey_61

Hub_Event_Script_Chansey_67:
# 902 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_14, SPECIES_TEPIG
# 902 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_66

Hub_Event_Script_Chansey_68:
# 902 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TEPIG
	goto_if_ne Hub_Event_Script_Chansey_67
	goto Hub_Event_Script_Chansey_66

Hub_Event_Script_Chansey_72:
# 903 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_15, SPECIES_OSHAWOTT
# 903 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_71

Hub_Event_Script_Chansey_73:
# 903 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_OSHAWOTT
	goto_if_ne Hub_Event_Script_Chansey_72
	goto Hub_Event_Script_Chansey_71

Hub_Event_Script_Chansey_77:
# 904 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_16, SPECIES_CHESPIN
# 904 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_76

Hub_Event_Script_Chansey_78:
# 904 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHESPIN
	goto_if_ne Hub_Event_Script_Chansey_77
	goto Hub_Event_Script_Chansey_76

Hub_Event_Script_Chansey_82:
# 905 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_17, SPECIES_FENNEKIN
# 905 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_81

Hub_Event_Script_Chansey_83:
# 905 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FENNEKIN
	goto_if_ne Hub_Event_Script_Chansey_82
	goto Hub_Event_Script_Chansey_81

Hub_Event_Script_Chansey_87:
# 906 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_18, SPECIES_FROAKIE
# 906 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_86

Hub_Event_Script_Chansey_88:
# 906 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FROAKIE
	goto_if_ne Hub_Event_Script_Chansey_87
	goto Hub_Event_Script_Chansey_86

Hub_Event_Script_Chansey_92:
# 907 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_19, SPECIES_ROWLET
# 907 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_91

Hub_Event_Script_Chansey_93:
# 907 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_ROWLET
	goto_if_ne Hub_Event_Script_Chansey_92
	goto Hub_Event_Script_Chansey_91

Hub_Event_Script_Chansey_97:
# 908 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_20, SPECIES_LITTEN
# 908 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_96

Hub_Event_Script_Chansey_98:
# 908 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_LITTEN
	goto_if_ne Hub_Event_Script_Chansey_97
	goto Hub_Event_Script_Chansey_96

Hub_Event_Script_Chansey_102:
# 909 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_21, SPECIES_POPPLIO
# 909 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_101

Hub_Event_Script_Chansey_103:
# 909 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_POPPLIO
	goto_if_ne Hub_Event_Script_Chansey_102
	goto Hub_Event_Script_Chansey_101

Hub_Event_Script_Chansey_107:
# 910 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_22, SPECIES_GROOKEY
# 910 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_106

Hub_Event_Script_Chansey_108:
# 910 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_GROOKEY
	goto_if_ne Hub_Event_Script_Chansey_107
	goto Hub_Event_Script_Chansey_106

Hub_Event_Script_Chansey_112:
# 911 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_23, SPECIES_SCORBUNNY
# 911 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_111

Hub_Event_Script_Chansey_113:
# 911 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SCORBUNNY
	goto_if_ne Hub_Event_Script_Chansey_112
	goto Hub_Event_Script_Chansey_111

Hub_Event_Script_Chansey_117:
# 912 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_24, SPECIES_SOBBLE
# 912 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_116

Hub_Event_Script_Chansey_118:
# 912 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SOBBLE
	goto_if_ne Hub_Event_Script_Chansey_117
	goto Hub_Event_Script_Chansey_116

Hub_Event_Script_Chansey_122:
# 913 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_25, SPECIES_SPRIGATITO
# 913 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_121

Hub_Event_Script_Chansey_123:
# 913 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SPRIGATITO
	goto_if_ne Hub_Event_Script_Chansey_122
	goto Hub_Event_Script_Chansey_121

Hub_Event_Script_Chansey_127:
# 914 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_26, SPECIES_FUECOCO
# 914 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_126

Hub_Event_Script_Chansey_128:
# 914 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FUECOCO
	goto_if_ne Hub_Event_Script_Chansey_127
	goto Hub_Event_Script_Chansey_126

Hub_Event_Script_Chansey_132:
# 915 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_27, SPECIES_QUAXLY
# 915 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_131

Hub_Event_Script_Chansey_133:
# 915 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_QUAXLY
	goto_if_ne Hub_Event_Script_Chansey_132
	goto Hub_Event_Script_Chansey_131

Hub_Event_Script_Chansey_136:
# 918 "data/maps/Hub1/scripts.pory"
	setvar VAR_RESULT, 0
# 919 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_0
# 920 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 922 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_ne Hub_Event_Script_Chansey_139
# 937 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Chansey_139:
# 923 "data/maps/Hub1/scripts.pory"
	copyvar VAR_STARTER_MON, VAR_RESULT
# 924 "data/maps/Hub1/scripts.pory"
	special ZeroPlayerPartyMons
# 925 "data/maps/Hub1/scripts.pory"
	special GiveSavedStarter
# 926 "data/maps/Hub1/scripts.pory"
	special UpdatePlayerSprite
# 927 "data/maps/Hub1/scripts.pory"
	special UpdateTransformedPlayerPalette
# 928 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 929 "data/maps/Hub1/scripts.pory"
	releaseall
# 930 "data/maps/Hub1/scripts.pory"
	lockall
# 931 "data/maps/Hub1/scripts.pory"
	playse SE_SUCCESS
# 932 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_1
# 933 "data/maps/Hub1/scripts.pory"
	waitmessage
# 934 "data/maps/Hub1/scripts.pory"
	releaseall
	return


KecShop_Sign::
# 946 "data/maps/Hub1/scripts.pory"
	lockall
# 947 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Sign_Text_0
# 948 "data/maps/Hub1/scripts.pory"
	waitmessage
# 949 "data/maps/Hub1/scripts.pory"
	releaseall
	return


KecShop::
# 953 "data/maps/Hub1/scripts.pory"
	lockall
# 954 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Sign_Text_0
# 955 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_0, ITEM_ORAN_BERRY
# 956 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_1, ITEM_MEMORY_MUSHROOM
# 957 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
# 958 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_LUM_BERRY_BUYABLE, KecShop_2
KecShop_1:
# 962 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SERIOUS_MINT_BUYABLE, KecShop_5
KecShop_4:
# 966 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_RARE_CANDY_BUYABLE, KecShop_8
KecShop_7:
# 970 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_POCKET_BIRCH_BAG_BUYABLE, KecShop_11
KecShop_10:
# 974 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_HP_BOTTLE_CAP_BUYABLE, KecShop_14
KecShop_13:
# 978 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ATK_BOTTLE_CAP_BUYABLE, KecShop_17
KecShop_16:
# 982 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_DEF_BOTTLE_CAP_BUYABLE, KecShop_20
KecShop_19:
# 986 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPEED_BOTTLE_CAP_BUYABLE, KecShop_23
KecShop_22:
# 990 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPATK_BOTTLE_CAP_BUYABLE, KecShop_26
KecShop_25:
# 994 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPDEF_BOTTLE_CAP_BUYABLE, KecShop_29
KecShop_28:
# 998 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_HP_GOLD_BOTTLE_CAP_BUYABLE, KecShop_32
KecShop_31:
# 1002 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ATK_GOLD_BOTTLE_CAP_BUYABLE, KecShop_35
KecShop_34:
# 1006 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_DEF_GOLD_BOTTLE_CAP_BUYABLE, KecShop_38
KecShop_37:
# 1010 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPEED_GOLD_BOTTLE_CAP_BUYABLE, KecShop_41
KecShop_40:
# 1014 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPATK_GOLD_BOTTLE_CAP_BUYABLE, KecShop_44
KecShop_43:
# 1018 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPDEF_GOLD_BOTTLE_CAP_BUYABLE, KecShop_47
KecShop_46:
# 1024 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne KecShop_50
# 1123 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
# 1124 "data/maps/Hub1/scripts.pory"
	waitmessage
# 1125 "data/maps/Hub1/scripts.pory"
	releaseall
KecShop_49:
# 1127 "data/maps/Hub1/scripts.pory"
	releaseall
	return

KecShop_2:
# 959 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_2, ITEM_LUM_BERRY
# 960 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_1

KecShop_5:
# 963 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_3, ITEM_SERIOUS_MINT
# 964 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_4

KecShop_8:
# 967 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_4, ITEM_RARE_CANDY
# 968 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_7

KecShop_11:
# 971 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_5, ITEM_POCKET_BIRCH_BAG
# 972 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_10

KecShop_14:
# 975 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_6, ITEM_HP_BOTTLE_CAP
# 976 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_13

KecShop_17:
# 979 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_7, ITEM_ATK_BOTTLE_CAP
# 980 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_16

KecShop_20:
# 983 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_8, ITEM_DEF_BOTTLE_CAP
# 984 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_19

KecShop_23:
# 987 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_9, ITEM_SPEED_BOTTLE_CAP
# 988 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_22

KecShop_26:
# 991 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_10, ITEM_SPATK_BOTTLE_CAP
# 992 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_25

KecShop_29:
# 995 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_11, ITEM_SPDEF_BOTTLE_CAP
# 996 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_28

KecShop_32:
# 999 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_12, ITEM_HP_GOLD_BOTTLE_CAP
# 1000 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_31

KecShop_35:
# 1003 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_13, ITEM_ATK_GOLD_BOTTLE_CAP
# 1004 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_34

KecShop_38:
# 1007 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_14, ITEM_DEF_GOLD_BOTTLE_CAP
# 1008 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_37

KecShop_41:
# 1011 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_15, ITEM_SPEED_GOLD_BOTTLE_CAP
# 1012 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_40

KecShop_44:
# 1015 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_16, ITEM_SPATK_GOLD_BOTTLE_CAP
# 1016 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_43

KecShop_47:
# 1019 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_17, ITEM_SPDEF_GOLD_BOTTLE_CAP
# 1020 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_46

KecShop_50:
# 1025 "data/maps/Hub1/scripts.pory"
	showmoneybox 18, 11
# 1026 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 1027 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 1028 "data/maps/Hub1/scripts.pory"
	case ITEM_ORAN_BERRY, KecShop_55
# 1039 "data/maps/Hub1/scripts.pory"
	case ITEM_LUM_BERRY, KecShop_56
# 1050 "data/maps/Hub1/scripts.pory"
	case ITEM_SERIOUS_MINT, KecShop_57
# 1061 "data/maps/Hub1/scripts.pory"
	case ITEM_MEMORY_MUSHROOM, KecShop_58
# 1072 "data/maps/Hub1/scripts.pory"
	case ITEM_RARE_CANDY, KecShop_59
# 1083 "data/maps/Hub1/scripts.pory"
	case ITEM_POCKET_BIRCH_BAG, KecShop_60
# 1092 "data/maps/Hub1/scripts.pory"
	case ITEM_HP_BOTTLE_CAP, KecShop_61
# 1093 "data/maps/Hub1/scripts.pory"
	case ITEM_ATK_BOTTLE_CAP, KecShop_61
# 1094 "data/maps/Hub1/scripts.pory"
	case ITEM_DEF_BOTTLE_CAP, KecShop_61
# 1095 "data/maps/Hub1/scripts.pory"
	case ITEM_SPEED_BOTTLE_CAP, KecShop_61
# 1096 "data/maps/Hub1/scripts.pory"
	case ITEM_SPATK_BOTTLE_CAP, KecShop_61
# 1097 "data/maps/Hub1/scripts.pory"
	case ITEM_SPDEF_BOTTLE_CAP, KecShop_61
# 1106 "data/maps/Hub1/scripts.pory"
	case ITEM_HP_GOLD_BOTTLE_CAP, KecShop_62
# 1107 "data/maps/Hub1/scripts.pory"
	case ITEM_ATK_GOLD_BOTTLE_CAP, KecShop_62
# 1108 "data/maps/Hub1/scripts.pory"
	case ITEM_DEF_GOLD_BOTTLE_CAP, KecShop_62
# 1109 "data/maps/Hub1/scripts.pory"
	case ITEM_SPEED_GOLD_BOTTLE_CAP, KecShop_62
# 1110 "data/maps/Hub1/scripts.pory"
	case ITEM_SPATK_GOLD_BOTTLE_CAP, KecShop_62
# 1111 "data/maps/Hub1/scripts.pory"
	case ITEM_SPDEF_GOLD_BOTTLE_CAP, KecShop_62
KecShop_53:
# 1121 "data/maps/Hub1/scripts.pory"
	hidemoneybox
	goto KecShop_49

KecShop_55:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_63
# 1037 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_56:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_66
# 1048 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_57:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_69
# 1059 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_58:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_72
# 1070 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_59:
	checkmoney 2000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_75
# 1081 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_60:
	checkmoney 2000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_78
# 1091 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_61:
	checkmoney 300
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_81
# 1105 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_62:
	checkmoney 600
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_84
# 1119 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_63:
# 1030 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 1031 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1032 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1033 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ORAN_BERRY
# 1034 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_53

KecShop_66:
# 1041 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 1042 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1043 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1044 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUM_BERRY
# 1045 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_53

KecShop_69:
# 1052 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1053 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1054 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1055 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SERIOUS_MINT
# 1056 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_53

KecShop_72:
# 1063 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 1064 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1065 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1066 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM
# 1067 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_53

KecShop_75:
# 1074 "data/maps/Hub1/scripts.pory"
	removemoney 2000
# 1075 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1076 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1077 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 1078 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_53

KecShop_78:
# 1085 "data/maps/Hub1/scripts.pory"
	removemoney 2000
# 1086 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1087 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1088 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_POCKET_BIRCH_BAG
# 1089 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_53

KecShop_81:
# 1099 "data/maps/Hub1/scripts.pory"
	removemoney 300
# 1100 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1101 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1102 "data/maps/Hub1/scripts.pory"
	giveitem VAR_RESULT
# 1103 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_53

KecShop_84:
# 1113 "data/maps/Hub1/scripts.pory"
	removemoney 600
# 1114 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1115 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1116 "data/maps/Hub1/scripts.pory"
	giveitem VAR_RESULT
# 1117 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_53


KecShop_Shiny::
# 1131 "data/maps/Hub1/scripts.pory"
	lockall
# 1132 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Sign_Text_0
# 1133 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_NOBLE_ROAR_BUYABLE, KecShop_Shiny_2
KecShop_Shiny_1:
# 1137 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_CHARM_BUYABLE, KecShop_Shiny_5
KecShop_Shiny_4:
# 1141 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_FAKE_TEARS_BUYABLE, KecShop_Shiny_8
KecShop_Shiny_7:
# 1145 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_CONFUSE_RAY_BUYABLE, KecShop_Shiny_11
KecShop_Shiny_10:
# 1149 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_THUNDER_WAVE_BUYABLE, KecShop_Shiny_14
KecShop_Shiny_13:
# 1153 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_WILL_O_WISP_BUYABLE, KecShop_Shiny_17
KecShop_Shiny_16:
# 1157 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_TOXIC_BUYABLE, KecShop_Shiny_20
KecShop_Shiny_19:
# 1161 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_SWIFT_BUYABLE, KecShop_Shiny_23
KecShop_Shiny_22:
# 1165 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_CUT_BUYABLE, KecShop_Shiny_26
KecShop_Shiny_25:
# 1169 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_ROCK_SMASH_BUYABLE, KecShop_Shiny_29
KecShop_Shiny_28:
# 1173 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_SNARL_BUYABLE, KecShop_Shiny_32
KecShop_Shiny_31:
# 1177 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_ELECTROWEB_BUYABLE, KecShop_Shiny_35
KecShop_Shiny_34:
# 1181 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_AURORA_BEAM_BUYABLE, KecShop_Shiny_38
KecShop_Shiny_37:
# 1185 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_PSYBEAM_BUYABLE, KecShop_Shiny_41
KecShop_Shiny_40:
# 1189 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_FLAMETHROWER_BUYABLE, KecShop_Shiny_44
KecShop_Shiny_43:
# 1193 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_ICE_BEAM_BUYABLE, KecShop_Shiny_47
KecShop_Shiny_46:
# 1197 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_THUNDERBOLT_BUYABLE, KecShop_Shiny_50
KecShop_Shiny_49:
# 1201 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_SCALD_BUYABLE, KecShop_Shiny_53
KecShop_Shiny_52:
# 1205 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_MEGA_DRAIN_BUYABLE, KecShop_Shiny_56
KecShop_Shiny_55:
# 1209 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_SLUDGE_BOMB_BUYABLE, KecShop_Shiny_59
KecShop_Shiny_58:
# 1213 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_DUAL_WINGBEAT_BUYABLE, KecShop_Shiny_62
KecShop_Shiny_61:
# 1217 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_LEECH_LIFE_BUYABLE, KecShop_Shiny_65
KecShop_Shiny_64:
# 1221 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_PLAY_ROUGH_BUYABLE, KecShop_Shiny_68
KecShop_Shiny_67:
# 1225 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_SHADOW_BALL_BUYABLE, KecShop_Shiny_71
KecShop_Shiny_70:
# 1229 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_EARTH_POWER_BUYABLE, KecShop_Shiny_74
KecShop_Shiny_73:
# 1234 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne KecShop_Shiny_77
# 1517 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
# 1518 "data/maps/Hub1/scripts.pory"
	waitmessage
# 1519 "data/maps/Hub1/scripts.pory"
	releaseall
KecShop_Shiny_76:
# 1521 "data/maps/Hub1/scripts.pory"
	releaseall
	return

KecShop_Shiny_2:
# 1134 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_0, ITEM_TM_NOBLE_ROAR
# 1135 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_1

KecShop_Shiny_5:
# 1138 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_1, ITEM_TM_CHARM
# 1139 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_4

KecShop_Shiny_8:
# 1142 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_2, ITEM_TM_FAKE_TEARS
# 1143 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_7

KecShop_Shiny_11:
# 1146 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_3, ITEM_TM_CONFUSE_RAY
# 1147 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_10

KecShop_Shiny_14:
# 1150 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_4, ITEM_TM_THUNDER_WAVE
# 1151 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_13

KecShop_Shiny_17:
# 1154 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_5, ITEM_TM_WILL_O_WISP
# 1155 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_16

KecShop_Shiny_20:
# 1158 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_6, ITEM_TM_TOXIC
# 1159 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_19

KecShop_Shiny_23:
# 1162 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_7, ITEM_TM_SWIFT
# 1163 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_22

KecShop_Shiny_26:
# 1166 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_8, ITEM_TM_CUT
# 1167 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_25

KecShop_Shiny_29:
# 1170 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_9, ITEM_TM_ROCK_SMASH
# 1171 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_28

KecShop_Shiny_32:
# 1174 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_10, ITEM_TM_SNARL
# 1175 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_31

KecShop_Shiny_35:
# 1178 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_11, ITEM_TM_ELECTROWEB
# 1179 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_34

KecShop_Shiny_38:
# 1182 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_12, ITEM_TM_AURORA_BEAM
# 1183 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_37

KecShop_Shiny_41:
# 1186 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_13, ITEM_TM_PSYBEAM
# 1187 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_40

KecShop_Shiny_44:
# 1190 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_14, ITEM_TM_FLAMETHROWER
# 1191 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_43

KecShop_Shiny_47:
# 1194 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_15, ITEM_TM_ICE_BEAM
# 1195 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_46

KecShop_Shiny_50:
# 1198 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_16, ITEM_TM_THUNDERBOLT
# 1199 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_49

KecShop_Shiny_53:
# 1202 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_17, ITEM_TM_SCALD
# 1203 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_52

KecShop_Shiny_56:
# 1206 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_18, ITEM_TM_MEGA_DRAIN
# 1207 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_55

KecShop_Shiny_59:
# 1210 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_19, ITEM_TM_SLUDGE_BOMB
# 1211 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_58

KecShop_Shiny_62:
# 1214 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_20, ITEM_TM_DUAL_WINGBEAT
# 1215 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_61

KecShop_Shiny_65:
# 1218 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_21, ITEM_TM_LEECH_LIFE
# 1219 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_64

KecShop_Shiny_68:
# 1222 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_22, ITEM_TM_PLAY_ROUGH
# 1223 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_67

KecShop_Shiny_71:
# 1226 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_23, ITEM_TM_SHADOW_BALL
# 1227 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_70

KecShop_Shiny_74:
# 1230 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_24, ITEM_TM_EARTH_POWER
# 1231 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_73

KecShop_Shiny_77:
# 1235 "data/maps/Hub1/scripts.pory"
	showmoneybox 18, 11
# 1236 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 1237 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 1238 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_NOBLE_ROAR, KecShop_Shiny_82
# 1249 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ROCK_SMASH, KecShop_Shiny_83
# 1260 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SWIFT, KecShop_Shiny_84
# 1271 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CUT, KecShop_Shiny_85
# 1282 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CHARM, KecShop_Shiny_86
# 1293 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_FAKE_TEARS, KecShop_Shiny_87
# 1304 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CONFUSE_RAY, KecShop_Shiny_88
# 1315 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_THUNDER_WAVE, KecShop_Shiny_89
# 1326 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_WILL_O_WISP, KecShop_Shiny_90
# 1337 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_TOXIC, KecShop_Shiny_91
# 1348 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SNARL, KecShop_Shiny_92
# 1359 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ELECTROWEB, KecShop_Shiny_93
# 1370 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_AURORA_BEAM, KecShop_Shiny_94
# 1381 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_PSYBEAM, KecShop_Shiny_95
# 1392 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_FLAMETHROWER, KecShop_Shiny_96
# 1403 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ICE_BEAM, KecShop_Shiny_97
# 1414 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_THUNDERBOLT, KecShop_Shiny_98
# 1425 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SCALD, KecShop_Shiny_99
# 1436 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_MEGA_DRAIN, KecShop_Shiny_100
# 1447 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SLUDGE_BOMB, KecShop_Shiny_101
# 1458 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_DUAL_WINGBEAT, KecShop_Shiny_102
# 1469 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_LEECH_LIFE, KecShop_Shiny_103
# 1480 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_PLAY_ROUGH, KecShop_Shiny_104
# 1491 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SHADOW_BALL, KecShop_Shiny_105
# 1502 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_EARTH_POWER, KecShop_Shiny_106
KecShop_Shiny_80:
# 1515 "data/maps/Hub1/scripts.pory"
	hidemoneybox
	goto KecShop_Shiny_76

KecShop_Shiny_82:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_107
# 1247 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_83:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_110
# 1258 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_84:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_113
# 1269 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_85:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_116
# 1280 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_86:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_119
# 1291 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_87:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_122
# 1302 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_88:
	checkmoney 300
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_125
# 1313 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_89:
	checkmoney 300
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_128
# 1324 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_90:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_131
# 1335 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_91:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_134
# 1346 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_92:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_137
# 1357 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_93:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_140
# 1368 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_94:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_143
# 1379 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_95:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_146
# 1390 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_96:
	checkmoney 1200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_149
# 1401 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_97:
	checkmoney 1200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_152
# 1412 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_98:
	checkmoney 1200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_155
# 1423 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_99:
	checkmoney 1000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_158
# 1434 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_100:
	checkmoney 800
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_161
# 1445 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_101:
	checkmoney 1000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_164
# 1456 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_102:
	checkmoney 900
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_167
# 1467 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_103:
	checkmoney 1000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_170
# 1478 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_104:
	checkmoney 1000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_173
# 1489 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_105:
	checkmoney 1000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_176
# 1500 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_106:
	checkmoney 1000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_179
# 1511 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_107:
# 1240 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 1241 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1242 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1243 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_NOBLE_ROAR
# 1244 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_110:
# 1251 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1252 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1253 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1254 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_ROCK_SMASH
# 1255 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_113:
# 1262 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1263 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1264 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1265 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SWIFT
# 1266 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_116:
# 1273 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1274 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1275 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1276 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CUT
# 1277 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_119:
# 1284 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 1285 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1286 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1287 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CHARM
# 1288 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_122:
# 1295 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 1296 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1297 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1298 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_FAKE_TEARS
# 1299 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_125:
# 1306 "data/maps/Hub1/scripts.pory"
	removemoney 300
# 1307 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1308 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1309 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CONFUSE_RAY
# 1310 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_128:
# 1317 "data/maps/Hub1/scripts.pory"
	removemoney 300
# 1318 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1319 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1320 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_THUNDER_WAVE
# 1321 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_131:
# 1328 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1329 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1330 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1331 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_WILL_O_WISP
# 1332 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_134:
# 1339 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1340 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1341 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1342 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_TOXIC
# 1343 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_137:
# 1350 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1351 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1352 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1353 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SNARL
# 1354 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_140:
# 1361 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1362 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1363 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1364 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_ELECTROWEB
# 1365 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_143:
# 1372 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1373 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1374 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1375 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_AURORA_BEAM
# 1376 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_146:
# 1383 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1384 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1385 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1386 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_PSYBEAM
# 1387 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_149:
# 1394 "data/maps/Hub1/scripts.pory"
	removemoney 1200
# 1395 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1396 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1397 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_FLAMETHROWER
# 1398 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_152:
# 1405 "data/maps/Hub1/scripts.pory"
	removemoney 1200
# 1406 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1407 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1408 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_ICE_BEAM
# 1409 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_155:
# 1416 "data/maps/Hub1/scripts.pory"
	removemoney 1200
# 1417 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1418 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1419 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 1420 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_158:
# 1427 "data/maps/Hub1/scripts.pory"
	removemoney 1000
# 1428 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1429 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1430 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SCALD
# 1431 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_161:
# 1438 "data/maps/Hub1/scripts.pory"
	removemoney 800
# 1439 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1440 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1441 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_MEGA_DRAIN
# 1442 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_164:
# 1449 "data/maps/Hub1/scripts.pory"
	removemoney 1000
# 1450 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1451 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1452 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SLUDGE_BOMB
# 1453 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_167:
# 1460 "data/maps/Hub1/scripts.pory"
	removemoney 900
# 1461 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1462 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1463 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_DUAL_WINGBEAT
# 1464 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_170:
# 1471 "data/maps/Hub1/scripts.pory"
	removemoney 1000
# 1472 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1473 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1474 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_LEECH_LIFE
# 1475 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_173:
# 1482 "data/maps/Hub1/scripts.pory"
	removemoney 1000
# 1483 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1484 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1485 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_PLAY_ROUGH
# 1486 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_176:
# 1493 "data/maps/Hub1/scripts.pory"
	removemoney 1000
# 1494 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1495 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1496 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SHADOW_BALL
# 1497 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80

KecShop_Shiny_179:
# 1504 "data/maps/Hub1/scripts.pory"
	removemoney 1000
# 1505 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1506 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1507 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_EARTH_POWER
# 1508 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_18
	goto KecShop_Shiny_80


Hub_Event_Script_Kecleon::
# 1525 "data/maps/Hub1/scripts.pory"
	lockall
# 1526 "data/maps/Hub1/scripts.pory"
	faceplayer
# 1527 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1528 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_0
# 1529 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED, Hub_Event_Script_Kecleon_2
Hub_Event_Script_Kecleon_1:
# 1534 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_LUM_BERRY_UNLOCKED, Hub_Event_Script_Kecleon_5
Hub_Event_Script_Kecleon_4:
# 1539 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SERIOUS_MINT_UNLOCKED, Hub_Event_Script_Kecleon_8
Hub_Event_Script_Kecleon_7:
# 1544 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_IV_BOTTLE_CAPS_UNLOCKED, Hub_Event_Script_Kecleon_11
Hub_Event_Script_Kecleon_10:
# 1549 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_IV_GOLD_BOTTLE_CAPS_UNLOCKED, Hub_Event_Script_Kecleon_14
Hub_Event_Script_Kecleon_13:
# 1554 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_POCKET_BIRCH_BAG_UNLOCKED, Hub_Event_Script_Kecleon_17
Hub_Event_Script_Kecleon_16:
# 1560 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Kecleon_20
# 1650 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_14
# 1651 "data/maps/Hub1/scripts.pory"
	waitmessage
# 1652 "data/maps/Hub1/scripts.pory"
	releaseall
Hub_Event_Script_Kecleon_19:
# 1654 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
# 1655 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Kecleon_2:
# 1530 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_1, ITEM_RARE_CANDY
# 1531 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_5:
# 1535 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_2, ITEM_LUM_BERRY
# 1536 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_4

Hub_Event_Script_Kecleon_8:
# 1540 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_3, ITEM_SERIOUS_MINT
# 1541 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_7

Hub_Event_Script_Kecleon_11:
# 1545 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_4, ITEM_HP_BOTTLE_CAP
# 1546 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_10

Hub_Event_Script_Kecleon_14:
# 1550 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_5, ITEM_HP_GOLD_BOTTLE_CAP
# 1551 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_13

Hub_Event_Script_Kecleon_17:
# 1555 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_6, ITEM_POCKET_BIRCH_BAG
# 1556 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_16

Hub_Event_Script_Kecleon_20:
# 1561 "data/maps/Hub1/scripts.pory"
	showcoinsbox 21, 11
# 1562 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 1563 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 1564 "data/maps/Hub1/scripts.pory"
	case ITEM_LUM_BERRY, Hub_Event_Script_Kecleon_24
# 1578 "data/maps/Hub1/scripts.pory"
	case ITEM_SERIOUS_MINT, Hub_Event_Script_Kecleon_25
# 1592 "data/maps/Hub1/scripts.pory"
	case ITEM_RARE_CANDY, Hub_Event_Script_Kecleon_26
# 1606 "data/maps/Hub1/scripts.pory"
	case ITEM_HP_BOTTLE_CAP, Hub_Event_Script_Kecleon_27
# 1620 "data/maps/Hub1/scripts.pory"
	case ITEM_HP_GOLD_BOTTLE_CAP, Hub_Event_Script_Kecleon_28
# 1634 "data/maps/Hub1/scripts.pory"
	case ITEM_POCKET_BIRCH_BAG, Hub_Event_Script_Kecleon_29
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_24:
# 1565 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_LUM_BERRY_UNLOCKED, Hub_Event_Script_Kecleon_30
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_25:
# 1579 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SERIOUS_MINT_UNLOCKED, Hub_Event_Script_Kecleon_32
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_26:
# 1593 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED, Hub_Event_Script_Kecleon_34
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_27:
# 1607 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_IV_BOTTLE_CAPS_UNLOCKED, Hub_Event_Script_Kecleon_36
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_28:
# 1621 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_IV_GOLD_BOTTLE_CAPS_UNLOCKED, Hub_Event_Script_Kecleon_38
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_29:
# 1635 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_POCKET_BIRCH_BAG_UNLOCKED, Hub_Event_Script_Kecleon_40
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_30:
# 1566 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1567 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Kecleon_42
# 1575 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_32:
# 1580 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1581 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_45
# 1589 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_34:
# 1594 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1595 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_48
# 1603 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_36:
# 1608 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1609 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_51
# 1617 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_38:
# 1622 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1623 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_54
# 1631 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_40:
# 1636 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1637 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_57
# 1645 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_42:
# 1568 "data/maps/Hub1/scripts.pory"
	setflag FLAG_LUM_BERRY_UNLOCKED
# 1569 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 1570 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1571 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1572 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_45:
# 1582 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SERIOUS_MINT_UNLOCKED
# 1583 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1584 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1585 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1586 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_9
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_48:
# 1596 "data/maps/Hub1/scripts.pory"
	setflag FLAG_RARE_CANDY_UNLOCKED
# 1597 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1598 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1599 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1600 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_10
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_51:
# 1610 "data/maps/Hub1/scripts.pory"
	setflag FLAG_IV_BOTTLE_CAPS_UNLOCKED
# 1611 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1612 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1613 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1614 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_11
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_54:
# 1624 "data/maps/Hub1/scripts.pory"
	setflag FLAG_IV_GOLD_BOTTLE_CAPS_UNLOCKED
# 1625 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1626 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1627 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1628 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_12
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_57:
# 1638 "data/maps/Hub1/scripts.pory"
	setflag FLAG_POCKET_BIRCH_BAG_UNLOCKED
# 1639 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1640 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1641 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1642 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_13
	goto Hub_Event_Script_Kecleon_19


Hub_Event_Script_Shiny_Kecleon::
# 1660 "data/maps/Hub1/scripts.pory"
	lockall
# 1661 "data/maps/Hub1/scripts.pory"
	faceplayer
# 1662 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1663 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_0
# 1664 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_NOBLE_ROAR_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_2
Hub_Event_Script_Shiny_Kecleon_1:
# 1668 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CHARM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_5
Hub_Event_Script_Shiny_Kecleon_4:
# 1672 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_FAKE_TEARS_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_8
Hub_Event_Script_Shiny_Kecleon_7:
# 1676 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CONFUSE_RAY_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_11
Hub_Event_Script_Shiny_Kecleon_10:
# 1680 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_THUNDER_WAVE_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_14
Hub_Event_Script_Shiny_Kecleon_13:
# 1684 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_WILL_O_WISP_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_17
Hub_Event_Script_Shiny_Kecleon_16:
# 1688 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_TOXIC_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_20
Hub_Event_Script_Shiny_Kecleon_19:
# 1692 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ROCK_SMASH_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_23
Hub_Event_Script_Shiny_Kecleon_22:
# 1696 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SNARL_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_26
Hub_Event_Script_Shiny_Kecleon_25:
# 1700 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ELECTROWEB_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_29
Hub_Event_Script_Shiny_Kecleon_28:
# 1704 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_AURORA_BEAM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_32
Hub_Event_Script_Shiny_Kecleon_31:
# 1708 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_PSYBEAM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_35
Hub_Event_Script_Shiny_Kecleon_34:
# 1712 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_MEGA_DRAIN_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_38
Hub_Event_Script_Shiny_Kecleon_37:
# 1716 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_FLAMETHROWER_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_41
Hub_Event_Script_Shiny_Kecleon_40:
# 1720 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ICE_BEAM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_44
Hub_Event_Script_Shiny_Kecleon_43:
# 1724 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_THUNDERBOLT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_47
Hub_Event_Script_Shiny_Kecleon_46:
# 1728 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SCALD_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_50
Hub_Event_Script_Shiny_Kecleon_49:
# 1732 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SLUDGE_BOMB_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_53
Hub_Event_Script_Shiny_Kecleon_52:
# 1736 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_DUAL_WINGBEAT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_56
Hub_Event_Script_Shiny_Kecleon_55:
# 1740 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_LEECH_LIFE_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_59
Hub_Event_Script_Shiny_Kecleon_58:
# 1744 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_PLAY_ROUGH_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_62
Hub_Event_Script_Shiny_Kecleon_61:
# 1748 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SHADOW_BALL_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_65
Hub_Event_Script_Shiny_Kecleon_64:
# 1752 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_EARTH_POWER_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_68
Hub_Event_Script_Shiny_Kecleon_67:
# 1758 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Shiny_Kecleon_71
# 2114 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_49
# 2115 "data/maps/Hub1/scripts.pory"
	waitmessage
# 2116 "data/maps/Hub1/scripts.pory"
	releaseall
Hub_Event_Script_Shiny_Kecleon_70:
# 2118 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
# 2119 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Shiny_Kecleon_2:
# 1665 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_1, ITEM_TM_NOBLE_ROAR
# 1666 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_1

Hub_Event_Script_Shiny_Kecleon_5:
# 1669 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_2, ITEM_TM_CHARM
# 1670 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_4

Hub_Event_Script_Shiny_Kecleon_8:
# 1673 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_3, ITEM_TM_FAKE_TEARS
# 1674 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_7

Hub_Event_Script_Shiny_Kecleon_11:
# 1677 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_4, ITEM_TM_CONFUSE_RAY
# 1678 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_10

Hub_Event_Script_Shiny_Kecleon_14:
# 1681 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_5, ITEM_TM_THUNDER_WAVE
# 1682 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_13

Hub_Event_Script_Shiny_Kecleon_17:
# 1685 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_6, ITEM_TM_WILL_O_WISP
# 1686 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_16

Hub_Event_Script_Shiny_Kecleon_20:
# 1689 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_7, ITEM_TM_TOXIC
# 1690 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_19

Hub_Event_Script_Shiny_Kecleon_23:
# 1693 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_8, ITEM_TM_ROCK_SMASH
# 1694 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_22

Hub_Event_Script_Shiny_Kecleon_26:
# 1697 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_9, ITEM_TM_SNARL
# 1698 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_25

Hub_Event_Script_Shiny_Kecleon_29:
# 1701 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_10, ITEM_TM_ELECTROWEB
# 1702 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_28

Hub_Event_Script_Shiny_Kecleon_32:
# 1705 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_11, ITEM_TM_AURORA_BEAM
# 1706 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_35:
# 1709 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_12, ITEM_TM_PSYBEAM
# 1710 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_34

Hub_Event_Script_Shiny_Kecleon_38:
# 1713 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_13, ITEM_TM_MEGA_DRAIN
# 1714 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_37

Hub_Event_Script_Shiny_Kecleon_41:
# 1717 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_14, ITEM_TM_FLAMETHROWER
# 1718 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_40

Hub_Event_Script_Shiny_Kecleon_44:
# 1721 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_15, ITEM_TM_ICE_BEAM
# 1722 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_43

Hub_Event_Script_Shiny_Kecleon_47:
# 1725 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_16, ITEM_TM_THUNDERBOLT
# 1726 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_46

Hub_Event_Script_Shiny_Kecleon_50:
# 1729 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_17, ITEM_TM_SCALD
# 1730 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_49

Hub_Event_Script_Shiny_Kecleon_53:
# 1733 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_18, ITEM_TM_SLUDGE_BOMB
# 1734 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_52

Hub_Event_Script_Shiny_Kecleon_56:
# 1737 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_19, ITEM_TM_DUAL_WINGBEAT
# 1738 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_55

Hub_Event_Script_Shiny_Kecleon_59:
# 1741 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_20, ITEM_TM_LEECH_LIFE
# 1742 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_58

Hub_Event_Script_Shiny_Kecleon_62:
# 1745 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_21, ITEM_TM_PLAY_ROUGH
# 1746 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_61

Hub_Event_Script_Shiny_Kecleon_65:
# 1749 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_22, ITEM_TM_SHADOW_BALL
# 1750 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_64

Hub_Event_Script_Shiny_Kecleon_68:
# 1753 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_23, ITEM_TM_EARTH_POWER
# 1754 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_67

Hub_Event_Script_Shiny_Kecleon_71:
# 1759 "data/maps/Hub1/scripts.pory"
	showcoinsbox 21, 11
# 1760 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 1761 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 1762 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_NOBLE_ROAR, Hub_Event_Script_Shiny_Kecleon_75
# 1776 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ROCK_SMASH, Hub_Event_Script_Shiny_Kecleon_76
# 1790 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SWIFT, Hub_Event_Script_Shiny_Kecleon_77
# 1804 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CUT, Hub_Event_Script_Shiny_Kecleon_78
# 1818 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CHARM, Hub_Event_Script_Shiny_Kecleon_79
# 1832 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_FAKE_TEARS, Hub_Event_Script_Shiny_Kecleon_80
# 1846 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CONFUSE_RAY, Hub_Event_Script_Shiny_Kecleon_81
# 1860 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_THUNDER_WAVE, Hub_Event_Script_Shiny_Kecleon_82
# 1874 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_WILL_O_WISP, Hub_Event_Script_Shiny_Kecleon_83
# 1888 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_TOXIC, Hub_Event_Script_Shiny_Kecleon_84
# 1902 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SNARL, Hub_Event_Script_Shiny_Kecleon_85
# 1916 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ELECTROWEB, Hub_Event_Script_Shiny_Kecleon_86
# 1930 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_AURORA_BEAM, Hub_Event_Script_Shiny_Kecleon_87
# 1944 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_PSYBEAM, Hub_Event_Script_Shiny_Kecleon_88
# 1958 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_FLAMETHROWER, Hub_Event_Script_Shiny_Kecleon_89
# 1972 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ICE_BEAM, Hub_Event_Script_Shiny_Kecleon_90
# 1986 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_THUNDERBOLT, Hub_Event_Script_Shiny_Kecleon_91
# 2000 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SCALD, Hub_Event_Script_Shiny_Kecleon_92
# 2014 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_MEGA_DRAIN, Hub_Event_Script_Shiny_Kecleon_93
# 2028 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SLUDGE_BOMB, Hub_Event_Script_Shiny_Kecleon_94
# 2042 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_DUAL_WINGBEAT, Hub_Event_Script_Shiny_Kecleon_95
# 2056 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_LEECH_LIFE, Hub_Event_Script_Shiny_Kecleon_96
# 2070 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_PLAY_ROUGH, Hub_Event_Script_Shiny_Kecleon_97
# 2084 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SHADOW_BALL, Hub_Event_Script_Shiny_Kecleon_98
# 2098 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_EARTH_POWER, Hub_Event_Script_Shiny_Kecleon_99
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_75:
# 1763 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_NOBLE_ROAR_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_100
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_76:
# 1777 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ROCK_SMASH_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_102
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_77:
# 1791 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SWIFT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_104
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_78:
# 1805 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CUT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_106
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_79:
# 1819 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CHARM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_108
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_80:
# 1833 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_FAKE_TEARS_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_110
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_81:
# 1847 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CONFUSE_RAY_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_112
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_82:
# 1861 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_THUNDER_WAVE_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_114
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_83:
# 1875 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_WILL_O_WISP_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_116
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_84:
# 1889 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_TOXIC_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_118
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_85:
# 1903 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SNARL_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_120
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_86:
# 1917 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ELECTROWEB_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_122
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_87:
# 1931 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_AURORA_BEAM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_124
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_88:
# 1945 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_PSYBEAM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_126
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_89:
# 1959 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_FLAMETHROWER_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_128
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_90:
# 1973 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ICE_BEAM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_130
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_91:
# 1987 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_THUNDERBOLT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_132
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_92:
# 2001 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SCALD_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_134
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_93:
# 2015 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_MEGA_DRAIN_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_136
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_94:
# 2029 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SLUDGE_BOMB_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_138
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_95:
# 2043 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_DUAL_WINGBEAT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_140
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_96:
# 2057 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_LEECH_LIFE_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_142
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_97:
# 2071 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_PLAY_ROUGH_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_144
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_98:
# 2085 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SHADOW_BALL_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_146
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_99:
# 2099 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_EARTH_POWER_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_148
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_100:
# 1764 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1765 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 400
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_150
# 1773 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_102:
# 1778 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1779 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 900
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_153
# 1787 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_104:
# 1792 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1793 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_156
# 1801 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_106:
# 1806 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1807 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_159
# 1815 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_108:
# 1820 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1821 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 400
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_162
# 1829 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_110:
# 1834 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1835 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 400
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_165
# 1843 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_112:
# 1848 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1849 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 800
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_168
# 1857 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_114:
# 1862 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1863 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 800
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_171
# 1871 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_116:
# 1876 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1877 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 800
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_174
# 1885 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_118:
# 1890 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1891 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 800
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_177
# 1899 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_120:
# 1904 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1905 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 900
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_180
# 1913 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_122:
# 1918 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1919 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 900
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_183
# 1927 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_124:
# 1932 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1933 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 900
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_186
# 1941 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_126:
# 1946 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1947 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 900
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_189
# 1955 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_128:
# 1960 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1961 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_192
# 1969 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_130:
# 1974 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1975 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_195
# 1983 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_132:
# 1988 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1989 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_198
# 1997 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_134:
# 2002 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2003 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_201
# 2011 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_136:
# 2016 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2017 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_204
# 2025 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_138:
# 2030 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2031 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_207
# 2039 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_140:
# 2044 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2045 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_210
# 2053 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_142:
# 2058 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2059 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_213
# 2067 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_144:
# 2072 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2073 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_216
# 2081 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_146:
# 2086 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2087 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_219
# 2095 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_148:
# 2100 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2101 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_222
# 2109 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_150:
# 1766 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_NOBLE_ROAR_UNLOCKED
# 1767 "data/maps/Hub1/scripts.pory"
	removecoins 400
# 1768 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1769 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1770 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_24
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_153:
# 1780 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_ROCK_SMASH_UNLOCKED
# 1781 "data/maps/Hub1/scripts.pory"
	removecoins 900
# 1782 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1783 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1784 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_25
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_156:
# 1794 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_SWIFT_UNLOCKED
# 1795 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 1796 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1797 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1798 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_26
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_159:
# 1808 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CUT_UNLOCKED
# 1809 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 1810 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1811 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1812 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_27
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_162:
# 1822 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CHARM_UNLOCKED
# 1823 "data/maps/Hub1/scripts.pory"
	removecoins 400
# 1824 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1825 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1826 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_28
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_165:
# 1836 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_FAKE_TEARS_UNLOCKED
# 1837 "data/maps/Hub1/scripts.pory"
	removecoins 400
# 1838 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1839 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1840 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_29
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_168:
# 1850 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CONFUSE_RAY_UNLOCKED
# 1851 "data/maps/Hub1/scripts.pory"
	removecoins 800
# 1852 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1853 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1854 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_30
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_171:
# 1864 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_THUNDER_WAVE_UNLOCKED
# 1865 "data/maps/Hub1/scripts.pory"
	removecoins 800
# 1866 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1867 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1868 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_31
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_174:
# 1878 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_WILL_O_WISP_UNLOCKED
# 1879 "data/maps/Hub1/scripts.pory"
	removecoins 800
# 1880 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1881 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1882 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_32
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_177:
# 1892 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_TOXIC_UNLOCKED
# 1893 "data/maps/Hub1/scripts.pory"
	removecoins 800
# 1894 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1895 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1896 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_33
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_180:
# 1906 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_SNARL_UNLOCKED
# 1907 "data/maps/Hub1/scripts.pory"
	removecoins 900
# 1908 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1909 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1910 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_34
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_183:
# 1920 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_ELECTROWEB_UNLOCKED
# 1921 "data/maps/Hub1/scripts.pory"
	removecoins 900
# 1922 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1923 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1924 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_35
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_186:
# 1934 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_AURORA_BEAM_UNLOCKED
# 1935 "data/maps/Hub1/scripts.pory"
	removecoins 900
# 1936 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1937 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1938 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_36
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_189:
# 1948 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_PSYBEAM_UNLOCKED
# 1949 "data/maps/Hub1/scripts.pory"
	removecoins 900
# 1950 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1951 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1952 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_37
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_192:
# 1962 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_FLAMETHROWER_UNLOCKED
# 1963 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 1964 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1965 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1966 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_38
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_195:
# 1976 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_ICE_BEAM_UNLOCKED
# 1977 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 1978 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1979 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1980 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_39
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_198:
# 1990 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_THUNDERBOLT_UNLOCKED
# 1991 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 1992 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1993 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1994 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_40
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_201:
# 2004 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_SCALD_UNLOCKED
# 2005 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2006 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2007 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2008 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_41
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_204:
# 2018 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_MEGA_DRAIN_UNLOCKED
# 2019 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2020 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2021 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2022 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_42
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_207:
# 2032 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_SLUDGE_BOMB_UNLOCKED
# 2033 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2034 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2035 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2036 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_43
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_210:
# 2046 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_DUAL_WINGBEAT_UNLOCKED
# 2047 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2048 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2049 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2050 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_44
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_213:
# 2060 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_LEECH_LIFE_UNLOCKED
# 2061 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2062 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2063 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2064 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_45
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_216:
# 2074 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_PLAY_ROUGH_UNLOCKED
# 2075 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2076 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2077 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2078 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_46
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_219:
# 2088 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_SHADOW_BALL_UNLOCKED
# 2089 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2090 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2091 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2092 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_47
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_222:
# 2102 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_EARTH_POWER_UNLOCKED
# 2103 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2104 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2105 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2106 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_48
	goto Hub_Event_Script_Shiny_Kecleon_70


Hub_Event_Script_Diancie::
# 2124 "data/maps/Hub1/scripts.pory"
	lockall
# 2125 "data/maps/Hub1/scripts.pory"
	faceplayer
# 2126 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEGA_SHOP_UNLOCKED, Hub_Event_Script_Diancie_9
Hub_Event_Script_Diancie_7:
# 2134 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_MEGA_SHOP_UNLOCKED, Hub_Event_Script_Diancie_6
Hub_Event_Script_Diancie_5:
# 2153 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHARIZARDITE_X_UNLOCKED, Hub_Event_Script_Diancie_4
Hub_Event_Script_Diancie_1:
# 3591 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Diancie_2:
# 2127 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_0
	goto Hub_Event_Script_Diancie_1

Hub_Event_Script_Diancie_3:
# 2135 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_1
# 2139 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHARIZARDITE_X, 1
# 2140 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_VENUSAURITE_BUYABLE
# 2141 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHARIZARDITE_Y_BUYABLE
# 2142 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BLASTOISINITE_BUYABLE
# 2143 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHARIZARDITE_X_UNLOCKED
# 2144 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_2
	goto Hub_Event_Script_Diancie_1

Hub_Event_Script_Diancie_4:
# 2154 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 2155 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_VENUSAURITE_BUYABLE, Hub_Event_Script_Diancie_13
Hub_Event_Script_Diancie_12:
# 2159 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHARIZARDITE_Y_BUYABLE, Hub_Event_Script_Diancie_16
Hub_Event_Script_Diancie_15:
# 2163 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BLASTOISINITE_BUYABLE, Hub_Event_Script_Diancie_19
Hub_Event_Script_Diancie_18:
# 2167 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BEEDRILLITE_BUYABLE, Hub_Event_Script_Diancie_22
Hub_Event_Script_Diancie_21:
# 2171 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_PIDGEOTITE_BUYABLE, Hub_Event_Script_Diancie_25
Hub_Event_Script_Diancie_24:
# 2175 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ALAKAZITE_BUYABLE, Hub_Event_Script_Diancie_28
Hub_Event_Script_Diancie_27:
# 2179 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SLOWBRONITE_BUYABLE, Hub_Event_Script_Diancie_31
Hub_Event_Script_Diancie_30:
# 2183 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GENGARITE_BUYABLE, Hub_Event_Script_Diancie_34
Hub_Event_Script_Diancie_33:
# 2187 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_KANGASKHANITE_BUYABLE, Hub_Event_Script_Diancie_37
Hub_Event_Script_Diancie_36:
# 2191 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_PINSIRITE_BUYABLE, Hub_Event_Script_Diancie_40
Hub_Event_Script_Diancie_39:
# 2195 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GYARADOSITE_BUYABLE, Hub_Event_Script_Diancie_43
Hub_Event_Script_Diancie_42:
# 2199 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_AERODACTYLITE_BUYABLE, Hub_Event_Script_Diancie_46
Hub_Event_Script_Diancie_45:
# 2203 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_AMPHAROSITE_BUYABLE, Hub_Event_Script_Diancie_49
Hub_Event_Script_Diancie_48:
# 2207 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_STEELIXITE_BUYABLE, Hub_Event_Script_Diancie_52
Hub_Event_Script_Diancie_51:
# 2211 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCIZORITE_BUYABLE, Hub_Event_Script_Diancie_55
Hub_Event_Script_Diancie_54:
# 2215 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_HERACRONITE_BUYABLE, Hub_Event_Script_Diancie_58
Hub_Event_Script_Diancie_57:
# 2219 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_HOUNDOOMINITE_BUYABLE, Hub_Event_Script_Diancie_61
Hub_Event_Script_Diancie_60:
# 2223 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_TYRANITARITE_BUYABLE, Hub_Event_Script_Diancie_64
Hub_Event_Script_Diancie_63:
# 2227 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCEPTILITE_BUYABLE, Hub_Event_Script_Diancie_67
Hub_Event_Script_Diancie_66:
# 2231 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BLAZIKENITE_BUYABLE, Hub_Event_Script_Diancie_70
Hub_Event_Script_Diancie_69:
# 2235 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SWAMPERTITE_BUYABLE, Hub_Event_Script_Diancie_73
Hub_Event_Script_Diancie_72:
# 2239 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GARDEVOIRITE_BUYABLE, Hub_Event_Script_Diancie_76
Hub_Event_Script_Diancie_75:
# 2243 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SABLENITE_BUYABLE, Hub_Event_Script_Diancie_79
Hub_Event_Script_Diancie_78:
# 2247 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MAWILITE_BUYABLE, Hub_Event_Script_Diancie_82
Hub_Event_Script_Diancie_81:
# 2251 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_AGGRONITE_BUYABLE, Hub_Event_Script_Diancie_85
Hub_Event_Script_Diancie_84:
# 2255 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MEDICHAMITE_BUYABLE, Hub_Event_Script_Diancie_88
Hub_Event_Script_Diancie_87:
# 2259 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MANECTITE_BUYABLE, Hub_Event_Script_Diancie_91
Hub_Event_Script_Diancie_90:
# 2263 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SHARPEDONITE_BUYABLE, Hub_Event_Script_Diancie_94
Hub_Event_Script_Diancie_93:
# 2267 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CAMERUPTITE_BUYABLE, Hub_Event_Script_Diancie_97
Hub_Event_Script_Diancie_96:
# 2271 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ALTARIANITE_BUYABLE, Hub_Event_Script_Diancie_100
Hub_Event_Script_Diancie_99:
# 2275 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BANETTITE_BUYABLE, Hub_Event_Script_Diancie_103
Hub_Event_Script_Diancie_102:
# 2279 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ABSOLITE_BUYABLE, Hub_Event_Script_Diancie_106
Hub_Event_Script_Diancie_105:
# 2283 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GLALITITE_BUYABLE, Hub_Event_Script_Diancie_109
Hub_Event_Script_Diancie_108:
# 2287 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SALAMENCITE_BUYABLE, Hub_Event_Script_Diancie_112
Hub_Event_Script_Diancie_111:
# 2291 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_METAGROSSITE_BUYABLE, Hub_Event_Script_Diancie_115
Hub_Event_Script_Diancie_114:
# 2295 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_LOPUNNITE_BUYABLE, Hub_Event_Script_Diancie_118
Hub_Event_Script_Diancie_117:
# 2299 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GARCHOMPITE_BUYABLE, Hub_Event_Script_Diancie_121
Hub_Event_Script_Diancie_120:
# 2303 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_LUCARIONITE_BUYABLE, Hub_Event_Script_Diancie_124
Hub_Event_Script_Diancie_123:
# 2307 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ABOMASITE_BUYABLE, Hub_Event_Script_Diancie_127
Hub_Event_Script_Diancie_126:
# 2311 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GALLADITE_BUYABLE, Hub_Event_Script_Diancie_130
Hub_Event_Script_Diancie_129:
# 2315 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CLEFABLITE_BUYABLE, Hub_Event_Script_Diancie_133
Hub_Event_Script_Diancie_132:
# 2319 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_VICTREEBELITE_BUYABLE, Hub_Event_Script_Diancie_136
Hub_Event_Script_Diancie_135:
# 2323 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_STARMINITE_BUYABLE, Hub_Event_Script_Diancie_139
Hub_Event_Script_Diancie_138:
# 2327 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DRAGONINITE_BUYABLE, Hub_Event_Script_Diancie_142
Hub_Event_Script_Diancie_141:
# 2331 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MEGANIUMITE_BUYABLE, Hub_Event_Script_Diancie_145
Hub_Event_Script_Diancie_144:
# 2335 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_FERALIGITE_BUYABLE, Hub_Event_Script_Diancie_148
Hub_Event_Script_Diancie_147:
# 2339 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SKARMORITE_BUYABLE, Hub_Event_Script_Diancie_151
Hub_Event_Script_Diancie_150:
# 2343 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_FROSLASSITE_BUYABLE, Hub_Event_Script_Diancie_154
Hub_Event_Script_Diancie_153:
# 2347 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_EMBOARITE_BUYABLE, Hub_Event_Script_Diancie_157
Hub_Event_Script_Diancie_156:
# 2351 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_EXCADRITE_BUYABLE, Hub_Event_Script_Diancie_160
Hub_Event_Script_Diancie_159:
# 2355 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCOLIPITE_BUYABLE, Hub_Event_Script_Diancie_163
Hub_Event_Script_Diancie_162:
# 2359 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCRAFTINITE_BUYABLE, Hub_Event_Script_Diancie_166
Hub_Event_Script_Diancie_165:
# 2363 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_EELEKTROSSITE_BUYABLE, Hub_Event_Script_Diancie_169
Hub_Event_Script_Diancie_168:
# 2367 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHANDELURITE_BUYABLE, Hub_Event_Script_Diancie_172
Hub_Event_Script_Diancie_171:
# 2371 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHESNAUGHTITE_BUYABLE, Hub_Event_Script_Diancie_175
Hub_Event_Script_Diancie_174:
# 2375 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DELPHOXITE_BUYABLE, Hub_Event_Script_Diancie_178
Hub_Event_Script_Diancie_177:
# 2379 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GRENINJITE_BUYABLE, Hub_Event_Script_Diancie_181
Hub_Event_Script_Diancie_180:
# 2383 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_PYROARITE_BUYABLE, Hub_Event_Script_Diancie_184
Hub_Event_Script_Diancie_183:
# 2387 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MALAMARITE_BUYABLE, Hub_Event_Script_Diancie_187
Hub_Event_Script_Diancie_186:
# 2391 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BARBARACITE_BUYABLE, Hub_Event_Script_Diancie_190
Hub_Event_Script_Diancie_189:
# 2395 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DRAGALGITE_BUYABLE, Hub_Event_Script_Diancie_193
Hub_Event_Script_Diancie_192:
# 2399 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_HAWLUCHANITE_BUYABLE, Hub_Event_Script_Diancie_196
Hub_Event_Script_Diancie_195:
# 2403 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DRAMPANITE_BUYABLE, Hub_Event_Script_Diancie_199
Hub_Event_Script_Diancie_198:
# 2407 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_FALINKSITE_BUYABLE, Hub_Event_Script_Diancie_202
Hub_Event_Script_Diancie_201:
# 2411 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_RAICHUNITE_X_BUYABLE, Hub_Event_Script_Diancie_205
Hub_Event_Script_Diancie_204:
# 2415 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_RAICHUNITE_Y_BUYABLE, Hub_Event_Script_Diancie_208
Hub_Event_Script_Diancie_207:
# 2419 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHIMECHITE_BUYABLE, Hub_Event_Script_Diancie_211
Hub_Event_Script_Diancie_210:
# 2423 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_STARAPTITE_BUYABLE, Hub_Event_Script_Diancie_214
Hub_Event_Script_Diancie_213:
# 2427 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GOLURKITE_BUYABLE, Hub_Event_Script_Diancie_217
Hub_Event_Script_Diancie_216:
# 2431 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MEOWSTICITE_BUYABLE, Hub_Event_Script_Diancie_220
Hub_Event_Script_Diancie_219:
# 2435 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CRABOMINITE_BUYABLE, Hub_Event_Script_Diancie_223
Hub_Event_Script_Diancie_222:
# 2439 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GOLISOPITE_BUYABLE, Hub_Event_Script_Diancie_226
Hub_Event_Script_Diancie_225:
# 2443 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCOVILLAINITE_BUYABLE, Hub_Event_Script_Diancie_229
Hub_Event_Script_Diancie_228:
# 2447 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GLIMMORANITE_BUYABLE, Hub_Event_Script_Diancie_232
Hub_Event_Script_Diancie_231:
# 2451 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BAXCALIBRITE_BUYABLE, Hub_Event_Script_Diancie_235
Hub_Event_Script_Diancie_234:
# 2456 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Diancie_238
# 3581 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_155
# 3586 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3587 "data/maps/Hub1/scripts.pory"
	releaseall
Hub_Event_Script_Diancie_237:
# 3589 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
	goto Hub_Event_Script_Diancie_1

Hub_Event_Script_Diancie_6:
# 2134 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ITEM_CHARIZARDITE_X_UNLOCKED, Hub_Event_Script_Diancie_3
	goto Hub_Event_Script_Diancie_5

Hub_Event_Script_Diancie_9:
# 2126 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ITEM_CHARIZARDITE_X_UNLOCKED, Hub_Event_Script_Diancie_2
	goto Hub_Event_Script_Diancie_7

Hub_Event_Script_Diancie_13:
# 2156 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_3, ITEM_VENUSAURITE
# 2157 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_12

Hub_Event_Script_Diancie_16:
# 2160 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_4, ITEM_CHARIZARDITE_Y
# 2161 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_15

Hub_Event_Script_Diancie_19:
# 2164 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_5, ITEM_BLASTOISINITE
# 2165 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_18

Hub_Event_Script_Diancie_22:
# 2168 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_6, ITEM_BEEDRILLITE
# 2169 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_21

Hub_Event_Script_Diancie_25:
# 2172 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_7, ITEM_PIDGEOTITE
# 2173 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_24

Hub_Event_Script_Diancie_28:
# 2176 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_8, ITEM_ALAKAZITE
# 2177 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_27

Hub_Event_Script_Diancie_31:
# 2180 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_9, ITEM_SLOWBRONITE
# 2181 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_30

Hub_Event_Script_Diancie_34:
# 2184 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_10, ITEM_GENGARITE
# 2185 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_33

Hub_Event_Script_Diancie_37:
# 2188 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_11, ITEM_KANGASKHANITE
# 2189 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_36

Hub_Event_Script_Diancie_40:
# 2192 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_12, ITEM_PINSIRITE
# 2193 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_39

Hub_Event_Script_Diancie_43:
# 2196 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_13, ITEM_GYARADOSITE
# 2197 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_42

Hub_Event_Script_Diancie_46:
# 2200 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_14, ITEM_AERODACTYLITE
# 2201 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_45

Hub_Event_Script_Diancie_49:
# 2204 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_15, ITEM_AMPHAROSITE
# 2205 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_48

Hub_Event_Script_Diancie_52:
# 2208 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_16, ITEM_STEELIXITE
# 2209 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_51

Hub_Event_Script_Diancie_55:
# 2212 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_17, ITEM_SCIZORITE
# 2213 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_54

Hub_Event_Script_Diancie_58:
# 2216 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_18, ITEM_HERACRONITE
# 2217 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_57

Hub_Event_Script_Diancie_61:
# 2220 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_19, ITEM_HOUNDOOMINITE
# 2221 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_60

Hub_Event_Script_Diancie_64:
# 2224 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_20, ITEM_TYRANITARITE
# 2225 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_63

Hub_Event_Script_Diancie_67:
# 2228 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_21, ITEM_SCEPTILITE
# 2229 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_66

Hub_Event_Script_Diancie_70:
# 2232 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_22, ITEM_BLAZIKENITE
# 2233 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_69

Hub_Event_Script_Diancie_73:
# 2236 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_23, ITEM_SWAMPERTITE
# 2237 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_72

Hub_Event_Script_Diancie_76:
# 2240 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_24, ITEM_GARDEVOIRITE
# 2241 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_75

Hub_Event_Script_Diancie_79:
# 2244 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_25, ITEM_SABLENITE
# 2245 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_78

Hub_Event_Script_Diancie_82:
# 2248 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_26, ITEM_MAWILITE
# 2249 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_81

Hub_Event_Script_Diancie_85:
# 2252 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_27, ITEM_AGGRONITE
# 2253 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_84

Hub_Event_Script_Diancie_88:
# 2256 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_28, ITEM_MEDICHAMITE
# 2257 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_87

Hub_Event_Script_Diancie_91:
# 2260 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_29, ITEM_MANECTITE
# 2261 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_90

Hub_Event_Script_Diancie_94:
# 2264 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_30, ITEM_SHARPEDONITE
# 2265 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_93

Hub_Event_Script_Diancie_97:
# 2268 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_31, ITEM_CAMERUPTITE
# 2269 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_96

Hub_Event_Script_Diancie_100:
# 2272 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_32, ITEM_ALTARIANITE
# 2273 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_99

Hub_Event_Script_Diancie_103:
# 2276 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_33, ITEM_BANETTITE
# 2277 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_102

Hub_Event_Script_Diancie_106:
# 2280 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_34, ITEM_ABSOLITE
# 2281 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_105

Hub_Event_Script_Diancie_109:
# 2284 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_35, ITEM_GLALITITE
# 2285 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_108

Hub_Event_Script_Diancie_112:
# 2288 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_36, ITEM_SALAMENCITE
# 2289 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_111

Hub_Event_Script_Diancie_115:
# 2292 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_37, ITEM_METAGROSSITE
# 2293 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_114

Hub_Event_Script_Diancie_118:
# 2296 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_38, ITEM_LOPUNNITE
# 2297 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_117

Hub_Event_Script_Diancie_121:
# 2300 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_39, ITEM_GARCHOMPITE
# 2301 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_120

Hub_Event_Script_Diancie_124:
# 2304 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_40, ITEM_LUCARIONITE
# 2305 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_123

Hub_Event_Script_Diancie_127:
# 2308 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_41, ITEM_ABOMASITE
# 2309 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_126

Hub_Event_Script_Diancie_130:
# 2312 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_42, ITEM_GALLADITE
# 2313 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_129

Hub_Event_Script_Diancie_133:
# 2316 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_43, ITEM_CLEFABLITE
# 2317 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_132

Hub_Event_Script_Diancie_136:
# 2320 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_44, ITEM_VICTREEBELITE
# 2321 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_135

Hub_Event_Script_Diancie_139:
# 2324 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_45, ITEM_STARMINITE
# 2325 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_138

Hub_Event_Script_Diancie_142:
# 2328 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_46, ITEM_DRAGONINITE
# 2329 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_141

Hub_Event_Script_Diancie_145:
# 2332 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_47, ITEM_MEGANIUMITE
# 2333 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_144

Hub_Event_Script_Diancie_148:
# 2336 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_48, ITEM_FERALIGITE
# 2337 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_147

Hub_Event_Script_Diancie_151:
# 2340 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_49, ITEM_SKARMORITE
# 2341 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_150

Hub_Event_Script_Diancie_154:
# 2344 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_50, ITEM_FROSLASSITE
# 2345 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_153

Hub_Event_Script_Diancie_157:
# 2348 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_51, ITEM_EMBOARITE
# 2349 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_156

Hub_Event_Script_Diancie_160:
# 2352 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_52, ITEM_EXCADRITE
# 2353 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_159

Hub_Event_Script_Diancie_163:
# 2356 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_53, ITEM_SCOLIPITE
# 2357 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_162

Hub_Event_Script_Diancie_166:
# 2360 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_54, ITEM_SCRAFTINITE
# 2361 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_165

Hub_Event_Script_Diancie_169:
# 2364 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_55, ITEM_EELEKTROSSITE
# 2365 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_168

Hub_Event_Script_Diancie_172:
# 2368 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_56, ITEM_CHANDELURITE
# 2369 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_171

Hub_Event_Script_Diancie_175:
# 2372 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_57, ITEM_CHESNAUGHTITE
# 2373 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_174

Hub_Event_Script_Diancie_178:
# 2376 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_58, ITEM_DELPHOXITE
# 2377 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_177

Hub_Event_Script_Diancie_181:
# 2380 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_59, ITEM_GRENINJITE
# 2381 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_180

Hub_Event_Script_Diancie_184:
# 2384 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_60, ITEM_PYROARITE
# 2385 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_183

Hub_Event_Script_Diancie_187:
# 2388 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_61, ITEM_MALAMARITE
# 2389 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_186

Hub_Event_Script_Diancie_190:
# 2392 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_62, ITEM_BARBARACITE
# 2393 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_189

Hub_Event_Script_Diancie_193:
# 2396 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_63, ITEM_DRAGALGITE
# 2397 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_192

Hub_Event_Script_Diancie_196:
# 2400 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_64, ITEM_HAWLUCHANITE
# 2401 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_195

Hub_Event_Script_Diancie_199:
# 2404 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_65, ITEM_DRAMPANITE
# 2405 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_198

Hub_Event_Script_Diancie_202:
# 2408 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_66, ITEM_FALINKSITE
# 2409 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_201

Hub_Event_Script_Diancie_205:
# 2412 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_67, ITEM_RAICHUNITE_X
# 2413 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_204

Hub_Event_Script_Diancie_208:
# 2416 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_68, ITEM_RAICHUNITE_Y
# 2417 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_207

Hub_Event_Script_Diancie_211:
# 2420 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_69, ITEM_CHIMECHITE
# 2421 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_210

Hub_Event_Script_Diancie_214:
# 2424 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_70, ITEM_STARAPTITE
# 2425 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_213

Hub_Event_Script_Diancie_217:
# 2428 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_71, ITEM_GOLURKITE
# 2429 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_216

Hub_Event_Script_Diancie_220:
# 2432 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_72, ITEM_MEOWSTICITE
# 2433 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_219

Hub_Event_Script_Diancie_223:
# 2436 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_73, ITEM_CRABOMINITE
# 2437 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_222

Hub_Event_Script_Diancie_226:
# 2440 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_74, ITEM_GOLISOPITE
# 2441 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_225

Hub_Event_Script_Diancie_229:
# 2444 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_75, ITEM_SCOVILLAINITE
# 2445 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_228

Hub_Event_Script_Diancie_232:
# 2448 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_76, ITEM_GLIMMORANITE
# 2449 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_231

Hub_Event_Script_Diancie_235:
# 2452 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_77, ITEM_BAXCALIBRITE
# 2453 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_234

Hub_Event_Script_Diancie_238:
# 2458 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_NEW_MEGA_BUYABLE, Hub_Event_Script_Diancie_242
# 2465 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_79
Hub_Event_Script_Diancie_241:
# 2467 "data/maps/Hub1/scripts.pory"
	showcoinsbox 21, 11
# 2468 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 2469 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 2470 "data/maps/Hub1/scripts.pory"
	case ITEM_VENUSAURITE, Hub_Event_Script_Diancie_246
# 2485 "data/maps/Hub1/scripts.pory"
	case ITEM_CHARIZARDITE_Y, Hub_Event_Script_Diancie_247
# 2500 "data/maps/Hub1/scripts.pory"
	case ITEM_BLASTOISINITE, Hub_Event_Script_Diancie_248
# 2515 "data/maps/Hub1/scripts.pory"
	case ITEM_BEEDRILLITE, Hub_Event_Script_Diancie_249
# 2530 "data/maps/Hub1/scripts.pory"
	case ITEM_PIDGEOTITE, Hub_Event_Script_Diancie_250
# 2545 "data/maps/Hub1/scripts.pory"
	case ITEM_ALAKAZITE, Hub_Event_Script_Diancie_251
# 2560 "data/maps/Hub1/scripts.pory"
	case ITEM_SLOWBRONITE, Hub_Event_Script_Diancie_252
# 2575 "data/maps/Hub1/scripts.pory"
	case ITEM_GENGARITE, Hub_Event_Script_Diancie_253
# 2590 "data/maps/Hub1/scripts.pory"
	case ITEM_KANGASKHANITE, Hub_Event_Script_Diancie_254
# 2605 "data/maps/Hub1/scripts.pory"
	case ITEM_PINSIRITE, Hub_Event_Script_Diancie_255
# 2620 "data/maps/Hub1/scripts.pory"
	case ITEM_GYARADOSITE, Hub_Event_Script_Diancie_256
# 2635 "data/maps/Hub1/scripts.pory"
	case ITEM_AERODACTYLITE, Hub_Event_Script_Diancie_257
# 2650 "data/maps/Hub1/scripts.pory"
	case ITEM_AMPHAROSITE, Hub_Event_Script_Diancie_258
# 2665 "data/maps/Hub1/scripts.pory"
	case ITEM_STEELIXITE, Hub_Event_Script_Diancie_259
# 2680 "data/maps/Hub1/scripts.pory"
	case ITEM_SCIZORITE, Hub_Event_Script_Diancie_260
# 2695 "data/maps/Hub1/scripts.pory"
	case ITEM_HERACRONITE, Hub_Event_Script_Diancie_261
# 2710 "data/maps/Hub1/scripts.pory"
	case ITEM_HOUNDOOMINITE, Hub_Event_Script_Diancie_262
# 2725 "data/maps/Hub1/scripts.pory"
	case ITEM_TYRANITARITE, Hub_Event_Script_Diancie_263
# 2740 "data/maps/Hub1/scripts.pory"
	case ITEM_SCEPTILITE, Hub_Event_Script_Diancie_264
# 2755 "data/maps/Hub1/scripts.pory"
	case ITEM_BLAZIKENITE, Hub_Event_Script_Diancie_265
# 2770 "data/maps/Hub1/scripts.pory"
	case ITEM_SWAMPERTITE, Hub_Event_Script_Diancie_266
# 2785 "data/maps/Hub1/scripts.pory"
	case ITEM_GARDEVOIRITE, Hub_Event_Script_Diancie_267
# 2800 "data/maps/Hub1/scripts.pory"
	case ITEM_SABLENITE, Hub_Event_Script_Diancie_268
# 2815 "data/maps/Hub1/scripts.pory"
	case ITEM_MAWILITE, Hub_Event_Script_Diancie_269
# 2830 "data/maps/Hub1/scripts.pory"
	case ITEM_AGGRONITE, Hub_Event_Script_Diancie_270
# 2845 "data/maps/Hub1/scripts.pory"
	case ITEM_MEDICHAMITE, Hub_Event_Script_Diancie_271
# 2860 "data/maps/Hub1/scripts.pory"
	case ITEM_MANECTITE, Hub_Event_Script_Diancie_272
# 2875 "data/maps/Hub1/scripts.pory"
	case ITEM_SHARPEDONITE, Hub_Event_Script_Diancie_273
# 2890 "data/maps/Hub1/scripts.pory"
	case ITEM_CAMERUPTITE, Hub_Event_Script_Diancie_274
# 2905 "data/maps/Hub1/scripts.pory"
	case ITEM_ALTARIANITE, Hub_Event_Script_Diancie_275
# 2920 "data/maps/Hub1/scripts.pory"
	case ITEM_BANETTITE, Hub_Event_Script_Diancie_276
# 2935 "data/maps/Hub1/scripts.pory"
	case ITEM_ABSOLITE, Hub_Event_Script_Diancie_277
# 2950 "data/maps/Hub1/scripts.pory"
	case ITEM_GLALITITE, Hub_Event_Script_Diancie_278
# 2965 "data/maps/Hub1/scripts.pory"
	case ITEM_SALAMENCITE, Hub_Event_Script_Diancie_279
# 2980 "data/maps/Hub1/scripts.pory"
	case ITEM_LOPUNNITE, Hub_Event_Script_Diancie_280
# 2995 "data/maps/Hub1/scripts.pory"
	case ITEM_GARCHOMPITE, Hub_Event_Script_Diancie_281
# 3010 "data/maps/Hub1/scripts.pory"
	case ITEM_LUCARIONITE, Hub_Event_Script_Diancie_282
# 3025 "data/maps/Hub1/scripts.pory"
	case ITEM_ABOMASITE, Hub_Event_Script_Diancie_283
# 3040 "data/maps/Hub1/scripts.pory"
	case ITEM_GALLADITE, Hub_Event_Script_Diancie_284
# 3055 "data/maps/Hub1/scripts.pory"
	case ITEM_CLEFABLITE, Hub_Event_Script_Diancie_285
# 3070 "data/maps/Hub1/scripts.pory"
	case ITEM_VICTREEBELITE, Hub_Event_Script_Diancie_286
# 3085 "data/maps/Hub1/scripts.pory"
	case ITEM_STARMINITE, Hub_Event_Script_Diancie_287
# 3100 "data/maps/Hub1/scripts.pory"
	case ITEM_DRAGONINITE, Hub_Event_Script_Diancie_288
# 3115 "data/maps/Hub1/scripts.pory"
	case ITEM_MEGANIUMITE, Hub_Event_Script_Diancie_289
# 3130 "data/maps/Hub1/scripts.pory"
	case ITEM_FERALIGITE, Hub_Event_Script_Diancie_290
# 3145 "data/maps/Hub1/scripts.pory"
	case ITEM_SKARMORITE, Hub_Event_Script_Diancie_291
# 3160 "data/maps/Hub1/scripts.pory"
	case ITEM_FROSLASSITE, Hub_Event_Script_Diancie_292
# 3175 "data/maps/Hub1/scripts.pory"
	case ITEM_EMBOARITE, Hub_Event_Script_Diancie_293
# 3190 "data/maps/Hub1/scripts.pory"
	case ITEM_EXCADRITE, Hub_Event_Script_Diancie_294
# 3205 "data/maps/Hub1/scripts.pory"
	case ITEM_SCOLIPITE, Hub_Event_Script_Diancie_295
# 3220 "data/maps/Hub1/scripts.pory"
	case ITEM_SCRAFTINITE, Hub_Event_Script_Diancie_296
# 3235 "data/maps/Hub1/scripts.pory"
	case ITEM_EELEKTROSSITE, Hub_Event_Script_Diancie_297
# 3250 "data/maps/Hub1/scripts.pory"
	case ITEM_CHANDELURITE, Hub_Event_Script_Diancie_298
# 3265 "data/maps/Hub1/scripts.pory"
	case ITEM_CHESNAUGHTITE, Hub_Event_Script_Diancie_299
# 3280 "data/maps/Hub1/scripts.pory"
	case ITEM_DELPHOXITE, Hub_Event_Script_Diancie_300
# 3295 "data/maps/Hub1/scripts.pory"
	case ITEM_GRENINJITE, Hub_Event_Script_Diancie_301
# 3310 "data/maps/Hub1/scripts.pory"
	case ITEM_PYROARITE, Hub_Event_Script_Diancie_302
# 3325 "data/maps/Hub1/scripts.pory"
	case ITEM_MALAMARITE, Hub_Event_Script_Diancie_303
# 3340 "data/maps/Hub1/scripts.pory"
	case ITEM_BARBARACITE, Hub_Event_Script_Diancie_304
# 3355 "data/maps/Hub1/scripts.pory"
	case ITEM_DRAGALGITE, Hub_Event_Script_Diancie_305
# 3370 "data/maps/Hub1/scripts.pory"
	case ITEM_HAWLUCHANITE, Hub_Event_Script_Diancie_306
# 3385 "data/maps/Hub1/scripts.pory"
	case ITEM_DRAMPANITE, Hub_Event_Script_Diancie_307
# 3400 "data/maps/Hub1/scripts.pory"
	case ITEM_FALINKSITE, Hub_Event_Script_Diancie_308
# 3415 "data/maps/Hub1/scripts.pory"
	case ITEM_RAICHUNITE_X, Hub_Event_Script_Diancie_309
# 3430 "data/maps/Hub1/scripts.pory"
	case ITEM_RAICHUNITE_Y, Hub_Event_Script_Diancie_310
# 3445 "data/maps/Hub1/scripts.pory"
	case ITEM_CHIMECHITE, Hub_Event_Script_Diancie_311
# 3460 "data/maps/Hub1/scripts.pory"
	case ITEM_STARAPTITE, Hub_Event_Script_Diancie_312
# 3475 "data/maps/Hub1/scripts.pory"
	case ITEM_GOLURKITE, Hub_Event_Script_Diancie_313
# 3490 "data/maps/Hub1/scripts.pory"
	case ITEM_MEOWSTICITE, Hub_Event_Script_Diancie_314
# 3505 "data/maps/Hub1/scripts.pory"
	case ITEM_CRABOMINITE, Hub_Event_Script_Diancie_315
# 3520 "data/maps/Hub1/scripts.pory"
	case ITEM_GOLISOPITE, Hub_Event_Script_Diancie_316
# 3535 "data/maps/Hub1/scripts.pory"
	case ITEM_SCOVILLAINITE, Hub_Event_Script_Diancie_317
# 3550 "data/maps/Hub1/scripts.pory"
	case ITEM_GLIMMORANITE, Hub_Event_Script_Diancie_318
# 3565 "data/maps/Hub1/scripts.pory"
	case ITEM_BAXCALIBRITE, Hub_Event_Script_Diancie_319
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_242:
# 2459 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_78
# 2462 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_NEW_MEGA_BUYABLE
	goto Hub_Event_Script_Diancie_241

Hub_Event_Script_Diancie_246:
# 2471 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2472 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_320
# 2482 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_247:
# 2486 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2487 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_323
# 2497 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_248:
# 2501 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2502 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_326
# 2512 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_249:
# 2516 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2517 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_329
# 2527 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_250:
# 2531 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2532 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_332
# 2542 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_251:
# 2546 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2547 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_335
# 2557 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_252:
# 2561 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2562 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_338
# 2572 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_253:
# 2576 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2577 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_341
# 2587 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_254:
# 2591 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2592 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_344
# 2602 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_255:
# 2606 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2607 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_347
# 2617 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_256:
# 2621 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2622 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_350
# 2632 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_257:
# 2636 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2637 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_353
# 2647 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_258:
# 2651 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2652 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_356
# 2662 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_259:
# 2666 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2667 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_359
# 2677 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_260:
# 2681 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2682 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_362
# 2692 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_261:
# 2696 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2697 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_365
# 2707 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_262:
# 2711 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2712 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_368
# 2722 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_263:
# 2726 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2727 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_371
# 2737 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_264:
# 2741 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2742 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_374
# 2752 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_265:
# 2756 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2757 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_377
# 2767 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_266:
# 2771 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2772 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_380
# 2782 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_267:
# 2786 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2787 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_383
# 2797 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_268:
# 2801 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2802 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_386
# 2812 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_269:
# 2816 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2817 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_389
# 2827 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_270:
# 2831 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2832 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_392
# 2842 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_271:
# 2846 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2847 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_395
# 2857 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_272:
# 2861 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2862 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_398
# 2872 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_273:
# 2876 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2877 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_401
# 2887 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_274:
# 2891 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2892 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_404
# 2902 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_275:
# 2906 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2907 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_407
# 2917 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_276:
# 2921 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2922 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_410
# 2932 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_277:
# 2936 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2937 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_413
# 2947 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_278:
# 2951 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2952 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_416
# 2962 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_279:
# 2966 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2967 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_419
# 2977 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_280:
# 2981 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2982 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_422
# 2992 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_281:
# 2996 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2997 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_425
# 3007 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_282:
# 3011 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3012 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_428
# 3022 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_283:
# 3026 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3027 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_431
# 3037 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_284:
# 3041 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3042 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_434
# 3052 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_285:
# 3056 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3057 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_437
# 3067 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_286:
# 3071 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3072 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_440
# 3082 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_287:
# 3086 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3087 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_443
# 3097 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_288:
# 3101 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3102 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_446
# 3112 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_289:
# 3116 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3117 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_449
# 3127 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_290:
# 3131 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3132 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_452
# 3142 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_291:
# 3146 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3147 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_455
# 3157 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_292:
# 3161 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3162 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_458
# 3172 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_293:
# 3176 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3177 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_461
# 3187 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_294:
# 3191 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3192 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_464
# 3202 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_295:
# 3206 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3207 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_467
# 3217 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_296:
# 3221 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3222 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_470
# 3232 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_297:
# 3236 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3237 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_473
# 3247 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_298:
# 3251 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3252 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_476
# 3262 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_299:
# 3266 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3267 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_479
# 3277 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_300:
# 3281 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3282 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_482
# 3292 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_301:
# 3296 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3297 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_485
# 3307 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_302:
# 3311 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3312 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_488
# 3322 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_303:
# 3326 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3327 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_491
# 3337 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_304:
# 3341 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3342 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_494
# 3352 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_305:
# 3356 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3357 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_497
# 3367 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_306:
# 3371 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3372 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_500
# 3382 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_307:
# 3386 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3387 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_503
# 3397 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_308:
# 3401 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3402 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_506
# 3412 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_309:
# 3416 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3417 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_509
# 3427 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_310:
# 3431 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3432 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_512
# 3442 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_311:
# 3446 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3447 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_515
# 3457 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_312:
# 3461 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3462 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_518
# 3472 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_313:
# 3476 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3477 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_521
# 3487 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_314:
# 3491 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3492 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_524
# 3502 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_315:
# 3506 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3507 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_527
# 3517 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_316:
# 3521 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3522 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_530
# 3532 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_317:
# 3536 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3537 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_533
# 3547 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_318:
# 3551 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3552 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_536
# 3562 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_319:
# 3566 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3567 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_539
# 3577 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_320:
# 2473 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_VENUSAURITE_UNLOCKED
# 2474 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_VENUSAURITE_BUYABLE
# 2475 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_VENUSAURITE, 1
# 2476 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2477 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2478 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2479 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_80
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_323:
# 2488 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHARIZARDITE_Y_UNLOCKED
# 2489 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHARIZARDITE_Y_BUYABLE
# 2490 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHARIZARDITE_Y, 1
# 2491 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2492 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2493 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2494 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_82
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_326:
# 2503 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BLASTOISINITE_UNLOCKED
# 2504 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BLASTOISINITE_BUYABLE
# 2505 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BLASTOISINITE, 1
# 2506 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2507 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2508 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2509 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_83
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_329:
# 2518 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BEEDRILLITE_UNLOCKED
# 2519 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BEEDRILLITE_BUYABLE
# 2520 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BEEDRILLITE, 1
# 2521 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2522 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2523 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2524 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_84
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_332:
# 2533 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_PIDGEOTITE_UNLOCKED
# 2534 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_PIDGEOTITE_BUYABLE
# 2535 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_PIDGEOTITE, 1
# 2536 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2537 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2538 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2539 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_85
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_335:
# 2548 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ALAKAZITE_UNLOCKED
# 2549 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ALAKAZITE_BUYABLE
# 2550 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ALAKAZITE, 1
# 2551 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2552 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2553 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2554 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_86
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_338:
# 2563 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SLOWBRONITE_UNLOCKED
# 2564 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SLOWBRONITE_BUYABLE
# 2565 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SLOWBRONITE, 1
# 2566 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2567 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2568 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2569 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_87
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_341:
# 2578 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GENGARITE_UNLOCKED
# 2579 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GENGARITE_BUYABLE
# 2580 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GENGARITE, 1
# 2581 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2582 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2583 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2584 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_88
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_344:
# 2593 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_KANGASKHANITE_UNLOCKED
# 2594 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_KANGASKHANITE_BUYABLE
# 2595 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_KANGASKHANITE, 1
# 2596 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2597 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2598 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2599 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_89
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_347:
# 2608 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_PINSIRITE_UNLOCKED
# 2609 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_PINSIRITE_BUYABLE
# 2610 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_PINSIRITE, 1
# 2611 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2612 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2613 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2614 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_90
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_350:
# 2623 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GYARADOSITE_UNLOCKED
# 2624 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GYARADOSITE_BUYABLE
# 2625 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GYARADOSITE, 1
# 2626 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2627 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2628 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2629 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_91
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_353:
# 2638 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_AERODACTYLITE_UNLOCKED
# 2639 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_AERODACTYLITE_BUYABLE
# 2640 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_AERODACTYLITE, 1
# 2641 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2642 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2643 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2644 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_92
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_356:
# 2653 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_AMPHAROSITE_UNLOCKED
# 2654 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_AMPHAROSITE_BUYABLE
# 2655 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_AMPHAROSITE, 1
# 2656 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2657 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2658 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2659 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_93
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_359:
# 2668 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_STEELIXITE_UNLOCKED
# 2669 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_STEELIXITE_BUYABLE
# 2670 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_STEELIXITE, 1
# 2671 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2672 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2673 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2674 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_94
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_362:
# 2683 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCIZORITE_UNLOCKED
# 2684 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCIZORITE_BUYABLE
# 2685 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCIZORITE, 1
# 2686 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2687 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2688 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2689 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_95
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_365:
# 2698 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_HERACRONITE_UNLOCKED
# 2699 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_HERACRONITE_BUYABLE
# 2700 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_HERACRONITE, 1
# 2701 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2702 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2703 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2704 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_96
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_368:
# 2713 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_HOUNDOOMINITE_UNLOCKED
# 2714 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_HOUNDOOMINITE_BUYABLE
# 2715 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_HOUNDOOMINITE, 1
# 2716 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2717 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2718 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2719 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_97
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_371:
# 2728 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_TYRANITARITE_UNLOCKED
# 2729 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_TYRANITARITE_BUYABLE
# 2730 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TYRANITARITE, 1
# 2731 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2732 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2733 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2734 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_98
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_374:
# 2743 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCEPTILITE_UNLOCKED
# 2744 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCEPTILITE_BUYABLE
# 2745 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCEPTILITE, 1
# 2746 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2747 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2748 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2749 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_99
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_377:
# 2758 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BLAZIKENITE_UNLOCKED
# 2759 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BLAZIKENITE_BUYABLE
# 2760 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BLAZIKENITE, 1
# 2761 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2762 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2763 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2764 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_100
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_380:
# 2773 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SWAMPERTITE_UNLOCKED
# 2774 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SWAMPERTITE_BUYABLE
# 2775 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SWAMPERTITE, 1
# 2776 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2777 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2778 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2779 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_101
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_383:
# 2788 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GARDEVOIRITE_UNLOCKED
# 2789 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GARDEVOIRITE_BUYABLE
# 2790 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GARDEVOIRITE, 1
# 2791 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2792 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2793 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2794 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_102
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_386:
# 2803 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SABLENITE_UNLOCKED
# 2804 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SABLENITE_BUYABLE
# 2805 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SABLENITE, 1
# 2806 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2807 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2808 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2809 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_103
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_389:
# 2818 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MAWILITE_UNLOCKED
# 2819 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MAWILITE_BUYABLE
# 2820 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MAWILITE, 1
# 2821 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2822 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2823 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2824 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_104
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_392:
# 2833 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_AGGRONITE_UNLOCKED
# 2834 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_AGGRONITE_BUYABLE
# 2835 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_AGGRONITE, 1
# 2836 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2837 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2838 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2839 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_105
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_395:
# 2848 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MEDICHAMITE_UNLOCKED
# 2849 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MEDICHAMITE_BUYABLE
# 2850 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEDICHAMITE, 1
# 2851 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2852 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2853 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2854 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_106
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_398:
# 2863 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MANECTITE_UNLOCKED
# 2864 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MANECTITE_BUYABLE
# 2865 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MANECTITE, 1
# 2866 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2867 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2868 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2869 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_107
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_401:
# 2878 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SHARPEDONITE_UNLOCKED
# 2879 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SHARPEDONITE_BUYABLE
# 2880 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SHARPEDONITE, 1
# 2881 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2882 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2883 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2884 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_108
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_404:
# 2893 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CAMERUPTITE_UNLOCKED
# 2894 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CAMERUPTITE_BUYABLE
# 2895 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CAMERUPTITE, 1
# 2896 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2897 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2898 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2899 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_109
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_407:
# 2908 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ALTARIANITE_UNLOCKED
# 2909 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ALTARIANITE_BUYABLE
# 2910 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ALTARIANITE, 1
# 2911 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2912 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2913 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2914 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_110
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_410:
# 2923 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BANETTITE_UNLOCKED
# 2924 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BANETTITE_BUYABLE
# 2925 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BANETTITE, 1
# 2926 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2927 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2928 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2929 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_111
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_413:
# 2938 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ABSOLITE_UNLOCKED
# 2939 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ABSOLITE_BUYABLE
# 2940 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ABSOLITE, 1
# 2941 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2942 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2943 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2944 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_112
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_416:
# 2953 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GLALITITE_UNLOCKED
# 2954 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GLALITITE_BUYABLE
# 2955 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GLALITITE, 1
# 2956 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2957 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2958 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2959 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_113
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_419:
# 2968 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SALAMENCITE_UNLOCKED
# 2969 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SALAMENCITE_BUYABLE
# 2970 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SALAMENCITE, 1
# 2971 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2972 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2973 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2974 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_114
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_422:
# 2983 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_LOPUNNITE_UNLOCKED
# 2984 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_LOPUNNITE_BUYABLE
# 2985 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LOPUNNITE, 1
# 2986 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2987 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2988 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2989 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_115
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_425:
# 2998 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GARCHOMPITE_UNLOCKED
# 2999 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GARCHOMPITE_BUYABLE
# 3000 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GARCHOMPITE, 1
# 3001 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3002 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3003 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3004 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_116
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_428:
# 3013 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_LUCARIONITE_UNLOCKED
# 3014 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_LUCARIONITE_BUYABLE
# 3015 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUCARIONITE, 1
# 3016 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3017 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3018 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3019 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_117
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_431:
# 3028 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ABOMASITE_UNLOCKED
# 3029 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ABOMASITE_BUYABLE
# 3030 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ABOMASITE, 1
# 3031 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3032 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3033 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3034 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_118
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_434:
# 3043 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GALLADITE_UNLOCKED
# 3044 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GALLADITE_BUYABLE
# 3045 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GALLADITE, 1
# 3046 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3047 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3048 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3049 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_119
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_437:
# 3058 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CLEFABLITE_UNLOCKED
# 3059 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CLEFABLITE_BUYABLE
# 3060 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CLEFABLITE, 1
# 3061 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3062 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3063 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3064 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_120
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_440:
# 3073 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_VICTREEBELITE_UNLOCKED
# 3074 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_VICTREEBELITE_BUYABLE
# 3075 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_VICTREEBELITE, 1
# 3076 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3077 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3078 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3079 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_121
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_443:
# 3088 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_STARMINITE_UNLOCKED
# 3089 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_STARMINITE_BUYABLE
# 3090 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_STARMINITE, 1
# 3091 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3092 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3093 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3094 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_122
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_446:
# 3103 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DRAGONINITE_UNLOCKED
# 3104 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DRAGONINITE_BUYABLE
# 3105 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DRAGONINITE, 1
# 3106 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3107 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3108 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3109 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_123
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_449:
# 3118 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MEGANIUMITE_UNLOCKED
# 3119 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MEGANIUMITE_BUYABLE
# 3120 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEGANIUMITE, 1
# 3121 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3122 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3123 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3124 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_124
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_452:
# 3133 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_FERALIGITE_UNLOCKED
# 3134 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_FERALIGITE_BUYABLE
# 3135 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_FERALIGITE, 1
# 3136 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3137 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3138 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3139 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_125
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_455:
# 3148 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SKARMORITE_UNLOCKED
# 3149 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SKARMORITE_BUYABLE
# 3150 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SKARMORITE, 1
# 3151 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3152 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3153 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3154 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_126
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_458:
# 3163 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_FROSLASSITE_UNLOCKED
# 3164 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_FROSLASSITE_BUYABLE
# 3165 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_FROSLASSITE, 1
# 3166 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3167 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3168 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3169 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_127
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_461:
# 3178 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_EMBOARITE_UNLOCKED
# 3179 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_EMBOARITE_BUYABLE
# 3180 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_EMBOARITE, 1
# 3181 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3182 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3183 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3184 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_128
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_464:
# 3193 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_EXCADRITE_UNLOCKED
# 3194 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_EXCADRITE_BUYABLE
# 3195 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_EXCADRITE, 1
# 3196 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3197 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3198 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3199 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_129
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_467:
# 3208 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCOLIPITE_UNLOCKED
# 3209 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCOLIPITE_BUYABLE
# 3210 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCOLIPITE, 1
# 3211 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3212 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3213 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3214 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_130
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_470:
# 3223 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCRAFTINITE_UNLOCKED
# 3224 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCRAFTINITE_BUYABLE
# 3225 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCRAFTINITE, 1
# 3226 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3227 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3228 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3229 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_131
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_473:
# 3238 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_EELEKTROSSITE_UNLOCKED
# 3239 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_EELEKTROSSITE_BUYABLE
# 3240 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_EELEKTROSSITE, 1
# 3241 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3242 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3243 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3244 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_132
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_476:
# 3253 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHANDELURITE_UNLOCKED
# 3254 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHANDELURITE_BUYABLE
# 3255 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHANDELURITE, 1
# 3256 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3257 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3258 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3259 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_133
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_479:
# 3268 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHESNAUGHTITE_UNLOCKED
# 3269 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHESNAUGHTITE_BUYABLE
# 3270 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHESNAUGHTITE, 1
# 3271 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3272 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3273 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3274 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_134
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_482:
# 3283 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DELPHOXITE_UNLOCKED
# 3284 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DELPHOXITE_BUYABLE
# 3285 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DELPHOXITE, 1
# 3286 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3287 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3288 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3289 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_135
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_485:
# 3298 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GRENINJITE_UNLOCKED
# 3299 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GRENINJITE_BUYABLE
# 3300 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GRENINJITE, 1
# 3301 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3302 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3303 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3304 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_136
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_488:
# 3313 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_PYROARITE_UNLOCKED
# 3314 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_PYROARITE_BUYABLE
# 3315 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_PYROARITE, 1
# 3316 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3317 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3318 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3319 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_137
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_491:
# 3328 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MALAMARITE_UNLOCKED
# 3329 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MALAMARITE_BUYABLE
# 3330 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MALAMARITE, 1
# 3331 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3332 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3333 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3334 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_138
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_494:
# 3343 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BARBARACITE_UNLOCKED
# 3344 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BARBARACITE_BUYABLE
# 3345 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BARBARACITE, 1
# 3346 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3347 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3348 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3349 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_139
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_497:
# 3358 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DRAGALGITE_UNLOCKED
# 3359 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DRAGALGITE_BUYABLE
# 3360 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DRAGALGITE, 1
# 3361 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3362 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3363 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3364 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_140
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_500:
# 3373 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_HAWLUCHANITE_UNLOCKED
# 3374 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_HAWLUCHANITE_BUYABLE
# 3375 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_HAWLUCHANITE, 1
# 3376 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3377 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3378 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3379 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_141
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_503:
# 3388 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DRAMPANITE_UNLOCKED
# 3389 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DRAMPANITE_BUYABLE
# 3390 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DRAMPANITE, 1
# 3391 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3392 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3393 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3394 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_142
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_506:
# 3403 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_FALINKSITE_UNLOCKED
# 3404 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_FALINKSITE_BUYABLE
# 3405 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_FALINKSITE, 1
# 3406 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3407 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3408 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3409 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_143
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_509:
# 3418 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_RAICHUNITE_X_UNLOCKED
# 3419 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_RAICHUNITE_X_BUYABLE
# 3420 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RAICHUNITE_X, 1
# 3421 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3422 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3423 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3424 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_144
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_512:
# 3433 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_RAICHUNITE_Y_UNLOCKED
# 3434 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_RAICHUNITE_Y_BUYABLE
# 3435 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RAICHUNITE_Y, 1
# 3436 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3437 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3438 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3439 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_145
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_515:
# 3448 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHIMECHITE_UNLOCKED
# 3449 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHIMECHITE_BUYABLE
# 3450 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHIMECHITE, 1
# 3451 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3452 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3453 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3454 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_146
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_518:
# 3463 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_STARAPTITE_UNLOCKED
# 3464 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_STARAPTITE_BUYABLE
# 3465 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_STARAPTITE, 1
# 3466 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3467 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3468 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3469 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_147
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_521:
# 3478 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GOLURKITE_UNLOCKED
# 3479 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GOLURKITE_BUYABLE
# 3480 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GOLURKITE, 1
# 3481 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3482 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3483 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3484 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_148
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_524:
# 3493 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MEOWSTICITE_UNLOCKED
# 3494 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MEOWSTICITE_BUYABLE
# 3495 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEOWSTICITE, 1
# 3496 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3497 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3498 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3499 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_149
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_527:
# 3508 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CRABOMINITE_UNLOCKED
# 3509 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CRABOMINITE_BUYABLE
# 3510 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CRABOMINITE, 1
# 3511 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3512 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3513 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3514 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_150
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_530:
# 3523 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GOLISOPITE_UNLOCKED
# 3524 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GOLISOPITE_BUYABLE
# 3525 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GOLISOPITE, 1
# 3526 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3527 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3528 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3529 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_151
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_533:
# 3538 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCOVILLAINITE_UNLOCKED
# 3539 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCOVILLAINITE_BUYABLE
# 3540 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCOVILLAINITE, 1
# 3541 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3542 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3543 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3544 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_152
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_536:
# 3553 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GLIMMORANITE_UNLOCKED
# 3554 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GLIMMORANITE_BUYABLE
# 3555 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GLIMMORANITE, 1
# 3556 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3557 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3558 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3559 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_153
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_539:
# 3568 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BAXCALIBRITE_UNLOCKED
# 3569 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BAXCALIBRITE_BUYABLE
# 3570 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BAXCALIBRITE, 1
# 3571 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3572 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3573 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3574 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_154
	goto Hub_Event_Script_Diancie_237


Hub_Event_Script_Marowak::
# 3595 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3596 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Marowak_Text_0
# 3597 "data/maps/Hub1/scripts.pory"
	closemessage
# 3598 "data/maps/Hub1/scripts.pory"
	applymovement 1, Hub_Event_Script_Marowak_Movement_0
	return


Hub_Event_Script_Chimecho::
# 3608 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_0, type = MSGBOX_YESNO
# 3609 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Chimecho_1
# 3648 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_18
# 3649 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Chimecho_1:
# 3610 "data/maps/Hub1/scripts.pory"
	closemessage
# 3611 "data/maps/Hub1/scripts.pory"
backtocharmslist:
# 3612 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_1, ITEM_SHINY_STARTER_CHARM
# 3613 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_2, ITEM_LUMP_SUM_CHARM
# 3614 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_3, ITEM_BERRY_PACK_CHARM
# 3615 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TINTED_CHARM_STARTER_UNLOCKED, Hub_Event_Script_Chimecho_5
Hub_Event_Script_Chimecho_4:
# 3616 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_NORMAL_CHARM_STARTER_UNLOCKED, Hub_Event_Script_Chimecho_8
Hub_Event_Script_Chimecho_7:
# 3617 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_MINTY_CHARM_STARTER_UNLOCKED, Hub_Event_Script_Chimecho_11
Hub_Event_Script_Chimecho_10:
# 3618 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_BRUXISH_FLOSS_CHARM_UNLOCKED, Hub_Event_Script_Chimecho_14
Hub_Event_Script_Chimecho_13:
# 3619 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_UNOWN_BUDDY_CHARM_UNLOCKED, Hub_Event_Script_Chimecho_17
Hub_Event_Script_Chimecho_16:
# 3621 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 8, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 3622 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 3623 "data/maps/Hub1/scripts.pory"
	case MULTI_B_PRESSED, Hub_Event_Script_Chimecho_21
# 3627 "data/maps/Hub1/scripts.pory"
	case ITEM_SHINY_STARTER_CHARM, Hub_Event_Script_Chimecho_22
# 3629 "data/maps/Hub1/scripts.pory"
	case ITEM_LUMP_SUM_CHARM, Hub_Event_Script_Chimecho_23
# 3631 "data/maps/Hub1/scripts.pory"
	case ITEM_BERRY_PACK_CHARM, Hub_Event_Script_Chimecho_24
# 3633 "data/maps/Hub1/scripts.pory"
	case ITEM_TINTED_CHARM, Hub_Event_Script_Chimecho_25
# 3635 "data/maps/Hub1/scripts.pory"
	case ITEM_NORMAL_CHARM, Hub_Event_Script_Chimecho_26
# 3637 "data/maps/Hub1/scripts.pory"
	case ITEM_MINTY_CHARM, Hub_Event_Script_Chimecho_27
# 3639 "data/maps/Hub1/scripts.pory"
	case ITEM_BRUXISH_FLOSS_CHARM, Hub_Event_Script_Chimecho_28
# 3641 "data/maps/Hub1/scripts.pory"
	case ITEM_UNOWN_BUDDY_CHARM, Hub_Event_Script_Chimecho_29
Hub_Event_Script_Chimecho_19:
# 3644 "data/maps/Hub1/scripts.pory"
	closemessage
# 3645 "data/maps/Hub1/scripts.pory"
	goto backtocharmslist
	return

Hub_Event_Script_Chimecho_5:
# 3615 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_4, ITEM_TINTED_CHARM
	goto Hub_Event_Script_Chimecho_4

Hub_Event_Script_Chimecho_8:
# 3616 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_5, ITEM_NORMAL_CHARM
	goto Hub_Event_Script_Chimecho_7

Hub_Event_Script_Chimecho_11:
# 3617 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_6, ITEM_MINTY_CHARM
	goto Hub_Event_Script_Chimecho_10

Hub_Event_Script_Chimecho_14:
# 3618 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_7, ITEM_BRUXISH_FLOSS_CHARM
	goto Hub_Event_Script_Chimecho_13

Hub_Event_Script_Chimecho_17:
# 3619 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_8, ITEM_UNOWN_BUDDY_CHARM
	goto Hub_Event_Script_Chimecho_16

Hub_Event_Script_Chimecho_21:
# 3624 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_9
# 3625 "data/maps/Hub1/scripts.pory"
	releaseall
	end

Hub_Event_Script_Chimecho_22:
# 3628 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_10
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_23:
# 3630 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_11
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_24:
# 3632 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_12
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_25:
# 3634 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_13
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_26:
# 3636 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_14
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_27:
# 3638 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_15
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_28:
# 3640 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_16
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_29:
# 3642 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_17
	goto Hub_Event_Script_Chimecho_19


GiveStarterCharm::
# 3655 "data/maps/Hub1/scripts.pory"
	special BufferStarterCharms
# 3656 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_SHINY_STARTER_CHARM
	goto_if_eq GiveStarterCharm_2
# 3656 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_SHINY_STARTER_CHARM
	goto_if_eq GiveStarterCharm_2
# 3656 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_SHINY_STARTER_CHARM
	goto_if_eq GiveStarterCharm_2
GiveStarterCharm_1:
# 3659 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_LUMP_SUM_CHARM
	goto_if_eq GiveStarterCharm_9
# 3659 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_LUMP_SUM_CHARM
	goto_if_eq GiveStarterCharm_9
# 3659 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_LUMP_SUM_CHARM
	goto_if_eq GiveStarterCharm_9
GiveStarterCharm_8:
# 3662 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_BERRY_PACK_CHARM
	goto_if_eq GiveStarterCharm_16
# 3662 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_BERRY_PACK_CHARM
	goto_if_eq GiveStarterCharm_16
# 3662 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_BERRY_PACK_CHARM
	goto_if_eq GiveStarterCharm_16
GiveStarterCharm_15:
# 3665 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_TINTED_CHARM
	goto_if_eq GiveStarterCharm_23
# 3665 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_TINTED_CHARM
	goto_if_eq GiveStarterCharm_23
# 3665 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_TINTED_CHARM
	goto_if_eq GiveStarterCharm_23
GiveStarterCharm_22:
# 3668 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_NORMAL_CHARM
	goto_if_eq GiveStarterCharm_30
# 3668 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_NORMAL_CHARM
	goto_if_eq GiveStarterCharm_30
# 3668 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_NORMAL_CHARM
	goto_if_eq GiveStarterCharm_30
GiveStarterCharm_29:
# 3671 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_MINTY_CHARM
	goto_if_eq GiveStarterCharm_37
# 3671 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_MINTY_CHARM
	goto_if_eq GiveStarterCharm_37
# 3671 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_MINTY_CHARM
	goto_if_eq GiveStarterCharm_37
GiveStarterCharm_36:
# 3674 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_BRUXISH_FLOSS_CHARM
	goto_if_eq GiveStarterCharm_44
# 3674 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_BRUXISH_FLOSS_CHARM
	goto_if_eq GiveStarterCharm_44
# 3674 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_BRUXISH_FLOSS_CHARM
	goto_if_eq GiveStarterCharm_44
GiveStarterCharm_43:
# 3677 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_UNOWN_BUDDY_CHARM
	goto_if_eq GiveStarterCharm_51
# 3677 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_UNOWN_BUDDY_CHARM
	goto_if_eq GiveStarterCharm_51
# 3677 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_UNOWN_BUDDY_CHARM
	goto_if_eq GiveStarterCharm_51
GiveStarterCharm_50:
# 3680 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, TRUE, 3, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 3681 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 3682 "data/maps/Hub1/scripts.pory"
	case ITEM_SHINY_STARTER_CHARM, GiveStarterCharm_59
# 3690 "data/maps/Hub1/scripts.pory"
	case ITEM_LUMP_SUM_CHARM, GiveStarterCharm_60
# 3694 "data/maps/Hub1/scripts.pory"
	case ITEM_BERRY_PACK_CHARM, GiveStarterCharm_61
# 3699 "data/maps/Hub1/scripts.pory"
	case ITEM_TINTED_CHARM, GiveStarterCharm_62
# 3701 "data/maps/Hub1/scripts.pory"
	case ITEM_NORMAL_CHARM, GiveStarterCharm_63
# 3703 "data/maps/Hub1/scripts.pory"
	case ITEM_MINTY_CHARM, GiveStarterCharm_64
# 3705 "data/maps/Hub1/scripts.pory"
	case ITEM_BRUXISH_FLOSS_CHARM, GiveStarterCharm_65
# 3707 "data/maps/Hub1/scripts.pory"
	case ITEM_UNOWN_BUDDY_CHARM, GiveStarterCharm_66
GiveStarterCharm_57:
# 3712 "data/maps/Hub1/scripts.pory"
	msgbox GiveStarterCharm_Text_0
# 3713 "data/maps/Hub1/scripts.pory"
	waitmessage
	return

GiveStarterCharm_2:
# 3657 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_1, ITEM_SHINY_STARTER_CHARM
	goto GiveStarterCharm_1

GiveStarterCharm_9:
# 3660 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_2, ITEM_LUMP_SUM_CHARM
	goto GiveStarterCharm_8

GiveStarterCharm_16:
# 3663 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_3, ITEM_BERRY_PACK_CHARM
	goto GiveStarterCharm_15

GiveStarterCharm_23:
# 3666 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_4, ITEM_TINTED_CHARM
	goto GiveStarterCharm_22

GiveStarterCharm_30:
# 3669 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_5, ITEM_NORMAL_CHARM
	goto GiveStarterCharm_29

GiveStarterCharm_37:
# 3672 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_6, ITEM_MINTY_CHARM
	goto GiveStarterCharm_36

GiveStarterCharm_44:
# 3675 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_7, ITEM_BRUXISH_FLOSS_CHARM
	goto GiveStarterCharm_43

GiveStarterCharm_51:
# 3678 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_8, ITEM_UNOWN_BUDDY_CHARM
	goto GiveStarterCharm_50

GiveStarterCharm_59:
# 3683 "data/maps/Hub1/scripts.pory"
	setflag FLAG_NEXT_GIVE_MON_SHINY
# 3684 "data/maps/Hub1/scripts.pory"
	special ZeroPlayerPartyMons
# 3685 "data/maps/Hub1/scripts.pory"
	special GiveSavedStarter
# 3686 "data/maps/Hub1/scripts.pory"
	special UpdatePlayerSprite
# 3687 "data/maps/Hub1/scripts.pory"
	special UpdateTransformedPlayerPalette
# 3688 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SHINY_STARTER_CHARM, 1
# 3689 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_LEVEL_UP
	goto GiveStarterCharm_57

GiveStarterCharm_60:
# 3691 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUMP_SUM_CHARM, 1
# 3692 "data/maps/Hub1/scripts.pory"
	addmoney 1500
# 3693 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
	goto GiveStarterCharm_57

GiveStarterCharm_61:
# 3695 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BERRY_PACK_CHARM, 1
# 3696 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 1
# 3697 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
# 3698 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto GiveStarterCharm_57

GiveStarterCharm_62:
# 3700 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TINTED_CHARM, 1
	goto GiveStarterCharm_57

GiveStarterCharm_63:
# 3702 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_NORMAL_CHARM, 1
	goto GiveStarterCharm_57

GiveStarterCharm_64:
# 3704 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MINTY_CHARM, 1
	goto GiveStarterCharm_57

GiveStarterCharm_65:
# 3706 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BRUXISH_FLOSS_CHARM, 1
	goto GiveStarterCharm_57

GiveStarterCharm_66:
# 3708 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_UNOWN_BUDDY_CHARM, 1
# 3709 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_UNOWN, 14
	goto GiveStarterCharm_57


Hub_Event_Script_Golem::
# 3719 "data/maps/Hub1/scripts.pory"
	lockall
# 3720 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3721 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEGA_SHOP_UNLOCKED, Hub_Event_Script_Golem_2
# 3724 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Golem_Text_1
Hub_Event_Script_Golem_1:
# 3726 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3727 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Golem_2:
# 3722 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Golem_Text_0
	goto Hub_Event_Script_Golem_1


Hub_Event_Script_Togedemaru::
# 3731 "data/maps/Hub1/scripts.pory"
	lockall
# 3732 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3733 "data/maps/Hub1/scripts.pory"
	random 2
# 3734 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 3735 "data/maps/Hub1/scripts.pory"
	case 0, Hub_Event_Script_Togedemaru_3
# 3737 "data/maps/Hub1/scripts.pory"
	case 1, Hub_Event_Script_Togedemaru_4
Hub_Event_Script_Togedemaru_1:
# 3741 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3742 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Togedemaru_3:
# 3736 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Togedemaru_Text_0
	goto Hub_Event_Script_Togedemaru_1

Hub_Event_Script_Togedemaru_4:
# 3738 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Togedemaru_Text_1
	goto Hub_Event_Script_Togedemaru_1


Hub_Event_Script_Klang::
# 3746 "data/maps/Hub1/scripts.pory"
	lockall
# 3747 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3748 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Klang_Text_0
# 3749 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3750 "data/maps/Hub1/scripts.pory"
	releaseall
	return


Hub_Event_Script_Bruxish::
# 3754 "data/maps/Hub1/scripts.pory"
	lockall
# 3755 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3756 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_BRUXISH_FLOSS_CHARM_UNLOCKED, Hub_Event_Script_Bruxish_2
# 3764 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Bruxish_Text_2
# 3765 "data/maps/Hub1/scripts.pory"
	waitmessage
Hub_Event_Script_Bruxish_1:
# 3767 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Bruxish_2:
# 3757 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Bruxish_Text_0
# 3758 "data/maps/Hub1/scripts.pory"
	setflag FLAG_BRUXISH_FLOSS_CHARM_UNLOCKED
# 3759 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_EVOLVED
# 3760 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Bruxish_Text_1
# 3761 "data/maps/Hub1/scripts.pory"
	waitfanfare
# 3762 "data/maps/Hub1/scripts.pory"
	waitmessage
	goto Hub_Event_Script_Bruxish_1


Hub_Event_Script_Simisage::
# 3771 "data/maps/Hub1/scripts.pory"
	lockall
# 3772 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3773 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Simisage_Text_0
# 3774 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3775 "data/maps/Hub1/scripts.pory"
	releaseall
	return


Hub_Event_Script_Woobat::
# 3779 "data/maps/Hub1/scripts.pory"
	lockall
# 3780 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3781 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Woobat_Text_0
# 3782 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3783 "data/maps/Hub1/scripts.pory"
	releaseall
	return


Hub_Event_Script_Unown::
# 3788 "data/maps/Hub1/scripts.pory"
	lockall
# 3789 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3790 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_UNOWN_BUDDY_CHARM_UNLOCKED, Hub_Event_Script_Unown_2
# 3798 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Unown_Text_2
# 3799 "data/maps/Hub1/scripts.pory"
	waitmessage
Hub_Event_Script_Unown_1:
# 3801 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Unown_2:
# 3791 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Unown_Text_0
# 3792 "data/maps/Hub1/scripts.pory"
	setflag FLAG_UNOWN_BUDDY_CHARM_UNLOCKED
# 3793 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_EVOLVED
# 3794 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Unown_Text_1
# 3795 "data/maps/Hub1/scripts.pory"
	waitfanfare
# 3796 "data/maps/Hub1/scripts.pory"
	waitmessage
	goto Hub_Event_Script_Unown_1


Hub_Event_Script_Smoliv::
# 3805 "data/maps/Hub1/scripts.pory"
	lockall
# 3806 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3807 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Smoliv_Text_0
# 3808 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3809 "data/maps/Hub1/scripts.pory"
	releaseall
	return


# 450 "data/maps/Hub1/scripts.pory"
Hub_Event_Script_Birch_Movement_0:
# 451 "data/maps/Hub1/scripts.pory"
	walk_down
# 452 "data/maps/Hub1/scripts.pory"
	face_left
	step_end

# 459 "data/maps/Hub1/scripts.pory"
Hub_Event_Script_Birch_Movement_1:
# 460 "data/maps/Hub1/scripts.pory"
	walk_up
# 461 "data/maps/Hub1/scripts.pory"
	walk_left
# 462 "data/maps/Hub1/scripts.pory"
	face_right
	step_end

# 465 "data/maps/Hub1/scripts.pory"
Hub_Event_Script_Birch_Movement_2:
# 466 "data/maps/Hub1/scripts.pory"
	walk_up
# 466 "data/maps/Hub1/scripts.pory"
	walk_up
# 466 "data/maps/Hub1/scripts.pory"
	walk_up
# 466 "data/maps/Hub1/scripts.pory"
	walk_up
	step_end

# 3598 "data/maps/Hub1/scripts.pory"
Hub_Event_Script_Marowak_Movement_0:
# 3599 "data/maps/Hub1/scripts.pory"
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
# 31 "data/maps/Hub1/scripts.pory"
	.string "Your Mint Pot activated!$"

AfterWarpIntoNewAct_Text_3:
# 41 "data/maps/Hub1/scripts.pory"
	.string "The level cap has been raised to\n"
	.string "{STR_VAR_1}!\p"
	.string "You can level your pokemon up to the\n"
	.string "cap via the party menu.$"

AfterWarpIntoNewAct_Text_4:
# 52 "data/maps/Hub1/scripts.pory"
	.string "You managed to collect\n{STR_VAR_1} COINS in your last run!$"

AfterWarpIntoNewAct_Text_5:
# 61 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked the Mint Pot as a\n"
	.string "starter charm!$"

AfterWarpIntoNewAct_Text_6:
# 67 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked the Tinted Scope as a\n"
	.string "starter charm!$"

AfterWarpIntoNewAct_Text_7:
# 73 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked the Normal Charm as a\n"
	.string "starter charm!$"

AfterWarpIntoNewAct_Text_8:
# 79 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked a new difficulty!$"

AfterWarpIntoNewAct_Text_9:
# 87 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked an alternate first\n"
	.string "path! Each time you enter a path, you\l"
	.string "now have a chance to enter the\l"
	.string "alternate path.$"

Act1BirchBag_Text_0:
# 120 "data/maps/Hub1/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

AbraTeleport_Text_0:
# 151 "data/maps/Hub1/scripts.pory"
	.string "You'll have to defeat the leader first\nbefore I can teleport you\lto the next path.$"

AbraTeleport_Text_1:
# 155 "data/maps/Hub1/scripts.pory"
	.string "Would you like to teleport\nto the next path?$"

AbraTeleport_Text_2:
# 158 "data/maps/Hub1/scripts.pory"
	.string "Alright then! Here we go!$"

AbraTeleport_Text_3:
# 162 "data/maps/Hub1/scripts.pory"
	.string "Okay! Let me know when you're ready.$"

RivalFight1_Text_0:
# 171 "data/maps/Hub1/scripts.pory"
	.string "Yo I'm Treecko. You seem like\nA worthy rival! Grrr!$"

RivalFight1_Text_1:
# 171 "data/maps/Hub1/scripts.pory"
	.string "Damn you got me.$"

RivalFight1_Text_2:
# 172 "data/maps/Hub1/scripts.pory"
	.string "I'll get you next time. Just you\nwait and see!$"

RivalFight1_Text_3:
# 176 "data/maps/Hub1/scripts.pory"
	.string "Yo I'm Torchic. You seem like\nA worthy rival! Grrr!$"

RivalFight2_Text_0:
# 186 "data/maps/Hub1/scripts.pory"
	.string "Sup. Let's do this.$"

RivalFight2_Text_1:
# 186 "data/maps/Hub1/scripts.pory"
	.string "Grrrr...$"

RivalFight2_Text_2:
# 187 "data/maps/Hub1/scripts.pory"
	.string "Just you wait. I'll come back even\nstronger.$"

RivalFight2_Text_3:
# 191 "data/maps/Hub1/scripts.pory"
	.string "I'm fired up and ready to fight!$"

RivalFight2_Text_4:
# 191 "data/maps/Hub1/scripts.pory"
	.string "Noooo!$"

RivalFight2_Text_5:
# 192 "data/maps/Hub1/scripts.pory"
	.string "I need to train even more...$"

RivalFight3_Text_0:
# 201 "data/maps/Hub1/scripts.pory"
	.string "You ready?$"

RivalFight3_Text_1:
# 201 "data/maps/Hub1/scripts.pory"
	.string "I still can't beat you...$"

RivalFight3_Text_2:
# 202 "data/maps/Hub1/scripts.pory"
	.string "Let's fight again.$"

RivalFight3_Text_3:
# 206 "data/maps/Hub1/scripts.pory"
	.string "Raaaa!\nLet's give it our all!$"

RivalFight3_Text_4:
# 206 "data/maps/Hub1/scripts.pory"
	.string "I'm still not strong enough...$"

RivalFight4_Text_0:
# 216 "data/maps/Hub1/scripts.pory"
	.string "One last time...$"

RivalFight4_Text_1:
# 216 "data/maps/Hub1/scripts.pory"
	.string "......$"

RivalFight4_Text_2:
# 217 "data/maps/Hub1/scripts.pory"
	.string "Good luck.$"

RivalFight4_Text_3:
# 221 "data/maps/Hub1/scripts.pory"
	.string "I can't wait to show you how much\nstronger I've gotten!$"

RivalFight4_Text_4:
# 221 "data/maps/Hub1/scripts.pory"
	.string "I'm in shock...\pYou really are the strongest.$"

RivalFight4_Text_5:
# 222 "data/maps/Hub1/scripts.pory"
	.string "I hope you crush it with the last\nremaining fights!$"

HUB1_Run_Stats_Sign_Text_0:
# 239 "data/maps/Hub1/scripts.pory"
	.string "Total Runs: {STR_VAR_1}\nAct 1 Wins: {STR_VAR_2}$"

HUB1_Run_Stats_Sign_Text_1:
# 245 "data/maps/Hub1/scripts.pory"
	.string "Act 2 Wins: {STR_VAR_3}\nAct 3 Wins: {STR_VAR_1}\pAct 4 Wins: {STR_VAR_2}$"

HUB1_ONFRAME_Text_0:
# 276 "data/maps/Hub1/scripts.pory"
	.string "Welcome to Pokemon Path!\pTo start, please choose\na starter pokemon.$"

HUB1_ONFRAME_Text_1:
# 279 "data/maps/Hub1/scripts.pory"
	.string "Bulbasaur$"

HUB1_ONFRAME_Text_2:
# 280 "data/maps/Hub1/scripts.pory"
	.string "Charmander$"

HUB1_ONFRAME_Text_3:
# 281 "data/maps/Hub1/scripts.pory"
	.string "Squirtle$"

HUB1_ONFRAME_Text_4:
# 282 "data/maps/Hub1/scripts.pory"
	.string "Chikorita$"

HUB1_ONFRAME_Text_5:
# 283 "data/maps/Hub1/scripts.pory"
	.string "Cyndaquil$"

HUB1_ONFRAME_Text_6:
# 284 "data/maps/Hub1/scripts.pory"
	.string "Totodile$"

HUB1_ONFRAME_Text_7:
# 285 "data/maps/Hub1/scripts.pory"
	.string "Treecko$"

HUB1_ONFRAME_Text_8:
# 286 "data/maps/Hub1/scripts.pory"
	.string "Torchic$"

HUB1_ONFRAME_Text_9:
# 287 "data/maps/Hub1/scripts.pory"
	.string "Mudkip$"

HUB1_ONFRAME_Text_10:
# 288 "data/maps/Hub1/scripts.pory"
	.string "Turtwig$"

HUB1_ONFRAME_Text_11:
# 289 "data/maps/Hub1/scripts.pory"
	.string "Chimchar$"

HUB1_ONFRAME_Text_12:
# 290 "data/maps/Hub1/scripts.pory"
	.string "Piplup$"

HUB1_ONFRAME_Text_13:
# 291 "data/maps/Hub1/scripts.pory"
	.string "Snivy$"

HUB1_ONFRAME_Text_14:
# 292 "data/maps/Hub1/scripts.pory"
	.string "Tepig$"

HUB1_ONFRAME_Text_15:
# 293 "data/maps/Hub1/scripts.pory"
	.string "Oshawott$"

HUB1_ONFRAME_Text_16:
# 294 "data/maps/Hub1/scripts.pory"
	.string "Chespin$"

HUB1_ONFRAME_Text_17:
# 295 "data/maps/Hub1/scripts.pory"
	.string "Fennekin$"

HUB1_ONFRAME_Text_18:
# 296 "data/maps/Hub1/scripts.pory"
	.string "Froakie$"

HUB1_ONFRAME_Text_19:
# 297 "data/maps/Hub1/scripts.pory"
	.string "Rowlet$"

HUB1_ONFRAME_Text_20:
# 298 "data/maps/Hub1/scripts.pory"
	.string "Litten$"

HUB1_ONFRAME_Text_21:
# 299 "data/maps/Hub1/scripts.pory"
	.string "Popplio$"

HUB1_ONFRAME_Text_22:
# 300 "data/maps/Hub1/scripts.pory"
	.string "Grookey$"

HUB1_ONFRAME_Text_23:
# 301 "data/maps/Hub1/scripts.pory"
	.string "Scorbunny$"

HUB1_ONFRAME_Text_24:
# 302 "data/maps/Hub1/scripts.pory"
	.string "Sobble$"

HUB1_ONFRAME_Text_25:
# 303 "data/maps/Hub1/scripts.pory"
	.string "Sprigatito$"

HUB1_ONFRAME_Text_26:
# 304 "data/maps/Hub1/scripts.pory"
	.string "Fuecoco$"

HUB1_ONFRAME_Text_27:
# 305 "data/maps/Hub1/scripts.pory"
	.string "Quaxly$"

HUB1_ONFRAME_Text_28:
# 426 "data/maps/Hub1/scripts.pory"
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
	.string "collecting pokemon from birch bags,\l"
	.string "gathering items and battling trainers.\p"
	.string "That's the gist of it.\p"
	.string "Now go ahead and start a run when\n"
	.string "you're ready!$"

Hub_Event_Script_Birch_Text_0:
# 436 "data/maps/Hub1/scripts.pory"
	.string "What would you like to do?$"

Hub_Event_Script_Birch_Text_1:
# 437 "data/maps/Hub1/scripts.pory"
	.string "Start a run$"

Hub_Event_Script_Birch_Text_2:
# 437 "data/maps/Hub1/scripts.pory"
	.string "Change the difficulty$"

Hub_Event_Script_Birch_Text_3:
# 441 "data/maps/Hub1/scripts.pory"
	.string "Let me know when you're ready to start\n"
	.string "a run!$"

Hub_Event_Script_Birch_Text_4:
# 445 "data/maps/Hub1/scripts.pory"
	.string "Would you like to start a run?$"

Hub_Event_Script_Birch_Text_5:
# 448 "data/maps/Hub1/scripts.pory"
	.string "Alright then!$"

Hub_Event_Script_Birch_Text_6:
# 455 "data/maps/Hub1/scripts.pory"
	.string "Don't forget to take a starter charm\n"
	.string "with you!$"

Hub_Event_Script_Birch_Text_7:
# 457 "data/maps/Hub1/scripts.pory"
	.string "Now off you go! Good luck!$"

Hub_Event_Script_Birch_Text_8:
# 477 "data/maps/Hub1/scripts.pory"
	.string "Current difficulty: {STR_VAR_1}\nNote the modifiers stack at each level.$"

Hub_Event_Script_Birch_Text_9:
# 478 "data/maps/Hub1/scripts.pory"
	.string "0 - No modifiers$"

Hub_Event_Script_Birch_Text_10:
# 479 "data/maps/Hub1/scripts.pory"
	.string "1 - +1 Enemies Level$"

Hub_Event_Script_Birch_Text_11:
# 480 "data/maps/Hub1/scripts.pory"
	.string "2 - -1 Birch Bag each path$"

Hub_Event_Script_Birch_Text_12:
# 481 "data/maps/Hub1/scripts.pory"
	.string "3 - Less Money$"

Hub_Event_Script_Birch_Text_13:
# 482 "data/maps/Hub1/scripts.pory"
	.string "4 - Enemies crit more$"

Hub_Event_Script_Birch_Text_14:
# 483 "data/maps/Hub1/scripts.pory"
	.string "5 - +1 Enemies Level$"

Hub_Event_Script_Birch_Text_15:
# 484 "data/maps/Hub1/scripts.pory"
	.string "6 - -1 Birch Bag each path$"

Hub_Event_Script_Birch_Text_16:
# 489 "data/maps/Hub1/scripts.pory"
	.string "Beat all 4 paths to unlock the next\n"
	.string "difficulty!$"

Hub_Event_Script_Birch_Text_17:
# 500 "data/maps/Hub1/scripts.pory"
	.string "Difficulty set to {STR_VAR_1}$"

Hub_Event_Script_Miltank_Text_0:
# 512 "data/maps/Hub1/scripts.pory"
	.string "Bulbasaur (500C)$"

Hub_Event_Script_Miltank_Text_1:
# 513 "data/maps/Hub1/scripts.pory"
	.string "Charmander (500C)$"

Hub_Event_Script_Miltank_Text_2:
# 514 "data/maps/Hub1/scripts.pory"
	.string "Squirtle (500C)$"

Hub_Event_Script_Miltank_Text_3:
# 515 "data/maps/Hub1/scripts.pory"
	.string "Chikorita (500C)$"

Hub_Event_Script_Miltank_Text_4:
# 516 "data/maps/Hub1/scripts.pory"
	.string "Cyndaquil (500C)$"

Hub_Event_Script_Miltank_Text_5:
# 517 "data/maps/Hub1/scripts.pory"
	.string "Totodile (500C)$"

Hub_Event_Script_Miltank_Text_6:
# 518 "data/maps/Hub1/scripts.pory"
	.string "Treecko (500C)$"

Hub_Event_Script_Miltank_Text_7:
# 519 "data/maps/Hub1/scripts.pory"
	.string "Torchic (500C)$"

Hub_Event_Script_Miltank_Text_8:
# 520 "data/maps/Hub1/scripts.pory"
	.string "Mudkip (500C)$"

Hub_Event_Script_Miltank_Text_9:
# 521 "data/maps/Hub1/scripts.pory"
	.string "Turtwig (500C)$"

Hub_Event_Script_Miltank_Text_10:
# 522 "data/maps/Hub1/scripts.pory"
	.string "Chimchar (500C)$"

Hub_Event_Script_Miltank_Text_11:
# 523 "data/maps/Hub1/scripts.pory"
	.string "Piplup (500C)$"

Hub_Event_Script_Miltank_Text_12:
# 524 "data/maps/Hub1/scripts.pory"
	.string "Snivy (500C)$"

Hub_Event_Script_Miltank_Text_13:
# 525 "data/maps/Hub1/scripts.pory"
	.string "Tepig (500C)$"

Hub_Event_Script_Miltank_Text_14:
# 526 "data/maps/Hub1/scripts.pory"
	.string "Oshawott (500C)$"

Hub_Event_Script_Miltank_Text_15:
# 527 "data/maps/Hub1/scripts.pory"
	.string "Chespin (500C)$"

Hub_Event_Script_Miltank_Text_16:
# 528 "data/maps/Hub1/scripts.pory"
	.string "Fennekin (500C)$"

Hub_Event_Script_Miltank_Text_17:
# 529 "data/maps/Hub1/scripts.pory"
	.string "Froakie (500C)$"

Hub_Event_Script_Miltank_Text_18:
# 530 "data/maps/Hub1/scripts.pory"
	.string "Rowlet (500C)$"

Hub_Event_Script_Miltank_Text_19:
# 531 "data/maps/Hub1/scripts.pory"
	.string "Litten (500C)$"

Hub_Event_Script_Miltank_Text_20:
# 532 "data/maps/Hub1/scripts.pory"
	.string "Popplio (500C)$"

Hub_Event_Script_Miltank_Text_21:
# 533 "data/maps/Hub1/scripts.pory"
	.string "Grookey (500C)$"

Hub_Event_Script_Miltank_Text_22:
# 534 "data/maps/Hub1/scripts.pory"
	.string "Scorbunny (500C)$"

Hub_Event_Script_Miltank_Text_23:
# 535 "data/maps/Hub1/scripts.pory"
	.string "Sobble (500C)$"

Hub_Event_Script_Miltank_Text_24:
# 536 "data/maps/Hub1/scripts.pory"
	.string "Sprigatito (500C)$"

Hub_Event_Script_Miltank_Text_25:
# 537 "data/maps/Hub1/scripts.pory"
	.string "Fuecoco (500C)$"

Hub_Event_Script_Miltank_Text_26:
# 538 "data/maps/Hub1/scripts.pory"
	.string "Quaxly (500C)$"

Hub_Event_Script_Miltank_Text_27:
# 542 "data/maps/Hub1/scripts.pory"
	.string "Would you like to adopt a pokemon?$"

Hub_Event_Script_Miltank_Text_28:
# 547 "data/maps/Hub1/scripts.pory"
	.string "Come back anytime!$"

Hub_Event_Script_Miltank_Text_29:
# 557 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Bulbasaur as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_30:
# 560 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry. You don't have the coins to\nadopt that pokemon.$"

Hub_Event_Script_Miltank_Text_31:
# 569 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Charmander as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_32:
# 581 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Squirtle as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_33:
# 593 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chikorita as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_34:
# 605 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Cyndaquil as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_35:
# 617 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Totodile as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_36:
# 629 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Treecko as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_37:
# 641 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Torchic as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_38:
# 653 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Mudkip as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_39:
# 665 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Turtwig as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_40:
# 677 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chimchar as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_41:
# 689 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Piplup as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_42:
# 701 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Snivy as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_43:
# 713 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Tepig as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_44:
# 725 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Oshawott as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_45:
# 737 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chespin as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_46:
# 749 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Fennekin as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_47:
# 761 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Froakie as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_48:
# 773 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Rowlet as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_49:
# 785 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Litten as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_50:
# 797 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Popplio as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_51:
# 809 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Grookey as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_52:
# 821 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Scorbunny as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_53:
# 833 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Sobble as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_54:
# 845 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Sprigatito as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_55:
# 857 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Fuecoco as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_56:
# 869 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Quaxly as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_57:
# 878 "data/maps/Hub1/scripts.pory"
	.string "You have no more starters left\nto adopt!$"

Hub_Event_Script_Chansey_Text_0:
# 919 "data/maps/Hub1/scripts.pory"
	.string "Would you like to change your starter?$"

Hub_Event_Script_Chansey_Text_1:
# 932 "data/maps/Hub1/scripts.pory"
	.string "There you go!$"

Hub_Event_Script_Chansey_Text_2:
# 940 "data/maps/Hub1/scripts.pory"
	.string "You don't have any starter pokemon yet.\pPlease consider adopting some pokemon\nfrom my friend Miltank to the right.$"

KecShop_Sign_Text_0:
# 947 "data/maps/Hub1/scripts.pory"
	.string "Welcome to the Kecleon Brother's shop!$"

KecShop_Text_0:
# 955 "data/maps/Hub1/scripts.pory"
	.string "Oran Berry (¥200)$"

KecShop_Text_1:
# 956 "data/maps/Hub1/scripts.pory"
	.string "Mem. Mushroom (¥200)$"

KecShop_Text_2:
# 959 "data/maps/Hub1/scripts.pory"
	.string "Lum Berry (¥200)$"

KecShop_Text_3:
# 963 "data/maps/Hub1/scripts.pory"
	.string "Serious Mint (¥500)$"

KecShop_Text_4:
# 967 "data/maps/Hub1/scripts.pory"
	.string "Rare Candy (¥2000)$"

KecShop_Text_5:
# 971 "data/maps/Hub1/scripts.pory"
	.string "Pkt Birch Bag (¥2000)$"

KecShop_Text_6:
# 975 "data/maps/Hub1/scripts.pory"
	.string "HP Bottle Cap (¥300)$"

KecShop_Text_7:
# 979 "data/maps/Hub1/scripts.pory"
	.string "Attack Bottle Cap (¥300)$"

KecShop_Text_8:
# 983 "data/maps/Hub1/scripts.pory"
	.string "Defense Bottle Cap (¥300)$"

KecShop_Text_9:
# 987 "data/maps/Hub1/scripts.pory"
	.string "Speed Bottle Cap (¥300)$"

KecShop_Text_10:
# 991 "data/maps/Hub1/scripts.pory"
	.string "Sp. Atk Bottle Cap (¥300)$"

KecShop_Text_11:
# 995 "data/maps/Hub1/scripts.pory"
	.string "SpDef Bottle Cap (¥300)$"

KecShop_Text_12:
# 999 "data/maps/Hub1/scripts.pory"
	.string "HP Gold Bottle Cap (¥600)$"

KecShop_Text_13:
# 1003 "data/maps/Hub1/scripts.pory"
	.string "Atk Gold Bottle Cap (¥600)$"

KecShop_Text_14:
# 1007 "data/maps/Hub1/scripts.pory"
	.string "Defense Gold Bottle Cap (¥600)$"

KecShop_Text_15:
# 1011 "data/maps/Hub1/scripts.pory"
	.string "Spe Gold Bottle Cap (¥600)$"

KecShop_Text_16:
# 1015 "data/maps/Hub1/scripts.pory"
	.string "SpAtk Gold Bottle Cap (¥600)$"

KecShop_Text_17:
# 1019 "data/maps/Hub1/scripts.pory"
	.string "SpDef Gold Bottle Cap (¥600)$"

KecShop_Text_18:
# 1034 "data/maps/Hub1/scripts.pory"
	.string "Thank you for your purchase!$"

KecShop_Text_19:
# 1037 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry. You don't have the money to\nbuy that, kec.$"

KecShop_Text_20:
# 1123 "data/maps/Hub1/scripts.pory"
	.string "Sorry, but there's nothing for you\nto buy right now, Kec.$"

KecShop_Shiny_Text_0:
# 1134 "data/maps/Hub1/scripts.pory"
	.string "TM Noble Roar (¥200)$"

KecShop_Shiny_Text_1:
# 1138 "data/maps/Hub1/scripts.pory"
	.string "TM Charm (¥200)$"

KecShop_Shiny_Text_2:
# 1142 "data/maps/Hub1/scripts.pory"
	.string "TM Fake Tears (¥200)$"

KecShop_Shiny_Text_3:
# 1146 "data/maps/Hub1/scripts.pory"
	.string "TM Confuse Ray (¥300)$"

KecShop_Shiny_Text_4:
# 1150 "data/maps/Hub1/scripts.pory"
	.string "TM Thunder Wave (¥300)$"

KecShop_Shiny_Text_5:
# 1154 "data/maps/Hub1/scripts.pory"
	.string "TM Will-O-Wisp (¥500)$"

KecShop_Shiny_Text_6:
# 1158 "data/maps/Hub1/scripts.pory"
	.string "TM Toxic (¥500)$"

KecShop_Shiny_Text_7:
# 1162 "data/maps/Hub1/scripts.pory"
	.string "TM Swift (¥500)$"

KecShop_Shiny_Text_8:
# 1166 "data/maps/Hub1/scripts.pory"
	.string "TM Cut (¥500)$"

KecShop_Shiny_Text_9:
# 1170 "data/maps/Hub1/scripts.pory"
	.string "TM Rock Smash (¥500)$"

KecShop_Shiny_Text_10:
# 1174 "data/maps/Hub1/scripts.pory"
	.string "TM Snarl (¥500)$"

KecShop_Shiny_Text_11:
# 1178 "data/maps/Hub1/scripts.pory"
	.string "TM Electroweb (¥500)$"

KecShop_Shiny_Text_12:
# 1182 "data/maps/Hub1/scripts.pory"
	.string "TM Aurora Beam (¥500)$"

KecShop_Shiny_Text_13:
# 1186 "data/maps/Hub1/scripts.pory"
	.string "TM Psybeam (¥500)$"

KecShop_Shiny_Text_14:
# 1190 "data/maps/Hub1/scripts.pory"
	.string "TM Flamethrower (¥1200)$"

KecShop_Shiny_Text_15:
# 1194 "data/maps/Hub1/scripts.pory"
	.string "TM Ice Beam (¥1200)$"

KecShop_Shiny_Text_16:
# 1198 "data/maps/Hub1/scripts.pory"
	.string "TM Thunderbolt (¥1200)$"

KecShop_Shiny_Text_17:
# 1202 "data/maps/Hub1/scripts.pory"
	.string "TM Scald (¥1000)$"

KecShop_Shiny_Text_18:
# 1206 "data/maps/Hub1/scripts.pory"
	.string "TM Mega Drain (¥800)$"

KecShop_Shiny_Text_19:
# 1210 "data/maps/Hub1/scripts.pory"
	.string "TM Sludge Bomb (¥1000)$"

KecShop_Shiny_Text_20:
# 1214 "data/maps/Hub1/scripts.pory"
	.string "TM Dual Wingbeat (¥900)$"

KecShop_Shiny_Text_21:
# 1218 "data/maps/Hub1/scripts.pory"
	.string "TM Leech Life (¥1000)$"

KecShop_Shiny_Text_22:
# 1222 "data/maps/Hub1/scripts.pory"
	.string "TM Play Rough (¥1000)$"

KecShop_Shiny_Text_23:
# 1226 "data/maps/Hub1/scripts.pory"
	.string "TM Shadow Ball (¥1000)$"

KecShop_Shiny_Text_24:
# 1230 "data/maps/Hub1/scripts.pory"
	.string "TM Earth Power (¥1000)$"

Hub_Event_Script_Kecleon_Text_0:
# 1528 "data/maps/Hub1/scripts.pory"
	.string "Hey there! Would you like me to\nstock an item?$"

Hub_Event_Script_Kecleon_Text_1:
# 1530 "data/maps/Hub1/scripts.pory"
	.string "Rare Candy (2000C)$"

Hub_Event_Script_Kecleon_Text_2:
# 1535 "data/maps/Hub1/scripts.pory"
	.string "Lum Berry (500C)$"

Hub_Event_Script_Kecleon_Text_3:
# 1540 "data/maps/Hub1/scripts.pory"
	.string "Serious Mint (2000C)$"

Hub_Event_Script_Kecleon_Text_4:
# 1545 "data/maps/Hub1/scripts.pory"
	.string "Bottle Caps (1000C)$"

Hub_Event_Script_Kecleon_Text_5:
# 1550 "data/maps/Hub1/scripts.pory"
	.string "Gold Bottle Caps (2000C)$"

Hub_Event_Script_Kecleon_Text_6:
# 1555 "data/maps/Hub1/scripts.pory"
	.string "Pkt Birch Bag (1000C)$"

Hub_Event_Script_Kecleon_Text_7:
# 1572 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Lum Berry as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_8:
# 1575 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry. You don't have the coins to\nstock that item, kec.$"

Hub_Event_Script_Kecleon_Text_9:
# 1586 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Serious Mint as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_10:
# 1600 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Rare Candy as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_11:
# 1614 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked IV Bottle caps as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_12:
# 1628 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Gold Bottle caps as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_13:
# 1642 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Pocket Birch bags as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_14:
# 1650 "data/maps/Hub1/scripts.pory"
	.string "You don't have anything left\nto stock right now. Thank you for\lyour consistent patronage!\p$"

Hub_Event_Script_Shiny_Kecleon_Text_0:
# 1663 "data/maps/Hub1/scripts.pory"
	.string "Howdy! Would you like me to\nstock a new TM?$"

Hub_Event_Script_Shiny_Kecleon_Text_1:
# 1665 "data/maps/Hub1/scripts.pory"
	.string "TM Noble Roar (400C)$"

Hub_Event_Script_Shiny_Kecleon_Text_2:
# 1669 "data/maps/Hub1/scripts.pory"
	.string "TM Charm (400C)$"

Hub_Event_Script_Shiny_Kecleon_Text_3:
# 1673 "data/maps/Hub1/scripts.pory"
	.string "TM Fake Tears (400C)$"

Hub_Event_Script_Shiny_Kecleon_Text_4:
# 1677 "data/maps/Hub1/scripts.pory"
	.string "TM Confuse Ray (800C)$"

Hub_Event_Script_Shiny_Kecleon_Text_5:
# 1681 "data/maps/Hub1/scripts.pory"
	.string "TM Thunder Wave (800C)$"

Hub_Event_Script_Shiny_Kecleon_Text_6:
# 1685 "data/maps/Hub1/scripts.pory"
	.string "TM Will-O-Wisp (800C)$"

Hub_Event_Script_Shiny_Kecleon_Text_7:
# 1689 "data/maps/Hub1/scripts.pory"
	.string "TM Toxic (800C)$"

Hub_Event_Script_Shiny_Kecleon_Text_8:
# 1693 "data/maps/Hub1/scripts.pory"
	.string "TM Rock Smash (900C)$"

Hub_Event_Script_Shiny_Kecleon_Text_9:
# 1697 "data/maps/Hub1/scripts.pory"
	.string "TM Snarl (900C)$"

Hub_Event_Script_Shiny_Kecleon_Text_10:
# 1701 "data/maps/Hub1/scripts.pory"
	.string "TM Electroweb (900C)$"

Hub_Event_Script_Shiny_Kecleon_Text_11:
# 1705 "data/maps/Hub1/scripts.pory"
	.string "TM Aurora Beam (900C)$"

Hub_Event_Script_Shiny_Kecleon_Text_12:
# 1709 "data/maps/Hub1/scripts.pory"
	.string "TM Psybeam (900C)$"

Hub_Event_Script_Shiny_Kecleon_Text_13:
# 1713 "data/maps/Hub1/scripts.pory"
	.string "TM Mega Drain (900C)$"

Hub_Event_Script_Shiny_Kecleon_Text_14:
# 1717 "data/maps/Hub1/scripts.pory"
	.string "TM Flamethrower (1200C)$"

Hub_Event_Script_Shiny_Kecleon_Text_15:
# 1721 "data/maps/Hub1/scripts.pory"
	.string "TM Ice Beam (1200C)$"

Hub_Event_Script_Shiny_Kecleon_Text_16:
# 1725 "data/maps/Hub1/scripts.pory"
	.string "TM Thunderbolt (1200C)$"

Hub_Event_Script_Shiny_Kecleon_Text_17:
# 1729 "data/maps/Hub1/scripts.pory"
	.string "TM Scald (1200C)$"

Hub_Event_Script_Shiny_Kecleon_Text_18:
# 1733 "data/maps/Hub1/scripts.pory"
	.string "TM Sludge Bomb (1200C)$"

Hub_Event_Script_Shiny_Kecleon_Text_19:
# 1737 "data/maps/Hub1/scripts.pory"
	.string "TM Dual Wingbeat (1200C)$"

Hub_Event_Script_Shiny_Kecleon_Text_20:
# 1741 "data/maps/Hub1/scripts.pory"
	.string "TM Leech Life (1200C)$"

Hub_Event_Script_Shiny_Kecleon_Text_21:
# 1745 "data/maps/Hub1/scripts.pory"
	.string "TM Play Rough (1200C)$"

Hub_Event_Script_Shiny_Kecleon_Text_22:
# 1749 "data/maps/Hub1/scripts.pory"
	.string "TM Shadow Ball (1200C)$"

Hub_Event_Script_Shiny_Kecleon_Text_23:
# 1753 "data/maps/Hub1/scripts.pory"
	.string "TM Earth Power (1200C)$"

Hub_Event_Script_Shiny_Kecleon_Text_24:
# 1770 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Noble Roar as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_25:
# 1784 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Rock Smash as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_26:
# 1798 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Swift as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_27:
# 1812 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Cut as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_28:
# 1826 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Charm as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_29:
# 1840 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Fake Tears as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_30:
# 1854 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Confuse Ray as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_31:
# 1868 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Thunder Wave as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_32:
# 1882 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Will O Wisp as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_33:
# 1896 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Toxic as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_34:
# 1910 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Snarl as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_35:
# 1924 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Electroweb as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_36:
# 1938 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Aurora Beam as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_37:
# 1952 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Psybeam as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_38:
# 1966 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Flamethrower as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_39:
# 1980 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Ice Beam as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_40:
# 1994 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Thunderbolt as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_41:
# 2008 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Scald as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_42:
# 2022 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Mega Drain as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_43:
# 2036 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Sludge Bomb as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_44:
# 2050 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Dual Wingbeat as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_45:
# 2064 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Leech Life as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_46:
# 2078 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Play Rough as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_47:
# 2092 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Shadow Ball as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_48:
# 2106 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Earth Power as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_49:
# 2114 "data/maps/Hub1/scripts.pory"
	.string "You don't have anything left\nto puchase right now. Thank you for\lyour consistent patronage!\p$"

Hub_Event_Script_Diancie_Text_0:
# 2127 "data/maps/Hub1/scripts.pory"
	.string "Hey there! I'm Diancie.\n"
	.string "I love collecting special gems.\l"
	.string "I plan on selling some of them soon\l"
	.string "but I don't have any to sell right now.\l"
	.string "I hope you come visit again another\l"
	.string "time.$"

Hub_Event_Script_Diancie_Text_1:
# 2135 "data/maps/Hub1/scripts.pory"
	.string "Hiya! I've finally started selling\n"
	.string "some of my precious gems.\l"
	.string "To celebrate, I'll give you this\l"
	.string "one on the house!$"

Hub_Event_Script_Diancie_Text_2:
# 2144 "data/maps/Hub1/scripts.pory"
	.string "You should know that you can\n"
	.string "mega evolve your pokemon by\l"
	.string "using them on your pokemon like\l"
	.string "a regular evolution stone.\l"
	.string "There aren't so many mega stones\l"
	.string "I want to sell right now.\l"
	.string "But I might sell more\l"
	.string "in the future.$"

Hub_Event_Script_Diancie_Text_3:
# 2156 "data/maps/Hub1/scripts.pory"
	.string "Venusaurite (1000C)$"

Hub_Event_Script_Diancie_Text_4:
# 2160 "data/maps/Hub1/scripts.pory"
	.string "Charizardite Y (1000C)$"

Hub_Event_Script_Diancie_Text_5:
# 2164 "data/maps/Hub1/scripts.pory"
	.string "Blastoisinite (1000C)$"

Hub_Event_Script_Diancie_Text_6:
# 2168 "data/maps/Hub1/scripts.pory"
	.string "Beedrillite (1000C)$"

Hub_Event_Script_Diancie_Text_7:
# 2172 "data/maps/Hub1/scripts.pory"
	.string "Pidgeotite (1000C)$"

Hub_Event_Script_Diancie_Text_8:
# 2176 "data/maps/Hub1/scripts.pory"
	.string "Alakazite (1000C)$"

Hub_Event_Script_Diancie_Text_9:
# 2180 "data/maps/Hub1/scripts.pory"
	.string "Slowbronite (1000C)$"

Hub_Event_Script_Diancie_Text_10:
# 2184 "data/maps/Hub1/scripts.pory"
	.string "Gengarite (1000C)$"

Hub_Event_Script_Diancie_Text_11:
# 2188 "data/maps/Hub1/scripts.pory"
	.string "Kangaskhanite (1000C)$"

Hub_Event_Script_Diancie_Text_12:
# 2192 "data/maps/Hub1/scripts.pory"
	.string "Pinsirite (1000C)$"

Hub_Event_Script_Diancie_Text_13:
# 2196 "data/maps/Hub1/scripts.pory"
	.string "Gyaradosite (1000C)$"

Hub_Event_Script_Diancie_Text_14:
# 2200 "data/maps/Hub1/scripts.pory"
	.string "Aerodactylite (1000C)$"

Hub_Event_Script_Diancie_Text_15:
# 2204 "data/maps/Hub1/scripts.pory"
	.string "Ampharosite (1000C)$"

Hub_Event_Script_Diancie_Text_16:
# 2208 "data/maps/Hub1/scripts.pory"
	.string "Steelixite (1000C)$"

Hub_Event_Script_Diancie_Text_17:
# 2212 "data/maps/Hub1/scripts.pory"
	.string "Scizorite (1000C)$"

Hub_Event_Script_Diancie_Text_18:
# 2216 "data/maps/Hub1/scripts.pory"
	.string "Heracronite (1000C)$"

Hub_Event_Script_Diancie_Text_19:
# 2220 "data/maps/Hub1/scripts.pory"
	.string "Houndoominite (1000C)$"

Hub_Event_Script_Diancie_Text_20:
# 2224 "data/maps/Hub1/scripts.pory"
	.string "Tyranitarite (1000C)$"

Hub_Event_Script_Diancie_Text_21:
# 2228 "data/maps/Hub1/scripts.pory"
	.string "Sceptilite (1000C)$"

Hub_Event_Script_Diancie_Text_22:
# 2232 "data/maps/Hub1/scripts.pory"
	.string "Blazikenite (1000C)$"

Hub_Event_Script_Diancie_Text_23:
# 2236 "data/maps/Hub1/scripts.pory"
	.string "Swampertite (1000C)$"

Hub_Event_Script_Diancie_Text_24:
# 2240 "data/maps/Hub1/scripts.pory"
	.string "Gardevoirite (1000C)$"

Hub_Event_Script_Diancie_Text_25:
# 2244 "data/maps/Hub1/scripts.pory"
	.string "Sablenite (1000C)$"

Hub_Event_Script_Diancie_Text_26:
# 2248 "data/maps/Hub1/scripts.pory"
	.string "Mawilite (1000C)$"

Hub_Event_Script_Diancie_Text_27:
# 2252 "data/maps/Hub1/scripts.pory"
	.string "Aggronite (1000C)$"

Hub_Event_Script_Diancie_Text_28:
# 2256 "data/maps/Hub1/scripts.pory"
	.string "Medichamite (1000C)$"

Hub_Event_Script_Diancie_Text_29:
# 2260 "data/maps/Hub1/scripts.pory"
	.string "Manectite (1000C)$"

Hub_Event_Script_Diancie_Text_30:
# 2264 "data/maps/Hub1/scripts.pory"
	.string "Sharpedonite (1000C)$"

Hub_Event_Script_Diancie_Text_31:
# 2268 "data/maps/Hub1/scripts.pory"
	.string "Cameruptite (1000C)$"

Hub_Event_Script_Diancie_Text_32:
# 2272 "data/maps/Hub1/scripts.pory"
	.string "Altarianite (1000C)$"

Hub_Event_Script_Diancie_Text_33:
# 2276 "data/maps/Hub1/scripts.pory"
	.string "Banettite (1000C)$"

Hub_Event_Script_Diancie_Text_34:
# 2280 "data/maps/Hub1/scripts.pory"
	.string "Absolite (1000C)$"

Hub_Event_Script_Diancie_Text_35:
# 2284 "data/maps/Hub1/scripts.pory"
	.string "Glalitite (1000C)$"

Hub_Event_Script_Diancie_Text_36:
# 2288 "data/maps/Hub1/scripts.pory"
	.string "Salamencite (1000C)$"

Hub_Event_Script_Diancie_Text_37:
# 2292 "data/maps/Hub1/scripts.pory"
	.string "Metagrossite (1000C)$"

Hub_Event_Script_Diancie_Text_38:
# 2296 "data/maps/Hub1/scripts.pory"
	.string "Lopunnite (1000C)$"

Hub_Event_Script_Diancie_Text_39:
# 2300 "data/maps/Hub1/scripts.pory"
	.string "Garchompite (1000C)$"

Hub_Event_Script_Diancie_Text_40:
# 2304 "data/maps/Hub1/scripts.pory"
	.string "Lucarionite (1000C)$"

Hub_Event_Script_Diancie_Text_41:
# 2308 "data/maps/Hub1/scripts.pory"
	.string "Abomasite (1000C)$"

Hub_Event_Script_Diancie_Text_42:
# 2312 "data/maps/Hub1/scripts.pory"
	.string "Galladite (1000C)$"

Hub_Event_Script_Diancie_Text_43:
# 2316 "data/maps/Hub1/scripts.pory"
	.string "Clefablite (1000C)$"

Hub_Event_Script_Diancie_Text_44:
# 2320 "data/maps/Hub1/scripts.pory"
	.string "Victreebelite (1000C)$"

Hub_Event_Script_Diancie_Text_45:
# 2324 "data/maps/Hub1/scripts.pory"
	.string "Starminite (1000C)$"

Hub_Event_Script_Diancie_Text_46:
# 2328 "data/maps/Hub1/scripts.pory"
	.string "Dragoninite (1000C)$"

Hub_Event_Script_Diancie_Text_47:
# 2332 "data/maps/Hub1/scripts.pory"
	.string "Meganiumite (1000C)$"

Hub_Event_Script_Diancie_Text_48:
# 2336 "data/maps/Hub1/scripts.pory"
	.string "Feraligite (1000C)$"

Hub_Event_Script_Diancie_Text_49:
# 2340 "data/maps/Hub1/scripts.pory"
	.string "Skarmorite (1000C)$"

Hub_Event_Script_Diancie_Text_50:
# 2344 "data/maps/Hub1/scripts.pory"
	.string "Froslassite (1000C)$"

Hub_Event_Script_Diancie_Text_51:
# 2348 "data/maps/Hub1/scripts.pory"
	.string "Emboarite (1000C)$"

Hub_Event_Script_Diancie_Text_52:
# 2352 "data/maps/Hub1/scripts.pory"
	.string "Excadrite (1000C)$"

Hub_Event_Script_Diancie_Text_53:
# 2356 "data/maps/Hub1/scripts.pory"
	.string "Scolipite (1000C)$"

Hub_Event_Script_Diancie_Text_54:
# 2360 "data/maps/Hub1/scripts.pory"
	.string "Scraftinite (1000C)$"

Hub_Event_Script_Diancie_Text_55:
# 2364 "data/maps/Hub1/scripts.pory"
	.string "Eelektrossite (1000C)$"

Hub_Event_Script_Diancie_Text_56:
# 2368 "data/maps/Hub1/scripts.pory"
	.string "Chandelurite (1000C)$"

Hub_Event_Script_Diancie_Text_57:
# 2372 "data/maps/Hub1/scripts.pory"
	.string "Chesnaughtite (1000C)$"

Hub_Event_Script_Diancie_Text_58:
# 2376 "data/maps/Hub1/scripts.pory"
	.string "Delphoxite (1000C)$"

Hub_Event_Script_Diancie_Text_59:
# 2380 "data/maps/Hub1/scripts.pory"
	.string "Greninjite (1000C)$"

Hub_Event_Script_Diancie_Text_60:
# 2384 "data/maps/Hub1/scripts.pory"
	.string "Pyroarite (1000C)$"

Hub_Event_Script_Diancie_Text_61:
# 2388 "data/maps/Hub1/scripts.pory"
	.string "Malamarite (1000C)$"

Hub_Event_Script_Diancie_Text_62:
# 2392 "data/maps/Hub1/scripts.pory"
	.string "Barbaracite (1000C)$"

Hub_Event_Script_Diancie_Text_63:
# 2396 "data/maps/Hub1/scripts.pory"
	.string "Dragalgite (1000C)$"

Hub_Event_Script_Diancie_Text_64:
# 2400 "data/maps/Hub1/scripts.pory"
	.string "Hawluchanite (1000C)$"

Hub_Event_Script_Diancie_Text_65:
# 2404 "data/maps/Hub1/scripts.pory"
	.string "Drampanite (1000C)$"

Hub_Event_Script_Diancie_Text_66:
# 2408 "data/maps/Hub1/scripts.pory"
	.string "Falinksite (1000C)$"

Hub_Event_Script_Diancie_Text_67:
# 2412 "data/maps/Hub1/scripts.pory"
	.string "Raichunite X (1000C)$"

Hub_Event_Script_Diancie_Text_68:
# 2416 "data/maps/Hub1/scripts.pory"
	.string "Raichunite Y (1000C)$"

Hub_Event_Script_Diancie_Text_69:
# 2420 "data/maps/Hub1/scripts.pory"
	.string "Chimechite (1000C)$"

Hub_Event_Script_Diancie_Text_70:
# 2424 "data/maps/Hub1/scripts.pory"
	.string "Staraptite (1000C)$"

Hub_Event_Script_Diancie_Text_71:
# 2428 "data/maps/Hub1/scripts.pory"
	.string "Golurkite (1000C)$"

Hub_Event_Script_Diancie_Text_72:
# 2432 "data/maps/Hub1/scripts.pory"
	.string "Meowsticite (1000C)$"

Hub_Event_Script_Diancie_Text_73:
# 2436 "data/maps/Hub1/scripts.pory"
	.string "Crabominite (1000C)$"

Hub_Event_Script_Diancie_Text_74:
# 2440 "data/maps/Hub1/scripts.pory"
	.string "Golisopite (1000C)$"

Hub_Event_Script_Diancie_Text_75:
# 2444 "data/maps/Hub1/scripts.pory"
	.string "Scovillainite (1000C)$"

Hub_Event_Script_Diancie_Text_76:
# 2448 "data/maps/Hub1/scripts.pory"
	.string "Glimmoranite (1000C)$"

Hub_Event_Script_Diancie_Text_77:
# 2452 "data/maps/Hub1/scripts.pory"
	.string "Baxcalibrite (1000C)$"

Hub_Event_Script_Diancie_Text_78:
# 2459 "data/maps/Hub1/scripts.pory"
	.string "Hello! Good news!\n"
	.string "I have new stock!\l"
	.string "Please take a look!$"

Hub_Event_Script_Diancie_Text_79:
# 2465 "data/maps/Hub1/scripts.pory"
	.string "Would you like to\nbuy a Mega Stone?$"

Hub_Event_Script_Diancie_Text_80:
# 2479 "data/maps/Hub1/scripts.pory"
	.string "You got a Venusaurite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_81:
# 2482 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry, but you don't have the\n coins for that right now.$"

Hub_Event_Script_Diancie_Text_82:
# 2494 "data/maps/Hub1/scripts.pory"
	.string "You got a Charizardite Y as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_83:
# 2509 "data/maps/Hub1/scripts.pory"
	.string "You got a Blastoisinite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_84:
# 2524 "data/maps/Hub1/scripts.pory"
	.string "You got a Beedrillite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_85:
# 2539 "data/maps/Hub1/scripts.pory"
	.string "You got a Pidgeotite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_86:
# 2554 "data/maps/Hub1/scripts.pory"
	.string "You got an Alakazite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_87:
# 2569 "data/maps/Hub1/scripts.pory"
	.string "You got a Slowbronite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_88:
# 2584 "data/maps/Hub1/scripts.pory"
	.string "You got a Gengarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_89:
# 2599 "data/maps/Hub1/scripts.pory"
	.string "You got a Kangaskhanite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_90:
# 2614 "data/maps/Hub1/scripts.pory"
	.string "You got a Pinsirite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_91:
# 2629 "data/maps/Hub1/scripts.pory"
	.string "You got a Gyaradosite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_92:
# 2644 "data/maps/Hub1/scripts.pory"
	.string "You got an Aerodactylite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_93:
# 2659 "data/maps/Hub1/scripts.pory"
	.string "You got an Ampharosite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_94:
# 2674 "data/maps/Hub1/scripts.pory"
	.string "You got a Steelixite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_95:
# 2689 "data/maps/Hub1/scripts.pory"
	.string "You got a Scizorite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_96:
# 2704 "data/maps/Hub1/scripts.pory"
	.string "You got a Heracronite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_97:
# 2719 "data/maps/Hub1/scripts.pory"
	.string "You got a Houndoominite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_98:
# 2734 "data/maps/Hub1/scripts.pory"
	.string "You got a Tyranitarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_99:
# 2749 "data/maps/Hub1/scripts.pory"
	.string "You got a Sceptilite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_100:
# 2764 "data/maps/Hub1/scripts.pory"
	.string "You got a Blazikenite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_101:
# 2779 "data/maps/Hub1/scripts.pory"
	.string "You got a Swampertite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_102:
# 2794 "data/maps/Hub1/scripts.pory"
	.string "You got a Gardevoirite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_103:
# 2809 "data/maps/Hub1/scripts.pory"
	.string "You got a Sablenite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_104:
# 2824 "data/maps/Hub1/scripts.pory"
	.string "You got a Mawilite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_105:
# 2839 "data/maps/Hub1/scripts.pory"
	.string "You got an Aggronite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_106:
# 2854 "data/maps/Hub1/scripts.pory"
	.string "You got a Medichamite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_107:
# 2869 "data/maps/Hub1/scripts.pory"
	.string "You got a Manectite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_108:
# 2884 "data/maps/Hub1/scripts.pory"
	.string "You got a Sharpedonite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_109:
# 2899 "data/maps/Hub1/scripts.pory"
	.string "You got a Cameruptite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_110:
# 2914 "data/maps/Hub1/scripts.pory"
	.string "You got an Altarianite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_111:
# 2929 "data/maps/Hub1/scripts.pory"
	.string "You got a Banettite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_112:
# 2944 "data/maps/Hub1/scripts.pory"
	.string "You got an Absolite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_113:
# 2959 "data/maps/Hub1/scripts.pory"
	.string "You got a Glalitite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_114:
# 2974 "data/maps/Hub1/scripts.pory"
	.string "You got a Salamencite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_115:
# 2989 "data/maps/Hub1/scripts.pory"
	.string "You got a Lopunnite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_116:
# 3004 "data/maps/Hub1/scripts.pory"
	.string "You got a Garchompite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_117:
# 3019 "data/maps/Hub1/scripts.pory"
	.string "You got a Lucarionite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_118:
# 3034 "data/maps/Hub1/scripts.pory"
	.string "You got an Abomasite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_119:
# 3049 "data/maps/Hub1/scripts.pory"
	.string "You got a Galladite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_120:
# 3064 "data/maps/Hub1/scripts.pory"
	.string "You got a Clefablite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_121:
# 3079 "data/maps/Hub1/scripts.pory"
	.string "You got a Victreebelite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_122:
# 3094 "data/maps/Hub1/scripts.pory"
	.string "You got a Starminite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_123:
# 3109 "data/maps/Hub1/scripts.pory"
	.string "You got a Dragoninite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_124:
# 3124 "data/maps/Hub1/scripts.pory"
	.string "You got a Meganiumite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_125:
# 3139 "data/maps/Hub1/scripts.pory"
	.string "You got a Feraligite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_126:
# 3154 "data/maps/Hub1/scripts.pory"
	.string "You got a Skarmorite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_127:
# 3169 "data/maps/Hub1/scripts.pory"
	.string "You got a Froslassite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_128:
# 3184 "data/maps/Hub1/scripts.pory"
	.string "You got an Emboarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_129:
# 3199 "data/maps/Hub1/scripts.pory"
	.string "You got an Excadrite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_130:
# 3214 "data/maps/Hub1/scripts.pory"
	.string "You got a Scolipite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_131:
# 3229 "data/maps/Hub1/scripts.pory"
	.string "You got a Scraftinite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_132:
# 3244 "data/maps/Hub1/scripts.pory"
	.string "You got an Eelektrossite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_133:
# 3259 "data/maps/Hub1/scripts.pory"
	.string "You got a Chandelurite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_134:
# 3274 "data/maps/Hub1/scripts.pory"
	.string "You got a Chesnaughtite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_135:
# 3289 "data/maps/Hub1/scripts.pory"
	.string "You got a Delphoxite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_136:
# 3304 "data/maps/Hub1/scripts.pory"
	.string "You got a Greninjite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_137:
# 3319 "data/maps/Hub1/scripts.pory"
	.string "You got a Pyroarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_138:
# 3334 "data/maps/Hub1/scripts.pory"
	.string "You got a Malamarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_139:
# 3349 "data/maps/Hub1/scripts.pory"
	.string "You got a Barbaracite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_140:
# 3364 "data/maps/Hub1/scripts.pory"
	.string "You got a Dragalgite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_141:
# 3379 "data/maps/Hub1/scripts.pory"
	.string "You got a Hawluchanite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_142:
# 3394 "data/maps/Hub1/scripts.pory"
	.string "You got a Drampanite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_143:
# 3409 "data/maps/Hub1/scripts.pory"
	.string "You got a Falinksite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_144:
# 3424 "data/maps/Hub1/scripts.pory"
	.string "You got a Raichunite X as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_145:
# 3439 "data/maps/Hub1/scripts.pory"
	.string "You got a Raichunite Y as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_146:
# 3454 "data/maps/Hub1/scripts.pory"
	.string "You got a Chimechite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_147:
# 3469 "data/maps/Hub1/scripts.pory"
	.string "You got a Staraptite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_148:
# 3484 "data/maps/Hub1/scripts.pory"
	.string "You got a Golurkite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_149:
# 3499 "data/maps/Hub1/scripts.pory"
	.string "You got a Meowsticite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_150:
# 3514 "data/maps/Hub1/scripts.pory"
	.string "You got a Crabominite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_151:
# 3529 "data/maps/Hub1/scripts.pory"
	.string "You got a Golisopite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_152:
# 3544 "data/maps/Hub1/scripts.pory"
	.string "You got a Scovillainite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_153:
# 3559 "data/maps/Hub1/scripts.pory"
	.string "You got a Glimmoranite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_154:
# 3574 "data/maps/Hub1/scripts.pory"
	.string "You got a Baxcalibrite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_155:
# 3581 "data/maps/Hub1/scripts.pory"
	.string "I don't have anything on sale right now,\n"
	.string "sorry.\p"
	.string "Try doing more runs and getting far\n"
	.string "with new pokemon!$"

Hub_Event_Script_Marowak_Text_0:
# 3596 "data/maps/Hub1/scripts.pory"
	.string "Hi. My dojo is closed right now. Maybe it\n"
	.string "will open in a future update.$"

Hub_Event_Script_Chimecho_Text_0:
# 3608 "data/maps/Hub1/scripts.pory"
	.string "Heya. Would you like to\nsee your unlocked starter charms?$"

Hub_Event_Script_Chimecho_Text_1:
# 3612 "data/maps/Hub1/scripts.pory"
	.string "Shiny Starter Charm$"

Hub_Event_Script_Chimecho_Text_2:
# 3613 "data/maps/Hub1/scripts.pory"
	.string "Lump Sum$"

Hub_Event_Script_Chimecho_Text_3:
# 3614 "data/maps/Hub1/scripts.pory"
	.string "Berry Pack$"

Hub_Event_Script_Chimecho_Text_4:
# 3615 "data/maps/Hub1/scripts.pory"
	.string "Tinted Scope$"

Hub_Event_Script_Chimecho_Text_5:
# 3616 "data/maps/Hub1/scripts.pory"
	.string "Normal Charm$"

Hub_Event_Script_Chimecho_Text_6:
# 3617 "data/maps/Hub1/scripts.pory"
	.string "Mint Pot$"

Hub_Event_Script_Chimecho_Text_7:
# 3618 "data/maps/Hub1/scripts.pory"
	.string "Bruxish Floss$"

Hub_Event_Script_Chimecho_Text_8:
# 3619 "data/maps/Hub1/scripts.pory"
	.string "Unown Buddy$"

Hub_Event_Script_Chimecho_Text_9:
# 3624 "data/maps/Hub1/scripts.pory"
	.string "Keep playing more to unlock more\n"
	.string "starter charms!$"

Hub_Event_Script_Chimecho_Text_10:
# 3628 "data/maps/Hub1/scripts.pory"
	.string "Your starter pokemon becomes shiny.$"

Hub_Event_Script_Chimecho_Text_11:
# 3630 "data/maps/Hub1/scripts.pory"
	.string "Gain ¥1500.$"

Hub_Event_Script_Chimecho_Text_12:
# 3632 "data/maps/Hub1/scripts.pory"
	.string "Gain an oran berry, a sitrus berry, and a\n"
	.string "lum berry.$"

Hub_Event_Script_Chimecho_Text_13:
# 3634 "data/maps/Hub1/scripts.pory"
	.string "Your not very effective moves do 1.5\n"
	.string "times more damage.$"

Hub_Event_Script_Chimecho_Text_14:
# 3636 "data/maps/Hub1/scripts.pory"
	.string "Your normal moves do 1.1 times more\n"
	.string "damage.$"

Hub_Event_Script_Chimecho_Text_15:
# 3638 "data/maps/Hub1/scripts.pory"
	.string "Gain a random mint at the start of each\n"
	.string "path.$"

Hub_Event_Script_Chimecho_Text_16:
# 3640 "data/maps/Hub1/scripts.pory"
	.string "Your biting moves do 1.2 dmg.$"

Hub_Event_Script_Chimecho_Text_17:
# 3642 "data/maps/Hub1/scripts.pory"
	.string "Get an extra unown at the start of the\n"
	.string "run.$"

Hub_Event_Script_Chimecho_Text_18:
# 3648 "data/maps/Hub1/scripts.pory"
	.string "Ok then! Keep playing more to unlock\n"
	.string "more starter charms!$"

GiveStarterCharm_Text_0:
# 3712 "data/maps/Hub1/scripts.pory"
	.string "Good luck on your run!$"

Hub_Event_Script_Golem_Text_0:
# 3722 "data/maps/Hub1/scripts.pory"
	.string "Diancie over there has a large mega\n"
	.string "stone collection.\p"
	.string "I wonder if she'll start selling them one\n"
	.string "day... I've heard that getting to the\l"
	.string "4th path might do it...\p"
	.string "Not that I would be able to make use of\n"
	.string "one anyway... I wish I had a mega\l"
	.string "evolution...$"

Hub_Event_Script_Golem_Text_1:
# 3724 "data/maps/Hub1/scripts.pory"
	.string "So Diancie's finally started to sell\n"
	.string "mega stones! Apparently if you get to\l"
	.string "the 4th path with a pokemon that can\l"
	.string "mega evolve, she'll start selling that\l"
	.string "pokemon's mega stone.$"

Hub_Event_Script_Togedemaru_Text_0:
# 3736 "data/maps/Hub1/scripts.pory"
	.string "Hey. I'm Togedemaru. I'm spiky and\n"
	.string "round!$"

Hub_Event_Script_Togedemaru_Text_1:
# 3738 "data/maps/Hub1/scripts.pory"
	.string "Hey. In this game, pokemon can have up\n"
	.string "to 4 abilities! Like me! I have Iron\l"
	.string "Barbs, Static, Sturdy and Cute Charm!\l"
	.string "But not all pokemon have as many\l"
	.string "abilites as me hehe.$"

Hub_Event_Script_Klang_Text_0:
# 3748 "data/maps/Hub1/scripts.pory"
	.string "Hello. You should know that the items\n"
	.string "your pokemon are holding before a\l"
	.string "battle are restored at the end of a\l"
	.string "battle.\p"
	.string "This means that the berries your\n"
	.string "pokemon consume will be returned.\p"
	.string "It also means any item you might steal\n"
	.string "during a battle are not kept.$"

Hub_Event_Script_Bruxish_Text_0:
# 3757 "data/maps/Hub1/scripts.pory"
	.string "You want to know how I have such\n"
	.string "beatiful teeth? Well you've got to take\l"
	.string "good care of them of course! Make sure\l"
	.string "to brush twice a day, and floss every\l"
	.string "night!$"

Hub_Event_Script_Bruxish_Text_1:
# 3760 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Bruxish Floss as\na starter charm!$"

Hub_Event_Script_Bruxish_Text_2:
# 3764 "data/maps/Hub1/scripts.pory"
	.string "Don't forget to floss everyday!$"

Hub_Event_Script_Simisage_Text_0:
# 3773 "data/maps/Hub1/scripts.pory"
	.string "Hi. Did you know that in this game, a\n"
	.string "pokemon can learn any TM. That means\l"
	.string "even a grass-type like me can learn a\l"
	.string "fire-type move by TM!\p"
	.string "But of course I won't get a same type\n"
	.string "attack bonus from it.$"

Hub_Event_Script_Woobat_Text_0:
# 3781 "data/maps/Hub1/scripts.pory"
	.string "Did you know that some abilities got\n"
	.string "changed in this game? Like my ability\l"
	.string "Klutz. It still doesn't let me use items,\l"
	.string "but it also gives me a 10% chance to\l"
	.string "dodge moves!$"

Hub_Event_Script_Unown_Text_0:
# 3791 "data/maps/Hub1/scripts.pory"
	.string "Hi. I know I'm a pretty weak pokemon,\n"
	.string "but If you choose me, you'll get an\l"
	.string "extra unown for free, thanks to my Herd\l"
	.string "ability!$"

Hub_Event_Script_Unown_Text_1:
# 3794 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Unown Buddy as\na starter charm!$"

Hub_Event_Script_Unown_Text_2:
# 3798 "data/maps/Hub1/scripts.pory"
	.string "If you choose me, you'll get an\nextra unown as well!$"

Hub_Event_Script_Smoliv_Text_0:
# 3807 "data/maps/Hub1/scripts.pory"
	.string "Hey.\p"
	.string "You should know that the money you get\n"
	.string "during a run (¥) is different to the\l"
	.string "money you spend when you're here at the\l"
	.string "hub (Coins).$"
