.set LOCALID_GYMKEEPER, 17

TrainerIsland_TrainerCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerIsland_TrainerCity_OnTransition
	.byte 0
	
TrainerIsland_TrainerCity_OnTransition:
	goto_if_lt VAR_UNUSED_0x40FF, 17, TrainerIsland_TrainerCity_ResetTrainers
	end

TrainerIsland_TrainerCity_ResetTrainers:	
	cleartrainerflag TRAINER_MASTER_CALEB
	cleartrainerflag TRAINER_MASTER_RILEY
	cleartrainerflag TRAINER_MASTER_JOHAN
	cleartrainerflag TRAINER_MASTER_JESSIE
	cleartrainerflag TRAINER_MASTER_RACHEL
	cleartrainerflag TRAINER_MASTER_JUDAI
	cleartrainerflag TRAINER_MASTER_ASUKA
	cleartrainerflag TRAINER_MASTER_LAINA
	cleartrainerflag TRAINER_MASTER_BRETT
	cleartrainerflag TRAINER_MASTER_KELLY
	cleartrainerflag TRAINER_MASTER_JACK
	cleartrainerflag TRAINER_MASTER_FRANK
	cleartrainerflag TRAINER_MASTER_DEVIN
	cleartrainerflag TRAINER_MASTER_WILL
	cleartrainerflag TRAINER_MASTER_BERTHA
	cleartrainerflag TRAINER_MASTER_SEDINA
	end

TrainerIsland_TrainerCity_EventScript_NXTournament_Caleb::
	goto_if_lt VAR_UNUSED_0x40FF, 17, Caleb_Tournament
	goto Caleb_Regular
	end
	
	
Caleb_Regular:
	trainerbattle_double TRAINER_MASTER_CALEB, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end

Caleb_Tournament:
	trainerbattle_double TRAINER_MASTER_CALEB, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_TrytoResetVictories
	call_if_eq VAR_RESULT, B_OUTCOME_WON, TrainerIsland_TrainerCity_TrytoAddVictories
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end

TrainerIsland_TrainerCity_EventScript_NXTournament_Riley::
	goto_if_lt VAR_UNUSED_0x40FF, 17, Riley_Tournament
	goto Riley_Regular
	end
	
Riley_Regular:
	trainerbattle_double TRAINER_MASTER_RILEY, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end

Riley_Tournament:
	trainerbattle_double TRAINER_MASTER_RILEY, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_TrytoResetVictories
	call_if_eq VAR_RESULT, B_OUTCOME_WON, TrainerIsland_TrainerCity_TrytoAddVictories
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end

TrainerIsland_TrainerCity_EventScript_NXTournament_Johan::
	goto_if_lt VAR_UNUSED_0x40FF, 17, Johan_Tournament
	goto Johan_Regular
	end
	
Johan_Regular:
	trainerbattle_double TRAINER_MASTER_JOHAN, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end

Johan_Tournament:
	trainerbattle_double TRAINER_MASTER_JOHAN, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_TrytoResetVictories
	call_if_eq VAR_RESULT, B_OUTCOME_WON, TrainerIsland_TrainerCity_TrytoAddVictories
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end
	
TrainerIsland_TrainerCity_EventScript_NXTournament_Jessie::
	goto_if_lt VAR_UNUSED_0x40FF, 17, Jessie_Tournament
	goto Jessie_Regular
	end
	
Jessie_Regular:	
	trainerbattle_double TRAINER_MASTER_JESSIE, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end

Jessie_Tournament:
	trainerbattle_double TRAINER_MASTER_JESSIE, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_TrytoResetVictories
	call_if_eq VAR_RESULT, B_OUTCOME_WON, TrainerIsland_TrainerCity_TrytoAddVictories
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end
	
TrainerIsland_TrainerCity_EventScript_NXTournament_Rachel::
	goto_if_lt VAR_UNUSED_0x40FF, 17, Rachel_Tournament
	goto Rachel_Regular
	end

Rachel_Regular:
	trainerbattle_double TRAINER_MASTER_RACHEL, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end

Rachel_Tournament:
	trainerbattle_double TRAINER_MASTER_RACHEL, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_TrytoResetVictories
	call_if_eq VAR_RESULT, B_OUTCOME_WON, TrainerIsland_TrainerCity_TrytoAddVictories
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end
	
	
TrainerIsland_TrainerCity_EventScript_NXTournament_Judai::
	goto_if_lt VAR_UNUSED_0x40FF, 17, Judai_Tournament
	goto Judai_Regular
	end
	
Judai_Regular:
	trainerbattle_double TRAINER_MASTER_JUDAI, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end

Judai_Tournament:
	trainerbattle_double TRAINER_MASTER_JUDAI, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_TrytoResetVictories
	call_if_eq VAR_RESULT, B_OUTCOME_WON, TrainerIsland_TrainerCity_TrytoAddVictories
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end
	
TrainerIsland_TrainerCity_EventScript_NXTournament_Asuka::
	goto_if_lt VAR_UNUSED_0x40FF, 17, Asuka_Tournament
	goto Asuka_Regular
	end
	
Asuka_Regular:
	trainerbattle_double TRAINER_MASTER_ASUKA, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end

Asuka_Tournament:
	trainerbattle_double TRAINER_MASTER_ASUKA, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_TrytoResetVictories
	call_if_eq VAR_RESULT, B_OUTCOME_WON, TrainerIsland_TrainerCity_TrytoAddVictories
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end
	
TrainerIsland_TrainerCity_EventScript_NXTournament_Laina::
	goto_if_lt VAR_UNUSED_0x40FF, 17, Laina_Tournament
	goto Laina_Regular
	end

Laina_Regular:
	trainerbattle_double TRAINER_MASTER_LAINA, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end

Laina_Tournament:
	trainerbattle_double TRAINER_MASTER_LAINA, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_TrytoResetVictories
	call_if_eq VAR_RESULT, B_OUTCOME_WON, TrainerIsland_TrainerCity_TrytoAddVictories
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end
	
TrainerIsland_TrainerCity_EventScript_NXTournament_Brett::
	goto_if_lt VAR_UNUSED_0x40FF, 17, Brett_Tournament
	goto Brett_Regular
	end

Brett_Regular:
	trainerbattle_double TRAINER_MASTER_BRETT, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end

Brett_Tournament:
	trainerbattle_double TRAINER_MASTER_BRETT, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_TrytoResetVictories
	call_if_eq VAR_RESULT, B_OUTCOME_WON, TrainerIsland_TrainerCity_TrytoAddVictories
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end
	
TrainerIsland_TrainerCity_EventScript_NXTournament_Kelly::
	goto_if_lt VAR_UNUSED_0x40FF, 17, Kelly_Tournament
	goto Kelly_Regular
	end

Kelly_Regular:
	trainerbattle_double TRAINER_MASTER_KELLY, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end

Kelly_Tournament:
	trainerbattle_double TRAINER_MASTER_KELLY, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_TrytoResetVictories
	call_if_eq VAR_RESULT, B_OUTCOME_WON, TrainerIsland_TrainerCity_TrytoAddVictories
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end
	
TrainerIsland_TrainerCity_EventScript_NXTournament_Jack::
	goto_if_lt VAR_UNUSED_0x40FF, 17, Jack_Tournament
	goto Jack_Regular
	end

Jack_Regular:
	trainerbattle_double TRAINER_MASTER_JACK, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end

Jack_Tournament:
	trainerbattle_double TRAINER_MASTER_JACK, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_TrytoResetVictories
	call_if_eq VAR_RESULT, B_OUTCOME_WON, TrainerIsland_TrainerCity_TrytoAddVictories
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end
	
	
TrainerIsland_TrainerCity_EventScript_NXTournament_Frank::
	goto_if_lt VAR_UNUSED_0x40FF, 17, Frank_Tournament
	goto Frank_Regular
	end

Frank_Regular:
	trainerbattle_double TRAINER_MASTER_FRANK, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end

Frank_Tournament:
	trainerbattle_double TRAINER_MASTER_FRANK, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_TrytoResetVictories
	call_if_eq VAR_RESULT, B_OUTCOME_WON, TrainerIsland_TrainerCity_TrytoAddVictories
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end
	
TrainerIsland_TrainerCity_EventScript_NXTournament_Devin::
	goto_if_lt VAR_UNUSED_0x40FF, 17, Devin_Tournament
	goto Devin_Regular
	end
	
Devin_Regular:
	trainerbattle_double TRAINER_MASTER_DEVIN, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end
	
Devin_Tournament:
	trainerbattle_double TRAINER_MASTER_DEVIN, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_TrytoResetVictories
	call_if_eq VAR_RESULT, B_OUTCOME_WON, TrainerIsland_TrainerCity_TrytoAddVictories
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end
	
TrainerIsland_TrainerCity_EventScript_NXTournament_Will::
	goto_if_lt VAR_UNUSED_0x40FF, 17, Will_Tournament
	goto Will_Regular
	end

Will_Tournament:
	trainerbattle_double TRAINER_MASTER_WILL, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_TrytoResetVictories
	call_if_eq VAR_RESULT, B_OUTCOME_WON, TrainerIsland_TrainerCity_TrytoAddVictories
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end
	
Will_Regular:
	trainerbattle_double TRAINER_MASTER_WILL, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end

TrainerIsland_TrainerCity_EventScript_NXTournament_Bertha::
	goto_if_lt VAR_UNUSED_0x40FF, 17, Bertha_Tournament
	goto Bertha_Regular
	end

Bertha_Regular:
	trainerbattle_double TRAINER_MASTER_BERTHA, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end

Bertha_Tournament:
	trainerbattle_double TRAINER_MASTER_BERTHA, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_TrytoResetVictories
	call_if_eq VAR_RESULT, B_OUTCOME_WON, TrainerIsland_TrainerCity_TrytoAddVictories
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end

TrainerIsland_TrainerCity_EventScript_NXTournament_Sedina::
	goto_if_lt VAR_UNUSED_0x40FF, 17, Sedina_Tournament
	goto Sedina_Regular
	end

Sedina_Tournament:
	trainerbattle_double TRAINER_MASTER_SEDINA, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_TrytoResetVictories
	call_if_eq VAR_RESULT, B_OUTCOME_WON, TrainerIsland_TrainerCity_TrytoAddVictories
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end

Sedina_Regular:
	trainerbattle_double TRAINER_MASTER_SEDINA, TrainerIsland_TrainerCity_Text_GenericIntro, TrainerIsland_TrainerCity_Text_GenericDefeat, Add1Points
	msgbox TrainerIsland_TrainerCity_Text_GenericPostBattle, MSGBOX_DEFAULT
	waitmessage
	end
	
TrainerIsland_TrainerCity_TrytoAddVictories:
	call_if_lt VAR_UNUSED_0x40FF, 17, TrainerIsland_TrainerCity_AddVictories
	return
	end

TrainerIsland_TrainerCity_AddVictories:
	addvar VAR_UNUSED_0x40FF, 1
	return
	end

TrainerIsland_TrainerCity_TrytoResetVictories:
	call_if_lt VAR_UNUSED_0x40FF, 17, TrainerIsland_TrainerCity_ResetVictories
	return
	end
	
TrainerIsland_TrainerCity_ResetVictories:
	setvar VAR_UNUSED_0x40FF, 0
	clearflag FLAG_UNUSED_0x2B9
	call TrainerIsland_TrainerCity_ResetTrainers
	return
	end
	
TrainerIsland_TrainerCity_EventScript_NXTournament_GymKeeper::
	lock
	faceplayer
	goto_if_set FLAG_UNUSED_0x2B8, TrainerIsland_TrainerCity_EventScript_PreparingTournament
	goto_if_lt VAR_UNUSED_0x40FF, 17, TrainerIsland_TrainerCity_EventScript_KnockoutEveryone
	goto_if_eq VAR_UNUSED_0x40FF, 17, TrainerIsland_TrainerCity_EventScript_YouMayEnter
	release
	end
	
TrainerIsland_TrainerCity_EventScript_PreparingTournament:
	msgbox TrainerIsland_TrainerCity_Text_PreparingTournament, MSGBOX_DEFAULT
	release
	end
	
TrainerIsland_TrainerCity_EventScript_KnockoutEveryone:
	copyvar VAR_TEMP_0, VAR_UNUSED_0x40FF
	setvar VAR_TEMP_1, 17
	subvar VAR_TEMP_1, VAR_TEMP_0
	buffernumberstring STR_VAR_1, VAR_TEMP_1
	msgbox TrainerIsland_TrainerCity_EventScript_KnockoutEveryone, MSGBOX_DEFAULT
	release
	end
	
TrainerIsland_TrainerCity_EventScript_YouMayEnter:
	msgbox TrainerIsland_TrainerCity_EventScript_KnockoutEveryone, MSGBOX_DEFAULT
	waitmessage
	applymovement LOCALID_GYMKEEPER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	opendoor 16, 25
	waitdooranim
	applymovement LOCALID_GYMKEEPER, Common_Movement_WalkUp
	waitmovement 0
	setflag FLAG_UNUSED_0x2B9
	closedoor 16, 25
	waitdooranim
	release
	end
	
	
TrainerIsland_TrainerCity_Text_PreparingTournament:
	.string "In order to enter, you need to\n"
	.string "knock out all the players in\l"
	.string "the tournament.\p"
	.string "I'm sorry, the tournament is\n"
	.string "still being prepared. Come\l"
	.string "back later!$"
	
TrainerIsland_TrainerCity_Text_KnockoutEveryone:
	.string "In order to enter, you need to\n"
	.string "knock out all the players in\l"
	.string "the tournament.\p"
	.string "You currently have {STR_VAR_1}\n"
	.string "trainers left to defeat.$"
	
TrainerIsland_TrainerCity_Text_YouMayEnter:
	.string "Ah, I see you've knocked out\n"
	.string "everyone. For that, you may\l"
	.string "enter.$"
	
TrainerIsland_TrainerCity_Text_GenericIntro:
	.string "Battle!$"
	
TrainerIsland_TrainerCity_Text_GenericDefeat:
	.string "I lost.$"
	
TrainerIsland_TrainerCity_Text_GenericPostBattle:
	.string "Let's battle again sometime.$"
