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
	goto_if_set FLAG_NUZLOCKE, Hoenn1_1_EventScript_Pokeball_2
Hoenn1_1_EventScript_Pokeball_1:
# 34 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_MASTER_BALL, 10
# 35 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 100
# 36 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_CANDY_JAR
# 37 "data/maps/Hoenn1_1/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 38 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_1, MSGBOX_YESNO
# 39 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Hoenn1_1_EventScript_Pokeball_5
# 61 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 62 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1__NotChosen
Hoenn1_1_EventScript_Pokeball_4:
# 64 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 65 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end

Hoenn1_1_EventScript_Pokeball_2:
# 30 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_0
	goto Hoenn1_1_EventScript_Pokeball_1

Hoenn1_1_EventScript_Pokeball_5:
# 40 "data/maps/Hoenn1_1/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_MASTER_BALL
# 41 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Hoenn1_1_EventScript_Pokeball_8
# 48 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Hoenn1_1_EventScript_Pokeball_9
# 56 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 57 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_3
	goto Hoenn1_1_EventScript_Pokeball_4

Hoenn1_1_EventScript_Pokeball_8:
# 42 "data/maps/Hoenn1_1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 43 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_2
# 44 "data/maps/Hoenn1_1/scripts.pory"
	removeobject 1
# 45 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 46 "data/maps/Hoenn1_1/scripts.pory"
	call NicknamePartyMon
	goto Hoenn1_1_EventScript_Pokeball_4

Hoenn1_1_EventScript_Pokeball_9:
# 49 "data/maps/Hoenn1_1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 50 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_2
# 51 "data/maps/Hoenn1_1/scripts.pory"
	removeobject 1
# 52 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 53 "data/maps/Hoenn1_1/scripts.pory"
	call NicknameBoxMon
	goto Hoenn1_1_EventScript_Pokeball_4


NicknamePartyMon::
# 72 "data/maps/Hoenn1_1/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 73 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 74 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 75 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 76 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 84 "data/maps/Hoenn1_1/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 85 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 86 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 89 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 87 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


Hoenn1_1_EventScript_Sign_Text_0:
# 15 "data/maps/Hoenn1_1/scripts.pory"
	.string "Location is used$"

Hoenn1_1_EventScript_Sign_Text_1:
# 18 "data/maps/Hoenn1_1/scripts.pory"
	.string "Location is unused$"

Hoenn1_1_EventScript_Pokeball_Text_0:
# 30 "data/maps/Hoenn1_1/scripts.pory"
	.string "nuzlockemodeison$"

Hoenn1_1_EventScript_Pokeball_Text_1:
# 38 "data/maps/Hoenn1_1/scripts.pory"
	.string "Do you want to choose Torchic?$"

Hoenn1_1_EventScript_Pokeball_Text_2:
# 43 "data/maps/Hoenn1_1/scripts.pory"
	.string "Recieved Torchic$"

Hoenn1_1_EventScript_Pokeball_Text_3:
# 57 "data/maps/Hoenn1_1/scripts.pory"
	.string "No More Room$"

NicknamePartyMon_Text_0:
# 72 "data/maps/Hoenn1_1/scripts.pory"
	.string "Give it a nickname?$"

Hoenn1_1__NotChosen::
# 93 "data/maps/Hoenn1_1/scripts.pory"
	.string "You did not choose the Pokemon$"
