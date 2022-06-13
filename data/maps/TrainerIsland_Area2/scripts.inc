TrainerIsland_Area2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerIsland_Area2_OnTransition
	map_script MAP_SCRIPT_ON_FRAME, TrainerIsland_Area2_OnFrame
	.byte 0
	
TrainerIsland_Area2_OnTransition:
	cleartrainerflag TRAINER_MASTER_MICKEY
	cleartrainerflag TRAINER_MASTER_DONALD
	cleartrainerflag TRAINER_MASTER_MARIA
	end


TrainerIsland_Area2_OnFrame:
	map_script_2 VAR_UNUSED_0x40F8, 0, TrainerIsland_Area2_EventScript_SetVar
	.2byte 0

TrainerIsland_Area2_EventScript_SetVar::
	setvar VAR_UNUSED_0x40F8, 1
	end

TrainerIsland_Area2_EventScript_Anabel::
	cleartrainerflag TRAINER_MASTER_ANABEL
	trainerbattle_double TRAINER_MASTER_ANABEL, TrainerIsland_Area2_Text_AnabelIntro, TrainerIsland_Area2_Text_AnabelDefeat, CommonEvent_Text_NeedTwoMons, Add3Points
	msgbox TrainerIsland_Area2_Text_AnabelPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area2_EventScript_Juan::
	goto_if_eq VAR_UNUSED_0x40F8, 1, TrainerIsland_Area2_EventScript_JuanFirstMatch
	goto_if_eq VAR_UNUSED_0x40F8, 2, TrainerIsland_Area2_EventScript_JuanRematch1
	goto_if_eq VAR_UNUSED_0x40F8, 3, TrainerIsland_Area2_EventScript_JuanRematch2
	goto_if_eq VAR_UNUSED_0x40F8, 4, TrainerIsland_Area2_EventScript_JuanRematch3
	goto_if_eq VAR_UNUSED_0x40F8, 5, TrainerIsland_Area2_EventScript_JuanRematch4
	end
	
TrainerIsland_Area2_EventScript_JuanFirstMatch::
	trainerbattle_double TRAINER_MASTER_JUAN, TrainerIsland_Area2_Text_JuanIntro, TrainerIsland_Area2_Text_JuanDefeat, Add2Points, 
	msgbox TrainerIsland_Area2_Text_JuanPostBattle, MSGBOX_AUTOCLOSE
	setvar VAR_UNUSED_0x40F8, 2
	end

TrainerIsland_Area2_EventScript_JuanRematch1::
	cleartrainerflag TRAINER_MASTER_JUAN_2
	trainerbattle_double TRAINER_MASTER_JUAN_2, TrainerIsland_Area2_Text_JuanIntro2, TrainerIsland_Area2_Text_JuanDefeat2, Add2Points
	msgbox TrainerIsland_Area2_Text_JuanPostBattle2, MSGBOX_AUTOCLOSE
	setvar VAR_UNUSED_0x40F8, 3
	end
	
TrainerIsland_Area2_EventScript_JuanRematch2::
	cleartrainerflag TRAINER_MASTER_JUAN_3
	trainerbattle_double TRAINER_MASTER_JUAN_3, TrainerIsland_Area2_Text_JuanIntro2, TrainerIsland_Area2_Text_JuanDefeat2, Add2Points
	msgbox TrainerIsland_Area2_Text_JuanPostBattle2, MSGBOX_AUTOCLOSE
	setvar VAR_UNUSED_0x40F8, 4
	end

TrainerIsland_Area2_EventScript_JuanRematch3::
	cleartrainerflag TRAINER_MASTER_JUAN_4
	trainerbattle_double TRAINER_MASTER_JUAN_4, TrainerIsland_Area2_Text_JuanIntro2, TrainerIsland_Area2_Text_JuanDefeat2, Add2Points
	msgbox TrainerIsland_Area2_Text_JuanPostBattle2, MSGBOX_AUTOCLOSE
	setvar VAR_UNUSED_0x40F8, 5
	end
	
TrainerIsland_Area2_EventScript_JuanRematch4::
	cleartrainerflag TRAINER_MASTER_JUAN
	trainerbattle_double TRAINER_MASTER_JUAN, TrainerIsland_Area2_Text_JuanIntro2, TrainerIsland_Area2_Text_JuanDefeat2, Add2Points
	msgbox TrainerIsland_Area2_Text_JuanPostBattle2, MSGBOX_AUTOCLOSE
	setvar VAR_UNUSED_0x40F8, 2
	end
	
	
TrainerIsland_Area2_EventScript_Mickey::
	cleartrainerflag TRAINER_MASTER_MICKEY
	trainerbattle_double TRAINER_MASTER_MICKEY, TrainerIsland_Area2_Text_MickeyIntro, TrainerIsland_Area2_Text_MickeyDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area2_Text_MickeyPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area2_EventScript_Donald::
	cleartrainerflag TRAINER_MASTER_DONALD
	trainerbattle_double TRAINER_MASTER_DONALD, TrainerIsland_Area2_Text_DonaldIntro, TrainerIsland_Area2_Text_DonaldDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area2_Text_DonaldPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area2_EventScript_Maria::
	cleartrainerflag TRAINER_MASTER_MARIA
	trainerbattle_double TRAINER_MASTER_MARIA, TrainerIsland_Area2_Text_MariaIntro, TrainerIsland_Area2_Text_MariaDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area2_Text_MariaPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area2_EventScript_Simon::
	cleartrainerflag TRAINER_MASTER_SIMON
	trainerbattle_double TRAINER_MASTER_SIMON, TrainerIsland_Area2_Text_SimonIntro, TrainerIsland_Area2_Text_SimonDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area2_Text_SimonPostBattle, MSGBOX_AUTOCLOSE
	end
	
TrainerIsland_Area2_Text_MickeyIntro:
	.string "Do you like to sail?$"

TrainerIsland_Area2_Text_MickeyDefeat:
	.string "I love sailing!$"
	
TrainerIsland_Area2_Text_MickeyPostBattle:
	.string "The sea is my life…$"
	
	
	
TrainerIsland_Area2_Text_DonaldIntro:
	.string "Inside, Outside, S.E.A!$"

TrainerIsland_Area2_Text_DonaldDefeat:
	.string "Everybody's gone surfin'…$"
	
TrainerIsland_Area2_Text_DonaldPostBattle:
	.string "Surfin' S.E.A.!$"
	


TrainerIsland_Area2_Text_MariaIntro:
	.string "It's a perfect day to swim!$"

TrainerIsland_Area2_Text_MariaDefeat:
	.string "Help! I'm drowning in tears!$"
	
TrainerIsland_Area2_Text_MariaPostBattle:
	.string "Time to head back to shore…$"
	


TrainerIsland_Area2_Text_SimonIntro:
	.string "Reeling in a big one!$"

TrainerIsland_Area2_Text_SimonDefeat:
	.string "It's off the hook!$"
	
TrainerIsland_Area2_Text_SimonPostBattle:
	.string "My line got tangled…$"


	
TrainerIsland_Area2_Text_AnabelIntro:
	.string "Time to get serious!$"

TrainerIsland_Area2_Text_AnabelDefeat:
	.string "Seriously?!$"
	
TrainerIsland_Area2_Text_AnabelPostBattle:
	.string "I wasn't serious enough…$"	



TrainerIsland_Area2_Text_JuanIntro:
	.string "I'm testing the waters with\n"
	.string "this team…$"

TrainerIsland_Area2_Text_JuanDefeat:
	.string "I'm all washed up…$"
	
TrainerIsland_Area2_Text_JuanPostBattle:
	.string "My team's like oil and water…$"
	
	
	
	
TrainerIsland_Area2_Text_JuanIntro2:
	.string "Battling is like the sea;\n"
	.string "it ebs and flows constantly.$"	
	
TrainerIsland_Area2_Text_JuanDefeat2:
	.string "Oh, how the tides have turned…$"
	
TrainerIsland_Area2_Text_JuanPostBattle2:
	.string "One day, I will return to\n"
	.string "the sea…$"
