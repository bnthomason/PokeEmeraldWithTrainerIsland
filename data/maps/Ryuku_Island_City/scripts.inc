.set LOCALID_SAILOR, 2
.set LOCALID_SS_TIDAL, 1

Ryuku_Island_City_MapScripts::
	.byte 0


Ryuku_Island_City_EventScript_Sailor::
	lock
	faceplayer
	msgbox EventTicket_Text_TrainerIslandSailBack, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, TrainerIsland_EventScript_Stay
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 30
	hideobjectat LOCALID_SAILOR, MAP_RYUKU_ISLAND_CITY
	setvar VAR_0x8004, LOCALID_SS_TIDAL
	call Common_EventScript_FerryDepartIsland
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
	waitstate
	release
	end
	
Ryuku_Island_City_EventScript_Raikyu_1::

Ryuku_Island_City_EventScript_Raikyu_2::

Ryuku_Island_City_EventScript_Raikyu_3::

Ryuku_Island_City_EventScript_Raikyu_4::

Ryuku_Island_City_EventScript_Raikyu_5::

Ryuku_Island_City_EventScript_Raikyu_6::
