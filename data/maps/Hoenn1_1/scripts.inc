Hoenn1_1_MapScripts::
# 2 "data/maps/Hoenn1_1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Hoenn1_1_OnLoad
# 3 "data/maps/Hoenn1_1/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Hoenn1_1_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Hoenn1_1_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/Hoenn1_1/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ONWARP
	.2byte 0


ONWARP::
# 7 "data/maps/Hoenn1_1/scripts.pory"
	setvar VAR_TEMP_1, 1
# 8 "data/maps/Hoenn1_1/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	return


Hoenn1_1_OnLoad::
# 12 "data/maps/Hoenn1_1/scripts.pory"
	setvar B_LEVEL_CAP_VARIABLE, 14
# 13 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 14 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	return


Hoenn1_1_EventScript_Sign::
# 18 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 20 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Sign_Text_0
# 22 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 23 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	return


Hoenn1_1_EventScript_Pokeball::
# 28 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 30 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_CANDY_JAR
# 31 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 32 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 5
# 33 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 5
# 34 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_HEAL_EVERY_BATTLE
# 36 "data/maps/Hoenn1_1/scripts.pory"
	playse SE_CLICK
# 37 "data/maps/Hoenn1_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 38 "data/maps/Hoenn1_1/scripts.pory"
	setvar VAR_0x8000, 0
# 39 "data/maps/Hoenn1_1/scripts.pory"
	special LoadBirchBagPoolById
# 40 "data/maps/Hoenn1_1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 41 "data/maps/Hoenn1_1/scripts.pory"
	waitstate
# 43 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_1_BIRCHBAG
# 44 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_HOENN1_1_BIRCHBAG
# 45 "data/maps/Hoenn1_1/scripts.pory"
	playfanfare MUS_EVOLVED
# 46 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_0
# 48 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 49 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


NicknamePartyMon::
# 56 "data/maps/Hoenn1_1/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 57 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 58 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 59 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 60 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 68 "data/maps/Hoenn1_1/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 69 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 70 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 73 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 71 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


Hoenn1_1_EventScript_Sign_Text_0:
# 20 "data/maps/Hoenn1_1/scripts.pory"
	.string "test$"

Hoenn1_1_EventScript_Pokeball_Text_0:
# 46 "data/maps/Hoenn1_1/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

NicknamePartyMon_Text_0:
# 56 "data/maps/Hoenn1_1/scripts.pory"
	.string "Give it a nickname?$"

Hoenn1_1__NotChosen::
# 77 "data/maps/Hoenn1_1/scripts.pory"
	.string "You did not choose the Pokemon$"
