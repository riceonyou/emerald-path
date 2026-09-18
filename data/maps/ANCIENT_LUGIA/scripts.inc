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
# 24 "data/maps/ANCIENT_LUGIA/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 25 "data/maps/ANCIENT_LUGIA/scripts.pory"
	waitmoncry
# 26 "data/maps/ANCIENT_LUGIA/scripts.pory"
	msgbox ANCIENT_LUGIA_EventScript_Sign_Text_0
# 27 "data/maps/ANCIENT_LUGIA/scripts.pory"
	waitmessage
# 28 "data/maps/ANCIENT_LUGIA/scripts.pory"
	applymovement 1, ANCIENT_LUGIA_EventScript_Sign_Movement_0
# 31 "data/maps/ANCIENT_LUGIA/scripts.pory"
	waitmovement
# 32 "data/maps/ANCIENT_LUGIA/scripts.pory"
	fadescreen FADE_TO_BLACK
# 33 "data/maps/ANCIENT_LUGIA/scripts.pory"
	setvar VAR_0x8000, 38
# 34 "data/maps/ANCIENT_LUGIA/scripts.pory"
	special LoadBirchBagPoolById
# 35 "data/maps/ANCIENT_LUGIA/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 36 "data/maps/ANCIENT_LUGIA/scripts.pory"
	waitstate
# 37 "data/maps/ANCIENT_LUGIA/scripts.pory"
	playfanfare MUS_EVOLVED
# 38 "data/maps/ANCIENT_LUGIA/scripts.pory"
	msgbox ANCIENT_LUGIA_EventScript_Sign_Text_1
# 39 "data/maps/ANCIENT_LUGIA/scripts.pory"
	msgbox ANCIENT_LUGIA_EventScript_Sign_Text_2
# 40 "data/maps/ANCIENT_LUGIA/scripts.pory"
	waitmessage
# 41 "data/maps/ANCIENT_LUGIA/scripts.pory"
	applymovement 1, ANCIENT_LUGIA_EventScript_Sign_Movement_0
# 44 "data/maps/ANCIENT_LUGIA/scripts.pory"
	waitmovement
# 45 "data/maps/ANCIENT_LUGIA/scripts.pory"
	giveitem ITEM_LUGIA_PLATE_CHARM, 1
# 46 "data/maps/ANCIENT_LUGIA/scripts.pory"
	waitmessage
# 48 "data/maps/ANCIENT_LUGIA/scripts.pory"
	msgbox ANCIENT_LUGIA_EventScript_Sign_Text_3
# 50 "data/maps/ANCIENT_LUGIA/scripts.pory"
	special WarpToNextAct
# 51 "data/maps/ANCIENT_LUGIA/scripts.pory"
	releaseall
	return


# 14 "data/maps/ANCIENT_LUGIA/scripts.pory"
ANCIENT_LUGIA_EventScript_TalkToLugia_Movement_0:
# 15 "data/maps/ANCIENT_LUGIA/scripts.pory"
	face_down
	step_end

# 28 "data/maps/ANCIENT_LUGIA/scripts.pory"
ANCIENT_LUGIA_EventScript_Sign_Movement_0:
# 29 "data/maps/ANCIENT_LUGIA/scripts.pory"
	walk_in_place_down
# 29 "data/maps/ANCIENT_LUGIA/scripts.pory"
	walk_in_place_down
	step_end

ANCIENT_LUGIA_EventScript_TalkToLugia_Text_0:
# 12 "data/maps/ANCIENT_LUGIA/scripts.pory"
	.string "Oh, hey...\p"
	.string "Umm......\p"
	.string "Could you talk to me from below the\n"
	.string "altar? It's a lot cooler that way, no?$"

ANCIENT_LUGIA_EventScript_Sign_Text_0:
# 26 "data/maps/ANCIENT_LUGIA/scripts.pory"
	.string "Good job on defeating the first path!\n"
	.string "Please let on of my flying pokemon\l"
	.string "friends join you!$"

ANCIENT_LUGIA_EventScript_Sign_Text_1:
# 38 "data/maps/ANCIENT_LUGIA/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

ANCIENT_LUGIA_EventScript_Sign_Text_2:
# 39 "data/maps/ANCIENT_LUGIA/scripts.pory"
	.string "And have one of my moulten back plates!\n"
	.string "With that, now your pokemon won't take\l"
	.string "bonus super-effective damage on the\l"
	.string "first turn of the battle!.$"

ANCIENT_LUGIA_EventScript_Sign_Text_3:
# 48 "data/maps/ANCIENT_LUGIA/scripts.pory"
	.string "I hope the rest of your journey\ngoes well!$"
