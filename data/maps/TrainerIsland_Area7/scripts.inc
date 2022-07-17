TrainerIsland_Area7_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerIsland_Area7_OnTransition
	.byte 0
	
TrainerIsland_Area7_OnTransition:
	cleartrainerflag TRAINER_MASTER_LEAF
	cleartrainerflag TRAINER_MASTER_RED
	end

TrainerIsland_Area7_EventScript_Leaf::
	trainerbattle_double TRAINER_MASTER_LEAF, TrainerIsland_Area7_Text_LeafIntro, TrainerIsland_Area7_Text_LeafDefeat, CommonEvent_Text_NeedTwoMons, Add3Points
	msgbox TrainerIsland_Area7_Text_LeafPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area7_EventScript_Red::
	trainerbattle_double TRAINER_MASTER_RED, TrainerIsland_Area7_Text_RedIntro, TrainerIsland_Area7_Text_RedDefeat, CommonEvent_Text_NeedTwoMons, Add3Points
	msgbox TrainerIsland_Area7_Text_RedPostBattle, MSGBOX_AUTOCLOSE
	end
	
TrainerIsland_Area7_Text_LeafIntro:
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "It's time for battle!$"

TrainerIsland_Area7_Text_LeafDefeat:
	.string "… … … … … … … …\n"
	.string "… … … … … … … …$"

TrainerIsland_Area7_Text_LeafPostBattle:
	.string "… … … … … … … …\n"
	.string "Want to battle again?$"
	

TrainerIsland_Area7_Text_RedIntro:
	.string "Alright! Time to get\n"
	.string "my game on!$"

TrainerIsland_Area7_Text_RedDefeat:
	.string "Oh well...\p"
	.string "Though I lost,\n"
	.string "that was a sweet battle!\l"
	.string "Your awesome!$"

TrainerIsland_Area7_Text_RedPostBattle:
	.string "So close! But a loss is\n"
	.string "a loss. Good game!$"
