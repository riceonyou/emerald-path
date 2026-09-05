Hoenn1_Alt_1_House_MapScripts::
	.byte 0


Hoenn1_Alt_1_House_Itemball_1::
# 8 "data/maps/Hoenn1_Alt_1_House/scripts.pory"
	lockall
# 9 "data/maps/Hoenn1_Alt_1_House/scripts.pory"
	call GiveUncommonItem
# 10 "data/maps/Hoenn1_Alt_1_House/scripts.pory"
	removeobject HOENN1_ALT_1_HOUSE_ITEM_1
# 11 "data/maps/Hoenn1_Alt_1_House/scripts.pory"
	setflag FLAG_ITEM_1_1
# 12 "data/maps/Hoenn1_Alt_1_House/scripts.pory"
	releaseall
	end

