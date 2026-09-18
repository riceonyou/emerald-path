Hoenn1_Alt_5_MapScripts::
	.byte 0


Hoenn1_Alt_5_EventScript_Ralts::
# 6 "data/maps/Hoenn1_Alt_5/scripts.pory"
	trainerbattle_single TRAINER_RALTS, Hoenn1_Alt_5_EventScript_Ralts_Text_0, Hoenn1_Alt_5_EventScript_Ralts_Text_1
# 7 "data/maps/Hoenn1_Alt_5/scripts.pory"
	msgbox Hoenn1_Alt_5_EventScript_Ralts_Text_2, MSGBOX_AUTOCLOSE
# 8 "data/maps/Hoenn1_Alt_5/scripts.pory"
	waitmessage
	end


Hoenn1_Alt_5_EventScript_Carvanha::
# 12 "data/maps/Hoenn1_Alt_5/scripts.pory"
	trainerbattle_single TRAINER_CARVANHA, Hoenn1_Alt_5_EventScript_Carvanha_Text_0, Hoenn1_Alt_5_EventScript_Carvanha_Text_1
# 13 "data/maps/Hoenn1_Alt_5/scripts.pory"
	msgbox Hoenn1_Alt_5_EventScript_Carvanha_Text_2, MSGBOX_AUTOCLOSE
# 14 "data/maps/Hoenn1_Alt_5/scripts.pory"
	waitmessage
	end


Hoenn1_Alt_5_EventScript_Vulpix::
# 18 "data/maps/Hoenn1_Alt_5/scripts.pory"
	trainerbattle_single TRAINER_VULPIX, Hoenn1_Alt_5_EventScript_Vulpix_Text_0, Hoenn1_Alt_5_EventScript_Vulpix_Text_1
# 19 "data/maps/Hoenn1_Alt_5/scripts.pory"
	msgbox Hoenn1_Alt_5_EventScript_Vulpix_Text_2, MSGBOX_AUTOCLOSE
# 20 "data/maps/Hoenn1_Alt_5/scripts.pory"
	waitmessage
	end


Hoenn1_Alt_5_EventScript_Makuhita::
# 25 "data/maps/Hoenn1_Alt_5/scripts.pory"
	trainerbattle_single TRAINER_MAKUHITA, Hoenn1_Alt_5_EventScript_Makuhita_Text_0, Hoenn1_Alt_5_EventScript_Makuhita_Text_1, Hoenn1_Alt_5_EventScript_Leader_Defeated
# 26 "data/maps/Hoenn1_Alt_5/scripts.pory"
	msgbox Hoenn1_Alt_5_EventScript_Makuhita_Text_2, MSGBOX_AUTOCLOSE
# 27 "data/maps/Hoenn1_Alt_5/scripts.pory"
	waitmessage
	end


Hoenn1_Alt_5_EventScript_Leader_Defeated::
# 32 "data/maps/Hoenn1_Alt_5/scripts.pory"
	setflag FLAG_DEFEATED_PATH_LEADER
	end


Hoenn1_Alt_5_AbraTeleport1::
# 39 "data/maps/Hoenn1_Alt_5/scripts.pory"
	call AbraTeleport
	return


Hoenn1_Alt_5_EventScript_Ralts_Text_0:
# 6 "data/maps/Hoenn1_Alt_5/scripts.pory"
	.string "Hello. Would you like to battle?$"

Hoenn1_Alt_5_EventScript_Ralts_Text_1:
# 6 "data/maps/Hoenn1_Alt_5/scripts.pory"
	.string "That was fun! Let's be friends!$"

Hoenn1_Alt_5_EventScript_Ralts_Text_2:
# 7 "data/maps/Hoenn1_Alt_5/scripts.pory"
	.string "Hi friend! I hope your day goes well!$"

Hoenn1_Alt_5_EventScript_Carvanha_Text_0:
# 12 "data/maps/Hoenn1_Alt_5/scripts.pory"
	.string "Aaaa. Do we have to battle now? I need\n"
	.string "to buy something from the kecleon shop\l"
	.string "real quick...\p"
	.string "Aaah whatever. Let's start!$"

Hoenn1_Alt_5_EventScript_Carvanha_Text_1:
# 12 "data/maps/Hoenn1_Alt_5/scripts.pory"
	.string "Aaaa I knew I should've went to buy it\n"
	.string "earlier$"

Hoenn1_Alt_5_EventScript_Carvanha_Text_2:
# 13 "data/maps/Hoenn1_Alt_5/scripts.pory"
	.string "Did you know you can buy things from\n"
	.string "the kecleon shop even after you beat\l"
	.string "the gym leader? It's a good idea if you\l"
	.string "need something for the next path.$"

Hoenn1_Alt_5_EventScript_Vulpix_Text_0:
# 18 "data/maps/Hoenn1_Alt_5/scripts.pory"
	.string "Let's have a fair and fun fight!$"

Hoenn1_Alt_5_EventScript_Vulpix_Text_1:
# 18 "data/maps/Hoenn1_Alt_5/scripts.pory"
	.string "That was a good battle!$"

Hoenn1_Alt_5_EventScript_Vulpix_Text_2:
# 19 "data/maps/Hoenn1_Alt_5/scripts.pory"
	.string "Good luck with leader Makuhita. He's\n"
	.string "real tough!$"

Hoenn1_Alt_5_EventScript_Makuhita_Text_0:
# 25 "data/maps/Hoenn1_Alt_5/scripts.pory"
	.string "Hey there. You think you can take me\n"
	.string "on? Then let's see if you're right!$"

Hoenn1_Alt_5_EventScript_Makuhita_Text_1:
# 25 "data/maps/Hoenn1_Alt_5/scripts.pory"
	.string "Wow. You're strong.$"

Hoenn1_Alt_5_EventScript_Makuhita_Text_2:
# 26 "data/maps/Hoenn1_Alt_5/scripts.pory"
	.string "Talk to Abra to continue.\p"
	.string "C'mon, I'm sure he doesn't have all day.$"
