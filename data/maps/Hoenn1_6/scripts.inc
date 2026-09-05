Hoenn1_6_MapScripts::
	.byte 0


Hoenn1_6_KecShop_Sign::
# 5 "data/maps/Hoenn1_6/scripts.pory"
	call KecShop_Sign
	return


Hoenn1_6_KecShop::
# 9 "data/maps/Hoenn1_6/scripts.pory"
	call KecShop
	return


Hoenn1_6_KecShop_Shiny::
# 13 "data/maps/Hoenn1_6/scripts.pory"
	call KecShop_Shiny
	return


Hoenn1_6_EventScript_Rival::
# 17 "data/maps/Hoenn1_6/scripts.pory"
	call RivalFight1
	return


Hoenn1_6_EventScript_Shroomish::
# 22 "data/maps/Hoenn1_6/scripts.pory"
	trainerbattle_single TRAINER_SHROOMISH, Hoenn1_6_EventScript_Shroomish_Text_0, Hoenn1_6_EventScript_Shroomish_Text_1
# 23 "data/maps/Hoenn1_6/scripts.pory"
	msgbox Hoenn1_6_EventScript_Shroomish_Text_2, MSGBOX_AUTOCLOSE
# 24 "data/maps/Hoenn1_6/scripts.pory"
	waitmessage
	end


Hoenn1_6_EventScript_Surskit::
# 31 "data/maps/Hoenn1_6/scripts.pory"
	trainerbattle_single TRAINER_SURSKIT, Hoenn1_6_EventScript_Surskit_Text_0, Hoenn1_6_EventScript_Surskit_Text_1
# 32 "data/maps/Hoenn1_6/scripts.pory"
	msgbox Hoenn1_6_EventScript_Surskit_Text_2, MSGBOX_AUTOCLOSE
# 33 "data/maps/Hoenn1_6/scripts.pory"
	waitmessage
	end


Hoenn1_8_EventScript_BirchBag::
# 41 "data/maps/Hoenn1_6/scripts.pory"
	lockall
# 42 "data/maps/Hoenn1_6/scripts.pory"
	call Act1BirchBag
# 44 "data/maps/Hoenn1_6/scripts.pory"
	removeobject HOENN1_8_BIRCHBAG
# 45 "data/maps/Hoenn1_6/scripts.pory"
	setflag FLAG_BIRCHBAG_1_8
# 48 "data/maps/Hoenn1_6/scripts.pory"
	waitmessage
# 49 "data/maps/Hoenn1_6/scripts.pory"
	releaseall
	end


Hoenn1_7_EventScript_Skitty::
# 56 "data/maps/Hoenn1_6/scripts.pory"
	trainerbattle_single TRAINER_SKITTY, Hoenn1_7_EventScript_Skitty_Text_0, Hoenn1_7_EventScript_Skitty_Text_1
# 57 "data/maps/Hoenn1_6/scripts.pory"
	msgbox Hoenn1_7_EventScript_Skitty_Text_2, MSGBOX_AUTOCLOSE
# 58 "data/maps/Hoenn1_6/scripts.pory"
	waitmessage
	end


Hoenn1_7_EventScript_Nincada::
# 65 "data/maps/Hoenn1_6/scripts.pory"
	trainerbattle_single TRAINER_NINCADA, Hoenn1_7_EventScript_Nincada_Text_0, Hoenn1_7_EventScript_Nincada_Text_1
# 66 "data/maps/Hoenn1_6/scripts.pory"
	msgbox Hoenn1_7_EventScript_Nincada_Text_2, MSGBOX_AUTOCLOSE
# 67 "data/maps/Hoenn1_6/scripts.pory"
	waitmessage
	end


Hoenn1_9_EventScript_BirchBag::
# 75 "data/maps/Hoenn1_6/scripts.pory"
	lockall
# 76 "data/maps/Hoenn1_6/scripts.pory"
	call Act1BirchBag
# 78 "data/maps/Hoenn1_6/scripts.pory"
	removeobject HOENN1_9_BIRCHBAG
# 79 "data/maps/Hoenn1_6/scripts.pory"
	setflag FLAG_BIRCHBAG_1_9
# 82 "data/maps/Hoenn1_6/scripts.pory"
	waitmessage
# 83 "data/maps/Hoenn1_6/scripts.pory"
	releaseall
	end


Hoenn1_1_Itemball_4::
# 88 "data/maps/Hoenn1_6/scripts.pory"
	lockall
# 89 "data/maps/Hoenn1_6/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 90 "data/maps/Hoenn1_6/scripts.pory"
	removeobject HOENN1_4_ITEM
# 91 "data/maps/Hoenn1_6/scripts.pory"
	setflag FLAG_ITEM_1_4
# 92 "data/maps/Hoenn1_6/scripts.pory"
	releaseall
	end


Hoenn1_1_Itemball_5::
# 97 "data/maps/Hoenn1_6/scripts.pory"
	lockall
# 98 "data/maps/Hoenn1_6/scripts.pory"
	giveitem ITEM_TM_TOXIC, 1
# 99 "data/maps/Hoenn1_6/scripts.pory"
	removeobject HOENN1_5_ITEM
# 100 "data/maps/Hoenn1_6/scripts.pory"
	setflag FLAG_ITEM_1_5
# 101 "data/maps/Hoenn1_6/scripts.pory"
	releaseall
	end


Hoenn1_6_EventScript_Shroomish_Text_0:
# 22 "data/maps/Hoenn1_6/scripts.pory"
	.string "Hey.$"

Hoenn1_6_EventScript_Shroomish_Text_1:
# 22 "data/maps/Hoenn1_6/scripts.pory"
	.string "Ggs.$"

Hoenn1_6_EventScript_Shroomish_Text_2:
# 23 "data/maps/Hoenn1_6/scripts.pory"
	.string "Oi. Did you just make fun of my\n"
	.string "monobrow?. How dare you >:($"

Hoenn1_6_EventScript_Surskit_Text_0:
# 31 "data/maps/Hoenn1_6/scripts.pory"
	.string "Did you know I secret oil from my feet\n"
	.string "to skate on water?$"

Hoenn1_6_EventScript_Surskit_Text_1:
# 31 "data/maps/Hoenn1_6/scripts.pory"
	.string "Did you know that I am known to compete\n"
	.string "with Dewpider over food?$"

Hoenn1_6_EventScript_Surskit_Text_2:
# 32 "data/maps/Hoenn1_6/scripts.pory"
	.string "Did you know the antenna on my head\n"
	.string "secretes a thick, sugary syrup or a\l"
	.string "sweet scent?\n"
	.string "- Bulbapedia$"

Hoenn1_7_EventScript_Skitty_Text_0:
# 56 "data/maps/Hoenn1_6/scripts.pory"
	.string "My favourite football player of all\n"
	.string "time? Personally it's Jay-Jay Okocha.\l"
	.string "He was so good that they named him\l"
	.string "twice.$"

Hoenn1_7_EventScript_Skitty_Text_1:
# 56 "data/maps/Hoenn1_6/scripts.pory"
	.string "I wish they would name me twice too.$"

Hoenn1_7_EventScript_Skitty_Text_2:
# 57 "data/maps/Hoenn1_6/scripts.pory"
	.string "Hmm......\p"
	.string "If they did name me twice I would be\n"
	.string "called Skit-Skit Ty. How does that\l"
	.string "sound?$"

Hoenn1_7_EventScript_Nincada_Text_0:
# 65 "data/maps/Hoenn1_6/scripts.pory"
	.string "My favourite football player of all\n"
	.string "time? I don't really watch soccer but\l"
	.string "Erling Haaland I guess. I saw some reels\l"
	.string "of him and I love his smooth, voluptuous\l"
	.string "hair.$"

Hoenn1_7_EventScript_Nincada_Text_1:
# 65 "data/maps/Hoenn1_6/scripts.pory"
	.string "What? What do you mean he's bald now?$"

Hoenn1_7_EventScript_Nincada_Text_2:
# 66 "data/maps/Hoenn1_6/scripts.pory"
	.string "That's a shame. I'd like to have hair like\n"
	.string "him.$"
