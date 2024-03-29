TrainerIsland_Area5_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerIsland_Area5_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerIsland_Area5_OnFrame
	.byte 0
	
	
TrainerIsland_Area5_OnTransition:
	cleartrainerflag TRAINER_MASTER_JAMES	
	cleartrainerflag TRAINER_MASTER_NORMAN
	cleartrainerflag TRAINER_MASTER_NORMAN_2
	cleartrainerflag TRAINER_MASTER_NORMAN_3
	cleartrainerflag TRAINER_MASTER_NORMAN_4
	cleartrainerflag TRAINER_MASTER_BRAWLY
	cleartrainerflag TRAINER_MASTER_BRAWLY_2
	cleartrainerflag TRAINER_MASTER_BRAWLY_3
	cleartrainerflag TRAINER_MASTER_BRAWLY_4
	end



TrainerIsland_Area5_OnFrame:
	map_script_2 VAR_UNUSED_0x40F9, 0, TrainerIsland_Area5_EventScript_SetVar
	map_script_2 VAR_UNUSED_0x40FA, 0, TrainerIsland_Area5_EventScript_SetVar
	.2byte 0

TrainerIsland_Area5_EventScript_SetVar::
	setvar VAR_UNUSED_0x40F9, 1
	setvar VAR_UNUSED_0x40FA, 1
	end

TrainerIsland_Area5_EventScript_Norman::
	goto_if_eq VAR_UNUSED_0x40F9, 1, TrainerIsland_Area5_EventScript_NormanFirstMatch
	goto_if_eq VAR_UNUSED_0x40F9, 2, TrainerIsland_Area5_EventScript_NormanRematch1
	goto_if_eq VAR_UNUSED_0x40F9, 3, TrainerIsland_Area5_EventScript_NormanRematch2
	goto_if_eq VAR_UNUSED_0x40F9, 4, TrainerIsland_Area5_EventScript_NormanRematch3
	goto_if_eq VAR_UNUSED_0x40F9, 5, TrainerIsland_Area5_EventScript_NormanRematch4
	end
	
TrainerIsland_Area5_EventScript_NormanFirstMatch::
	trainerbattle_double TRAINER_MASTER_NORMAN, TrainerIsland_Area5_Text_NormanIntro, TrainerIsland_Area5_Text_NormanDefeat, CommonEvent_Text_NeedTwoMons, Add2Points
	msgbox TrainerIsland_Area5_Text_NormanPostBattle, MSGBOX_AUTOCLOSE
	setvar VAR_UNUSED_0x40F9, 2
	end

TrainerIsland_Area5_EventScript_NormanRematch1::
	trainerbattle_double TRAINER_MASTER_NORMAN_2, TrainerIsland_Area5_Text_NormanIntro2, TrainerIsland_Area5_Text_NormanDefeat2, CommonEvent_Text_NeedTwoMons, Add2Points
	msgbox TrainerIsland_Area5_Text_NormanPostBattle2, MSGBOX_AUTOCLOSE
	setvar VAR_UNUSED_0x40F9, 3
	end
	
TrainerIsland_Area5_EventScript_NormanRematch2::
	trainerbattle_double TRAINER_MASTER_NORMAN_3, TrainerIsland_Area5_Text_NormanIntro2, TrainerIsland_Area5_Text_NormanDefeat2, CommonEvent_Text_NeedTwoMons, Add2Points
	msgbox TrainerIsland_Area5_Text_NormanPostBattle2, MSGBOX_AUTOCLOSE
	setvar VAR_UNUSED_0x40F9, 4
	end

TrainerIsland_Area5_EventScript_NormanRematch3::
	trainerbattle_double TRAINER_MASTER_NORMAN_4, TrainerIsland_Area5_Text_NormanIntro2, TrainerIsland_Area5_Text_NormanDefeat2, CommonEvent_Text_NeedTwoMons, Add2Points
	msgbox TrainerIsland_Area5_Text_NormanPostBattle2, MSGBOX_AUTOCLOSE
	setvar VAR_UNUSED_0x40F9, 5
	end
	
TrainerIsland_Area5_EventScript_NormanRematch4::
	trainerbattle_double TRAINER_MASTER_NORMAN, TrainerIsland_Area5_Text_NormanIntro2, TrainerIsland_Area5_Text_NormanDefeat2, CommonEvent_Text_NeedTwoMons, Add2Points
	msgbox TrainerIsland_Area5_Text_NormanPostBattle2, MSGBOX_AUTOCLOSE
	setvar VAR_UNUSED_0x40F9, 2
	end
	
	
TrainerIsland_Area5_EventScript_Brawly::
	goto_if_eq VAR_UNUSED_0x40FA, 1, TrainerIsland_Area5_EventScript_BrawlyFirstMatch
	goto_if_eq VAR_UNUSED_0x40FA, 2, TrainerIsland_Area5_EventScript_BrawlyRematch1
	goto_if_eq VAR_UNUSED_0x40FA, 3, TrainerIsland_Area5_EventScript_BrawlyRematch2
	goto_if_eq VAR_UNUSED_0x40FA, 4, TrainerIsland_Area5_EventScript_BrawlyRematch3
	goto_if_eq VAR_UNUSED_0x40FA, 5, TrainerIsland_Area5_EventScript_BrawlyRematch4
	end
	
TrainerIsland_Area5_EventScript_BrawlyFirstMatch::
	trainerbattle_double TRAINER_MASTER_BRAWLY, TrainerIsland_Area5_Text_BrawlyIntro, TrainerIsland_Area5_Text_BrawlyDefeat, CommonEvent_Text_NeedTwoMons, Add2Points
	msgbox TrainerIsland_Area5_Text_BrawlyPostBattle, MSGBOX_AUTOCLOSE
	setvar VAR_UNUSED_0x40FA, 2
	end

TrainerIsland_Area5_EventScript_BrawlyRematch1::
	trainerbattle_double TRAINER_MASTER_BRAWLY_2, TrainerIsland_Area5_Text_BrawlyIntro2, TrainerIsland_Area5_Text_BrawlyDefeat2, CommonEvent_Text_NeedTwoMons, Add2Points
	msgbox TrainerIsland_Area5_Text_BrawlyPostBattle2, MSGBOX_AUTOCLOSE
	setvar VAR_UNUSED_0x40FA, 3
	end
	
TrainerIsland_Area5_EventScript_BrawlyRematch2::
	cleartrainerflag TRAINER_MASTER_BRAWLY_3
	trainerbattle_double TRAINER_MASTER_BRAWLY_3, TrainerIsland_Area5_Text_BrawlyIntro2, TrainerIsland_Area5_Text_BrawlyDefeat2, CommonEvent_Text_NeedTwoMons, Add2Points
	msgbox TrainerIsland_Area5_Text_BrawlyPostBattle2, MSGBOX_AUTOCLOSE
	setvar VAR_UNUSED_0x40FA, 4
	end

TrainerIsland_Area5_EventScript_BrawlyRematch3::
	cleartrainerflag TRAINER_MASTER_BRAWLY_4
	trainerbattle_double TRAINER_MASTER_BRAWLY_4, TrainerIsland_Area5_Text_BrawlyIntro2, TrainerIsland_Area5_Text_BrawlyDefeat2, CommonEvent_Text_NeedTwoMons, Add2Points
	msgbox TrainerIsland_Area5_Text_BrawlyPostBattle2, MSGBOX_AUTOCLOSE
	setvar VAR_UNUSED_0x40FA, 5
	end
	
TrainerIsland_Area5_EventScript_BrawlyRematch4::
	cleartrainerflag TRAINER_MASTER_BRAWLY
	trainerbattle_double TRAINER_MASTER_BRAWLY, TrainerIsland_Area5_Text_BrawlyIntro2, TrainerIsland_Area5_Text_BrawlyDefeat2, CommonEvent_Text_NeedTwoMons, Add2Points
	msgbox TrainerIsland_Area5_Text_BrawlyPostBattle2, MSGBOX_AUTOCLOSE
	setvar VAR_UNUSED_0x40FA, 2
	end
	
TrainerIsland_Area5_EventScript_James::
	cleartrainerflag TRAINER_MASTER_JAMES
	trainerbattle_double TRAINER_MASTER_JAMES, TrainerIsland_Area5_Text_JamesIntro, TrainerIsland_Area5_Text_JamesDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area5_Text_JamesPostBattle, MSGBOX_AUTOCLOSE
	end
	
TrainerIsland_Area5_Text_NormanIntro:
	.string "Hello, my child. Glad to see\n"
	.string "you made it here! Now let's\l"
	.string "battle!$"

TrainerIsland_Area5_Text_NormanDefeat:
	.string "Once again, you've surpassed me.$"

TrainerIsland_Area5_Text_NormanPostBattle:
	.string "Like parent, like child. That's\n"
	.string "the way it is.$"
	


TrainerIsland_Area5_Text_NormanIntro2:
	.string "You've returned.$"

TrainerIsland_Area5_Text_NormanDefeat2:
	.string "Perfect in every way.$"

TrainerIsland_Area5_Text_NormanPostBattle2:
	.string "Keep going for the top!$"



TrainerIsland_Area5_Text_BrawlyIntro:
	.string "Let's have a fervent battle!$"

TrainerIsland_Area5_Text_BrawlyDefeat:
	.string "You have so much passion!$"

TrainerIsland_Area5_Text_BrawlyPostBattle:
	.string "I would love to have another\n"
	.string "passionate battle!$"

TrainerIsland_Area5_Text_BrawlyIntro2:
	.string "Back for more?$"

TrainerIsland_Area5_Text_BrawlyDefeat2:
	.string "That. Was. AWESOME!$"

TrainerIsland_Area5_Text_BrawlyPostBattle2:
	.string "Come on! Let's keep the ball\n"
	.string "rolling!$"
	

TrainerIsland_Area5_Text_JamesIntro:
	.string "Beware! I have lots of pokemon!$"

TrainerIsland_Area5_Text_JamesDefeat:
	.string "But apparently you were ready\n$"
	.string "for all of them!$"

TrainerIsland_Area5_Text_JamesPostBattle:
	.string "All my pokemon are knocked out…$"
