.set LOCALID_GABBY, 3
.set LOCALID_TY, 4

TrainerIsland_Area9_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerIsland_Area9_OnTransition
	.byte 0
	
TrainerIsland_Area9_OnTransition:
	cleartrainerflag TRAINER_MASTER_MAI
	cleartrainerflag TRAINER_MASTER_DUKE
	end
	
TrainerIsle_Area9_EventScript_Mai::
	cleartrainerflag TRAINER_MASTER_MAI
	trainerbattle_double TRAINER_MASTER_MAI, TrainerIsland_Area9_Text_MaiIntro, TrainerIsland_Area9_Text_MaiDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area9_Text_MaiPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsle_Area9_EventScript_Duke::
	cleartrainerflag TRAINER_MASTER_DUKE
	trainerbattle_double TRAINER_MASTER_DUKE, TrainerIsland_Area9_Text_DukeIntro, TrainerIsland_Area9_Text_DukeDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area9_Text_DukePostBattle, MSGBOX_AUTOCLOSE
	end
	
TrainerIsle_Area9_EventScript_Noland::
	cleartrainerflag TRAINER_MASTER_NOLAND
	trainerbattle_double TRAINER_MASTER_NOLAND, TrainerIsland_Area9_Text_NolandIntro, TrainerIsland_Area9_Text_NolandDefeat, CommonEvent_Text_NeedTwoMons, Add3Points
	msgbox TrainerIsland_Area9_Text_NolandPostBattle, MSGBOX_AUTOCLOSE
	end
	
TrainerIsle_Area9_EventScript_GabbyAndTy_Ty::
	cleartrainerflag TRAINER_MASTER_GABBYANDTY
	trainerbattle_double TRAINER_MASTER_GABBYANDTY, TrainerIsland_Area9_Text_GabbyAndTy_TyIntro, TrainerIsland_Area9_Text_GabbyAndTyDefeat, GabbyAndTy_Text_TyNotEnoughMons, GabbyAndTy_EventScript_RequestInterview
	msgbox GabbyAndTy_Text_TyPostBattle, MSGBOX_DEFAULT
	end
	
TrainerIsle_Area9_EventScript_GabbyAndTy_Gabby::
	cleartrainerflag TRAINER_MASTER_GABBYANDTY
	trainerbattle_double TRAINER_MASTER_GABBYANDTY, TrainerIsland_Area9_Text_GabbyAndTy_GabbyIntro, TrainerIsland_Area9_Text_GabbyAndTyDefeat, GabbyAndTy_Text_TyNotEnoughMons, GabbyAndTy_EventScript_RequestInterview2
	msgbox GabbyAndTy_Text_KeepingAnEyeOutForYou, MSGBOX_DEFAULT
	end

GabbyAndTy_EventScript_RequestInterview2::
	special GabbyAndTyBeforeInterview
	special GetGabbyAndTyLocalIds
	call_if_eq VAR_FACING, DIR_NORTH, GabbyAndTy_EventScript_FacePlayerNorth2
	call_if_eq VAR_FACING, DIR_SOUTH, GabbyAndTy_EventScript_FacePlayerSouth2
	call_if_eq VAR_FACING, DIR_EAST, GabbyAndTy_EventScript_FacePlayerEast2
	goto_if_set FLAG_TEMP_1, GabbyAndTy_EventScript_KeepingAnEyeOutForYou2
	specialvar VAR_RESULT, GabbyAndTyGetLastQuote
	goto_if_eq VAR_RESULT, 0, GabbyAndTy_EventScript_DidntInterviewLastTime2
	msgbox GabbyAndTy_Text_QuoteFromLastInterview, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GabbyAndTyGetLastBattleTrivia
	switch VAR_RESULT
	case 0, GabbyAndTy_EventScript_RequestInterviewNoTrivia2
	case 1, GabbyAndTy_EventScript_RequestInterviewShortBattle2
	case 2, GabbyAndTy_EventScript_RequestInterviewThrewBall2
	case 3, GabbyAndTy_EventScript_RequestInterviewUsedItems2
	case 4, GabbyAndTy_EventScript_RequestInterviewLostAMon2
	end
	
GabbyAndTy_EventScript_FacePlayerNorth2::
	applymovement LOCALID_GABBY, GabbyAndTy_Movement_WalkInPlaceDown2
	applymovement LOCALID_TY, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

GabbyAndTy_EventScript_FacePlayerSouth2::
	applymovement LOCALID_GABBY, GabbyAndTy_Movement_WalkInPlaceUp2
	applymovement LOCALID_TY, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

GabbyAndTy_EventScript_FacePlayerEast2::
	applymovement LOCALID_GABBY, GabbyAndTy_Movement_WalkInPlaceLeft2
	applymovement LOCALID_TY, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

GabbyAndTy_Movement_WalkInPlaceDown2:
	walk_in_place_down
	step_end

GabbyAndTy_Movement_WalkInPlaceUp2:
	walk_in_place_up
	step_end

GabbyAndTy_Movement_WalkInPlaceLeft2:
	walk_in_place_left
	step_end
	
GabbyAndTy_EventScript_DidntInterviewLastTime2::
	msgbox GabbyAndTy_Text_GiveUsAnInterviewThisTime, MSGBOX_YESNO
	goto GabbyAndTy_EventScript_Interview2
	end

GabbyAndTy_EventScript_RequestInterviewNoTrivia2::
	msgbox GabbyAndTy_Text_InterviewAgain, MSGBOX_YESNO
	goto GabbyAndTy_EventScript_Interview2
	end

GabbyAndTy_EventScript_RequestInterviewShortBattle2::
	msgbox GabbyAndTy_Text_YouStompedUsInterviewAgain, MSGBOX_YESNO
	goto GabbyAndTy_EventScript_Interview2
	end

GabbyAndTy_EventScript_RequestInterviewThrewBall2::
	msgbox GabbyAndTy_Text_YouThrewABallAtUsInterviewAgain, MSGBOX_YESNO
	goto GabbyAndTy_EventScript_Interview2
	end

GabbyAndTy_EventScript_RequestInterviewUsedItems2::
	msgbox GabbyAndTy_Text_CleverItemSkillsInterviewAgain, MSGBOX_YESNO
	goto GabbyAndTy_EventScript_Interview2
	end

GabbyAndTy_EventScript_RequestInterviewLostAMon2::
	msgbox GabbyAndTy_Text_WeLookedRespectableInterviewAgain, MSGBOX_YESNO
	goto GabbyAndTy_EventScript_Interview2
	end

GabbyAndTy_EventScript_Interview2::
	goto_if_eq VAR_RESULT, NO, GabbyAndTy_EventScript_DontGiveUpKeepingEyeOut2
	msgbox GabbyAndTy_Text_DescribeYourFeelings, MSGBOX_DEFAULT
	setvar VAR_0x8004, EASY_CHAT_TYPE_GABBY_AND_TY
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_RESULT, 0, GabbyAndTy_EventScript_DontGiveUpKeepingEyeOut2
	msgbox GabbyAndTy_Text_PerfectWellBeSeeingYou, MSGBOX_DEFAULT
	special GabbyAndTyAfterInterview
	setflag FLAG_TEMP_1
	release
	end

GabbyAndTy_EventScript_DontGiveUpKeepingEyeOut2::
	msgbox GabbyAndTy_Text_DontGiveUpKeepingEyeOut, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	release
	end

GabbyAndTy_EventScript_KeepingAnEyeOutForYou2::
	msgbox GabbyAndTy_Text_KeepingAnEyeOutForYou, MSGBOX_DEFAULT
	release
	end


TrainerIsland_Area9_Text_MaiIntro:
	.string "I'm practicing for a triathlon\n"
	.string "but I can take a quick break\l"
	.string "for now.$"
	
TrainerIsland_Area9_Text_MaiDefeat:
	.string "I'm all tuckered out!$"
	
TrainerIsland_Area9_Text_MaiPostBattle:
	.string "I'll resume my training\n"
	.string "tommorrow.$"




TrainerIsland_Area9_Text_DukeIntro:
	.string "I'm running an Iron Man\n"
	.string "athlete. You should join me!$"
	
TrainerIsland_Area9_Text_DukeDefeat:
	.string "You outperformed me!$"
	
TrainerIsland_Area9_Text_DukePostBattle:
	.string "I guess your not really\n"
	.string "interested.$"
	


	
TrainerIsland_Area9_Text_NolandIntro:
	.string "I hope your ready for an\n"
	.string "intense battle!$"
	
TrainerIsland_Area9_Text_NolandDefeat:
	.string "You did well!$"
	
TrainerIsland_Area9_Text_NolandPostBattle:
	.string "A steller performance!$"



TrainerIsland_Area9_Text_GabbyAndTy_GabbyIntro:
	.string "Oh! It's that trainer from\n"
	.string "before! Ty, roll film!$"

TrainerIsland_Area9_Text_GabbyAndTy_TyIntro:
	.string "Camera Rolling! Commence battle!$"

	
TrainerIsland_Area9_Text_GabbyAndTyDefeat:
	.string "Did you get all that on tape!?$"

