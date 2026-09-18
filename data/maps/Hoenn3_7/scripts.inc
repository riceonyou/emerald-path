Hoenn3_7_MapScripts::
	.byte 0


Hoenn3_7_Wigglytuff::
# 5 "data/maps/Hoenn3_7/scripts.pory"
	trainerbattle_single TRAINER_WIGGLYTUFF, Hoenn3_7_Wigglytuff_Text_0, Hoenn3_7_Wigglytuff_Text_1
# 6 "data/maps/Hoenn3_7/scripts.pory"
	msgbox Hoenn3_7_Wigglytuff_Text_2, MSGBOX_AUTOCLOSE
# 7 "data/maps/Hoenn3_7/scripts.pory"
	waitmessage
	end


Hoenn3_7_Sandslash::
# 12 "data/maps/Hoenn3_7/scripts.pory"
	trainerbattle_single TRAINER_SANDSLASH, Hoenn3_7_Sandslash_Text_0, Hoenn3_7_Sandslash_Text_1
# 13 "data/maps/Hoenn3_7/scripts.pory"
	msgbox Hoenn3_7_Sandslash_Text_2, MSGBOX_AUTOCLOSE
# 14 "data/maps/Hoenn3_7/scripts.pory"
	waitmessage
	end


Hoenn3_7_Slaking::
# 19 "data/maps/Hoenn3_7/scripts.pory"
	trainerbattle_single TRAINER_SLAKING, Hoenn3_7_Slaking_Text_0, Hoenn3_7_Slaking_Text_1, Hoenn3_7_Slaking_Defeated
# 20 "data/maps/Hoenn3_7/scripts.pory"
	msgbox Hoenn3_7_Slaking_Text_2, MSGBOX_AUTOCLOSE
# 21 "data/maps/Hoenn3_7/scripts.pory"
	waitmessage
	end


Hoenn3_7_Slaking_Defeated::
# 27 "data/maps/Hoenn3_7/scripts.pory"
	setflag FLAG_DEFEATED_PATH_LEADER
	end


Hoenn3_7_AbraTeleport::
# 32 "data/maps/Hoenn3_7/scripts.pory"
	call AbraTeleport
	return


Hoenn3_7_Wigglytuff_Text_0:
# 5 "data/maps/Hoenn3_7/scripts.pory"
	.string "Let's get this over with. The\n"
	.string "supermarket I go to does mark downs\l"
	.string "around this time so I want to get there\l"
	.string "quick.$"

Hoenn3_7_Wigglytuff_Text_1:
# 5 "data/maps/Hoenn3_7/scripts.pory"
	.string "Nice. Good game.$"

Hoenn3_7_Wigglytuff_Text_2:
# 6 "data/maps/Hoenn3_7/scripts.pory"
	.string "One time I got a pack of 3 steaks for\n"
	.string "only 5 dollars. My life peaked there.$"

Hoenn3_7_Sandslash_Text_0:
# 12 "data/maps/Hoenn3_7/scripts.pory"
	.string "You ever think of changing jobs? I'd\n"
	.string "like to be a bus driver someday. But the\l"
	.string "thought of driving a vehicle that big\l"
	.string "scares me.$"

Hoenn3_7_Sandslash_Text_1:
# 12 "data/maps/Hoenn3_7/scripts.pory"
	.string "Shoot!$"

Hoenn3_7_Sandslash_Text_2:
# 13 "data/maps/Hoenn3_7/scripts.pory"
	.string "I can't imagine myself having to make a\n"
	.string "tight turn in a bus so I think I'll give\l"
	.string "up on that dream.$"

Hoenn3_7_Slaking_Text_0:
# 19 "data/maps/Hoenn3_7/scripts.pory"
	.string "Oh hello. I'm the leader of this path.\n"
	.string "Defeat me and you'll only have the final\l"
	.string "path!$"

Hoenn3_7_Slaking_Text_1:
# 19 "data/maps/Hoenn3_7/scripts.pory"
	.string "Your skills are no joke!$"

Hoenn3_7_Slaking_Text_2:
# 20 "data/maps/Hoenn3_7/scripts.pory"
	.string "Talk to abra over there to continue\n"
	.string "matey.\l"
	.string ".............\l"
	.string "I don't know why I added that sorry.$"
