Hoenn1_1_MapScripts::
	.byte 0


Hoenn1_1_EventScript_Pokeball::
# 6 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 7 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 8 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 9 "data/maps/Hoenn1_1/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 10 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_0, MSGBOX_YESNO
# 11 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Hoenn1_1_EventScript_Pokeball_2
# 33 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 34 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1__NotChosen
Hoenn1_1_EventScript_Pokeball_1:
# 36 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 37 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end

Hoenn1_1_EventScript_Pokeball_2:
# 12 "data/maps/Hoenn1_1/scripts.pory"
	givemon SPECIES_MUDKIP, 50, ITEM_MASTER_BALL
# 13 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Hoenn1_1_EventScript_Pokeball_5
# 20 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Hoenn1_1_EventScript_Pokeball_6
# 28 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 29 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_2
	goto Hoenn1_1_EventScript_Pokeball_1

Hoenn1_1_EventScript_Pokeball_5:
# 14 "data/maps/Hoenn1_1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 15 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_1
# 16 "data/maps/Hoenn1_1/scripts.pory"
	removeobject 1
# 17 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 18 "data/maps/Hoenn1_1/scripts.pory"
	call NicknamePartyMon
	goto Hoenn1_1_EventScript_Pokeball_1

Hoenn1_1_EventScript_Pokeball_6:
# 21 "data/maps/Hoenn1_1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 22 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_1
# 23 "data/maps/Hoenn1_1/scripts.pory"
	removeobject 1
# 24 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 25 "data/maps/Hoenn1_1/scripts.pory"
	call NicknameBoxMon
	goto Hoenn1_1_EventScript_Pokeball_1


NicknamePartyMon::
# 44 "data/maps/Hoenn1_1/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 45 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 46 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 47 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 48 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 56 "data/maps/Hoenn1_1/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 57 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 58 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 61 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 59 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


Hoenn1_1_EventScript_Pokeball_Text_0:
# 10 "data/maps/Hoenn1_1/scripts.pory"
	.string "Do you want to choose Mudkip?$"

Hoenn1_1_EventScript_Pokeball_Text_1:
# 15 "data/maps/Hoenn1_1/scripts.pory"
	.string "Recieved Mudkip$"

Hoenn1_1_EventScript_Pokeball_Text_2:
# 29 "data/maps/Hoenn1_1/scripts.pory"
	.string "No More Room$"

NicknamePartyMon_Text_0:
# 44 "data/maps/Hoenn1_1/scripts.pory"
	.string "Give it a nickname?$"

Hoenn1_1__NotChosen::
# 65 "data/maps/Hoenn1_1/scripts.pory"
	.string "You did not choose the Pokemon$"
