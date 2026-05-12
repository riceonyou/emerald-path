Hoenn1_1_MapScripts::
	.byte 0


Hoenn1_1_EventScript_Pokeball::
# 6 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 7 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 8 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 9 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_MASTER_BALL, 10
# 10 "data/maps/Hoenn1_1/scripts.pory"
	giveitem ITEM_RARE_CANDY, 10
# 11 "data/maps/Hoenn1_1/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 12 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_0, MSGBOX_YESNO
# 13 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Hoenn1_1_EventScript_Pokeball_2
# 35 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 36 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1__NotChosen
Hoenn1_1_EventScript_Pokeball_1:
# 38 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 39 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end

Hoenn1_1_EventScript_Pokeball_2:
# 14 "data/maps/Hoenn1_1/scripts.pory"
	givemon SPECIES_TORCHIC, 50, ITEM_MASTER_BALL
# 15 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Hoenn1_1_EventScript_Pokeball_5
# 22 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Hoenn1_1_EventScript_Pokeball_6
# 30 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 31 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_2
	goto Hoenn1_1_EventScript_Pokeball_1

Hoenn1_1_EventScript_Pokeball_5:
# 16 "data/maps/Hoenn1_1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 17 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_1
# 18 "data/maps/Hoenn1_1/scripts.pory"
	removeobject 1
# 19 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 20 "data/maps/Hoenn1_1/scripts.pory"
	call NicknamePartyMon
	goto Hoenn1_1_EventScript_Pokeball_1

Hoenn1_1_EventScript_Pokeball_6:
# 23 "data/maps/Hoenn1_1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 24 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_1
# 25 "data/maps/Hoenn1_1/scripts.pory"
	removeobject 1
# 26 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 27 "data/maps/Hoenn1_1/scripts.pory"
	call NicknameBoxMon
	goto Hoenn1_1_EventScript_Pokeball_1


NicknamePartyMon::
# 46 "data/maps/Hoenn1_1/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 47 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 48 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 49 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 50 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 58 "data/maps/Hoenn1_1/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 59 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 60 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 63 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 61 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


Hoenn1_1_EventScript_Pokeball_Text_0:
# 12 "data/maps/Hoenn1_1/scripts.pory"
	.string "Do you want to choose Mudkip?$"

Hoenn1_1_EventScript_Pokeball_Text_1:
# 17 "data/maps/Hoenn1_1/scripts.pory"
	.string "Recieved Mudkip$"

Hoenn1_1_EventScript_Pokeball_Text_2:
# 31 "data/maps/Hoenn1_1/scripts.pory"
	.string "No More Room$"

NicknamePartyMon_Text_0:
# 46 "data/maps/Hoenn1_1/scripts.pory"
	.string "Give it a nickname?$"

Hoenn1_1__NotChosen::
# 67 "data/maps/Hoenn1_1/scripts.pory"
	.string "You did not choose the Pokemon$"
