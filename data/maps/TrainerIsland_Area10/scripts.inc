TrainerIsland_Area10_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerIsland_Area10_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerIsland_Area10_OnFrame
	.byte 0

TrainerIsland_Area10_OnFrame:
	map_script_2 VAR_UNUSED_0x40FA, 0, TrainerIsland_Area10_EventScript_SetVar
	.2byte 0

TrainerIsland_Area10_EventScript_SetVar::
	setvar VAR_UNUSED_0x40FA, 1
	end

	
TrainerIsland_Area10_OnTransition:
	cleartrainerflag TRAINER_MASTER_ROXANNE
	cleartrainerflag TRAINER_MASTER_ROXANNE_2
	cleartrainerflag TRAINER_MASTER_ROXANNE_3
	cleartrainerflag TRAINER_MASTER_ROXANNE_4
	cleartrainerflag TRAINER_MASTER_SPENSER
	cleartrainerflag TRAINER_MASTER_ROD
	cleartrainerflag TRAINER_MASTER_JOANNE
	cleartrainerflag TRAINER_MASTER_AMY
	cleartrainerflag TRAINER_MASTER_BILL
	end


TrainerIsland_Area10_EventScript_Roxanne::
	goto_if_eq VAR_UNUSED_0x40FA, 1, TrainerIsland_Area10_EventScript_RoxanneFirstMatch
	goto_if_eq VAR_UNUSED_0x40FA, 2, TrainerIsland_Area10_EventScript_RoxanneRematch1
	goto_if_eq VAR_UNUSED_0x40FA, 3, TrainerIsland_Area10_EventScript_RoxanneRematch2
	goto_if_eq VAR_UNUSED_0x40FA, 4, TrainerIsland_Area10_EventScript_RoxanneRematch3
	goto_if_eq VAR_UNUSED_0x40FA, 5, TrainerIsland_Area10_EventScript_RoxanneRematch4
	end
	
TrainerIsland_Area10_EventScript_RoxanneFirstMatch::
	trainerbattle_double TRAINER_MASTER_ROXANNE, TrainerIsland_Area10_Text_RoxanneIntro, TrainerIsland_Area10_Text_RoxanneDefeat, CommonEvent_Text_NeedTwoMons, Add2Points
	msgbox TrainerIsland_Area10_Text_RoxannePostBattle, MSGBOX_AUTOCLOSE
	setvar VAR_UNUSED_0x40FA, 2
	end

TrainerIsland_Area10_EventScript_RoxanneRematch1::
	trainerbattle_double TRAINER_MASTER_ROXANNE_2, TrainerIsland_Area10_Text_RoxanneIntro2, TrainerIsland_Area10_Text_RoxanneDefeat2, CommonEvent_Text_NeedTwoMons, Add2Points
	msgbox TrainerIsland_Area10_Text_RoxannePostBattle2, MSGBOX_AUTOCLOSE
	setvar VAR_UNUSED_0x40FA, 3
	end
	
TrainerIsland_Area10_EventScript_RoxanneRematch2::
	trainerbattle_double TRAINER_MASTER_ROXANNE_3, TrainerIsland_Area10_Text_RoxanneIntro2, TrainerIsland_Area10_Text_RoxanneDefeat2, CommonEvent_Text_NeedTwoMons, Add2Points
	msgbox TrainerIsland_Area10_Text_RoxannePostBattle2, MSGBOX_AUTOCLOSE
	setvar VAR_UNUSED_0x40FA, 4
	end

TrainerIsland_Area10_EventScript_RoxanneRematch3::
	trainerbattle_double TRAINER_MASTER_ROXANNE_4, TrainerIsland_Area10_Text_RoxanneIntro2, TrainerIsland_Area10_Text_RoxanneDefeat2, CommonEvent_Text_NeedTwoMons, Add2Points
	msgbox TrainerIsland_Area10_Text_RoxannePostBattle2, MSGBOX_AUTOCLOSE
	setvar VAR_UNUSED_0x40FA, 5
	end
	
TrainerIsland_Area10_EventScript_RoxanneRematch4::
	trainerbattle_double TRAINER_MASTER_ROXANNE, TrainerIsland_Area10_Text_RoxanneIntro2, TrainerIsland_Area10_Text_RoxanneDefeat2, CommonEvent_Text_NeedTwoMons, Add2Points
	msgbox TrainerIsland_Area10_Text_RoxannePostBattle2, MSGBOX_AUTOCLOSE
	setvar VAR_UNUSED_0x40FA, 2
	end
	
TrainerIsland_Area10_EventScript_Spenser::
	trainerbattle_double TRAINER_MASTER_SPENSER, TrainerIsland_Area10_Text_SpenserIntro, TrainerIsland_Area10_Text_SpenserDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area10_Text_SpenserPostBattle, MSGBOX_AUTOCLOSE
	end
	

TrainerIsland_Area10_EventScript_Rod::
	trainerbattle_double TRAINER_MASTER_ROD, TrainerIsland_Area10_Text_RodIntro, TrainerIsland_Area10_Text_RodDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area10_Text_RodPostBattle, MSGBOX_AUTOCLOSE
	end
	
	
TrainerIsland_Area10_EventScript_Joanne::
	trainerbattle_double TRAINER_MASTER_JOANNE, TrainerIsland_Area10_Text_JoanneIntro, TrainerIsland_Area10_Text_JoanneDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area10_Text_JoannePostBattle, MSGBOX_AUTOCLOSE
	end
	
TrainerIsland_Area10_EventScript_Amy::
	trainerbattle_double TRAINER_MASTER_AMY, TrainerIsland_Area10_Text_AmyIntro, TrainerIsland_Area10_Text_AmyDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area10_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area10_EventScript_Bill::
	trainerbattle_double TRAINER_MASTER_BILL, TrainerIsland_Area10_Text_BillIntro, TrainerIsland_Area10_Text_BillDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area10_Text_BillPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area10_Text_SpenserIntro:
	.string "It's a fight to the finish,\n"
	.string "lad! Bring. It. On!$"

TrainerIsland_Area10_Text_SpenserDefeat:
	.string "You thromped me again.$"

TrainerIsland_Area10_Text_SpenserPostBattle:
	.string "That was a good battle.\n" 
	.string "Let's do it again.$"


TrainerIsland_Area10_Text_JoanneIntro:
	.string "Want to hang out?$"

TrainerIsland_Area10_Text_JoanneDefeat:
	.string "That's a terrible way to\n"
	.string "treat a lady!$"

TrainerIsland_Area10_Text_JoannePostBattle:
	.string "I hope your happy with your\n"
	.string "victory!$"


TrainerIsland_Area10_Text_BillIntro:
	.string "I have lots of money.$"
	
TrainerIsland_Area10_Text_BillDefeat:
	.string "Here's your reward.$"

TrainerIsland_Area10_Text_BillPostBattle:
	.string "I am still loaded with cash…$"
	


TrainerIsland_Area10_Text_RodIntro:
	.string "Care to spar a bit?$"

TrainerIsland_Area10_Text_RodDefeat:
	.string "I admit defeat…$"

TrainerIsland_Area10_Text_RodPostBattle:
	.string "You were the better\n"
	.string "trainer today.$"
	
	
TrainerIsland_Area10_Text_AmyIntro:
	.string "Check out my bling!$"

TrainerIsland_Area10_Text_AmyDefeat:
	.string "My adornment broke!$"

TrainerIsland_Area10_Text_AmyPostBattle:
	.string "I'm all ugly now…$"
	

TrainerIsland_Area10_Text_RoxanneIntro:
	.string "Sticks and stones may break\n"
	.string "my bones, but your pokemon\l"
	.string "will never hurt me!$"

TrainerIsland_Area10_Text_RoxanneDefeat:
	.string "Your pokemon are more like\n"
	.string "boulders.$"
	
TrainerIsland_Area10_Text_RoxannePostBattle:
	.string "I dare you to try that again.$"

TrainerIsland_Area10_Text_RoxanneIntro2:
	.string "Pokemon can help us move\n"
	.string "mountains!$"
	
TrainerIsland_Area10_Text_RoxanneDefeat2:
	.string "Admirable!$"

TrainerIsland_Area10_Text_RoxannePostBattle2:
	.string "There will always be rocks\n"
	.string "in the road ahead of us.$"
