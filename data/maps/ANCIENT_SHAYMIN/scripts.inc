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
	msgbox ANCIENT_SHAYMIN_EventScript_TalkToShaymin_Text_0
# 19 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	waitmessage
# 20 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	fadescreen FADE_TO_BLACK
# 21 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	setvar VAR_0x8000, 36
# 22 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	special LoadBirchBagPoolById
# 23 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 24 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	waitstate
# 25 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	playfanfare MUS_EVOLVED
# 26 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	msgbox ANCIENT_SHAYMIN_EventScript_TalkToShaymin_Text_1
# 27 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	msgbox ANCIENT_SHAYMIN_EventScript_TalkToShaymin_Text_2
# 28 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED, 1
# 29 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	waitmessage
# 30 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	msgbox ANCIENT_SHAYMIN_EventScript_TalkToShaymin_Text_3
# 34 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	giveitem ITEM_ORAN_CHARM, 1
# 35 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	waitmessage
# 36 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 37 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	msgbox ANCIENT_SHAYMIN_EventScript_TalkToShaymin_Text_4
# 39 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	msgbox ANCIENT_SHAYMIN_EventScript_TalkToShaymin_Text_5
# 44 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	special WarpToNextAct
# 45 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	releaseall
	return


ANCIENT_SHAYMIN_EventScript_TalkToShaymin_Text_0:
# 13 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	.string "Hello there! I congratulate you on\n"
	.string "completing the first path! But the\l"
	.string "road ahead is long and treacherous.\p"
	.string "So I have some gifts for you prepared!\n"
	.string "Please take one of these pokemon!$"

ANCIENT_SHAYMIN_EventScript_TalkToShaymin_Text_1:
# 26 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

ANCIENT_SHAYMIN_EventScript_TalkToShaymin_Text_2:
# 27 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	.string "And a Bullet Seed TM!$"

ANCIENT_SHAYMIN_EventScript_TalkToShaymin_Text_3:
# 30 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	.string "And an Oran Charm! With this charm,\n"
	.string "everytime you enter a battle, your\l"
	.string "pokemon without items will\l"
	.string "automatically be given an oran berry!$"

ANCIENT_SHAYMIN_EventScript_TalkToShaymin_Text_4:
# 37 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	.string "The level cap has been raised to 30$"

ANCIENT_SHAYMIN_EventScript_TalkToShaymin_Text_5:
# 39 "data/maps/ANCIENT_SHAYMIN/scripts.pory"
	.string "I hope my gifts will help you out.\p"
	.string "Now time to get you to the next\n"
	.string "path.$"
