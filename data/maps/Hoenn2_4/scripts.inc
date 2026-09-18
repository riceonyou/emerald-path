Hoenn2_4_MapScripts::
	.byte 0


Hoenn2_4_KecShop_Sign::
# 5 "data/maps/Hoenn2_4/scripts.pory"
	call KecShop_Sign
	return


Hoenn2_4_KecShop::
# 9 "data/maps/Hoenn2_4/scripts.pory"
	call KecShop
	return


Hoenn2_4_KecShop_Shiny::
# 13 "data/maps/Hoenn2_4/scripts.pory"
	call KecShop_Shiny
	return


Hoenn2_4_Doduo::
# 24 "data/maps/Hoenn2_4/scripts.pory"
	trainerbattle_single TRAINER_DODUO, Hoenn2_4_Doduo_Text_0, Hoenn2_4_Doduo_Text_1
# 25 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_Doduo_Text_2, MSGBOX_AUTOCLOSE
# 26 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
	end


Hoenn2_4_Loudred::
# 31 "data/maps/Hoenn2_4/scripts.pory"
	trainerbattle_single TRAINER_LOUDRED, Hoenn2_4_Loudred_Text_0, Hoenn2_4_Loudred_Text_1
# 32 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_Loudred_Text_2, MSGBOX_AUTOCLOSE
# 33 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
	end


Hoenn2_4_Electrode::
# 38 "data/maps/Hoenn2_4/scripts.pory"
	trainerbattle_single TRAINER_ELECTRODE, Hoenn2_4_Electrode_Text_0, Hoenn2_4_Electrode_Text_1
# 39 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_Electrode_Text_2, MSGBOX_AUTOCLOSE
# 40 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
	end


Hoenn2_4_Volbeat::
# 45 "data/maps/Hoenn2_4/scripts.pory"
	trainerbattle_double TRAINER_VOLBEATILLUMISE, Hoenn2_4_Volbeat_Text_0, Hoenn2_4_Volbeat_Text_1, Hoenn2_4_Volbeat_Text_2
# 46 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_Volbeat_Text_3, MSGBOX_AUTOCLOSE
# 47 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
	end


Hoenn2_4_Illumise::
# 51 "data/maps/Hoenn2_4/scripts.pory"
	trainerbattle_double TRAINER_VOLBEATILLUMISE, Hoenn2_4_Illumise_Text_0, Hoenn2_4_Illumise_Text_0, Hoenn2_4_Volbeat_Text_2
# 52 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_Illumise_Text_1, MSGBOX_AUTOCLOSE
# 53 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
	end


Hoenn2_4_Plusle::
# 58 "data/maps/Hoenn2_4/scripts.pory"
	trainerbattle_double TRAINER_PLUSLEMINUN, Hoenn2_4_Plusle_Text_0, Hoenn2_4_Plusle_Text_1, Hoenn2_4_Illumise_Text_0
# 59 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_Plusle_Text_2, MSGBOX_AUTOCLOSE
# 60 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
	end


Hoenn2_4_Minun::
# 64 "data/maps/Hoenn2_4/scripts.pory"
	trainerbattle_double TRAINER_PLUSLEMINUN, Hoenn2_4_Illumise_Text_0, Hoenn2_4_Illumise_Text_0, Hoenn2_4_Illumise_Text_0
# 65 "data/maps/Hoenn2_4/scripts.pory"
	msgbox Hoenn2_4_Minun_Text_0, MSGBOX_AUTOCLOSE
# 66 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
	end


Hoenn2_4_Rival::
# 71 "data/maps/Hoenn2_4/scripts.pory"
	call RivalFight2
	return


Hoenn2_4_EventScript_BirchBag::
# 76 "data/maps/Hoenn2_4/scripts.pory"
	lockall
# 77 "data/maps/Hoenn2_4/scripts.pory"
	call Act2BirchBag
# 79 "data/maps/Hoenn2_4/scripts.pory"
	removeobject HOENN2_4_BIRCHBAG
# 80 "data/maps/Hoenn2_4/scripts.pory"
	setflag FLAG_BIRCHBAG_2_4
# 83 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
# 84 "data/maps/Hoenn2_4/scripts.pory"
	releaseall
	end


Hoenn2_5_EventScript_BirchBag::
# 91 "data/maps/Hoenn2_4/scripts.pory"
	lockall
# 92 "data/maps/Hoenn2_4/scripts.pory"
	call Act2BirchBag
# 94 "data/maps/Hoenn2_4/scripts.pory"
	removeobject HOENN2_5_BIRCHBAG
# 95 "data/maps/Hoenn2_4/scripts.pory"
	setflag FLAG_BIRCHBAG_2_5
# 98 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
# 99 "data/maps/Hoenn2_4/scripts.pory"
	releaseall
	end


Hoenn2_6_EventScript_BirchBag::
# 106 "data/maps/Hoenn2_4/scripts.pory"
	lockall
# 107 "data/maps/Hoenn2_4/scripts.pory"
	call Act2BirchBag
# 109 "data/maps/Hoenn2_4/scripts.pory"
	removeobject HOENN2_6_BIRCHBAG
# 110 "data/maps/Hoenn2_4/scripts.pory"
	setflag FLAG_BIRCHBAG_2_6
# 113 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
# 114 "data/maps/Hoenn2_4/scripts.pory"
	releaseall
	end


Hoenn2_7_EventScript_BirchBag::
# 121 "data/maps/Hoenn2_4/scripts.pory"
	lockall
# 122 "data/maps/Hoenn2_4/scripts.pory"
	call Act2BirchBag
# 124 "data/maps/Hoenn2_4/scripts.pory"
	removeobject HOENN2_7_BIRCHBAG
# 125 "data/maps/Hoenn2_4/scripts.pory"
	setflag FLAG_BIRCHBAG_2_7
# 128 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
# 129 "data/maps/Hoenn2_4/scripts.pory"
	releaseall
	end


Hoenn2_8_EventScript_BirchBag::
# 136 "data/maps/Hoenn2_4/scripts.pory"
	lockall
# 137 "data/maps/Hoenn2_4/scripts.pory"
	call Act2BirchBag
# 139 "data/maps/Hoenn2_4/scripts.pory"
	removeobject HOENN2_8_BIRCHBAG
# 140 "data/maps/Hoenn2_4/scripts.pory"
	setflag FLAG_BIRCHBAG_2_8
# 143 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
# 144 "data/maps/Hoenn2_4/scripts.pory"
	releaseall
	end


Hoenn2_9_EventScript_BirchBag::
# 151 "data/maps/Hoenn2_4/scripts.pory"
	lockall
# 152 "data/maps/Hoenn2_4/scripts.pory"
	call Act2BirchBag
# 154 "data/maps/Hoenn2_4/scripts.pory"
	removeobject HOENN2_9_BIRCHBAG
# 155 "data/maps/Hoenn2_4/scripts.pory"
	setflag FLAG_BIRCHBAG_2_9
# 158 "data/maps/Hoenn2_4/scripts.pory"
	waitmessage
# 159 "data/maps/Hoenn2_4/scripts.pory"
	releaseall
	end


Hoenn2_4_Itemball_3::
# 165 "data/maps/Hoenn2_4/scripts.pory"
	lockall
# 166 "data/maps/Hoenn2_4/scripts.pory"
	call GiveUncommonItem
# 167 "data/maps/Hoenn2_4/scripts.pory"
	removeobject Hoenn2_Ball3
# 168 "data/maps/Hoenn2_4/scripts.pory"
	setflag FLAG_ITEM_2_3
# 169 "data/maps/Hoenn2_4/scripts.pory"
	releaseall
	end


Hoenn2_4_Itemball_4::
# 174 "data/maps/Hoenn2_4/scripts.pory"
	lockall
# 175 "data/maps/Hoenn2_4/scripts.pory"
	call GiveUncommonItem
# 176 "data/maps/Hoenn2_4/scripts.pory"
	removeobject Hoenn2_Ball4
# 177 "data/maps/Hoenn2_4/scripts.pory"
	setflag FLAG_ITEM_2_4
# 178 "data/maps/Hoenn2_4/scripts.pory"
	releaseall
	end


Hoenn2_4_Itemball_5::
# 183 "data/maps/Hoenn2_4/scripts.pory"
	lockall
# 184 "data/maps/Hoenn2_4/scripts.pory"
	call GiveRareItem
# 185 "data/maps/Hoenn2_4/scripts.pory"
	removeobject Hoenn2_Ball5
# 186 "data/maps/Hoenn2_4/scripts.pory"
	setflag FLAG_ITEM_2_5
# 187 "data/maps/Hoenn2_4/scripts.pory"
	releaseall
	end


Hoenn2_4_Doduo_Text_0:
# 24 "data/maps/Hoenn2_4/scripts.pory"
	.string "Apparently this used to be a path meant\n"
	.string "for bicycles ridden by humans, but most\l"
	.string "pokemon can't ride bicycles so we just\l"
	.string "use it asa a bridge.$"

Hoenn2_4_Doduo_Text_1:
# 24 "data/maps/Hoenn2_4/scripts.pory"
	.string "You're too good for me.$"

Hoenn2_4_Doduo_Text_2:
# 25 "data/maps/Hoenn2_4/scripts.pory"
	.string "I'd like to try riding a bicycle one day.$"

Hoenn2_4_Loudred_Text_0:
# 31 "data/maps/Hoenn2_4/scripts.pory"
	.string "HELLO! LETS BATTLE!$"

Hoenn2_4_Loudred_Text_1:
# 31 "data/maps/Hoenn2_4/scripts.pory"
	.string "YOU GOT ME!$"

Hoenn2_4_Loudred_Text_2:
# 32 "data/maps/Hoenn2_4/scripts.pory"
	.string "Oh, sorry was I too loud? I'll tone it\n"
	.string "down.$"

Hoenn2_4_Electrode_Text_0:
# 38 "data/maps/Hoenn2_4/scripts.pory"
	.string "I used to work as a ball.\p"
	.string "As in others would play soccer or\n"
	.string "volleyball with me.\p"
	.string "Of course that meeant I couldn't\n"
	.string "explode.$"

Hoenn2_4_Electrode_Text_1:
# 38 "data/maps/Hoenn2_4/scripts.pory"
	.string "Well played.$"

Hoenn2_4_Electrode_Text_2:
# 39 "data/maps/Hoenn2_4/scripts.pory"
	.string "It was thrilling being right amongst the\n"
	.string "action of top level players.$"

Hoenn2_4_Volbeat_Text_0:
# 45 "data/maps/Hoenn2_4/scripts.pory"
	.string "Let's have a doubles battle!$"

Hoenn2_4_Volbeat_Text_1:
# 45 "data/maps/Hoenn2_4/scripts.pory"
	.string "That was intense!$"

Hoenn2_4_Volbeat_Text_2:
# 45 "data/maps/Hoenn2_4/scripts.pory"
	.string "text$"

Hoenn2_4_Volbeat_Text_3:
# 46 "data/maps/Hoenn2_4/scripts.pory"
	.string "Me and Illumise are going to have some\n"
	.string "tea after this.$"

Hoenn2_4_Illumise_Text_0:
# 51 "data/maps/Hoenn2_4/scripts.pory"
	.string "test$"

Hoenn2_4_Illumise_Text_1:
# 52 "data/maps/Hoenn2_4/scripts.pory"
	.string "My favourite tea? Just regular black\n"
	.string "usually.\p"
	.string "Though at night I prefer something\n"
	.string "without caffeine.$"

Hoenn2_4_Plusle_Text_0:
# 58 "data/maps/Hoenn2_4/scripts.pory"
	.string "Hey look minun. It's a challenger. Let's\n"
	.string "gettem!$"

Hoenn2_4_Plusle_Text_1:
# 58 "data/maps/Hoenn2_4/scripts.pory"
	.string "Darn it! You got us!$"

Hoenn2_4_Plusle_Text_2:
# 59 "data/maps/Hoenn2_4/scripts.pory"
	.string "Every once in a while you'll run into a\n"
	.string "double battle like with us! Make sure\l"
	.string "you're prepared!$"

Hoenn2_4_Minun_Text_0:
# 65 "data/maps/Hoenn2_4/scripts.pory"
	.string "I love double battles with Plusle!$"
