Hoenn1_3_MapScripts::
	.byte 0


Hoenn1_3_EventScript_Poochyena::
# 6 "data/maps/Hoenn1_3/scripts.pory"
	trainerbattle_single TRAINER_POOCHYENA, Poochyena_Intro, Poochyena_Outro
# 7 "data/maps/Hoenn1_3/scripts.pory"
	msgbox PostBattle_Poochyena, MSGBOX_AUTOCLOSE
# 8 "data/maps/Hoenn1_3/scripts.pory"
	waitmessage
	end


Hoenn1_3_EventScript_Lotad::
# 27 "data/maps/Hoenn1_3/scripts.pory"
	trainerbattle_single TRAINER_LOTAD, Hoenn1_3_EventScript_Lotad_Text_0, Hoenn1_3_EventScript_Lotad_Text_1
# 28 "data/maps/Hoenn1_3/scripts.pory"
	msgbox Hoenn1_3_EventScript_Lotad_Text_2, MSGBOX_AUTOCLOSE
# 29 "data/maps/Hoenn1_3/scripts.pory"
	waitmessage
	end


Hoenn1_BirchBag_4::
# 36 "data/maps/Hoenn1_3/scripts.pory"
	lockall
# 37 "data/maps/Hoenn1_3/scripts.pory"
	call Act1BirchBag
# 39 "data/maps/Hoenn1_3/scripts.pory"
	removeobject HOENN1_4_BIRCHBAG
# 40 "data/maps/Hoenn1_3/scripts.pory"
	setflag FLAG_BIRCHBAG_1_4
# 43 "data/maps/Hoenn1_3/scripts.pory"
	waitmessage
# 44 "data/maps/Hoenn1_3/scripts.pory"
	releaseall
	end


Hoenn1_4_EventScript_Wingull::
# 51 "data/maps/Hoenn1_3/scripts.pory"
	trainerbattle_single TRAINER_WINGULL, Hoenn1_4_EventScript_Wingull_Text_0, Hoenn1_4_EventScript_Wingull_Text_1
# 52 "data/maps/Hoenn1_3/scripts.pory"
	msgbox Hoenn1_4_EventScript_Wingull_Text_2, MSGBOX_AUTOCLOSE
# 53 "data/maps/Hoenn1_3/scripts.pory"
	waitmessage
	end


Hoenn1_4_EventScript_Seedot::
# 60 "data/maps/Hoenn1_3/scripts.pory"
	trainerbattle_single TRAINER_SEEDOT, Hoenn1_4_EventScript_Seedot_Text_0, Hoenn1_4_EventScript_Seedot_Text_1
# 61 "data/maps/Hoenn1_3/scripts.pory"
	msgbox Hoenn1_4_EventScript_Seedot_Text_2, MSGBOX_AUTOCLOSE
# 62 "data/maps/Hoenn1_3/scripts.pory"
	waitmessage
	end


Hoenn1_BirchBag_5::
# 70 "data/maps/Hoenn1_3/scripts.pory"
	lockall
# 71 "data/maps/Hoenn1_3/scripts.pory"
	call Act1BirchBag
# 73 "data/maps/Hoenn1_3/scripts.pory"
	removeobject HOENN1_5_BIRCHBAG
# 74 "data/maps/Hoenn1_3/scripts.pory"
	setflag FLAG_BIRCHBAG_1_5
# 77 "data/maps/Hoenn1_3/scripts.pory"
	waitmessage
# 78 "data/maps/Hoenn1_3/scripts.pory"
	releaseall
	end


Hoenn1_BirchBag_6::
# 85 "data/maps/Hoenn1_3/scripts.pory"
	lockall
# 86 "data/maps/Hoenn1_3/scripts.pory"
	call Act1BirchBag
# 88 "data/maps/Hoenn1_3/scripts.pory"
	removeobject HOENN1_6_BIRCHBAG
# 89 "data/maps/Hoenn1_3/scripts.pory"
	setflag FLAG_BIRCHBAG_1_6
# 92 "data/maps/Hoenn1_3/scripts.pory"
	waitmessage
# 93 "data/maps/Hoenn1_3/scripts.pory"
	releaseall
	end


Hoenn1_3_EventScript_Lotad_Text_0:
# 27 "data/maps/Hoenn1_3/scripts.pory"
	.string "Hola. Me llamo Lotad. You can view a\n"
	.string "summary of my team by selecting the\l"
	.string "ENEMY option in battle.$"

Hoenn1_3_EventScript_Lotad_Text_1:
# 27 "data/maps/Hoenn1_3/scripts.pory"
	.string "He perdido.$"

Hoenn1_3_EventScript_Lotad_Text_2:
# 28 "data/maps/Hoenn1_3/scripts.pory"
	.string "Que pasa amigo. No hablo English,\nlo siento.$"

Hoenn1_4_EventScript_Wingull_Text_0:
# 51 "data/maps/Hoenn1_3/scripts.pory"
	.string "Howdy. I'm wingull. Let's battle!$"

Hoenn1_4_EventScript_Wingull_Text_1:
# 51 "data/maps/Hoenn1_3/scripts.pory"
	.string "They should call me losegull, not\n"
	.string "wingull. Squawk. By the way, did you know\l"
	.string "you can nickname pokemon by pressing A\l"
	.string "on the summary page? I'm nicknaming\l"
	.string "myself Losegull right now.$"

Hoenn1_4_EventScript_Wingull_Text_2:
# 52 "data/maps/Hoenn1_3/scripts.pory"
	.string "Did you know you can nickname pokemon\n"
	.string "by pressing A on the summary page? I'm\l"
	.string "nicknaming myself Losegull right now.$"

Hoenn1_4_EventScript_Seedot_Text_0:
# 60 "data/maps/Hoenn1_3/scripts.pory"
	.string "Hi. I'm about to sow some of my seed...\p"
	.string "Where? I'm going to sow it on the\n"
	.string "ground.\n"
	.string "Because of my seed sower ability.$"

Hoenn1_4_EventScript_Seedot_Text_1:
# 60 "data/maps/Hoenn1_3/scripts.pory"
	.string "By the way, if you already didn't know,\n"
	.string "you can access your PC through the\l"
	.string "start menu. If your party is full, any\l"
	.string "pokemon given to you will automatically\l"
	.string "go to there.$"

Hoenn1_4_EventScript_Seedot_Text_2:
# 61 "data/maps/Hoenn1_3/scripts.pory"
	.string "You can access your PC through the\n"
	.string "start menu. If your party is full,\l"
	.string "pokemon given to you will automatically\l"
	.string "go to there.$"

Poochyena_Intro::
# 13 "data/maps/Hoenn1_3/scripts.pory"
	.string "Ruff Ruff! Yena!\pThere's no poke-centres around here,\nso when one of your pokemon faint,\lthey'll be gone for good! So be careful!$"

Poochyena_Outro::
# 17 "data/maps/Hoenn1_3/scripts.pory"
	.string "Noo I lost!$"

PostBattle_Poochyena::
# 21 "data/maps/Hoenn1_3/scripts.pory"
	.string "Ruff!.$"
