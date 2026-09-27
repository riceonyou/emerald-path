Elite4_Hoenn_2_MapScripts::
	.byte 0


Elite4_Hoenn_2_EventScript_MegaAbsol::
# 5 "data/maps/Elite4_Hoenn_2/scripts.pory"
	checktrainerflag TRAINER_MEGAABSOL
	goto_if 0, Elite4_Hoenn_2_EventScript_MegaAbsol_1
	return

Elite4_Hoenn_2_EventScript_MegaAbsol_1:
# 6 "data/maps/Elite4_Hoenn_2/scripts.pory"
	lockall
# 7 "data/maps/Elite4_Hoenn_2/scripts.pory"
	applymovement megaabsol, Elite4_Hoenn_2_EventScript_MegaAbsol_Movement_0
# 13 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmovement
# 14 "data/maps/Elite4_Hoenn_2/scripts.pory"
	applymovement megaabsol, Elite4_Hoenn_2_EventScript_MegaAbsol_Movement_1
# 17 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmovement
# 18 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaAbsol_Text_0
# 19 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_ELITE4_SINGLES_BATTLE_COUNT, 2
	goto_if_lt Elite4_Hoenn_2_EventScript_MegaAbsol_4
Elite4_Hoenn_2_EventScript_MegaAbsol_3:
# 23 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_ELITE4_DOUBLES_BATTLE_COUNT, 2
	goto_if_lt Elite4_Hoenn_2_EventScript_MegaAbsol_7
Elite4_Hoenn_2_EventScript_MegaAbsol_6:
# 26 "data/maps/Elite4_Hoenn_2/scripts.pory"
	dynmultistack 0, 0, TRUE, 2, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 27 "data/maps/Elite4_Hoenn_2/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 28 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_0x8000, 0
	goto_if_eq Elite4_Hoenn_2_EventScript_MegaAbsol_10
Elite4_Hoenn_2_EventScript_MegaAbsol_9:
# 33 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_0x8000, 1
	goto_if_eq Elite4_Hoenn_2_EventScript_MegaAbsol_13
Elite4_Hoenn_2_EventScript_MegaAbsol_12:
# 39 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaAbsol_Text_6, MSGBOX_AUTOCLOSE
# 40 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmessage
# 41 "data/maps/Elite4_Hoenn_2/scripts.pory"
	releaseall
	return

Elite4_Hoenn_2_EventScript_MegaAbsol_4:
# 20 "data/maps/Elite4_Hoenn_2/scripts.pory"
	dynmultipush Elite4_Hoenn_2_EventScript_MegaAbsol_Text_1, 0
	goto Elite4_Hoenn_2_EventScript_MegaAbsol_3

Elite4_Hoenn_2_EventScript_MegaAbsol_7:
# 24 "data/maps/Elite4_Hoenn_2/scripts.pory"
	dynmultipush Elite4_Hoenn_2_EventScript_MegaAbsol_Text_2, 1
	goto Elite4_Hoenn_2_EventScript_MegaAbsol_6

Elite4_Hoenn_2_EventScript_MegaAbsol_10:
# 29 "data/maps/Elite4_Hoenn_2/scripts.pory"
	addvar VAR_ELITE4_SINGLES_BATTLE_COUNT, 1
# 30 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaAbsol_Text_3
# 31 "data/maps/Elite4_Hoenn_2/scripts.pory"
	trainerbattle_no_intro TRAINER_MEGAABSOL, Elite4_Hoenn_2_EventScript_MegaAbsol_Text_4
	goto Elite4_Hoenn_2_EventScript_MegaAbsol_9

Elite4_Hoenn_2_EventScript_MegaAbsol_13:
# 34 "data/maps/Elite4_Hoenn_2/scripts.pory"
	addvar VAR_ELITE4_DOUBLES_BATTLE_COUNT, 1
# 35 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaAbsol_Text_5
# 36 "data/maps/Elite4_Hoenn_2/scripts.pory"
	setflag FLAG_FORCE_DOUBLES_BATTLE
# 37 "data/maps/Elite4_Hoenn_2/scripts.pory"
	trainerbattle_no_intro TRAINER_MEGAABSOL, Elite4_Hoenn_2_EventScript_MegaAbsol_Text_4
	goto Elite4_Hoenn_2_EventScript_MegaAbsol_12


MegaAbsol::
# 46 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaAbsol_Text_6, MSGBOX_AUTOCLOSE
# 47 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmessage
# 48 "data/maps/Elite4_Hoenn_2/scripts.pory"
	releaseall
	return


Elite4_Hoenn_2_EventScript_MegaSableye::
# 52 "data/maps/Elite4_Hoenn_2/scripts.pory"
	checktrainerflag TRAINER_MEGASABLEYE
	goto_if 0, Elite4_Hoenn_2_EventScript_MegaSableye_1
	return

Elite4_Hoenn_2_EventScript_MegaSableye_1:
# 53 "data/maps/Elite4_Hoenn_2/scripts.pory"
	lockall
# 54 "data/maps/Elite4_Hoenn_2/scripts.pory"
	applymovement megasableye, Elite4_Hoenn_2_EventScript_MegaAbsol_Movement_0
# 60 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmovement
# 61 "data/maps/Elite4_Hoenn_2/scripts.pory"
	applymovement megasableye, Elite4_Hoenn_2_EventScript_MegaSableye_Movement_0
# 64 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmovement
# 65 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaSableye_Text_0
# 66 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_ELITE4_SINGLES_BATTLE_COUNT, 2
	goto_if_lt Elite4_Hoenn_2_EventScript_MegaSableye_4
Elite4_Hoenn_2_EventScript_MegaSableye_3:
# 69 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_ELITE4_DOUBLES_BATTLE_COUNT, 2
	goto_if_lt Elite4_Hoenn_2_EventScript_MegaSableye_7
Elite4_Hoenn_2_EventScript_MegaSableye_6:
# 72 "data/maps/Elite4_Hoenn_2/scripts.pory"
	dynmultistack 0, 0, TRUE, 2, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 73 "data/maps/Elite4_Hoenn_2/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 74 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_0x8000, 0
	goto_if_eq Elite4_Hoenn_2_EventScript_MegaSableye_10
Elite4_Hoenn_2_EventScript_MegaSableye_9:
# 79 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_0x8000, 1
	goto_if_eq Elite4_Hoenn_2_EventScript_MegaSableye_13
Elite4_Hoenn_2_EventScript_MegaSableye_12:
# 85 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaSableye_Text_3, MSGBOX_AUTOCLOSE
# 86 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmessage
# 87 "data/maps/Elite4_Hoenn_2/scripts.pory"
	releaseall
	return

Elite4_Hoenn_2_EventScript_MegaSableye_4:
# 67 "data/maps/Elite4_Hoenn_2/scripts.pory"
	dynmultipush Elite4_Hoenn_2_EventScript_MegaAbsol_Text_1, 0
	goto Elite4_Hoenn_2_EventScript_MegaSableye_3

Elite4_Hoenn_2_EventScript_MegaSableye_7:
# 70 "data/maps/Elite4_Hoenn_2/scripts.pory"
	dynmultipush Elite4_Hoenn_2_EventScript_MegaAbsol_Text_2, 1
	goto Elite4_Hoenn_2_EventScript_MegaSableye_6

Elite4_Hoenn_2_EventScript_MegaSableye_10:
# 75 "data/maps/Elite4_Hoenn_2/scripts.pory"
	addvar VAR_ELITE4_SINGLES_BATTLE_COUNT, 1
# 76 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaSableye_Text_1
# 77 "data/maps/Elite4_Hoenn_2/scripts.pory"
	trainerbattle_no_intro TRAINER_MEGASABLEYE, Elite4_Hoenn_2_EventScript_MegaSableye_Text_2
	goto Elite4_Hoenn_2_EventScript_MegaSableye_9

Elite4_Hoenn_2_EventScript_MegaSableye_13:
# 80 "data/maps/Elite4_Hoenn_2/scripts.pory"
	addvar VAR_ELITE4_DOUBLES_BATTLE_COUNT, 1
# 81 "data/maps/Elite4_Hoenn_2/scripts.pory"
	setflag FLAG_FORCE_DOUBLES_BATTLE
# 82 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaSableye_Text_1
# 83 "data/maps/Elite4_Hoenn_2/scripts.pory"
	trainerbattle_no_intro TRAINER_MEGASABLEYE, Elite4_Hoenn_2_EventScript_MegaSableye_Text_2
	goto Elite4_Hoenn_2_EventScript_MegaSableye_12


MegaSableye::
# 91 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaSableye_Text_3, MSGBOX_AUTOCLOSE
# 92 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmessage
# 93 "data/maps/Elite4_Hoenn_2/scripts.pory"
	releaseall
	return


Elite4_Hoenn_2_EventScript_MegaGlalie::
# 97 "data/maps/Elite4_Hoenn_2/scripts.pory"
	checktrainerflag TRAINER_MEGAGLALIE
	goto_if 0, Elite4_Hoenn_2_EventScript_MegaGlalie_1
	return

Elite4_Hoenn_2_EventScript_MegaGlalie_1:
# 98 "data/maps/Elite4_Hoenn_2/scripts.pory"
	lockall
# 99 "data/maps/Elite4_Hoenn_2/scripts.pory"
	applymovement megaglalie, Elite4_Hoenn_2_EventScript_MegaAbsol_Movement_0
# 105 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmovement
# 106 "data/maps/Elite4_Hoenn_2/scripts.pory"
	applymovement megaglalie, Elite4_Hoenn_2_EventScript_MegaAbsol_Movement_1
# 109 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmovement
# 110 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaSableye_Text_0
# 111 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_ELITE4_SINGLES_BATTLE_COUNT, 2
	goto_if_lt Elite4_Hoenn_2_EventScript_MegaGlalie_4
Elite4_Hoenn_2_EventScript_MegaGlalie_3:
# 114 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_ELITE4_DOUBLES_BATTLE_COUNT, 2
	goto_if_lt Elite4_Hoenn_2_EventScript_MegaGlalie_7
Elite4_Hoenn_2_EventScript_MegaGlalie_6:
# 117 "data/maps/Elite4_Hoenn_2/scripts.pory"
	dynmultistack 0, 0, TRUE, 2, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 118 "data/maps/Elite4_Hoenn_2/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 119 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_0x8000, 0
	goto_if_eq Elite4_Hoenn_2_EventScript_MegaGlalie_10
Elite4_Hoenn_2_EventScript_MegaGlalie_9:
# 124 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_0x8000, 1
	goto_if_eq Elite4_Hoenn_2_EventScript_MegaGlalie_13
Elite4_Hoenn_2_EventScript_MegaGlalie_12:
# 130 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaGlalie_Text_2, MSGBOX_AUTOCLOSE
# 131 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmessage
# 132 "data/maps/Elite4_Hoenn_2/scripts.pory"
	releaseall
	return

Elite4_Hoenn_2_EventScript_MegaGlalie_4:
# 112 "data/maps/Elite4_Hoenn_2/scripts.pory"
	dynmultipush Elite4_Hoenn_2_EventScript_MegaAbsol_Text_1, 0
	goto Elite4_Hoenn_2_EventScript_MegaGlalie_3

Elite4_Hoenn_2_EventScript_MegaGlalie_7:
# 115 "data/maps/Elite4_Hoenn_2/scripts.pory"
	dynmultipush Elite4_Hoenn_2_EventScript_MegaAbsol_Text_2, 1
	goto Elite4_Hoenn_2_EventScript_MegaGlalie_6

Elite4_Hoenn_2_EventScript_MegaGlalie_10:
# 120 "data/maps/Elite4_Hoenn_2/scripts.pory"
	addvar VAR_ELITE4_SINGLES_BATTLE_COUNT, 1
# 121 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaGlalie_Text_0
# 122 "data/maps/Elite4_Hoenn_2/scripts.pory"
	trainerbattle_no_intro TRAINER_MEGAGLALIE, Elite4_Hoenn_2_EventScript_MegaGlalie_Text_1
	goto Elite4_Hoenn_2_EventScript_MegaGlalie_9

Elite4_Hoenn_2_EventScript_MegaGlalie_13:
# 125 "data/maps/Elite4_Hoenn_2/scripts.pory"
	addvar VAR_ELITE4_DOUBLES_BATTLE_COUNT, 1
# 126 "data/maps/Elite4_Hoenn_2/scripts.pory"
	setflag FLAG_FORCE_DOUBLES_BATTLE
# 127 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaGlalie_Text_0
# 128 "data/maps/Elite4_Hoenn_2/scripts.pory"
	trainerbattle_no_intro TRAINER_MEGAGLALIE, Elite4_Hoenn_2_EventScript_MegaGlalie_Text_1
	goto Elite4_Hoenn_2_EventScript_MegaGlalie_12


MegaGlalie::
# 138 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaGlalie_Text_2, MSGBOX_AUTOCLOSE
# 139 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmessage
# 140 "data/maps/Elite4_Hoenn_2/scripts.pory"
	releaseall
	return


Elite4_Hoenn_2_EventScript_MegaSalamence::
# 144 "data/maps/Elite4_Hoenn_2/scripts.pory"
	checktrainerflag TRAINER_MEGASALAMENCE
	goto_if 0, Elite4_Hoenn_2_EventScript_MegaSalamence_1
	return

Elite4_Hoenn_2_EventScript_MegaSalamence_1:
# 145 "data/maps/Elite4_Hoenn_2/scripts.pory"
	lockall
# 146 "data/maps/Elite4_Hoenn_2/scripts.pory"
	applymovement megasalamence, Elite4_Hoenn_2_EventScript_MegaAbsol_Movement_0
# 152 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmovement
# 153 "data/maps/Elite4_Hoenn_2/scripts.pory"
	applymovement megasalamence, Elite4_Hoenn_2_EventScript_MegaSableye_Movement_0
# 156 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmovement
# 157 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaSableye_Text_0
# 158 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_ELITE4_SINGLES_BATTLE_COUNT, 2
	goto_if_lt Elite4_Hoenn_2_EventScript_MegaSalamence_4
Elite4_Hoenn_2_EventScript_MegaSalamence_3:
# 161 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_ELITE4_DOUBLES_BATTLE_COUNT, 2
	goto_if_lt Elite4_Hoenn_2_EventScript_MegaSalamence_7
Elite4_Hoenn_2_EventScript_MegaSalamence_6:
# 164 "data/maps/Elite4_Hoenn_2/scripts.pory"
	dynmultistack 0, 0, TRUE, 2, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 165 "data/maps/Elite4_Hoenn_2/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 166 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_0x8000, 0
	goto_if_eq Elite4_Hoenn_2_EventScript_MegaSalamence_10
Elite4_Hoenn_2_EventScript_MegaSalamence_9:
# 171 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_0x8000, 1
	goto_if_eq Elite4_Hoenn_2_EventScript_MegaSalamence_13
Elite4_Hoenn_2_EventScript_MegaSalamence_12:
# 177 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaSalamence_Text_1, MSGBOX_AUTOCLOSE
# 178 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmessage
# 179 "data/maps/Elite4_Hoenn_2/scripts.pory"
	releaseall
	return

Elite4_Hoenn_2_EventScript_MegaSalamence_4:
# 159 "data/maps/Elite4_Hoenn_2/scripts.pory"
	dynmultipush Elite4_Hoenn_2_EventScript_MegaAbsol_Text_1, 0
	goto Elite4_Hoenn_2_EventScript_MegaSalamence_3

Elite4_Hoenn_2_EventScript_MegaSalamence_7:
# 162 "data/maps/Elite4_Hoenn_2/scripts.pory"
	dynmultipush Elite4_Hoenn_2_EventScript_MegaAbsol_Text_2, 1
	goto Elite4_Hoenn_2_EventScript_MegaSalamence_6

Elite4_Hoenn_2_EventScript_MegaSalamence_10:
# 167 "data/maps/Elite4_Hoenn_2/scripts.pory"
	addvar VAR_ELITE4_SINGLES_BATTLE_COUNT, 1
# 168 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaSalamence_Text_0
# 169 "data/maps/Elite4_Hoenn_2/scripts.pory"
	trainerbattle_no_intro TRAINER_MEGASALAMENCE, Elite4_Hoenn_2_EventScript_MegaSalamence_Text_1
	goto Elite4_Hoenn_2_EventScript_MegaSalamence_9

Elite4_Hoenn_2_EventScript_MegaSalamence_13:
# 172 "data/maps/Elite4_Hoenn_2/scripts.pory"
	addvar VAR_ELITE4_DOUBLES_BATTLE_COUNT, 1
# 173 "data/maps/Elite4_Hoenn_2/scripts.pory"
	setflag FLAG_FORCE_DOUBLES_BATTLE
# 174 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaSalamence_Text_0
# 175 "data/maps/Elite4_Hoenn_2/scripts.pory"
	trainerbattle_no_intro TRAINER_MEGASALAMENCE, Elite4_Hoenn_2_EventScript_MegaSalamence_Text_1
	goto Elite4_Hoenn_2_EventScript_MegaSalamence_12


MegaSalamence::
# 184 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaSalamence_Text_1, MSGBOX_AUTOCLOSE
# 185 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmessage
# 186 "data/maps/Elite4_Hoenn_2/scripts.pory"
	releaseall
	return


Elite4_Hoenn_2_EventScript_MegaSwampert::
# 190 "data/maps/Elite4_Hoenn_2/scripts.pory"
	faceplayer
# 191 "data/maps/Elite4_Hoenn_2/scripts.pory"
	trainerbattle_single TRAINER_MEGASWAMPERT, Elite4_Hoenn_2_EventScript_MegaSwampert_Text_0, Elite4_Hoenn_2_EventScript_MegaSwampert_Text_1, Elite4_Hoenn_2_CHAMPION_DEFEATED
# 192 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaSwampert_Text_2, MSGBOX_AUTOCLOSE
# 193 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmessage
	end


Elite4_Hoenn_2_CHAMPION_DEFEATED::
# 199 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_CHAMPION_DEFEATED_Text_0, MSGBOX_AUTOCLOSE
# 200 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmessage
# 201 "data/maps/Elite4_Hoenn_2/scripts.pory"
	playbgm MUS_VICTORY_LEAGUE, 0
# 202 "data/maps/Elite4_Hoenn_2/scripts.pory"
	applymovement LOCALID_PLAYER, Elite4_Hoenn_2_CHAMPION_DEFEATED_Movement_0
# 219 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmovement
# 220 "data/maps/Elite4_Hoenn_2/scripts.pory"
	applymovement LOCALID_PLAYER, Elite4_Hoenn_2_CHAMPION_DEFEATED_Movement_1
# 223 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_CHAMPION_DEFEATED_Text_1
# 224 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmessage
# 225 "data/maps/Elite4_Hoenn_2/scripts.pory"
	special WarpToNextAct
	end


# 7 "data/maps/Elite4_Hoenn_2/scripts.pory"
Elite4_Hoenn_2_EventScript_MegaAbsol_Movement_0:
# 8 "data/maps/Elite4_Hoenn_2/scripts.pory"
	face_player
# 9 "data/maps/Elite4_Hoenn_2/scripts.pory"
	emote_exclamation_mark
# 10 "data/maps/Elite4_Hoenn_2/scripts.pory"
	delay_16
# 11 "data/maps/Elite4_Hoenn_2/scripts.pory"
	delay_16
	step_end

# 14 "data/maps/Elite4_Hoenn_2/scripts.pory"
Elite4_Hoenn_2_EventScript_MegaAbsol_Movement_1:
# 15 "data/maps/Elite4_Hoenn_2/scripts.pory"
	walk_right
	step_end

# 61 "data/maps/Elite4_Hoenn_2/scripts.pory"
Elite4_Hoenn_2_EventScript_MegaSableye_Movement_0:
# 62 "data/maps/Elite4_Hoenn_2/scripts.pory"
	walk_left
	step_end

# 202 "data/maps/Elite4_Hoenn_2/scripts.pory"
Elite4_Hoenn_2_CHAMPION_DEFEATED_Movement_0:
# 203 "data/maps/Elite4_Hoenn_2/scripts.pory"
	face_down
# 204 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 204 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 205 "data/maps/Elite4_Hoenn_2/scripts.pory"
	delay_8
# 206 "data/maps/Elite4_Hoenn_2/scripts.pory"
	face_left
# 207 "data/maps/Elite4_Hoenn_2/scripts.pory"
	face_up
# 208 "data/maps/Elite4_Hoenn_2/scripts.pory"
	face_right
# 209 "data/maps/Elite4_Hoenn_2/scripts.pory"
	face_down
# 210 "data/maps/Elite4_Hoenn_2/scripts.pory"
	delay_16
# 211 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 212 "data/maps/Elite4_Hoenn_2/scripts.pory"
	walk_down
# 213 "data/maps/Elite4_Hoenn_2/scripts.pory"
	walk_up
# 214 "data/maps/Elite4_Hoenn_2/scripts.pory"
	walk_left
# 215 "data/maps/Elite4_Hoenn_2/scripts.pory"
	walk_right
# 215 "data/maps/Elite4_Hoenn_2/scripts.pory"
	walk_right
# 216 "data/maps/Elite4_Hoenn_2/scripts.pory"
	walk_left
# 217 "data/maps/Elite4_Hoenn_2/scripts.pory"
	face_down
	step_end

# 220 "data/maps/Elite4_Hoenn_2/scripts.pory"
Elite4_Hoenn_2_CHAMPION_DEFEATED_Movement_1:
# 221 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 221 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 221 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 221 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 221 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 221 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 221 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 221 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 221 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 221 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 221 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 221 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 221 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 221 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 221 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 221 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 221 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 221 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 221 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 221 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
	step_end

Elite4_Hoenn_2_EventScript_MegaAbsol_Text_0:
# 18 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "Welcome to the Elite 4.\p"
	.string "From here, you will fight 4 extremely\n"
	.string "strong trainers, and the champion.\p"
	.string "Please note that there is a special rule\n"
	.string "with battling the Elite 4.\p"
	.string "That is, you must battle 2 of us as a\n"
	.string "SINGLES battle, and 2 of us as a\l"
	.string "DOUBLES battle.\p"
	.string "You may choose which one of us to\n"
	.string "battle in which format.\p"
	.string "Now, how would you like to battle me?$"

Elite4_Hoenn_2_EventScript_MegaAbsol_Text_1:
# 20 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "SINGLES$"

Elite4_Hoenn_2_EventScript_MegaAbsol_Text_2:
# 24 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "DOUBLES$"

Elite4_Hoenn_2_EventScript_MegaAbsol_Text_3:
# 30 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "A singles battle it is.\nI hope you are prepared.$"

Elite4_Hoenn_2_EventScript_MegaAbsol_Text_4:
# 31 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "An exhilirating battle.$"

Elite4_Hoenn_2_EventScript_MegaAbsol_Text_5:
# 35 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "A doubles battle it is.\nI hope you are prepared.$"

Elite4_Hoenn_2_EventScript_MegaAbsol_Text_6:
# 39 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "I wish you good luck.$"

Elite4_Hoenn_2_EventScript_MegaSableye_Text_0:
# 65 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "How would you like to battle me?$"

Elite4_Hoenn_2_EventScript_MegaSableye_Text_1:
# 76 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "Ready or not, here I come!$"

Elite4_Hoenn_2_EventScript_MegaSableye_Text_2:
# 77 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "Gaaaah! You got me!$"

Elite4_Hoenn_2_EventScript_MegaSableye_Text_3:
# 85 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "Good luck, my friend!$"

Elite4_Hoenn_2_EventScript_MegaGlalie_Text_0:
# 121 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "Chompa chompa. Let's do this.$"

Elite4_Hoenn_2_EventScript_MegaGlalie_Text_1:
# 122 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "Womp womp.$"

Elite4_Hoenn_2_EventScript_MegaGlalie_Text_2:
# 130 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "ROAARRR.\pGood luck!$"

Elite4_Hoenn_2_EventScript_MegaSalamence_Text_0:
# 168 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "I will be your last challenge\nbefore the champion.\pLet's see if you're worthy.$"

Elite4_Hoenn_2_EventScript_MegaSalamence_Text_1:
# 169 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "You truly are worthy.$"

Elite4_Hoenn_2_EventScript_MegaSwampert_Text_0:
# 191 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "I am the champion.\pYou have done well to get this far.\pNow let us have a wonderful\nfinal battle.$"

Elite4_Hoenn_2_EventScript_MegaSwampert_Text_1:
# 191 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "You are the champion.$"

Elite4_Hoenn_2_EventScript_MegaSwampert_Text_2:
# 192 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "test.$"

Elite4_Hoenn_2_CHAMPION_DEFEATED_Text_0:
# 199 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "Congratulations.\pYou have conquered all 4 paths.\pYou are truly great.\pGood job.\pEtcetra etcetra...\pNow go back to the Hub.$"

Elite4_Hoenn_2_CHAMPION_DEFEATED_Text_1:
# 223 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "Yipee!$"
