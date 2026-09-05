ANCIENT_JIRACHI_MapScripts::
	.byte 0


ANCIENT_JIRACHI_ONWARP::
# 6 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	setvar VAR_TEMP_1, 1
# 7 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	return


ANCIENT_JIRACHI_EventScript_TalkToJirachi::
# 11 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	lockall
# 12 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	faceplayer
# 14 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	msgbox ANCIENT_JIRACHI_EventScript_TalkToJirachi_Text_0
# 15 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	waitmessage
# 16 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	giveitem ITEM_MAX_REVIVE, 2
# 17 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	msgbox ANCIENT_JIRACHI_EventScript_TalkToJirachi_Text_1
# 18 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	giveitem ITEM_TM_DOOM_DESIRE, 1
# 19 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	waitmessage
# 20 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	msgbox ANCIENT_JIRACHI_EventScript_TalkToJirachi_Text_2
# 21 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	closemessage
# 22 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	applymovement LOCALID_PLAYER, ANCIENT_JIRACHI_EventScript_TalkToJirachi_Movement_0
# 27 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	waitmovement
# 28 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	applymovement 1, ANCIENT_JIRACHI_EventScript_TalkToJirachi_Movement_1
# 39 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	waitmovement
# 40 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	applymovement LOCALID_PLAYER, ANCIENT_JIRACHI_EventScript_TalkToJirachi_Movement_2
# 44 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	waitmovement
# 45 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	special BufferCommonItem
# 46 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	giveitem VAR_RESULT, 1
# 47 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	special BufferUncommonItem
# 48 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	giveitem VAR_RESULT, 1
# 49 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	msgbox ANCIENT_JIRACHI_EventScript_TalkToJirachi_Text_3
# 50 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	waitmessage
# 51 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 52 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	msgbox ANCIENT_JIRACHI_EventScript_TalkToJirachi_Text_4
# 53 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	msgbox ANCIENT_JIRACHI_EventScript_TalkToJirachi_Text_5
# 55 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	special WarpToNextAct
# 56 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	releaseall
	return


# 22 "data/maps/ANCIENT_JIRACHI/scripts.pory"
ANCIENT_JIRACHI_EventScript_TalkToJirachi_Movement_0:
# 23 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	jump_in_place_up
# 24 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_fast_left
# 25 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	face_down
	step_end

# 28 "data/maps/ANCIENT_JIRACHI/scripts.pory"
ANCIENT_JIRACHI_EventScript_TalkToJirachi_Movement_1:
# 29 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_fast_down
# 29 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_fast_down
# 29 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_fast_down
# 29 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_fast_down
# 29 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_fast_down
# 30 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_fast_right
# 30 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_fast_right
# 31 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_in_place_fast_down
# 31 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_in_place_fast_down
# 31 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_in_place_fast_down
# 32 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_fast_left
# 32 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_fast_left
# 32 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_fast_left
# 32 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_fast_left
# 33 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_fast_up
# 33 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_fast_up
# 34 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_in_place_fast_left
# 34 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_in_place_fast_left
# 34 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_in_place_fast_left
# 35 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_fast_right
# 35 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_fast_right
# 36 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_fast_up
# 36 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_fast_up
# 36 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_fast_up
# 37 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	face_down
	step_end

# 40 "data/maps/ANCIENT_JIRACHI/scripts.pory"
ANCIENT_JIRACHI_EventScript_TalkToJirachi_Movement_2:
# 41 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	walk_fast_right
# 42 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	face_up
	step_end

ANCIENT_JIRACHI_EventScript_TalkToJirachi_Text_0:
# 14 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	.string "ZZzzzzzz...\p"
	.string "ZZzzzzz.....\p"
	.string "..........\p"
	.string "Oh, hello there. Sorry I was sleeping. I\n"
	.string "am a big sleeper after all. I like to\l"
	.string "sleep for a few hundred years at a time.\l"
	.string "That's not as much as my idol Gudetama\l"
	.string "though. Anyways, you're here for some\l"
	.string "rewards, right? Here, take some Max\l"
	.string "Revives.$"

ANCIENT_JIRACHI_EventScript_TalkToJirachi_Text_1:
# 17 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	.string "Oh. And I don't need this Doom Desire TM\n"
	.string "anymore.$"

ANCIENT_JIRACHI_EventScript_TalkToJirachi_Text_2:
# 20 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	.string "..........\p"
	.string "..............\p"
	.string "What...?\p"
	.string "You wanted a wish? I've already used all\n"
	.string "of them up.\p"
	.string "You'll have to wait another thousand\n"
	.string "years for me to be able to grant\l"
	.string "another wish...\p"
	.string "...........\p"
	.string "I guess I can see if I have some junk I\n"
	.string "can give you lying around...$"

ANCIENT_JIRACHI_EventScript_TalkToJirachi_Text_3:
# 49 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	.string "There ya go! Happy? Now go to the next\n"
	.string "path and let me get back to sleep!$"

ANCIENT_JIRACHI_EventScript_TalkToJirachi_Text_4:
# 52 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	.string "The level cap has been raised to 30$"

ANCIENT_JIRACHI_EventScript_TalkToJirachi_Text_5:
# 53 "data/maps/ANCIENT_JIRACHI/scripts.pory"
	.string "Get on with it!\nShoo, shoo!$"
