Hoenn3_4_MapScripts::
	.byte 0


Hoenn3_4_Lunatone::
# 5 "data/maps/Hoenn3_4/scripts.pory"
	trainerbattle_double TRAINER_SOLROCKLUNATONE, Hoenn3_4_Lunatone_Text_0, Hoenn3_4_Lunatone_Text_0, Hoenn3_4_Lunatone_Text_0
# 6 "data/maps/Hoenn3_4/scripts.pory"
	msgbox Hoenn3_4_Lunatone_Text_0, MSGBOX_AUTOCLOSE
# 7 "data/maps/Hoenn3_4/scripts.pory"
	waitmessage
	end


Hoenn3_4_Solrock::
# 12 "data/maps/Hoenn3_4/scripts.pory"
	trainerbattle_double TRAINER_SOLROCKLUNATONE, Hoenn3_4_Lunatone_Text_0, Hoenn3_4_Lunatone_Text_0, Hoenn3_4_Lunatone_Text_0
# 13 "data/maps/Hoenn3_4/scripts.pory"
	msgbox Hoenn3_4_Lunatone_Text_0, MSGBOX_AUTOCLOSE
# 14 "data/maps/Hoenn3_4/scripts.pory"
	waitmessage
	end


Hoenn3_4_Whiscash::
# 19 "data/maps/Hoenn3_4/scripts.pory"
	trainerbattle_single TRAINER_WHISCASH, Hoenn3_4_Lunatone_Text_0, Hoenn3_4_Lunatone_Text_0
# 20 "data/maps/Hoenn3_4/scripts.pory"
	msgbox Hoenn3_4_Lunatone_Text_0, MSGBOX_AUTOCLOSE
# 21 "data/maps/Hoenn3_4/scripts.pory"
	waitmessage
	end


Hoenn3_4_Lunatone_Text_0:
# 5 "data/maps/Hoenn3_4/scripts.pory"
	.string "test$"
