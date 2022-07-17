TrainerIsland_Area8_RestHouse_MapScripts::
	.byte 0

TrainerIsland_Area8_RestHouse_EventScript_Bed::
	lock
	msgbox TrainerIsland_Area8_RestHouse_Text_TakeARest, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, TrainerIsland_Area8_RestHouse_EventScript_Rest
	goto_if_eq VAR_RESULT, NO, TrainerIsland_Area8_RestHouse_EventScript_Declined
	end

TrainerIsland_Area8_RestHouse_EventScript_Rest::
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	releaseall
	end
	
TrainerIsland_Area8_RestHouse_EventScript_Declined::
	closemessage
	releaseall	
	end

TrainerIsland_Area8_RestHouse_Text_TakeARest:
	.string "It's a bed. Take a rest?$"
