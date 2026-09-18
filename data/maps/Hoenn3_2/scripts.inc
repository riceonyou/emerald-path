Hoenn3_2_MapScripts::
	.byte 0


Hoenn3_2_KecShop_Sign::
# 5 "data/maps/Hoenn3_2/scripts.pory"
	call KecShop_Sign
	return


Hoenn3_2_KecShop::
# 9 "data/maps/Hoenn3_2/scripts.pory"
	call KecShop
	return


Hoenn3_2_KecShop_Shiny::
# 13 "data/maps/Hoenn3_2/scripts.pory"
	call KecShop_Shiny
	return


Hoenn3_2_Skarmory::
# 17 "data/maps/Hoenn3_2/scripts.pory"
	trainerbattle_single TRAINER_SKARMORY, Hoenn3_2_Skarmory_Text_0, Hoenn3_2_Skarmory_Text_1
# 18 "data/maps/Hoenn3_2/scripts.pory"
	msgbox Hoenn3_2_Skarmory_Text_2, MSGBOX_AUTOCLOSE
# 19 "data/maps/Hoenn3_2/scripts.pory"
	waitmessage
	end


Hoenn3_2_Zangoose::
# 24 "data/maps/Hoenn3_2/scripts.pory"
	trainerbattle_single TRAINER_ZANGOOSE, Hoenn3_2_Zangoose_Text_0, Hoenn3_2_Zangoose_Text_1
# 25 "data/maps/Hoenn3_2/scripts.pory"
	msgbox Hoenn3_2_Zangoose_Text_2, MSGBOX_AUTOCLOSE
# 26 "data/maps/Hoenn3_2/scripts.pory"
	waitmessage
	end


Hoenn3_2_Seviper::
# 31 "data/maps/Hoenn3_2/scripts.pory"
	trainerbattle_single TRAINER_SEVIPER, Hoenn3_2_Seviper_Text_0, Hoenn3_2_Seviper_Text_1
# 32 "data/maps/Hoenn3_2/scripts.pory"
	msgbox Hoenn3_2_Seviper_Text_2, MSGBOX_AUTOCLOSE
# 33 "data/maps/Hoenn3_2/scripts.pory"
	waitmessage
	end


Hoenn3_2_Ninetales::
# 45 "data/maps/Hoenn3_2/scripts.pory"
	trainerbattle_single TRAINER_NINETALES, Hoenn3_2_Ninetales_Text_0, Hoenn3_2_Ninetales_Text_1
# 46 "data/maps/Hoenn3_2/scripts.pory"
	msgbox Hoenn3_2_Ninetales_Text_2, MSGBOX_AUTOCLOSE
# 47 "data/maps/Hoenn3_2/scripts.pory"
	waitmessage
	end


Hoenn3_2_EventScript_BirchBag::
# 53 "data/maps/Hoenn3_2/scripts.pory"
	lockall
# 54 "data/maps/Hoenn3_2/scripts.pory"
	call Act3BirchBag
# 56 "data/maps/Hoenn3_2/scripts.pory"
	removeobject HOENN3_2_BIRCHBAG
# 57 "data/maps/Hoenn3_2/scripts.pory"
	setflag FLAG_BIRCHBAG_3_2
# 60 "data/maps/Hoenn3_2/scripts.pory"
	waitmessage
# 61 "data/maps/Hoenn3_2/scripts.pory"
	releaseall
	end


Hoenn3_3_EventScript_BirchBag::
# 68 "data/maps/Hoenn3_2/scripts.pory"
	lockall
# 69 "data/maps/Hoenn3_2/scripts.pory"
	call Act3BirchBag
# 71 "data/maps/Hoenn3_2/scripts.pory"
	removeobject HOENN3_3_BIRCHBAG
# 72 "data/maps/Hoenn3_2/scripts.pory"
	setflag FLAG_BIRCHBAG_3_3
# 75 "data/maps/Hoenn3_2/scripts.pory"
	waitmessage
# 76 "data/maps/Hoenn3_2/scripts.pory"
	releaseall
	end


Hoenn3_4_EventScript_BirchBag::
# 83 "data/maps/Hoenn3_2/scripts.pory"
	lockall
# 84 "data/maps/Hoenn3_2/scripts.pory"
	call Act3BirchBag
# 86 "data/maps/Hoenn3_2/scripts.pory"
	removeobject HOENN3_4_BIRCHBAG
# 87 "data/maps/Hoenn3_2/scripts.pory"
	setflag FLAG_BIRCHBAG_3_4
# 90 "data/maps/Hoenn3_2/scripts.pory"
	waitmessage
# 91 "data/maps/Hoenn3_2/scripts.pory"
	releaseall
	end


Hoenn3_2_Skarmory_Text_0:
# 17 "data/maps/Hoenn3_2/scripts.pory"
	.string "Do you remember Geronimo Stilton? The\n"
	.string "children's book series about the rat. I\l"
	.string "loved those books.$"

Hoenn3_2_Skarmory_Text_1:
# 17 "data/maps/Hoenn3_2/scripts.pory"
	.string "Good games.$"

Hoenn3_2_Skarmory_Text_2:
# 18 "data/maps/Hoenn3_2/scripts.pory"
	.string "And can't forget the Thea sisters\n"
	.string "spinoff. I loves those too.$"

Hoenn3_2_Zangoose_Text_0:
# 24 "data/maps/Hoenn3_2/scripts.pory"
	.string "Hi! I always keep a pack of wet wipes\n"
	.string "with me wherever I go.$"

Hoenn3_2_Zangoose_Text_1:
# 24 "data/maps/Hoenn3_2/scripts.pory"
	.string "You wiped the floor with me!$"

Hoenn3_2_Zangoose_Text_2:
# 25 "data/maps/Hoenn3_2/scripts.pory"
	.string "Wet wipes are so useful. I can clean my\n"
	.string "hands, my face, my phone...$"

Hoenn3_2_Seviper_Text_0:
# 31 "data/maps/Hoenn3_2/scripts.pory"
	.string "My favourite beatboxer? It's Hiss of\n"
	.string "course!$"

Hoenn3_2_Seviper_Text_1:
# 31 "data/maps/Hoenn3_2/scripts.pory"
	.string "Blaaargh$"

Hoenn3_2_Seviper_Text_2:
# 32 "data/maps/Hoenn3_2/scripts.pory"
	.string "Bsss kla kla pow\p"
	.string "buh kah mmka mmka buh kah mmka mmka.$"

Hoenn3_2_Ninetales_Text_0:
# 45 "data/maps/Hoenn3_2/scripts.pory"
	.string "I watched all of Naruto recently cos all\n"
	.string "my friends said it was weird I hadn't\l"
	.string "watched it yet. It was pretty good.$"

Hoenn3_2_Ninetales_Text_1:
# 45 "data/maps/Hoenn3_2/scripts.pory"
	.string "You got me dattebayo.$"

Hoenn3_2_Ninetales_Text_2:
# 46 "data/maps/Hoenn3_2/scripts.pory"
	.string "I watched Boruto too. I just loved the\n"
	.string "parts when all the kids were eating\l"
	.string "burgers and the samurai girl ate a\l"
	.string "mountain of chips. They're so precious.$"
