ANCIENT_GROUDON_MapScripts::
	.byte 0


ANCIENT_GROUDON_EventScript_Groudon::
# 6 "data/maps/ANCIENT_GROUDON/scripts.pory"
	lockall
# 9 "data/maps/ANCIENT_GROUDON/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 10 "data/maps/ANCIENT_GROUDON/scripts.pory"
	waitmoncry
# 11 "data/maps/ANCIENT_GROUDON/scripts.pory"
	applymovement 1, ANCIENT_GROUDON_EventScript_Groudon_Movement_0
# 16 "data/maps/ANCIENT_GROUDON/scripts.pory"
	waitmovement
# 17 "data/maps/ANCIENT_GROUDON/scripts.pory"
	msgbox ANCIENT_GROUDON_EventScript_Groudon_Text_0
# 18 "data/maps/ANCIENT_GROUDON/scripts.pory"
	waitmessage
# 19 "data/maps/ANCIENT_GROUDON/scripts.pory"
	giveitem ITEM_MAXIES_GLASSES_CHARM, 1
# 20 "data/maps/ANCIENT_GROUDON/scripts.pory"
	msgbox ANCIENT_GROUDON_EventScript_Groudon_Text_1
# 21 "data/maps/ANCIENT_GROUDON/scripts.pory"
	waitmessage
# 22 "data/maps/ANCIENT_GROUDON/scripts.pory"
	fadescreen FADE_TO_BLACK
# 23 "data/maps/ANCIENT_GROUDON/scripts.pory"
	setvar VAR_0x8000, 30
# 24 "data/maps/ANCIENT_GROUDON/scripts.pory"
	special LoadBirchBagPoolById
# 25 "data/maps/ANCIENT_GROUDON/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 26 "data/maps/ANCIENT_GROUDON/scripts.pory"
	waitstate
# 27 "data/maps/ANCIENT_GROUDON/scripts.pory"
	msgbox ANCIENT_GROUDON_EventScript_Groudon_Text_2
# 28 "data/maps/ANCIENT_GROUDON/scripts.pory"
	waitmessage
# 29 "data/maps/ANCIENT_GROUDON/scripts.pory"
	giveitem ITEM_TM_SUNNY_DAY, 1
# 30 "data/maps/ANCIENT_GROUDON/scripts.pory"
	waitmessage
# 31 "data/maps/ANCIENT_GROUDON/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 32 "data/maps/ANCIENT_GROUDON/scripts.pory"
	msgbox ANCIENT_GROUDON_EventScript_Groudon_Text_3
# 33 "data/maps/ANCIENT_GROUDON/scripts.pory"
	waitmessage
# 34 "data/maps/ANCIENT_GROUDON/scripts.pory"
	applymovement 1, ANCIENT_GROUDON_EventScript_Groudon_Movement_0
# 39 "data/maps/ANCIENT_GROUDON/scripts.pory"
	waitmovement
# 40 "data/maps/ANCIENT_GROUDON/scripts.pory"
	msgbox ANCIENT_GROUDON_EventScript_Groudon_Text_4
# 41 "data/maps/ANCIENT_GROUDON/scripts.pory"
	applymovement 1, ANCIENT_GROUDON_EventScript_Groudon_Movement_1
# 48 "data/maps/ANCIENT_GROUDON/scripts.pory"
	waitmovement
# 49 "data/maps/ANCIENT_GROUDON/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 50 "data/maps/ANCIENT_GROUDON/scripts.pory"
	waitmoncry
# 52 "data/maps/ANCIENT_GROUDON/scripts.pory"
	special WarpToNextAct
# 53 "data/maps/ANCIENT_GROUDON/scripts.pory"
	releaseall
	return


# 11 "data/maps/ANCIENT_GROUDON/scripts.pory"
ANCIENT_GROUDON_EventScript_Groudon_Movement_0:
# 12 "data/maps/ANCIENT_GROUDON/scripts.pory"
	jump_in_place_down_up
# 13 "data/maps/ANCIENT_GROUDON/scripts.pory"
	jump_in_place_left_right
# 14 "data/maps/ANCIENT_GROUDON/scripts.pory"
	face_player
	step_end

# 41 "data/maps/ANCIENT_GROUDON/scripts.pory"
ANCIENT_GROUDON_EventScript_Groudon_Movement_1:
# 42 "data/maps/ANCIENT_GROUDON/scripts.pory"
	face_left
# 43 "data/maps/ANCIENT_GROUDON/scripts.pory"
	face_up
# 44 "data/maps/ANCIENT_GROUDON/scripts.pory"
	face_right
# 45 "data/maps/ANCIENT_GROUDON/scripts.pory"
	face_down
# 46 "data/maps/ANCIENT_GROUDON/scripts.pory"
	face_player
	step_end

ANCIENT_GROUDON_EventScript_Groudon_Text_0:
# 17 "data/maps/ANCIENT_GROUDON/scripts.pory"
	.string "Grrooaa!\p"
	.string "You beat the first 3 paths! That\n"
	.string "must've been difficult!\n"
	.string "Here. I have something for you.$"

ANCIENT_GROUDON_EventScript_Groudon_Text_1:
# 20 "data/maps/ANCIENT_GROUDON/scripts.pory"
	.string "It once belonged to a friend of mine.\n"
	.string "But that was a long time ago.\p"
	.string "While you have that item, all of your\n"
	.string "moves do 1.5 damage in the harsh\l"
	.string "sunlight. Not just your fire type moves.\p"
	.string "And I think a pokemon with the Drought\n"
	.string "ability would be of good use to you, no?$"

ANCIENT_GROUDON_EventScript_Groudon_Text_2:
# 27 "data/maps/ANCIENT_GROUDON/scripts.pory"
	.string "And please take a Sunny Day TM too.$"

ANCIENT_GROUDON_EventScript_Groudon_Text_3:
# 32 "data/maps/ANCIENT_GROUDON/scripts.pory"
	.string "The level cap has been raised to 50$"

ANCIENT_GROUDON_EventScript_Groudon_Text_4:
# 40 "data/maps/ANCIENT_GROUDON/scripts.pory"
	.string "The final path lays before you. It'll be\n"
	.string "different to all the earlier paths in\l"
	.string "that there won't be any birch bags or\l"
	.string "items lying around. And everyone you'll\l"
	.string "have to face will be extremely\l"
	.string "challenging. But I'm sure you can do it!\l"
	.string "I'm rooting for you!$"
