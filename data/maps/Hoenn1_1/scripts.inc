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


Hoenn1_1_EventScript_Pokeball::
# 13 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 15 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_MASTER_BALL, 10
# 16 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 100
# 17 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_CANDY_JAR
# 18 "data/maps/Hoenn1_1/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 19 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_0, MSGBOX_YESNO
# 20 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Hoenn1_1_EventScript_Pokeball_2
# 42 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 43 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1__NotChosen
Hoenn1_1_EventScript_Pokeball_1:
# 45 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 46 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end

Hoenn1_1_EventScript_Pokeball_2:
# 21 "data/maps/Hoenn1_1/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_MASTER_BALL
# 22 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Hoenn1_1_EventScript_Pokeball_5
# 29 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Hoenn1_1_EventScript_Pokeball_6
# 37 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 38 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_2
	goto Hoenn1_1_EventScript_Pokeball_1

Hoenn1_1_EventScript_Pokeball_5:
# 23 "data/maps/Hoenn1_1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 24 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_1
# 25 "data/maps/Hoenn1_1/scripts.pory"
	removeobject 1
# 26 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 27 "data/maps/Hoenn1_1/scripts.pory"
	call NicknamePartyMon
	goto Hoenn1_1_EventScript_Pokeball_1

Hoenn1_1_EventScript_Pokeball_6:
# 30 "data/maps/Hoenn1_1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 31 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_1
# 32 "data/maps/Hoenn1_1/scripts.pory"
	removeobject 1
# 33 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 34 "data/maps/Hoenn1_1/scripts.pory"
	call NicknameBoxMon
	goto Hoenn1_1_EventScript_Pokeball_1


NicknamePartyMon::
# 53 "data/maps/Hoenn1_1/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 54 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 55 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 56 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 57 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 65 "data/maps/Hoenn1_1/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 66 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 67 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 70 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 68 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


Hoenn1_1_EventScript_Pokeball_Text_0:
# 19 "data/maps/Hoenn1_1/scripts.pory"
	.string "Do you want to choose Torchic?$"

Hoenn1_1_EventScript_Pokeball_Text_1:
# 24 "data/maps/Hoenn1_1/scripts.pory"
	.string "Recieved Torchic$"

Hoenn1_1_EventScript_Pokeball_Text_2:
# 38 "data/maps/Hoenn1_1/scripts.pory"
	.string "No More Room$"

NicknamePartyMon_Text_0:
# 53 "data/maps/Hoenn1_1/scripts.pory"
	.string "Give it a nickname?$"

Hoenn1_1__NotChosen::
# 74 "data/maps/Hoenn1_1/scripts.pory"
	.string "You did not choose the Pokemon$"
