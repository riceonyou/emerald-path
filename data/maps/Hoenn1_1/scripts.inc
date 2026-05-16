Hoenn1_1_MapScripts::
# 2 "data/maps/Hoenn1_1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Hoenn1_1_OnLoad
	.byte 0


Hoenn1_1_OnLoad::
# 6 "data/maps/Hoenn1_1/scripts.pory"
	setvar B_LEVEL_CAP_VARIABLE, 14
	return


Hoenn1_1_EventScript_Pokeball::
# 11 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 12 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 13 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 14 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_MASTER_BALL, 10
# 15 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 100
# 16 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_CANDY_JAR
# 17 "data/maps/Hoenn1_1/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 18 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_0, MSGBOX_YESNO
# 19 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Hoenn1_1_EventScript_Pokeball_2
# 41 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 42 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1__NotChosen
Hoenn1_1_EventScript_Pokeball_1:
# 44 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 45 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end

Hoenn1_1_EventScript_Pokeball_2:
# 20 "data/maps/Hoenn1_1/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_MASTER_BALL
# 21 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Hoenn1_1_EventScript_Pokeball_5
# 28 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Hoenn1_1_EventScript_Pokeball_6
# 36 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 37 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_2
	goto Hoenn1_1_EventScript_Pokeball_1

Hoenn1_1_EventScript_Pokeball_5:
# 22 "data/maps/Hoenn1_1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 23 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_1
# 24 "data/maps/Hoenn1_1/scripts.pory"
	removeobject 1
# 25 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 26 "data/maps/Hoenn1_1/scripts.pory"
	call NicknamePartyMon
	goto Hoenn1_1_EventScript_Pokeball_1

Hoenn1_1_EventScript_Pokeball_6:
# 29 "data/maps/Hoenn1_1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 30 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_1
# 31 "data/maps/Hoenn1_1/scripts.pory"
	removeobject 1
# 32 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 33 "data/maps/Hoenn1_1/scripts.pory"
	call NicknameBoxMon
	goto Hoenn1_1_EventScript_Pokeball_1


NicknamePartyMon::
# 52 "data/maps/Hoenn1_1/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 53 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 54 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 55 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 56 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 64 "data/maps/Hoenn1_1/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 65 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 66 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 69 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 67 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


Hoenn1_1_EventScript_Pokeball_Text_0:
# 18 "data/maps/Hoenn1_1/scripts.pory"
	.string "Do you want to choose Torchic?$"

Hoenn1_1_EventScript_Pokeball_Text_1:
# 23 "data/maps/Hoenn1_1/scripts.pory"
	.string "Recieved Torchic$"

Hoenn1_1_EventScript_Pokeball_Text_2:
# 37 "data/maps/Hoenn1_1/scripts.pory"
	.string "No More Room$"

NicknamePartyMon_Text_0:
# 52 "data/maps/Hoenn1_1/scripts.pory"
	.string "Give it a nickname?$"

Hoenn1_1__NotChosen::
# 73 "data/maps/Hoenn1_1/scripts.pory"
	.string "You did not choose the Pokemon$"
