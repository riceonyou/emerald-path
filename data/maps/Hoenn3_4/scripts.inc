Hoenn3_4_MapScripts::
	.byte 0


Hoenn3_4_Lunatone::
# 5 "data/maps/Hoenn3_4/scripts.pory"
	trainerbattle_double TRAINER_SOLROCKLUNATONE, Hoenn3_4_Lunatone_Text_0, Hoenn3_4_Lunatone_Text_0, Hoenn3_4_Lunatone_Text_0
# 6 "data/maps/Hoenn3_4/scripts.pory"
	msgbox Hoenn3_4_Lunatone_Text_1, MSGBOX_AUTOCLOSE
# 7 "data/maps/Hoenn3_4/scripts.pory"
	waitmessage
	end


Hoenn3_4_Solrock::
# 12 "data/maps/Hoenn3_4/scripts.pory"
	trainerbattle_double TRAINER_SOLROCKLUNATONE, Hoenn3_4_Solrock_Text_0, Hoenn3_4_Solrock_Text_1, Hoenn3_4_Lunatone_Text_0
# 13 "data/maps/Hoenn3_4/scripts.pory"
	msgbox Hoenn3_4_Solrock_Text_2, MSGBOX_AUTOCLOSE
# 14 "data/maps/Hoenn3_4/scripts.pory"
	waitmessage
	end


Hoenn3_4_Whiscash::
# 19 "data/maps/Hoenn3_4/scripts.pory"
	trainerbattle_single TRAINER_WHISCASH, Hoenn3_4_Whiscash_Text_0, Hoenn3_4_Whiscash_Text_1
# 20 "data/maps/Hoenn3_4/scripts.pory"
	msgbox Hoenn3_4_Whiscash_Text_2, MSGBOX_AUTOCLOSE
# 21 "data/maps/Hoenn3_4/scripts.pory"
	waitmessage
	end


Hoenn3_Itemball_6::
# 26 "data/maps/Hoenn3_4/scripts.pory"
	lockall
# 27 "data/maps/Hoenn3_4/scripts.pory"
	call GiveUncommonItem
# 28 "data/maps/Hoenn3_4/scripts.pory"
	removeobject Hoenn3_Ball6
# 29 "data/maps/Hoenn3_4/scripts.pory"
	setflag FLAG_ITEM_3_6
# 30 "data/maps/Hoenn3_4/scripts.pory"
	releaseall
	end


Hoenn3_Itemball_7::
# 35 "data/maps/Hoenn3_4/scripts.pory"
	lockall
# 36 "data/maps/Hoenn3_4/scripts.pory"
	call GiveRareItem
# 37 "data/maps/Hoenn3_4/scripts.pory"
	removeobject Hoenn3_Ball7
# 38 "data/maps/Hoenn3_4/scripts.pory"
	setflag FLAG_ITEM_3_7
# 39 "data/maps/Hoenn3_4/scripts.pory"
	releaseall
	end


Hoenn3_Itemball_8::
# 44 "data/maps/Hoenn3_4/scripts.pory"
	lockall
# 45 "data/maps/Hoenn3_4/scripts.pory"
	call GiveUncommonItem
# 46 "data/maps/Hoenn3_4/scripts.pory"
	removeobject Hoenn3_Ball8
# 47 "data/maps/Hoenn3_4/scripts.pory"
	setflag FLAG_ITEM_3_8
# 48 "data/maps/Hoenn3_4/scripts.pory"
	releaseall
	end


Hoenn3_Itemball_9::
# 53 "data/maps/Hoenn3_4/scripts.pory"
	lockall
# 54 "data/maps/Hoenn3_4/scripts.pory"
	call GiveCommonItem
# 55 "data/maps/Hoenn3_4/scripts.pory"
	removeobject Hoenn3_Ball9
# 56 "data/maps/Hoenn3_4/scripts.pory"
	setflag FLAG_ITEM_3_9
# 57 "data/maps/Hoenn3_4/scripts.pory"
	releaseall
	end


Hoenn3_Itemball_10::
# 62 "data/maps/Hoenn3_4/scripts.pory"
	lockall
# 63 "data/maps/Hoenn3_4/scripts.pory"
	call GiveCommonItem
# 64 "data/maps/Hoenn3_4/scripts.pory"
	removeobject Hoenn3_Ball10
# 65 "data/maps/Hoenn3_4/scripts.pory"
	setflag FLAG_ITEM_3_10
# 66 "data/maps/Hoenn3_4/scripts.pory"
	releaseall
	end


Hoenn3_4_Lunatone_Text_0:
# 5 "data/maps/Hoenn3_4/scripts.pory"
	.string "test$"

Hoenn3_4_Lunatone_Text_1:
# 6 "data/maps/Hoenn3_4/scripts.pory"
	.string "Solrock get's too worked up about a 10\n"
	.string "year old game. Sorry about that.$"

Hoenn3_4_Solrock_Text_0:
# 12 "data/maps/Hoenn3_4/scripts.pory"
	.string "Can you believe we're not in pokemon\n"
	.string "sun and moon? How dare they.$"

Hoenn3_4_Solrock_Text_1:
# 12 "data/maps/Hoenn3_4/scripts.pory"
	.string "Thanks for the battle.$"

Hoenn3_4_Solrock_Text_2:
# 13 "data/maps/Hoenn3_4/scripts.pory"
	.string "Grrr gamefreak grrr...$"

Hoenn3_4_Whiscash_Text_0:
# 19 "data/maps/Hoenn3_4/scripts.pory"
	.string "Did you that muddy water is buffed in\n"
	.string "this game? It always reduces accuracy\l"
	.string "and is a bit more accurate!$"

Hoenn3_4_Whiscash_Text_1:
# 19 "data/maps/Hoenn3_4/scripts.pory"
	.string "Ptooey.$"

Hoenn3_4_Whiscash_Text_2:
# 20 "data/maps/Hoenn3_4/scripts.pory"
	.string "Damn I thought I had you!$"
