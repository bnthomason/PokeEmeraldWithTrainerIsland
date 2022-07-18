.set LOCALID_VICTOR, 1
.set LOCALID_VICTORIA, 2
.set LOCALID_VIVI, 3
.set LOCALID_VICKY, 4
.set LOCALID_VITO, 5
.set LOCALID_VIVIAN, 6


TrainerIsland_Area9_House_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerIsland_Area9_House_OnFrame
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerIsland_Area9_House_OnTranstition
	.byte 0

TrainerIsland_Area9_House_OnFrame:
	map_script_2 VAR_UNUSED_0x408B, 0, TrainerIsland_Area9_House_EventScript_SetVar
	.2byte 0

TrainerIsland_Area9_House_OnTranstition:	
	cleartrainerflag TRAINER_MASTER_VIVIAN
	cleartrainerflag TRAINER_MASTER_VIVI
	cleartrainerflag TRAINER_MASTER_VICKY
	cleartrainerflag TRAINER_MASTER_VITO
	cleartrainerflag TRAINER_MASTER_VICTOR
	cleartrainerflag TRAINER_MASTER_VICTORIA
	.2byte 0

TrainerIsland_Area9_House_EventScript_SetVar::
	setvar VAR_UNUSED_0x408B, 1
	end

TrainerIsland_Area9_House_EventScript_WinstrateFamilyBattle1::
	applymovement LOCALID_VIVIAN, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_VIVIAN, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_VIVIAN, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_VIVIAN, TrainerIsland_Area9_House_Movement_VivianApproachRightSide
	waitmovement 0
	trainerbattle_double TRAINER_MASTER_VIVIAN, TrainerIsland_Area9_House_Text_VivianIntro, TrainerIsland_Area9_House_Text_VivianDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	applymovement LOCALID_VIVIAN, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox TrainerIsland_Area9_House_Text_VivianPostBattle, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_VIVIAN, TrainerIsland_Area9_House_Movement_VivianSitDownRightSide
	waitmovement 0
	applymovement LOCALID_VICTOR, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_VICTOR, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_VICTOR, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_VICTOR, TrainerIsland_Area9_House_Movement_VictorApproachRightSide
	waitmovement 0
	trainerbattle_double TRAINER_MASTER_VICTOR, TrainerIsland_Area9_House_Text_VictorIntro, TrainerIsland_Area9_House_Text_VictorDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	applymovement LOCALID_VICTOR, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0	
	msgbox TrainerIsland_Area9_House_Text_VictorPostBattle, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_VICTOR, TrainerIsland_Area9_House_Movement_VictorSitDownRightSide
	waitmovement 0
	applymovement LOCALID_VICTORIA, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_VICTORIA, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_VICTORIA, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_VICTORIA, TrainerIsland_Area9_House_Movement_VictoriaApproachRightSide
	waitmovement 0
	trainerbattle_double TRAINER_MASTER_VICTORIA, TrainerIsland_Area9_House_Text_VictoriaIntro, TrainerIsland_Area9_House_Text_VictoriaDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	applymovement LOCALID_VICTORIA, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0	
	msgbox TrainerIsland_Area9_House_Text_VictoriaPostBattle, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_VICTORIA, TrainerIsland_Area9_House_Movement_VictoriaSitDownRightSide
	waitmovement 0
	applymovement LOCALID_VIVI, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_VIVI, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_VIVI, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_VIVI, TrainerIsland_Area9_House_Movement_ViviApproachRightSide
	waitmovement 0
	trainerbattle_double TRAINER_MASTER_VIVI, TrainerIsland_Area9_House_Text_ViviIntro, TrainerIsland_Area9_House_Text_ViviDefeat, Add1Points
	msgbox TrainerIsland_Area9_House_Text_ViviPostBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, TrainerIsland_Area9_House_EventScript_ViviCries
	goto_if_eq VAR_RESULT, NO, TrainerIsland_Area9_House_EventScript_ViviWantstoCry
	closemessage
	applymovement LOCALID_VIVI, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	applymovement LOCALID_VIVI, TrainerIsland_Area9_House_Movement_ViviSitDownRightSide
	waitmovement 0
	applymovement LOCALID_VICKY, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_VICKY, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_VICKY, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_VICKY, TrainerIsland_Area9_House_Movement_VickyApproachRightSide
	waitmovement 0
	trainerbattle_double TRAINER_MASTER_VICKY, TrainerIsland_Area9_House_Text_VickyIntro, TrainerIsland_Area9_House_Text_VickyDefeat, Add1Points
	applymovement LOCALID_VICKY, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0	
	msgbox TrainerIsland_Area9_House_Text_VickyPostBattle, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_VITO, TrainerIsland_Area9_House_Movement_VickySitDownRightSide
	waitmovement 0
	applymovement LOCALID_VITO, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_VITO, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_VITO, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_VITO, TrainerIsland_Area9_House_Movement_VitoApproachRightSide
	waitmovement 0
	trainerbattle_double TRAINER_MASTER_VITO, TrainerIsland_Area9_House_Text_VitoIntro, TrainerIsland_Area9_House_Text_VitoDefeat, TrainerIsland_Area9_House_VitoDefeated
	applymovement LOCALID_VITO, Common_Movement_WalkInPlaceRight
	waitmovement 0	
	msgbox TrainerIsland_Area9_House_Text_VitoPostBattle2, MSGBOX_DEFAULT	
	closemessage
	applymovement LOCALID_VITO, TrainerIsland_Area9_House_Movement_VitoGoStandRightSide
	waitmovement 0
	end

TrainerIsland_Area9_House_EventScript_WinstrateFamilyBattle2::
	applymovement LOCALID_VIVIAN, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_VIVIAN, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_VIVIAN, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_VIVIAN, TrainerIsland_Area9_House_Movement_VivianApproachLeftSide
	waitmovement 0
	trainerbattle_double TRAINER_MASTER_VIVIAN, TrainerIsland_Area9_House_Text_VivianIntro, TrainerIsland_Area9_House_Text_VivianDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	applymovement LOCALID_VIVIAN, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox TrainerIsland_Area9_House_Text_VivianPostBattle, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_VIVIAN, TrainerIsland_Area9_House_Movement_VivianSitDownLeftSide
	waitmovement 0
	applymovement LOCALID_VICTOR, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_VICTOR, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_VICTOR, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_VICTOR, TrainerIsland_Area9_House_Movement_VictorApproachLeftSide
	waitmovement 0
	trainerbattle_double TRAINER_MASTER_VICTOR, TrainerIsland_Area9_House_Text_VictorIntro, TrainerIsland_Area9_House_Text_VictorDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	applymovement LOCALID_VICTOR, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0	
	msgbox TrainerIsland_Area9_House_Text_VictorPostBattle, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_VICTOR, TrainerIsland_Area9_House_Movement_VictorSitDownLeftSide
	waitmovement 0
	applymovement LOCALID_VICTORIA, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_VICTORIA, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_VICTORIA, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_VICTORIA, TrainerIsland_Area9_House_Movement_VictoriaApproachLeftSide
	waitmovement 0
	trainerbattle_double TRAINER_MASTER_VICTORIA, TrainerIsland_Area9_House_Text_VictoriaIntro, TrainerIsland_Area9_House_Text_VictoriaDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	applymovement LOCALID_VICTORIA, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0	
	msgbox TrainerIsland_Area9_House_Text_VictoriaPostBattle, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_VICTORIA, TrainerIsland_Area9_House_Movement_VictoriaSitDownLeftSide
	waitmovement 0
	applymovement LOCALID_VIVI, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_VIVI, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_VIVI, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_VIVI, TrainerIsland_Area9_House_Movement_ViviApproachLeftSide
	waitmovement 0
	trainerbattle_double TRAINER_MASTER_VIVI, TrainerIsland_Area9_House_Text_ViviIntro, TrainerIsland_Area9_House_Text_ViviDefeat, Add1Points
	msgbox TrainerIsland_Area9_House_Text_ViviPostBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, TrainerIsland_Area9_House_EventScript_ViviCries
	goto_if_eq VAR_RESULT, NO, TrainerIsland_Area9_House_EventScript_ViviWantstoCry
	closemessage
	applymovement LOCALID_VIVI, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	applymovement LOCALID_VIVI, TrainerIsland_Area9_House_Movement_ViviSitDownLeftSide
	waitmovement 0
	applymovement LOCALID_VICKY, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_VICKY, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_VICKY, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_VICKY, TrainerIsland_Area9_House_Movement_VickyApproachLeftSide
	waitmovement 0
	trainerbattle_double TRAINER_MASTER_VICKY, TrainerIsland_Area9_House_Text_VickyIntro, TrainerIsland_Area9_House_Text_VickyDefeat, Add1Points
	applymovement LOCALID_VICKY, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0	
	msgbox TrainerIsland_Area9_House_Text_VickyPostBattle, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_VITO, TrainerIsland_Area9_House_Movement_VickySitDownLeftSide
	waitmovement 0
	applymovement LOCALID_VITO, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_VITO, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_VITO, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_VITO, TrainerIsland_Area9_House_Movement_VitoApproachLeftSide
	waitmovement 0
	trainerbattle_double TRAINER_MASTER_VITO, TrainerIsland_Area9_House_Text_VitoIntro, TrainerIsland_Area9_House_Text_VitoDefeat, TrainerIsland_Area9_House_VitoDefeated
	applymovement LOCALID_VITO, Common_Movement_WalkInPlaceRight
	waitmovement 0	
	msgbox TrainerIsland_Area9_House_Text_VitoPostBattle2, MSGBOX_DEFAULT	
	closemessage
	applymovement LOCALID_VITO, TrainerIsland_Area9_House_Movement_VitoGoStandLeftSide
	waitmovement 0
	end


TrainerIsland_Area9_House_VitoDefeated:
	call Add2Points2
	setvar VAR_UNUSED_0x408B, 2
	call TrainerIsland_Area9_House_EventScript_GiveDragonBall
	return
	end


Add2Points2:
	AddPoints 2
	buffernumberstring STR_VAR_1, 2
	message gText_PlayerGotPoints
	return
	end

TrainerIsland_Area9_House_EventScript_GiveDragonBall::
	giveitem ITEM_DRAGON_BALL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_UNUSED_0x068
	return
	end

TrainerIsland_Area9_House_EventScript_ViviCries:
	msgbox TrainerIsland_Area9_House_Text_ViviCriesYes, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area9_House_EventScript_ViviWantstoCry:
	msgbox TrainerIsland_Area9_House_Text_ViviCriesNo, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area9_House_EventScript_Victor::
	trainerbattle_double TRAINER_MASTER_VICTOR, TrainerIsland_Area9_House_Text_VictorIntro2, TrainerIsland_Area9_House_Text_VictorDefeat2, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area9_House_Text_VictorPostBattle, MSGBOX_AUTOCLOSE
	applymovement LOCALID_VICTOR, Common_Movement_FaceRight
	end
	
TrainerIsland_Area9_House_EventScript_Victoria::
	trainerbattle_double TRAINER_MASTER_VICTORIA, TrainerIsland_Area9_House_Text_VictoriaIntro2, TrainerIsland_Area9_House_Text_VictoriaDefeat2, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area9_House_Text_VictoriaPostBattle, MSGBOX_AUTOCLOSE
	applymovement LOCALID_VICTORIA, Common_Movement_FaceLeft
	end

TrainerIsland_Area9_House_EventScript_Vicky::
	trainerbattle_double TRAINER_MASTER_VICKY, TrainerIsland_Area9_House_Text_VickyIntro2, TrainerIsland_Area9_House_Text_VickyDefeat2, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area9_House_Text_VickyPostBattle, MSGBOX_AUTOCLOSE
	applymovement LOCALID_VICKY, Common_Movement_FaceRight
	end
	
TrainerIsland_Area9_House_EventScript_Vivi::	
	trainerbattle_double TRAINER_MASTER_VIVI, TrainerIsland_Area9_House_Text_ViviIntro2, TrainerIsland_Area9_House_Text_ViviDefeat2, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area9_House_Text_ViviPostBattle2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, TrainerIsland_Area9_House_Text_ViviCriesYes
	goto_if_eq VAR_RESULT, NO, TrainerIsland_Area9_House_Text_ViviCriesNo
	applymovement LOCALID_VIVI, Common_Movement_FaceLeft
	release
	end	

TrainerIsland_Area9_House_EventScript_Vito::
	trainerbattle_double TRAINER_MASTER_VITO, TrainerIsland_Area9_House_Text_VitoIntro2, TrainerIsland_Area9_House_Text_VitoDefeat2, CommonEvent_Text_NeedTwoMons, Add1Points
	call_if_unset FLAG_UNUSED_0x068, TrainerIsland_Area9_House_EventScript_GiveDragonBall
	msgbox TrainerIsland_Area9_House_Text_VitoPostBattle3, MSGBOX_AUTOCLOSE
	applymovement LOCALID_VITO, Common_Movement_FaceDown
	release
	end

TrainerIsland_Area9_House_EventScript_Vivian::
	trainerbattle_double TRAINER_MASTER_VIVIAN, TrainerIsland_Area9_House_Text_VivianIntro2, TrainerIsland_Area9_House_Text_VivianDefeat2, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area9_House_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
	applymovement LOCALID_VIVIAN, Common_Movement_FaceLeft
	release
	end
	
TrainerIsland_Area9_House_Movement_VivianApproachRightSide:
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_in_place_down
	step_end

TrainerIsland_Area9_House_Movement_VivianSitDownRightSide:
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_right
	walk_faster_right
	walk_faster_right
	face_left
	step_end

TrainerIsland_Area9_House_Movement_VictorApproachRightSide:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	face_down
	walk_in_place_down
	step_end

TrainerIsland_Area9_House_Movement_VictorSitDownRightSide:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_right
	step_end

TrainerIsland_Area9_House_Movement_VictoriaApproachRightSide:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_in_place_down
	step_end

TrainerIsland_Area9_House_Movement_VictoriaSitDownRightSide:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_down
	face_left
	step_end

TrainerIsland_Area9_House_Movement_ViviApproachRightSide:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	walk_in_place_down
	step_end

TrainerIsland_Area9_House_Movement_ViviSitDownRightSide:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_up
	face_left
	step_end

TrainerIsland_Area9_House_Movement_VickyApproachRightSide:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_in_place_down
	step_end

TrainerIsland_Area9_House_Movement_VickySitDownRightSide:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	face_right
	step_end
	
TrainerIsland_Area9_House_Movement_VitoApproachRightSide:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_in_place_down
	step_end

TrainerIsland_Area9_House_Movement_VitoGoStandRightSide:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	face_down
	step_end
	

TrainerIsland_Area9_House_Movement_VivianApproachLeftSide:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_in_place_down
	step_end

TrainerIsland_Area9_House_Movement_VivianSitDownLeftSide:
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	face_left
	step_end

TrainerIsland_Area9_House_Movement_VictorApproachLeftSide:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	face_down
	walk_in_place_down
	step_end

TrainerIsland_Area9_House_Movement_VictorSitDownLeftSide:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_right
	step_end

TrainerIsland_Area9_House_Movement_VictoriaApproachLeftSide:
	walk_up
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_in_place_down
	step_end

TrainerIsland_Area9_House_Movement_VictoriaSitDownLeftSide:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_down
	face_left
	step_end

TrainerIsland_Area9_House_Movement_ViviApproachLeftSide:
	walk_down
	walk_right
	walk_right
	walk_down
	walk_in_place_down
	step_end

TrainerIsland_Area9_House_Movement_ViviSitDownLeftSide:
	walk_up
	walk_left
	walk_left
	walk_up
	face_left
	step_end

TrainerIsland_Area9_House_Movement_VickyApproachLeftSide:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_in_place_down
	step_end

TrainerIsland_Area9_House_Movement_VickySitDownLeftSide:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	face_right
	step_end
	
TrainerIsland_Area9_House_Movement_VitoApproachLeftSide:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_in_place_down
	step_end

TrainerIsland_Area9_House_Movement_VitoGoStandLeftSide:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	face_down
	step_end
	


TrainerIsland_Area9_House_Text_VivianIntro:
	.string "I am Vivian, the newest member of\n"
	.string "the Winstrate Family!\p"
	.string "I am also the smartest of them;\n"
	.string "my IQ is 200 and I am a child\l"
	.string "prodigy!\p"
	.string "You wont beat me!$"

TrainerIsland_Area9_House_Text_VivianDefeat:
	.string "But I have a higher IQ than you!$"

TrainerIsland_Area9_House_Text_VivianPostBattle:
	.string "Why did I lose?! Where did my\n"
	.string "calculations go wrong?!\p"
	.string "This is all wrong!!! Daddy!$"
	
TrainerIsland_Area9_House_Text_VictorIntro:
	.string "Oh dear, you seem to have upset\n"
	.string "Vivian…\p"
	.string "As a father, I cannot let that\n"
	.string "go unpunished! Prepare yourself!$"

TrainerIsland_Area9_House_Text_VictorDefeat:
	.string "I couldn't avenge my daughter…$"

TrainerIsland_Area9_House_Text_VictorPostBattle:
	.string "Hey, girls! It's that trainer\n"
	.string "from before!$"

TrainerIsland_Area9_House_Text_VictoriaIntro:
	.string "Ah! You're back! And stronger, I\n"
	.string "see! Can I ask you for a quick\l"
	.string "peak at your pokemon's strengths?$"
	
TrainerIsland_Area9_House_Text_VictoriaDefeat:
	.string "I didn't stand a chance…$"

TrainerIsland_Area9_House_Text_VictoriaPostBattle:
	.string "Oh, Vivi! Would you mind coming\n"
	.string "out for a playdate?\p"
	.string "There's a string really strong\n"
	.string "trainer in it for ya!$"

TrainerIsland_Area9_House_Text_ViviIntro:
	.string "Oh, it's you…\p"
	.string "You messed me up pretty bad last\n"
	.string "time!\p"
	.string "But I swear I will get my\n"
	.string "revenge right now!$"
	
TrainerIsland_Area9_House_Text_ViviDefeat:
	.string "Boohoo!$"

TrainerIsland_Area9_House_Text_ViviPostBattle:
	.string "I'm gonna cry! Please let me\n"
	.string "cry!$"

TrainerIsland_Area9_House_Text_ViviCriesYes:
	.string "Waaah!$"
	
TrainerIsland_Area9_House_Text_ViviCriesNo:
	.string "But I want to cry… Waaaah!$"

TrainerIsland_Area9_House_Text_VickyIntro:
	.string "Doh…! You made Vivi cry again!\p"
	.string "For that, I will show you no\n"
	.string "mercy!$"

TrainerIsland_Area9_House_Text_VickyDefeat:
	.string "Gosh darn it! I lost again…!$"

TrainerIsland_Area9_House_Text_VickyPostBattle:
	.string "The final winstrate is coming.\n"
	.string "Are you ready?$"
	
TrainerIsland_Area9_House_Text_VickyNotReady:
	.string "Come back some other time then.$"
	
TrainerIsland_Area9_House_Text_VickyReady:
	.string "Vito! You're up!$"
	
TrainerIsland_Area9_House_Text_VitoIntro:
	.string "I see now why they call you\n"
	.string "CHAMPION.\p"
	.string "You just bested my entire\n"
	.string "family single-handedly.\p"
	.string "But your winning streak\n"
	.string "ends here, my friend!$"

TrainerIsland_Area9_House_Text_VitoDefeat:
	.string "…/p"
	.string "What can I say…?$"

TrainerIsland_Area9_House_Text_VitoPostBattle1:
	.string "I guess what they say is true:\n"
	.string "Power creeps breed power creeps!\p"
	.string "In anycase, here's a reward for\n"
	.string "your efforts.$"
	
TrainerIsland_Area9_House_Text_VitoPostBattle2:
	.string "Come back and challenge us\n"
	.string "anytime!$"
	
TrainerIsland_Area9_House_Text_VivianIntro2:
	.string "My calculations are perfect this\n"
	.string "time! I can't lose!$"	

TrainerIsland_Area9_House_Text_VivianDefeat2:
	.string "Success probability is now 0%…$"

TrainerIsland_Area9_House_Text_VivianPostBattle2:
	.string "Where did my calculations go\n"
	.string "wrong this time?!$"

TrainerIsland_Area9_House_Text_ViviIntro2:
	.string "The bully has arrived!$"

TrainerIsland_Area9_House_Text_ViviDefeat2:
	.string "And a bully you are indeed!$"

TrainerIsland_Area9_House_Text_ViviPostBattle2:
	.string "If your mean to me, I'm going to\n"
	.string "cry, ok?$"
	

TrainerIsland_Area9_House_Text_VictoriaIntro2:
	.string "May I ask for a rematch?$"

TrainerIsland_Area9_House_Text_VictoriaDefeat2:
	.string "You're pokemon are so lovely!$"

TrainerIsland_Area9_House_Text_VictoriaPostBattle2:
	.string "Come back anytime!$"

TrainerIsland_Area9_House_Text_VictorIntro2:
	.string "Lets see who's stronger this time!$"

TrainerIsland_Area9_House_Text_VictorDefeat2:
	.string "You're pokemon are as strong as\n"
	.string "ever…$"

TrainerIsland_Area9_House_Text_VictorPostBattle2:
	.string "Doh, I lost… let's battle one more\n"
	.string "time!$"

TrainerIsland_Area9_House_Text_VickyIntro2:
	.string "Beware the wrath of GRANDMOMMA!\p"
	.string "HIYA!$"

TrainerIsland_Area9_House_Text_VickyDefeat2:
	.string "I've been tamed…$"
	
TrainerIsland_Area9_House_Text_VickyPostBattle2:
	.string "My wrath shall rise again…$"
	
TrainerIsland_Area9_House_Text_VitoIntro2:
	.string "Let's give it our all!$"

TrainerIsland_Area9_House_Text_VitoDefeat2:
	.string "I am satisfied…$"
	
TrainerIsland_Area9_House_Text_VitoPostBattle3:
	.string "Until we meet again…$"
