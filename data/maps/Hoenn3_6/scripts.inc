Hoenn3_6_MapScripts::
	.byte 0


Hoenn3_9_EventScript_BirchBag::
# 6 "data/maps/Hoenn3_6/scripts.pory"
	lockall
# 7 "data/maps/Hoenn3_6/scripts.pory"
	call Act3BirchBag
# 9 "data/maps/Hoenn3_6/scripts.pory"
	removeobject HOENN3_9_BIRCHBAG
# 10 "data/maps/Hoenn3_6/scripts.pory"
	setflag FLAG_BIRCHBAG_3_9
# 11 "data/maps/Hoenn3_6/scripts.pory"
	playfanfare MUS_EVOLVED
# 14 "data/maps/Hoenn3_6/scripts.pory"
	waitmessage
# 15 "data/maps/Hoenn3_6/scripts.pory"
	releaseall
	end


Hoenn3_8_EventScript_BirchBag::
# 22 "data/maps/Hoenn3_6/scripts.pory"
	lockall
# 23 "data/maps/Hoenn3_6/scripts.pory"
	call Act3BirchBag
# 25 "data/maps/Hoenn3_6/scripts.pory"
	removeobject HOENN3_8_BIRCHBAG
# 26 "data/maps/Hoenn3_6/scripts.pory"
	setflag FLAG_BIRCHBAG_3_8
# 27 "data/maps/Hoenn3_6/scripts.pory"
	playfanfare MUS_EVOLVED
# 30 "data/maps/Hoenn3_6/scripts.pory"
	waitmessage
# 31 "data/maps/Hoenn3_6/scripts.pory"
	releaseall
	end

