TrainerIsland_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerIsland_2F_OnTransition
	.byte 0
	
TrainerIsland_2F_OnTransition:
	cleartrainerflag TRAINER_MASTER_JADEN
	cleartrainerflag TRAINER_MASTER_JAMIE
	end


TrainerIsland_2F_EventScript_Jaden::
	cleartrainerflag TRAINER_MASTER_JADEN
	trainerbattle_double TRAINER_MASTER_JADEN, TrainerIsland_2F_Text_JadenIntro, TrainerIsland_2F_Text_JadenDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_2F_Text_JadenPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_2F_EventScript_Jamie::
	cleartrainerflag TRAINER_MASTER_JAMIE
	trainerbattle_double TRAINER_MASTER_JAMIE, TrainerIsland_2F_Text_JamieIntro, TrainerIsland_2F_Text_JamieDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_2F_Text_JamiePostBattle, MSGBOX_AUTOCLOSE
	end
	
TrainerIsland_2F_Text_JamieIntro:
	.string "You look lost. If you\n"
	.string "defeat me, I can help\l"
	.string "you find your way back.$"

TrainerIsland_2F_Text_JamieDefeat:
	.string "Scary place, isn't it?$"
	
TrainerIsland_2F_Text_JamiePostBattle:
	.string "My pokemon have all fainted!\p"
	.string "It looks like we're both\n"
	.string "not going anywhere anytime\l"
	.string "soon!$"
	
TrainerIsland_2F_Text_JadenIntro:
	.string "My bird pokemon will help\n"
	.string "me escape this place, but\l"
	.string "only if I defeat you!$"

TrainerIsland_2F_Text_JadenDefeat:
	.string "My pokemon have all fainted!$"
	
TrainerIsland_2F_Text_JadenPostBattle:
	.string "I can't FLY from a cave,\n"
	.string "so I needed to level a\l"
	.string "bit to learn DIG.\p"
	.string "However, I lost, so I can't\n"
	.string "level. OH WOE!!!$"

