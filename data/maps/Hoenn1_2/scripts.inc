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


Treecko_Intro::
# 13 "data/maps/Hoenn1_2/scripts.pory"
	.string "You'll never win$"

Treecko_Outro::
# 17 "data/maps/Hoenn1_2/scripts.pory"
	.string "Doesn't count$"

PostBattle_Treecko::
# 21 "data/maps/Hoenn1_2/scripts.pory"
	.string "I'll win next time$"
