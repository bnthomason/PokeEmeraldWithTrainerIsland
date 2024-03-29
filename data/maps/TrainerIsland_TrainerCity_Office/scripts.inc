.set LOCALID_SCIENTIST_1, 2
.set LOCALID_SCIENTIST_2, 1
.set LOCALID_SCIENTIST_3, 3
.set LOCALID_SCIENTIST_4, 4

TrainerIsland_TrainerCity_Office_MapScripts::
	.byte 0
	
TrainerIsland_TrainerCity_Office_EventScript_CEO::
	lock
	faceplayer
	goto_if_set FLAG_UNUSED_0x2B8, TrainerIsland_TrainerCity_Office_EventScript_WillYouHelpWithResearch
	goto_if_unset FLAG_UNUSED_0x2B8, TrainerIsland_TrainerCity_Office_EventScript_ConductingResearch
	end

TrainerIsland_TrainerCity_Office_EventScript_WillYouHelpWithResearch::
	msgbox TrainerIsland_TrainerCity_Office_Text_WillYouHelpWithResearch, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, TrainerIsland_TrainerCity_Office_EventScript_PrintIsThatSo
	case YES, TrainerIsland_TrainerCity_Office_EventScript_ThatsGreatThanks
	case MULTI_B_PRESSED, TrainerIsland_TrainerCity_Office_EventScript_PrintIsThatSo
	end
	
TrainerIsland_TrainerCity_Office_EventScript_PrintIsThatSo::
	msgbox TrainerIsland_TrainerCity_Office_Text_PrintIsThatSo, MSGBOX_DEFAULT
	release
	end
	
TrainerIsland_TrainerCity_Office_EventScript_ThatsGreatThanks::
	msgbox TrainerIsland_TrainerCity_Office_Text_ThatsGreatThanks, MSGBOX_DEFAULT
	waitmessage
	closemessage
	giveitem ITEM_BATTLE_READER
	msgbox TrainerIsland_TrainerCity_Office_Text_BattleReaderExplanation, MSGBOX_DEFAULT
	setflag FLAG_UNUSED_0x2B7
	clearflag FLAG_UNUSED_0x2B8
	release
	end

TrainerIsland_TrainerCity_Office_EventScript_ConductingResearch::
	msgbox TrainerIsland_TrainerCity_Office_Text_ConductingResearch, MSGBOX_DEFAULT
	closemessage
	end
	
TrainerIsland_TrainerCity_Office_EventScript_Worker1::
	lock
	faceplayer
	goto_if_set FLAG_UNUSED_0x2B7, TrainerIsland_TrainerCity_Office_EventScript_Worker1_Prepare
	goto_if_unset FLAG_UNUSED_0x2B7, TrainerIsland_TrainerCity_Office_EventScript_Worker1_Temperatures
	end

TrainerIsland_TrainerCity_Office_EventScript_Worker1_Prepare::
	msgbox TrainerIsland_TrainerCity_Office_Text_Worker1_Prepare, MSGBOX_NPC
	applymovement LOCALID_SCIENTIST_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
	
TrainerIsland_TrainerCity_Office_EventScript_Worker1_Temperatures::
	msgbox TrainerIsland_TrainerCity_Office_Text_Worker1_Temperatures, MSGBOX_NPC
	applymovement LOCALID_SCIENTIST_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
	
TrainerIsland_TrainerCity_Office_EventScript_Worker2::
	lock
	faceplayer
	goto_if_set FLAG_UNUSED_0x2B7, TrainerIsland_TrainerCity_Office_EventScript_Worker2_Prepare
	goto_if_unset FLAG_UNUSED_0x2B7, TrainerIsland_TrainerCity_Office_EventScript_Worker2_Strategies
	end
	
TrainerIsland_TrainerCity_Office_EventScript_Worker2_Prepare::
	msgbox TrainerIsland_TrainerCity_Office_Text_Worker2_Prepare, MSGBOX_NPC
	applymovement LOCALID_SCIENTIST_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release	
	end

TrainerIsland_TrainerCity_Office_EventScript_Worker2_Strategies::
	msgbox TrainerIsland_TrainerCity_Office_Text_Worker2_Strategies, MSGBOX_NPC
	applymovement LOCALID_SCIENTIST_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
	
TrainerIsland_TrainerCity_Office_EventScript_Worker3::
	lock
	faceplayer
	goto_if_set FLAG_UNUSED_0x2B7, TrainerIsland_TrainerCity_Office_EventScript_Worker3_Prepare
	goto_if_unset FLAG_UNUSED_0x2B7, TrainerIsland_TrainerCity_Office_EventScript_Worker3_BLanguage
	end

TrainerIsland_TrainerCity_Office_EventScript_Worker3_Prepare::
	msgbox TrainerIsland_TrainerCity_Office_Text_Worker3_Prepare, MSGBOX_NPC
	applymovement LOCALID_SCIENTIST_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
	
TrainerIsland_TrainerCity_Office_EventScript_Worker3_BLanguage::
	msgbox TrainerIsland_TrainerCity_Office_Text_Worker3_BLanguage, MSGBOX_NPC
	applymovement LOCALID_SCIENTIST_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

TrainerIsland_TrainerCity_Office_EventScript_Worker4::
	lock
	faceplayer
	goto_if_set FLAG_UNUSED_0x2B7, TrainerIsland_TrainerCity_Office_EventScript_Worker4_Prepare
	goto_if_unset FLAG_UNUSED_0x2B7, TrainerIsland_TrainerCity_Office_EventScript_Worker4_BLanguage
	end


TrainerIsland_TrainerCity_Office_EventScript_Worker4_Prepare::
	msgbox TrainerIsland_TrainerCity_Office_Text_Worker4_Prepare, MSGBOX_NPC
	applymovement LOCALID_SCIENTIST_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
	
TrainerIsland_TrainerCity_Office_EventScript_Worker4_BLanguage::
	msgbox TrainerIsland_TrainerCity_Office_Text_Worker4_VoiceRecording, MSGBOX_NPC
	applymovement LOCALID_SCIENTIST_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

TrainerIsland_TrainerCity_Office_Text_WillYouHelpWithResearch:
	.string "Hello! I am the CEO of the\n"
	.string "Enlightenment Research Lab.\p"
	.string "I want to conduct extensive\n"
	.string "research on pokemon battles,\l"
	.string "but I need battles to happen\l"
	.string "nearby to do this.\p"
	.string "That's where you come in. I\n"
	.string "will attach this battle reader\l"
	.string "on your arm. It will help us\l"
	.string "gather information such as\l"
	.string "body, facial, and vocal language\l"
	.string "temperatures, dynamics, and\l"
	.string "strategies.\p"
	.string "The battles must take place here\n"
	.string "in Trainer City. I've arranged\l"
	.string "A tournament here, which will\l"
	.string "grant you access into the gym\l"
	.string "when all trainers are defeated.\p"
	.string "Will you help us with our\n"
	.string "Research?$"

TrainerIsland_TrainerCity_Office_Text_ConductingResearch:
	.string "We are underway conducting\n"
	.string "research.\p"	
	.string "Please, continue your battles\n"
	.string "in Trainer City so we can\l"
	.string "gather more data. Thank you.$"

TrainerIsland_TrainerCity_Office_Text_PrintIsThatSo:
	.string "Is that so? Well, when you\n"
	.string "feel up to it, come back\l"
	.string "and tell me.$"

TrainerIsland_TrainerCity_Office_Text_ThatsGreatThanks:
	.string "Thats great! I'll get the\n"
	.string "trainers gathered for the\l"
	.string "tournament right away so\l"
	.string "that you can get started!\l"
	.string "Also, put this on.$"
	
TrainerIsland_TrainerCity_Office_Text_BattleReaderExplanation:
	.string "As I said before, this will\n"
	.string "monitor everything you do in\l"
	.string "in battle.\p"
	.string "Your strategies are safe and won't\n"
	.string "be sold or revealed to anyone.\p"
	.string "Now go on out there and have fun!$"
	
TrainerIsland_TrainerCity_Office_Text_Worker1_Prepare:
	.string "I'm preparing my workspace to\n"
	.string "be able to read temperature\l"
	.string "readings.$"
	
TrainerIsland_TrainerCity_Office_Text_Worker1_Temperatures:
	.string "I'm busy. What is it?\p"
	.string "Oh, what I'm working on?\p"
	.string "My workspace is set up to\n"
	.string "read your temperature during\l"
	.string "battle.\p"
	.string "It's telling me a lot.$"

TrainerIsland_TrainerCity_Office_Text_Worker2_Prepare:
	.string "I'm setting up my workspace\n"
	.string "to be able to see and record\l"
	.string "battle strategies.$"
	
TrainerIsland_TrainerCity_Office_Text_Worker2_Strategies:
	.string "I'm busy. What is it?\p"
	.string "Oh, what I'm working on?\p"
	.string "My workspace is set up to\n"
	.string "see your battle strategy\l"
	.string "during battle.\p"
	.string "It's very informative.$"

TrainerIsland_TrainerCity_Office_Text_Worker3_Prepare:
	.string "I'm setting up my workspace\n"
	.string "to be able to see and record\l"
	.string "body language.$"
	
	
TrainerIsland_TrainerCity_Office_Text_Worker3_BLanguage:
	.string "I'm busy. What is it?\p"
	.string "Oh, what I'm working on?\p"
	.string "My workspace is set up to\n"
	.string "read your body language\l"
	.string "during battle.\p"
	.string "It's giving me so much\n"
	.string "insight!$"
	
TrainerIsland_TrainerCity_Office_Text_Worker4_Prepare:
	.string "I'm setting up my workspace\n"
	.string "to be able to hear and record\l"
	.string "your voice commands.$"
	
	
TrainerIsland_TrainerCity_Office_Text_Worker4_VoiceRecording:
	.string "I'm busy. What is it?\p"
	.string "Oh, what I'm working on?\p"
	.string "My workspace is set up to\n"
	.string "hear and record your voice\l"
	.string "commands during battle.\p"
	.string "It's enlightening!$"
