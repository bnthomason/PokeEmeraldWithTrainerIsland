TrainerIsland_Entrance_Mart_MapScripts::
	.byte 0

TrainerIsland_Entrance_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart TrainerIsland_Entrance_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
TrainerIsland_Entrance_Mart_Pokemart:
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_ETHER
	.2byte ITEM_ELIXIR
	.2byte ITEM_MAX_ETHER
	.2byte ITEM_MAX_ELIXIR
	.2byte ITEM_REVIVE
	.2byte ITEM_MAX_REVIVE
	.2byte ITEM_X_SP_ATK
	.2byte ITEM_X_SP_DEF
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_NONE
	release
	end

TrainerIsland_Entrance_Mart_EventScript_Woman::
	msgbox TrainerIsland_Entrance_Mart_Text_Pokeballs, MSGBOX_NPC
	end

TrainerIsland_Entrance_Mart_EventScript_Man::
	msgbox TrainerIsland_Entrance_Mart_Text_SpecialItems, MSGBOX_NPC
	end
	
TrainerIsland_Entrance_Mart_Text_Pokeballs:
	.string "This pokemart does not sell\n"
	.string "Pokeballs.\p"
	.string "I wanted to buy some, but then I\n"
	.string "heard that this island does not\l"
	.string "have wild pokemon…\p"
	.string "What kind of island is this?!$"

TrainerIsland_Entrance_Mart_Text_SpecialItems:
	.string "This mart sells some unique items…\n"
	.string "Max Revives? Ethers and Elixirs?\l"
	.string "I never heard of those!$"

