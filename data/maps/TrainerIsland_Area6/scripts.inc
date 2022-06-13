TrainerIsland_Area6_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerIsland_Area6_OnTransition
	.byte 0
	
TrainerIsland_Area6_OnTransition:
	cleartrainerflag TRAINER_MASTER_AROMALADYJEWELS
	cleartrainerflag TRAINER_MASTER_JOHN
	cleartrainerflag TRAINER_MASTER_LUNA
	cleartrainerflag TRAINER_MASTER_AWEN
	cleartrainerflag TRAINER_MASTER_ANNA
	cleartrainerflag TRAINER_MASTER_THESSY
	cleartrainerflag TRAINER_MASTER_THANTOS
	cleartrainerflag TRAINER_MASTER_THUNDER
	cleartrainerflag TRAINER_MASTER_AURORA
	end


TrainerIsland_Area6_EventScript_Winona::
	goto_if_eq VAR_UNUSED_0x40FE, 1, TrainerIsland_Area6_EventScript_WinonaFirstMatch
	goto_if_eq VAR_UNUSED_0x40FE, 2, TrainerIsland_Area6_EventScript_WinonaRematch1
	goto_if_eq VAR_UNUSED_0x40FE, 3, TrainerIsland_Area6_EventScript_WinonaRematch2
	goto_if_eq VAR_UNUSED_0x40FE, 4, TrainerIsland_Area6_EventScript_WinonaRematch3
	goto_if_eq VAR_UNUSED_0x40FE, 5, TrainerIsland_Area6_EventScript_WinonaRematch4
	end
	
TrainerIsland_Area6_EventScript_WinonaFirstMatch::
	trainerbattle_double TRAINER_MASTER_WINONA, TrainerIsland_Area6_Text_WinonaIntro, TrainerIsland_Area6_Text_WinonaDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area6_Text_WinonaPostBattle, MSGBOX_AUTOCLOSE
	setvar VAR_UNUSED_0x40FE, 2
	end

TrainerIsland_Area6_EventScript_WinonaRematch1::
	cleartrainerflag TRAINER_MASTER_WINONA_2
	trainerbattle_double TRAINER_MASTER_WINONA_2, TrainerIsland_Area6_Text_WinonaIntro2, TrainerIsland_Area6_Text_WinonaDefeat2, CommonEvent_Text_NeedTwoMons, Add2Points
	msgbox TrainerIsland_Area6_Text_WinonaPostBattle2, MSGBOX_AUTOCLOSE
	setvar VAR_UNUSED_0x40FE, 3
	end
	
TrainerIsland_Area6_EventScript_WinonaRematch2::
	cleartrainerflag TRAINER_MASTER_WINONA_3
	trainerbattle_double TRAINER_MASTER_WINONA_3, TrainerIsland_Area6_Text_WinonaIntro2, TrainerIsland_Area6_Text_WinonaDefeat2, CommonEvent_Text_NeedTwoMons, Add2Points
	msgbox TrainerIsland_Area6_Text_WinonaPostBattle2, MSGBOX_AUTOCLOSE
	setvar VAR_UNUSED_0x40FE, 4
	end

TrainerIsland_Area6_EventScript_WinonaRematch3::
	cleartrainerflag TRAINER_MASTER_WINONA_4
	trainerbattle_double TRAINER_MASTER_WINONA_4, TrainerIsland_Area6_Text_WinonaIntro2, TrainerIsland_Area6_Text_WinonaDefeat2, CommonEvent_Text_NeedTwoMons, Add2Points
	msgbox TrainerIsland_Area6_Text_WinonaPostBattle2, MSGBOX_AUTOCLOSE
	setvar VAR_UNUSED_0x40FE, 5
	end
	
TrainerIsland_Area6_EventScript_WinonaRematch4::
	cleartrainerflag TRAINER_MASTER_WINONA
	trainerbattle_double TRAINER_MASTER_WINONA, TrainerIsland_Area6_Text_WinonaIntro2, TrainerIsland_Area6_Text_WinonaDefeat2, CommonEvent_Text_NeedTwoMons, Add2Points
	msgbox TrainerIsland_Area6_Text_WinonaPostBattle2, MSGBOX_AUTOCLOSE
	setvar VAR_UNUSED_0x40FE, 2
	end

TrainerIsland_Area6_EventScript_Awen::
	cleartrainerflag TRAINER_MASTER_AWEN
	trainerbattle_double TRAINER_MASTER_AWEN, TrainerIsland_Area6_Text_AwenIntro, TrainerIsland_Area6_Text_AwenDefeat, CommonEvent_Text_NeedTwoMons, Add3Points, 
	msgbox TrainerIsland_Area6_Text_AwenPostBattle, MSGBOX_AUTOCLOSE
	end

	
TrainerIsland_Area6_EventScript_Thessy::
	cleartrainerflag TRAINER_MASTER_THESSY
	trainerbattle_double TRAINER_MASTER_THESSY, TrainerIsland_Area6_Text_ThessyIntro, TrainerIsland_Area6_Text_ThessyDefeat, CommonEvent_Text_NeedTwoMons, Add3Points
	msgbox TrainerIsland_Area6_Text_ThessyPostBattle, MSGBOX_AUTOCLOSE
	end
	
TrainerIsland_Area6_EventScript_Thunder::
	cleartrainerflag TRAINER_MASTER_THUNDER
	trainerbattle_double TRAINER_MASTER_THUNDER, TrainerIsland_Area6_Text_ThunderIntro, TrainerIsland_Area6_Text_ThunderDefeat, CommonEvent_Text_NeedTwoMons, Add3Points
	msgbox TrainerIsland_Area6_Text_ThunderPostBattle, MSGBOX_AUTOCLOSE
	end
	
TrainerIsland_Area6_EventScript_Anna::
	cleartrainerflag TRAINER_MASTER_ANNA
	trainerbattle_double TRAINER_MASTER_ANNA, TrainerIsland_Area6_Text_AnnaIntro, TrainerIsland_Area6_Text_AnnaDefeat, CommonEvent_Text_NeedTwoMons, Add3Points
	msgbox TrainerIsland_Area6_Text_AnnaPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area6_EventScript_Thantos::
	cleartrainerflag TRAINER_MASTER_THANTOS
	trainerbattle_double TRAINER_MASTER_THANTOS, TrainerIsland_Area6_Text_ThantosIntro, TrainerIsland_Area6_Text_ThantosDefeat, CommonEvent_Text_NeedTwoMons, Add3Points
	msgbox TrainerIsland_Area6_Text_ThantosPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area6_EventScript_Aurora::
	cleartrainerflag TRAINER_MASTER_AURORA
	trainerbattle_double TRAINER_MASTER_AURORA, TrainerIsland_Area6_Text_AuroraIntro, TrainerIsland_Area6_Text_AuroraDefeat, CommonEvent_Text_NeedTwoMons, Add3Points
	msgbox TrainerIsland_Area6_Text_AuroraPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area6_EventScript_Jewels::
	cleartrainerflag TRAINER_MASTER_JEWELS
	trainerbattle_double TRAINER_MASTER_JEWELS, TrainerIsland_Area6_Text_JewelsIntro, TrainerIsland_Area6_Text_JewelsDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area6_Text_JewelsPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area6_EventScript_John::
	cleartrainerflag TRAINER_MASTER_JOHN
	trainerbattle_double TRAINER_MASTER_JOHN, TrainerIsland_Area6_Text_JohnIntro, TrainerIsland_Area6_Text_JohnDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area6_Text_JohnPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area6_EventScript_Luna::
	cleartrainerflag TRAINER_MASTER_LUNA
	trainerbattle_double TRAINER_MASTER_LUNA, TrainerIsland_Area6_Text_LunaIntro, TrainerIsland_Area6_Text_LunaDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area6_Text_LunaPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area6_EventScript_TrainerRoadSign::
	msgbox TrainerIsland_Area6_TrainerRoadSign, MSGBOX_SIGN
	end
	
TrainerIsland_Area6_TrainerRoadSign:
	.string "Trainer Road$"
	
	
TrainerIsland_Area6_Text_WinonaIntro:
	.string "My grace runs ever high!$"

TrainerIsland_Area6_Text_WinonaDefeat:
	.string "I have fallen…$"

TrainerIsland_Area6_Text_WinonaPostBattle:
	.string "But I shall rise again…$"
	


TrainerIsland_Area6_Text_WinonaIntro2:
	.string "I am ready once more. Let's battle!$"

TrainerIsland_Area6_Text_WinonaDefeat2:
	.string "Struck down again!$"

TrainerIsland_Area6_Text_WinonaPostBattle2:
	.string "I must take my bird pokemon\n"
	.string "under my wing for a bit…$"
	
	
TrainerIsland_Area6_Text_JewelsIntro:
	.string "I have many sweet perfumes in stock.$"

TrainerIsland_Area6_Text_JewelsDefeat:
	.string "My scents didn't faze you…$"

TrainerIsland_Area6_Text_JewelsPostBattle:
	.string "I must rethink my strategy!$"
	
	
	
TrainerIsland_Area6_Text_JohnIntro:
	.string "You won't get to Trainer Road!.$"

TrainerIsland_Area6_Text_JohnDefeat:
	.string "I couldn't stop you…$"

TrainerIsland_Area6_Text_JohnPostBattle:
	.string "If you want to battle lots\n"
	.string "of trainers, head north.$"
	


TrainerIsland_Area6_Text_LunaIntro:
	.string "Time to face your fears!$"

TrainerIsland_Area6_Text_LunaDefeat:
	.string "You faced them pretty well,\n"
	.string "alright…!$"

TrainerIsland_Area6_Text_LunaPostBattle:
	.string "Next time, I'll frighten you\n"
	.string "even more!$"
	

	
TrainerIsland_Area6_Text_AwenIntro:
	.string "The light shines brightly!$"

TrainerIsland_Area6_Text_AwenDefeat:
	.string "The light fades…$"
	
TrainerIsland_Area6_Text_AwenPostBattle:
	.string "The light will shine again.$"



TrainerIsland_Area6_Text_ThessyIntro:
	.string "The darkness clouds your\n"
	.string "victory!$"

TrainerIsland_Area6_Text_ThessyDefeat:
	.string "You've prevailed over the\n"
	.string "darkness?!$"
	
TrainerIsland_Area6_Text_ThessyPostBattle:
	.string "The darkness will return.$"
	

	
TrainerIsland_Area6_Text_ThunderIntro:
	.string "Magic is the answer to\n"
	.string "everything!$"

TrainerIsland_Area6_Text_ThunderDefeat:
	.string "But you seemed fine without\n"
	.string "it…$"
	
TrainerIsland_Area6_Text_ThunderPostBattle:
	.string "Magic is still the answer!$"
	



TrainerIsland_Area6_Text_AnnaIntro:
	.string "Ooh… You're in hot water\n"
	.string "now!$"

TrainerIsland_Area6_Text_AnnaDefeat:
	.string "The tides have been pacified…$"
	
TrainerIsland_Area6_Text_AnnaPostBattle:
	.string "Don't let this win get to\n"
	.string "your head…$"


TrainerIsland_Area6_Text_ThantosIntro:
	.string "I'm all fired up! Let's battle!$"
	
TrainerIsland_Area6_Text_ThantosDefeat:
	.string "I am extinguished…$"
	
TrainerIsland_Area6_Text_ThantosPostBattle:
	.string "My flame shall be reborn.$"
	


TrainerIsland_Area6_Text_AuroraIntro:
	.string "Do you want to build a\n"
	.string "snowman?$"
	
TrainerIsland_Area6_Text_AuroraDefeat:
	.string "Let it go, let it go…$"
	
TrainerIsland_Area6_Text_AuroraPostBattle:
	.string "Let it snow, let it snow\n"
	.string "let it snow!$"
