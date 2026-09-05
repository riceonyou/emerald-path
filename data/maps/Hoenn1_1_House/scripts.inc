Hoenn1_1_House_MapScripts::
	.byte 0


Hoenn1_1_Itemball_3::
# 5 "data/maps/Hoenn1_1_House/scripts.pory"
	lockall
# 6 "data/maps/Hoenn1_1_House/scripts.pory"
	call GiveUncommonItem
# 7 "data/maps/Hoenn1_1_House/scripts.pory"
	removeobject HOENN1_3_ITEM
# 8 "data/maps/Hoenn1_1_House/scripts.pory"
	setflag FLAG_ITEM_1_3
# 9 "data/maps/Hoenn1_1_House/scripts.pory"
	releaseall
	end

