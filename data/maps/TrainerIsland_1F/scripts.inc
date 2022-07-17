TrainerIsland_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerIsland_1F_OnTransition
	.byte 0
	
TrainerIsland_1F_OnTransition:
	cleartrainerflag TRAINER_MASTER_CHELSEA
	cleartrainerflag TRAINER_MASTER_MICHAEL
	end


TrainerIsland_1F_EventScript_Chelsea::
	trainerbattle_double TRAINER_MASTER_CHELSEA, TrainerIsland_1F_Text_ChelseaIntro, TrainerIsland_1F_Text_ChelseaDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_1F_Text_ChelseaPostBattle, MSGBOX_AUTOCLOSE
	end
	
TrainerIsland_1F_EventScript_Michael::
	trainerbattle_double TRAINER_MASTER_MICHAEL, TrainerIsland_1F_Text_MichaelIntro, TrainerIsland_1F_Text_MichaelDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_1F_Text_MichaelPostBattle, MSGBOX_AUTOCLOSE
	end
	
TrainerIsland_1F_Text_ChelseaIntro:
	.string "Sigh… The love of my life\n"
	.string "refuses to date me.$"

TrainerIsland_1F_Text_ChelseaDefeat:
	.string "I wish I had more money…$"

TrainerIsland_1F_Text_ChelseaPostBattle:
	.string "With more money, I may\n"
	.string "stir his heart…$"
	
	
TrainerIsland_1F_Text_MichaelIntro:
	.string "Check this rock out! It's\n"
	.string "hot to the touch!\n$"

TrainerIsland_1F_Text_MichaelDefeat:
	.string "You didn't touch the rock!$"
	
TrainerIsland_1F_Text_MichaelPostBattle:
	.string "I couldn't trick you. Now\n"
	.string "I'll have to find someone\l"
	.string "else. Grumble…$"
