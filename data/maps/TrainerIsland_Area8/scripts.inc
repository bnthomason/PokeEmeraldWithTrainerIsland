TrainerIsland_Area8_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerIsland_Area8_OnTransition
	.byte 0
	
TrainerIsland_Area8_OnTransition:
	cleartrainerflag TRAINER_MASTER_PHOEBE
	cleartrainerflag TRAINER_MASTER_JUDAH
	cleartrainerflag TRAINER_MASTER_DAVID
	cleartrainerflag TRAINER_MASTER_KIRK
	cleartrainerflag TRAINER_MASTER_VALERIE
	cleartrainerflag TRAINER_MASTER_GREG
	cleartrainerflag TRAINER_MASTER_JOSHUA
	cleartrainerflag TRAINER_MASTER_DARWIN
	cleartrainerflag TRAINER_MASTER_KATE
	cleartrainerflag TRAINER_MASTER_ELISE
	cleartrainerflag TRAINER_MASTER_CORREN
	cleartrainerflag TRAINER_MASTER_YULIE
	cleartrainerflag TRAINER_MASTER_TOM
	cleartrainerflag TRAINER_MASTER_GEORGE
	cleartrainerflag TRAINER_MASTER_STAN
	cleartrainerflag TRAINER_MASTER_SIERRA
	cleartrainerflag TRAINER_MASTER_JONAH	
	cleartrainerflag TRAINER_MASTER_SAMUEL
	end


TrainerIsland_Area8_EventScript_Phoebe::

	trainerbattle_double TRAINER_MASTER_PHOEBE, TrainerIsland_Area8_Text_PhoebeIntro, TrainerIsland_Area8_Text_PhoebeDefeat, CommonEvent_Text_NeedTwoMons, Add3Points
	msgbox TrainerIsland_Area8_Text_PhoebePostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area8_EventScript_Judah::
	trainerbattle_double TRAINER_MASTER_JUDAH, TrainerIsland_Area8_Text_JudahIntro, TrainerIsland_Area8_Text_JudahDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area8_Text_JudahPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area8_EventScript_David::
	trainerbattle_double TRAINER_MASTER_DAVID, TrainerIsland_Area8_Text_DavidIntro, TrainerIsland_Area8_Text_DavidDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area8_Text_DavidPostBattle, MSGBOX_AUTOCLOSE
	end
	
TrainerIsland_Area8_EventScript_Kirk::
	trainerbattle_double TRAINER_MASTER_KIRK, TrainerIsland_Area8_Text_KirkIntro, TrainerIsland_Area8_Text_KirkDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area8_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
	end
	
TrainerIsland_Area8_EventScript_Valerie::
	trainerbattle_double TRAINER_MASTER_VALERIE, TrainerIsland_Area8_Text_ValerieIntro, TrainerIsland_Area8_Text_ValerieDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area8_Text_ValeriePostBattle, MSGBOX_AUTOCLOSE
	end
	
TrainerIsland_Area8_EventScript_Greg::
	trainerbattle_double TRAINER_MASTER_GREG, TrainerIsland_Area8_Text_GregIntro, TrainerIsland_Area8_Text_GregDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area8_Text_GregPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area8_EventScript_Joshua::
	trainerbattle_double TRAINER_MASTER_JOSHUA, TrainerIsland_Area8_Text_JoshuaIntro, TrainerIsland_Area8_Text_JoshuaDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area8_Text_JoshuaPostBattle, MSGBOX_AUTOCLOSE
	end
	
TrainerIsland_Area8_EventScript_Darwin::
	trainerbattle_double TRAINER_MASTER_DARWIN, TrainerIsland_Area8_Text_DarwinIntro, TrainerIsland_Area8_Text_DarwinDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area8_Text_DarwinPostBattle, MSGBOX_AUTOCLOSE
	end
	
TrainerIsland_Area8_EventScript_Kate::
	trainerbattle_double TRAINER_MASTER_KATE, TrainerIsland_Area8_Text_KateIntro, TrainerIsland_Area8_Text_KateDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area8_Text_KatePostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area8_EventScript_Elise::
	trainerbattle_double TRAINER_MASTER_ELISE, TrainerIsland_Area8_Text_EliseIntro, TrainerIsland_Area8_Text_EliseDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area8_Text_ElisePostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area8_EventScript_Corren::
	trainerbattle_double TRAINER_MASTER_CORREN, TrainerIsland_Area8_Text_CorrenIntro, TrainerIsland_Area8_Text_CorrenDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area8_Text_CorrenPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area8_EventScript_Yulie::
	trainerbattle_double TRAINER_MASTER_YULIE, TrainerIsland_Area8_Text_YulieIntro, TrainerIsland_Area8_Text_YulieDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area8_Text_YuliePostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area8_EventScript_Tom::
	trainerbattle_double TRAINER_MASTER_TOM, TrainerIsland_Area8_Text_TomIntro, TrainerIsland_Area8_Text_TomDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area8_Text_TomPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area8_EventScript_George::
	trainerbattle_double TRAINER_MASTER_GEORGE, TrainerIsland_Area8_Text_GeorgeIntro, TrainerIsland_Area8_Text_GeorgeDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area8_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
	end
	
TrainerIsland_Area8_EventScript_Stan::
	trainerbattle_double TRAINER_MASTER_STAN, TrainerIsland_Area8_Text_StanIntro, TrainerIsland_Area8_Text_StanDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area8_Text_StanPostBattle, MSGBOX_AUTOCLOSE
	end
	
TrainerIsland_Area8_EventScript_Sierra::
	trainerbattle_double TRAINER_MASTER_SIERRA, TrainerIsland_Area8_Text_SierraIntro, TrainerIsland_Area8_Text_SierraDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area8_Text_SierraPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area8_EventScript_Jonah::
	trainerbattle_double TRAINER_MASTER_JONAH, TrainerIsland_Area8_Text_JonahIntro, TrainerIsland_Area8_Text_JonahDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area8_Text_JonahPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area8_EventScript_Samuel::
	trainerbattle_double TRAINER_MASTER_SAMUEL, TrainerIsland_Area8_Text_SamuelIntro, TrainerIsland_Area8_Text_SamuelDefeat, CommonEvent_Text_NeedTwoMons, Add1Points
	msgbox TrainerIsland_Area8_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerIsland_Area8_EventScript_RestHouseSign::
	msgbox TrainerIsland_Area8_RestHouseSign, MSGBOX_SIGN
	end
	
TrainerIsland_Area8_RestHouseSign:
	.string "A simple house for simple needs!$"
	

TrainerIsland_Area8_Text_PhoebeIntro:
	.string "Aren't you scared?\n"
	.string "You should be!$"

TrainerIsland_Area8_Text_PhoebeDefeat:
	.string "You should've been scared\n"
	.string "out of your wits!$"
	
TrainerIsland_Area8_Text_PhoebePostBattle:
	.string "Next time, you WILL be\n"
	.string "scared!$"
	

	
TrainerIsland_Area8_Text_JudahIntro:
	.string "Get ready, y'all!$"
	
TrainerIsland_Area8_Text_JudahDefeat:
	.string "Looks like you were ready.$"
	
TrainerIsland_Area8_Text_JudahPostBattle:
	.string "Ready! Set!$"
	
		

	

TrainerIsland_Area8_Text_DavidIntro:
	.string "I've got 10 years of youth\n"
	.string "in front of me!$"
	
TrainerIsland_Area8_Text_DavidDefeat:
	.string "My youth couldn't keep me.\n"
	.string "from losing…$"
	
TrainerIsland_Area8_Text_DavidPostBattle:
	.string "The blessing of youth is only\n"
	.string "as good as the wielder.$"
	
	

TrainerIsland_Area8_Text_KirkIntro:
	.string "I've been hiking for years!$"
	
TrainerIsland_Area8_Text_KirkDefeat:
	.string "But it looks like you've been\n"
	.string "traveling pretty much\l"
	.string "everywhere…$"
	
TrainerIsland_Area8_Text_KirkPostBattle:
	.string "Could you possibly hike the\n"
	.string "tallest of mountains…?$"
	
	
	
TrainerIsland_Area8_Text_ValerieIntro:
	.string "Can my pokemon come out to\n"
	.string "play?$"
	
TrainerIsland_Area8_Text_ValerieDefeat:
	.string "You hurt my pokemon!$"
	
TrainerIsland_Area8_Text_ValeriePostBattle:
	.string "You're such a big meanie!$"



TrainerIsland_Area8_Text_GregIntro:
	.string "I can read your mind!$"
	

TrainerIsland_Area8_Text_GregDefeat:
	.string "Mindblown!$"
	
TrainerIsland_Area8_Text_GregPostBattle:
	.string "Your mind was just too\n"
	.string "powerful for me to read…$"
	


TrainerIsland_Area8_Text_JoshuaIntro:
	.string "I'll send you into next\n"
	.string "week!$"
	

TrainerIsland_Area8_Text_JoshuaDefeat:
	.string "I was sent into next\n"
	.string "Tuesday!$"
	
TrainerIsland_Area8_Text_JoshuaPostBattle:
	.string "I feel all dizzy now…$"
	
	
	
TrainerIsland_Area8_Text_DarwinIntro:
	.string "If you lose, you'll have to\n"
	.string "camp out with me!$"
	
TrainerIsland_Area8_Text_DarwinDefeat:
	.string "But apparently you won…$"
	
TrainerIsland_Area8_Text_DarwinPostBattle:
	.string "Sorry, the camping deal is\n"
	.string "off!$"
	

TrainerIsland_Area8_Text_KateIntro:
	.string "Being young is such\n"
	.string "a treasure!$"
	
TrainerIsland_Area8_Text_KateDefeat:
	.string "But it does have its\n"
	.string "drawbacks…$"
				
TrainerIsland_Area8_Text_KatePostBattle:
	.string "With youth comes\n"
	.string "inexperience.$"


TrainerIsland_Area8_Text_EliseIntro:
	.string "I'll test this new combo on\n"
	.string "you!$"
	
TrainerIsland_Area8_Text_EliseDefeat:
	.string "I couldn't even use the\n"
	.string "combo!$"
	
TrainerIsland_Area8_Text_ElisePostBattle:
	.string "I guess you can't teach an old\n"
	.string "dog new tricks…$"
	


TrainerIsland_Area8_Text_CorrenIntro:
	.string "Dragon pokemon are strong,\n"
	.string "just like me!$"
	
TrainerIsland_Area8_Text_CorrenDefeat:
	.string "They were not strong enough,\n"
	.string "though…$"
	
TrainerIsland_Area8_Text_CorrenPostBattle:
	.string "My poor dragons have all\n"
	.string "fainted!$"
	

TrainerIsland_Area8_Text_YulieIntro:
	.string "Let's play!$"
	
TrainerIsland_Area8_Text_YulieDefeat:
	.string "You hurt me!$"
	
TrainerIsland_Area8_Text_YuliePostBattle:
	.string "You big meanie!$"
	
	
	
TrainerIsland_Area8_Text_TomIntro:
	.string "Silent and deadly are my\n"
	.string "tactics!$"
	
TrainerIsland_Area8_Text_TomDefeat:
	.string "You had more stealth than\n"
	.string "me!$"
	
TrainerIsland_Area8_Text_TomPostBattle:
	.string "The one who strikes last\n"
	.string "always wins.$"
	
	
TrainerIsland_Area8_Text_GeorgeIntro:
	.string "Let me drill this song into\n"
	.string "your soul!$"
	
TrainerIsland_Area8_Text_GeorgeDefeat:
	.string "We shall sing together…$"
	
TrainerIsland_Area8_Text_GeorgePostBattle:
	.string "Good vibes, right?!$"
	


TrainerIsland_Area8_Text_StanIntro:
	.string "Hey, check out my newest\n"
	.string "comic!$"
	
TrainerIsland_Area8_Text_StanDefeat:
	.string "Thrilling, right?!$"
	
TrainerIsland_Area8_Text_StanPostBattle:
	.string "My comics are the best!$"
	
	
TrainerIsland_Area8_Text_SierraIntro:
	.string "Unicorns are perfect.\n"
	.string "Battling must be perfect.\p"
	.string "Since I battle perfect…\n"
	.string "then I'm a unicorn!$"
	
TrainerIsland_Area8_Text_SierraDefeat:
	.string "Impossible!\p"
	.string "You couldn't've defeated me…\n"
	.string "I'm a freakin unicorn!$"
	
TrainerIsland_Area8_Text_SierraPostBattle:
	.string "I'm a unicorn! I am perfect\n"
	.string "in each and every way!\p"
	.string "Then why did I lose…?$" 
	

TrainerIsland_Area8_Text_JonahIntro:
	.string "I once was trapped in the\n"
	.string "belly of a Wailord!\p"
	.string "My experience only made me\n"
	.string "stronger!$"
	
TrainerIsland_Area8_Text_JonahDefeat:
	.string "What experiences have you\n"
	.string "had, I wonder?$"
	
TrainerIsland_Area8_Text_JonahPostBattle:
	.string "Our experiences only make\n"
	.string "us stronger.$"
	


TrainerIsland_Area8_Text_SamuelIntro:
	.string "Rare pokemon are always a\n"
	.string "thrill to see! Take a look\l"
	.string "at mine!$"
	
TrainerIsland_Area8_Text_SamuelDefeat:
	.string "My rare pokemon were taken\n"
	.string "down!$"
	
TrainerIsland_Area8_Text_SamuelPostBattle:
	.string "Please be nice\n"
	.string "to my rare pokemon.$"
