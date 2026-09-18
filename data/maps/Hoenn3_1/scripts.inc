Hoenn3_1_MapScripts::
# 2 "data/maps/Hoenn3_1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Hoenn3_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Hoenn3_1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 2 "data/maps/Hoenn3_1/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Hoenn3_1_ONFRAME
	.2byte 0


Hoenn3_1_ONFRAME::
# 6 "data/maps/Hoenn3_1/scripts.pory"
	setvar VAR_TEMP_1, 1
# 7 "data/maps/Hoenn3_1/scripts.pory"
	call AfterWarpIntoNewAct
	return


Hoenn3_1_Vibrava::
# 11 "data/maps/Hoenn3_1/scripts.pory"
	trainerbattle_single TRAINER_FLYGON, Hoenn3_1_Vibrava_Text_0, Hoenn3_1_Vibrava_Text_1
# 12 "data/maps/Hoenn3_1/scripts.pory"
	msgbox Hoenn3_1_Vibrava_Text_2, MSGBOX_AUTOCLOSE
# 13 "data/maps/Hoenn3_1/scripts.pory"
	waitmessage
	end


Hoenn3_1_Cacturne::
# 18 "data/maps/Hoenn3_1/scripts.pory"
	trainerbattle_single TRAINER_CACTURNE, Hoenn3_1_Cacturne_Text_0, Hoenn3_1_Cacturne_Text_1
# 19 "data/maps/Hoenn3_1/scripts.pory"
	msgbox Hoenn3_1_Cacturne_Text_2, MSGBOX_AUTOCLOSE
# 20 "data/maps/Hoenn3_1/scripts.pory"
	waitmessage
	end


Hoenn3_1_EventScript_BirchBag::
# 33 "data/maps/Hoenn3_1/scripts.pory"
	lockall
# 34 "data/maps/Hoenn3_1/scripts.pory"
	call Act3BirchBag
# 36 "data/maps/Hoenn3_1/scripts.pory"
	removeobject HOENN3_1_BIRCHBAG
# 37 "data/maps/Hoenn3_1/scripts.pory"
	setflag FLAG_BIRCHBAG_3_1
# 40 "data/maps/Hoenn3_1/scripts.pory"
	waitmessage
# 41 "data/maps/Hoenn3_1/scripts.pory"
	releaseall
	end


Hoenn3_5_EventScript_BirchBag::
# 48 "data/maps/Hoenn3_1/scripts.pory"
	lockall
# 49 "data/maps/Hoenn3_1/scripts.pory"
	call Act3BirchBag
# 51 "data/maps/Hoenn3_1/scripts.pory"
	removeobject HOENN3_5_BIRCHBAG
# 52 "data/maps/Hoenn3_1/scripts.pory"
	setflag FLAG_BIRCHBAG_3_5
# 55 "data/maps/Hoenn3_1/scripts.pory"
	waitmessage
# 56 "data/maps/Hoenn3_1/scripts.pory"
	releaseall
	end


Hoenn3_1_Vibrava_Text_0:
# 11 "data/maps/Hoenn3_1/scripts.pory"
	.string "Yo. Who's your favourite rapper?$"

Hoenn3_1_Vibrava_Text_1:
# 11 "data/maps/Hoenn3_1/scripts.pory"
	.string "Damn you strong.$"

Hoenn3_1_Vibrava_Text_2:
# 12 "data/maps/Hoenn3_1/scripts.pory"
	.string "Have you heard of Piledriver by\n"
	.string "Minamoto Osamaro?\p"
	.string "Piledriver. Ore nanka no kokoro ni aita.\p"
	.string "He made that song with just his phone.\n"
	.string "The kid's been tearing up the Japanese\l"
	.string "rap scene.$"

Hoenn3_1_Cacturne_Text_0:
# 18 "data/maps/Hoenn3_1/scripts.pory"
	.string "My favourite food spot? It's a chain\n"
	.string "spot but KFC I guess. What's yours?$"

Hoenn3_1_Cacturne_Text_1:
# 18 "data/maps/Hoenn3_1/scripts.pory"
	.string "You fried me.$"

Hoenn3_1_Cacturne_Text_2:
# 19 "data/maps/Hoenn3_1/scripts.pory"
	.string "The KFC at the xxxxxx intersection is\n"
	.string "the best. They always give me an extra\l"
	.string "wicked wing when I order a fill up box.$"
