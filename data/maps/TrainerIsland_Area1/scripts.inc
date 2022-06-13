TrainerIsland_Area1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerIsland_Area1_OnTransition
	.byte 0
	
TrainerIsland_Area1__OnTransition:
	cleartrainerflag TRAINER_MASTER_CHERYL
	cleartrainerflag TRAINER_MASTER_PETER
	cleartrainerflag TRAINER_MASTER_SUSAN
	cleartrainerflag TRAINER_MASTER_ROGER
	end

TrainerIsland_Area1_EventScript_Archie::
	cleartrainerflag TRAINER_MASTER_ARCHIE
	trainerbattle_double TRAINER_MASTER_ARCHIE, TrainerIsland_Area1_Text_ArchieIntro, TrainerIsland_Area1_Text_ArchieDefeat, CommonEvent_Text_NeedTwoMons, Add2Points
	msgbox TrainerIsland_Area1_Text_ArchiePostBattle, MSGBOX_AUTOCLOSE
	end
	
TrainerIsland_Area1_EventScript_Maxie::
	cleartrainerflag TRAINER_MASTER_MAXIE
	trainerbattle_double TRAINER_MASTER_MAXIE, TrainerIsland_Area1_Text_MaxieIntro, TrainerIsland_Area1_Text_MaxieDefeat, CommonEvent_Text_NeedTwoMons, Add2Points
	msgbox TrainerIsland_Area1_Text_MaxiePostBattle, MSGBOX_AUTOCLOSE
	end
	
TrainerIsland_Area1_EventScript_Cheryl::
	cleartrainerflag TRAINER_MASTER_CHERYL
	trainerbattle_double TRAINER_MASTER_CHERYL, TrainerIsland_Area1_Text_CherylIntro, TrainerIsland_Area1_Text_CherylDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area1_Text_CherylPostBattle, MSGBOX_AUTOCLOSE
	end
	
TrainerIsland_Area1_EventScript_Peter::
	cleartrainerflag TRAINER_MASTER_PETER
	trainerbattle_double TRAINER_MASTER_PETER, TrainerIsland_Area1_Text_PeterIntro, TrainerIsland_Area1_Text_PeterDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area1_Text_PeterPostBattle, MSGBOX_AUTOCLOSE
	end
	
TrainerIsland_Area1_EventScript_Susan::
	cleartrainerflag TRAINER_MASTER_SUSAN
	trainerbattle_double TRAINER_MASTER_SUSAN, TrainerIsland_Area1_Text_SusanIntro, TrainerIsland_Area1_Text_SusanDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area1_Text_SusanPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area1_EventScript_Roger::
	cleartrainerflag TRAINER_MASTER_ROGER
	trainerbattle_double TRAINER_MASTER_ROGER, TrainerIsland_Area1_Text_RogerIntro, TrainerIsland_Area1_Text_RogerDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area1_Text_RogerPostBattle, MSGBOX_AUTOCLOSE
	end
	
TrainerIsland_Area1_Text_ArchieIntro:
	.string "Let the rain fall!$"

TrainerIsland_Area1_Text_ArchieDefeat:
	.string "The rain stopped…$"

TrainerIsland_Area1_Text_ArchiePostBattle:
	.string "The rain shall fall again…$"



TrainerIsland_Area1_Text_MaxieIntro:
	.string "Let the sun shine!$"

TrainerIsland_Area1_Text_MaxieDefeat:
	.string "The sunlight faded…$"

TrainerIsland_Area1_Text_MaxiePostBattle:
	.string "The sun shall shine again…$"
	
	
	
TrainerIsland_Area1_Text_CherylIntro:
	.string "Time to kick some butt!$"

TrainerIsland_Area1_Text_CherylDefeat:
	.string "I got my own butt kicked!$"

TrainerIsland_Area1_Text_CherylPostBattle:
	.string "Next time I'll be the one\n"
	.string "who's kicking!$"



TrainerIsland_Area1_Text_PeterIntro:
	.string "My pokemon are strong!$"

TrainerIsland_Area1_Text_PeterDefeat:
	.string "But yours were stronger.$"

TrainerIsland_Area1_Text_PeterPostBattle:
	.string "Some pokemon are stronger\n"
	.string "than others…$"



TrainerIsland_Area1_Text_SusanIntro:
	.string "Dragon pokemon are cool!\n"
	.string "Just take a look at these!$"

TrainerIsland_Area1_Text_SusanDefeat:
	.string "My dragons were no match!$"

TrainerIsland_Area1_Text_SusanPostBattle:
	.string "Dragon pokemon are still\n"
	.string "my favorite!$"


TrainerIsland_Area1_Text_RogerIntro:
	.string "Take a look at these bad\n"
	.string "boys!$"

TrainerIsland_Area1_Text_RogerDefeat:
	.string "Awesome, right?!$"

TrainerIsland_Area1_Text_RogerPostBattle:
	.string "Don't you agree that \n"
	.string "they're off the charts?!$"
