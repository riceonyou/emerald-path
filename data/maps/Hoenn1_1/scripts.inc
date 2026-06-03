Hoenn1_1_MapScripts::
# 2 "data/maps/Hoenn1_1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Hoenn1_1_OnLoad
	.byte 0


Hoenn1_1_OnLoad::
# 6 "data/maps/Hoenn1_1/scripts.pory"
	setvar B_LEVEL_CAP_VARIABLE, 14
# 7 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 8 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	return


Hoenn1_1_EventScript_Sign::
# 12 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 14 "data/maps/Hoenn1_1/scripts.pory"
	goto_if_set FLAG_NUZLOCKETEST, Hoenn1_1_EventScript_Sign_2
# 18 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Sign_Text_1
Hoenn1_1_EventScript_Sign_1:
# 21 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 22 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	return

Hoenn1_1_EventScript_Sign_2:
# 15 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Sign_Text_0
	goto Hoenn1_1_EventScript_Sign_1


Hoenn1_1_EventScript_Pokeball::
# 27 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 29 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_CANDY_JAR
# 30 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 31 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 5
# 32 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_MEMORY_MUSHROOM, 5
# 33 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_HEAL_EVERY_BATTLE
# 35 "data/maps/Hoenn1_1/scripts.pory"
	playse SE_CLICK
# 36 "data/maps/Hoenn1_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 37 "data/maps/Hoenn1_1/scripts.pory"
	setvar VAR_0x8000, 0
# 38 "data/maps/Hoenn1_1/scripts.pory"
	special LoadBirchBagPoolById
# 39 "data/maps/Hoenn1_1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 40 "data/maps/Hoenn1_1/scripts.pory"
	waitstate
# 42 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_1_BIRCHBAG
# 43 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_HOENN1_1_BIRCHBAG
# 44 "data/maps/Hoenn1_1/scripts.pory"
	playfanfare MUS_EVOLVED
# 45 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_0
# 47 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 48 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


NicknamePartyMon::
# 55 "data/maps/Hoenn1_1/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 56 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 57 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 58 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 59 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 67 "data/maps/Hoenn1_1/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 68 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 69 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 72 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 70 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


Hoenn1_1_EventScript_Sign_Text_0:
# 15 "data/maps/Hoenn1_1/scripts.pory"
	.string "Location is used$"

Hoenn1_1_EventScript_Sign_Text_1:
# 18 "data/maps/Hoenn1_1/scripts.pory"
	.string "Location is unused$"

Hoenn1_1_EventScript_Pokeball_Text_0:
# 45 "data/maps/Hoenn1_1/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

NicknamePartyMon_Text_0:
# 55 "data/maps/Hoenn1_1/scripts.pory"
	.string "Give it a nickname?$"

Hoenn1_1__NotChosen::
# 76 "data/maps/Hoenn1_1/scripts.pory"
	.string "You did not choose the Pokemon$"
