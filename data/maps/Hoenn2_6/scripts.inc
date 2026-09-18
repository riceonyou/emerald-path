Hoenn2_6_MapScripts::
	.byte 0


Hoenn2_6_Roselia::
# 5 "data/maps/Hoenn2_6/scripts.pory"
	trainerbattle_single TRAINER_ROSELIA, Hoenn2_6_Roselia_Text_0, Hoenn2_6_Roselia_Text_1
# 6 "data/maps/Hoenn2_6/scripts.pory"
	msgbox Hoenn2_6_Roselia_Text_2, MSGBOX_AUTOCLOSE
# 7 "data/maps/Hoenn2_6/scripts.pory"
	waitmessage
	end


Hoenn2_6_Swalot::
# 12 "data/maps/Hoenn2_6/scripts.pory"
	trainerbattle_single TRAINER_SWALOT, Hoenn2_6_Swalot_Text_0, Hoenn2_6_Swalot_Text_1
# 13 "data/maps/Hoenn2_6/scripts.pory"
	msgbox Hoenn2_6_Swalot_Text_2, MSGBOX_AUTOCLOSE
# 14 "data/maps/Hoenn2_6/scripts.pory"
	waitmessage
	end


Hoenn2_6_Manectric::
# 19 "data/maps/Hoenn2_6/scripts.pory"
	trainerbattle_single TRAINER_LEADER_MANECTRIC, Hoenn2_6_Manectric_Text_0, Hoenn2_6_Manectric_Text_1, Hoenn2_6_Manectric_Defeated
# 20 "data/maps/Hoenn2_6/scripts.pory"
	msgbox Hoenn2_6_Manectric_Text_2, MSGBOX_AUTOCLOSE
# 21 "data/maps/Hoenn2_6/scripts.pory"
	waitmessage
	end


Hoenn2_6_Manectric_Defeated::
# 26 "data/maps/Hoenn2_6/scripts.pory"
	setflag FLAG_DEFEATED_PATH_LEADER
# 27 "data/maps/Hoenn2_6/scripts.pory"
	msgbox Hoenn2_6_Manectric_Defeated_Text_0, MSGBOX_AUTOCLOSE
# 28 "data/maps/Hoenn2_6/scripts.pory"
	waitmessage
	end


Hoenn2_6_Magneton::
# 33 "data/maps/Hoenn2_6/scripts.pory"
	trainerbattle_single TRAINER_MAGNETON, Hoenn2_6_Magneton_Text_0, Hoenn2_6_Magneton_Text_1
# 34 "data/maps/Hoenn2_6/scripts.pory"
	msgbox Hoenn2_6_Magneton_Text_2, MSGBOX_AUTOCLOSE
# 35 "data/maps/Hoenn2_6/scripts.pory"
	waitmessage
	end


Hoenn2_6_AbraTeleport::
# 40 "data/maps/Hoenn2_6/scripts.pory"
	call AbraTeleport
	return


Hoenn2_6_Roselia_Text_0:
# 5 "data/maps/Hoenn2_6/scripts.pory"
	.string "I don't usually like the indoors since I\n"
	.string "need to get my daily sunlight in. So\l"
	.string "let's make this quick!$"

Hoenn2_6_Roselia_Text_1:
# 5 "data/maps/Hoenn2_6/scripts.pory"
	.string "Thanks for the battle.$"

Hoenn2_6_Roselia_Text_2:
# 6 "data/maps/Hoenn2_6/scripts.pory"
	.string "Do you like my beautiful rose hands?$"

Hoenn2_6_Swalot_Text_0:
# 12 "data/maps/Hoenn2_6/scripts.pory"
	.string "Welcome to Swalot's mukbang. Today, I'm\n"
	.string "going to eat YOU!\l"
	.string "Om nom nom.$"

Hoenn2_6_Swalot_Text_1:
# 12 "data/maps/Hoenn2_6/scripts.pory"
	.string "Rats. Looks like I was the one eaten.$"

Hoenn2_6_Swalot_Text_2:
# 13 "data/maps/Hoenn2_6/scripts.pory"
	.string "I've always wondered what purpose the\n"
	.string "black diamonds around my body have...$"

Hoenn2_6_Manectric_Text_0:
# 19 "data/maps/Hoenn2_6/scripts.pory"
	.string "Hey there. I'm the leader of this path. I\n"
	.string "won't go easy on you!$"

Hoenn2_6_Manectric_Text_1:
# 19 "data/maps/Hoenn2_6/scripts.pory"
	.string "Good battle! You were truly worthy\nof the victory!$"

Hoenn2_6_Manectric_Text_2:
# 20 "data/maps/Hoenn2_6/scripts.pory"
	.string "Congratulations of beating me.\p"
	.string "Talk to abra over there to continue.$"

Hoenn2_6_Manectric_Defeated_Text_0:
# 27 "data/maps/Hoenn2_6/scripts.pory"
	.string "Congratulations of beating me.\pTalk to abra over there to continue.$"

Hoenn2_6_Magneton_Text_0:
# 33 "data/maps/Hoenn2_6/scripts.pory"
	.string "Tontontontontonton. Let's battle baby.$"

Hoenn2_6_Magneton_Text_1:
# 33 "data/maps/Hoenn2_6/scripts.pory"
	.string "Ouch! You're too strong!$"

Hoenn2_6_Magneton_Text_2:
# 34 "data/maps/Hoenn2_6/scripts.pory"
	.string "That was fun! Let's battle again\n"
	.string "someday!$"
