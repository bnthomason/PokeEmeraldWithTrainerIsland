TrainerIsland_Hall_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerIsland_Hall_OnTransition
	.byte 0
	
TrainerIsland_Hall_OnTransition:
	cleartrainerflag TRAINER_MASTER_MARK
	cleartrainerflag TRAINER_MASTER_FLAM
	end

TrainerIsland_Hall_EventScript_Mark::
	trainerbattle_double TRAINER_MASTER_MARK, TrainerIsland_Hall_Text_MarkIntro, TrainerIsland_Hall_Text_MarkDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Hall_Text_MarkPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Hall_EventScript_Flam::
	trainerbattle_double TRAINER_MASTER_FLAM, TrainerIsland_Hall_Text_FlamIntro, TrainerIsland_Hall_Text_FlamDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Hall_Text_FlamPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Hall_Text_MarkIntro:
	.string "My code name is Mark.\n"
	.string "But that is not my real\l"
	.string "name.\p"
	.string "I might tell you if you\n"
	.string "defeat me in battle!$"

TrainerIsland_Hall_Text_MarkDefeat:
	.string "And my true name is…$"

TrainerIsland_Hall_Text_MarkPostBattle:
	.string "A good ninja never reveals\n"
	.string "his true identity.$"
	
	
TrainerIsland_Hall_Text_FlamIntro:
	.string "I'm all fired up! Time\n"
	.string "for a heated battle!$"
	
TrainerIsland_Hall_Text_FlamDefeat:
	.string "Too hot to handle!$"
	
TrainerIsland_Hall_Text_FlamPostBattle:
	.string "I must cool off for now…$"
