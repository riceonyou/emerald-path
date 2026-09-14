ANCIENT_LUGIA_MapScripts::
# 2 "data/maps/ANCIENT_LUGIA/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ANCIENT_LUGIA_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

ANCIENT_LUGIA_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 2 "data/maps/ANCIENT_LUGIA/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ANCIENT_LUGIA_ONWARP
	.2byte 0


ANCIENT_LUGIA_ONWARP::
# 5 "data/maps/ANCIENT_LUGIA/scripts.pory"
	setvar VAR_TEMP_1, 1
# 6 "data/maps/ANCIENT_LUGIA/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	return


ANCIENT_LUGIA_EventScript_TalkToLugia::
# 10 "data/maps/ANCIENT_LUGIA/scripts.pory"
	lockall
# 11 "data/maps/ANCIENT_LUGIA/scripts.pory"
	faceplayer
# 12 "data/maps/ANCIENT_LUGIA/scripts.pory"
	msgbox ANCIENT_LUGIA_EventScript_TalkToLugia_Text_0
# 13 "data/maps/ANCIENT_LUGIA/scripts.pory"
	waitmessage
# 14 "data/maps/ANCIENT_LUGIA/scripts.pory"
	applymovement 1, ANCIENT_LUGIA_EventScript_TalkToLugia_Movement_0
# 17 "data/maps/ANCIENT_LUGIA/scripts.pory"
	waitmovement
# 18 "data/maps/ANCIENT_LUGIA/scripts.pory"
	releaseall
	return


ANCIENT_LUGIA_EventScript_Sign::
# 22 "data/maps/ANCIENT_LUGIA/scripts.pory"
	lockall
# 25 "data/maps/ANCIENT_LUGIA/scripts.pory"
	msgbox ANCIENT_LUGIA_EventScript_Sign_Text_0
# 26 "data/maps/ANCIENT_LUGIA/scripts.pory"
	waitmessage
# 27 "data/maps/ANCIENT_LUGIA/scripts.pory"
	fadescreen FADE_TO_BLACK
# 28 "data/maps/ANCIENT_LUGIA/scripts.pory"
	setvar VAR_0x8000, 38
# 29 "data/maps/ANCIENT_LUGIA/scripts.pory"
	special LoadBirchBagPoolById
# 30 "data/maps/ANCIENT_LUGIA/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 31 "data/maps/ANCIENT_LUGIA/scripts.pory"
	waitstate
# 33 "data/maps/ANCIENT_LUGIA/scripts.pory"
	msgbox ANCIENT_LUGIA_EventScript_Sign_Text_1
# 34 "data/maps/ANCIENT_LUGIA/scripts.pory"
	giveitem ITEM_TM_RAIN_DANCE, 1
# 35 "data/maps/ANCIENT_LUGIA/scripts.pory"
	waitmessage
# 36 "data/maps/ANCIENT_LUGIA/scripts.pory"
	msgbox ANCIENT_LUGIA_EventScript_Sign_Text_2
# 37 "data/maps/ANCIENT_LUGIA/scripts.pory"
	giveitem ITEM_PHIONE_EGG_CHARM, 1
# 38 "data/maps/ANCIENT_LUGIA/scripts.pory"
	waitmessage
# 39 "data/maps/ANCIENT_LUGIA/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 40 "data/maps/ANCIENT_LUGIA/scripts.pory"
	msgbox ANCIENT_LUGIA_EventScript_Sign_Text_3
# 41 "data/maps/ANCIENT_LUGIA/scripts.pory"
	msgbox ANCIENT_LUGIA_EventScript_Sign_Text_4
# 43 "data/maps/ANCIENT_LUGIA/scripts.pory"
	special WarpToNextAct
# 44 "data/maps/ANCIENT_LUGIA/scripts.pory"
	releaseall
	return


# 14 "data/maps/ANCIENT_LUGIA/scripts.pory"
ANCIENT_LUGIA_EventScript_TalkToLugia_Movement_0:
# 15 "data/maps/ANCIENT_LUGIA/scripts.pory"
	face_down
	step_end

ANCIENT_LUGIA_EventScript_TalkToLugia_Text_0:
# 12 "data/maps/ANCIENT_LUGIA/scripts.pory"
	.string "Oh, hey...\p"
	.string "Umm...\p"
	.string "Could you talk to me from below the\n"
	.string "altar? It's a lot cooler that way, no?$"

ANCIENT_LUGIA_EventScript_Sign_Text_0:
# 25 "data/maps/ANCIENT_LUGIA/scripts.pory"
	.string "Heya!\nGood job on beating the first path!\lI've got a bunch of goodies to give you!\lHere's a water pokemon!$"

ANCIENT_LUGIA_EventScript_Sign_Text_1:
# 33 "data/maps/ANCIENT_LUGIA/scripts.pory"
	.string "And a Rain Dance TM!$"

ANCIENT_LUGIA_EventScript_Sign_Text_2:
# 36 "data/maps/ANCIENT_LUGIA/scripts.pory"
	.string "And a Phione Egg!\lThe egg will hatch into a phione\lafter you complete the next act!\lPhione is a great rain pokemon!$"

ANCIENT_LUGIA_EventScript_Sign_Text_3:
# 40 "data/maps/ANCIENT_LUGIA/scripts.pory"
	.string "The level cap has been raised to 30$"

ANCIENT_LUGIA_EventScript_Sign_Text_4:
# 41 "data/maps/ANCIENT_LUGIA/scripts.pory"
	.string "That's all from me!\lNow lets get ya to the next path!$"
