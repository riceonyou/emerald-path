Elite4_Hoenn_2_MapScripts::
	.byte 0


Elite4_Hoenn_2_EventScript_MegaAbsol::
# 5 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaAbsol_Text_0
# 7 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_ELITE4_SINGLES_BATTLE_COUNT, 2
	goto_if_le Elite4_Hoenn_2_EventScript_MegaAbsol_2
Elite4_Hoenn_2_EventScript_MegaAbsol_1:
# 10 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_ELITE4_DOUBLES_BATTLE_COUNT, 2
	goto_if_le Elite4_Hoenn_2_EventScript_MegaAbsol_5
Elite4_Hoenn_2_EventScript_MegaAbsol_4:
# 13 "data/maps/Elite4_Hoenn_2/scripts.pory"
	dynmultistack 0, 0, TRUE, 2, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 14 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Elite4_Hoenn_2_EventScript_MegaAbsol_8
Elite4_Hoenn_2_EventScript_MegaAbsol_7:
# 17 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Elite4_Hoenn_2_EventScript_MegaAbsol_11
Elite4_Hoenn_2_EventScript_MegaAbsol_10:
# 21 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaAbsol_Text_7, MSGBOX_AUTOCLOSE
# 22 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmessage
	end

Elite4_Hoenn_2_EventScript_MegaAbsol_2:
# 8 "data/maps/Elite4_Hoenn_2/scripts.pory"
	dynmultipush Elite4_Hoenn_2_EventScript_MegaAbsol_Text_1, 0
	goto Elite4_Hoenn_2_EventScript_MegaAbsol_1

Elite4_Hoenn_2_EventScript_MegaAbsol_5:
# 11 "data/maps/Elite4_Hoenn_2/scripts.pory"
	dynmultipush Elite4_Hoenn_2_EventScript_MegaAbsol_Text_2, 1
	goto Elite4_Hoenn_2_EventScript_MegaAbsol_4

Elite4_Hoenn_2_EventScript_MegaAbsol_8:
# 15 "data/maps/Elite4_Hoenn_2/scripts.pory"
	trainerbattle_single TRAINER_MEGAABSOL, Elite4_Hoenn_2_EventScript_MegaAbsol_Text_3, Elite4_Hoenn_2_EventScript_MegaAbsol_Text_4
	goto Elite4_Hoenn_2_EventScript_MegaAbsol_7

Elite4_Hoenn_2_EventScript_MegaAbsol_11:
# 18 "data/maps/Elite4_Hoenn_2/scripts.pory"
	setflag FLAG_FORCE_DOUBLES_BATTLE
# 19 "data/maps/Elite4_Hoenn_2/scripts.pory"
	trainerbattle_double TRAINER_MEGAABSOL, Elite4_Hoenn_2_EventScript_MegaAbsol_Text_5, Elite4_Hoenn_2_EventScript_MegaAbsol_Text_4, Elite4_Hoenn_2_EventScript_MegaAbsol_Text_6
	goto Elite4_Hoenn_2_EventScript_MegaAbsol_10


Elite4_Hoenn_2_EventScript_MegaSableye::
# 29 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaSableye_Text_0
# 31 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_ELITE4_SINGLES_BATTLE_COUNT, 2
	goto_if_le Elite4_Hoenn_2_EventScript_MegaSableye_2
Elite4_Hoenn_2_EventScript_MegaSableye_1:
# 34 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_ELITE4_DOUBLES_BATTLE_COUNT, 2
	goto_if_le Elite4_Hoenn_2_EventScript_MegaSableye_5
Elite4_Hoenn_2_EventScript_MegaSableye_4:
# 37 "data/maps/Elite4_Hoenn_2/scripts.pory"
	dynmultistack 0, 0, TRUE, 2, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 38 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Elite4_Hoenn_2_EventScript_MegaSableye_8
Elite4_Hoenn_2_EventScript_MegaSableye_7:
# 41 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Elite4_Hoenn_2_EventScript_MegaSableye_11
Elite4_Hoenn_2_EventScript_MegaSableye_10:
# 45 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaAbsol_Text_7, MSGBOX_AUTOCLOSE
# 46 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmessage
	end

Elite4_Hoenn_2_EventScript_MegaSableye_2:
# 32 "data/maps/Elite4_Hoenn_2/scripts.pory"
	dynmultipush Elite4_Hoenn_2_EventScript_MegaAbsol_Text_1, 0
	goto Elite4_Hoenn_2_EventScript_MegaSableye_1

Elite4_Hoenn_2_EventScript_MegaSableye_5:
# 35 "data/maps/Elite4_Hoenn_2/scripts.pory"
	dynmultipush Elite4_Hoenn_2_EventScript_MegaAbsol_Text_2, 1
	goto Elite4_Hoenn_2_EventScript_MegaSableye_4

Elite4_Hoenn_2_EventScript_MegaSableye_8:
# 39 "data/maps/Elite4_Hoenn_2/scripts.pory"
	trainerbattle_single TRAINER_MEGAABSOL, Elite4_Hoenn_2_EventScript_MegaAbsol_Text_3, Elite4_Hoenn_2_EventScript_MegaAbsol_Text_4
	goto Elite4_Hoenn_2_EventScript_MegaSableye_7

Elite4_Hoenn_2_EventScript_MegaSableye_11:
# 42 "data/maps/Elite4_Hoenn_2/scripts.pory"
	setflag FLAG_FORCE_DOUBLES_BATTLE
# 43 "data/maps/Elite4_Hoenn_2/scripts.pory"
	trainerbattle_double TRAINER_MEGAABSOL, Elite4_Hoenn_2_EventScript_MegaAbsol_Text_5, Elite4_Hoenn_2_EventScript_MegaAbsol_Text_4, Elite4_Hoenn_2_EventScript_MegaAbsol_Text_6
	goto Elite4_Hoenn_2_EventScript_MegaSableye_10


Elite4_Hoenn_2_EventScript_MegaGlalie::
# 53 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaSableye_Text_0
# 55 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_ELITE4_SINGLES_BATTLE_COUNT, 2
	goto_if_le Elite4_Hoenn_2_EventScript_MegaGlalie_2
Elite4_Hoenn_2_EventScript_MegaGlalie_1:
# 58 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_ELITE4_DOUBLES_BATTLE_COUNT, 2
	goto_if_le Elite4_Hoenn_2_EventScript_MegaGlalie_5
Elite4_Hoenn_2_EventScript_MegaGlalie_4:
# 61 "data/maps/Elite4_Hoenn_2/scripts.pory"
	dynmultistack 0, 0, TRUE, 2, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 62 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Elite4_Hoenn_2_EventScript_MegaGlalie_8
Elite4_Hoenn_2_EventScript_MegaGlalie_7:
# 65 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Elite4_Hoenn_2_EventScript_MegaGlalie_11
Elite4_Hoenn_2_EventScript_MegaGlalie_10:
# 69 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaAbsol_Text_7, MSGBOX_AUTOCLOSE
# 70 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmessage
	end

Elite4_Hoenn_2_EventScript_MegaGlalie_2:
# 56 "data/maps/Elite4_Hoenn_2/scripts.pory"
	dynmultipush Elite4_Hoenn_2_EventScript_MegaAbsol_Text_1, 0
	goto Elite4_Hoenn_2_EventScript_MegaGlalie_1

Elite4_Hoenn_2_EventScript_MegaGlalie_5:
# 59 "data/maps/Elite4_Hoenn_2/scripts.pory"
	dynmultipush Elite4_Hoenn_2_EventScript_MegaAbsol_Text_2, 1
	goto Elite4_Hoenn_2_EventScript_MegaGlalie_4

Elite4_Hoenn_2_EventScript_MegaGlalie_8:
# 63 "data/maps/Elite4_Hoenn_2/scripts.pory"
	trainerbattle_single TRAINER_MEGAABSOL, Elite4_Hoenn_2_EventScript_MegaAbsol_Text_3, Elite4_Hoenn_2_EventScript_MegaAbsol_Text_4
	goto Elite4_Hoenn_2_EventScript_MegaGlalie_7

Elite4_Hoenn_2_EventScript_MegaGlalie_11:
# 66 "data/maps/Elite4_Hoenn_2/scripts.pory"
	setflag FLAG_FORCE_DOUBLES_BATTLE
# 67 "data/maps/Elite4_Hoenn_2/scripts.pory"
	trainerbattle_double TRAINER_MEGAABSOL, Elite4_Hoenn_2_EventScript_MegaAbsol_Text_5, Elite4_Hoenn_2_EventScript_MegaAbsol_Text_4, Elite4_Hoenn_2_EventScript_MegaAbsol_Text_6
	goto Elite4_Hoenn_2_EventScript_MegaGlalie_10


Elite4_Hoenn_2_EventScript_MegaSalamence::
# 77 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaSableye_Text_0
# 79 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_ELITE4_SINGLES_BATTLE_COUNT, 2
	goto_if_le Elite4_Hoenn_2_EventScript_MegaSalamence_2
Elite4_Hoenn_2_EventScript_MegaSalamence_1:
# 82 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_ELITE4_DOUBLES_BATTLE_COUNT, 2
	goto_if_le Elite4_Hoenn_2_EventScript_MegaSalamence_5
Elite4_Hoenn_2_EventScript_MegaSalamence_4:
# 85 "data/maps/Elite4_Hoenn_2/scripts.pory"
	dynmultistack 0, 0, TRUE, 2, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 86 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Elite4_Hoenn_2_EventScript_MegaSalamence_8
Elite4_Hoenn_2_EventScript_MegaSalamence_7:
# 89 "data/maps/Elite4_Hoenn_2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Elite4_Hoenn_2_EventScript_MegaSalamence_11
Elite4_Hoenn_2_EventScript_MegaSalamence_10:
# 93 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaAbsol_Text_7, MSGBOX_AUTOCLOSE
# 94 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmessage
	end

Elite4_Hoenn_2_EventScript_MegaSalamence_2:
# 80 "data/maps/Elite4_Hoenn_2/scripts.pory"
	dynmultipush Elite4_Hoenn_2_EventScript_MegaAbsol_Text_1, 0
	goto Elite4_Hoenn_2_EventScript_MegaSalamence_1

Elite4_Hoenn_2_EventScript_MegaSalamence_5:
# 83 "data/maps/Elite4_Hoenn_2/scripts.pory"
	dynmultipush Elite4_Hoenn_2_EventScript_MegaAbsol_Text_2, 1
	goto Elite4_Hoenn_2_EventScript_MegaSalamence_4

Elite4_Hoenn_2_EventScript_MegaSalamence_8:
# 87 "data/maps/Elite4_Hoenn_2/scripts.pory"
	trainerbattle_single TRAINER_MEGAABSOL, Elite4_Hoenn_2_EventScript_MegaAbsol_Text_3, Elite4_Hoenn_2_EventScript_MegaAbsol_Text_4
	goto Elite4_Hoenn_2_EventScript_MegaSalamence_7

Elite4_Hoenn_2_EventScript_MegaSalamence_11:
# 90 "data/maps/Elite4_Hoenn_2/scripts.pory"
	setflag FLAG_FORCE_DOUBLES_BATTLE
# 91 "data/maps/Elite4_Hoenn_2/scripts.pory"
	trainerbattle_double TRAINER_MEGAABSOL, Elite4_Hoenn_2_EventScript_MegaAbsol_Text_5, Elite4_Hoenn_2_EventScript_MegaAbsol_Text_4, Elite4_Hoenn_2_EventScript_MegaAbsol_Text_6
	goto Elite4_Hoenn_2_EventScript_MegaSalamence_10


Elite4_Hoenn_2_EventScript_MegaSwampert::
# 101 "data/maps/Elite4_Hoenn_2/scripts.pory"
	trainerbattle_single TRAINER_MEGASWAMPERT, Elite4_Hoenn_2_EventScript_MegaSwampert_Text_0, Elite4_Hoenn_2_EventScript_MegaSwampert_Text_1, Elite4_Hoenn_2_CHAMPION_DEFEATED
# 102 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_EventScript_MegaAbsol_Text_6, MSGBOX_AUTOCLOSE
# 103 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmessage
	end


Elite4_Hoenn_2_CHAMPION_DEFEATED::
# 110 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_CHAMPION_DEFEATED_Text_0, MSGBOX_AUTOCLOSE
# 111 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmessage
# 112 "data/maps/Elite4_Hoenn_2/scripts.pory"
	applymovement LOCALID_PLAYER, Elite4_Hoenn_2_CHAMPION_DEFEATED_Movement_0
# 129 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmovement
# 130 "data/maps/Elite4_Hoenn_2/scripts.pory"
	applymovement LOCALID_PLAYER, Elite4_Hoenn_2_CHAMPION_DEFEATED_Movement_1
# 133 "data/maps/Elite4_Hoenn_2/scripts.pory"
	msgbox Elite4_Hoenn_2_CHAMPION_DEFEATED_Text_1
# 134 "data/maps/Elite4_Hoenn_2/scripts.pory"
	waitmessage
# 135 "data/maps/Elite4_Hoenn_2/scripts.pory"
	special WarpToNextAct
	end


# 112 "data/maps/Elite4_Hoenn_2/scripts.pory"
Elite4_Hoenn_2_CHAMPION_DEFEATED_Movement_0:
# 113 "data/maps/Elite4_Hoenn_2/scripts.pory"
	face_down
# 114 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 114 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 115 "data/maps/Elite4_Hoenn_2/scripts.pory"
	delay_8
# 116 "data/maps/Elite4_Hoenn_2/scripts.pory"
	face_left
# 117 "data/maps/Elite4_Hoenn_2/scripts.pory"
	face_up
# 118 "data/maps/Elite4_Hoenn_2/scripts.pory"
	face_right
# 119 "data/maps/Elite4_Hoenn_2/scripts.pory"
	face_down
# 120 "data/maps/Elite4_Hoenn_2/scripts.pory"
	delay_16
# 121 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 122 "data/maps/Elite4_Hoenn_2/scripts.pory"
	walk_down
# 123 "data/maps/Elite4_Hoenn_2/scripts.pory"
	walk_up
# 124 "data/maps/Elite4_Hoenn_2/scripts.pory"
	walk_left
# 125 "data/maps/Elite4_Hoenn_2/scripts.pory"
	walk_right
# 125 "data/maps/Elite4_Hoenn_2/scripts.pory"
	walk_right
# 126 "data/maps/Elite4_Hoenn_2/scripts.pory"
	walk_left
# 127 "data/maps/Elite4_Hoenn_2/scripts.pory"
	face_down
	step_end

# 130 "data/maps/Elite4_Hoenn_2/scripts.pory"
Elite4_Hoenn_2_CHAMPION_DEFEATED_Movement_1:
# 131 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 131 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 131 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 131 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 131 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 131 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 131 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 131 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 131 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
# 131 "data/maps/Elite4_Hoenn_2/scripts.pory"
	jump_in_place_down
	step_end

Elite4_Hoenn_2_EventScript_MegaAbsol_Text_0:
# 5 "data/maps/Elite4_Hoenn_2/scripts.pory"
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
# 8 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "SINGLES$"

Elite4_Hoenn_2_EventScript_MegaAbsol_Text_2:
# 11 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "DOUBLES$"

Elite4_Hoenn_2_EventScript_MegaAbsol_Text_3:
# 15 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "A singles battle it is.\nI hope you are prepared.$"

Elite4_Hoenn_2_EventScript_MegaAbsol_Text_4:
# 15 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "An exhilirating battle.$"

Elite4_Hoenn_2_EventScript_MegaAbsol_Text_5:
# 19 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "A doubles battle it is.\nI hope you are prepared.$"

Elite4_Hoenn_2_EventScript_MegaAbsol_Text_6:
# 19 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "test.$"

Elite4_Hoenn_2_EventScript_MegaAbsol_Text_7:
# 21 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "I wish you good luck.$"

Elite4_Hoenn_2_EventScript_MegaSableye_Text_0:
# 29 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "How would you like to battle me?$"

Elite4_Hoenn_2_EventScript_MegaSwampert_Text_0:
# 101 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "I am the champion.\pYou have done well to get this far.\pNow let us have a wonderful\nfinal battle.$"

Elite4_Hoenn_2_EventScript_MegaSwampert_Text_1:
# 101 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "You are the champion.$"

Elite4_Hoenn_2_CHAMPION_DEFEATED_Text_0:
# 110 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "Congratulations.\pYou have conquered all 4 paths.\pYou are truly great.\pGood job.\pEtcetra etcetra...\pNow go back to the Hub.$"

Elite4_Hoenn_2_CHAMPION_DEFEATED_Text_1:
# 133 "data/maps/Elite4_Hoenn_2/scripts.pory"
	.string "Yipee!$"
