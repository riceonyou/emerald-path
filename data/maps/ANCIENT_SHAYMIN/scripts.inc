ANCIENT_SHAYMIN_MapScripts::
# 2 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ANCIENT_SHAYMIN_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

ANCIENT_SHAYMIN_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 2 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ANCIENT_SHAYMIN_ONWARP
	.2byte 0


ANCIENT_SHAYMIN_ONWARP::
# 5 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	setvar VAR_TEMP_1, 1
# 6 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	return


ANCIENT_SHAYMIN_EventScript_TalkToShaymin::
# 10 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	lockall
# 11 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	faceplayer
# 13 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	playmoncry SPECIES_SHAYMIN, CRY_MODE_ENCOUNTER
# 14 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	waitmoncry
# 15 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	msgbox ANCIENT_SHAYMIN_EventScript_TalkToShaymin_Text_0
# 21 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	waitmessage
# 22 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	fadescreen FADE_TO_BLACK
# 23 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	setvar VAR_0x8000, 36
# 24 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	special LoadBirchBagPoolById
# 25 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 26 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	waitstate
# 28 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	msgbox ANCIENT_SHAYMIN_EventScript_TalkToShaymin_Text_1
# 29 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED, 1
# 30 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	waitmessage
# 31 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	msgbox ANCIENT_SHAYMIN_EventScript_TalkToShaymin_Text_2
# 35 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	giveitem ITEM_ORAN_CHARM, 1
# 36 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	waitmessage
# 37 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 38 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	msgbox ANCIENT_SHAYMIN_EventScript_TalkToShaymin_Text_3
# 39 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	waitmessage
# 40 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	playmoncry SPECIES_MANAPHY, CRY_MODE_ENCOUNTER
# 41 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	waitmoncry
# 42 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	msgbox ANCIENT_SHAYMIN_EventScript_TalkToShaymin_Text_4
# 47 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	special WarpToNextAct
# 48 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	releaseall
	return


ANCIENT_SHAYMIN_EventScript_TalkToShaymin_Text_0:
# 15 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	.string "Hello there! I congratulate you on\n"
	.string "completing the first path! But the\l"
	.string "road ahead is long and treacherous.\p"
	.string "So I have some gifts for you prepared!\n"
	.string "Please take one of these pokemon!$"

ANCIENT_SHAYMIN_EventScript_TalkToShaymin_Text_1:
# 28 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	.string "And a Bullet Seed TM!$"

ANCIENT_SHAYMIN_EventScript_TalkToShaymin_Text_2:
# 31 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	.string "And an Oran Charm! With this charm,\n"
	.string "everytime you enter a battle, your\l"
	.string "pokemon without items will\l"
	.string "automatically be given an oran berry!$"

ANCIENT_SHAYMIN_EventScript_TalkToShaymin_Text_3:
# 38 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	.string "The level cap has been raised to 30$"

ANCIENT_SHAYMIN_EventScript_TalkToShaymin_Text_4:
# 42 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	.string "I hope my gifts will help you out.\p"
	.string "Now time to get you to the next\n"
	.string "path.$"
