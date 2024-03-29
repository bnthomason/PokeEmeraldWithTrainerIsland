.set LOCALID_RIVAL, 1
.set LOCALID_SAILOR, 2
.set LOCALID_SS_TIDAL, 3

TrainerIsland_Entrance_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerIsland_Entrance_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerIsland_Entrance_OnFrame
	.byte 0


TrainerIsland_Entrance_OnFrame:
	map_script_2 VAR_UNUSED_0x404E, 0, TrainerIsland_Entrance_EventScript_SetVar
	.2byte 0
	end

TrainerIsland_Entrance_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	end
	
TrainerIsland_Entrance_EventScript_Sailor::
	lock
	faceplayer
	msgbox EventTicket_Text_TrainerIslandSailBack, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, TrainerIsland_EventScript_Stay
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 30
	hideobjectat LOCALID_SAILOR, MAP_TRAINER_ISLAND_ENTRANCE
	setvar VAR_0x8004, LOCALID_SS_TIDAL
	call Common_EventScript_FerryDepartIsland
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
	waitstate
	release
	end

TrainerIsland_EventScript_Stay::
	msgbox EventTicket_Text_Stay, MSGBOX_DEFAULT
	release
	end

TrainerIsland_Entrance_EventScript_Sign::
	msgbox TrainerIsland_Entrance_Text_Sign, MSGBOX_SIGN
	end


TrainerIsland_Entrance_EventScript_Tip::
	msgbox TrainerIsland_Entrance_Text_Tip, MSGBOX_SIGN
	end


TrainerIsland_Entrance_EventScript_SetVar::
	setvar VAR_UNUSED_0x404E, 1
	end

TrainerIsland_Entrance_EventScript_RivalGreet1::
	lockall
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, TrainerIsland_Entrance_EventScript_RivalMay1
	goto_if_eq VAR_RESULT, FEMALE, TrainerIsland_Entrance_EventScript_RivalBrendan1
	end
	
TrainerIsland_Entrance_EventScript_RivalGreet2::
	lockall
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, TrainerIsland_Entrance_EventScript_RivalMay2
	goto_if_eq VAR_RESULT, FEMALE, TrainerIsland_Entrance_EventScript_RivalBrendan2
	end


TrainerIsland_Entrance_EventScript_RivalMay1::
	msgbox TrainerIsland_Entrance_Text_MayTrainerIsland_EntranceNotice, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_MAY, TRUE
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_RIVAL, TrainerIsland_Entrance_Movement_RivalEnter1
	waitmovement 0
	msgbox TrainerIsland_Entrance_Text_MayTalk, MSGBOX_DEFAULT
	giveitem ITEM_POINT_TRACKER
	msgbox TrainerIsland_Entrance_Text_MayTalk2, MSGBOX_DEFAULT
	applymovement LOCALID_RIVAL, TrainerIsland_Entrance_Movement_RivalExit
	waitmovement 0
	goto TrainerIsland_Entrance_EventScript_RivalEnd
	end

TrainerIsland_Entrance_EventScript_RivalBrendan1::
	msgbox TrainerIsland_Entrance_Text_BrendanTrainerIsland_EntranceNotice, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_RIVAL, TrainerIsland_Entrance_Movement_RivalEnter1
	waitmovement 0
	msgbox TrainerIsland_Entrance_Text_BrendanTalk, MSGBOX_DEFAULT
	giveitem ITEM_POINT_TRACKER
	msgbox TrainerIsland_Entrance_Text_BrendanTalk2, MSGBOX_DEFAULT
	applymovement LOCALID_RIVAL, TrainerIsland_Entrance_Movement_RivalExit
	waitmovement 0
	goto TrainerIsland_Entrance_EventScript_RivalEnd
	end

TrainerIsland_Entrance_EventScript_RivalMay2::
	msgbox TrainerIsland_Entrance_Text_MayTrainerIsland_EntranceNotice, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_MAY, TRUE
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_RIVAL, TrainerIsland_Entrance_Movement_RivalEnter2
	waitmovement 0
	msgbox TrainerIsland_Entrance_Text_MayTalk, MSGBOX_DEFAULT
	giveitem ITEM_POINT_TRACKER
	msgbox TrainerIsland_Entrance_Text_MayTalk2, MSGBOX_DEFAULT
	applymovement LOCALID_RIVAL, TrainerIsland_Entrance_Movement_RivalExit
	waitmovement 0
	goto TrainerIsland_Entrance_EventScript_RivalEnd
	end


TrainerIsland_Entrance_EventScript_RivalBrendan2::
	msgbox TrainerIsland_Entrance_Text_BrendanTrainerIsland_EntranceNotice, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_RIVAL, TrainerIsland_Entrance_Movement_RivalEnter2
	waitmovement 0
	msgbox TrainerIsland_Entrance_Text_BrendanTalk, MSGBOX_DEFAULT
	giveitem ITEM_POINT_TRACKER
	msgbox TrainerIsland_Entrance_Text_BrendanTalk2, MSGBOX_DEFAULT
	applymovement LOCALID_RIVAL, TrainerIsland_Entrance_Movement_RivalExit
	waitmovement 0
	goto TrainerIsland_Entrance_EventScript_RivalEnd
	end

TrainerIsland_Entrance_EventScript_RivalEnd::
	removeobject LOCALID_RIVAL
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	setflag FLAG_UNUSED_0x264
	setvar VAR_UNUSED_0x404E, 2
	end

TrainerIsland_Entrance_Movement_RivalEnter1:
	walk_left
	walk_down
	walk_down
	step_end

TrainerIsland_Entrance_Movement_RivalEnter2:
	walk_down
	walk_down
	step_end

TrainerIsland_Entrance_Movement_RivalExit:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end
	
TrainerIsland_Entrance_Text_MayTrainerIsland_EntranceNotice:
	.string "{RIVAL}: Is that…?$"

TrainerIsland_Entrance_Text_MayTalk:
	.string "Welcome, {PLAYER}{KUN}, to Trainer\n"
	.string "Island!\p"
	.string "My dad found this island long ago in\n"
	.string "during his journeys as a researcher\l"
	.string "in the field!\p"
	.string "He also developed this new points\n"
	.string "system, and wants me to share it\l"
	.string "with you! Here you go!$"
	
TrainerIsland_Entrance_Text_MayTalk2:
	.string "Take your time and look around; you\n"
	.string "can find me on the other end of the\l"
	.string "island! See ya!$"

TrainerIsland_Entrance_Text_BrendanTrainerIsland_EntranceNotice:
	.string "{RIVAL}: Is that…?$"

TrainerIsland_Entrance_Text_BrendanTalk:
	.string "Welcome, {PLAYER}{KUN}, to Trainer\n"
	.string "Island!\p"
	.string "My dad found this island long ago in\n"
	.string "during his journeys as a researcher\l"
	.string "in the field!\p"
	.string "He also developed this new points\n"
	.string "system, and wants me to share it\l"	
	.string "with you! Here you go!$"
	
TrainerIsland_Entrance_Text_BrendanTalk2:
	.string "Take your time and look around; you\n"
	.string "can find me on the other end of the\l"
	.string "island! See ya!$"
