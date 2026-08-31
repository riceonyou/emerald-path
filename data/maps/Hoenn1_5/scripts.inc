Hoenn1_5_MapScripts::
	.byte 0


Hoenn1_5_EventScript_Oddish::
# 6 "data/maps/Hoenn1_5/scripts.pory"
	trainerbattle_single TRAINER_ODDISH, Hoenn1_5_EventScript_Oddish_Text_0, Hoenn1_5_EventScript_Oddish_Text_1
# 7 "data/maps/Hoenn1_5/scripts.pory"
	msgbox Hoenn1_5_EventScript_Oddish_Text_2, MSGBOX_AUTOCLOSE
# 8 "data/maps/Hoenn1_5/scripts.pory"
	waitmessage
	end


Hoenn1_5_EventScript_Wurmple::
# 15 "data/maps/Hoenn1_5/scripts.pory"
	trainerbattle_single TRAINER_WURMPLE, Hoenn1_5_EventScript_Wurmple_Text_0, Hoenn1_5_EventScript_Wurmple_Text_1
# 16 "data/maps/Hoenn1_5/scripts.pory"
	msgbox Hoenn1_5_EventScript_Wurmple_Text_2, MSGBOX_AUTOCLOSE
# 17 "data/maps/Hoenn1_5/scripts.pory"
	waitmessage
	end


Hoenn1_5_EventScript_Slakoth::
# 24 "data/maps/Hoenn1_5/scripts.pory"
	trainerbattle_single TRAINER_SLAKOTH, Hoenn1_5_EventScript_Slakoth_Text_0, Hoenn1_5_EventScript_Slakoth_Text_1
# 25 "data/maps/Hoenn1_5/scripts.pory"
	msgbox Hoenn1_5_EventScript_Slakoth_Text_2, MSGBOX_AUTOCLOSE
# 26 "data/maps/Hoenn1_5/scripts.pory"
	waitmessage
	end


Hoenn1_7_EventScript_BirchBag::
# 33 "data/maps/Hoenn1_5/scripts.pory"
	lockall
# 34 "data/maps/Hoenn1_5/scripts.pory"
	playse SE_CLICK
# 35 "data/maps/Hoenn1_5/scripts.pory"
	fadescreen FADE_TO_BLACK
# 36 "data/maps/Hoenn1_5/scripts.pory"
	setvar VAR_0x8000, 33
# 37 "data/maps/Hoenn1_5/scripts.pory"
	special LoadBirchBagPoolById
# 38 "data/maps/Hoenn1_5/scripts.pory"
	special ChooseBirchBagPokemonWeighted
# 39 "data/maps/Hoenn1_5/scripts.pory"
	waitstate
# 42 "data/maps/Hoenn1_5/scripts.pory"
	removeobject HOENN1_7_BIRCHBAG
# 43 "data/maps/Hoenn1_5/scripts.pory"
	setflag FLAG_BIRCHBAG_1_7
# 44 "data/maps/Hoenn1_5/scripts.pory"
	playfanfare MUS_EVOLVED
# 45 "data/maps/Hoenn1_5/scripts.pory"
	msgbox Hoenn1_7_EventScript_BirchBag_Text_0
# 47 "data/maps/Hoenn1_5/scripts.pory"
	waitmessage
# 48 "data/maps/Hoenn1_5/scripts.pory"
	releaseall
	end


Hoenn1_5_EventScript_Oddish_Text_0:
# 6 "data/maps/Hoenn1_5/scripts.pory"
	.string "I don't know what to write here to be\n"
	.string "honest. The maker of this mod doesn't\l"
	.string "know how to write and can't think of\l"
	.string "anything.$"

Hoenn1_5_EventScript_Oddish_Text_1:
# 6 "data/maps/Hoenn1_5/scripts.pory"
	.string "If someone wants to help me write\n"
	.string "dialogue please contact me...$"

Hoenn1_5_EventScript_Oddish_Text_2:
# 7 "data/maps/Hoenn1_5/scripts.pory"
	.string "Hello again.$"

Hoenn1_5_EventScript_Wurmple_Text_0:
# 15 "data/maps/Hoenn1_5/scripts.pory"
	.string "I'm just a wurm.$"

Hoenn1_5_EventScript_Wurmple_Text_1:
# 15 "data/maps/Hoenn1_5/scripts.pory"
	.string "That was a good battle... I think.$"

Hoenn1_5_EventScript_Wurmple_Text_2:
# 16 "data/maps/Hoenn1_5/scripts.pory"
	.string "Don't talk to me right now. I'm moping\n"
	.string "over my loss.$"

Hoenn1_5_EventScript_Slakoth_Text_0:
# 24 "data/maps/Hoenn1_5/scripts.pory"
	.string "Hey. I love gudetama. He just like me fr.\n"
	.string "I wish I could sleep all day with him$"

Hoenn1_5_EventScript_Slakoth_Text_1:
# 24 "data/maps/Hoenn1_5/scripts.pory"
	.string "Back to sleeping. Snork mimimi.$"

Hoenn1_5_EventScript_Slakoth_Text_2:
# 25 "data/maps/Hoenn1_5/scripts.pory"
	.string "zzzZZZ...$"

Hoenn1_7_EventScript_BirchBag_Text_0:
# 45 "data/maps/Hoenn1_5/scripts.pory"
	.string "You received a\n{STR_VAR_1}!$"
