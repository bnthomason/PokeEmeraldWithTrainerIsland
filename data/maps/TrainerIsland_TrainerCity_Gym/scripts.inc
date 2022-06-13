.set LOCALID_RIVAL, 1

TrainerIsland_TrainerCity_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerIsland_TrainerCity_Gym_OnTransition


TrainerIsland_TrainerCity_Gym_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	
TrainerIsland_TrainerCity_Gym_EventScript_SidneyGreet::
	cleartrainerflag TRAINER_ELITE_SIDNEY
	trainerbattle_double TRAINER_ELITE_SIDNEY, TrainerIsland_TrainerCity_Gym_Text_SidneyIntro, TrainerIsland_TrainerCity_Gym_Text_SidneyDefeated, Add3Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_Gym_TrytoResetVictories
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, TrainerIsland_TrainerCity_Gym_EventScript_AfterSidneyBattle
	end

TrainerIsland_TrainerCity_Gym_EventScript_AfterSidneyBattle::
	setflag FLAG_UNUSED_0x4EC
	release
	end

TrainerIsland_TrainerCity_Gym_EventScript_PhoebeGreet::
	cleartrainerflag TRAINER_ELITE_PHOEBE
	trainerbattle_double TRAINER_ELITE_PHOEBE, TrainerIsland_TrainerCity_Gym_Text_PhoebeIntro, TrainerIsland_TrainerCity_Gym_Text_PhoebeDefeated, Add3Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_Gym_TrytoResetVictories
	goto_if_eq VAR_RESULT, B_OUTCOME_WON,  TrainerIsland_TrainerCity_Gym_EventScript_AfterPhoebeBattle
	end
	
TrainerIsland_TrainerCity_Gym_EventScript_AfterPhoebeBattle::
	setflag FLAG_UNUSED_0x4ED
	release
	end

TrainerIsland_TrainerCity_Gym_EventScript_GlaciaGreet::
	cleartrainerflag TRAINER_ELITE_GLACIA
	trainerbattle_double TRAINER_ELITE_GLACIA, TrainerIsland_TrainerCity_Gym_Text_GlaciaIntro, TrainerIsland_TrainerCity_Gym_Text_GlaciaDefeated, Add3Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_Gym_TrytoResetVictories
	goto_if_eq VAR_RESULT, B_OUTCOME_WON,  TrainerIsland_TrainerCity_Gym_EventScript_AfterGlaciaBattle
	end

TrainerIsland_TrainerCity_Gym_EventScript_AfterGlaciaBattle::
	setflag FLAG_UNUSED_0x4EE
	release
	end

TrainerIsland_TrainerCity_Gym_EventScript_DrakeGreet::
	cleartrainerflag TRAINER_ELITE_DRAKE
	trainerbattle_double TRAINER_ELITE_DRAKE, TrainerIsland_TrainerCity_Gym_Text_DrakeIntro, TrainerIsland_TrainerCity_Gym_Text_DrakeDefeated, Add3Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_Gym_TrytoResetVictories
	goto_if_eq VAR_RESULT, B_OUTCOME_WON,  TrainerIsland_TrainerCity_Gym_EventScript_AfterDrakeBattle
	end

TrainerIsland_TrainerCity_Gym_EventScript_AfterDrakeBattle::
	setflag FLAG_UNUSED_0x4EF
	release
	end

TrainerIsland_TrainerCity_Gym_EventScript_LucyGreet::
	cleartrainerflag TRAINER_ELITE_LUCY
	trainerbattle_double TRAINER_ELITE_LUCY, TrainerIsland_TrainerCity_Gym_Text_LucyIntro, TrainerIsland_TrainerCity_Gym_Text_LucyDefeated, Add3Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_Gym_TrytoResetVictories
	goto_if_eq VAR_RESULT, B_OUTCOME_WON,  TrainerIsland_TrainerCity_Gym_EventScript_AfterLucyBattle
	end

TrainerIsland_TrainerCity_Gym_EventScript_AfterLucyBattle::
	setflag FLAG_UNUSED_0x4F0
	release
	end

TrainerIsland_TrainerCity_Gym_EventScript_BrandonGreet::
	trainerbattle_double TRAINER_ELITE_BRANDON, TrainerIsland_TrainerCity_Gym_Text_BrandonIntro, TrainerIsland_TrainerCity_Gym_Text_BrandonDefeated, Add3Points
	cleartrainerflag TRAINER_ELITE_BRANDON
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_Gym_TrytoResetVictories
	goto_if_eq VAR_RESULT, B_OUTCOME_WON,  TrainerIsland_TrainerCity_Gym_EventScript_AfterBrandonBattle
	end

TrainerIsland_TrainerCity_Gym_EventScript_AfterBrandonBattle::
	setflag FLAG_UNUSED_0x4F1
	release
	end

TrainerIsland_TrainerCity_Gym_EventScript_TuckerGreet::
	cleartrainerflag TRAINER_ELITE_TUCKER
	trainerbattle_double TRAINER_ELITE_TUCKER, TrainerIsland_TrainerCity_Gym_Text_TuckerIntro, TrainerIsland_TrainerCity_Gym_Text_TuckerDefeated, Add3Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_Gym_TrytoResetVictories
	goto_if_eq VAR_RESULT, B_OUTCOME_WON,  TrainerIsland_TrainerCity_Gym_EventScript_AfterTuckerBattle
	end

TrainerIsland_TrainerCity_Gym_EventScript_AfterTuckerBattle::
	setflag FLAG_UNUSED_0x4F2
	release
	end

TrainerIsland_TrainerCity_Gym_EventScript_GretaGreet::
	cleartrainerflag TRAINER_ELITE_GRETA
	trainerbattle_double TRAINER_ELITE_GRETA, TrainerIsland_TrainerCity_Gym_Text_GretaIntro, TrainerIsland_TrainerCity_Gym_Text_GretaDefeated, Add3Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_Gym_TrytoResetVictories
	goto_if_eq VAR_RESULT, B_OUTCOME_WON,  TrainerIsland_TrainerCity_Gym_EventScript_AfterGretaBattle
	end

TrainerIsland_TrainerCity_Gym_EventScript_AfterGreteBattle::
	setflag FLAG_UNUSED_0x4F3
	release
	end

TrainerIsland_TrainerCity_Gym_EventScript_AnabelGreet::
	cleartrainerflag TRAINER_ELITE_ANABEL
	trainerbattle_double TRAINER_ELITE_ANABEL,TrainerIsland_TrainerCity_Gym_Text_AnabelIntro, TrainerIsland_TrainerCity_Gym_Text_AnabelDefeated, Add3Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_Gym_TrytoResetVictories
	goto_if_eq VAR_RESULT, B_OUTCOME_WON,  TrainerIsland_TrainerCity_Gym_EventScript_AfterAnabelBattle
	end

TrainerIsland_TrainerCity_Gym_EventScript_AfterAnabelBattle::
	setflag FLAG_UNUSED_0x4F4
	release
	end

TrainerIsland_TrainerCity_Gym_EventScript_SpenserGreet::
	cleartrainerflag TRAINER_ELITE_SPENSER
	trainerbattle_double TRAINER_ELITE_SPENSER, TrainerIsland_TrainerCity_Gym_Text_SpenserIntro, TrainerIsland_TrainerCity_Gym_Text_SpenserDefeated, Add3Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_Gym_TrytoResetVictories
	goto_if_eq VAR_RESULT, B_OUTCOME_WON,  TrainerIsland_TrainerCity_Gym_EventScript_AfterSpenserBattle
	end

TrainerIsland_TrainerCity_Gym_EventScript_AfterSpenserBattle::
	setflag FLAG_UNUSED_0x4F5
	release
	end

TrainerIsland_TrainerCity_Gym_EventScript_NolandGreet::
	cleartrainerflag TRAINER_ELITE_NOLAND
	trainerbattle_double TRAINER_ELITE_NOLAND, TrainerIsland_TrainerCity_Gym_Text_NolandIntro, TrainerIsland_TrainerCity_Gym_Text_NolandDefeated, Add3Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_Gym_TrytoResetVictories
	goto_if_eq VAR_RESULT, B_OUTCOME_WON,  TrainerIsland_TrainerCity_Gym_EventScript_AfterNolandBattle
	end

TrainerIsland_TrainerCity_Gym_EventScript_AfterNolandBattle::
	setflag FLAG_UNUSED_0x4F6
	release
	end
	
TrainerIsland_TrainerCity_Gym_EventScript_WallaceGreet::
	lockall
	cleartrainerflag TRAINER_ELITE_WALLACe
	goto_if_unset FLAG_UNUSED_0x4EC, TrainerIsland_TrainerCity_Gym_EventScript_Wallace_DefeatMasters
	goto_if_unset FLAG_UNUSED_0x4ED, TrainerIsland_TrainerCity_Gym_EventScript_Wallace_DefeatMasters
	goto_if_unset FLAG_UNUSED_0x4EE, TrainerIsland_TrainerCity_Gym_EventScript_Wallace_DefeatMasters
	goto_if_unset FLAG_UNUSED_0x4EF, TrainerIsland_TrainerCity_Gym_EventScript_Wallace_DefeatMasters
	goto_if_unset FLAG_UNUSED_0x4F0, TrainerIsland_TrainerCity_Gym_EventScript_Wallace_DefeatMasters
	goto_if_unset FLAG_UNUSED_0x4F1, TrainerIsland_TrainerCity_Gym_EventScript_Wallace_DefeatMasters
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_Gym_TrytoResetVictories
	goto_if_eq VAR_RESULT, B_OUTCOME_WON,  TrainerIsland_TrainerCity_Gym_EventScript_AfterWallaceBattle
	end

TrainerIsland_TrainerCity_Gym_EventScript_StevenGreet::
	lockall
	cleartrainerflag TRAINER_ELITE_STEVEN
	goto_if_unset FLAG_UNUSED_0x4F1, TrainerIsland_TrainerCity_Gym_EventScript_Steven_DefeatMasters
	goto_if_unset FLAG_UNUSED_0x4F2, TrainerIsland_TrainerCity_Gym_EventScript_Steven_DefeatMasters
	goto_if_unset FLAG_UNUSED_0x4F3, TrainerIsland_TrainerCity_Gym_EventScript_Steven_DefeatMasters
	goto_if_unset FLAG_UNUSED_0x4F4, TrainerIsland_TrainerCity_Gym_EventScript_Steven_DefeatMasters
	goto_if_unset FLAG_UNUSED_0x4F5, TrainerIsland_TrainerCity_Gym_EventScript_Steven_DefeatMasters
	goto_if_unset FLAG_UNUSED_0x4F6, TrainerIsland_TrainerCity_Gym_EventScript_Steven_DefeatMasters
	trainerbattle_double TRAINER_ELITE_STEVEN, TrainerIsland_TrainerCity_Gym_Text_StevenIntro, TrainerIsland_TrainerCity_Gym_Text_StevenDefeated, Add4Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_Gym_TrytoResetVictories
	goto_if_eq VAR_RESULT, B_OUTCOME_WON,  TrainerIsland_TrainerCity_Gym_EventScript_AfterStevenBattle
	end
	
TrainerIsland_TrainerCity_Gym_EventScript_Steven_DefeatMasters:
	msgbox TrainerIsland_TrainerCity_Gym_Text_Steven_DefeatMasters, MSGBOX_DEFAULT
	releaseall
	end
	
TrainerIsland_TrainerCity_Gym_EventScript_Wallace_DefeatMasters:
	msgbox TrainerIsland_TrainerCity_Gym_Text_Wallace_DefeatMasters, MSGBOX_DEFAULT
	releaseall
	end

TrainerIsland_TrainerCity_Gym_EventScript_AfterWallaceBattle::
	setflag FLAG_UNUSED_0x4F7
	release
	end
	
TrainerIsland_TrainerCity_Gym_EventScript_AfterStevenBattle::
	setflag FLAG_UNUSED_0x4F8
	release
	end

TrainerIsland_TrainerCity_Gym_EventScript_RivalGreet1::
	lockall
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, TrainerIsland_TrainerCity_Gym_EventScript_RivalMay
	goto_if_eq VAR_RESULT, FEMALE, TrainerIsland_TrainerCity_Gym_EventScript_RivalBrendan
	end
	
TrainerIsland_TrainerCity_Gym_EventScript_RivalMay::
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_unset FLAG_UNUSED_0x4EC, TrainerIsland_TrainerCity_Gym_EventScript_RivalMay_DefeatGymMasters
	goto_if_unset FLAG_UNUSED_0x4ED, TrainerIsland_TrainerCity_Gym_EventScript_RivalMay_DefeatGymMasters
	goto_if_unset FLAG_UNUSED_0x4EE, TrainerIsland_TrainerCity_Gym_EventScript_RivalMay_DefeatGymMasters
	goto_if_unset FLAG_UNUSED_0x4EF, TrainerIsland_TrainerCity_Gym_EventScript_RivalMay_DefeatGymMasters
	goto_if_unset FLAG_UNUSED_0x4F0, TrainerIsland_TrainerCity_Gym_EventScript_RivalMay_DefeatGymMasters
	goto_if_unset FLAG_UNUSED_0x4F1, TrainerIsland_TrainerCity_Gym_EventScript_RivalMay_DefeatGymMasters
	goto_if_unset FLAG_UNUSED_0x4F2, TrainerIsland_TrainerCity_Gym_EventScript_RivalMay_DefeatGymMasters
	goto_if_unset FLAG_UNUSED_0x4F3, TrainerIsland_TrainerCity_Gym_EventScript_RivalMay_DefeatGymMasters
	goto_if_unset FLAG_UNUSED_0x4F4, TrainerIsland_TrainerCity_Gym_EventScript_RivalMay_DefeatGymMasters
	goto_if_unset FLAG_UNUSED_0x4F5, TrainerIsland_TrainerCity_Gym_EventScript_RivalMay_DefeatGymMasters
	goto_if_unset FLAG_UNUSED_0x4F6, TrainerIsland_TrainerCity_Gym_EventScript_RivalMay_DefeatGymMasters
	goto_if_unset FLAG_UNUSED_0x4F7, TrainerIsland_TrainerCity_Gym_EventScript_RivalMay_DefeatGymElites
	goto_if_unset FLAG_UNUSED_0x4F8, TrainerIsland_TrainerCity_Gym_EventScript_RivalMay_DefeatGymElites
	goto TrainerIsland_TrainerCity_Gym_EventScript_RivalMay_Battle
	end

TrainerIsland_TrainerCity_Gym_EventScript_RivalMay_DefeatGymMasters::
	msgbox TrainerIsland_TrainerCity_Gym_Text_May_DefeatGymMasters, MSGBOX_DEFAULT
	release
	end
TrainerIsland_TrainerCity_Gym_EventScript_RivalMay_DefeatGymElites::
	msgbox TrainerIsland_TrainerCity_Gym_Text_May_DefeatGymChampions, MSGBOX_DEFAULT
	release
	end

TrainerIsland_TrainerCity_Gym_EventScript_RivalMay_Battle::
	msgbox TrainerIsland_TrainerCity_Gym_Text_MayLetsBattle, MSGBOX_DEFAULT
	playbgm MUS_ENCOUNTER_MAY, TRUE
	switch VAR_STARTER_MON
	case 0, TrainerIsland_TrainerCity_Gym_EventScript_StartMayBattleSceptile
	case 1, TrainerIsland_TrainerCity_Gym_EventScript_StartMayBattleBlaziken
	case 2, TrainerIsland_TrainerCity_Gym_EventScript_StartMayBattleSwampert
	end

TrainerIsland_TrainerCity_Gym_EventScript_RivalBrendan::
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_unset FLAG_UNUSED_0x4EC, TrainerIsland_TrainerCity_Gym_EventScript_RivalBrendan_DefeatGymMasters
	goto_if_unset FLAG_UNUSED_0x4ED, TrainerIsland_TrainerCity_Gym_EventScript_RivalBrendan_DefeatGymMasters
	goto_if_unset FLAG_UNUSED_0x4EE, TrainerIsland_TrainerCity_Gym_EventScript_RivalBrendan_DefeatGymMasters
	goto_if_unset FLAG_UNUSED_0x4EF, TrainerIsland_TrainerCity_Gym_EventScript_RivalBrendan_DefeatGymMasters
	goto_if_unset FLAG_UNUSED_0x4F0, TrainerIsland_TrainerCity_Gym_EventScript_RivalBrendan_DefeatGymMasters
	goto_if_unset FLAG_UNUSED_0x4F1, TrainerIsland_TrainerCity_Gym_EventScript_RivalBrendan_DefeatGymMasters
	goto_if_unset FLAG_UNUSED_0x4F2, TrainerIsland_TrainerCity_Gym_EventScript_RivalBrendan_DefeatGymMasters
	goto_if_unset FLAG_UNUSED_0x4F3, TrainerIsland_TrainerCity_Gym_EventScript_RivalBrendan_DefeatGymMasters
	goto_if_unset FLAG_UNUSED_0x4F4, TrainerIsland_TrainerCity_Gym_EventScript_RivalBrendan_DefeatGymMasters
	goto_if_unset FLAG_UNUSED_0x4F5, TrainerIsland_TrainerCity_Gym_EventScript_RivalBrendan_DefeatGymMasters
	goto_if_unset FLAG_UNUSED_0x4F6, TrainerIsland_TrainerCity_Gym_EventScript_RivalBrendan_DefeatGymMasters
	goto_if_unset FLAG_UNUSED_0x4F7, TrainerIsland_TrainerCity_Gym_EventScript_RivalBrendan_DefeatGymElites
	goto_if_unset FLAG_UNUSED_0x4F8, TrainerIsland_TrainerCity_Gym_EventScript_RivalBrendan_DefeatGymElites
	goto TrainerIsland_TrainerCity_Gym_EventScript_RivalBrendan_Battle
	end

TrainerIsland_TrainerCity_Gym_EventScript_RivalBrendan_DefeatGymMasters::
	msgbox TrainerIsland_TrainerCity_Gym_Text_Brendan_DefeatGymMasters, MSGBOX_DEFAULT
	release
	end
	
TrainerIsland_TrainerCity_Gym_EventScript_RivalBrendan_DefeatGymElites::
	msgbox TrainerIsland_TrainerCity_Gym_Text_Brendan_DefeatGymChampions, MSGBOX_DEFAULT
	release
	end

TrainerIsland_TrainerCity_Gym_EventScript_RivalBrendan_Battle::
	msgbox TrainerIsland_TrainerCity_Gym_Text_BrendanLetsBattle, MSGBOX_DEFAULT
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	switch VAR_STARTER_MON
	case 0, TrainerIsland_TrainerCity_Gym_EventScript_StartBrendanBattleSceptile
	case 1, TrainerIsland_TrainerCity_Gym_EventScript_StartBrendanBattleBlaziken
	case 2, TrainerIsland_TrainerCity_Gym_EventScript_StartBrendanBattleSwampert
	end
	
TrainerIsland_TrainerCity_Gym_EventScript_StartMayBattleSceptile::
	cleartrainerflag TRAINER_CHAMPION_MAY_SCEPTILE
	trainerbattle_double_no_intro TRAINER_CHAMPION_MAY_SCEPTILE, TrainerIsland_TrainerCity_Gym_Text_MayDefeated, CommonEvent_Text_NeedTwoMons, Add5Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_Gym_TrytoResetVictories
	goto_if_eq VAR_RESULT, B_OUTCOME_WON,  TrainerIsland_TrainerCity_Gym_EventScript_AfterMayBattle
	end

TrainerIsland_TrainerCity_Gym_EventScript_StartMayBattleBlaziken::
	cleartrainerflag TRAINER_CHAMPION_MAY_BLAZIKEN
	trainerbattle_double_no_intro TRAINER_CHAMPION_MAY_BLAZIKEN, TrainerIsland_TrainerCity_Gym_Text_MayDefeated, CommonEvent_Text_NeedTwoMons, Add5Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_Gym_TrytoResetVictories
	goto_if_eq VAR_RESULT, B_OUTCOME_WON,  TrainerIsland_TrainerCity_Gym_EventScript_AfterMayBattle
	end

TrainerIsland_TrainerCity_Gym_EventScript_StartMayBattleSwampert::
	cleartrainerflag TRAINER_CHAMPION_MAY_SWAMPERT
	trainerbattle_double_no_intro TRAINER_CHAMPION_MAY_SWAMPERT, TrainerIsland_TrainerCity_Gym_Text_MayDefeated, CommonEvent_Text_NeedTwoMons, Add5Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_Gym_TrytoResetVictories
	goto_if_eq VAR_RESULT, B_OUTCOME_WON,  TrainerIsland_TrainerCity_Gym_EventScript_AfterMayBattle
	end

TrainerIsland_TrainerCity_Gym_EventScript_StartBrendanBattleSceptile::
	cleartrainerflag TRAINER_CHAMPION_BRENDAN_SCEPTILE
	trainerbattle_double_no_intro TRAINER_CHAMPION_BRENDAN_SCEPTILE, TrainerIsland_TrainerCity_Gym_Text_BrendanDefeated, CommonEvent_Text_NeedTwoMons, Add5Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_Gym_TrytoResetVictories
	goto_if_eq VAR_RESULT, B_OUTCOME_WON,  TrainerIsland_TrainerCity_Gym_EventScript_AfterBrendanBattle
	end

TrainerIsland_TrainerCity_Gym_EventScript_StartBrendanBattleBlaziken::
	cleartrainerflag TRAINER_CHAMPION_BRENDAN_BLAZIKEN
	trainerbattle_double_no_intro TRAINER_CHAMPION_BRENDAN_BLAZIKEN, TrainerIsland_TrainerCity_Gym_Text_BrendanDefeated, CommonEvent_Text_NeedTwoMons, Add5Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_Gym_TrytoResetVictories
	goto_if_eq VAR_RESULT, B_OUTCOME_WON,  TrainerIsland_TrainerCity_Gym_EventScript_AfterBrendanBattle
	end

TrainerIsland_TrainerCity_Gym_EventScript_StartBrendanBattleSwampert::
	cleartrainerflag TRAINER_CHAMPION_BRENDAN_SWAMPERT
	trainerbattle_double_no_intro TRAINER_CHAMPION_BRENDAN_SWAMPERT, TrainerIsland_TrainerCity_Gym_Text_BrendanDefeated, CommonEvent_Text_NeedTwoMons, Add5Points
	specialvar VAR_RESULT, GetBattleOutcome
	call_if_eq VAR_RESULT, B_OUTCOME_LOST, TrainerIsland_TrainerCity_Gym_TrytoResetVictories
	goto_if_eq VAR_RESULT, B_OUTCOME_WON,  TrainerIsland_TrainerCity_Gym_EventScript_AfterBrendanBattle
	end

TrainerIsland_TrainerCity_Gym_EventScript_AfterMayBattle::
	message TrainerIsland_TrainerCity_Gym_Text_RecievedChampionRibbon
	waitmessage
	playbgm MUS_VICTORY_LEAGUE, FALSE
	msgbox TrainerIsland_TrainerCity_Gym_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_RIVAL
	setflag FLAG_CHAMPIONRIBBON_GET
	goto TrainerIsland_TrainerCity_Gym_EventScript_GiveTM151
	end
	
	
TrainerIsland_TrainerCity_Gym_EventScript_AfterBrendanBattle::
	message TrainerIsland_TrainerCity_Gym_Text_RecievedChampionRibbon
	waitmessage
	playbgm MUS_VICTORY_LEAGUE, FALSE
	msgbox TrainerIsland_TrainerCity_Gym_ChampionsInsigniaInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_RIVAL
	setflag FLAG_CHAMPIONRIBBON_GET
	goto TrainerIsland_TrainerCity_Gym_EventScript_GiveGodlyPower
	end
	
TrainerIsland_TrainerCity_Gym_EventScript_GiveGodlyPower::
	giveitem ITEM_TM151
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_UNUSED_0x0E9
	msgbox TrainerIsland_TrainerCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
	msgbox TrainerIsland_TrainerCity_Gym_Text_ComeBackAnytime, MSGBOX_DEFAULT
	release
	end

TrainerIsland_TrainerCity_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, TrainerIsland_TrainerCity_Gym_EventScript_GymGuidePostVictory
	msgbox TrainerIsland_TrainerCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

TrainerIsland_TrainerCity_Gym_EventScript_GymGuidePostVictory::
	msgbox TrainerIsland_TrainerCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

TrainerIsland_TrainerCity_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_UNUSED_0x4FF, TrainerIsland_TrainerCity_Gym_EventScript_GymStatueCertified
	goto TrainerIsland_TrainerCity_Gym_EventScript_GymStatue
	end

TrainerIsland_TrainerCity_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_UNUSED_0x4FF, TrainerIsland_TrainerCity_Gym_EventScript_GymStatueCertified
	goto TrainerIsland_TrainerCity_Gym_EventScript_GymStatue
	end

TrainerIsland_TrainerCity_Gym_EventScript_GymStatueCertified::
	msgbox TrainerIsland_TrainerCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

TrainerIsland_TrainerCity_Gym_EventScript_GymStatue::
	msgbox TrainerIsland_TrainerCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end
	
TrainerIsland_TrainerCity_Gym_TrytoResetVictories:
	call_if_eq VAR_UNUSED_0x40FF, 17, TrainerIsland_TrainerCity_Gym_ResetVictories
	return
	end

TrainerIsland_TrainerCity_Gym_ResetVictories:
	setvar VAR_UNUSED_0x40FF, 0
	clearflag FLAG_UNUSED_0x2B9
	return
	end
	
TrainerIsland_TrainerCity_Gym_Text_SidneyIntro:
	.string "Let's see who's stronger!$"

TrainerIsland_TrainerCity_Gym_Text_SidneyDefeat:
	.string "You've prevailed over me!$"



TrainerIsland_TrainerCity_Gym_Text_PhoebeIntro:
	.string "Kid gloves are off!$"

TrainerIsland_TrainerCity_Gym_Text_PhoebeDefeat:
	.string "Good Game!$"



TrainerIsland_TrainerCity_Gym_Text_GlaciaIntro:
	.string "Try to keep up!$"

TrainerIsland_TrainerCity_Gym_Text_GlaciaDefeat:
	.string "Not bad!$"



TrainerIsland_TrainerCity_Gym_Text_DrakeIntro:
	.string "No holds back!$"

TrainerIsland_TrainerCity_Gym_Text_DrakeDefeat:
	.string "Outstanding!$"
	
	
	
TrainerIsland_TrainerCity_Gym_Text_LucyIntro:
	.string "Thank you in advanced.$"

TrainerIsland_TrainerCity_Gym_Text_LucyDefeat:
	.string "Oh drat, I lost.$"



TrainerIsland_TrainerCity_Gym_Text_BrandonIntro:
	.string "Lets make this a good battle!$"

TrainerIsland_TrainerCity_Gym_Text_BrandonDefeat:
	.string "That was a good battle!$"




TrainerIsland_TrainerCity_Gym_Text_TuckerIntro:
	.string "Alright! Time to get my game on!$"

TrainerIsland_TrainerCity_Gym_Text_TuckerDefeat:
	.string "That was a sweet battle!$"
	


TrainerIsland_TrainerCity_Gym_Text_SpenserIntro:
	.string "Respect your elders! Respect them!$"

TrainerIsland_TrainerCity_Gym_Text_SpenserDefeat:
	.string "You have my respect!$"
	
	

TrainerIsland_TrainerCity_Gym_Text_NolandIntro:
	.string "I'm all fired up! Let's do this!$"

TrainerIsland_TrainerCity_Gym_Text_NolandDefeat:
	.string "You've extinguished me!$"
	
	

TrainerIsland_TrainerCity_Gym_Text_GretaIntro:
	.string "Let's give it all we've got!$"

TrainerIsland_TrainerCity_Gym_Text_GretaDefeat:
	.string "I gave it all I had…$"



TrainerIsland_TrainerCity_Gym_Text_AnabelIntro:
	.string "Nothing can stop me now!$"

TrainerIsland_TrainerCity_Gym_Text_AnabelDefeat:
	.string "You've stopped me in my tracks!$"


TrainerIsland_TrainerCity_Gym_Text_StevenIntro:
	.string "I'm ready when you are!$"

TrainerIsland_TrainerCity_Gym_Text_StevenDefeat:
	.string "Though you were ready a long\n"
	.string "time ago…$"



TrainerIsland_TrainerCity_Gym_Text_WallaceIntro:
	.string "Wallace: This should be swift!$"

TrainerIsland_TrainerCity_Gym_Text_WallaceDefeat:
	.string "Though you were swifter than\n"
	.string "me…$"
	
TrainerIsland_TrainerCity_Gym_Text_Steven_DefeatMasters:
	.string "STEVEN: You need to defeat half of\n"
	.string "the masters in this room before\l"
	.string "you can challenge me.$"

	
TrainerIsland_TrainerCity_Gym_Text_Wallace_DefeatMasters:
	.string "WALLACE: You need to defeat half of\n"
	.string "the masters in this room before\l"
	.string "you can challenge me.$"

TrainerIsland_TrainerCity_Gym_Text_May_DefeatGymMasters:
	.string "MAY: You need to defeat all the\n"
	.string "masters and the two champions\l"
	.string "in this room before you\l"
	.string "can challenge me.$"

TrainerIsland_TrainerCity_Gym_Text_May_DefeatGymChampions:
	.string "MAY: Though you defeated all the\n"
	.string "masters, you still need to defeat\l"
	.string "both champions before you can\l"
	.string "challenge me.$"
	
TrainerIsland_TrainerCity_Gym_Text_MayLetsBattle:
	.string "MAY: Congradulations, {PLAYER}{KUN},\n"
	.string "you made it this far!\p"
	.string "I applaud you for your efforts and\n"
	.string "feats, but this is where it stops.\p"
	.string "You know the drill: Lose once, and\n"
	.string "you'll lose all your medals.\p"
	.string "Prepare yourself, {PLAYER}{KUN},\n"
	.string "this is your final challenge!!!$"

TrainerIsland_TrainerCity_Gym_Text_Brendan_DefeatGymMasters:
	.string "BRENDAN: You need to defeat all the\n"
	.string "masters and the two champions\l"
	.string "in this room before you\l"
	.string "can challenge me.$"

TrainerIsland_TrainerCity_Gym_Text_Brendan_DefeatGymChampions:
	.string "BRENDAN: Though you defeated all the\n"
	.string "masters, you still need to defeat\l"
	.string "both champions before you can\l"
	.string "challenge me.$"
	
TrainerIsland_TrainerCity_Gym_Text_BrendanLetsBattle:
	.string "BRENDAN: Congradulations,\n"
	.string "{PLAYER}{KUN}, you made it this far!\p"
	.string "I applaud you for your efforts and\n"
	.string "feats, but this is where it all ends.\p"
	.string "You know the drill: Lose once, and\n"
	.string "you'll lose all your medals.\p"
	.string "Prepare yourself, {PLAYER}{KUN},\n"
	.string "this is your final battle!!!$"

TrainerIsland_TrainerCity_Gym_Text_BrendanDefeated:
	.string "BRENDAN: {PLAYER}{KUN}, you've done\n"
	.string "it! You've won!\p"
	.string "The glory, the splendor, the\n"
	.string "magnificence!\p"
	.string "I must award you for your victory,\n"
	.string "I insist!$"

TrainerIsland_TrainerCity_Gym_Text_RecievedChampionRibbon:
	.string "{PLAYER} received the CHAMPION'S\n"
	.string "INSIGNIA.$"

TrainerIsland_TrainerCity_Gym_ChampionsInsigniaInfoTakeThis:
	.string "The CHAMPION'S INSIGNIA proves your\n"
	.string "prowless as a Master Trainer.\p"
	.string "People in the outside world will see\n"
	.string "this and know your mettle!\p"
	.string "Please take this with you, too.$"

TrainerIsland_TrainerCity_Gym_Text_ExplainGodlyPower:
	.string "That's TM151, containing\n"
	.string "GODLY POWER.\p"
	.string "It's a relatively new move that only\n"
	.string "a specific pokemon can learn.$"

TrainerIsland_TrainerCity_Gym_Text_ComeBackAnytime:
	.string "To think you started from humble\n"
	.string "beginnings to be where you are today…\p"
	.string "I'm truely astounded that you have\n"
	.string "bested me and the rest of the world…\p"
	.string "…\p"
	.string "…\p"
	.string "…\p"
	.string "Come back anytime, I'll be waiting!$"
	
TrainerIsland_TrainerCity_Gym_Text_GymGuideAdvice:
	.string "Yo, how's it going?\p"
	.string "You're almost at the top! Just\n"
	.string "a little more…!\p"
	.string "I'm rooting for you!$"	

TrainerIsland_TrainerCity_Gym_Text_GymGuidePostVictory:
	.string "Incredible! Outstanding! You've made\n"
	.string "it to the top!\p"
	.string "What more can I say?! I'm speechless!$"

TrainerIsland_TrainerCity_Gym_GymStatue:
	.string "TRAINER CITY NXTOURNAMENT$"

TrainerIsland_TrainerCity_Gym_GymStatueCertified:
	.string "TRAINER CITY NXTOURNAMENT\p"
	.string "CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"
