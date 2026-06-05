Hoenn1_1_MapScripts::
# 2 "data/maps/Hoenn1_1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Hoenn1_1_OnLoad
# 3 "data/maps/Hoenn1_1/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Hoenn1_1_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 4 "data/maps/Hoenn1_1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Hoenn1_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Hoenn1_1_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/Hoenn1_1/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Hoenn1_1_ONWARP
	.2byte 0

Hoenn1_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Hoenn1_1/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, Hoenn1_1_ONFRAME
	.2byte 0


Hoenn1_1_ONWARP::
# 8 "data/maps/Hoenn1_1/scripts.pory"
	setvar VAR_TEMP_1, 1
# 9 "data/maps/Hoenn1_1/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	return


Hoenn1_1_ONFRAME::
# 13 "data/maps/Hoenn1_1/scripts.pory"
	setvar VAR_TEMP_2, 1
	return


Hoenn1_1_OnLoad::
# 17 "data/maps/Hoenn1_1/scripts.pory"
	setvar B_LEVEL_CAP_VARIABLE, 14
	return


Hoenn1_1_EventScript_Sign::
# 21 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 23 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Sign_Text_0
# 25 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 26 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	return


Hoenn1_1_EventScript_Pokeball::
# 31 "data/maps/Hoenn1_1/scripts.pory"
	lockall
# 39 "data/maps/Hoenn1_1/scripts.pory"
	playse SE_CLICK
# 40 "data/maps/Hoenn1_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 41 "data/maps/Hoenn1_1/scripts.pory"
	setvar VAR_0x8000, 0
# 42 "data/maps/Hoenn1_1/scripts.pory"
	special LoadBirchBagPoolById
# 43 "data/maps/Hoenn1_1/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 44 "data/maps/Hoenn1_1/scripts.pory"
	waitstate
# 46 "data/maps/Hoenn1_1/scripts.pory"
	removeobject HOENN1_1_BIRCHBAG
# 47 "data/maps/Hoenn1_1/scripts.pory"
	setflag FLAG_BIRCHBAG_1_1
# 48 "data/maps/Hoenn1_1/scripts.pory"
	playfanfare MUS_EVOLVED
# 49 "data/maps/Hoenn1_1/scripts.pory"
	msgbox Hoenn1_1_EventScript_Pokeball_Text_0
# 51 "data/maps/Hoenn1_1/scripts.pory"
	waitmessage
# 52 "data/maps/Hoenn1_1/scripts.pory"
	releaseall
	end


NicknamePartyMon::
# 59 "data/maps/Hoenn1_1/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 60 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 61 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 62 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 63 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 71 "data/maps/Hoenn1_1/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 72 "data/maps/Hoenn1_1/scripts.pory"
	hidemonpic
# 73 "data/maps/Hoenn1_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 76 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 74 "data/maps/Hoenn1_1/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


Hoenn1_1_EventScript_Sign_Text_0:
# 23 "data/maps/Hoenn1_1/scripts.pory"
	.string "test$"

Hoenn1_1_EventScript_Pokeball_Text_0:
# 49 "data/maps/Hoenn1_1/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"

NicknamePartyMon_Text_0:
# 59 "data/maps/Hoenn1_1/scripts.pory"
	.string "Give it a nickname?$"

Hoenn1_1__NotChosen::
# 80 "data/maps/Hoenn1_1/scripts.pory"
	.string "You did not choose the Pokemon$"
