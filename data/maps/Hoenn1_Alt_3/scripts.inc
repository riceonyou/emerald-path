Hoenn1_Alt_3_MapScripts::
	.byte 0


Hoenn1_Alt_3_EventScript_Aron::
# 6 "data/maps/Hoenn1_Alt_3/scripts.pory"
	trainerbattle_single TRAINER_ARON, Hoenn1_Alt_3_EventScript_Aron_Text_0, Hoenn1_Alt_3_EventScript_Aron_Text_1
# 7 "data/maps/Hoenn1_Alt_3/scripts.pory"
	msgbox Hoenn1_Alt_3_EventScript_Aron_Text_2, MSGBOX_AUTOCLOSE
# 8 "data/maps/Hoenn1_Alt_3/scripts.pory"
	waitmessage
	end


Hoenn1_Alt_3_EventScript_Zubat::
# 13 "data/maps/Hoenn1_Alt_3/scripts.pory"
	trainerbattle_single TRAINER_ZUBAT, Hoenn1_Alt_3_EventScript_Zubat_Text_0, Hoenn1_Alt_3_EventScript_Zubat_Text_1
# 14 "data/maps/Hoenn1_Alt_3/scripts.pory"
	msgbox Hoenn1_Alt_3_EventScript_Zubat_Text_2, MSGBOX_AUTOCLOSE
# 15 "data/maps/Hoenn1_Alt_3/scripts.pory"
	waitmessage
	end


Hoenn1_Alt_3_EventScript_Spoink::
# 19 "data/maps/Hoenn1_Alt_3/scripts.pory"
	trainerbattle_single TRAINER_SPOINK, Hoenn1_Alt_3_EventScript_Spoink_Text_0, Hoenn1_Alt_3_EventScript_Spoink_Text_1
# 20 "data/maps/Hoenn1_Alt_3/scripts.pory"
	msgbox Hoenn1_Alt_3_EventScript_Spoink_Text_2, MSGBOX_AUTOCLOSE
# 21 "data/maps/Hoenn1_Alt_3/scripts.pory"
	waitmessage
	end


Hoenn1_Alt_3_EventScript_Mawile::
# 25 "data/maps/Hoenn1_Alt_3/scripts.pory"
	trainerbattle_double TRAINER_MAWILESABELEYE, Hoenn1_Alt_3_EventScript_Mawile_Text_0, Hoenn1_Alt_3_EventScript_Mawile_Text_1, Hoenn1_Alt_3_EventScript_Mawile_Text_2
# 26 "data/maps/Hoenn1_Alt_3/scripts.pory"
	msgbox Hoenn1_Alt_3_EventScript_Mawile_Text_3, MSGBOX_AUTOCLOSE
# 27 "data/maps/Hoenn1_Alt_3/scripts.pory"
	waitmessage
	end


Hoenn1_Alt_3_EventScript_Sabeleye::
# 31 "data/maps/Hoenn1_Alt_3/scripts.pory"
	trainerbattle_double TRAINER_MAWILESABELEYE, Hoenn1_Alt_3_EventScript_Mawile_Text_2, Hoenn1_Alt_3_EventScript_Mawile_Text_2, Hoenn1_Alt_3_EventScript_Mawile_Text_2
# 32 "data/maps/Hoenn1_Alt_3/scripts.pory"
	msgbox Hoenn1_Alt_3_EventScript_Sabeleye_Text_0, MSGBOX_AUTOCLOSE
# 33 "data/maps/Hoenn1_Alt_3/scripts.pory"
	waitmessage
	end


Hoenn1_Alt_3_EventScript_BirchBag_7::
# 40 "data/maps/Hoenn1_Alt_3/scripts.pory"
	lockall
# 42 "data/maps/Hoenn1_Alt_3/scripts.pory"
	call Act1BirchBag
# 44 "data/maps/Hoenn1_Alt_3/scripts.pory"
	removeobject HOENN1_ALT_7_BIRCHBAG
# 45 "data/maps/Hoenn1_Alt_3/scripts.pory"
	setflag FLAG_BIRCHBAG_1_7
# 48 "data/maps/Hoenn1_Alt_3/scripts.pory"
	waitmessage
# 49 "data/maps/Hoenn1_Alt_3/scripts.pory"
	releaseall
	end


Hoenn1_Alt_3_Itemball_4::
# 55 "data/maps/Hoenn1_Alt_3/scripts.pory"
	lockall
# 56 "data/maps/Hoenn1_Alt_3/scripts.pory"
	call GiveCommonItem
# 57 "data/maps/Hoenn1_Alt_3/scripts.pory"
	removeobject HOENN1_ALT_ITEM_4
# 58 "data/maps/Hoenn1_Alt_3/scripts.pory"
	setflag FLAG_ITEM_1_4
# 59 "data/maps/Hoenn1_Alt_3/scripts.pory"
	releaseall
	end


Hoenn1_Alt_3_Itemball_5::
# 64 "data/maps/Hoenn1_Alt_3/scripts.pory"
	lockall
# 65 "data/maps/Hoenn1_Alt_3/scripts.pory"
	call GiveCommonItem
# 66 "data/maps/Hoenn1_Alt_3/scripts.pory"
	removeobject HOENN1_ALT_ITEM_5
# 67 "data/maps/Hoenn1_Alt_3/scripts.pory"
	setflag FLAG_ITEM_1_5
# 68 "data/maps/Hoenn1_Alt_3/scripts.pory"
	releaseall
	end


Hoenn1_Alt_3_EventScript_Aron_Text_0:
# 6 "data/maps/Hoenn1_Alt_3/scripts.pory"
	.string "Hey how's it goin'? Have you heard the\n"
	.string "new DJ Ambipom album? It's absolutely\l"
	.string "mad!$"

Hoenn1_Alt_3_EventScript_Aron_Text_1:
# 6 "data/maps/Hoenn1_Alt_3/scripts.pory"
	.string "Sick battle, sick vibes.$"

Hoenn1_Alt_3_EventScript_Aron_Text_2:
# 7 "data/maps/Hoenn1_Alt_3/scripts.pory"
	.string "I've been getting into producing lately\n"
	.string "and it's pretty tough.$"

Hoenn1_Alt_3_EventScript_Zubat_Text_0:
# 13 "data/maps/Hoenn1_Alt_3/scripts.pory"
	.string "Eeeek! You scared me!\p"
	.string "Oh... Let's battle.$"

Hoenn1_Alt_3_EventScript_Zubat_Text_1:
# 13 "data/maps/Hoenn1_Alt_3/scripts.pory"
	.string "Uuuuuu...$"

Hoenn1_Alt_3_EventScript_Zubat_Text_2:
# 14 "data/maps/Hoenn1_Alt_3/scripts.pory"
	.string "Meow.\p"
	.string "............\p"
	.string ".............................\p"
	.string "Was that a good meow?$"

Hoenn1_Alt_3_EventScript_Spoink_Text_0:
# 19 "data/maps/Hoenn1_Alt_3/scripts.pory"
	.string "I used to work at a zoo as a zoo animal,\n"
	.string "y'know? It was totally fun. The guests\l"
	.string "loved me.$"

Hoenn1_Alt_3_EventScript_Spoink_Text_1:
# 19 "data/maps/Hoenn1_Alt_3/scripts.pory"
	.string "Oof. Oink.$"

Hoenn1_Alt_3_EventScript_Spoink_Text_2:
# 20 "data/maps/Hoenn1_Alt_3/scripts.pory"
	.string "Be careful in the cave. It's dark!$"

Hoenn1_Alt_3_EventScript_Mawile_Text_0:
# 25 "data/maps/Hoenn1_Alt_3/scripts.pory"
	.string "It'd be nice if they had a vending\n"
	.string "machine here. I could really use a cool\l"
	.string "drink right now.$"

Hoenn1_Alt_3_EventScript_Mawile_Text_1:
# 25 "data/maps/Hoenn1_Alt_3/scripts.pory"
	.string "Ahhh you got me.$"

Hoenn1_Alt_3_EventScript_Mawile_Text_2:
# 25 "data/maps/Hoenn1_Alt_3/scripts.pory"
	.string "test$"

Hoenn1_Alt_3_EventScript_Mawile_Text_3:
# 26 "data/maps/Hoenn1_Alt_3/scripts.pory"
	.string "Let's go to the store for some snacks,\n"
	.string "Sableye.$"

Hoenn1_Alt_3_EventScript_Sabeleye_Text_0:
# 32 "data/maps/Hoenn1_Alt_3/scripts.pory"
	.string "Let's go Mawile! I'm starving!$"
