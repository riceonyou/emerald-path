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
# 40 "data/maps/Hub1/scripts.pory"
	compare VAR_CURRENT_ACT, 1
	goto_if_gt AfterWarpIntoNewAct_13
AfterWarpIntoNewAct_12:
# 49 "data/maps/Hub1/scripts.pory"
	compare VAR_CURRENT_ACT, 0
	goto_if_eq AfterWarpIntoNewAct_16
AfterWarpIntoNewAct_15:
# 93 "data/maps/Hub1/scripts.pory"
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
	randomelement ITEM_LONELY_MINT, ITEM_ADAMANT_MINT, ITEM_NAUGHTY_MINT, ITEM_BRAVE_MINT, ITEM_BOLD_MINT, ITEM_IMPISH_MINT, ITEM_LAX_MINT, ITEM_RELAXED_MINT, ITEM_MODEST_MINT, ITEM_MILD_MINT, ITEM_RASH_MINT, ITEM_QUIET_MINT, ITEM_CALM_MINT, ITEM_GENTLE_MINT, ITEM_CAREFUL_MINT, ITEM_SASSY_MINT, ITEM_SERIOUS_MINT
# 35 "data/maps/Hub1/scripts.pory"
	giveitem VAR_RESULT
# 36 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_GIVE_MINTY_CHARM_MINT
	goto AfterWarpIntoNewAct_9

AfterWarpIntoNewAct_13:
# 41 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 42 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_LEVEL_CAP
# 43 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_3
# 44 "data/maps/Hub1/scripts.pory"
	waitfanfare
	goto AfterWarpIntoNewAct_12

AfterWarpIntoNewAct_16:
# 51 "data/maps/Hub1/scripts.pory"
	compare VAR_COINS_COLLECTED_IN_A_RUN, 0
	goto_if_gt AfterWarpIntoNewAct_19
AfterWarpIntoNewAct_18:
# 60 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MINTY_CHARM_STARTER_UNLOCKED, AfterWarpIntoNewAct_23
AfterWarpIntoNewAct_21:
# 66 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TINTED_CHARM_STARTER_UNLOCKED, AfterWarpIntoNewAct_28
AfterWarpIntoNewAct_26:
# 72 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_NORMAL_CHARM_STARTER_UNLOCKED, AfterWarpIntoNewAct_33
AfterWarpIntoNewAct_31:
# 79 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_NEW_DIFFICULTY_UNLOCKED, AfterWarpIntoNewAct_37
AfterWarpIntoNewAct_36:
# 86 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_HOENN1_ALT_UNLOCKED, AfterWarpIntoNewAct_40
	goto AfterWarpIntoNewAct_15

AfterWarpIntoNewAct_19:
# 52 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_COINS_COLLECTED_IN_A_RUN
# 53 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 54 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_4
# 55 "data/maps/Hub1/scripts.pory"
	setvar VAR_COINS_COLLECTED_IN_A_RUN, 0
	goto AfterWarpIntoNewAct_18

AfterWarpIntoNewAct_22:
# 61 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MINTY_CHARM_STARTER_UNLOCKED
# 62 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 63 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_5
# 64 "data/maps/Hub1/scripts.pory"
	waitfanfare
	goto AfterWarpIntoNewAct_21

AfterWarpIntoNewAct_23:
# 60 "data/maps/Hub1/scripts.pory"
	compare VAR_TOTAL_RUNS, 0
	goto_if_gt AfterWarpIntoNewAct_22
	goto AfterWarpIntoNewAct_21

AfterWarpIntoNewAct_27:
# 67 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TINTED_CHARM_STARTER_UNLOCKED
# 68 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 69 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_6
# 70 "data/maps/Hub1/scripts.pory"
	waitfanfare
	goto AfterWarpIntoNewAct_26

AfterWarpIntoNewAct_28:
# 66 "data/maps/Hub1/scripts.pory"
	compare VAR_TOTAL_RUNS, 3
	goto_if_gt AfterWarpIntoNewAct_27
	goto AfterWarpIntoNewAct_26

AfterWarpIntoNewAct_32:
# 73 "data/maps/Hub1/scripts.pory"
	setflag FLAG_NORMAL_CHARM_STARTER_UNLOCKED
# 74 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 75 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_7
# 76 "data/maps/Hub1/scripts.pory"
	waitfanfare
	goto AfterWarpIntoNewAct_31

AfterWarpIntoNewAct_33:
# 72 "data/maps/Hub1/scripts.pory"
	compare VAR_TOTAL_RUNS, 6
	goto_if_gt AfterWarpIntoNewAct_32
	goto AfterWarpIntoNewAct_31

AfterWarpIntoNewAct_37:
# 80 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 81 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_8
# 82 "data/maps/Hub1/scripts.pory"
	waitfanfare
# 83 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_NEW_DIFFICULTY_UNLOCKED
	goto AfterWarpIntoNewAct_36

AfterWarpIntoNewAct_39:
# 87 "data/maps/Hub1/scripts.pory"
	setflag FLAG_HOENN1_ALT_UNLOCKED
# 88 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 89 "data/maps/Hub1/scripts.pory"
	msgbox AfterWarpIntoNewAct_Text_9
# 90 "data/maps/Hub1/scripts.pory"
	waitfanfare
	goto AfterWarpIntoNewAct_15

AfterWarpIntoNewAct_40:
# 86 "data/maps/Hub1/scripts.pory"
	compare VAR_ACT1_WINS, 1
	goto_if_gt AfterWarpIntoNewAct_39
	goto AfterWarpIntoNewAct_15


GiveCommonItem::
# 99 "data/maps/Hub1/scripts.pory"
	special BufferCommonItem
# 100 "data/maps/Hub1/scripts.pory"
	giveitem VAR_RESULT
	return


GiveUncommonItem::
# 104 "data/maps/Hub1/scripts.pory"
	special BufferUncommonItem
# 105 "data/maps/Hub1/scripts.pory"
	giveitem VAR_RESULT
	return


GiveRareItem::
# 109 "data/maps/Hub1/scripts.pory"
	special BufferRareItem
# 110 "data/maps/Hub1/scripts.pory"
	giveitem VAR_RESULT
	return


Act1BirchBag::
# 114 "data/maps/Hub1/scripts.pory"
	playse SE_CLICK
# 115 "data/maps/Hub1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 116 "data/maps/Hub1/scripts.pory"
	setvar VAR_0x8000, 33
# 117 "data/maps/Hub1/scripts.pory"
	special LoadBirchBagPoolById
# 118 "data/maps/Hub1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 119 "data/maps/Hub1/scripts.pory"
	waitstate
# 120 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_EVOLVED
# 122 "data/maps/Hub1/scripts.pory"
	msgbox Act1BirchBag_Text_0
# 123 "data/maps/Hub1/scripts.pory"
	waitfanfare
	return


Act2BirchBag::
# 126 "data/maps/Hub1/scripts.pory"
	playse SE_CLICK
# 127 "data/maps/Hub1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 128 "data/maps/Hub1/scripts.pory"
	setvar VAR_0x8000, 34
# 129 "data/maps/Hub1/scripts.pory"
	special LoadBirchBagPoolById
# 130 "data/maps/Hub1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 131 "data/maps/Hub1/scripts.pory"
	waitstate
# 132 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_EVOLVED
# 134 "data/maps/Hub1/scripts.pory"
	msgbox Act1BirchBag_Text_0
# 135 "data/maps/Hub1/scripts.pory"
	waitfanfare
	return


Act3BirchBag::
# 138 "data/maps/Hub1/scripts.pory"
	playse SE_CLICK
# 139 "data/maps/Hub1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 140 "data/maps/Hub1/scripts.pory"
	setvar VAR_0x8000, 35
# 141 "data/maps/Hub1/scripts.pory"
	special LoadBirchBagPoolById
# 142 "data/maps/Hub1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 143 "data/maps/Hub1/scripts.pory"
	waitstate
# 144 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_EVOLVED
# 146 "data/maps/Hub1/scripts.pory"
	msgbox Act1BirchBag_Text_0
# 147 "data/maps/Hub1/scripts.pory"
	waitfanfare
	return


AbraTeleport::
# 151 "data/maps/Hub1/scripts.pory"
	lockall
# 152 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_DEFEATED_PATH_LEADER, AbraTeleport_1
# 157 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_1, MSGBOX_YESNO
# 158 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 159 "data/maps/Hub1/scripts.pory"
	case YES, AbraTeleport_5
# 163 "data/maps/Hub1/scripts.pory"
	case NO, AbraTeleport_6
	return

AbraTeleport_1:
# 153 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_0
# 154 "data/maps/Hub1/scripts.pory"
	releaseall
	return

AbraTeleport_5:
# 160 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_2
# 161 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_DEFEATED_PATH_LEADER
# 162 "data/maps/Hub1/scripts.pory"
	special WarpToNextAncient
	return

AbraTeleport_6:
# 164 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_3
# 165 "data/maps/Hub1/scripts.pory"
	releaseall
	return


RivalFight1::
# 171 "data/maps/Hub1/scripts.pory"
	switch VAR_CURRENT_RIVAL
# 172 "data/maps/Hub1/scripts.pory"
	case 0, RivalFight1_2
# 177 "data/maps/Hub1/scripts.pory"
	case 1, RivalFight1_3
	return

RivalFight1_2:
# 173 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_TREECKO, RivalFight1_Text_0, RivalFight1_Text_1
# 174 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight1_Text_2, MSGBOX_AUTOCLOSE
# 175 "data/maps/Hub1/scripts.pory"
	waitmessage
	end

RivalFight1_3:
# 178 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_TORCHIC, RivalFight1_Text_3, RivalFight1_Text_1
# 179 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight1_Text_2, MSGBOX_AUTOCLOSE
# 180 "data/maps/Hub1/scripts.pory"
	waitmessage
	end


RivalFight2::
# 186 "data/maps/Hub1/scripts.pory"
	switch VAR_CURRENT_RIVAL
# 187 "data/maps/Hub1/scripts.pory"
	case 0, RivalFight2_2
# 192 "data/maps/Hub1/scripts.pory"
	case 1, RivalFight2_3
	return

RivalFight2_2:
# 188 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_GROVYLE, RivalFight2_Text_0, RivalFight2_Text_1
# 189 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight2_Text_2, MSGBOX_AUTOCLOSE
# 190 "data/maps/Hub1/scripts.pory"
	waitmessage
	end

RivalFight2_3:
# 193 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_COMBUSKEN, RivalFight2_Text_3, RivalFight2_Text_4
# 194 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight2_Text_5, MSGBOX_AUTOCLOSE
# 195 "data/maps/Hub1/scripts.pory"
	waitmessage
	end


RivalFight3::
# 201 "data/maps/Hub1/scripts.pory"
	switch VAR_CURRENT_RIVAL
# 202 "data/maps/Hub1/scripts.pory"
	case 0, RivalFight3_2
# 207 "data/maps/Hub1/scripts.pory"
	case 1, RivalFight3_3
	return

RivalFight3_2:
# 203 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_SCEPTILE, RivalFight3_Text_0, RivalFight3_Text_1
# 204 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight3_Text_2, MSGBOX_AUTOCLOSE
# 205 "data/maps/Hub1/scripts.pory"
	waitmessage
	end

RivalFight3_3:
# 208 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_BLAZIKEN, RivalFight3_Text_3, RivalFight3_Text_4
# 209 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight3_Text_4, MSGBOX_AUTOCLOSE
# 210 "data/maps/Hub1/scripts.pory"
	waitmessage
	end


RivalFight4::
# 216 "data/maps/Hub1/scripts.pory"
	switch VAR_CURRENT_RIVAL
# 217 "data/maps/Hub1/scripts.pory"
	case 0, RivalFight4_2
# 222 "data/maps/Hub1/scripts.pory"
	case 1, RivalFight4_3
	return

RivalFight4_2:
# 218 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_MEGASCEPTILE, RivalFight4_Text_0, RivalFight4_Text_1
# 219 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight4_Text_2, MSGBOX_AUTOCLOSE
# 220 "data/maps/Hub1/scripts.pory"
	waitmessage
	end

RivalFight4_3:
# 223 "data/maps/Hub1/scripts.pory"
	trainerbattle_single TRAINER_MBLAZIKEN, RivalFight4_Text_3, RivalFight4_Text_4
# 224 "data/maps/Hub1/scripts.pory"
	msgbox RivalFight4_Text_5, MSGBOX_AUTOCLOSE
# 225 "data/maps/Hub1/scripts.pory"
	waitmessage
	end


HUB1_Run_Stats_Sign::
# 237 "data/maps/Hub1/scripts.pory"
	lockall
# 239 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TOTAL_RUNS
# 240 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_ACT1_WINS
# 241 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_Run_Stats_Sign_Text_0
# 242 "data/maps/Hub1/scripts.pory"
	waitmessage
# 244 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_ACT3_WINS
# 245 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_ACT4_WINS
# 246 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_ACT2_WINS
# 247 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_Run_Stats_Sign_Text_1
# 248 "data/maps/Hub1/scripts.pory"
	waitmessage
# 250 "data/maps/Hub1/scripts.pory"
	releaseall
	return


HUB1_ONWARP::
# 254 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


HUB1_ONFRAME::
# 258 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_2, 1
# 259 "data/maps/Hub1/scripts.pory"
	call AfterWarpIntoNewAct
# 262 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SYS_NEW_GAME, HUB1_ONFRAME_1
	return

HUB1_ONFRAME_1:
# 263 "data/maps/Hub1/scripts.pory"
	lockall
# 266 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SYS_NEW_GAME
# 267 "data/maps/Hub1/scripts.pory"
	setvar VAR_SHINY_RATE, 4096
# 268 "data/maps/Hub1/scripts.pory"
	setvar VAR_LEVEL_CAP, 14
# 269 "data/maps/Hub1/scripts.pory"
	setvar VAR_CURRENT_DIFFICULTY, 0
# 270 "data/maps/Hub1/scripts.pory"
	setvar VAR_CURRENT_ACT, 0
# 271 "data/maps/Hub1/scripts.pory"
	setvar VAR_TOTAL_RUNS, 0
# 272 "data/maps/Hub1/scripts.pory"
	setvar VAR_ACT1_WINS, 0
# 273 "data/maps/Hub1/scripts.pory"
	setvar VAR_ACT2_WINS, 0
# 274 "data/maps/Hub1/scripts.pory"
	setvar VAR_ACT3_WINS, 0
# 275 "data/maps/Hub1/scripts.pory"
	setvar VAR_ACT4_WINS, 0
# 278 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_ONFRAME_Text_0
# 281 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_1, SPECIES_BULBASAUR
# 282 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_2, SPECIES_CHARMANDER
# 283 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_3, SPECIES_SQUIRTLE
# 284 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_4, SPECIES_CHIKORITA
# 285 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_5, SPECIES_CYNDAQUIL
# 286 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_6, SPECIES_TOTODILE
# 287 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_7, SPECIES_TREECKO
# 288 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_8, SPECIES_TORCHIC
# 289 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_9, SPECIES_MUDKIP
# 290 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_10, SPECIES_TURTWIG
# 291 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_11, SPECIES_CHIMCHAR
# 292 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_12, SPECIES_PIPLUP
# 293 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_13, SPECIES_SNIVY
# 294 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_14, SPECIES_TEPIG
# 295 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_15, SPECIES_OSHAWOTT
# 296 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_16, SPECIES_CHESPIN
# 297 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_17, SPECIES_FENNEKIN
# 298 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_18, SPECIES_FROAKIE
# 299 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_19, SPECIES_ROWLET
# 300 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_20, SPECIES_LITTEN
# 301 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_21, SPECIES_POPPLIO
# 302 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_22, SPECIES_GROOKEY
# 303 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_23, SPECIES_SCORBUNNY
# 304 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_24, SPECIES_SOBBLE
# 305 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_25, SPECIES_SPRIGATITO
# 306 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_26, SPECIES_FUECOCO
# 307 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_27, SPECIES_QUAXLY
# 308 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 310 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 311 "data/maps/Hub1/scripts.pory"
	case SPECIES_BULBASAUR, HUB1_ONFRAME_5
# 315 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHARMANDER, HUB1_ONFRAME_6
# 319 "data/maps/Hub1/scripts.pory"
	case SPECIES_SQUIRTLE, HUB1_ONFRAME_7
# 323 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIKORITA, HUB1_ONFRAME_8
# 327 "data/maps/Hub1/scripts.pory"
	case SPECIES_CYNDAQUIL, HUB1_ONFRAME_9
# 331 "data/maps/Hub1/scripts.pory"
	case SPECIES_TOTODILE, HUB1_ONFRAME_10
# 335 "data/maps/Hub1/scripts.pory"
	case SPECIES_TREECKO, HUB1_ONFRAME_11
# 339 "data/maps/Hub1/scripts.pory"
	case SPECIES_TORCHIC, HUB1_ONFRAME_12
# 343 "data/maps/Hub1/scripts.pory"
	case SPECIES_MUDKIP, HUB1_ONFRAME_13
# 347 "data/maps/Hub1/scripts.pory"
	case SPECIES_TURTWIG, HUB1_ONFRAME_14
# 351 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIMCHAR, HUB1_ONFRAME_15
# 355 "data/maps/Hub1/scripts.pory"
	case SPECIES_PIPLUP, HUB1_ONFRAME_16
# 359 "data/maps/Hub1/scripts.pory"
	case SPECIES_SNIVY, HUB1_ONFRAME_17
# 363 "data/maps/Hub1/scripts.pory"
	case SPECIES_TEPIG, HUB1_ONFRAME_18
# 367 "data/maps/Hub1/scripts.pory"
	case SPECIES_OSHAWOTT, HUB1_ONFRAME_19
# 371 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHESPIN, HUB1_ONFRAME_20
# 375 "data/maps/Hub1/scripts.pory"
	case SPECIES_FENNEKIN, HUB1_ONFRAME_21
# 379 "data/maps/Hub1/scripts.pory"
	case SPECIES_FROAKIE, HUB1_ONFRAME_22
# 383 "data/maps/Hub1/scripts.pory"
	case SPECIES_ROWLET, HUB1_ONFRAME_23
# 387 "data/maps/Hub1/scripts.pory"
	case SPECIES_LITTEN, HUB1_ONFRAME_24
# 391 "data/maps/Hub1/scripts.pory"
	case SPECIES_POPPLIO, HUB1_ONFRAME_25
# 395 "data/maps/Hub1/scripts.pory"
	case SPECIES_GROOKEY, HUB1_ONFRAME_26
# 399 "data/maps/Hub1/scripts.pory"
	case SPECIES_SCORBUNNY, HUB1_ONFRAME_27
# 403 "data/maps/Hub1/scripts.pory"
	case SPECIES_SOBBLE, HUB1_ONFRAME_28
# 407 "data/maps/Hub1/scripts.pory"
	case SPECIES_SPRIGATITO, HUB1_ONFRAME_29
# 411 "data/maps/Hub1/scripts.pory"
	case SPECIES_FUECOCO, HUB1_ONFRAME_30
# 415 "data/maps/Hub1/scripts.pory"
	case SPECIES_QUAXLY, HUB1_ONFRAME_31
HUB1_ONFRAME_3:
# 421 "data/maps/Hub1/scripts.pory"
	special UpdateTransformedPlayerPalette
# 422 "data/maps/Hub1/scripts.pory"
	special UpdatePlayerSprite
# 423 "data/maps/Hub1/scripts.pory"
	releaseall
# 425 "data/maps/Hub1/scripts.pory"
	lockall
# 428 "data/maps/Hub1/scripts.pory"
	msgbox HUB1_ONFRAME_Text_28
# 430 "data/maps/Hub1/scripts.pory"
	releaseall
	return

HUB1_ONFRAME_5:
# 312 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_BULBASAUR, 14
# 313 "data/maps/Hub1/scripts.pory"
	setflag FLAG_BULBASAUR_UNLOCKED
# 314 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_BULBASAUR
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_6:
# 316 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHARMANDER, 14
# 317 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHARMANDER_UNLOCKED
# 318 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHARMANDER
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_7:
# 320 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SQUIRTLE, 14
# 321 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SQUIRTLE_UNLOCKED
# 322 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SQUIRTLE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_8:
# 324 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHIKORITA, 14
# 325 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIKORITA_UNLOCKED
# 326 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHIKORITA
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_9:
# 328 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 14
# 329 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CYNDAQUIL_UNLOCKED
# 330 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CYNDAQUIL
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_10:
# 332 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TOTODILE, 14
# 333 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TOTODILE_UNLOCKED
# 334 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TOTODILE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_11:
# 336 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TREECKO, 14
# 337 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TREECKO_UNLOCKED
# 338 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TREECKO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_12:
# 340 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TORCHIC, 14
# 341 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TORCHIC_UNLOCKED
# 342 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TORCHIC
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_13:
# 344 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_MUDKIP, 14
# 345 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MUDKIP_UNLOCKED
# 346 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_MUDKIP
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_14:
# 348 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TURTWIG, 14
# 349 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TURTWIG_UNLOCKED
# 350 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TURTWIG
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_15:
# 352 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHIMCHAR, 14
# 353 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIMCHAR_UNLOCKED
# 354 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHIMCHAR
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_16:
# 356 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_PIPLUP, 14
# 357 "data/maps/Hub1/scripts.pory"
	setflag FLAG_PIPLUP_UNLOCKED
# 358 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_PIPLUP
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_17:
# 360 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SNIVY, 14
# 361 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SNIVY_UNLOCKED
# 362 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SNIVY
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_18:
# 364 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_TEPIG, 14
# 365 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TEPIG_UNLOCKED
# 366 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TEPIG
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_19:
# 368 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_OSHAWOTT, 14
# 369 "data/maps/Hub1/scripts.pory"
	setflag FLAG_OSHAWOTT_UNLOCKED
# 370 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_OSHAWOTT
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_20:
# 372 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_CHESPIN, 14
# 373 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHESPIN_UNLOCKED
# 374 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHESPIN
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_21:
# 376 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FENNEKIN, 14
# 377 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FENNEKIN_UNLOCKED
# 378 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_FENNEKIN
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_22:
# 380 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FROAKIE, 14
# 381 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FROAKIE_UNLOCKED
# 382 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_FROAKIE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_23:
# 384 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_ROWLET, 14
# 385 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ROWLET_UNLOCKED
# 386 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_ROWLET
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_24:
# 388 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_LITTEN, 14
# 389 "data/maps/Hub1/scripts.pory"
	setflag FLAG_LITTEN_UNLOCKED
# 390 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_LITTEN
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_25:
# 392 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_POPPLIO, 14
# 393 "data/maps/Hub1/scripts.pory"
	setflag FLAG_POPPLIO_UNLOCKED
# 394 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_POPPLIO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_26:
# 396 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_GROOKEY, 14
# 397 "data/maps/Hub1/scripts.pory"
	setflag FLAG_GROOKEY_UNLOCKED
# 398 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_GROOKEY
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_27:
# 400 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SCORBUNNY, 14
# 401 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SCORBUNNY_UNLOCKED
# 402 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SCORBUNNY
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_28:
# 404 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SOBBLE, 14
# 405 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SOBBLE_UNLOCKED
# 406 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SOBBLE
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_29:
# 408 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_SPRIGATITO, 14
# 409 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SPRIGATITO_UNLOCKED
# 410 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SPRIGATITO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_30:
# 412 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_FUECOCO, 14
# 413 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FUECOCO_UNLOCKED
# 414 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_FUECOCO
	goto HUB1_ONFRAME_3

HUB1_ONFRAME_31:
# 416 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_QUAXLY, 14
# 417 "data/maps/Hub1/scripts.pory"
	setflag FLAG_QUAXLY_UNLOCKED
# 418 "data/maps/Hub1/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_QUAXLY
	goto HUB1_ONFRAME_3


Hub_Event_Script_Birch::
# 435 "data/maps/Hub1/scripts.pory"
	lockall
# 436 "data/maps/Hub1/scripts.pory"
	faceplayer
# 437 "data/maps/Hub1/scripts.pory"
backtomain:
# 438 "data/maps/Hub1/scripts.pory"
	messageinstant Hub_Event_Script_Birch_Text_0
# 439 "data/maps/Hub1/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Hub_Event_Script_Birch_Text_1, Hub_Event_Script_Birch_Text_2
# 440 "data/maps/Hub1/scripts.pory"
	closemessage
# 441 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 442 "data/maps/Hub1/scripts.pory"
	case MULTI_B_PRESSED, Hub_Event_Script_Birch_2
# 446 "data/maps/Hub1/scripts.pory"
	case 0, Hub_Event_Script_Birch_3
# 477 "data/maps/Hub1/scripts.pory"
	case 1, Hub_Event_Script_Birch_4
	return

Hub_Event_Script_Birch_2:
# 443 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_3
# 444 "data/maps/Hub1/scripts.pory"
	releaseall
	end

Hub_Event_Script_Birch_3:
# 447 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_4, MSGBOX_YESNO
# 448 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 449 "data/maps/Hub1/scripts.pory"
	case YES, Hub_Event_Script_Birch_6
# 472 "data/maps/Hub1/scripts.pory"
	case NO, Hub_Event_Script_Birch_7
	return

Hub_Event_Script_Birch_4:
# 478 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CURRENT_DIFFICULTY
# 479 "data/maps/Hub1/scripts.pory"
	messageinstant Hub_Event_Script_Birch_Text_8
# 480 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_9, 0
# 481 "data/maps/Hub1/scripts.pory"
	compare VAR_UNLOCKED_DIFFICULTY, 0
	goto_if_gt Hub_Event_Script_Birch_9
Hub_Event_Script_Birch_8:
# 482 "data/maps/Hub1/scripts.pory"
	compare VAR_UNLOCKED_DIFFICULTY, 1
	goto_if_gt Hub_Event_Script_Birch_12
Hub_Event_Script_Birch_11:
# 483 "data/maps/Hub1/scripts.pory"
	compare VAR_UNLOCKED_DIFFICULTY, 2
	goto_if_gt Hub_Event_Script_Birch_15
Hub_Event_Script_Birch_14:
# 484 "data/maps/Hub1/scripts.pory"
	compare VAR_UNLOCKED_DIFFICULTY, 3
	goto_if_gt Hub_Event_Script_Birch_18
Hub_Event_Script_Birch_17:
# 485 "data/maps/Hub1/scripts.pory"
	compare VAR_UNLOCKED_DIFFICULTY, 4
	goto_if_gt Hub_Event_Script_Birch_21
Hub_Event_Script_Birch_20:
# 486 "data/maps/Hub1/scripts.pory"
	compare VAR_UNLOCKED_DIFFICULTY, 5
	goto_if_gt Hub_Event_Script_Birch_24
Hub_Event_Script_Birch_23:
# 487 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 488 "data/maps/Hub1/scripts.pory"
	closemessage
# 489 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 490 "data/maps/Hub1/scripts.pory"
	case MULTI_B_PRESSED, Hub_Event_Script_Birch_27
# 493 "data/maps/Hub1/scripts.pory"
	case 0, Hub_Event_Script_Birch_28
# 494 "data/maps/Hub1/scripts.pory"
	case 1, Hub_Event_Script_Birch_28
# 495 "data/maps/Hub1/scripts.pory"
	case 2, Hub_Event_Script_Birch_28
# 496 "data/maps/Hub1/scripts.pory"
	case 3, Hub_Event_Script_Birch_28
# 497 "data/maps/Hub1/scripts.pory"
	case 4, Hub_Event_Script_Birch_28
# 498 "data/maps/Hub1/scripts.pory"
	case 5, Hub_Event_Script_Birch_28
# 499 "data/maps/Hub1/scripts.pory"
	case 6, Hub_Event_Script_Birch_28
	return

Hub_Event_Script_Birch_6:
# 450 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_5
# 451 "data/maps/Hub1/scripts.pory"
	closemessage
# 452 "data/maps/Hub1/scripts.pory"
	applymovement Chimecho, Hub_Event_Script_Birch_Movement_0
# 456 "data/maps/Hub1/scripts.pory"
	waitmovement
# 457 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_6
# 458 "data/maps/Hub1/scripts.pory"
	call GiveStarterCharm
# 459 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_7
# 460 "data/maps/Hub1/scripts.pory"
	closemessage
# 461 "data/maps/Hub1/scripts.pory"
	applymovement Birch, Hub_Event_Script_Birch_Movement_1
# 466 "data/maps/Hub1/scripts.pory"
	waitmovement
# 467 "data/maps/Hub1/scripts.pory"
	applymovement LOCALID_PLAYER, Hub_Event_Script_Birch_Movement_2
# 470 "data/maps/Hub1/scripts.pory"
	waitmovement
# 471 "data/maps/Hub1/scripts.pory"
	special WarpToNextAct
	return

Hub_Event_Script_Birch_7:
# 473 "data/maps/Hub1/scripts.pory"
	msgbox AbraTeleport_Text_3
# 474 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Birch_9:
# 481 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_10, 1
	goto Hub_Event_Script_Birch_8

Hub_Event_Script_Birch_12:
# 482 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_11, 2
	goto Hub_Event_Script_Birch_11

Hub_Event_Script_Birch_15:
# 483 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_12, 3
	goto Hub_Event_Script_Birch_14

Hub_Event_Script_Birch_18:
# 484 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_13, 4
	goto Hub_Event_Script_Birch_17

Hub_Event_Script_Birch_21:
# 485 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_14, 5
	goto Hub_Event_Script_Birch_20

Hub_Event_Script_Birch_24:
# 486 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Birch_Text_15, 6
	goto Hub_Event_Script_Birch_23

Hub_Event_Script_Birch_27:
# 491 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_16
# 492 "data/maps/Hub1/scripts.pory"
	goto backtomain
	return

Hub_Event_Script_Birch_28:
# 500 "data/maps/Hub1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 501 "data/maps/Hub1/scripts.pory"
	copyvar VAR_CURRENT_DIFFICULTY, VAR_RESULT
# 502 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Birch_Text_17
# 503 "data/maps/Hub1/scripts.pory"
	goto backtomain
	return


Hub_Event_Script_Miltank::
# 510 "data/maps/Hub1/scripts.pory"
	lockall
# 511 "data/maps/Hub1/scripts.pory"
	faceplayer
# 512 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 514 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_BULBASAUR_UNLOCKED, Hub_Event_Script_Miltank_2
Hub_Event_Script_Miltank_1:
# 515 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHARMANDER_UNLOCKED, Hub_Event_Script_Miltank_5
Hub_Event_Script_Miltank_4:
# 516 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SQUIRTLE_UNLOCKED, Hub_Event_Script_Miltank_8
Hub_Event_Script_Miltank_7:
# 517 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHIKORITA_UNLOCKED, Hub_Event_Script_Miltank_11
Hub_Event_Script_Miltank_10:
# 518 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CYNDAQUIL_UNLOCKED, Hub_Event_Script_Miltank_14
Hub_Event_Script_Miltank_13:
# 519 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TOTODILE_UNLOCKED, Hub_Event_Script_Miltank_17
Hub_Event_Script_Miltank_16:
# 520 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TREECKO_UNLOCKED, Hub_Event_Script_Miltank_20
Hub_Event_Script_Miltank_19:
# 521 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TORCHIC_UNLOCKED, Hub_Event_Script_Miltank_23
Hub_Event_Script_Miltank_22:
# 522 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MUDKIP_UNLOCKED, Hub_Event_Script_Miltank_26
Hub_Event_Script_Miltank_25:
# 523 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TURTWIG_UNLOCKED, Hub_Event_Script_Miltank_29
Hub_Event_Script_Miltank_28:
# 524 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHIMCHAR_UNLOCKED, Hub_Event_Script_Miltank_32
Hub_Event_Script_Miltank_31:
# 525 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_PIPLUP_UNLOCKED, Hub_Event_Script_Miltank_35
Hub_Event_Script_Miltank_34:
# 526 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SNIVY_UNLOCKED, Hub_Event_Script_Miltank_38
Hub_Event_Script_Miltank_37:
# 527 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TEPIG_UNLOCKED, Hub_Event_Script_Miltank_41
Hub_Event_Script_Miltank_40:
# 528 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_OSHAWOTT_UNLOCKED, Hub_Event_Script_Miltank_44
Hub_Event_Script_Miltank_43:
# 529 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_CHESPIN_UNLOCKED, Hub_Event_Script_Miltank_47
Hub_Event_Script_Miltank_46:
# 530 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FENNEKIN_UNLOCKED, Hub_Event_Script_Miltank_50
Hub_Event_Script_Miltank_49:
# 531 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FROAKIE_UNLOCKED, Hub_Event_Script_Miltank_53
Hub_Event_Script_Miltank_52:
# 532 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ROWLET_UNLOCKED, Hub_Event_Script_Miltank_56
Hub_Event_Script_Miltank_55:
# 533 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_LITTEN_UNLOCKED, Hub_Event_Script_Miltank_59
Hub_Event_Script_Miltank_58:
# 534 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_POPPLIO_UNLOCKED, Hub_Event_Script_Miltank_62
Hub_Event_Script_Miltank_61:
# 535 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_GROOKEY_UNLOCKED, Hub_Event_Script_Miltank_65
Hub_Event_Script_Miltank_64:
# 536 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SCORBUNNY_UNLOCKED, Hub_Event_Script_Miltank_68
Hub_Event_Script_Miltank_67:
# 537 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SOBBLE_UNLOCKED, Hub_Event_Script_Miltank_71
Hub_Event_Script_Miltank_70:
# 538 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SPRIGATITO_UNLOCKED, Hub_Event_Script_Miltank_74
Hub_Event_Script_Miltank_73:
# 539 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_FUECOCO_UNLOCKED, Hub_Event_Script_Miltank_77
Hub_Event_Script_Miltank_76:
# 540 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_QUAXLY_UNLOCKED, Hub_Event_Script_Miltank_80
Hub_Event_Script_Miltank_79:
# 542 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Miltank_82
# 880 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_57
# 881 "data/maps/Hub1/scripts.pory"
	waitmessage
# 882 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Miltank_2:
# 514 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_0, SPECIES_BULBASAUR
# 514 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_1

Hub_Event_Script_Miltank_5:
# 515 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_1, SPECIES_CHARMANDER
# 515 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_4

Hub_Event_Script_Miltank_8:
# 516 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_2, SPECIES_SQUIRTLE
# 516 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_7

Hub_Event_Script_Miltank_11:
# 517 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_3, SPECIES_CHIKORITA
# 517 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_10

Hub_Event_Script_Miltank_14:
# 518 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_4, SPECIES_CYNDAQUIL
# 518 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_13

Hub_Event_Script_Miltank_17:
# 519 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_5, SPECIES_TOTODILE
# 519 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_16

Hub_Event_Script_Miltank_20:
# 520 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_6, SPECIES_TREECKO
# 520 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_19

Hub_Event_Script_Miltank_23:
# 521 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_7, SPECIES_TORCHIC
# 521 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_22

Hub_Event_Script_Miltank_26:
# 522 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_8, SPECIES_MUDKIP
# 522 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_25

Hub_Event_Script_Miltank_29:
# 523 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_9, SPECIES_TURTWIG
# 523 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_28

Hub_Event_Script_Miltank_32:
# 524 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_10, SPECIES_CHIMCHAR
# 524 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_31

Hub_Event_Script_Miltank_35:
# 525 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_11, SPECIES_PIPLUP
# 525 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_34

Hub_Event_Script_Miltank_38:
# 526 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_12, SPECIES_SNIVY
# 526 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_37

Hub_Event_Script_Miltank_41:
# 527 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_13, SPECIES_TEPIG
# 527 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_40

Hub_Event_Script_Miltank_44:
# 528 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_14, SPECIES_OSHAWOTT
# 528 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_43

Hub_Event_Script_Miltank_47:
# 529 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_15, SPECIES_CHESPIN
# 529 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_46

Hub_Event_Script_Miltank_50:
# 530 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_16, SPECIES_FENNEKIN
# 530 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_49

Hub_Event_Script_Miltank_53:
# 531 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_17, SPECIES_FROAKIE
# 531 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_52

Hub_Event_Script_Miltank_56:
# 532 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_18, SPECIES_ROWLET
# 532 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_55

Hub_Event_Script_Miltank_59:
# 533 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_19, SPECIES_LITTEN
# 533 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_58

Hub_Event_Script_Miltank_62:
# 534 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_20, SPECIES_POPPLIO
# 534 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_61

Hub_Event_Script_Miltank_65:
# 535 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_21, SPECIES_GROOKEY
# 535 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_64

Hub_Event_Script_Miltank_68:
# 536 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_22, SPECIES_SCORBUNNY
# 536 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_67

Hub_Event_Script_Miltank_71:
# 537 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_23, SPECIES_SOBBLE
# 537 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_70

Hub_Event_Script_Miltank_74:
# 538 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_24, SPECIES_SPRIGATITO
# 538 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_73

Hub_Event_Script_Miltank_77:
# 539 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_25, SPECIES_FUECOCO
# 539 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_76

Hub_Event_Script_Miltank_80:
# 540 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Miltank_Text_26, SPECIES_QUAXLY
# 540 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Miltank_79

Hub_Event_Script_Miltank_82:
# 543 "data/maps/Hub1/scripts.pory"
	showcoinsbox 21, 11
# 544 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_27
# 545 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 546 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 547 "data/maps/Hub1/scripts.pory"
	case MULTI_B_PRESSED, Hub_Event_Script_Miltank_87
# 552 "data/maps/Hub1/scripts.pory"
	case SPECIES_BULBASAUR, Hub_Event_Script_Miltank_88
# 564 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHARMANDER, Hub_Event_Script_Miltank_89
# 576 "data/maps/Hub1/scripts.pory"
	case SPECIES_SQUIRTLE, Hub_Event_Script_Miltank_90
# 588 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIKORITA, Hub_Event_Script_Miltank_91
# 600 "data/maps/Hub1/scripts.pory"
	case SPECIES_CYNDAQUIL, Hub_Event_Script_Miltank_92
# 612 "data/maps/Hub1/scripts.pory"
	case SPECIES_TOTODILE, Hub_Event_Script_Miltank_93
# 624 "data/maps/Hub1/scripts.pory"
	case SPECIES_TREECKO, Hub_Event_Script_Miltank_94
# 636 "data/maps/Hub1/scripts.pory"
	case SPECIES_TORCHIC, Hub_Event_Script_Miltank_95
# 648 "data/maps/Hub1/scripts.pory"
	case SPECIES_MUDKIP, Hub_Event_Script_Miltank_96
# 660 "data/maps/Hub1/scripts.pory"
	case SPECIES_TURTWIG, Hub_Event_Script_Miltank_97
# 672 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHIMCHAR, Hub_Event_Script_Miltank_98
# 684 "data/maps/Hub1/scripts.pory"
	case SPECIES_PIPLUP, Hub_Event_Script_Miltank_99
# 696 "data/maps/Hub1/scripts.pory"
	case SPECIES_SNIVY, Hub_Event_Script_Miltank_100
# 708 "data/maps/Hub1/scripts.pory"
	case SPECIES_TEPIG, Hub_Event_Script_Miltank_101
# 720 "data/maps/Hub1/scripts.pory"
	case SPECIES_OSHAWOTT, Hub_Event_Script_Miltank_102
# 732 "data/maps/Hub1/scripts.pory"
	case SPECIES_CHESPIN, Hub_Event_Script_Miltank_103
# 744 "data/maps/Hub1/scripts.pory"
	case SPECIES_FENNEKIN, Hub_Event_Script_Miltank_104
# 756 "data/maps/Hub1/scripts.pory"
	case SPECIES_FROAKIE, Hub_Event_Script_Miltank_105
# 768 "data/maps/Hub1/scripts.pory"
	case SPECIES_ROWLET, Hub_Event_Script_Miltank_106
# 780 "data/maps/Hub1/scripts.pory"
	case SPECIES_LITTEN, Hub_Event_Script_Miltank_107
# 792 "data/maps/Hub1/scripts.pory"
	case SPECIES_POPPLIO, Hub_Event_Script_Miltank_108
# 804 "data/maps/Hub1/scripts.pory"
	case SPECIES_GROOKEY, Hub_Event_Script_Miltank_109
# 816 "data/maps/Hub1/scripts.pory"
	case SPECIES_SCORBUNNY, Hub_Event_Script_Miltank_110
# 828 "data/maps/Hub1/scripts.pory"
	case SPECIES_SOBBLE, Hub_Event_Script_Miltank_111
# 840 "data/maps/Hub1/scripts.pory"
	case SPECIES_SPRIGATITO, Hub_Event_Script_Miltank_112
# 852 "data/maps/Hub1/scripts.pory"
	case SPECIES_FUECOCO, Hub_Event_Script_Miltank_113
# 864 "data/maps/Hub1/scripts.pory"
	case SPECIES_QUAXLY, Hub_Event_Script_Miltank_114
Hub_Event_Script_Miltank_85:
# 877 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
# 878 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Miltank_87:
# 548 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
# 549 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_28
# 550 "data/maps/Hub1/scripts.pory"
	releaseall
	end

Hub_Event_Script_Miltank_88:
# 553 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 554 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_115
# 562 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_89:
# 565 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 566 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_118
# 574 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_90:
# 577 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 578 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_121
# 586 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_91:
# 589 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 590 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_124
# 598 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_92:
# 601 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 602 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_127
# 610 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_93:
# 613 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 614 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_130
# 622 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_94:
# 625 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 626 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_133
# 634 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_95:
# 637 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 638 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_136
# 646 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_96:
# 649 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 650 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_139
# 658 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_97:
# 661 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 662 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_142
# 670 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_98:
# 673 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 674 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_145
# 682 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_99:
# 685 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 686 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_148
# 694 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_100:
# 697 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 698 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_151
# 706 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_101:
# 709 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 710 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_154
# 718 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_102:
# 721 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 722 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_157
# 730 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_103:
# 733 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 734 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_160
# 742 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_104:
# 745 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 746 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_163
# 754 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_105:
# 757 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 758 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_166
# 766 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_106:
# 769 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 770 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_169
# 778 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_107:
# 781 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 782 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_172
# 790 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_108:
# 793 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 794 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_175
# 802 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_109:
# 805 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 806 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_178
# 814 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_110:
# 817 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 818 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_181
# 826 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_111:
# 829 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 830 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_184
# 838 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_112:
# 841 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 842 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_187
# 850 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_113:
# 853 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 854 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_190
# 862 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_114:
# 865 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 866 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Miltank_193
# 874 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_30
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_115:
# 555 "data/maps/Hub1/scripts.pory"
	setflag FLAG_BULBASAUR_UNLOCKED
# 556 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 557 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 558 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 559 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_29
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_118:
# 567 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHARMANDER_UNLOCKED
# 568 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 569 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 570 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 571 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_31
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_121:
# 579 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SQUIRTLE_UNLOCKED
# 580 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 581 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 582 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 583 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_32
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_124:
# 591 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIKORITA_UNLOCKED
# 592 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 593 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 594 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 595 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_33
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_127:
# 603 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CYNDAQUIL_UNLOCKED
# 604 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 605 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 606 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 607 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_34
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_130:
# 615 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TOTODILE_UNLOCKED
# 616 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 617 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 618 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 619 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_35
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_133:
# 627 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TREECKO_UNLOCKED
# 628 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 629 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 630 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 631 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_36
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_136:
# 639 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TORCHIC_UNLOCKED
# 640 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 641 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 642 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 643 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_37
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_139:
# 651 "data/maps/Hub1/scripts.pory"
	setflag FLAG_MUDKIP_UNLOCKED
# 652 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 653 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 654 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 655 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_38
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_142:
# 663 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TURTWIG_UNLOCKED
# 664 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 665 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 666 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 667 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_39
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_145:
# 675 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHIMCHAR_UNLOCKED
# 676 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 677 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 678 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 679 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_40
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_148:
# 687 "data/maps/Hub1/scripts.pory"
	setflag FLAG_PIPLUP_UNLOCKED
# 688 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 689 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 690 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 691 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_41
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_151:
# 699 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SNIVY_UNLOCKED
# 700 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 701 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 702 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 703 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_42
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_154:
# 711 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TEPIG_UNLOCKED
# 712 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 713 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 714 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 715 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_43
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_157:
# 723 "data/maps/Hub1/scripts.pory"
	setflag FLAG_OSHAWOTT_UNLOCKED
# 724 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 725 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 726 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 727 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_44
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_160:
# 735 "data/maps/Hub1/scripts.pory"
	setflag FLAG_CHESPIN_UNLOCKED
# 736 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 737 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 738 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 739 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_45
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_163:
# 747 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FENNEKIN_UNLOCKED
# 748 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 749 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 750 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 751 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_46
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_166:
# 759 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FROAKIE_UNLOCKED
# 760 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 761 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 762 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 763 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_47
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_169:
# 771 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ROWLET_UNLOCKED
# 772 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 773 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 774 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 775 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_48
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_172:
# 783 "data/maps/Hub1/scripts.pory"
	setflag FLAG_LITTEN_UNLOCKED
# 784 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 785 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 786 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 787 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_49
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_175:
# 795 "data/maps/Hub1/scripts.pory"
	setflag FLAG_POPPLIO_UNLOCKED
# 796 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 797 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 798 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 799 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_50
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_178:
# 807 "data/maps/Hub1/scripts.pory"
	setflag FLAG_GROOKEY_UNLOCKED
# 808 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 809 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 810 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 811 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_51
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_181:
# 819 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SCORBUNNY_UNLOCKED
# 820 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 821 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 822 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 823 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_52
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_184:
# 831 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SOBBLE_UNLOCKED
# 832 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 833 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 834 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 835 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_53
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_187:
# 843 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SPRIGATITO_UNLOCKED
# 844 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 845 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 846 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 847 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_54
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_190:
# 855 "data/maps/Hub1/scripts.pory"
	setflag FLAG_FUECOCO_UNLOCKED
# 856 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 857 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 858 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 859 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_55
	goto Hub_Event_Script_Miltank_85

Hub_Event_Script_Miltank_193:
# 867 "data/maps/Hub1/scripts.pory"
	setflag FLAG_QUAXLY_UNLOCKED
# 868 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 869 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 870 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 871 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Miltank_Text_56
	goto Hub_Event_Script_Miltank_85


Hub_Event_Script_Chansey::
# 888 "data/maps/Hub1/scripts.pory"
	lockall
# 889 "data/maps/Hub1/scripts.pory"
	faceplayer
# 890 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 891 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_BULBASAUR_UNLOCKED, Hub_Event_Script_Chansey_3
Hub_Event_Script_Chansey_1:
# 892 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHARMANDER_UNLOCKED, Hub_Event_Script_Chansey_8
Hub_Event_Script_Chansey_6:
# 893 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SQUIRTLE_UNLOCKED, Hub_Event_Script_Chansey_13
Hub_Event_Script_Chansey_11:
# 894 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHIKORITA_UNLOCKED, Hub_Event_Script_Chansey_18
Hub_Event_Script_Chansey_16:
# 895 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CYNDAQUIL_UNLOCKED, Hub_Event_Script_Chansey_23
Hub_Event_Script_Chansey_21:
# 896 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TOTODILE_UNLOCKED, Hub_Event_Script_Chansey_28
Hub_Event_Script_Chansey_26:
# 897 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TREECKO_UNLOCKED, Hub_Event_Script_Chansey_33
Hub_Event_Script_Chansey_31:
# 898 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TORCHIC_UNLOCKED, Hub_Event_Script_Chansey_38
Hub_Event_Script_Chansey_36:
# 899 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_MUDKIP_UNLOCKED, Hub_Event_Script_Chansey_43
Hub_Event_Script_Chansey_41:
# 900 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TURTWIG_UNLOCKED, Hub_Event_Script_Chansey_48
Hub_Event_Script_Chansey_46:
# 901 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHIMCHAR_UNLOCKED, Hub_Event_Script_Chansey_53
Hub_Event_Script_Chansey_51:
# 902 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_PIPLUP_UNLOCKED, Hub_Event_Script_Chansey_58
Hub_Event_Script_Chansey_56:
# 903 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SNIVY_UNLOCKED, Hub_Event_Script_Chansey_63
Hub_Event_Script_Chansey_61:
# 904 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TEPIG_UNLOCKED, Hub_Event_Script_Chansey_68
Hub_Event_Script_Chansey_66:
# 905 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_OSHAWOTT_UNLOCKED, Hub_Event_Script_Chansey_73
Hub_Event_Script_Chansey_71:
# 906 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_CHESPIN_UNLOCKED, Hub_Event_Script_Chansey_78
Hub_Event_Script_Chansey_76:
# 907 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FENNEKIN_UNLOCKED, Hub_Event_Script_Chansey_83
Hub_Event_Script_Chansey_81:
# 908 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FROAKIE_UNLOCKED, Hub_Event_Script_Chansey_88
Hub_Event_Script_Chansey_86:
# 909 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ROWLET_UNLOCKED, Hub_Event_Script_Chansey_93
Hub_Event_Script_Chansey_91:
# 910 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_LITTEN_UNLOCKED, Hub_Event_Script_Chansey_98
Hub_Event_Script_Chansey_96:
# 911 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_POPPLIO_UNLOCKED, Hub_Event_Script_Chansey_103
Hub_Event_Script_Chansey_101:
# 912 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_GROOKEY_UNLOCKED, Hub_Event_Script_Chansey_108
Hub_Event_Script_Chansey_106:
# 913 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SCORBUNNY_UNLOCKED, Hub_Event_Script_Chansey_113
Hub_Event_Script_Chansey_111:
# 914 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SOBBLE_UNLOCKED, Hub_Event_Script_Chansey_118
Hub_Event_Script_Chansey_116:
# 915 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPRIGATITO_UNLOCKED, Hub_Event_Script_Chansey_123
Hub_Event_Script_Chansey_121:
# 916 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_FUECOCO_UNLOCKED, Hub_Event_Script_Chansey_128
Hub_Event_Script_Chansey_126:
# 917 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_QUAXLY_UNLOCKED, Hub_Event_Script_Chansey_133
Hub_Event_Script_Chansey_131:
# 919 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Chansey_136
# 942 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_2
# 943 "data/maps/Hub1/scripts.pory"
	waitmessage
# 944 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Chansey_2:
# 891 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_1, SPECIES_BULBASAUR
# 891 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_1

Hub_Event_Script_Chansey_3:
# 891 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_BULBASAUR
	goto_if_ne Hub_Event_Script_Chansey_2
	goto Hub_Event_Script_Chansey_1

Hub_Event_Script_Chansey_7:
# 892 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_2, SPECIES_CHARMANDER
# 892 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_6

Hub_Event_Script_Chansey_8:
# 892 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHARMANDER
	goto_if_ne Hub_Event_Script_Chansey_7
	goto Hub_Event_Script_Chansey_6

Hub_Event_Script_Chansey_12:
# 893 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_3, SPECIES_SQUIRTLE
# 893 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_11

Hub_Event_Script_Chansey_13:
# 893 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SQUIRTLE
	goto_if_ne Hub_Event_Script_Chansey_12
	goto Hub_Event_Script_Chansey_11

Hub_Event_Script_Chansey_17:
# 894 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_4, SPECIES_CHIKORITA
# 894 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_16

Hub_Event_Script_Chansey_18:
# 894 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHIKORITA
	goto_if_ne Hub_Event_Script_Chansey_17
	goto Hub_Event_Script_Chansey_16

Hub_Event_Script_Chansey_22:
# 895 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_5, SPECIES_CYNDAQUIL
# 895 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_21

Hub_Event_Script_Chansey_23:
# 895 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CYNDAQUIL
	goto_if_ne Hub_Event_Script_Chansey_22
	goto Hub_Event_Script_Chansey_21

Hub_Event_Script_Chansey_27:
# 896 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_6, SPECIES_TOTODILE
# 896 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_26

Hub_Event_Script_Chansey_28:
# 896 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TOTODILE
	goto_if_ne Hub_Event_Script_Chansey_27
	goto Hub_Event_Script_Chansey_26

Hub_Event_Script_Chansey_32:
# 897 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_7, SPECIES_TREECKO
# 897 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_31

Hub_Event_Script_Chansey_33:
# 897 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TREECKO
	goto_if_ne Hub_Event_Script_Chansey_32
	goto Hub_Event_Script_Chansey_31

Hub_Event_Script_Chansey_37:
# 898 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_8, SPECIES_TORCHIC
# 898 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_36

Hub_Event_Script_Chansey_38:
# 898 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TORCHIC
	goto_if_ne Hub_Event_Script_Chansey_37
	goto Hub_Event_Script_Chansey_36

Hub_Event_Script_Chansey_42:
# 899 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_9, SPECIES_MUDKIP
# 899 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_41

Hub_Event_Script_Chansey_43:
# 899 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_MUDKIP
	goto_if_ne Hub_Event_Script_Chansey_42
	goto Hub_Event_Script_Chansey_41

Hub_Event_Script_Chansey_47:
# 900 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_10, SPECIES_TURTWIG
# 900 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_46

Hub_Event_Script_Chansey_48:
# 900 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TURTWIG
	goto_if_ne Hub_Event_Script_Chansey_47
	goto Hub_Event_Script_Chansey_46

Hub_Event_Script_Chansey_52:
# 901 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_11, SPECIES_CHIMCHAR
# 901 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_51

Hub_Event_Script_Chansey_53:
# 901 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHIMCHAR
	goto_if_ne Hub_Event_Script_Chansey_52
	goto Hub_Event_Script_Chansey_51

Hub_Event_Script_Chansey_57:
# 902 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_12, SPECIES_PIPLUP
# 902 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_56

Hub_Event_Script_Chansey_58:
# 902 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_PIPLUP
	goto_if_ne Hub_Event_Script_Chansey_57
	goto Hub_Event_Script_Chansey_56

Hub_Event_Script_Chansey_62:
# 903 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_13, SPECIES_SNIVY
# 903 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_61

Hub_Event_Script_Chansey_63:
# 903 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SNIVY
	goto_if_ne Hub_Event_Script_Chansey_62
	goto Hub_Event_Script_Chansey_61

Hub_Event_Script_Chansey_67:
# 904 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_14, SPECIES_TEPIG
# 904 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_66

Hub_Event_Script_Chansey_68:
# 904 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_TEPIG
	goto_if_ne Hub_Event_Script_Chansey_67
	goto Hub_Event_Script_Chansey_66

Hub_Event_Script_Chansey_72:
# 905 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_15, SPECIES_OSHAWOTT
# 905 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_71

Hub_Event_Script_Chansey_73:
# 905 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_OSHAWOTT
	goto_if_ne Hub_Event_Script_Chansey_72
	goto Hub_Event_Script_Chansey_71

Hub_Event_Script_Chansey_77:
# 906 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_16, SPECIES_CHESPIN
# 906 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_76

Hub_Event_Script_Chansey_78:
# 906 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHESPIN
	goto_if_ne Hub_Event_Script_Chansey_77
	goto Hub_Event_Script_Chansey_76

Hub_Event_Script_Chansey_82:
# 907 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_17, SPECIES_FENNEKIN
# 907 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_81

Hub_Event_Script_Chansey_83:
# 907 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FENNEKIN
	goto_if_ne Hub_Event_Script_Chansey_82
	goto Hub_Event_Script_Chansey_81

Hub_Event_Script_Chansey_87:
# 908 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_18, SPECIES_FROAKIE
# 908 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_86

Hub_Event_Script_Chansey_88:
# 908 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FROAKIE
	goto_if_ne Hub_Event_Script_Chansey_87
	goto Hub_Event_Script_Chansey_86

Hub_Event_Script_Chansey_92:
# 909 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_19, SPECIES_ROWLET
# 909 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_91

Hub_Event_Script_Chansey_93:
# 909 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_ROWLET
	goto_if_ne Hub_Event_Script_Chansey_92
	goto Hub_Event_Script_Chansey_91

Hub_Event_Script_Chansey_97:
# 910 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_20, SPECIES_LITTEN
# 910 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_96

Hub_Event_Script_Chansey_98:
# 910 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_LITTEN
	goto_if_ne Hub_Event_Script_Chansey_97
	goto Hub_Event_Script_Chansey_96

Hub_Event_Script_Chansey_102:
# 911 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_21, SPECIES_POPPLIO
# 911 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_101

Hub_Event_Script_Chansey_103:
# 911 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_POPPLIO
	goto_if_ne Hub_Event_Script_Chansey_102
	goto Hub_Event_Script_Chansey_101

Hub_Event_Script_Chansey_107:
# 912 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_22, SPECIES_GROOKEY
# 912 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_106

Hub_Event_Script_Chansey_108:
# 912 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_GROOKEY
	goto_if_ne Hub_Event_Script_Chansey_107
	goto Hub_Event_Script_Chansey_106

Hub_Event_Script_Chansey_112:
# 913 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_23, SPECIES_SCORBUNNY
# 913 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_111

Hub_Event_Script_Chansey_113:
# 913 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SCORBUNNY
	goto_if_ne Hub_Event_Script_Chansey_112
	goto Hub_Event_Script_Chansey_111

Hub_Event_Script_Chansey_117:
# 914 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_24, SPECIES_SOBBLE
# 914 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_116

Hub_Event_Script_Chansey_118:
# 914 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SOBBLE
	goto_if_ne Hub_Event_Script_Chansey_117
	goto Hub_Event_Script_Chansey_116

Hub_Event_Script_Chansey_122:
# 915 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_25, SPECIES_SPRIGATITO
# 915 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_121

Hub_Event_Script_Chansey_123:
# 915 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SPRIGATITO
	goto_if_ne Hub_Event_Script_Chansey_122
	goto Hub_Event_Script_Chansey_121

Hub_Event_Script_Chansey_127:
# 916 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_26, SPECIES_FUECOCO
# 916 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_126

Hub_Event_Script_Chansey_128:
# 916 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_FUECOCO
	goto_if_ne Hub_Event_Script_Chansey_127
	goto Hub_Event_Script_Chansey_126

Hub_Event_Script_Chansey_132:
# 917 "data/maps/Hub1/scripts.pory"
	dynmultipush HUB1_ONFRAME_Text_27, SPECIES_QUAXLY
# 917 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Chansey_131

Hub_Event_Script_Chansey_133:
# 917 "data/maps/Hub1/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_QUAXLY
	goto_if_ne Hub_Event_Script_Chansey_132
	goto Hub_Event_Script_Chansey_131

Hub_Event_Script_Chansey_136:
# 920 "data/maps/Hub1/scripts.pory"
	setvar VAR_RESULT, 0
# 921 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_0
# 922 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_MON
# 924 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_ne Hub_Event_Script_Chansey_139
# 939 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Chansey_139:
# 925 "data/maps/Hub1/scripts.pory"
	copyvar VAR_STARTER_MON, VAR_RESULT
# 926 "data/maps/Hub1/scripts.pory"
	special ZeroPlayerPartyMons
# 927 "data/maps/Hub1/scripts.pory"
	special GiveSavedStarter
# 928 "data/maps/Hub1/scripts.pory"
	special UpdatePlayerSprite
# 929 "data/maps/Hub1/scripts.pory"
	special UpdateTransformedPlayerPalette
# 930 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 931 "data/maps/Hub1/scripts.pory"
	releaseall
# 932 "data/maps/Hub1/scripts.pory"
	lockall
# 933 "data/maps/Hub1/scripts.pory"
	playse SE_SUCCESS
# 934 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chansey_Text_1
# 935 "data/maps/Hub1/scripts.pory"
	waitmessage
# 936 "data/maps/Hub1/scripts.pory"
	releaseall
	return


KecShop_Sign::
# 948 "data/maps/Hub1/scripts.pory"
	lockall
# 949 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Sign_Text_0
# 950 "data/maps/Hub1/scripts.pory"
	waitmessage
# 951 "data/maps/Hub1/scripts.pory"
	releaseall
	return


KecShop::
# 955 "data/maps/Hub1/scripts.pory"
	lockall
# 956 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_0
# 957 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_1, ITEM_MEMORY_MUSHROOM
# 958 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_2, ITEM_ORAN_BERRY
# 959 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
# 960 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_LUM_BERRY_BUYABLE, KecShop_2
KecShop_1:
# 964 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SERIOUS_MINT_BUYABLE, KecShop_5
KecShop_4:
# 968 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_RARE_CANDY_BUYABLE, KecShop_8
KecShop_7:
# 972 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_POCKET_BIRCH_BAG_BUYABLE, KecShop_11
KecShop_10:
# 976 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_HP_BOTTLE_CAP_BUYABLE, KecShop_14
KecShop_13:
# 980 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ATK_BOTTLE_CAP_BUYABLE, KecShop_17
KecShop_16:
# 984 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_DEF_BOTTLE_CAP_BUYABLE, KecShop_20
KecShop_19:
# 988 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPEED_BOTTLE_CAP_BUYABLE, KecShop_23
KecShop_22:
# 992 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPATK_BOTTLE_CAP_BUYABLE, KecShop_26
KecShop_25:
# 996 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPDEF_BOTTLE_CAP_BUYABLE, KecShop_29
KecShop_28:
# 1000 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_HP_GOLD_BOTTLE_CAP_BUYABLE, KecShop_32
KecShop_31:
# 1004 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ATK_GOLD_BOTTLE_CAP_BUYABLE, KecShop_35
KecShop_34:
# 1008 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_DEF_GOLD_BOTTLE_CAP_BUYABLE, KecShop_38
KecShop_37:
# 1012 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPEED_GOLD_BOTTLE_CAP_BUYABLE, KecShop_41
KecShop_40:
# 1016 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPATK_GOLD_BOTTLE_CAP_BUYABLE, KecShop_44
KecShop_43:
# 1020 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_SPDEF_GOLD_BOTTLE_CAP_BUYABLE, KecShop_47
KecShop_46:
# 1026 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne KecShop_50
# 1126 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_21
# 1127 "data/maps/Hub1/scripts.pory"
	waitmessage
# 1128 "data/maps/Hub1/scripts.pory"
	releaseall
KecShop_49:
# 1130 "data/maps/Hub1/scripts.pory"
	releaseall
	return

KecShop_2:
# 961 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_3, ITEM_LUM_BERRY
# 962 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_1

KecShop_5:
# 965 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_4, ITEM_SERIOUS_MINT
# 966 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_4

KecShop_8:
# 969 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_5, ITEM_RARE_CANDY
# 970 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_7

KecShop_11:
# 973 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_6, ITEM_POCKET_BIRCH_BAG
# 974 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_10

KecShop_14:
# 977 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_7, ITEM_HP_BOTTLE_CAP
# 978 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_13

KecShop_17:
# 981 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_8, ITEM_ATK_BOTTLE_CAP
# 982 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_16

KecShop_20:
# 985 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_9, ITEM_DEF_BOTTLE_CAP
# 986 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_19

KecShop_23:
# 989 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_10, ITEM_SPEED_BOTTLE_CAP
# 990 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_22

KecShop_26:
# 993 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_11, ITEM_SPATK_BOTTLE_CAP
# 994 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_25

KecShop_29:
# 997 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_12, ITEM_SPDEF_BOTTLE_CAP
# 998 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_28

KecShop_32:
# 1001 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_13, ITEM_HP_GOLD_BOTTLE_CAP
# 1002 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_31

KecShop_35:
# 1005 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_14, ITEM_ATK_GOLD_BOTTLE_CAP
# 1006 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_34

KecShop_38:
# 1009 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_15, ITEM_DEF_GOLD_BOTTLE_CAP
# 1010 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_37

KecShop_41:
# 1013 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_16, ITEM_SPEED_GOLD_BOTTLE_CAP
# 1014 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_40

KecShop_44:
# 1017 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_17, ITEM_SPATK_GOLD_BOTTLE_CAP
# 1018 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_43

KecShop_47:
# 1021 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Text_18, ITEM_SPDEF_GOLD_BOTTLE_CAP
# 1022 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_46

KecShop_50:
# 1028 "data/maps/Hub1/scripts.pory"
	showmoneybox 18, 10
# 1029 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 1030 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 1031 "data/maps/Hub1/scripts.pory"
	case ITEM_ORAN_BERRY, KecShop_55
# 1042 "data/maps/Hub1/scripts.pory"
	case ITEM_LUM_BERRY, KecShop_56
# 1053 "data/maps/Hub1/scripts.pory"
	case ITEM_SERIOUS_MINT, KecShop_57
# 1064 "data/maps/Hub1/scripts.pory"
	case ITEM_MEMORY_MUSHROOM, KecShop_58
# 1075 "data/maps/Hub1/scripts.pory"
	case ITEM_RARE_CANDY, KecShop_59
# 1086 "data/maps/Hub1/scripts.pory"
	case ITEM_POCKET_BIRCH_BAG, KecShop_60
# 1095 "data/maps/Hub1/scripts.pory"
	case ITEM_HP_BOTTLE_CAP, KecShop_61
# 1096 "data/maps/Hub1/scripts.pory"
	case ITEM_ATK_BOTTLE_CAP, KecShop_61
# 1097 "data/maps/Hub1/scripts.pory"
	case ITEM_DEF_BOTTLE_CAP, KecShop_61
# 1098 "data/maps/Hub1/scripts.pory"
	case ITEM_SPEED_BOTTLE_CAP, KecShop_61
# 1099 "data/maps/Hub1/scripts.pory"
	case ITEM_SPATK_BOTTLE_CAP, KecShop_61
# 1100 "data/maps/Hub1/scripts.pory"
	case ITEM_SPDEF_BOTTLE_CAP, KecShop_61
# 1109 "data/maps/Hub1/scripts.pory"
	case ITEM_HP_GOLD_BOTTLE_CAP, KecShop_62
# 1110 "data/maps/Hub1/scripts.pory"
	case ITEM_ATK_GOLD_BOTTLE_CAP, KecShop_62
# 1111 "data/maps/Hub1/scripts.pory"
	case ITEM_DEF_GOLD_BOTTLE_CAP, KecShop_62
# 1112 "data/maps/Hub1/scripts.pory"
	case ITEM_SPEED_GOLD_BOTTLE_CAP, KecShop_62
# 1113 "data/maps/Hub1/scripts.pory"
	case ITEM_SPATK_GOLD_BOTTLE_CAP, KecShop_62
# 1114 "data/maps/Hub1/scripts.pory"
	case ITEM_SPDEF_GOLD_BOTTLE_CAP, KecShop_62
KecShop_53:
# 1124 "data/maps/Hub1/scripts.pory"
	hidemoneybox
	goto KecShop_49

KecShop_55:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_63
# 1040 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_53

KecShop_56:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_66
# 1051 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_53

KecShop_57:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_69
# 1062 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_53

KecShop_58:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_72
# 1073 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_53

KecShop_59:
	checkmoney 2000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_75
# 1084 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_53

KecShop_60:
	checkmoney 2000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_78
# 1094 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_53

KecShop_61:
	checkmoney 300
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_81
# 1108 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_53

KecShop_62:
	checkmoney 600
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_84
# 1122 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_53

KecShop_63:
# 1033 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 1034 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1035 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1036 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ORAN_BERRY
# 1037 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_66:
# 1044 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 1045 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1046 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1047 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUM_BERRY
# 1048 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_69:
# 1055 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1056 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1057 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1058 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SERIOUS_MINT
# 1059 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_72:
# 1066 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 1067 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1068 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1069 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM
# 1070 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_75:
# 1077 "data/maps/Hub1/scripts.pory"
	removemoney 2000
# 1078 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1079 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1080 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 1081 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_78:
# 1088 "data/maps/Hub1/scripts.pory"
	removemoney 2000
# 1089 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1090 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1091 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_POCKET_BIRCH_BAG
# 1092 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_81:
# 1102 "data/maps/Hub1/scripts.pory"
	removemoney 300
# 1103 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1104 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1105 "data/maps/Hub1/scripts.pory"
	giveitem VAR_RESULT
# 1106 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53

KecShop_84:
# 1116 "data/maps/Hub1/scripts.pory"
	removemoney 600
# 1117 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1118 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1119 "data/maps/Hub1/scripts.pory"
	giveitem VAR_RESULT
# 1120 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_53


KecShop_Shiny::
# 1134 "data/maps/Hub1/scripts.pory"
	lockall
# 1135 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_0
# 1136 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_NOBLE_ROAR_BUYABLE, KecShop_Shiny_2
KecShop_Shiny_1:
# 1140 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_CHARM_BUYABLE, KecShop_Shiny_5
KecShop_Shiny_4:
# 1144 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_FAKE_TEARS_BUYABLE, KecShop_Shiny_8
KecShop_Shiny_7:
# 1148 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_CONFUSE_RAY_BUYABLE, KecShop_Shiny_11
KecShop_Shiny_10:
# 1152 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_THUNDER_WAVE_BUYABLE, KecShop_Shiny_14
KecShop_Shiny_13:
# 1156 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_WILL_O_WISP_BUYABLE, KecShop_Shiny_17
KecShop_Shiny_16:
# 1160 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_TOXIC_BUYABLE, KecShop_Shiny_20
KecShop_Shiny_19:
# 1164 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_SWIFT_BUYABLE, KecShop_Shiny_23
KecShop_Shiny_22:
# 1168 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_CUT_BUYABLE, KecShop_Shiny_26
KecShop_Shiny_25:
# 1172 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_ROCK_SMASH_BUYABLE, KecShop_Shiny_29
KecShop_Shiny_28:
# 1176 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_SNARL_BUYABLE, KecShop_Shiny_32
KecShop_Shiny_31:
# 1180 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_ELECTROWEB_BUYABLE, KecShop_Shiny_35
KecShop_Shiny_34:
# 1184 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_AURORA_BEAM_BUYABLE, KecShop_Shiny_38
KecShop_Shiny_37:
# 1188 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_PSYBEAM_BUYABLE, KecShop_Shiny_41
KecShop_Shiny_40:
# 1192 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_FLAMETHROWER_BUYABLE, KecShop_Shiny_44
KecShop_Shiny_43:
# 1196 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_ICE_BEAM_BUYABLE, KecShop_Shiny_47
KecShop_Shiny_46:
# 1200 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_THUNDERBOLT_BUYABLE, KecShop_Shiny_50
KecShop_Shiny_49:
# 1204 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_SCALD_BUYABLE, KecShop_Shiny_53
KecShop_Shiny_52:
# 1208 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_MEGA_DRAIN_BUYABLE, KecShop_Shiny_56
KecShop_Shiny_55:
# 1212 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_SLUDGE_BOMB_BUYABLE, KecShop_Shiny_59
KecShop_Shiny_58:
# 1216 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_DUAL_WINGBEAT_BUYABLE, KecShop_Shiny_62
KecShop_Shiny_61:
# 1220 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_LEECH_LIFE_BUYABLE, KecShop_Shiny_65
KecShop_Shiny_64:
# 1224 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_PLAY_ROUGH_BUYABLE, KecShop_Shiny_68
KecShop_Shiny_67:
# 1228 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_SHADOW_BALL_BUYABLE, KecShop_Shiny_71
KecShop_Shiny_70:
# 1232 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TM_EARTH_POWER_BUYABLE, KecShop_Shiny_74
KecShop_Shiny_73:
# 1237 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne KecShop_Shiny_77
# 1520 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_21
# 1521 "data/maps/Hub1/scripts.pory"
	waitmessage
# 1522 "data/maps/Hub1/scripts.pory"
	releaseall
KecShop_Shiny_76:
# 1524 "data/maps/Hub1/scripts.pory"
	releaseall
	return

KecShop_Shiny_2:
# 1137 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_0, ITEM_TM_NOBLE_ROAR
# 1138 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_1

KecShop_Shiny_5:
# 1141 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_1, ITEM_TM_CHARM
# 1142 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_4

KecShop_Shiny_8:
# 1145 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_2, ITEM_TM_FAKE_TEARS
# 1146 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_7

KecShop_Shiny_11:
# 1149 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_3, ITEM_TM_CONFUSE_RAY
# 1150 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_10

KecShop_Shiny_14:
# 1153 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_4, ITEM_TM_THUNDER_WAVE
# 1154 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_13

KecShop_Shiny_17:
# 1157 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_5, ITEM_TM_WILL_O_WISP
# 1158 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_16

KecShop_Shiny_20:
# 1161 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_6, ITEM_TM_TOXIC
# 1162 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_19

KecShop_Shiny_23:
# 1165 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_7, ITEM_TM_SWIFT
# 1166 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_22

KecShop_Shiny_26:
# 1169 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_8, ITEM_TM_CUT
# 1170 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_25

KecShop_Shiny_29:
# 1173 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_9, ITEM_TM_ROCK_SMASH
# 1174 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_28

KecShop_Shiny_32:
# 1177 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_10, ITEM_TM_SNARL
# 1178 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_31

KecShop_Shiny_35:
# 1181 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_11, ITEM_TM_ELECTROWEB
# 1182 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_34

KecShop_Shiny_38:
# 1185 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_12, ITEM_TM_AURORA_BEAM
# 1186 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_37

KecShop_Shiny_41:
# 1189 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_13, ITEM_TM_PSYBEAM
# 1190 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_40

KecShop_Shiny_44:
# 1193 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_14, ITEM_TM_FLAMETHROWER
# 1194 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_43

KecShop_Shiny_47:
# 1197 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_15, ITEM_TM_ICE_BEAM
# 1198 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_46

KecShop_Shiny_50:
# 1201 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_16, ITEM_TM_THUNDERBOLT
# 1202 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_49

KecShop_Shiny_53:
# 1205 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_17, ITEM_TM_SCALD
# 1206 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_52

KecShop_Shiny_56:
# 1209 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_18, ITEM_TM_MEGA_DRAIN
# 1210 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_55

KecShop_Shiny_59:
# 1213 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_19, ITEM_TM_SLUDGE_BOMB
# 1214 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_58

KecShop_Shiny_62:
# 1217 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_20, ITEM_TM_DUAL_WINGBEAT
# 1218 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_61

KecShop_Shiny_65:
# 1221 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_21, ITEM_TM_LEECH_LIFE
# 1222 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_64

KecShop_Shiny_68:
# 1225 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_22, ITEM_TM_PLAY_ROUGH
# 1226 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_67

KecShop_Shiny_71:
# 1229 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_23, ITEM_TM_SHADOW_BALL
# 1230 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_70

KecShop_Shiny_74:
# 1233 "data/maps/Hub1/scripts.pory"
	dynmultipush KecShop_Shiny_Text_24, ITEM_TM_EARTH_POWER
# 1234 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto KecShop_Shiny_73

KecShop_Shiny_77:
# 1238 "data/maps/Hub1/scripts.pory"
	showmoneybox 18, 10
# 1239 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 1240 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 1241 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_NOBLE_ROAR, KecShop_Shiny_82
# 1252 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ROCK_SMASH, KecShop_Shiny_83
# 1263 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SWIFT, KecShop_Shiny_84
# 1274 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CUT, KecShop_Shiny_85
# 1285 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CHARM, KecShop_Shiny_86
# 1296 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_FAKE_TEARS, KecShop_Shiny_87
# 1307 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CONFUSE_RAY, KecShop_Shiny_88
# 1318 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_THUNDER_WAVE, KecShop_Shiny_89
# 1329 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_WILL_O_WISP, KecShop_Shiny_90
# 1340 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_TOXIC, KecShop_Shiny_91
# 1351 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SNARL, KecShop_Shiny_92
# 1362 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ELECTROWEB, KecShop_Shiny_93
# 1373 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_AURORA_BEAM, KecShop_Shiny_94
# 1384 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_PSYBEAM, KecShop_Shiny_95
# 1395 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_FLAMETHROWER, KecShop_Shiny_96
# 1406 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ICE_BEAM, KecShop_Shiny_97
# 1417 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_THUNDERBOLT, KecShop_Shiny_98
# 1428 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SCALD, KecShop_Shiny_99
# 1439 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_MEGA_DRAIN, KecShop_Shiny_100
# 1450 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SLUDGE_BOMB, KecShop_Shiny_101
# 1461 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_DUAL_WINGBEAT, KecShop_Shiny_102
# 1472 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_LEECH_LIFE, KecShop_Shiny_103
# 1483 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_PLAY_ROUGH, KecShop_Shiny_104
# 1494 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SHADOW_BALL, KecShop_Shiny_105
# 1505 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_EARTH_POWER, KecShop_Shiny_106
KecShop_Shiny_80:
# 1518 "data/maps/Hub1/scripts.pory"
	hidemoneybox
	goto KecShop_Shiny_76

KecShop_Shiny_82:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_107
# 1250 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_Shiny_80

KecShop_Shiny_83:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_110
# 1261 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_Shiny_80

KecShop_Shiny_84:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_113
# 1272 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_Shiny_80

KecShop_Shiny_85:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_116
# 1283 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_Shiny_80

KecShop_Shiny_86:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_119
# 1294 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_Shiny_80

KecShop_Shiny_87:
	checkmoney 200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_122
# 1305 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_Shiny_80

KecShop_Shiny_88:
	checkmoney 300
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_125
# 1316 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_Shiny_80

KecShop_Shiny_89:
	checkmoney 300
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_128
# 1327 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_Shiny_80

KecShop_Shiny_90:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_131
# 1338 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_Shiny_80

KecShop_Shiny_91:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_134
# 1349 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_Shiny_80

KecShop_Shiny_92:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_137
# 1360 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_Shiny_80

KecShop_Shiny_93:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_140
# 1371 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_Shiny_80

KecShop_Shiny_94:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_143
# 1382 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_Shiny_80

KecShop_Shiny_95:
	checkmoney 500
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_146
# 1393 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_Shiny_80

KecShop_Shiny_96:
	checkmoney 1200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_149
# 1404 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_Shiny_80

KecShop_Shiny_97:
	checkmoney 1200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_152
# 1415 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_Shiny_80

KecShop_Shiny_98:
	checkmoney 1200
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_155
# 1426 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_Shiny_80

KecShop_Shiny_99:
	checkmoney 1000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_158
# 1437 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_Shiny_80

KecShop_Shiny_100:
	checkmoney 800
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_161
# 1448 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_Shiny_80

KecShop_Shiny_101:
	checkmoney 1000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_164
# 1459 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_Shiny_80

KecShop_Shiny_102:
	checkmoney 900
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_167
# 1470 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_Shiny_80

KecShop_Shiny_103:
	checkmoney 1000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_170
# 1481 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_Shiny_80

KecShop_Shiny_104:
	checkmoney 1000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_173
# 1492 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_Shiny_80

KecShop_Shiny_105:
	checkmoney 1000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_176
# 1503 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_Shiny_80

KecShop_Shiny_106:
	checkmoney 1000
# 0 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne KecShop_Shiny_179
# 1514 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_20
	goto KecShop_Shiny_80

KecShop_Shiny_107:
# 1243 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 1244 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1245 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1246 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_NOBLE_ROAR
# 1247 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_110:
# 1254 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1255 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1256 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1257 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_ROCK_SMASH
# 1258 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_113:
# 1265 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1266 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1267 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1268 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SWIFT
# 1269 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_116:
# 1276 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1277 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1278 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1279 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CUT
# 1280 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_119:
# 1287 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 1288 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1289 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1290 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CHARM
# 1291 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_122:
# 1298 "data/maps/Hub1/scripts.pory"
	removemoney 200
# 1299 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1300 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1301 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_FAKE_TEARS
# 1302 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_125:
# 1309 "data/maps/Hub1/scripts.pory"
	removemoney 300
# 1310 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1311 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1312 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_CONFUSE_RAY
# 1313 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_128:
# 1320 "data/maps/Hub1/scripts.pory"
	removemoney 300
# 1321 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1322 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1323 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_THUNDER_WAVE
# 1324 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_131:
# 1331 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1332 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1333 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1334 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_WILL_O_WISP
# 1335 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_134:
# 1342 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1343 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1344 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1345 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_TOXIC
# 1346 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_137:
# 1353 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1354 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1355 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1356 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SNARL
# 1357 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_140:
# 1364 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1365 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1366 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1367 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_ELECTROWEB
# 1368 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_143:
# 1375 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1376 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1377 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1378 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_AURORA_BEAM
# 1379 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_146:
# 1386 "data/maps/Hub1/scripts.pory"
	removemoney 500
# 1387 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1388 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1389 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_PSYBEAM
# 1390 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_149:
# 1397 "data/maps/Hub1/scripts.pory"
	removemoney 1200
# 1398 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1399 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1400 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_FLAMETHROWER
# 1401 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_152:
# 1408 "data/maps/Hub1/scripts.pory"
	removemoney 1200
# 1409 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1410 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1411 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_ICE_BEAM
# 1412 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_155:
# 1419 "data/maps/Hub1/scripts.pory"
	removemoney 1200
# 1420 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1421 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1422 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 1423 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_158:
# 1430 "data/maps/Hub1/scripts.pory"
	removemoney 1000
# 1431 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1432 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1433 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SCALD
# 1434 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_161:
# 1441 "data/maps/Hub1/scripts.pory"
	removemoney 800
# 1442 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1443 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1444 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_MEGA_DRAIN
# 1445 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_164:
# 1452 "data/maps/Hub1/scripts.pory"
	removemoney 1000
# 1453 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1454 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1455 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SLUDGE_BOMB
# 1456 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_167:
# 1463 "data/maps/Hub1/scripts.pory"
	removemoney 900
# 1464 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1465 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1466 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_DUAL_WINGBEAT
# 1467 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_170:
# 1474 "data/maps/Hub1/scripts.pory"
	removemoney 1000
# 1475 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1476 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1477 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_LEECH_LIFE
# 1478 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_173:
# 1485 "data/maps/Hub1/scripts.pory"
	removemoney 1000
# 1486 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1487 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1488 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_PLAY_ROUGH
# 1489 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_176:
# 1496 "data/maps/Hub1/scripts.pory"
	removemoney 1000
# 1497 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1498 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1499 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_SHADOW_BALL
# 1500 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80

KecShop_Shiny_179:
# 1507 "data/maps/Hub1/scripts.pory"
	removemoney 1000
# 1508 "data/maps/Hub1/scripts.pory"
	updatemoneybox
# 1509 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1510 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TM_EARTH_POWER
# 1511 "data/maps/Hub1/scripts.pory"
	msgbox KecShop_Text_19
	goto KecShop_Shiny_80


Hub_Event_Script_Kecleon::
# 1528 "data/maps/Hub1/scripts.pory"
	lockall
# 1529 "data/maps/Hub1/scripts.pory"
	faceplayer
# 1530 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1532 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED, Hub_Event_Script_Kecleon_2
Hub_Event_Script_Kecleon_1:
# 1537 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_LUM_BERRY_UNLOCKED, Hub_Event_Script_Kecleon_5
Hub_Event_Script_Kecleon_4:
# 1542 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SERIOUS_MINT_UNLOCKED, Hub_Event_Script_Kecleon_8
Hub_Event_Script_Kecleon_7:
# 1547 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_IV_BOTTLE_CAPS_UNLOCKED, Hub_Event_Script_Kecleon_11
Hub_Event_Script_Kecleon_10:
# 1552 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_IV_GOLD_BOTTLE_CAPS_UNLOCKED, Hub_Event_Script_Kecleon_14
Hub_Event_Script_Kecleon_13:
# 1557 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_POCKET_BIRCH_BAG_UNLOCKED, Hub_Event_Script_Kecleon_17
Hub_Event_Script_Kecleon_16:
# 1562 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Kecleon_20
# 1653 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_14
# 1654 "data/maps/Hub1/scripts.pory"
	waitmessage
# 1655 "data/maps/Hub1/scripts.pory"
	releaseall
Hub_Event_Script_Kecleon_19:
# 1657 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
# 1658 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Kecleon_2:
# 1533 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_0, ITEM_RARE_CANDY
# 1534 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_1

Hub_Event_Script_Kecleon_5:
# 1538 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_1, ITEM_LUM_BERRY
# 1539 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_4

Hub_Event_Script_Kecleon_8:
# 1543 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_2, ITEM_SERIOUS_MINT
# 1544 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_7

Hub_Event_Script_Kecleon_11:
# 1548 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_3, ITEM_HP_BOTTLE_CAP
# 1549 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_10

Hub_Event_Script_Kecleon_14:
# 1553 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_4, ITEM_HP_GOLD_BOTTLE_CAP
# 1554 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_13

Hub_Event_Script_Kecleon_17:
# 1558 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Kecleon_Text_5, ITEM_POCKET_BIRCH_BAG
# 1559 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Kecleon_16

Hub_Event_Script_Kecleon_20:
# 1563 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_6
# 1564 "data/maps/Hub1/scripts.pory"
	showcoinsbox 21, 11
# 1565 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 1566 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 1567 "data/maps/Hub1/scripts.pory"
	case ITEM_LUM_BERRY, Hub_Event_Script_Kecleon_24
# 1581 "data/maps/Hub1/scripts.pory"
	case ITEM_SERIOUS_MINT, Hub_Event_Script_Kecleon_25
# 1595 "data/maps/Hub1/scripts.pory"
	case ITEM_RARE_CANDY, Hub_Event_Script_Kecleon_26
# 1609 "data/maps/Hub1/scripts.pory"
	case ITEM_HP_BOTTLE_CAP, Hub_Event_Script_Kecleon_27
# 1623 "data/maps/Hub1/scripts.pory"
	case ITEM_HP_GOLD_BOTTLE_CAP, Hub_Event_Script_Kecleon_28
# 1637 "data/maps/Hub1/scripts.pory"
	case ITEM_POCKET_BIRCH_BAG, Hub_Event_Script_Kecleon_29
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_24:
# 1568 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_LUM_BERRY_UNLOCKED, Hub_Event_Script_Kecleon_30
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_25:
# 1582 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_SERIOUS_MINT_UNLOCKED, Hub_Event_Script_Kecleon_32
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_26:
# 1596 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_UNLOCKED, Hub_Event_Script_Kecleon_34
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_27:
# 1610 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_IV_BOTTLE_CAPS_UNLOCKED, Hub_Event_Script_Kecleon_36
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_28:
# 1624 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_IV_GOLD_BOTTLE_CAPS_UNLOCKED, Hub_Event_Script_Kecleon_38
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_29:
# 1638 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_POCKET_BIRCH_BAG_UNLOCKED, Hub_Event_Script_Kecleon_40
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_30:
# 1569 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1570 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Kecleon_42
# 1578 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_32:
# 1583 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1584 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_45
# 1592 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_34:
# 1597 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1598 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_48
# 1606 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_36:
# 1611 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1612 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_51
# 1620 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_38:
# 1625 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1626 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_54
# 1634 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_40:
# 1639 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1640 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 2000
	goto_if_ge Hub_Event_Script_Kecleon_57
# 1648 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_42:
# 1571 "data/maps/Hub1/scripts.pory"
	setflag FLAG_LUM_BERRY_UNLOCKED
# 1572 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 1573 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1574 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1575 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_7
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_45:
# 1585 "data/maps/Hub1/scripts.pory"
	setflag FLAG_SERIOUS_MINT_UNLOCKED
# 1586 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1587 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1588 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1589 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_9
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_48:
# 1599 "data/maps/Hub1/scripts.pory"
	setflag FLAG_RARE_CANDY_UNLOCKED
# 1600 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1601 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1602 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1603 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_10
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_51:
# 1613 "data/maps/Hub1/scripts.pory"
	setflag FLAG_IV_BOTTLE_CAPS_UNLOCKED
# 1614 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1615 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1616 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1617 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_11
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_54:
# 1627 "data/maps/Hub1/scripts.pory"
	setflag FLAG_IV_GOLD_BOTTLE_CAPS_UNLOCKED
# 1628 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1629 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1630 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1631 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_12
	goto Hub_Event_Script_Kecleon_19

Hub_Event_Script_Kecleon_57:
# 1641 "data/maps/Hub1/scripts.pory"
	setflag FLAG_POCKET_BIRCH_BAG_UNLOCKED
# 1642 "data/maps/Hub1/scripts.pory"
	removecoins 2000
# 1643 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1644 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1645 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_13
	goto Hub_Event_Script_Kecleon_19


Hub_Event_Script_Shiny_Kecleon::
# 1663 "data/maps/Hub1/scripts.pory"
	lockall
# 1664 "data/maps/Hub1/scripts.pory"
	faceplayer
# 1665 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1667 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_NOBLE_ROAR_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_2
Hub_Event_Script_Shiny_Kecleon_1:
# 1671 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CHARM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_5
Hub_Event_Script_Shiny_Kecleon_4:
# 1675 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_FAKE_TEARS_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_8
Hub_Event_Script_Shiny_Kecleon_7:
# 1679 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CONFUSE_RAY_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_11
Hub_Event_Script_Shiny_Kecleon_10:
# 1683 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_THUNDER_WAVE_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_14
Hub_Event_Script_Shiny_Kecleon_13:
# 1687 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_WILL_O_WISP_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_17
Hub_Event_Script_Shiny_Kecleon_16:
# 1691 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_TOXIC_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_20
Hub_Event_Script_Shiny_Kecleon_19:
# 1695 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ROCK_SMASH_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_23
Hub_Event_Script_Shiny_Kecleon_22:
# 1699 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SNARL_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_26
Hub_Event_Script_Shiny_Kecleon_25:
# 1703 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ELECTROWEB_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_29
Hub_Event_Script_Shiny_Kecleon_28:
# 1707 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_AURORA_BEAM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_32
Hub_Event_Script_Shiny_Kecleon_31:
# 1711 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_PSYBEAM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_35
Hub_Event_Script_Shiny_Kecleon_34:
# 1715 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_MEGA_DRAIN_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_38
Hub_Event_Script_Shiny_Kecleon_37:
# 1719 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_FLAMETHROWER_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_41
Hub_Event_Script_Shiny_Kecleon_40:
# 1723 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ICE_BEAM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_44
Hub_Event_Script_Shiny_Kecleon_43:
# 1727 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_THUNDERBOLT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_47
Hub_Event_Script_Shiny_Kecleon_46:
# 1731 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SCALD_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_50
Hub_Event_Script_Shiny_Kecleon_49:
# 1735 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SLUDGE_BOMB_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_53
Hub_Event_Script_Shiny_Kecleon_52:
# 1739 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_DUAL_WINGBEAT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_56
Hub_Event_Script_Shiny_Kecleon_55:
# 1743 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_LEECH_LIFE_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_59
Hub_Event_Script_Shiny_Kecleon_58:
# 1747 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_PLAY_ROUGH_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_62
Hub_Event_Script_Shiny_Kecleon_61:
# 1751 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SHADOW_BALL_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_65
Hub_Event_Script_Shiny_Kecleon_64:
# 1755 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_EARTH_POWER_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_68
Hub_Event_Script_Shiny_Kecleon_67:
# 1761 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Shiny_Kecleon_71
# 2118 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_49
# 2119 "data/maps/Hub1/scripts.pory"
	waitmessage
# 2120 "data/maps/Hub1/scripts.pory"
	releaseall
Hub_Event_Script_Shiny_Kecleon_70:
# 2122 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
# 2123 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Shiny_Kecleon_2:
# 1668 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_0, ITEM_TM_NOBLE_ROAR
# 1669 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_1

Hub_Event_Script_Shiny_Kecleon_5:
# 1672 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_1, ITEM_TM_CHARM
# 1673 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_4

Hub_Event_Script_Shiny_Kecleon_8:
# 1676 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_2, ITEM_TM_FAKE_TEARS
# 1677 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_7

Hub_Event_Script_Shiny_Kecleon_11:
# 1680 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_3, ITEM_TM_CONFUSE_RAY
# 1681 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_10

Hub_Event_Script_Shiny_Kecleon_14:
# 1684 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_4, ITEM_TM_THUNDER_WAVE
# 1685 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_13

Hub_Event_Script_Shiny_Kecleon_17:
# 1688 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_5, ITEM_TM_WILL_O_WISP
# 1689 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_16

Hub_Event_Script_Shiny_Kecleon_20:
# 1692 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_6, ITEM_TM_TOXIC
# 1693 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_19

Hub_Event_Script_Shiny_Kecleon_23:
# 1696 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_7, ITEM_TM_ROCK_SMASH
# 1697 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_22

Hub_Event_Script_Shiny_Kecleon_26:
# 1700 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_8, ITEM_TM_SNARL
# 1701 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_25

Hub_Event_Script_Shiny_Kecleon_29:
# 1704 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_9, ITEM_TM_ELECTROWEB
# 1705 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_28

Hub_Event_Script_Shiny_Kecleon_32:
# 1708 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_10, ITEM_TM_AURORA_BEAM
# 1709 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_31

Hub_Event_Script_Shiny_Kecleon_35:
# 1712 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_11, ITEM_TM_PSYBEAM
# 1713 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_34

Hub_Event_Script_Shiny_Kecleon_38:
# 1716 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_12, ITEM_TM_MEGA_DRAIN
# 1717 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_37

Hub_Event_Script_Shiny_Kecleon_41:
# 1720 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_13, ITEM_TM_FLAMETHROWER
# 1721 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_40

Hub_Event_Script_Shiny_Kecleon_44:
# 1724 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_14, ITEM_TM_ICE_BEAM
# 1725 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_43

Hub_Event_Script_Shiny_Kecleon_47:
# 1728 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_15, ITEM_TM_THUNDERBOLT
# 1729 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_46

Hub_Event_Script_Shiny_Kecleon_50:
# 1732 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_16, ITEM_TM_SCALD
# 1733 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_49

Hub_Event_Script_Shiny_Kecleon_53:
# 1736 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_17, ITEM_TM_SLUDGE_BOMB
# 1737 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_52

Hub_Event_Script_Shiny_Kecleon_56:
# 1740 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_18, ITEM_TM_DUAL_WINGBEAT
# 1741 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_55

Hub_Event_Script_Shiny_Kecleon_59:
# 1744 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_19, ITEM_TM_LEECH_LIFE
# 1745 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_58

Hub_Event_Script_Shiny_Kecleon_62:
# 1748 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_20, ITEM_TM_PLAY_ROUGH
# 1749 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_61

Hub_Event_Script_Shiny_Kecleon_65:
# 1752 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_21, ITEM_TM_SHADOW_BALL
# 1753 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_64

Hub_Event_Script_Shiny_Kecleon_68:
# 1756 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Shiny_Kecleon_Text_22, ITEM_TM_EARTH_POWER
# 1757 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Shiny_Kecleon_67

Hub_Event_Script_Shiny_Kecleon_71:
# 1762 "data/maps/Hub1/scripts.pory"
	showcoinsbox 21, 11
# 1763 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_23
# 1764 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 1765 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 1766 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_NOBLE_ROAR, Hub_Event_Script_Shiny_Kecleon_75
# 1780 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ROCK_SMASH, Hub_Event_Script_Shiny_Kecleon_76
# 1794 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SWIFT, Hub_Event_Script_Shiny_Kecleon_77
# 1808 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CUT, Hub_Event_Script_Shiny_Kecleon_78
# 1822 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CHARM, Hub_Event_Script_Shiny_Kecleon_79
# 1836 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_FAKE_TEARS, Hub_Event_Script_Shiny_Kecleon_80
# 1850 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_CONFUSE_RAY, Hub_Event_Script_Shiny_Kecleon_81
# 1864 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_THUNDER_WAVE, Hub_Event_Script_Shiny_Kecleon_82
# 1878 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_WILL_O_WISP, Hub_Event_Script_Shiny_Kecleon_83
# 1892 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_TOXIC, Hub_Event_Script_Shiny_Kecleon_84
# 1906 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SNARL, Hub_Event_Script_Shiny_Kecleon_85
# 1920 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ELECTROWEB, Hub_Event_Script_Shiny_Kecleon_86
# 1934 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_AURORA_BEAM, Hub_Event_Script_Shiny_Kecleon_87
# 1948 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_PSYBEAM, Hub_Event_Script_Shiny_Kecleon_88
# 1962 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_FLAMETHROWER, Hub_Event_Script_Shiny_Kecleon_89
# 1976 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_ICE_BEAM, Hub_Event_Script_Shiny_Kecleon_90
# 1990 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_THUNDERBOLT, Hub_Event_Script_Shiny_Kecleon_91
# 2004 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SCALD, Hub_Event_Script_Shiny_Kecleon_92
# 2018 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_MEGA_DRAIN, Hub_Event_Script_Shiny_Kecleon_93
# 2032 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SLUDGE_BOMB, Hub_Event_Script_Shiny_Kecleon_94
# 2046 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_DUAL_WINGBEAT, Hub_Event_Script_Shiny_Kecleon_95
# 2060 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_LEECH_LIFE, Hub_Event_Script_Shiny_Kecleon_96
# 2074 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_PLAY_ROUGH, Hub_Event_Script_Shiny_Kecleon_97
# 2088 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_SHADOW_BALL, Hub_Event_Script_Shiny_Kecleon_98
# 2102 "data/maps/Hub1/scripts.pory"
	case ITEM_TM_EARTH_POWER, Hub_Event_Script_Shiny_Kecleon_99
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_75:
# 1767 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_NOBLE_ROAR_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_100
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_76:
# 1781 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ROCK_SMASH_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_102
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_77:
# 1795 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SWIFT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_104
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_78:
# 1809 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CUT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_106
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_79:
# 1823 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CHARM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_108
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_80:
# 1837 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_FAKE_TEARS_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_110
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_81:
# 1851 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_CONFUSE_RAY_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_112
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_82:
# 1865 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_THUNDER_WAVE_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_114
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_83:
# 1879 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_WILL_O_WISP_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_116
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_84:
# 1893 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_TOXIC_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_118
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_85:
# 1907 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SNARL_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_120
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_86:
# 1921 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ELECTROWEB_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_122
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_87:
# 1935 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_AURORA_BEAM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_124
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_88:
# 1949 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_PSYBEAM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_126
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_89:
# 1963 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_FLAMETHROWER_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_128
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_90:
# 1977 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_ICE_BEAM_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_130
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_91:
# 1991 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_THUNDERBOLT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_132
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_92:
# 2005 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SCALD_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_134
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_93:
# 2019 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_MEGA_DRAIN_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_136
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_94:
# 2033 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SLUDGE_BOMB_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_138
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_95:
# 2047 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_DUAL_WINGBEAT_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_140
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_96:
# 2061 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_LEECH_LIFE_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_142
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_97:
# 2075 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_PLAY_ROUGH_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_144
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_98:
# 2089 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_SHADOW_BALL_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_146
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_99:
# 2103 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_TM_EARTH_POWER_UNLOCKED, Hub_Event_Script_Shiny_Kecleon_148
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_100:
# 1768 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1769 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 400
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_150
# 1777 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_102:
# 1782 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1783 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 900
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_153
# 1791 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_104:
# 1796 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1797 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_156
# 1805 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_106:
# 1810 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1811 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 500
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_159
# 1819 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_108:
# 1824 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1825 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 400
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_162
# 1833 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_110:
# 1838 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1839 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 400
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_165
# 1847 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_112:
# 1852 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1853 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 800
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_168
# 1861 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_114:
# 1866 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1867 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 800
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_171
# 1875 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_116:
# 1880 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1881 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 800
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_174
# 1889 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_118:
# 1894 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1895 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 800
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_177
# 1903 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_120:
# 1908 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1909 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 900
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_180
# 1917 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_122:
# 1922 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1923 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 900
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_183
# 1931 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_124:
# 1936 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1937 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 900
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_186
# 1945 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_126:
# 1950 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1951 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 900
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_189
# 1959 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_128:
# 1964 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1965 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_192
# 1973 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_130:
# 1978 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1979 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_195
# 1987 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_132:
# 1992 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 1993 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_198
# 2001 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_134:
# 2006 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2007 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_201
# 2015 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_136:
# 2020 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2021 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_204
# 2029 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_138:
# 2034 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2035 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_207
# 2043 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_140:
# 2048 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2049 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_210
# 2057 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_142:
# 2062 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2063 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_213
# 2071 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_144:
# 2076 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2077 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_216
# 2085 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_146:
# 2090 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2091 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_219
# 2099 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_148:
# 2104 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2105 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1200
	goto_if_ge Hub_Event_Script_Shiny_Kecleon_222
# 2113 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Kecleon_Text_8
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_150:
# 1770 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_NOBLE_ROAR_UNLOCKED
# 1771 "data/maps/Hub1/scripts.pory"
	removecoins 400
# 1772 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1773 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1774 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_24
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_153:
# 1784 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_ROCK_SMASH_UNLOCKED
# 1785 "data/maps/Hub1/scripts.pory"
	removecoins 900
# 1786 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1787 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1788 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_25
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_156:
# 1798 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_SWIFT_UNLOCKED
# 1799 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 1800 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1801 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1802 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_26
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_159:
# 1812 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CUT_UNLOCKED
# 1813 "data/maps/Hub1/scripts.pory"
	removecoins 500
# 1814 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1815 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1816 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_27
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_162:
# 1826 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CHARM_UNLOCKED
# 1827 "data/maps/Hub1/scripts.pory"
	removecoins 400
# 1828 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1829 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1830 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_28
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_165:
# 1840 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_FAKE_TEARS_UNLOCKED
# 1841 "data/maps/Hub1/scripts.pory"
	removecoins 400
# 1842 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1843 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1844 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_29
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_168:
# 1854 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_CONFUSE_RAY_UNLOCKED
# 1855 "data/maps/Hub1/scripts.pory"
	removecoins 800
# 1856 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1857 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1858 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_30
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_171:
# 1868 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_THUNDER_WAVE_UNLOCKED
# 1869 "data/maps/Hub1/scripts.pory"
	removecoins 800
# 1870 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1871 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1872 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_31
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_174:
# 1882 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_WILL_O_WISP_UNLOCKED
# 1883 "data/maps/Hub1/scripts.pory"
	removecoins 800
# 1884 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1885 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1886 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_32
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_177:
# 1896 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_TOXIC_UNLOCKED
# 1897 "data/maps/Hub1/scripts.pory"
	removecoins 800
# 1898 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1899 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1900 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_33
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_180:
# 1910 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_SNARL_UNLOCKED
# 1911 "data/maps/Hub1/scripts.pory"
	removecoins 900
# 1912 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1913 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1914 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_34
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_183:
# 1924 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_ELECTROWEB_UNLOCKED
# 1925 "data/maps/Hub1/scripts.pory"
	removecoins 900
# 1926 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1927 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1928 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_35
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_186:
# 1938 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_AURORA_BEAM_UNLOCKED
# 1939 "data/maps/Hub1/scripts.pory"
	removecoins 900
# 1940 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1941 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1942 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_36
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_189:
# 1952 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_PSYBEAM_UNLOCKED
# 1953 "data/maps/Hub1/scripts.pory"
	removecoins 900
# 1954 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1955 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1956 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_37
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_192:
# 1966 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_FLAMETHROWER_UNLOCKED
# 1967 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 1968 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1969 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1970 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_38
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_195:
# 1980 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_ICE_BEAM_UNLOCKED
# 1981 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 1982 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1983 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1984 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_39
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_198:
# 1994 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_THUNDERBOLT_UNLOCKED
# 1995 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 1996 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 1997 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 1998 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_40
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_201:
# 2008 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_SCALD_UNLOCKED
# 2009 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2010 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2011 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2012 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_41
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_204:
# 2022 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_MEGA_DRAIN_UNLOCKED
# 2023 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2024 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2025 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2026 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_42
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_207:
# 2036 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_SLUDGE_BOMB_UNLOCKED
# 2037 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2038 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2039 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2040 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_43
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_210:
# 2050 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_DUAL_WINGBEAT_UNLOCKED
# 2051 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2052 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2053 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2054 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_44
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_213:
# 2064 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_LEECH_LIFE_UNLOCKED
# 2065 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2066 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2067 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2068 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_45
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_216:
# 2078 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_PLAY_ROUGH_UNLOCKED
# 2079 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2080 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2081 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2082 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_46
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_219:
# 2092 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_SHADOW_BALL_UNLOCKED
# 2093 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2094 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2095 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2096 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_47
	goto Hub_Event_Script_Shiny_Kecleon_70

Hub_Event_Script_Shiny_Kecleon_222:
# 2106 "data/maps/Hub1/scripts.pory"
	setflag FLAG_TM_EARTH_POWER_UNLOCKED
# 2107 "data/maps/Hub1/scripts.pory"
	removecoins 1200
# 2108 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2109 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2110 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Shiny_Kecleon_Text_48
	goto Hub_Event_Script_Shiny_Kecleon_70


Hub_Event_Script_Diancie::
# 2128 "data/maps/Hub1/scripts.pory"
	lockall
# 2129 "data/maps/Hub1/scripts.pory"
	faceplayer
# 2130 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEGA_SHOP_UNLOCKED, Hub_Event_Script_Diancie_9
Hub_Event_Script_Diancie_7:
# 2138 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_MEGA_SHOP_UNLOCKED, Hub_Event_Script_Diancie_6
Hub_Event_Script_Diancie_5:
# 2157 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHARIZARDITE_X_UNLOCKED, Hub_Event_Script_Diancie_4
Hub_Event_Script_Diancie_1:
# 3595 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Diancie_2:
# 2131 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_0
	goto Hub_Event_Script_Diancie_1

Hub_Event_Script_Diancie_3:
# 2139 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_1
# 2143 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHARIZARDITE_X, 1
# 2144 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_VENUSAURITE_BUYABLE
# 2145 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHARIZARDITE_Y_BUYABLE
# 2146 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BLASTOISINITE_BUYABLE
# 2147 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHARIZARDITE_X_UNLOCKED
# 2148 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_2
	goto Hub_Event_Script_Diancie_1

Hub_Event_Script_Diancie_4:
# 2158 "data/maps/Hub1/scripts.pory"
	setvar VAR_TEMP_A, 0
# 2159 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_VENUSAURITE_BUYABLE, Hub_Event_Script_Diancie_13
Hub_Event_Script_Diancie_12:
# 2163 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHARIZARDITE_Y_BUYABLE, Hub_Event_Script_Diancie_16
Hub_Event_Script_Diancie_15:
# 2167 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BLASTOISINITE_BUYABLE, Hub_Event_Script_Diancie_19
Hub_Event_Script_Diancie_18:
# 2171 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BEEDRILLITE_BUYABLE, Hub_Event_Script_Diancie_22
Hub_Event_Script_Diancie_21:
# 2175 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_PIDGEOTITE_BUYABLE, Hub_Event_Script_Diancie_25
Hub_Event_Script_Diancie_24:
# 2179 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ALAKAZITE_BUYABLE, Hub_Event_Script_Diancie_28
Hub_Event_Script_Diancie_27:
# 2183 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SLOWBRONITE_BUYABLE, Hub_Event_Script_Diancie_31
Hub_Event_Script_Diancie_30:
# 2187 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GENGARITE_BUYABLE, Hub_Event_Script_Diancie_34
Hub_Event_Script_Diancie_33:
# 2191 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_KANGASKHANITE_BUYABLE, Hub_Event_Script_Diancie_37
Hub_Event_Script_Diancie_36:
# 2195 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_PINSIRITE_BUYABLE, Hub_Event_Script_Diancie_40
Hub_Event_Script_Diancie_39:
# 2199 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GYARADOSITE_BUYABLE, Hub_Event_Script_Diancie_43
Hub_Event_Script_Diancie_42:
# 2203 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_AERODACTYLITE_BUYABLE, Hub_Event_Script_Diancie_46
Hub_Event_Script_Diancie_45:
# 2207 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_AMPHAROSITE_BUYABLE, Hub_Event_Script_Diancie_49
Hub_Event_Script_Diancie_48:
# 2211 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_STEELIXITE_BUYABLE, Hub_Event_Script_Diancie_52
Hub_Event_Script_Diancie_51:
# 2215 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCIZORITE_BUYABLE, Hub_Event_Script_Diancie_55
Hub_Event_Script_Diancie_54:
# 2219 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_HERACRONITE_BUYABLE, Hub_Event_Script_Diancie_58
Hub_Event_Script_Diancie_57:
# 2223 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_HOUNDOOMINITE_BUYABLE, Hub_Event_Script_Diancie_61
Hub_Event_Script_Diancie_60:
# 2227 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_TYRANITARITE_BUYABLE, Hub_Event_Script_Diancie_64
Hub_Event_Script_Diancie_63:
# 2231 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCEPTILITE_BUYABLE, Hub_Event_Script_Diancie_67
Hub_Event_Script_Diancie_66:
# 2235 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BLAZIKENITE_BUYABLE, Hub_Event_Script_Diancie_70
Hub_Event_Script_Diancie_69:
# 2239 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SWAMPERTITE_BUYABLE, Hub_Event_Script_Diancie_73
Hub_Event_Script_Diancie_72:
# 2243 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GARDEVOIRITE_BUYABLE, Hub_Event_Script_Diancie_76
Hub_Event_Script_Diancie_75:
# 2247 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SABLENITE_BUYABLE, Hub_Event_Script_Diancie_79
Hub_Event_Script_Diancie_78:
# 2251 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MAWILITE_BUYABLE, Hub_Event_Script_Diancie_82
Hub_Event_Script_Diancie_81:
# 2255 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_AGGRONITE_BUYABLE, Hub_Event_Script_Diancie_85
Hub_Event_Script_Diancie_84:
# 2259 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MEDICHAMITE_BUYABLE, Hub_Event_Script_Diancie_88
Hub_Event_Script_Diancie_87:
# 2263 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MANECTITE_BUYABLE, Hub_Event_Script_Diancie_91
Hub_Event_Script_Diancie_90:
# 2267 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SHARPEDONITE_BUYABLE, Hub_Event_Script_Diancie_94
Hub_Event_Script_Diancie_93:
# 2271 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CAMERUPTITE_BUYABLE, Hub_Event_Script_Diancie_97
Hub_Event_Script_Diancie_96:
# 2275 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ALTARIANITE_BUYABLE, Hub_Event_Script_Diancie_100
Hub_Event_Script_Diancie_99:
# 2279 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BANETTITE_BUYABLE, Hub_Event_Script_Diancie_103
Hub_Event_Script_Diancie_102:
# 2283 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ABSOLITE_BUYABLE, Hub_Event_Script_Diancie_106
Hub_Event_Script_Diancie_105:
# 2287 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GLALITITE_BUYABLE, Hub_Event_Script_Diancie_109
Hub_Event_Script_Diancie_108:
# 2291 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SALAMENCITE_BUYABLE, Hub_Event_Script_Diancie_112
Hub_Event_Script_Diancie_111:
# 2295 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_METAGROSSITE_BUYABLE, Hub_Event_Script_Diancie_115
Hub_Event_Script_Diancie_114:
# 2299 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_LOPUNNITE_BUYABLE, Hub_Event_Script_Diancie_118
Hub_Event_Script_Diancie_117:
# 2303 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GARCHOMPITE_BUYABLE, Hub_Event_Script_Diancie_121
Hub_Event_Script_Diancie_120:
# 2307 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_LUCARIONITE_BUYABLE, Hub_Event_Script_Diancie_124
Hub_Event_Script_Diancie_123:
# 2311 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_ABOMASITE_BUYABLE, Hub_Event_Script_Diancie_127
Hub_Event_Script_Diancie_126:
# 2315 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GALLADITE_BUYABLE, Hub_Event_Script_Diancie_130
Hub_Event_Script_Diancie_129:
# 2319 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CLEFABLITE_BUYABLE, Hub_Event_Script_Diancie_133
Hub_Event_Script_Diancie_132:
# 2323 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_VICTREEBELITE_BUYABLE, Hub_Event_Script_Diancie_136
Hub_Event_Script_Diancie_135:
# 2327 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_STARMINITE_BUYABLE, Hub_Event_Script_Diancie_139
Hub_Event_Script_Diancie_138:
# 2331 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DRAGONINITE_BUYABLE, Hub_Event_Script_Diancie_142
Hub_Event_Script_Diancie_141:
# 2335 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MEGANIUMITE_BUYABLE, Hub_Event_Script_Diancie_145
Hub_Event_Script_Diancie_144:
# 2339 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_FERALIGITE_BUYABLE, Hub_Event_Script_Diancie_148
Hub_Event_Script_Diancie_147:
# 2343 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SKARMORITE_BUYABLE, Hub_Event_Script_Diancie_151
Hub_Event_Script_Diancie_150:
# 2347 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_FROSLASSITE_BUYABLE, Hub_Event_Script_Diancie_154
Hub_Event_Script_Diancie_153:
# 2351 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_EMBOARITE_BUYABLE, Hub_Event_Script_Diancie_157
Hub_Event_Script_Diancie_156:
# 2355 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_EXCADRITE_BUYABLE, Hub_Event_Script_Diancie_160
Hub_Event_Script_Diancie_159:
# 2359 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCOLIPITE_BUYABLE, Hub_Event_Script_Diancie_163
Hub_Event_Script_Diancie_162:
# 2363 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCRAFTINITE_BUYABLE, Hub_Event_Script_Diancie_166
Hub_Event_Script_Diancie_165:
# 2367 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_EELEKTROSSITE_BUYABLE, Hub_Event_Script_Diancie_169
Hub_Event_Script_Diancie_168:
# 2371 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHANDELURITE_BUYABLE, Hub_Event_Script_Diancie_172
Hub_Event_Script_Diancie_171:
# 2375 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHESNAUGHTITE_BUYABLE, Hub_Event_Script_Diancie_175
Hub_Event_Script_Diancie_174:
# 2379 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DELPHOXITE_BUYABLE, Hub_Event_Script_Diancie_178
Hub_Event_Script_Diancie_177:
# 2383 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GRENINJITE_BUYABLE, Hub_Event_Script_Diancie_181
Hub_Event_Script_Diancie_180:
# 2387 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_PYROARITE_BUYABLE, Hub_Event_Script_Diancie_184
Hub_Event_Script_Diancie_183:
# 2391 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MALAMARITE_BUYABLE, Hub_Event_Script_Diancie_187
Hub_Event_Script_Diancie_186:
# 2395 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BARBARACITE_BUYABLE, Hub_Event_Script_Diancie_190
Hub_Event_Script_Diancie_189:
# 2399 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DRAGALGITE_BUYABLE, Hub_Event_Script_Diancie_193
Hub_Event_Script_Diancie_192:
# 2403 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_HAWLUCHANITE_BUYABLE, Hub_Event_Script_Diancie_196
Hub_Event_Script_Diancie_195:
# 2407 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_DRAMPANITE_BUYABLE, Hub_Event_Script_Diancie_199
Hub_Event_Script_Diancie_198:
# 2411 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_FALINKSITE_BUYABLE, Hub_Event_Script_Diancie_202
Hub_Event_Script_Diancie_201:
# 2415 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_RAICHUNITE_X_BUYABLE, Hub_Event_Script_Diancie_205
Hub_Event_Script_Diancie_204:
# 2419 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_RAICHUNITE_Y_BUYABLE, Hub_Event_Script_Diancie_208
Hub_Event_Script_Diancie_207:
# 2423 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CHIMECHITE_BUYABLE, Hub_Event_Script_Diancie_211
Hub_Event_Script_Diancie_210:
# 2427 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_STARAPTITE_BUYABLE, Hub_Event_Script_Diancie_214
Hub_Event_Script_Diancie_213:
# 2431 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GOLURKITE_BUYABLE, Hub_Event_Script_Diancie_217
Hub_Event_Script_Diancie_216:
# 2435 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_MEOWSTICITE_BUYABLE, Hub_Event_Script_Diancie_220
Hub_Event_Script_Diancie_219:
# 2439 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_CRABOMINITE_BUYABLE, Hub_Event_Script_Diancie_223
Hub_Event_Script_Diancie_222:
# 2443 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GOLISOPITE_BUYABLE, Hub_Event_Script_Diancie_226
Hub_Event_Script_Diancie_225:
# 2447 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_SCOVILLAINITE_BUYABLE, Hub_Event_Script_Diancie_229
Hub_Event_Script_Diancie_228:
# 2451 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_GLIMMORANITE_BUYABLE, Hub_Event_Script_Diancie_232
Hub_Event_Script_Diancie_231:
# 2455 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_ITEM_BAXCALIBRITE_BUYABLE, Hub_Event_Script_Diancie_235
Hub_Event_Script_Diancie_234:
# 2460 "data/maps/Hub1/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne Hub_Event_Script_Diancie_238
# 3585 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_155
# 3590 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3591 "data/maps/Hub1/scripts.pory"
	releaseall
Hub_Event_Script_Diancie_237:
# 3593 "data/maps/Hub1/scripts.pory"
	hidecoinsbox 0, 0
	goto Hub_Event_Script_Diancie_1

Hub_Event_Script_Diancie_6:
# 2138 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ITEM_CHARIZARDITE_X_UNLOCKED, Hub_Event_Script_Diancie_3
	goto Hub_Event_Script_Diancie_5

Hub_Event_Script_Diancie_9:
# 2130 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_ITEM_CHARIZARDITE_X_UNLOCKED, Hub_Event_Script_Diancie_2
	goto Hub_Event_Script_Diancie_7

Hub_Event_Script_Diancie_13:
# 2160 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_3, ITEM_VENUSAURITE
# 2161 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_12

Hub_Event_Script_Diancie_16:
# 2164 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_4, ITEM_CHARIZARDITE_Y
# 2165 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_15

Hub_Event_Script_Diancie_19:
# 2168 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_5, ITEM_BLASTOISINITE
# 2169 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_18

Hub_Event_Script_Diancie_22:
# 2172 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_6, ITEM_BEEDRILLITE
# 2173 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_21

Hub_Event_Script_Diancie_25:
# 2176 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_7, ITEM_PIDGEOTITE
# 2177 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_24

Hub_Event_Script_Diancie_28:
# 2180 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_8, ITEM_ALAKAZITE
# 2181 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_27

Hub_Event_Script_Diancie_31:
# 2184 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_9, ITEM_SLOWBRONITE
# 2185 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_30

Hub_Event_Script_Diancie_34:
# 2188 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_10, ITEM_GENGARITE
# 2189 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_33

Hub_Event_Script_Diancie_37:
# 2192 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_11, ITEM_KANGASKHANITE
# 2193 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_36

Hub_Event_Script_Diancie_40:
# 2196 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_12, ITEM_PINSIRITE
# 2197 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_39

Hub_Event_Script_Diancie_43:
# 2200 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_13, ITEM_GYARADOSITE
# 2201 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_42

Hub_Event_Script_Diancie_46:
# 2204 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_14, ITEM_AERODACTYLITE
# 2205 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_45

Hub_Event_Script_Diancie_49:
# 2208 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_15, ITEM_AMPHAROSITE
# 2209 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_48

Hub_Event_Script_Diancie_52:
# 2212 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_16, ITEM_STEELIXITE
# 2213 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_51

Hub_Event_Script_Diancie_55:
# 2216 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_17, ITEM_SCIZORITE
# 2217 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_54

Hub_Event_Script_Diancie_58:
# 2220 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_18, ITEM_HERACRONITE
# 2221 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_57

Hub_Event_Script_Diancie_61:
# 2224 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_19, ITEM_HOUNDOOMINITE
# 2225 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_60

Hub_Event_Script_Diancie_64:
# 2228 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_20, ITEM_TYRANITARITE
# 2229 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_63

Hub_Event_Script_Diancie_67:
# 2232 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_21, ITEM_SCEPTILITE
# 2233 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_66

Hub_Event_Script_Diancie_70:
# 2236 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_22, ITEM_BLAZIKENITE
# 2237 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_69

Hub_Event_Script_Diancie_73:
# 2240 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_23, ITEM_SWAMPERTITE
# 2241 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_72

Hub_Event_Script_Diancie_76:
# 2244 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_24, ITEM_GARDEVOIRITE
# 2245 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_75

Hub_Event_Script_Diancie_79:
# 2248 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_25, ITEM_SABLENITE
# 2249 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_78

Hub_Event_Script_Diancie_82:
# 2252 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_26, ITEM_MAWILITE
# 2253 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_81

Hub_Event_Script_Diancie_85:
# 2256 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_27, ITEM_AGGRONITE
# 2257 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_84

Hub_Event_Script_Diancie_88:
# 2260 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_28, ITEM_MEDICHAMITE
# 2261 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_87

Hub_Event_Script_Diancie_91:
# 2264 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_29, ITEM_MANECTITE
# 2265 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_90

Hub_Event_Script_Diancie_94:
# 2268 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_30, ITEM_SHARPEDONITE
# 2269 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_93

Hub_Event_Script_Diancie_97:
# 2272 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_31, ITEM_CAMERUPTITE
# 2273 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_96

Hub_Event_Script_Diancie_100:
# 2276 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_32, ITEM_ALTARIANITE
# 2277 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_99

Hub_Event_Script_Diancie_103:
# 2280 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_33, ITEM_BANETTITE
# 2281 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_102

Hub_Event_Script_Diancie_106:
# 2284 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_34, ITEM_ABSOLITE
# 2285 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_105

Hub_Event_Script_Diancie_109:
# 2288 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_35, ITEM_GLALITITE
# 2289 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_108

Hub_Event_Script_Diancie_112:
# 2292 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_36, ITEM_SALAMENCITE
# 2293 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_111

Hub_Event_Script_Diancie_115:
# 2296 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_37, ITEM_METAGROSSITE
# 2297 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_114

Hub_Event_Script_Diancie_118:
# 2300 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_38, ITEM_LOPUNNITE
# 2301 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_117

Hub_Event_Script_Diancie_121:
# 2304 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_39, ITEM_GARCHOMPITE
# 2305 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_120

Hub_Event_Script_Diancie_124:
# 2308 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_40, ITEM_LUCARIONITE
# 2309 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_123

Hub_Event_Script_Diancie_127:
# 2312 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_41, ITEM_ABOMASITE
# 2313 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_126

Hub_Event_Script_Diancie_130:
# 2316 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_42, ITEM_GALLADITE
# 2317 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_129

Hub_Event_Script_Diancie_133:
# 2320 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_43, ITEM_CLEFABLITE
# 2321 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_132

Hub_Event_Script_Diancie_136:
# 2324 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_44, ITEM_VICTREEBELITE
# 2325 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_135

Hub_Event_Script_Diancie_139:
# 2328 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_45, ITEM_STARMINITE
# 2329 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_138

Hub_Event_Script_Diancie_142:
# 2332 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_46, ITEM_DRAGONINITE
# 2333 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_141

Hub_Event_Script_Diancie_145:
# 2336 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_47, ITEM_MEGANIUMITE
# 2337 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_144

Hub_Event_Script_Diancie_148:
# 2340 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_48, ITEM_FERALIGITE
# 2341 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_147

Hub_Event_Script_Diancie_151:
# 2344 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_49, ITEM_SKARMORITE
# 2345 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_150

Hub_Event_Script_Diancie_154:
# 2348 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_50, ITEM_FROSLASSITE
# 2349 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_153

Hub_Event_Script_Diancie_157:
# 2352 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_51, ITEM_EMBOARITE
# 2353 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_156

Hub_Event_Script_Diancie_160:
# 2356 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_52, ITEM_EXCADRITE
# 2357 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_159

Hub_Event_Script_Diancie_163:
# 2360 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_53, ITEM_SCOLIPITE
# 2361 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_162

Hub_Event_Script_Diancie_166:
# 2364 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_54, ITEM_SCRAFTINITE
# 2365 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_165

Hub_Event_Script_Diancie_169:
# 2368 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_55, ITEM_EELEKTROSSITE
# 2369 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_168

Hub_Event_Script_Diancie_172:
# 2372 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_56, ITEM_CHANDELURITE
# 2373 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_171

Hub_Event_Script_Diancie_175:
# 2376 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_57, ITEM_CHESNAUGHTITE
# 2377 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_174

Hub_Event_Script_Diancie_178:
# 2380 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_58, ITEM_DELPHOXITE
# 2381 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_177

Hub_Event_Script_Diancie_181:
# 2384 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_59, ITEM_GRENINJITE
# 2385 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_180

Hub_Event_Script_Diancie_184:
# 2388 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_60, ITEM_PYROARITE
# 2389 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_183

Hub_Event_Script_Diancie_187:
# 2392 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_61, ITEM_MALAMARITE
# 2393 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_186

Hub_Event_Script_Diancie_190:
# 2396 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_62, ITEM_BARBARACITE
# 2397 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_189

Hub_Event_Script_Diancie_193:
# 2400 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_63, ITEM_DRAGALGITE
# 2401 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_192

Hub_Event_Script_Diancie_196:
# 2404 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_64, ITEM_HAWLUCHANITE
# 2405 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_195

Hub_Event_Script_Diancie_199:
# 2408 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_65, ITEM_DRAMPANITE
# 2409 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_198

Hub_Event_Script_Diancie_202:
# 2412 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_66, ITEM_FALINKSITE
# 2413 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_201

Hub_Event_Script_Diancie_205:
# 2416 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_67, ITEM_RAICHUNITE_X
# 2417 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_204

Hub_Event_Script_Diancie_208:
# 2420 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_68, ITEM_RAICHUNITE_Y
# 2421 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_207

Hub_Event_Script_Diancie_211:
# 2424 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_69, ITEM_CHIMECHITE
# 2425 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_210

Hub_Event_Script_Diancie_214:
# 2428 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_70, ITEM_STARAPTITE
# 2429 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_213

Hub_Event_Script_Diancie_217:
# 2432 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_71, ITEM_GOLURKITE
# 2433 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_216

Hub_Event_Script_Diancie_220:
# 2436 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_72, ITEM_MEOWSTICITE
# 2437 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_219

Hub_Event_Script_Diancie_223:
# 2440 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_73, ITEM_CRABOMINITE
# 2441 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_222

Hub_Event_Script_Diancie_226:
# 2444 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_74, ITEM_GOLISOPITE
# 2445 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_225

Hub_Event_Script_Diancie_229:
# 2448 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_75, ITEM_SCOVILLAINITE
# 2449 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_228

Hub_Event_Script_Diancie_232:
# 2452 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_76, ITEM_GLIMMORANITE
# 2453 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_231

Hub_Event_Script_Diancie_235:
# 2456 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Diancie_Text_77, ITEM_BAXCALIBRITE
# 2457 "data/maps/Hub1/scripts.pory"
	addvar VAR_TEMP_A, 1
	goto Hub_Event_Script_Diancie_234

Hub_Event_Script_Diancie_238:
# 2462 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_NEW_MEGA_BUYABLE, Hub_Event_Script_Diancie_242
# 2469 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_79
Hub_Event_Script_Diancie_241:
# 2471 "data/maps/Hub1/scripts.pory"
	showcoinsbox 21, 11
# 2472 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 2473 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 2474 "data/maps/Hub1/scripts.pory"
	case ITEM_VENUSAURITE, Hub_Event_Script_Diancie_246
# 2489 "data/maps/Hub1/scripts.pory"
	case ITEM_CHARIZARDITE_Y, Hub_Event_Script_Diancie_247
# 2504 "data/maps/Hub1/scripts.pory"
	case ITEM_BLASTOISINITE, Hub_Event_Script_Diancie_248
# 2519 "data/maps/Hub1/scripts.pory"
	case ITEM_BEEDRILLITE, Hub_Event_Script_Diancie_249
# 2534 "data/maps/Hub1/scripts.pory"
	case ITEM_PIDGEOTITE, Hub_Event_Script_Diancie_250
# 2549 "data/maps/Hub1/scripts.pory"
	case ITEM_ALAKAZITE, Hub_Event_Script_Diancie_251
# 2564 "data/maps/Hub1/scripts.pory"
	case ITEM_SLOWBRONITE, Hub_Event_Script_Diancie_252
# 2579 "data/maps/Hub1/scripts.pory"
	case ITEM_GENGARITE, Hub_Event_Script_Diancie_253
# 2594 "data/maps/Hub1/scripts.pory"
	case ITEM_KANGASKHANITE, Hub_Event_Script_Diancie_254
# 2609 "data/maps/Hub1/scripts.pory"
	case ITEM_PINSIRITE, Hub_Event_Script_Diancie_255
# 2624 "data/maps/Hub1/scripts.pory"
	case ITEM_GYARADOSITE, Hub_Event_Script_Diancie_256
# 2639 "data/maps/Hub1/scripts.pory"
	case ITEM_AERODACTYLITE, Hub_Event_Script_Diancie_257
# 2654 "data/maps/Hub1/scripts.pory"
	case ITEM_AMPHAROSITE, Hub_Event_Script_Diancie_258
# 2669 "data/maps/Hub1/scripts.pory"
	case ITEM_STEELIXITE, Hub_Event_Script_Diancie_259
# 2684 "data/maps/Hub1/scripts.pory"
	case ITEM_SCIZORITE, Hub_Event_Script_Diancie_260
# 2699 "data/maps/Hub1/scripts.pory"
	case ITEM_HERACRONITE, Hub_Event_Script_Diancie_261
# 2714 "data/maps/Hub1/scripts.pory"
	case ITEM_HOUNDOOMINITE, Hub_Event_Script_Diancie_262
# 2729 "data/maps/Hub1/scripts.pory"
	case ITEM_TYRANITARITE, Hub_Event_Script_Diancie_263
# 2744 "data/maps/Hub1/scripts.pory"
	case ITEM_SCEPTILITE, Hub_Event_Script_Diancie_264
# 2759 "data/maps/Hub1/scripts.pory"
	case ITEM_BLAZIKENITE, Hub_Event_Script_Diancie_265
# 2774 "data/maps/Hub1/scripts.pory"
	case ITEM_SWAMPERTITE, Hub_Event_Script_Diancie_266
# 2789 "data/maps/Hub1/scripts.pory"
	case ITEM_GARDEVOIRITE, Hub_Event_Script_Diancie_267
# 2804 "data/maps/Hub1/scripts.pory"
	case ITEM_SABLENITE, Hub_Event_Script_Diancie_268
# 2819 "data/maps/Hub1/scripts.pory"
	case ITEM_MAWILITE, Hub_Event_Script_Diancie_269
# 2834 "data/maps/Hub1/scripts.pory"
	case ITEM_AGGRONITE, Hub_Event_Script_Diancie_270
# 2849 "data/maps/Hub1/scripts.pory"
	case ITEM_MEDICHAMITE, Hub_Event_Script_Diancie_271
# 2864 "data/maps/Hub1/scripts.pory"
	case ITEM_MANECTITE, Hub_Event_Script_Diancie_272
# 2879 "data/maps/Hub1/scripts.pory"
	case ITEM_SHARPEDONITE, Hub_Event_Script_Diancie_273
# 2894 "data/maps/Hub1/scripts.pory"
	case ITEM_CAMERUPTITE, Hub_Event_Script_Diancie_274
# 2909 "data/maps/Hub1/scripts.pory"
	case ITEM_ALTARIANITE, Hub_Event_Script_Diancie_275
# 2924 "data/maps/Hub1/scripts.pory"
	case ITEM_BANETTITE, Hub_Event_Script_Diancie_276
# 2939 "data/maps/Hub1/scripts.pory"
	case ITEM_ABSOLITE, Hub_Event_Script_Diancie_277
# 2954 "data/maps/Hub1/scripts.pory"
	case ITEM_GLALITITE, Hub_Event_Script_Diancie_278
# 2969 "data/maps/Hub1/scripts.pory"
	case ITEM_SALAMENCITE, Hub_Event_Script_Diancie_279
# 2984 "data/maps/Hub1/scripts.pory"
	case ITEM_LOPUNNITE, Hub_Event_Script_Diancie_280
# 2999 "data/maps/Hub1/scripts.pory"
	case ITEM_GARCHOMPITE, Hub_Event_Script_Diancie_281
# 3014 "data/maps/Hub1/scripts.pory"
	case ITEM_LUCARIONITE, Hub_Event_Script_Diancie_282
# 3029 "data/maps/Hub1/scripts.pory"
	case ITEM_ABOMASITE, Hub_Event_Script_Diancie_283
# 3044 "data/maps/Hub1/scripts.pory"
	case ITEM_GALLADITE, Hub_Event_Script_Diancie_284
# 3059 "data/maps/Hub1/scripts.pory"
	case ITEM_CLEFABLITE, Hub_Event_Script_Diancie_285
# 3074 "data/maps/Hub1/scripts.pory"
	case ITEM_VICTREEBELITE, Hub_Event_Script_Diancie_286
# 3089 "data/maps/Hub1/scripts.pory"
	case ITEM_STARMINITE, Hub_Event_Script_Diancie_287
# 3104 "data/maps/Hub1/scripts.pory"
	case ITEM_DRAGONINITE, Hub_Event_Script_Diancie_288
# 3119 "data/maps/Hub1/scripts.pory"
	case ITEM_MEGANIUMITE, Hub_Event_Script_Diancie_289
# 3134 "data/maps/Hub1/scripts.pory"
	case ITEM_FERALIGITE, Hub_Event_Script_Diancie_290
# 3149 "data/maps/Hub1/scripts.pory"
	case ITEM_SKARMORITE, Hub_Event_Script_Diancie_291
# 3164 "data/maps/Hub1/scripts.pory"
	case ITEM_FROSLASSITE, Hub_Event_Script_Diancie_292
# 3179 "data/maps/Hub1/scripts.pory"
	case ITEM_EMBOARITE, Hub_Event_Script_Diancie_293
# 3194 "data/maps/Hub1/scripts.pory"
	case ITEM_EXCADRITE, Hub_Event_Script_Diancie_294
# 3209 "data/maps/Hub1/scripts.pory"
	case ITEM_SCOLIPITE, Hub_Event_Script_Diancie_295
# 3224 "data/maps/Hub1/scripts.pory"
	case ITEM_SCRAFTINITE, Hub_Event_Script_Diancie_296
# 3239 "data/maps/Hub1/scripts.pory"
	case ITEM_EELEKTROSSITE, Hub_Event_Script_Diancie_297
# 3254 "data/maps/Hub1/scripts.pory"
	case ITEM_CHANDELURITE, Hub_Event_Script_Diancie_298
# 3269 "data/maps/Hub1/scripts.pory"
	case ITEM_CHESNAUGHTITE, Hub_Event_Script_Diancie_299
# 3284 "data/maps/Hub1/scripts.pory"
	case ITEM_DELPHOXITE, Hub_Event_Script_Diancie_300
# 3299 "data/maps/Hub1/scripts.pory"
	case ITEM_GRENINJITE, Hub_Event_Script_Diancie_301
# 3314 "data/maps/Hub1/scripts.pory"
	case ITEM_PYROARITE, Hub_Event_Script_Diancie_302
# 3329 "data/maps/Hub1/scripts.pory"
	case ITEM_MALAMARITE, Hub_Event_Script_Diancie_303
# 3344 "data/maps/Hub1/scripts.pory"
	case ITEM_BARBARACITE, Hub_Event_Script_Diancie_304
# 3359 "data/maps/Hub1/scripts.pory"
	case ITEM_DRAGALGITE, Hub_Event_Script_Diancie_305
# 3374 "data/maps/Hub1/scripts.pory"
	case ITEM_HAWLUCHANITE, Hub_Event_Script_Diancie_306
# 3389 "data/maps/Hub1/scripts.pory"
	case ITEM_DRAMPANITE, Hub_Event_Script_Diancie_307
# 3404 "data/maps/Hub1/scripts.pory"
	case ITEM_FALINKSITE, Hub_Event_Script_Diancie_308
# 3419 "data/maps/Hub1/scripts.pory"
	case ITEM_RAICHUNITE_X, Hub_Event_Script_Diancie_309
# 3434 "data/maps/Hub1/scripts.pory"
	case ITEM_RAICHUNITE_Y, Hub_Event_Script_Diancie_310
# 3449 "data/maps/Hub1/scripts.pory"
	case ITEM_CHIMECHITE, Hub_Event_Script_Diancie_311
# 3464 "data/maps/Hub1/scripts.pory"
	case ITEM_STARAPTITE, Hub_Event_Script_Diancie_312
# 3479 "data/maps/Hub1/scripts.pory"
	case ITEM_GOLURKITE, Hub_Event_Script_Diancie_313
# 3494 "data/maps/Hub1/scripts.pory"
	case ITEM_MEOWSTICITE, Hub_Event_Script_Diancie_314
# 3509 "data/maps/Hub1/scripts.pory"
	case ITEM_CRABOMINITE, Hub_Event_Script_Diancie_315
# 3524 "data/maps/Hub1/scripts.pory"
	case ITEM_GOLISOPITE, Hub_Event_Script_Diancie_316
# 3539 "data/maps/Hub1/scripts.pory"
	case ITEM_SCOVILLAINITE, Hub_Event_Script_Diancie_317
# 3554 "data/maps/Hub1/scripts.pory"
	case ITEM_GLIMMORANITE, Hub_Event_Script_Diancie_318
# 3569 "data/maps/Hub1/scripts.pory"
	case ITEM_BAXCALIBRITE, Hub_Event_Script_Diancie_319
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_242:
# 2463 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_78
# 2466 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_NEW_MEGA_BUYABLE
	goto Hub_Event_Script_Diancie_241

Hub_Event_Script_Diancie_246:
# 2475 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2476 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_320
# 2486 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_247:
# 2490 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2491 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_323
# 2501 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_248:
# 2505 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2506 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_326
# 2516 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_249:
# 2520 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2521 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_329
# 2531 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_250:
# 2535 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2536 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_332
# 2546 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_251:
# 2550 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2551 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_335
# 2561 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_252:
# 2565 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2566 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_338
# 2576 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_253:
# 2580 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2581 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_341
# 2591 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_254:
# 2595 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2596 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_344
# 2606 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_255:
# 2610 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2611 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_347
# 2621 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_256:
# 2625 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2626 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_350
# 2636 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_257:
# 2640 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2641 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_353
# 2651 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_258:
# 2655 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2656 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_356
# 2666 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_259:
# 2670 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2671 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_359
# 2681 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_260:
# 2685 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2686 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_362
# 2696 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_261:
# 2700 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2701 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_365
# 2711 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_262:
# 2715 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2716 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_368
# 2726 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_263:
# 2730 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2731 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_371
# 2741 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_264:
# 2745 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2746 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_374
# 2756 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_265:
# 2760 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2761 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_377
# 2771 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_266:
# 2775 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2776 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_380
# 2786 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_267:
# 2790 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2791 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_383
# 2801 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_268:
# 2805 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2806 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_386
# 2816 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_269:
# 2820 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2821 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_389
# 2831 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_270:
# 2835 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2836 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_392
# 2846 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_271:
# 2850 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2851 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_395
# 2861 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_272:
# 2865 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2866 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_398
# 2876 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_273:
# 2880 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2881 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_401
# 2891 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_274:
# 2895 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2896 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_404
# 2906 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_275:
# 2910 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2911 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_407
# 2921 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_276:
# 2925 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2926 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_410
# 2936 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_277:
# 2940 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2941 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_413
# 2951 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_278:
# 2955 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2956 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_416
# 2966 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_279:
# 2970 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2971 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_419
# 2981 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_280:
# 2985 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 2986 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_422
# 2996 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_281:
# 3000 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3001 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_425
# 3011 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_282:
# 3015 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3016 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_428
# 3026 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_283:
# 3030 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3031 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_431
# 3041 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_284:
# 3045 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3046 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_434
# 3056 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_285:
# 3060 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3061 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_437
# 3071 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_286:
# 3075 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3076 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_440
# 3086 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_287:
# 3090 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3091 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_443
# 3101 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_288:
# 3105 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3106 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_446
# 3116 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_289:
# 3120 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3121 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_449
# 3131 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_290:
# 3135 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3136 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_452
# 3146 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_291:
# 3150 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3151 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_455
# 3161 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_292:
# 3165 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3166 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_458
# 3176 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_293:
# 3180 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3181 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_461
# 3191 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_294:
# 3195 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3196 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_464
# 3206 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_295:
# 3210 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3211 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_467
# 3221 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_296:
# 3225 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3226 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_470
# 3236 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_297:
# 3240 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3241 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_473
# 3251 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_298:
# 3255 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3256 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_476
# 3266 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_299:
# 3270 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3271 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_479
# 3281 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_300:
# 3285 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3286 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_482
# 3296 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_301:
# 3300 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3301 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_485
# 3311 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_302:
# 3315 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3316 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_488
# 3326 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_303:
# 3330 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3331 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_491
# 3341 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_304:
# 3345 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3346 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_494
# 3356 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_305:
# 3360 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3361 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_497
# 3371 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_306:
# 3375 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3376 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_500
# 3386 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_307:
# 3390 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3391 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_503
# 3401 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_308:
# 3405 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3406 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_506
# 3416 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_309:
# 3420 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3421 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_509
# 3431 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_310:
# 3435 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3436 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_512
# 3446 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_311:
# 3450 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3451 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_515
# 3461 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_312:
# 3465 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3466 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_518
# 3476 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_313:
# 3480 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3481 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_521
# 3491 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_314:
# 3495 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3496 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_524
# 3506 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_315:
# 3510 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3511 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_527
# 3521 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_316:
# 3525 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3526 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_530
# 3536 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_317:
# 3540 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3541 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_533
# 3551 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_318:
# 3555 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3556 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_536
# 3566 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_319:
# 3570 "data/maps/Hub1/scripts.pory"
	checkcoins VAR_RESULT
# 3571 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 1000
	goto_if_ge Hub_Event_Script_Diancie_539
# 3581 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_81
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_320:
# 2477 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_VENUSAURITE_UNLOCKED
# 2478 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_VENUSAURITE_BUYABLE
# 2479 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_VENUSAURITE, 1
# 2480 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2481 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2482 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2483 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_80
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_323:
# 2492 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHARIZARDITE_Y_UNLOCKED
# 2493 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHARIZARDITE_Y_BUYABLE
# 2494 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHARIZARDITE_Y, 1
# 2495 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2496 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2497 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2498 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_82
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_326:
# 2507 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BLASTOISINITE_UNLOCKED
# 2508 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BLASTOISINITE_BUYABLE
# 2509 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BLASTOISINITE, 1
# 2510 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2511 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2512 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2513 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_83
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_329:
# 2522 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BEEDRILLITE_UNLOCKED
# 2523 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BEEDRILLITE_BUYABLE
# 2524 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BEEDRILLITE, 1
# 2525 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2526 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2527 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2528 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_84
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_332:
# 2537 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_PIDGEOTITE_UNLOCKED
# 2538 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_PIDGEOTITE_BUYABLE
# 2539 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_PIDGEOTITE, 1
# 2540 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2541 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2542 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2543 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_85
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_335:
# 2552 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ALAKAZITE_UNLOCKED
# 2553 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ALAKAZITE_BUYABLE
# 2554 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ALAKAZITE, 1
# 2555 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2556 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2557 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2558 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_86
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_338:
# 2567 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SLOWBRONITE_UNLOCKED
# 2568 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SLOWBRONITE_BUYABLE
# 2569 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SLOWBRONITE, 1
# 2570 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2571 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2572 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2573 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_87
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_341:
# 2582 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GENGARITE_UNLOCKED
# 2583 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GENGARITE_BUYABLE
# 2584 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GENGARITE, 1
# 2585 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2586 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2587 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2588 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_88
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_344:
# 2597 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_KANGASKHANITE_UNLOCKED
# 2598 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_KANGASKHANITE_BUYABLE
# 2599 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_KANGASKHANITE, 1
# 2600 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2601 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2602 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2603 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_89
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_347:
# 2612 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_PINSIRITE_UNLOCKED
# 2613 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_PINSIRITE_BUYABLE
# 2614 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_PINSIRITE, 1
# 2615 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2616 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2617 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2618 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_90
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_350:
# 2627 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GYARADOSITE_UNLOCKED
# 2628 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GYARADOSITE_BUYABLE
# 2629 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GYARADOSITE, 1
# 2630 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2631 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2632 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2633 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_91
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_353:
# 2642 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_AERODACTYLITE_UNLOCKED
# 2643 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_AERODACTYLITE_BUYABLE
# 2644 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_AERODACTYLITE, 1
# 2645 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2646 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2647 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2648 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_92
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_356:
# 2657 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_AMPHAROSITE_UNLOCKED
# 2658 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_AMPHAROSITE_BUYABLE
# 2659 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_AMPHAROSITE, 1
# 2660 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2661 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2662 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2663 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_93
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_359:
# 2672 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_STEELIXITE_UNLOCKED
# 2673 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_STEELIXITE_BUYABLE
# 2674 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_STEELIXITE, 1
# 2675 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2676 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2677 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2678 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_94
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_362:
# 2687 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCIZORITE_UNLOCKED
# 2688 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCIZORITE_BUYABLE
# 2689 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCIZORITE, 1
# 2690 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2691 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2692 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2693 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_95
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_365:
# 2702 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_HERACRONITE_UNLOCKED
# 2703 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_HERACRONITE_BUYABLE
# 2704 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_HERACRONITE, 1
# 2705 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2706 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2707 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2708 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_96
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_368:
# 2717 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_HOUNDOOMINITE_UNLOCKED
# 2718 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_HOUNDOOMINITE_BUYABLE
# 2719 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_HOUNDOOMINITE, 1
# 2720 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2721 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2722 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2723 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_97
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_371:
# 2732 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_TYRANITARITE_UNLOCKED
# 2733 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_TYRANITARITE_BUYABLE
# 2734 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TYRANITARITE, 1
# 2735 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2736 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2737 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2738 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_98
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_374:
# 2747 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCEPTILITE_UNLOCKED
# 2748 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCEPTILITE_BUYABLE
# 2749 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCEPTILITE, 1
# 2750 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2751 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2752 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2753 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_99
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_377:
# 2762 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BLAZIKENITE_UNLOCKED
# 2763 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BLAZIKENITE_BUYABLE
# 2764 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BLAZIKENITE, 1
# 2765 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2766 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2767 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2768 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_100
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_380:
# 2777 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SWAMPERTITE_UNLOCKED
# 2778 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SWAMPERTITE_BUYABLE
# 2779 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SWAMPERTITE, 1
# 2780 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2781 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2782 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2783 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_101
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_383:
# 2792 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GARDEVOIRITE_UNLOCKED
# 2793 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GARDEVOIRITE_BUYABLE
# 2794 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GARDEVOIRITE, 1
# 2795 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2796 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2797 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2798 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_102
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_386:
# 2807 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SABLENITE_UNLOCKED
# 2808 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SABLENITE_BUYABLE
# 2809 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SABLENITE, 1
# 2810 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2811 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2812 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2813 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_103
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_389:
# 2822 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MAWILITE_UNLOCKED
# 2823 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MAWILITE_BUYABLE
# 2824 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MAWILITE, 1
# 2825 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2826 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2827 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2828 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_104
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_392:
# 2837 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_AGGRONITE_UNLOCKED
# 2838 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_AGGRONITE_BUYABLE
# 2839 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_AGGRONITE, 1
# 2840 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2841 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2842 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2843 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_105
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_395:
# 2852 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MEDICHAMITE_UNLOCKED
# 2853 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MEDICHAMITE_BUYABLE
# 2854 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEDICHAMITE, 1
# 2855 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2856 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2857 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2858 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_106
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_398:
# 2867 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MANECTITE_UNLOCKED
# 2868 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MANECTITE_BUYABLE
# 2869 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MANECTITE, 1
# 2870 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2871 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2872 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2873 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_107
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_401:
# 2882 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SHARPEDONITE_UNLOCKED
# 2883 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SHARPEDONITE_BUYABLE
# 2884 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SHARPEDONITE, 1
# 2885 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2886 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2887 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2888 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_108
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_404:
# 2897 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CAMERUPTITE_UNLOCKED
# 2898 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CAMERUPTITE_BUYABLE
# 2899 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CAMERUPTITE, 1
# 2900 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2901 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2902 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2903 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_109
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_407:
# 2912 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ALTARIANITE_UNLOCKED
# 2913 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ALTARIANITE_BUYABLE
# 2914 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ALTARIANITE, 1
# 2915 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2916 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2917 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2918 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_110
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_410:
# 2927 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BANETTITE_UNLOCKED
# 2928 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BANETTITE_BUYABLE
# 2929 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BANETTITE, 1
# 2930 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2931 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2932 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2933 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_111
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_413:
# 2942 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ABSOLITE_UNLOCKED
# 2943 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ABSOLITE_BUYABLE
# 2944 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ABSOLITE, 1
# 2945 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2946 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2947 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2948 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_112
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_416:
# 2957 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GLALITITE_UNLOCKED
# 2958 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GLALITITE_BUYABLE
# 2959 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GLALITITE, 1
# 2960 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2961 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2962 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2963 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_113
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_419:
# 2972 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SALAMENCITE_UNLOCKED
# 2973 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SALAMENCITE_BUYABLE
# 2974 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SALAMENCITE, 1
# 2975 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2976 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2977 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2978 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_114
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_422:
# 2987 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_LOPUNNITE_UNLOCKED
# 2988 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_LOPUNNITE_BUYABLE
# 2989 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LOPUNNITE, 1
# 2990 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 2991 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 2992 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 2993 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_115
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_425:
# 3002 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GARCHOMPITE_UNLOCKED
# 3003 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GARCHOMPITE_BUYABLE
# 3004 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GARCHOMPITE, 1
# 3005 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3006 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3007 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3008 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_116
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_428:
# 3017 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_LUCARIONITE_UNLOCKED
# 3018 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_LUCARIONITE_BUYABLE
# 3019 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUCARIONITE, 1
# 3020 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3021 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3022 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3023 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_117
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_431:
# 3032 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_ABOMASITE_UNLOCKED
# 3033 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_ABOMASITE_BUYABLE
# 3034 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ABOMASITE, 1
# 3035 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3036 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3037 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3038 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_118
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_434:
# 3047 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GALLADITE_UNLOCKED
# 3048 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GALLADITE_BUYABLE
# 3049 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GALLADITE, 1
# 3050 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3051 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3052 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3053 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_119
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_437:
# 3062 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CLEFABLITE_UNLOCKED
# 3063 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CLEFABLITE_BUYABLE
# 3064 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CLEFABLITE, 1
# 3065 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3066 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3067 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3068 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_120
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_440:
# 3077 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_VICTREEBELITE_UNLOCKED
# 3078 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_VICTREEBELITE_BUYABLE
# 3079 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_VICTREEBELITE, 1
# 3080 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3081 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3082 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3083 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_121
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_443:
# 3092 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_STARMINITE_UNLOCKED
# 3093 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_STARMINITE_BUYABLE
# 3094 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_STARMINITE, 1
# 3095 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3096 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3097 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3098 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_122
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_446:
# 3107 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DRAGONINITE_UNLOCKED
# 3108 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DRAGONINITE_BUYABLE
# 3109 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DRAGONINITE, 1
# 3110 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3111 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3112 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3113 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_123
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_449:
# 3122 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MEGANIUMITE_UNLOCKED
# 3123 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MEGANIUMITE_BUYABLE
# 3124 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEGANIUMITE, 1
# 3125 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3126 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3127 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3128 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_124
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_452:
# 3137 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_FERALIGITE_UNLOCKED
# 3138 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_FERALIGITE_BUYABLE
# 3139 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_FERALIGITE, 1
# 3140 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3141 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3142 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3143 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_125
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_455:
# 3152 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SKARMORITE_UNLOCKED
# 3153 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SKARMORITE_BUYABLE
# 3154 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SKARMORITE, 1
# 3155 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3156 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3157 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3158 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_126
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_458:
# 3167 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_FROSLASSITE_UNLOCKED
# 3168 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_FROSLASSITE_BUYABLE
# 3169 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_FROSLASSITE, 1
# 3170 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3171 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3172 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3173 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_127
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_461:
# 3182 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_EMBOARITE_UNLOCKED
# 3183 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_EMBOARITE_BUYABLE
# 3184 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_EMBOARITE, 1
# 3185 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3186 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3187 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3188 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_128
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_464:
# 3197 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_EXCADRITE_UNLOCKED
# 3198 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_EXCADRITE_BUYABLE
# 3199 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_EXCADRITE, 1
# 3200 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3201 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3202 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3203 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_129
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_467:
# 3212 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCOLIPITE_UNLOCKED
# 3213 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCOLIPITE_BUYABLE
# 3214 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCOLIPITE, 1
# 3215 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3216 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3217 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3218 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_130
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_470:
# 3227 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCRAFTINITE_UNLOCKED
# 3228 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCRAFTINITE_BUYABLE
# 3229 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCRAFTINITE, 1
# 3230 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3231 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3232 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3233 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_131
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_473:
# 3242 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_EELEKTROSSITE_UNLOCKED
# 3243 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_EELEKTROSSITE_BUYABLE
# 3244 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_EELEKTROSSITE, 1
# 3245 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3246 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3247 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3248 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_132
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_476:
# 3257 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHANDELURITE_UNLOCKED
# 3258 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHANDELURITE_BUYABLE
# 3259 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHANDELURITE, 1
# 3260 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3261 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3262 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3263 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_133
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_479:
# 3272 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHESNAUGHTITE_UNLOCKED
# 3273 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHESNAUGHTITE_BUYABLE
# 3274 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHESNAUGHTITE, 1
# 3275 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3276 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3277 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3278 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_134
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_482:
# 3287 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DELPHOXITE_UNLOCKED
# 3288 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DELPHOXITE_BUYABLE
# 3289 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DELPHOXITE, 1
# 3290 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3291 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3292 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3293 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_135
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_485:
# 3302 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GRENINJITE_UNLOCKED
# 3303 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GRENINJITE_BUYABLE
# 3304 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GRENINJITE, 1
# 3305 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3306 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3307 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3308 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_136
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_488:
# 3317 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_PYROARITE_UNLOCKED
# 3318 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_PYROARITE_BUYABLE
# 3319 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_PYROARITE, 1
# 3320 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3321 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3322 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3323 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_137
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_491:
# 3332 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MALAMARITE_UNLOCKED
# 3333 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MALAMARITE_BUYABLE
# 3334 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MALAMARITE, 1
# 3335 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3336 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3337 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3338 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_138
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_494:
# 3347 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BARBARACITE_UNLOCKED
# 3348 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BARBARACITE_BUYABLE
# 3349 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BARBARACITE, 1
# 3350 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3351 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3352 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3353 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_139
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_497:
# 3362 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DRAGALGITE_UNLOCKED
# 3363 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DRAGALGITE_BUYABLE
# 3364 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DRAGALGITE, 1
# 3365 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3366 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3367 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3368 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_140
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_500:
# 3377 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_HAWLUCHANITE_UNLOCKED
# 3378 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_HAWLUCHANITE_BUYABLE
# 3379 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_HAWLUCHANITE, 1
# 3380 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3381 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3382 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3383 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_141
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_503:
# 3392 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_DRAMPANITE_UNLOCKED
# 3393 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_DRAMPANITE_BUYABLE
# 3394 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_DRAMPANITE, 1
# 3395 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3396 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3397 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3398 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_142
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_506:
# 3407 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_FALINKSITE_UNLOCKED
# 3408 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_FALINKSITE_BUYABLE
# 3409 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_FALINKSITE, 1
# 3410 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3411 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3412 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3413 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_143
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_509:
# 3422 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_RAICHUNITE_X_UNLOCKED
# 3423 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_RAICHUNITE_X_BUYABLE
# 3424 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RAICHUNITE_X, 1
# 3425 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3426 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3427 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3428 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_144
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_512:
# 3437 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_RAICHUNITE_Y_UNLOCKED
# 3438 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_RAICHUNITE_Y_BUYABLE
# 3439 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_RAICHUNITE_Y, 1
# 3440 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3441 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3442 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3443 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_145
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_515:
# 3452 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CHIMECHITE_UNLOCKED
# 3453 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CHIMECHITE_BUYABLE
# 3454 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CHIMECHITE, 1
# 3455 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3456 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3457 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3458 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_146
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_518:
# 3467 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_STARAPTITE_UNLOCKED
# 3468 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_STARAPTITE_BUYABLE
# 3469 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_STARAPTITE, 1
# 3470 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3471 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3472 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3473 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_147
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_521:
# 3482 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GOLURKITE_UNLOCKED
# 3483 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GOLURKITE_BUYABLE
# 3484 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GOLURKITE, 1
# 3485 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3486 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3487 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3488 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_148
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_524:
# 3497 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_MEOWSTICITE_UNLOCKED
# 3498 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_MEOWSTICITE_BUYABLE
# 3499 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MEOWSTICITE, 1
# 3500 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3501 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3502 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3503 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_149
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_527:
# 3512 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_CRABOMINITE_UNLOCKED
# 3513 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_CRABOMINITE_BUYABLE
# 3514 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_CRABOMINITE, 1
# 3515 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3516 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3517 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3518 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_150
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_530:
# 3527 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GOLISOPITE_UNLOCKED
# 3528 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GOLISOPITE_BUYABLE
# 3529 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GOLISOPITE, 1
# 3530 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3531 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3532 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3533 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_151
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_533:
# 3542 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_SCOVILLAINITE_UNLOCKED
# 3543 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_SCOVILLAINITE_BUYABLE
# 3544 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SCOVILLAINITE, 1
# 3545 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3546 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3547 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3548 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_152
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_536:
# 3557 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_GLIMMORANITE_UNLOCKED
# 3558 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_GLIMMORANITE_BUYABLE
# 3559 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_GLIMMORANITE, 1
# 3560 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3561 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3562 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3563 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_153
	goto Hub_Event_Script_Diancie_237

Hub_Event_Script_Diancie_539:
# 3572 "data/maps/Hub1/scripts.pory"
	setflag FLAG_ITEM_BAXCALIBRITE_UNLOCKED
# 3573 "data/maps/Hub1/scripts.pory"
	clearflag FLAG_ITEM_BAXCALIBRITE_BUYABLE
# 3574 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BAXCALIBRITE, 1
# 3575 "data/maps/Hub1/scripts.pory"
	removecoins 1000
# 3576 "data/maps/Hub1/scripts.pory"
	updatecoinsbox 0, 0
# 3577 "data/maps/Hub1/scripts.pory"
	playse SE_SHOP
# 3578 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Diancie_Text_154
	goto Hub_Event_Script_Diancie_237


Hub_Event_Script_Marowak::
# 3599 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3600 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Marowak_Text_0
# 3601 "data/maps/Hub1/scripts.pory"
	closemessage
# 3602 "data/maps/Hub1/scripts.pory"
	applymovement 1, Hub_Event_Script_Marowak_Movement_0
	return


Hub_Event_Script_Chimecho::
# 3612 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_0, type = MSGBOX_YESNO
# 3613 "data/maps/Hub1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Hub_Event_Script_Chimecho_1
# 3652 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_18
# 3653 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Chimecho_1:
# 3614 "data/maps/Hub1/scripts.pory"
	closemessage
# 3615 "data/maps/Hub1/scripts.pory"
backtocharmslist:
# 3616 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_1, ITEM_SHINY_STARTER_CHARM
# 3617 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_2, ITEM_LUMP_SUM_CHARM
# 3618 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_3, ITEM_BERRY_PACK_CHARM
# 3619 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_TINTED_CHARM_STARTER_UNLOCKED, Hub_Event_Script_Chimecho_5
Hub_Event_Script_Chimecho_4:
# 3620 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_NORMAL_CHARM_STARTER_UNLOCKED, Hub_Event_Script_Chimecho_8
Hub_Event_Script_Chimecho_7:
# 3621 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_MINTY_CHARM_STARTER_UNLOCKED, Hub_Event_Script_Chimecho_11
Hub_Event_Script_Chimecho_10:
# 3622 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_BRUXISH_FLOSS_CHARM_UNLOCKED, Hub_Event_Script_Chimecho_14
Hub_Event_Script_Chimecho_13:
# 3623 "data/maps/Hub1/scripts.pory"
	goto_if_set FLAG_UNOWN_BUDDY_CHARM_UNLOCKED, Hub_Event_Script_Chimecho_17
Hub_Event_Script_Chimecho_16:
# 3625 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, FALSE, 8, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 3626 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 3627 "data/maps/Hub1/scripts.pory"
	case MULTI_B_PRESSED, Hub_Event_Script_Chimecho_21
# 3631 "data/maps/Hub1/scripts.pory"
	case ITEM_SHINY_STARTER_CHARM, Hub_Event_Script_Chimecho_22
# 3633 "data/maps/Hub1/scripts.pory"
	case ITEM_LUMP_SUM_CHARM, Hub_Event_Script_Chimecho_23
# 3635 "data/maps/Hub1/scripts.pory"
	case ITEM_BERRY_PACK_CHARM, Hub_Event_Script_Chimecho_24
# 3637 "data/maps/Hub1/scripts.pory"
	case ITEM_TINTED_CHARM, Hub_Event_Script_Chimecho_25
# 3639 "data/maps/Hub1/scripts.pory"
	case ITEM_NORMAL_CHARM, Hub_Event_Script_Chimecho_26
# 3641 "data/maps/Hub1/scripts.pory"
	case ITEM_MINTY_CHARM, Hub_Event_Script_Chimecho_27
# 3643 "data/maps/Hub1/scripts.pory"
	case ITEM_BRUXISH_FLOSS_CHARM, Hub_Event_Script_Chimecho_28
# 3645 "data/maps/Hub1/scripts.pory"
	case ITEM_UNOWN_BUDDY_CHARM, Hub_Event_Script_Chimecho_29
Hub_Event_Script_Chimecho_19:
# 3648 "data/maps/Hub1/scripts.pory"
	closemessage
# 3649 "data/maps/Hub1/scripts.pory"
	goto backtocharmslist
	return

Hub_Event_Script_Chimecho_5:
# 3619 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_4, ITEM_TINTED_CHARM
	goto Hub_Event_Script_Chimecho_4

Hub_Event_Script_Chimecho_8:
# 3620 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_5, ITEM_NORMAL_CHARM
	goto Hub_Event_Script_Chimecho_7

Hub_Event_Script_Chimecho_11:
# 3621 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_6, ITEM_MINTY_CHARM
	goto Hub_Event_Script_Chimecho_10

Hub_Event_Script_Chimecho_14:
# 3622 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_7, ITEM_BRUXISH_FLOSS_CHARM
	goto Hub_Event_Script_Chimecho_13

Hub_Event_Script_Chimecho_17:
# 3623 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_8, ITEM_UNOWN_BUDDY_CHARM
	goto Hub_Event_Script_Chimecho_16

Hub_Event_Script_Chimecho_21:
# 3628 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_9
# 3629 "data/maps/Hub1/scripts.pory"
	releaseall
	end

Hub_Event_Script_Chimecho_22:
# 3632 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_10
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_23:
# 3634 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_11
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_24:
# 3636 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_12
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_25:
# 3638 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_13
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_26:
# 3640 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_14
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_27:
# 3642 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_15
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_28:
# 3644 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_16
	goto Hub_Event_Script_Chimecho_19

Hub_Event_Script_Chimecho_29:
# 3646 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Chimecho_Text_17
	goto Hub_Event_Script_Chimecho_19


GiveStarterCharm::
# 3659 "data/maps/Hub1/scripts.pory"
	special BufferStarterCharms
# 3660 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_SHINY_STARTER_CHARM
	goto_if_eq GiveStarterCharm_2
# 3660 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_SHINY_STARTER_CHARM
	goto_if_eq GiveStarterCharm_2
# 3660 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_SHINY_STARTER_CHARM
	goto_if_eq GiveStarterCharm_2
GiveStarterCharm_1:
# 3663 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_LUMP_SUM_CHARM
	goto_if_eq GiveStarterCharm_9
# 3663 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_LUMP_SUM_CHARM
	goto_if_eq GiveStarterCharm_9
# 3663 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_LUMP_SUM_CHARM
	goto_if_eq GiveStarterCharm_9
GiveStarterCharm_8:
# 3666 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_BERRY_PACK_CHARM
	goto_if_eq GiveStarterCharm_16
# 3666 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_BERRY_PACK_CHARM
	goto_if_eq GiveStarterCharm_16
# 3666 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_BERRY_PACK_CHARM
	goto_if_eq GiveStarterCharm_16
GiveStarterCharm_15:
# 3669 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_TINTED_CHARM
	goto_if_eq GiveStarterCharm_23
# 3669 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_TINTED_CHARM
	goto_if_eq GiveStarterCharm_23
# 3669 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_TINTED_CHARM
	goto_if_eq GiveStarterCharm_23
GiveStarterCharm_22:
# 3672 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_NORMAL_CHARM
	goto_if_eq GiveStarterCharm_30
# 3672 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_NORMAL_CHARM
	goto_if_eq GiveStarterCharm_30
# 3672 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_NORMAL_CHARM
	goto_if_eq GiveStarterCharm_30
GiveStarterCharm_29:
# 3675 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_MINTY_CHARM
	goto_if_eq GiveStarterCharm_37
# 3675 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_MINTY_CHARM
	goto_if_eq GiveStarterCharm_37
# 3675 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_MINTY_CHARM
	goto_if_eq GiveStarterCharm_37
GiveStarterCharm_36:
# 3678 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_BRUXISH_FLOSS_CHARM
	goto_if_eq GiveStarterCharm_44
# 3678 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_BRUXISH_FLOSS_CHARM
	goto_if_eq GiveStarterCharm_44
# 3678 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_BRUXISH_FLOSS_CHARM
	goto_if_eq GiveStarterCharm_44
GiveStarterCharm_43:
# 3681 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8001, ITEM_UNOWN_BUDDY_CHARM
	goto_if_eq GiveStarterCharm_51
# 3681 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8002, ITEM_UNOWN_BUDDY_CHARM
	goto_if_eq GiveStarterCharm_51
# 3681 "data/maps/Hub1/scripts.pory"
	compare VAR_0x8003, ITEM_UNOWN_BUDDY_CHARM
	goto_if_eq GiveStarterCharm_51
GiveStarterCharm_50:
# 3684 "data/maps/Hub1/scripts.pory"
	dynmultistack 0, 0, TRUE, 3, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 3685 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 3686 "data/maps/Hub1/scripts.pory"
	case ITEM_SHINY_STARTER_CHARM, GiveStarterCharm_59
# 3694 "data/maps/Hub1/scripts.pory"
	case ITEM_LUMP_SUM_CHARM, GiveStarterCharm_60
# 3698 "data/maps/Hub1/scripts.pory"
	case ITEM_BERRY_PACK_CHARM, GiveStarterCharm_61
# 3703 "data/maps/Hub1/scripts.pory"
	case ITEM_TINTED_CHARM, GiveStarterCharm_62
# 3705 "data/maps/Hub1/scripts.pory"
	case ITEM_NORMAL_CHARM, GiveStarterCharm_63
# 3707 "data/maps/Hub1/scripts.pory"
	case ITEM_MINTY_CHARM, GiveStarterCharm_64
# 3709 "data/maps/Hub1/scripts.pory"
	case ITEM_BRUXISH_FLOSS_CHARM, GiveStarterCharm_65
# 3711 "data/maps/Hub1/scripts.pory"
	case ITEM_UNOWN_BUDDY_CHARM, GiveStarterCharm_66
GiveStarterCharm_57:
# 3716 "data/maps/Hub1/scripts.pory"
	msgbox GiveStarterCharm_Text_0
# 3717 "data/maps/Hub1/scripts.pory"
	waitmessage
	return

GiveStarterCharm_2:
# 3661 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_1, ITEM_SHINY_STARTER_CHARM
	goto GiveStarterCharm_1

GiveStarterCharm_9:
# 3664 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_2, ITEM_LUMP_SUM_CHARM
	goto GiveStarterCharm_8

GiveStarterCharm_16:
# 3667 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_3, ITEM_BERRY_PACK_CHARM
	goto GiveStarterCharm_15

GiveStarterCharm_23:
# 3670 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_4, ITEM_TINTED_CHARM
	goto GiveStarterCharm_22

GiveStarterCharm_30:
# 3673 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_5, ITEM_NORMAL_CHARM
	goto GiveStarterCharm_29

GiveStarterCharm_37:
# 3676 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_6, ITEM_MINTY_CHARM
	goto GiveStarterCharm_36

GiveStarterCharm_44:
# 3679 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_7, ITEM_BRUXISH_FLOSS_CHARM
	goto GiveStarterCharm_43

GiveStarterCharm_51:
# 3682 "data/maps/Hub1/scripts.pory"
	dynmultipush Hub_Event_Script_Chimecho_Text_8, ITEM_UNOWN_BUDDY_CHARM
	goto GiveStarterCharm_50

GiveStarterCharm_59:
# 3687 "data/maps/Hub1/scripts.pory"
	setflag FLAG_NEXT_GIVE_MON_SHINY
# 3688 "data/maps/Hub1/scripts.pory"
	special ZeroPlayerPartyMons
# 3689 "data/maps/Hub1/scripts.pory"
	special GiveSavedStarter
# 3690 "data/maps/Hub1/scripts.pory"
	special UpdatePlayerSprite
# 3691 "data/maps/Hub1/scripts.pory"
	special UpdateTransformedPlayerPalette
# 3692 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SHINY_STARTER_CHARM, 1
# 3693 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_LEVEL_UP
	goto GiveStarterCharm_57

GiveStarterCharm_60:
# 3695 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUMP_SUM_CHARM, 1
# 3696 "data/maps/Hub1/scripts.pory"
	addmoney 1500
# 3697 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
	goto GiveStarterCharm_57

GiveStarterCharm_61:
# 3699 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BERRY_PACK_CHARM, 1
# 3700 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 1
# 3701 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
# 3702 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto GiveStarterCharm_57

GiveStarterCharm_62:
# 3704 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_TINTED_CHARM, 1
	goto GiveStarterCharm_57

GiveStarterCharm_63:
# 3706 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_NORMAL_CHARM, 1
	goto GiveStarterCharm_57

GiveStarterCharm_64:
# 3708 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_MINTY_CHARM, 1
	goto GiveStarterCharm_57

GiveStarterCharm_65:
# 3710 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_BRUXISH_FLOSS_CHARM, 1
	goto GiveStarterCharm_57

GiveStarterCharm_66:
# 3712 "data/maps/Hub1/scripts.pory"
	giveitem ITEM_UNOWN_BUDDY_CHARM, 1
# 3713 "data/maps/Hub1/scripts.pory"
	givemon SPECIES_UNOWN, 14
	goto GiveStarterCharm_57


Hub_Event_Script_Golem::
# 3723 "data/maps/Hub1/scripts.pory"
	lockall
# 3724 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3725 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_MEGA_SHOP_UNLOCKED, Hub_Event_Script_Golem_2
# 3728 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Golem_Text_1
Hub_Event_Script_Golem_1:
# 3730 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3731 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Golem_2:
# 3726 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Golem_Text_0
	goto Hub_Event_Script_Golem_1


Hub_Event_Script_Togedemaru::
# 3735 "data/maps/Hub1/scripts.pory"
	lockall
# 3736 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3737 "data/maps/Hub1/scripts.pory"
	random 2
# 3738 "data/maps/Hub1/scripts.pory"
	switch VAR_RESULT
# 3739 "data/maps/Hub1/scripts.pory"
	case 0, Hub_Event_Script_Togedemaru_3
# 3741 "data/maps/Hub1/scripts.pory"
	case 1, Hub_Event_Script_Togedemaru_4
Hub_Event_Script_Togedemaru_1:
# 3745 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3746 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Togedemaru_3:
# 3740 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Togedemaru_Text_0
	goto Hub_Event_Script_Togedemaru_1

Hub_Event_Script_Togedemaru_4:
# 3742 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Togedemaru_Text_1
	goto Hub_Event_Script_Togedemaru_1


Hub_Event_Script_Klang::
# 3750 "data/maps/Hub1/scripts.pory"
	lockall
# 3751 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3752 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Klang_Text_0
# 3753 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3754 "data/maps/Hub1/scripts.pory"
	releaseall
	return


Hub_Event_Script_Bruxish::
# 3758 "data/maps/Hub1/scripts.pory"
	lockall
# 3759 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3760 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_BRUXISH_FLOSS_CHARM_UNLOCKED, Hub_Event_Script_Bruxish_2
# 3768 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Bruxish_Text_2
# 3769 "data/maps/Hub1/scripts.pory"
	waitmessage
Hub_Event_Script_Bruxish_1:
# 3771 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Bruxish_2:
# 3761 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Bruxish_Text_0
# 3762 "data/maps/Hub1/scripts.pory"
	setflag FLAG_BRUXISH_FLOSS_CHARM_UNLOCKED
# 3763 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_EVOLVED
# 3764 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Bruxish_Text_1
# 3765 "data/maps/Hub1/scripts.pory"
	waitfanfare
# 3766 "data/maps/Hub1/scripts.pory"
	waitmessage
	goto Hub_Event_Script_Bruxish_1


Hub_Event_Script_Simisage::
# 3775 "data/maps/Hub1/scripts.pory"
	lockall
# 3776 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3777 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Simisage_Text_0
# 3778 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3779 "data/maps/Hub1/scripts.pory"
	releaseall
	return


Hub_Event_Script_Woobat::
# 3783 "data/maps/Hub1/scripts.pory"
	lockall
# 3784 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3785 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Woobat_Text_0
# 3786 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3787 "data/maps/Hub1/scripts.pory"
	releaseall
	return


Hub_Event_Script_Unown::
# 3792 "data/maps/Hub1/scripts.pory"
	lockall
# 3793 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3794 "data/maps/Hub1/scripts.pory"
	goto_if_unset FLAG_UNOWN_BUDDY_CHARM_UNLOCKED, Hub_Event_Script_Unown_2
# 3802 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Unown_Text_2
# 3803 "data/maps/Hub1/scripts.pory"
	waitmessage
Hub_Event_Script_Unown_1:
# 3805 "data/maps/Hub1/scripts.pory"
	releaseall
	return

Hub_Event_Script_Unown_2:
# 3795 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Unown_Text_0
# 3796 "data/maps/Hub1/scripts.pory"
	setflag FLAG_UNOWN_BUDDY_CHARM_UNLOCKED
# 3797 "data/maps/Hub1/scripts.pory"
	playfanfare MUS_EVOLVED
# 3798 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Unown_Text_1
# 3799 "data/maps/Hub1/scripts.pory"
	waitfanfare
# 3800 "data/maps/Hub1/scripts.pory"
	waitmessage
	goto Hub_Event_Script_Unown_1


Hub_Event_Script_Smoliv::
# 3809 "data/maps/Hub1/scripts.pory"
	lockall
# 3810 "data/maps/Hub1/scripts.pory"
	faceplayer
# 3811 "data/maps/Hub1/scripts.pory"
	msgbox Hub_Event_Script_Smoliv_Text_0
# 3812 "data/maps/Hub1/scripts.pory"
	waitmessage
# 3813 "data/maps/Hub1/scripts.pory"
	releaseall
	return


# 452 "data/maps/Hub1/scripts.pory"
Hub_Event_Script_Birch_Movement_0:
# 453 "data/maps/Hub1/scripts.pory"
	walk_down
# 454 "data/maps/Hub1/scripts.pory"
	face_left
	step_end

# 461 "data/maps/Hub1/scripts.pory"
Hub_Event_Script_Birch_Movement_1:
# 462 "data/maps/Hub1/scripts.pory"
	walk_up
# 463 "data/maps/Hub1/scripts.pory"
	walk_left
# 464 "data/maps/Hub1/scripts.pory"
	face_right
	step_end

# 467 "data/maps/Hub1/scripts.pory"
Hub_Event_Script_Birch_Movement_2:
# 468 "data/maps/Hub1/scripts.pory"
	walk_up
# 468 "data/maps/Hub1/scripts.pory"
	walk_up
# 468 "data/maps/Hub1/scripts.pory"
	walk_up
# 468 "data/maps/Hub1/scripts.pory"
	walk_up
	step_end

# 3602 "data/maps/Hub1/scripts.pory"
Hub_Event_Script_Marowak_Movement_0:
# 3603 "data/maps/Hub1/scripts.pory"
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
# 43 "data/maps/Hub1/scripts.pory"
	.string "The level cap has been raised to\n"
	.string "{STR_VAR_1}!\p"
	.string "You can level your pokemon up to the\n"
	.string "cap via the party menu.$"

AfterWarpIntoNewAct_Text_4:
# 54 "data/maps/Hub1/scripts.pory"
	.string "You managed to collect\n{STR_VAR_1} COINS in your last run!$"

AfterWarpIntoNewAct_Text_5:
# 63 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked the Mint Pot as a\n"
	.string "starter charm!$"

AfterWarpIntoNewAct_Text_6:
# 69 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked the Tinted Scope as a\n"
	.string "starter charm!$"

AfterWarpIntoNewAct_Text_7:
# 75 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked the Normal Charm as a\n"
	.string "starter charm!$"

AfterWarpIntoNewAct_Text_8:
# 81 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked a new difficulty!$"

AfterWarpIntoNewAct_Text_9:
# 89 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked an alternate first\n"
	.string "path! Each time you enter a path, you\l"
	.string "have a chance to enter an alternate\l"
	.string "path.$"

Act1BirchBag_Text_0:
# 122 "data/maps/Hub1/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

AbraTeleport_Text_0:
# 153 "data/maps/Hub1/scripts.pory"
	.string "You'll have to defeat the leader first\nbefore I can teleport you\lto the next path.$"

AbraTeleport_Text_1:
# 157 "data/maps/Hub1/scripts.pory"
	.string "Would you like to teleport\nto the next path?$"

AbraTeleport_Text_2:
# 160 "data/maps/Hub1/scripts.pory"
	.string "Alright then! Here we go!$"

AbraTeleport_Text_3:
# 164 "data/maps/Hub1/scripts.pory"
	.string "Okay! Let me know when you're ready.$"

RivalFight1_Text_0:
# 173 "data/maps/Hub1/scripts.pory"
	.string "Yo I'm Treecko. You seem like\nA worthy rival! Grrr!$"

RivalFight1_Text_1:
# 173 "data/maps/Hub1/scripts.pory"
	.string "Damn you got me.$"

RivalFight1_Text_2:
# 174 "data/maps/Hub1/scripts.pory"
	.string "I'll get you next time. Just you\nwait and see!$"

RivalFight1_Text_3:
# 178 "data/maps/Hub1/scripts.pory"
	.string "Yo I'm Torchic. You seem like\nA worthy rival! Grrr!$"

RivalFight2_Text_0:
# 188 "data/maps/Hub1/scripts.pory"
	.string "Sup. Let's do this.$"

RivalFight2_Text_1:
# 188 "data/maps/Hub1/scripts.pory"
	.string "Grrrr...$"

RivalFight2_Text_2:
# 189 "data/maps/Hub1/scripts.pory"
	.string "Just you wait. I'll come back even\nstronger.$"

RivalFight2_Text_3:
# 193 "data/maps/Hub1/scripts.pory"
	.string "I'm fired up and ready to fight!$"

RivalFight2_Text_4:
# 193 "data/maps/Hub1/scripts.pory"
	.string "Noooo!$"

RivalFight2_Text_5:
# 194 "data/maps/Hub1/scripts.pory"
	.string "I need to train even more...$"

RivalFight3_Text_0:
# 203 "data/maps/Hub1/scripts.pory"
	.string "You ready?$"

RivalFight3_Text_1:
# 203 "data/maps/Hub1/scripts.pory"
	.string "I still can't beat you...$"

RivalFight3_Text_2:
# 204 "data/maps/Hub1/scripts.pory"
	.string "Let's fight again.$"

RivalFight3_Text_3:
# 208 "data/maps/Hub1/scripts.pory"
	.string "Raaaa!\nLet's give it our all!$"

RivalFight3_Text_4:
# 208 "data/maps/Hub1/scripts.pory"
	.string "I'm still not strong enough...$"

RivalFight4_Text_0:
# 218 "data/maps/Hub1/scripts.pory"
	.string "One last time...$"

RivalFight4_Text_1:
# 218 "data/maps/Hub1/scripts.pory"
	.string "......$"

RivalFight4_Text_2:
# 219 "data/maps/Hub1/scripts.pory"
	.string "Good luck.$"

RivalFight4_Text_3:
# 223 "data/maps/Hub1/scripts.pory"
	.string "I can't wait to show you how much\nstronger I've gotten!$"

RivalFight4_Text_4:
# 223 "data/maps/Hub1/scripts.pory"
	.string "I'm in shock...\pYou really are the strongest.$"

RivalFight4_Text_5:
# 224 "data/maps/Hub1/scripts.pory"
	.string "I hope you crush it with the last\nremaining fights!$"

HUB1_Run_Stats_Sign_Text_0:
# 241 "data/maps/Hub1/scripts.pory"
	.string "Total Runs: {STR_VAR_1}\nAct 1 Wins: {STR_VAR_2}$"

HUB1_Run_Stats_Sign_Text_1:
# 247 "data/maps/Hub1/scripts.pory"
	.string "Act 2 Wins: {STR_VAR_3}\nAct 3 Wins: {STR_VAR_1}\pAct 4 Wins: {STR_VAR_2}$"

HUB1_ONFRAME_Text_0:
# 278 "data/maps/Hub1/scripts.pory"
	.string "Welcome to Pokemon Path!\pTo start, please choose\na starter pokemon.$"

HUB1_ONFRAME_Text_1:
# 281 "data/maps/Hub1/scripts.pory"
	.string "Bulbasaur$"

HUB1_ONFRAME_Text_2:
# 282 "data/maps/Hub1/scripts.pory"
	.string "Charmander$"

HUB1_ONFRAME_Text_3:
# 283 "data/maps/Hub1/scripts.pory"
	.string "Squirtle$"

HUB1_ONFRAME_Text_4:
# 284 "data/maps/Hub1/scripts.pory"
	.string "Chikorita$"

HUB1_ONFRAME_Text_5:
# 285 "data/maps/Hub1/scripts.pory"
	.string "Cyndaquil$"

HUB1_ONFRAME_Text_6:
# 286 "data/maps/Hub1/scripts.pory"
	.string "Totodile$"

HUB1_ONFRAME_Text_7:
# 287 "data/maps/Hub1/scripts.pory"
	.string "Treecko$"

HUB1_ONFRAME_Text_8:
# 288 "data/maps/Hub1/scripts.pory"
	.string "Torchic$"

HUB1_ONFRAME_Text_9:
# 289 "data/maps/Hub1/scripts.pory"
	.string "Mudkip$"

HUB1_ONFRAME_Text_10:
# 290 "data/maps/Hub1/scripts.pory"
	.string "Turtwig$"

HUB1_ONFRAME_Text_11:
# 291 "data/maps/Hub1/scripts.pory"
	.string "Chimchar$"

HUB1_ONFRAME_Text_12:
# 292 "data/maps/Hub1/scripts.pory"
	.string "Piplup$"

HUB1_ONFRAME_Text_13:
# 293 "data/maps/Hub1/scripts.pory"
	.string "Snivy$"

HUB1_ONFRAME_Text_14:
# 294 "data/maps/Hub1/scripts.pory"
	.string "Tepig$"

HUB1_ONFRAME_Text_15:
# 295 "data/maps/Hub1/scripts.pory"
	.string "Oshawott$"

HUB1_ONFRAME_Text_16:
# 296 "data/maps/Hub1/scripts.pory"
	.string "Chespin$"

HUB1_ONFRAME_Text_17:
# 297 "data/maps/Hub1/scripts.pory"
	.string "Fennekin$"

HUB1_ONFRAME_Text_18:
# 298 "data/maps/Hub1/scripts.pory"
	.string "Froakie$"

HUB1_ONFRAME_Text_19:
# 299 "data/maps/Hub1/scripts.pory"
	.string "Rowlet$"

HUB1_ONFRAME_Text_20:
# 300 "data/maps/Hub1/scripts.pory"
	.string "Litten$"

HUB1_ONFRAME_Text_21:
# 301 "data/maps/Hub1/scripts.pory"
	.string "Popplio$"

HUB1_ONFRAME_Text_22:
# 302 "data/maps/Hub1/scripts.pory"
	.string "Grookey$"

HUB1_ONFRAME_Text_23:
# 303 "data/maps/Hub1/scripts.pory"
	.string "Scorbunny$"

HUB1_ONFRAME_Text_24:
# 304 "data/maps/Hub1/scripts.pory"
	.string "Sobble$"

HUB1_ONFRAME_Text_25:
# 305 "data/maps/Hub1/scripts.pory"
	.string "Sprigatito$"

HUB1_ONFRAME_Text_26:
# 306 "data/maps/Hub1/scripts.pory"
	.string "Fuecoco$"

HUB1_ONFRAME_Text_27:
# 307 "data/maps/Hub1/scripts.pory"
	.string "Quaxly$"

HUB1_ONFRAME_Text_28:
# 428 "data/maps/Hub1/scripts.pory"
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
# 438 "data/maps/Hub1/scripts.pory"
	.string "What would you like to do?$"

Hub_Event_Script_Birch_Text_1:
# 439 "data/maps/Hub1/scripts.pory"
	.string "Start a run$"

Hub_Event_Script_Birch_Text_2:
# 439 "data/maps/Hub1/scripts.pory"
	.string "Change the difficulty$"

Hub_Event_Script_Birch_Text_3:
# 443 "data/maps/Hub1/scripts.pory"
	.string "Let me know when you're ready to start\n"
	.string "a run!$"

Hub_Event_Script_Birch_Text_4:
# 447 "data/maps/Hub1/scripts.pory"
	.string "Would you like to start a run?$"

Hub_Event_Script_Birch_Text_5:
# 450 "data/maps/Hub1/scripts.pory"
	.string "Alright then!$"

Hub_Event_Script_Birch_Text_6:
# 457 "data/maps/Hub1/scripts.pory"
	.string "Don't forget to take a starter charm\n"
	.string "with you!$"

Hub_Event_Script_Birch_Text_7:
# 459 "data/maps/Hub1/scripts.pory"
	.string "Now off you go! Good luck!$"

Hub_Event_Script_Birch_Text_8:
# 479 "data/maps/Hub1/scripts.pory"
	.string "Current difficulty: {STR_VAR_1}\nNote the modifiers stack at each level.$"

Hub_Event_Script_Birch_Text_9:
# 480 "data/maps/Hub1/scripts.pory"
	.string "0 - No modifiers$"

Hub_Event_Script_Birch_Text_10:
# 481 "data/maps/Hub1/scripts.pory"
	.string "1 - +1 Enemies Level$"

Hub_Event_Script_Birch_Text_11:
# 482 "data/maps/Hub1/scripts.pory"
	.string "2 - -1 Birch Bag each path$"

Hub_Event_Script_Birch_Text_12:
# 483 "data/maps/Hub1/scripts.pory"
	.string "3 - Less Money$"

Hub_Event_Script_Birch_Text_13:
# 484 "data/maps/Hub1/scripts.pory"
	.string "4 - Enemies crit more$"

Hub_Event_Script_Birch_Text_14:
# 485 "data/maps/Hub1/scripts.pory"
	.string "5 - +1 Enemies Level$"

Hub_Event_Script_Birch_Text_15:
# 486 "data/maps/Hub1/scripts.pory"
	.string "6 - -1 Birch Bag each path$"

Hub_Event_Script_Birch_Text_16:
# 491 "data/maps/Hub1/scripts.pory"
	.string "Beat all 4 paths to unlock the next\n"
	.string "difficulty!$"

Hub_Event_Script_Birch_Text_17:
# 502 "data/maps/Hub1/scripts.pory"
	.string "Difficulty set to {STR_VAR_1}$"

Hub_Event_Script_Miltank_Text_0:
# 514 "data/maps/Hub1/scripts.pory"
	.string "Bulbasaur (500C)$"

Hub_Event_Script_Miltank_Text_1:
# 515 "data/maps/Hub1/scripts.pory"
	.string "Charmander (500C)$"

Hub_Event_Script_Miltank_Text_2:
# 516 "data/maps/Hub1/scripts.pory"
	.string "Squirtle (500C)$"

Hub_Event_Script_Miltank_Text_3:
# 517 "data/maps/Hub1/scripts.pory"
	.string "Chikorita (500C)$"

Hub_Event_Script_Miltank_Text_4:
# 518 "data/maps/Hub1/scripts.pory"
	.string "Cyndaquil (500C)$"

Hub_Event_Script_Miltank_Text_5:
# 519 "data/maps/Hub1/scripts.pory"
	.string "Totodile (500C)$"

Hub_Event_Script_Miltank_Text_6:
# 520 "data/maps/Hub1/scripts.pory"
	.string "Treecko (500C)$"

Hub_Event_Script_Miltank_Text_7:
# 521 "data/maps/Hub1/scripts.pory"
	.string "Torchic (500C)$"

Hub_Event_Script_Miltank_Text_8:
# 522 "data/maps/Hub1/scripts.pory"
	.string "Mudkip (500C)$"

Hub_Event_Script_Miltank_Text_9:
# 523 "data/maps/Hub1/scripts.pory"
	.string "Turtwig (500C)$"

Hub_Event_Script_Miltank_Text_10:
# 524 "data/maps/Hub1/scripts.pory"
	.string "Chimchar (500C)$"

Hub_Event_Script_Miltank_Text_11:
# 525 "data/maps/Hub1/scripts.pory"
	.string "Piplup (500C)$"

Hub_Event_Script_Miltank_Text_12:
# 526 "data/maps/Hub1/scripts.pory"
	.string "Snivy (500C)$"

Hub_Event_Script_Miltank_Text_13:
# 527 "data/maps/Hub1/scripts.pory"
	.string "Tepig (500C)$"

Hub_Event_Script_Miltank_Text_14:
# 528 "data/maps/Hub1/scripts.pory"
	.string "Oshawott (500C)$"

Hub_Event_Script_Miltank_Text_15:
# 529 "data/maps/Hub1/scripts.pory"
	.string "Chespin (500C)$"

Hub_Event_Script_Miltank_Text_16:
# 530 "data/maps/Hub1/scripts.pory"
	.string "Fennekin (500C)$"

Hub_Event_Script_Miltank_Text_17:
# 531 "data/maps/Hub1/scripts.pory"
	.string "Froakie (500C)$"

Hub_Event_Script_Miltank_Text_18:
# 532 "data/maps/Hub1/scripts.pory"
	.string "Rowlet (500C)$"

Hub_Event_Script_Miltank_Text_19:
# 533 "data/maps/Hub1/scripts.pory"
	.string "Litten (500C)$"

Hub_Event_Script_Miltank_Text_20:
# 534 "data/maps/Hub1/scripts.pory"
	.string "Popplio (500C)$"

Hub_Event_Script_Miltank_Text_21:
# 535 "data/maps/Hub1/scripts.pory"
	.string "Grookey (500C)$"

Hub_Event_Script_Miltank_Text_22:
# 536 "data/maps/Hub1/scripts.pory"
	.string "Scorbunny (500C)$"

Hub_Event_Script_Miltank_Text_23:
# 537 "data/maps/Hub1/scripts.pory"
	.string "Sobble (500C)$"

Hub_Event_Script_Miltank_Text_24:
# 538 "data/maps/Hub1/scripts.pory"
	.string "Sprigatito (500C)$"

Hub_Event_Script_Miltank_Text_25:
# 539 "data/maps/Hub1/scripts.pory"
	.string "Fuecoco (500C)$"

Hub_Event_Script_Miltank_Text_26:
# 540 "data/maps/Hub1/scripts.pory"
	.string "Quaxly (500C)$"

Hub_Event_Script_Miltank_Text_27:
# 544 "data/maps/Hub1/scripts.pory"
	.string "Would you like to adopt a pokemon?$"

Hub_Event_Script_Miltank_Text_28:
# 549 "data/maps/Hub1/scripts.pory"
	.string "Come back anytime!$"

Hub_Event_Script_Miltank_Text_29:
# 559 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Bulbasaur as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_30:
# 562 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry. You don't have the coins to\nadopt that pokemon.$"

Hub_Event_Script_Miltank_Text_31:
# 571 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Charmander as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_32:
# 583 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Squirtle as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_33:
# 595 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chikorita as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_34:
# 607 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Cyndaquil as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_35:
# 619 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Totodile as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_36:
# 631 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Treecko as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_37:
# 643 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Torchic as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_38:
# 655 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Mudkip as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_39:
# 667 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Turtwig as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_40:
# 679 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chimchar as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_41:
# 691 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Piplup as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_42:
# 703 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Snivy as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_43:
# 715 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Tepig as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_44:
# 727 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Oshawott as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_45:
# 739 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Chespin as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_46:
# 751 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Fennekin as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_47:
# 763 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Froakie as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_48:
# 775 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Rowlet as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_49:
# 787 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Litten as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_50:
# 799 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Popplio as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_51:
# 811 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Grookey as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_52:
# 823 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Scorbunny as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_53:
# 835 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Sobble as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_54:
# 847 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Sprigatito as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_55:
# 859 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Fuecoco as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_56:
# 871 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Quaxly as a starter!\pThank you for your adoption!$"

Hub_Event_Script_Miltank_Text_57:
# 880 "data/maps/Hub1/scripts.pory"
	.string "You have no more starters left\nto adopt!$"

Hub_Event_Script_Chansey_Text_0:
# 921 "data/maps/Hub1/scripts.pory"
	.string "Would you like to change your starter?$"

Hub_Event_Script_Chansey_Text_1:
# 934 "data/maps/Hub1/scripts.pory"
	.string "There you go!$"

Hub_Event_Script_Chansey_Text_2:
# 942 "data/maps/Hub1/scripts.pory"
	.string "You don't have any starter pokemon yet.\pPlease consider adopting some pokemon\nfrom my friend Miltank to your right.$"

KecShop_Sign_Text_0:
# 949 "data/maps/Hub1/scripts.pory"
	.string "Welcome to the Kecleon Brother's shop!$"

KecShop_Text_0:
# 956 "data/maps/Hub1/scripts.pory"
	.string "Welcome to the Kecleon Brother's shop!\nWould you like to buy an item?$"

KecShop_Text_1:
# 957 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}Mem. Mushroom (¥200)$"

KecShop_Text_2:
# 958 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}Oran Berry (¥200)$"

KecShop_Text_3:
# 961 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}Lum Berry (¥200)$"

KecShop_Text_4:
# 965 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}Serious Mint (¥500)$"

KecShop_Text_5:
# 969 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}Rare Candy (¥2000)$"

KecShop_Text_6:
# 973 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}Pkt Birch Bag (¥2000)$"

KecShop_Text_7:
# 977 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}HP Bottle Cap (¥300)$"

KecShop_Text_8:
# 981 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}Atk Bottle Cap (¥300)$"

KecShop_Text_9:
# 985 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}Def Bottle Cap (¥300)$"

KecShop_Text_10:
# 989 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}Spe Bottle Cap (¥300)$"

KecShop_Text_11:
# 993 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}Sp. Atk Bottle Cap (¥300)$"

KecShop_Text_12:
# 997 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}SpDef Bottle Cap (¥300)$"

KecShop_Text_13:
# 1001 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}HP Gold Bottle Cap (¥600)$"

KecShop_Text_14:
# 1005 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}Atk Gold Bottle Cap (¥600)$"

KecShop_Text_15:
# 1009 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}Def Gold Bottle Cap (¥600)$"

KecShop_Text_16:
# 1013 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}Spe Gold Bottle Cap (¥600)$"

KecShop_Text_17:
# 1017 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROWER}SpAtk Gold Bottle Cap (¥600)$"

KecShop_Text_18:
# 1021 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROWER}SpDef Gold Bottle Cap (¥600)$"

KecShop_Text_19:
# 1037 "data/maps/Hub1/scripts.pory"
	.string "Thank you for your purchase!$"

KecShop_Text_20:
# 1040 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry. You don't have the money to\nbuy that, kec.$"

KecShop_Text_21:
# 1126 "data/maps/Hub1/scripts.pory"
	.string "Sorry, but there's nothing for you\nto buy right now, Kec.$"

KecShop_Shiny_Text_0:
# 1137 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}TM Noble Roar (¥200)$"

KecShop_Shiny_Text_1:
# 1141 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}TM Charm (¥200)$"

KecShop_Shiny_Text_2:
# 1145 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}TM Fake Tears (¥200)$"

KecShop_Shiny_Text_3:
# 1149 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}TM Confuse Ray (¥300)$"

KecShop_Shiny_Text_4:
# 1153 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}TM Thunder Wave (¥300)$"

KecShop_Shiny_Text_5:
# 1157 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}TM Will-O-Wisp (¥500)$"

KecShop_Shiny_Text_6:
# 1161 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}TM Toxic (¥500)$"

KecShop_Shiny_Text_7:
# 1165 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}TM Swift (¥500)$"

KecShop_Shiny_Text_8:
# 1169 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}TM Cut (¥500)$"

KecShop_Shiny_Text_9:
# 1173 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}TM Rock Smash (¥500)$"

KecShop_Shiny_Text_10:
# 1177 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}TM Snarl (¥500)$"

KecShop_Shiny_Text_11:
# 1181 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}TM Electroweb (¥500)$"

KecShop_Shiny_Text_12:
# 1185 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}TM Aurora Beam (¥500)$"

KecShop_Shiny_Text_13:
# 1189 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}TM Psybeam (¥500)$"

KecShop_Shiny_Text_14:
# 1193 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}TM Flamethrower (¥1200)$"

KecShop_Shiny_Text_15:
# 1197 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}TM Ice Beam (¥1200)$"

KecShop_Shiny_Text_16:
# 1201 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}TM Thunderbolt (¥1200)$"

KecShop_Shiny_Text_17:
# 1205 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}TM Scald (¥1000)$"

KecShop_Shiny_Text_18:
# 1209 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}TM Mega Drain (¥800)$"

KecShop_Shiny_Text_19:
# 1213 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}TM Sludge Bomb (¥1000)$"

KecShop_Shiny_Text_20:
# 1217 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}TM Dual Wingbeat (¥900)$"

KecShop_Shiny_Text_21:
# 1221 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}TM Leech Life (¥1000)$"

KecShop_Shiny_Text_22:
# 1225 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}TM Play Rough (¥1000)$"

KecShop_Shiny_Text_23:
# 1229 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}TM Shadow Ball (¥1000)$"

KecShop_Shiny_Text_24:
# 1233 "data/maps/Hub1/scripts.pory"
	.string "{FONT_NARROW}TM Earth Power (¥1000)$"

Hub_Event_Script_Kecleon_Text_0:
# 1533 "data/maps/Hub1/scripts.pory"
	.string "Rare Candy (2000C)$"

Hub_Event_Script_Kecleon_Text_1:
# 1538 "data/maps/Hub1/scripts.pory"
	.string "Lum Berry (500C)$"

Hub_Event_Script_Kecleon_Text_2:
# 1543 "data/maps/Hub1/scripts.pory"
	.string "Serious Mint (2000C)$"

Hub_Event_Script_Kecleon_Text_3:
# 1548 "data/maps/Hub1/scripts.pory"
	.string "Bottle Caps (1000C)$"

Hub_Event_Script_Kecleon_Text_4:
# 1553 "data/maps/Hub1/scripts.pory"
	.string "Gold Bottle Caps (2000C)$"

Hub_Event_Script_Kecleon_Text_5:
# 1558 "data/maps/Hub1/scripts.pory"
	.string "Pkt Birch Bag (1000C)$"

Hub_Event_Script_Kecleon_Text_6:
# 1563 "data/maps/Hub1/scripts.pory"
	.string "Hey there! Would you like me to\nstock an item?$"

Hub_Event_Script_Kecleon_Text_7:
# 1575 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Lum Berry as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_8:
# 1578 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry. You don't have the coins to\nstock that item, kec.$"

Hub_Event_Script_Kecleon_Text_9:
# 1589 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Serious Mint as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_10:
# 1603 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Rare Candy as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_11:
# 1617 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked IV Bottle caps as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_12:
# 1631 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Gold Bottle caps as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_13:
# 1645 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked Pocket Birch bags as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Kecleon_Text_14:
# 1653 "data/maps/Hub1/scripts.pory"
	.string "You don't have anything left\nto stock right now. Thank you for\lyour consistent patronage!\p$"

Hub_Event_Script_Shiny_Kecleon_Text_0:
# 1668 "data/maps/Hub1/scripts.pory"
	.string "TM Noble Roar (400C)$"

Hub_Event_Script_Shiny_Kecleon_Text_1:
# 1672 "data/maps/Hub1/scripts.pory"
	.string "TM Charm (400C)$"

Hub_Event_Script_Shiny_Kecleon_Text_2:
# 1676 "data/maps/Hub1/scripts.pory"
	.string "TM Fake Tears (400C)$"

Hub_Event_Script_Shiny_Kecleon_Text_3:
# 1680 "data/maps/Hub1/scripts.pory"
	.string "TM Confuse Ray (800C)$"

Hub_Event_Script_Shiny_Kecleon_Text_4:
# 1684 "data/maps/Hub1/scripts.pory"
	.string "TM Thunder Wave (800C)$"

Hub_Event_Script_Shiny_Kecleon_Text_5:
# 1688 "data/maps/Hub1/scripts.pory"
	.string "TM Will-O-Wisp (800C)$"

Hub_Event_Script_Shiny_Kecleon_Text_6:
# 1692 "data/maps/Hub1/scripts.pory"
	.string "TM Toxic (800C)$"

Hub_Event_Script_Shiny_Kecleon_Text_7:
# 1696 "data/maps/Hub1/scripts.pory"
	.string "TM Rock Smash (900C)$"

Hub_Event_Script_Shiny_Kecleon_Text_8:
# 1700 "data/maps/Hub1/scripts.pory"
	.string "TM Snarl (900C)$"

Hub_Event_Script_Shiny_Kecleon_Text_9:
# 1704 "data/maps/Hub1/scripts.pory"
	.string "TM Electroweb (900C)$"

Hub_Event_Script_Shiny_Kecleon_Text_10:
# 1708 "data/maps/Hub1/scripts.pory"
	.string "TM Aurora Beam (900C)$"

Hub_Event_Script_Shiny_Kecleon_Text_11:
# 1712 "data/maps/Hub1/scripts.pory"
	.string "TM Psybeam (900C)$"

Hub_Event_Script_Shiny_Kecleon_Text_12:
# 1716 "data/maps/Hub1/scripts.pory"
	.string "TM Mega Drain (900C)$"

Hub_Event_Script_Shiny_Kecleon_Text_13:
# 1720 "data/maps/Hub1/scripts.pory"
	.string "TM Flamethrower (1200C)$"

Hub_Event_Script_Shiny_Kecleon_Text_14:
# 1724 "data/maps/Hub1/scripts.pory"
	.string "TM Ice Beam (1200C)$"

Hub_Event_Script_Shiny_Kecleon_Text_15:
# 1728 "data/maps/Hub1/scripts.pory"
	.string "TM Thunderbolt (1200C)$"

Hub_Event_Script_Shiny_Kecleon_Text_16:
# 1732 "data/maps/Hub1/scripts.pory"
	.string "TM Scald (1200C)$"

Hub_Event_Script_Shiny_Kecleon_Text_17:
# 1736 "data/maps/Hub1/scripts.pory"
	.string "TM Sludge Bomb (1200C)$"

Hub_Event_Script_Shiny_Kecleon_Text_18:
# 1740 "data/maps/Hub1/scripts.pory"
	.string "TM Dual Wingbeat (1200C)$"

Hub_Event_Script_Shiny_Kecleon_Text_19:
# 1744 "data/maps/Hub1/scripts.pory"
	.string "TM Leech Life (1200C)$"

Hub_Event_Script_Shiny_Kecleon_Text_20:
# 1748 "data/maps/Hub1/scripts.pory"
	.string "TM Play Rough (1200C)$"

Hub_Event_Script_Shiny_Kecleon_Text_21:
# 1752 "data/maps/Hub1/scripts.pory"
	.string "TM Shadow Ball (1200C)$"

Hub_Event_Script_Shiny_Kecleon_Text_22:
# 1756 "data/maps/Hub1/scripts.pory"
	.string "TM Earth Power (1200C)$"

Hub_Event_Script_Shiny_Kecleon_Text_23:
# 1763 "data/maps/Hub1/scripts.pory"
	.string "Howdy! Would you like me to\nstock a new TM?$"

Hub_Event_Script_Shiny_Kecleon_Text_24:
# 1774 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Noble Roar as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_25:
# 1788 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Rock Smash as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_26:
# 1802 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Swift as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_27:
# 1816 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Cut as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_28:
# 1830 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Charm as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_29:
# 1844 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Fake Tears as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_30:
# 1858 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Confuse Ray as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_31:
# 1872 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Thunder Wave as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_32:
# 1886 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Will O Wisp as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_33:
# 1900 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Toxic as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_34:
# 1914 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Snarl as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_35:
# 1928 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Electroweb as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_36:
# 1942 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Aurora Beam as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_37:
# 1956 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Psybeam as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_38:
# 1970 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Flamethrower as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_39:
# 1984 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Ice Beam as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_40:
# 1998 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Thunderbolt as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_41:
# 2012 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Scald as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_42:
# 2026 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Mega Drain as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_43:
# 2040 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Sludge Bomb as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_44:
# 2054 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Dual Wingbeat as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_45:
# 2068 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Leech Life as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_46:
# 2082 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Play Rough as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_47:
# 2096 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Shadow Ball as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_48:
# 2110 "data/maps/Hub1/scripts.pory"
	.string "You've unlocked TM Earth Power as a\nstocked item!\pThank you for your purchase!$"

Hub_Event_Script_Shiny_Kecleon_Text_49:
# 2118 "data/maps/Hub1/scripts.pory"
	.string "You don't have anything left\nto puchase right now. Thank you for\lyour consistent patronage!\p$"

Hub_Event_Script_Diancie_Text_0:
# 2131 "data/maps/Hub1/scripts.pory"
	.string "Hey there! I'm Diancie.\n"
	.string "I love collecting special gems.\l"
	.string "I plan on selling some of them soon\l"
	.string "but I don't have any to sell right now.\l"
	.string "I hope you come visit again another\l"
	.string "time.$"

Hub_Event_Script_Diancie_Text_1:
# 2139 "data/maps/Hub1/scripts.pory"
	.string "Hiya! I've finally started selling\n"
	.string "some of my precious gems.\l"
	.string "To celebrate, I'll give you this\l"
	.string "one on the house!$"

Hub_Event_Script_Diancie_Text_2:
# 2148 "data/maps/Hub1/scripts.pory"
	.string "You should know that you can\n"
	.string "mega evolve your pokemon by\l"
	.string "using them on your pokemon like\l"
	.string "a regular evolution stone.\l"
	.string "There aren't so many mega stones\l"
	.string "I want to sell right now.\l"
	.string "But I might sell more\l"
	.string "in the future.$"

Hub_Event_Script_Diancie_Text_3:
# 2160 "data/maps/Hub1/scripts.pory"
	.string "Venusaurite (1000C)$"

Hub_Event_Script_Diancie_Text_4:
# 2164 "data/maps/Hub1/scripts.pory"
	.string "Charizardite Y (1000C)$"

Hub_Event_Script_Diancie_Text_5:
# 2168 "data/maps/Hub1/scripts.pory"
	.string "Blastoisinite (1000C)$"

Hub_Event_Script_Diancie_Text_6:
# 2172 "data/maps/Hub1/scripts.pory"
	.string "Beedrillite (1000C)$"

Hub_Event_Script_Diancie_Text_7:
# 2176 "data/maps/Hub1/scripts.pory"
	.string "Pidgeotite (1000C)$"

Hub_Event_Script_Diancie_Text_8:
# 2180 "data/maps/Hub1/scripts.pory"
	.string "Alakazite (1000C)$"

Hub_Event_Script_Diancie_Text_9:
# 2184 "data/maps/Hub1/scripts.pory"
	.string "Slowbronite (1000C)$"

Hub_Event_Script_Diancie_Text_10:
# 2188 "data/maps/Hub1/scripts.pory"
	.string "Gengarite (1000C)$"

Hub_Event_Script_Diancie_Text_11:
# 2192 "data/maps/Hub1/scripts.pory"
	.string "Kangaskhanite (1000C)$"

Hub_Event_Script_Diancie_Text_12:
# 2196 "data/maps/Hub1/scripts.pory"
	.string "Pinsirite (1000C)$"

Hub_Event_Script_Diancie_Text_13:
# 2200 "data/maps/Hub1/scripts.pory"
	.string "Gyaradosite (1000C)$"

Hub_Event_Script_Diancie_Text_14:
# 2204 "data/maps/Hub1/scripts.pory"
	.string "Aerodactylite (1000C)$"

Hub_Event_Script_Diancie_Text_15:
# 2208 "data/maps/Hub1/scripts.pory"
	.string "Ampharosite (1000C)$"

Hub_Event_Script_Diancie_Text_16:
# 2212 "data/maps/Hub1/scripts.pory"
	.string "Steelixite (1000C)$"

Hub_Event_Script_Diancie_Text_17:
# 2216 "data/maps/Hub1/scripts.pory"
	.string "Scizorite (1000C)$"

Hub_Event_Script_Diancie_Text_18:
# 2220 "data/maps/Hub1/scripts.pory"
	.string "Heracronite (1000C)$"

Hub_Event_Script_Diancie_Text_19:
# 2224 "data/maps/Hub1/scripts.pory"
	.string "Houndoominite (1000C)$"

Hub_Event_Script_Diancie_Text_20:
# 2228 "data/maps/Hub1/scripts.pory"
	.string "Tyranitarite (1000C)$"

Hub_Event_Script_Diancie_Text_21:
# 2232 "data/maps/Hub1/scripts.pory"
	.string "Sceptilite (1000C)$"

Hub_Event_Script_Diancie_Text_22:
# 2236 "data/maps/Hub1/scripts.pory"
	.string "Blazikenite (1000C)$"

Hub_Event_Script_Diancie_Text_23:
# 2240 "data/maps/Hub1/scripts.pory"
	.string "Swampertite (1000C)$"

Hub_Event_Script_Diancie_Text_24:
# 2244 "data/maps/Hub1/scripts.pory"
	.string "Gardevoirite (1000C)$"

Hub_Event_Script_Diancie_Text_25:
# 2248 "data/maps/Hub1/scripts.pory"
	.string "Sablenite (1000C)$"

Hub_Event_Script_Diancie_Text_26:
# 2252 "data/maps/Hub1/scripts.pory"
	.string "Mawilite (1000C)$"

Hub_Event_Script_Diancie_Text_27:
# 2256 "data/maps/Hub1/scripts.pory"
	.string "Aggronite (1000C)$"

Hub_Event_Script_Diancie_Text_28:
# 2260 "data/maps/Hub1/scripts.pory"
	.string "Medichamite (1000C)$"

Hub_Event_Script_Diancie_Text_29:
# 2264 "data/maps/Hub1/scripts.pory"
	.string "Manectite (1000C)$"

Hub_Event_Script_Diancie_Text_30:
# 2268 "data/maps/Hub1/scripts.pory"
	.string "Sharpedonite (1000C)$"

Hub_Event_Script_Diancie_Text_31:
# 2272 "data/maps/Hub1/scripts.pory"
	.string "Cameruptite (1000C)$"

Hub_Event_Script_Diancie_Text_32:
# 2276 "data/maps/Hub1/scripts.pory"
	.string "Altarianite (1000C)$"

Hub_Event_Script_Diancie_Text_33:
# 2280 "data/maps/Hub1/scripts.pory"
	.string "Banettite (1000C)$"

Hub_Event_Script_Diancie_Text_34:
# 2284 "data/maps/Hub1/scripts.pory"
	.string "Absolite (1000C)$"

Hub_Event_Script_Diancie_Text_35:
# 2288 "data/maps/Hub1/scripts.pory"
	.string "Glalitite (1000C)$"

Hub_Event_Script_Diancie_Text_36:
# 2292 "data/maps/Hub1/scripts.pory"
	.string "Salamencite (1000C)$"

Hub_Event_Script_Diancie_Text_37:
# 2296 "data/maps/Hub1/scripts.pory"
	.string "Metagrossite (1000C)$"

Hub_Event_Script_Diancie_Text_38:
# 2300 "data/maps/Hub1/scripts.pory"
	.string "Lopunnite (1000C)$"

Hub_Event_Script_Diancie_Text_39:
# 2304 "data/maps/Hub1/scripts.pory"
	.string "Garchompite (1000C)$"

Hub_Event_Script_Diancie_Text_40:
# 2308 "data/maps/Hub1/scripts.pory"
	.string "Lucarionite (1000C)$"

Hub_Event_Script_Diancie_Text_41:
# 2312 "data/maps/Hub1/scripts.pory"
	.string "Abomasite (1000C)$"

Hub_Event_Script_Diancie_Text_42:
# 2316 "data/maps/Hub1/scripts.pory"
	.string "Galladite (1000C)$"

Hub_Event_Script_Diancie_Text_43:
# 2320 "data/maps/Hub1/scripts.pory"
	.string "Clefablite (1000C)$"

Hub_Event_Script_Diancie_Text_44:
# 2324 "data/maps/Hub1/scripts.pory"
	.string "Victreebelite (1000C)$"

Hub_Event_Script_Diancie_Text_45:
# 2328 "data/maps/Hub1/scripts.pory"
	.string "Starminite (1000C)$"

Hub_Event_Script_Diancie_Text_46:
# 2332 "data/maps/Hub1/scripts.pory"
	.string "Dragoninite (1000C)$"

Hub_Event_Script_Diancie_Text_47:
# 2336 "data/maps/Hub1/scripts.pory"
	.string "Meganiumite (1000C)$"

Hub_Event_Script_Diancie_Text_48:
# 2340 "data/maps/Hub1/scripts.pory"
	.string "Feraligite (1000C)$"

Hub_Event_Script_Diancie_Text_49:
# 2344 "data/maps/Hub1/scripts.pory"
	.string "Skarmorite (1000C)$"

Hub_Event_Script_Diancie_Text_50:
# 2348 "data/maps/Hub1/scripts.pory"
	.string "Froslassite (1000C)$"

Hub_Event_Script_Diancie_Text_51:
# 2352 "data/maps/Hub1/scripts.pory"
	.string "Emboarite (1000C)$"

Hub_Event_Script_Diancie_Text_52:
# 2356 "data/maps/Hub1/scripts.pory"
	.string "Excadrite (1000C)$"

Hub_Event_Script_Diancie_Text_53:
# 2360 "data/maps/Hub1/scripts.pory"
	.string "Scolipite (1000C)$"

Hub_Event_Script_Diancie_Text_54:
# 2364 "data/maps/Hub1/scripts.pory"
	.string "Scraftinite (1000C)$"

Hub_Event_Script_Diancie_Text_55:
# 2368 "data/maps/Hub1/scripts.pory"
	.string "Eelektrossite (1000C)$"

Hub_Event_Script_Diancie_Text_56:
# 2372 "data/maps/Hub1/scripts.pory"
	.string "Chandelurite (1000C)$"

Hub_Event_Script_Diancie_Text_57:
# 2376 "data/maps/Hub1/scripts.pory"
	.string "Chesnaughtite (1000C)$"

Hub_Event_Script_Diancie_Text_58:
# 2380 "data/maps/Hub1/scripts.pory"
	.string "Delphoxite (1000C)$"

Hub_Event_Script_Diancie_Text_59:
# 2384 "data/maps/Hub1/scripts.pory"
	.string "Greninjite (1000C)$"

Hub_Event_Script_Diancie_Text_60:
# 2388 "data/maps/Hub1/scripts.pory"
	.string "Pyroarite (1000C)$"

Hub_Event_Script_Diancie_Text_61:
# 2392 "data/maps/Hub1/scripts.pory"
	.string "Malamarite (1000C)$"

Hub_Event_Script_Diancie_Text_62:
# 2396 "data/maps/Hub1/scripts.pory"
	.string "Barbaracite (1000C)$"

Hub_Event_Script_Diancie_Text_63:
# 2400 "data/maps/Hub1/scripts.pory"
	.string "Dragalgite (1000C)$"

Hub_Event_Script_Diancie_Text_64:
# 2404 "data/maps/Hub1/scripts.pory"
	.string "Hawluchanite (1000C)$"

Hub_Event_Script_Diancie_Text_65:
# 2408 "data/maps/Hub1/scripts.pory"
	.string "Drampanite (1000C)$"

Hub_Event_Script_Diancie_Text_66:
# 2412 "data/maps/Hub1/scripts.pory"
	.string "Falinksite (1000C)$"

Hub_Event_Script_Diancie_Text_67:
# 2416 "data/maps/Hub1/scripts.pory"
	.string "Raichunite X (1000C)$"

Hub_Event_Script_Diancie_Text_68:
# 2420 "data/maps/Hub1/scripts.pory"
	.string "Raichunite Y (1000C)$"

Hub_Event_Script_Diancie_Text_69:
# 2424 "data/maps/Hub1/scripts.pory"
	.string "Chimechite (1000C)$"

Hub_Event_Script_Diancie_Text_70:
# 2428 "data/maps/Hub1/scripts.pory"
	.string "Staraptite (1000C)$"

Hub_Event_Script_Diancie_Text_71:
# 2432 "data/maps/Hub1/scripts.pory"
	.string "Golurkite (1000C)$"

Hub_Event_Script_Diancie_Text_72:
# 2436 "data/maps/Hub1/scripts.pory"
	.string "Meowsticite (1000C)$"

Hub_Event_Script_Diancie_Text_73:
# 2440 "data/maps/Hub1/scripts.pory"
	.string "Crabominite (1000C)$"

Hub_Event_Script_Diancie_Text_74:
# 2444 "data/maps/Hub1/scripts.pory"
	.string "Golisopite (1000C)$"

Hub_Event_Script_Diancie_Text_75:
# 2448 "data/maps/Hub1/scripts.pory"
	.string "Scovillainite (1000C)$"

Hub_Event_Script_Diancie_Text_76:
# 2452 "data/maps/Hub1/scripts.pory"
	.string "Glimmoranite (1000C)$"

Hub_Event_Script_Diancie_Text_77:
# 2456 "data/maps/Hub1/scripts.pory"
	.string "Baxcalibrite (1000C)$"

Hub_Event_Script_Diancie_Text_78:
# 2463 "data/maps/Hub1/scripts.pory"
	.string "Hello! Good news!\n"
	.string "I have new stock!\l"
	.string "Please take a look!$"

Hub_Event_Script_Diancie_Text_79:
# 2469 "data/maps/Hub1/scripts.pory"
	.string "Would you like to\nbuy a Mega Stone?$"

Hub_Event_Script_Diancie_Text_80:
# 2483 "data/maps/Hub1/scripts.pory"
	.string "You got a Venusaurite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_81:
# 2486 "data/maps/Hub1/scripts.pory"
	.string "I'm sorry, but you don't have the\n coins for that right now.$"

Hub_Event_Script_Diancie_Text_82:
# 2498 "data/maps/Hub1/scripts.pory"
	.string "You got a Charizardite Y as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_83:
# 2513 "data/maps/Hub1/scripts.pory"
	.string "You got a Blastoisinite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_84:
# 2528 "data/maps/Hub1/scripts.pory"
	.string "You got a Beedrillite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_85:
# 2543 "data/maps/Hub1/scripts.pory"
	.string "You got a Pidgeotite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_86:
# 2558 "data/maps/Hub1/scripts.pory"
	.string "You got an Alakazite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_87:
# 2573 "data/maps/Hub1/scripts.pory"
	.string "You got a Slowbronite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_88:
# 2588 "data/maps/Hub1/scripts.pory"
	.string "You got a Gengarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_89:
# 2603 "data/maps/Hub1/scripts.pory"
	.string "You got a Kangaskhanite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_90:
# 2618 "data/maps/Hub1/scripts.pory"
	.string "You got a Pinsirite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_91:
# 2633 "data/maps/Hub1/scripts.pory"
	.string "You got a Gyaradosite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_92:
# 2648 "data/maps/Hub1/scripts.pory"
	.string "You got an Aerodactylite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_93:
# 2663 "data/maps/Hub1/scripts.pory"
	.string "You got an Ampharosite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_94:
# 2678 "data/maps/Hub1/scripts.pory"
	.string "You got a Steelixite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_95:
# 2693 "data/maps/Hub1/scripts.pory"
	.string "You got a Scizorite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_96:
# 2708 "data/maps/Hub1/scripts.pory"
	.string "You got a Heracronite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_97:
# 2723 "data/maps/Hub1/scripts.pory"
	.string "You got a Houndoominite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_98:
# 2738 "data/maps/Hub1/scripts.pory"
	.string "You got a Tyranitarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_99:
# 2753 "data/maps/Hub1/scripts.pory"
	.string "You got a Sceptilite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_100:
# 2768 "data/maps/Hub1/scripts.pory"
	.string "You got a Blazikenite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_101:
# 2783 "data/maps/Hub1/scripts.pory"
	.string "You got a Swampertite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_102:
# 2798 "data/maps/Hub1/scripts.pory"
	.string "You got a Gardevoirite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_103:
# 2813 "data/maps/Hub1/scripts.pory"
	.string "You got a Sablenite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_104:
# 2828 "data/maps/Hub1/scripts.pory"
	.string "You got a Mawilite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_105:
# 2843 "data/maps/Hub1/scripts.pory"
	.string "You got an Aggronite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_106:
# 2858 "data/maps/Hub1/scripts.pory"
	.string "You got a Medichamite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_107:
# 2873 "data/maps/Hub1/scripts.pory"
	.string "You got a Manectite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_108:
# 2888 "data/maps/Hub1/scripts.pory"
	.string "You got a Sharpedonite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_109:
# 2903 "data/maps/Hub1/scripts.pory"
	.string "You got a Cameruptite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_110:
# 2918 "data/maps/Hub1/scripts.pory"
	.string "You got an Altarianite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_111:
# 2933 "data/maps/Hub1/scripts.pory"
	.string "You got a Banettite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_112:
# 2948 "data/maps/Hub1/scripts.pory"
	.string "You got an Absolite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_113:
# 2963 "data/maps/Hub1/scripts.pory"
	.string "You got a Glalitite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_114:
# 2978 "data/maps/Hub1/scripts.pory"
	.string "You got a Salamencite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_115:
# 2993 "data/maps/Hub1/scripts.pory"
	.string "You got a Lopunnite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_116:
# 3008 "data/maps/Hub1/scripts.pory"
	.string "You got a Garchompite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_117:
# 3023 "data/maps/Hub1/scripts.pory"
	.string "You got a Lucarionite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_118:
# 3038 "data/maps/Hub1/scripts.pory"
	.string "You got an Abomasite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_119:
# 3053 "data/maps/Hub1/scripts.pory"
	.string "You got a Galladite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_120:
# 3068 "data/maps/Hub1/scripts.pory"
	.string "You got a Clefablite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_121:
# 3083 "data/maps/Hub1/scripts.pory"
	.string "You got a Victreebelite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_122:
# 3098 "data/maps/Hub1/scripts.pory"
	.string "You got a Starminite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_123:
# 3113 "data/maps/Hub1/scripts.pory"
	.string "You got a Dragoninite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_124:
# 3128 "data/maps/Hub1/scripts.pory"
	.string "You got a Meganiumite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_125:
# 3143 "data/maps/Hub1/scripts.pory"
	.string "You got a Feraligite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_126:
# 3158 "data/maps/Hub1/scripts.pory"
	.string "You got a Skarmorite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_127:
# 3173 "data/maps/Hub1/scripts.pory"
	.string "You got a Froslassite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_128:
# 3188 "data/maps/Hub1/scripts.pory"
	.string "You got an Emboarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_129:
# 3203 "data/maps/Hub1/scripts.pory"
	.string "You got an Excadrite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_130:
# 3218 "data/maps/Hub1/scripts.pory"
	.string "You got a Scolipite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_131:
# 3233 "data/maps/Hub1/scripts.pory"
	.string "You got a Scraftinite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_132:
# 3248 "data/maps/Hub1/scripts.pory"
	.string "You got an Eelektrossite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_133:
# 3263 "data/maps/Hub1/scripts.pory"
	.string "You got a Chandelurite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_134:
# 3278 "data/maps/Hub1/scripts.pory"
	.string "You got a Chesnaughtite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_135:
# 3293 "data/maps/Hub1/scripts.pory"
	.string "You got a Delphoxite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_136:
# 3308 "data/maps/Hub1/scripts.pory"
	.string "You got a Greninjite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_137:
# 3323 "data/maps/Hub1/scripts.pory"
	.string "You got a Pyroarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_138:
# 3338 "data/maps/Hub1/scripts.pory"
	.string "You got a Malamarite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_139:
# 3353 "data/maps/Hub1/scripts.pory"
	.string "You got a Barbaracite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_140:
# 3368 "data/maps/Hub1/scripts.pory"
	.string "You got a Dragalgite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_141:
# 3383 "data/maps/Hub1/scripts.pory"
	.string "You got a Hawluchanite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_142:
# 3398 "data/maps/Hub1/scripts.pory"
	.string "You got a Drampanite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_143:
# 3413 "data/maps/Hub1/scripts.pory"
	.string "You got a Falinksite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_144:
# 3428 "data/maps/Hub1/scripts.pory"
	.string "You got a Raichunite X as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_145:
# 3443 "data/maps/Hub1/scripts.pory"
	.string "You got a Raichunite Y as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_146:
# 3458 "data/maps/Hub1/scripts.pory"
	.string "You got a Chimechite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_147:
# 3473 "data/maps/Hub1/scripts.pory"
	.string "You got a Staraptite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_148:
# 3488 "data/maps/Hub1/scripts.pory"
	.string "You got a Golurkite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_149:
# 3503 "data/maps/Hub1/scripts.pory"
	.string "You got a Meowsticite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_150:
# 3518 "data/maps/Hub1/scripts.pory"
	.string "You got a Crabominite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_151:
# 3533 "data/maps/Hub1/scripts.pory"
	.string "You got a Golisopite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_152:
# 3548 "data/maps/Hub1/scripts.pory"
	.string "You got a Scovillainite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_153:
# 3563 "data/maps/Hub1/scripts.pory"
	.string "You got a Glimmoranite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_154:
# 3578 "data/maps/Hub1/scripts.pory"
	.string "You got a Baxcalibrite as a starter\nitem! I hope you put it to good use!$"

Hub_Event_Script_Diancie_Text_155:
# 3585 "data/maps/Hub1/scripts.pory"
	.string "I don't have anything on sale right now,\n"
	.string "sorry.\p"
	.string "Try doing more runs and getting far\n"
	.string "with new pokemon!$"

Hub_Event_Script_Marowak_Text_0:
# 3600 "data/maps/Hub1/scripts.pory"
	.string "Hi. My dojo is closed right now. Maybe it\n"
	.string "will open in a future update.$"

Hub_Event_Script_Chimecho_Text_0:
# 3612 "data/maps/Hub1/scripts.pory"
	.string "Heya. Would you like to\nsee your unlocked starter charms?$"

Hub_Event_Script_Chimecho_Text_1:
# 3616 "data/maps/Hub1/scripts.pory"
	.string "Shiny Starter Charm$"

Hub_Event_Script_Chimecho_Text_2:
# 3617 "data/maps/Hub1/scripts.pory"
	.string "Lump Sum$"

Hub_Event_Script_Chimecho_Text_3:
# 3618 "data/maps/Hub1/scripts.pory"
	.string "Berry Pack$"

Hub_Event_Script_Chimecho_Text_4:
# 3619 "data/maps/Hub1/scripts.pory"
	.string "Tinted Scope$"

Hub_Event_Script_Chimecho_Text_5:
# 3620 "data/maps/Hub1/scripts.pory"
	.string "Normal Charm$"

Hub_Event_Script_Chimecho_Text_6:
# 3621 "data/maps/Hub1/scripts.pory"
	.string "Mint Pot$"

Hub_Event_Script_Chimecho_Text_7:
# 3622 "data/maps/Hub1/scripts.pory"
	.string "Bruxish Floss$"

Hub_Event_Script_Chimecho_Text_8:
# 3623 "data/maps/Hub1/scripts.pory"
	.string "Unown Buddy$"

Hub_Event_Script_Chimecho_Text_9:
# 3628 "data/maps/Hub1/scripts.pory"
	.string "Keep playing more to unlock more\n"
	.string "starter charms!$"

Hub_Event_Script_Chimecho_Text_10:
# 3632 "data/maps/Hub1/scripts.pory"
	.string "Your starter pokemon becomes shiny.$"

Hub_Event_Script_Chimecho_Text_11:
# 3634 "data/maps/Hub1/scripts.pory"
	.string "Gain ¥1500.$"

Hub_Event_Script_Chimecho_Text_12:
# 3636 "data/maps/Hub1/scripts.pory"
	.string "Gain an oran berry, a sitrus berry, and a\n"
	.string "lum berry.$"

Hub_Event_Script_Chimecho_Text_13:
# 3638 "data/maps/Hub1/scripts.pory"
	.string "Your not very effective moves do 1.5\n"
	.string "times more damage.$"

Hub_Event_Script_Chimecho_Text_14:
# 3640 "data/maps/Hub1/scripts.pory"
	.string "Your normal moves do 1.1 times more\n"
	.string "damage.$"

Hub_Event_Script_Chimecho_Text_15:
# 3642 "data/maps/Hub1/scripts.pory"
	.string "Gain 2 random mints at the start of\n"
	.string "each path.$"

Hub_Event_Script_Chimecho_Text_16:
# 3644 "data/maps/Hub1/scripts.pory"
	.string "Your biting moves do 1.2 dmg.$"

Hub_Event_Script_Chimecho_Text_17:
# 3646 "data/maps/Hub1/scripts.pory"
	.string "Get an extra unown at the start of the\n"
	.string "run.$"

Hub_Event_Script_Chimecho_Text_18:
# 3652 "data/maps/Hub1/scripts.pory"
	.string "Ok then! Keep playing more to unlock\n"
	.string "more starter charms!$"

GiveStarterCharm_Text_0:
# 3716 "data/maps/Hub1/scripts.pory"
	.string "Good luck on your run!$"

Hub_Event_Script_Golem_Text_0:
# 3726 "data/maps/Hub1/scripts.pory"
	.string "Diancie over there has a large mega\n"
	.string "stone collection.\p"
	.string "I wonder if she'll start selling them one\n"
	.string "day... I've heard that getting to the\l"
	.string "4th path might do it...\p"
	.string "Not that I would be able to make use of\n"
	.string "one anyway... I wish I had a mega\l"
	.string "evolution...$"

Hub_Event_Script_Golem_Text_1:
# 3728 "data/maps/Hub1/scripts.pory"
	.string "So Diancie's finally started to sell\n"
	.string "mega stones! Apparently if you get to\l"
	.string "the 4th path with a pokemon that can\l"
	.string "mega evolve, she'll start selling that\l"
	.string "pokemon's mega stone.$"

Hub_Event_Script_Togedemaru_Text_0:
# 3740 "data/maps/Hub1/scripts.pory"
	.string "Hey. I'm Togedemaru. I'm spiky and\n"
	.string "round!$"

Hub_Event_Script_Togedemaru_Text_1:
# 3742 "data/maps/Hub1/scripts.pory"
	.string "Hey. In this game, pokemon can have up\n"
	.string "to 4 abilities! Like me! I have Iron\l"
	.string "Barbs, Static, Sturdy and Cute Charm!\l"
	.string "But not all pokemon have as many\l"
	.string "abilites as me hehe.$"

Hub_Event_Script_Klang_Text_0:
# 3752 "data/maps/Hub1/scripts.pory"
	.string "Hello. You should know that the items\n"
	.string "your pokemon are holding before a\l"
	.string "battle are restored at the end of a\l"
	.string "battle.\p"
	.string "This means that the berries your\n"
	.string "pokemon consume will be returned.\p"
	.string "It also means any item you might steal\n"
	.string "during a battle are not kept.$"

Hub_Event_Script_Bruxish_Text_0:
# 3761 "data/maps/Hub1/scripts.pory"
	.string "You want to know how I have such\n"
	.string "beatiful teeth? Well you've got to take\l"
	.string "good care of them of course! Make sure\l"
	.string "to brush twice a day, and floss every\l"
	.string "night!$"

Hub_Event_Script_Bruxish_Text_1:
# 3764 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Bruxish Floss as\na starter charm!$"

Hub_Event_Script_Bruxish_Text_2:
# 3768 "data/maps/Hub1/scripts.pory"
	.string "Don't forget to floss everyday!$"

Hub_Event_Script_Simisage_Text_0:
# 3777 "data/maps/Hub1/scripts.pory"
	.string "Hi. Did you know that in this game, a\n"
	.string "pokemon can learn any TM. That means\l"
	.string "even a grass-type like me can learn a\l"
	.string "fire-type move by TM!\p"
	.string "But of course I won't get a same type\n"
	.string "attack bonus from it.$"

Hub_Event_Script_Woobat_Text_0:
# 3785 "data/maps/Hub1/scripts.pory"
	.string "Did you know that some abilities got\n"
	.string "changed in this game? Like my ability\l"
	.string "Klutz. It still doesn't let me use items,\l"
	.string "but it also gives me a 10% chance to\l"
	.string "dodge moves!$"

Hub_Event_Script_Unown_Text_0:
# 3795 "data/maps/Hub1/scripts.pory"
	.string "Hi. I know I'm a pretty weak pokemon,\n"
	.string "but If you choose me, you'll get an\l"
	.string "extra unown for free, thanks to my Herd\l"
	.string "ability!$"

Hub_Event_Script_Unown_Text_1:
# 3798 "data/maps/Hub1/scripts.pory"
	.string "You unlocked Unown Buddy as\na starter charm!$"

Hub_Event_Script_Unown_Text_2:
# 3802 "data/maps/Hub1/scripts.pory"
	.string "If you choose me, you'll get an\nextra unown as well!$"

Hub_Event_Script_Smoliv_Text_0:
# 3811 "data/maps/Hub1/scripts.pory"
	.string "Hey.\p"
	.string "You should know that the money you get\n"
	.string "during a run (¥) is different to the\l"
	.string "money you spend when you're here at the\l"
	.string "hub (Coins).$"
