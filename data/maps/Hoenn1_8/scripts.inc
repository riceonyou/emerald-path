Hoenn1_8_MapScripts::
	.byte 0


Hoenn1_8_EventScript_Taillow::
# 6 "data/maps/Hoenn1_8/scripts.pory"
	trainerbattle_single TRAINER_TAILLOW, Hoenn1_8_EventScript_Taillow_Text_0, Hoenn1_8_EventScript_Taillow_Text_1
# 7 "data/maps/Hoenn1_8/scripts.pory"
	msgbox Hoenn1_8_EventScript_Taillow_Text_2, MSGBOX_AUTOCLOSE
# 8 "data/maps/Hoenn1_8/scripts.pory"
	waitmessage
	end


Hoenn1_8_EventScript_Whismur::
# 15 "data/maps/Hoenn1_8/scripts.pory"
	trainerbattle_single TRAINER_WHISMUR, Hoenn1_8_EventScript_Whismur_Text_0, Hoenn1_8_EventScript_Whismur_Text_1
# 16 "data/maps/Hoenn1_8/scripts.pory"
	msgbox Hoenn1_8_EventScript_Whismur_Text_2, MSGBOX_AUTOCLOSE
# 17 "data/maps/Hoenn1_8/scripts.pory"
	waitmessage
	end


Hoenn1_8_EventScript_Nosepass::
# 23 "data/maps/Hoenn1_8/scripts.pory"
	trainerbattle_single TRAINER_LEADER_NOSEPASS, Hoenn1_8_EventScript_Nosepass_Text_0, Hoenn1_8_EventScript_Nosepass_Text_1, Hoenn1_8_EventScript_Nosepass_Defeated
# 24 "data/maps/Hoenn1_8/scripts.pory"
	msgbox Hoenn1_8_EventScript_Nosepass_Text_2, MSGBOX_AUTOCLOSE
# 25 "data/maps/Hoenn1_8/scripts.pory"
	waitmessage
	end


Hoenn1_8_EventScript_Nosepass_Defeated::
# 30 "data/maps/Hoenn1_8/scripts.pory"
	setflag FLAG_DEFEATED_PATH_LEADER
	end


EventScript_AbraTeleport1::
# 35 "data/maps/Hoenn1_8/scripts.pory"
	call AbraTeleport
	return


Hoenn1_8_EventScript_Taillow_Text_0:
# 6 "data/maps/Hoenn1_8/scripts.pory"
	.string "Welcome to the gym! You'll always find\n"
	.string "us at the end of a path. Once you beat\l"
	.string "the leader at the end of the gym, you\l"
	.string "can teleport to the next area by\l"
	.string "talking to abra! Now let's fight!$"

Hoenn1_8_EventScript_Taillow_Text_1:
# 6 "data/maps/Hoenn1_8/scripts.pory"
	.string "Aaaa you got me!$"

Hoenn1_8_EventScript_Taillow_Text_2:
# 7 "data/maps/Hoenn1_8/scripts.pory"
	.string "Good luck with the rest of the run.$"

Hoenn1_8_EventScript_Whismur_Text_0:
# 15 "data/maps/Hoenn1_8/scripts.pory"
	.string "Psst. Did you know that almost all\n"
	.string "pokemon in this game evolve at either\l"
	.string "level 16 or 32? Or both if they can\l"
	.string "evolve twice.$"

Hoenn1_8_EventScript_Whismur_Text_1:
# 15 "data/maps/Hoenn1_8/scripts.pory"
	.string "I can't wait to evolve into a loudred.\n"
	.string "But this level cap is making it hard...$"

Hoenn1_8_EventScript_Whismur_Text_2:
# 16 "data/maps/Hoenn1_8/scripts.pory"
	.string "Mumble mumble mumble...\p"
	.string "Maybe if I had some rare candies... Then\n"
	.string "I wouldn't have to go to the next path\l"
	.string "to evolve...\p"
	.string "Mumble mumble...$"

Hoenn1_8_EventScript_Nosepass_Text_0:
# 23 "data/maps/Hoenn1_8/scripts.pory"
	.string "Hello. I am the leader of this gym. We\n"
	.string "tend to have full teams of 6 pokemon. I\l"
	.string "hope you are prepared.$"

Hoenn1_8_EventScript_Nosepass_Text_1:
# 23 "data/maps/Hoenn1_8/scripts.pory"
	.string "Congratulations. You have defeated me.\n"
	.string "Talk to the Abra to continue.$"

Hoenn1_8_EventScript_Nosepass_Text_2:
# 24 "data/maps/Hoenn1_8/scripts.pory"
	.string "Talk to the Abra to continue. Before\n"
	.string "you head to the next path though, you\l"
	.string "will be teleported to a location of a\l"
	.string "legendary pokemon with special rewards\l"
	.string "for you.$"
