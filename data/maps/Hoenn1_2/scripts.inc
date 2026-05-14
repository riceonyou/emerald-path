Hoenn1_2_MapScripts::
	.byte 0


Hoenn1_2_EventScript_Treecko::
# 6 "data/maps/Hoenn1_2/scripts.pory"
	trainerbattle_single TRAINER_HOENN1_2_TREECKO, Treecko_Intro, Treecko_Outro
# 7 "data/maps/Hoenn1_2/scripts.pory"
	msgbox PostBattle_Treecko, MSGBOX_AUTOCLOSE
# 8 "data/maps/Hoenn1_2/scripts.pory"
	waitmessage
	end


Hoenn1_2_EventScript_Zigzagoon::
# 27 "data/maps/Hoenn1_2/scripts.pory"
	trainerbattle_single TRAINER_HOENN1_2_ZIGZAGOON, Zigzagoon_Intro, Zigzagoon_Outro
# 28 "data/maps/Hoenn1_2/scripts.pory"
	msgbox PostBattle_Zigzagoon, MSGBOX_AUTOCLOSE
# 29 "data/maps/Hoenn1_2/scripts.pory"
	waitmessage
	end


Treecko_Intro::
# 13 "data/maps/Hoenn1_2/scripts.pory"
	.string "Yo I'm Treecko. Grrr.$"

Treecko_Outro::
# 17 "data/maps/Hoenn1_2/scripts.pory"
	.string "Damn you got me.$"

PostBattle_Treecko::
# 21 "data/maps/Hoenn1_2/scripts.pory"
	.string "I'll get you next time.$"

Zigzagoon_Intro::
# 34 "data/maps/Hoenn1_2/scripts.pory"
	.string "I'm Zigzagoon. I like to go in zigzags.$"

Zigzagoon_Outro::
# 38 "data/maps/Hoenn1_2/scripts.pory"
	.string "Zagoon :($"

PostBattle_Zigzagoon::
# 42 "data/maps/Hoenn1_2/scripts.pory"
	.string "Goon Goon!$"
