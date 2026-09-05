Hoenn1_Alt_5_MapScripts::
	.byte 0


Hoenn1_Alt_5_EventScript_Ralts::
# 6 "data/maps/Hoenn1_Alt_5/scripts.pory"
	trainerbattle_single TRAINER_RALTS, Hoenn1_Alt_5_EventScript_Ralts_Text_0, Hoenn1_Alt_5_EventScript_Ralts_Text_0
# 7 "data/maps/Hoenn1_Alt_5/scripts.pory"
	msgbox Hoenn1_Alt_5_EventScript_Ralts_Text_0, MSGBOX_AUTOCLOSE
# 8 "data/maps/Hoenn1_Alt_5/scripts.pory"
	waitmessage
	end


Hoenn1_Alt_5_EventScript_Carvanha::
# 12 "data/maps/Hoenn1_Alt_5/scripts.pory"
	trainerbattle_single TRAINER_CARVANHA, Hoenn1_Alt_5_EventScript_Ralts_Text_0, Hoenn1_Alt_5_EventScript_Ralts_Text_0
# 13 "data/maps/Hoenn1_Alt_5/scripts.pory"
	msgbox Hoenn1_Alt_5_EventScript_Ralts_Text_0, MSGBOX_AUTOCLOSE
# 14 "data/maps/Hoenn1_Alt_5/scripts.pory"
	waitmessage
	end


Hoenn1_Alt_5_EventScript_Vulpix::
# 18 "data/maps/Hoenn1_Alt_5/scripts.pory"
	trainerbattle_single TRAINER_VULPIX, Hoenn1_Alt_5_EventScript_Ralts_Text_0, Hoenn1_Alt_5_EventScript_Ralts_Text_0
# 19 "data/maps/Hoenn1_Alt_5/scripts.pory"
	msgbox Hoenn1_Alt_5_EventScript_Ralts_Text_0, MSGBOX_AUTOCLOSE
# 20 "data/maps/Hoenn1_Alt_5/scripts.pory"
	waitmessage
	end


Hoenn1_Alt_5_EventScript_Makuhita::
# 25 "data/maps/Hoenn1_Alt_5/scripts.pory"
	trainerbattle_single TRAINER_MAKUHITA, Hoenn1_Alt_5_EventScript_Ralts_Text_0, Hoenn1_Alt_5_EventScript_Ralts_Text_0, Hoenn1_Alt_5_EventScript_Leader_Defeated
# 26 "data/maps/Hoenn1_Alt_5/scripts.pory"
	msgbox Hoenn1_Alt_5_EventScript_Ralts_Text_0, MSGBOX_AUTOCLOSE
# 27 "data/maps/Hoenn1_Alt_5/scripts.pory"
	waitmessage
	end


Hoenn1_Alt_5_EventScript_Leader_Defeated::
# 32 "data/maps/Hoenn1_Alt_5/scripts.pory"
	setflag FLAG_DEFEATED_PATH_LEADER
# 33 "data/maps/Hoenn1_Alt_5/scripts.pory"
	msgbox Hoenn1_Alt_5_EventScript_Leader_Defeated_Text_0, MSGBOX_AUTOCLOSE
# 34 "data/maps/Hoenn1_Alt_5/scripts.pory"
	waitmessage
	end


Hoenn1_Alt_5_AbraTeleport1::
# 39 "data/maps/Hoenn1_Alt_5/scripts.pory"
	call AbraTeleport
	return


Hoenn1_Alt_5_EventScript_Ralts_Text_0:
# 6 "data/maps/Hoenn1_Alt_5/scripts.pory"
	.string "test$"

Hoenn1_Alt_5_EventScript_Leader_Defeated_Text_0:
# 33 "data/maps/Hoenn1_Alt_5/scripts.pory"
	.string "test.$"
