.set LOCALID_NURSE, 1

TrainerIsland_Entrance_PokemonCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerIsland_Entrance_PokemonCenter_OnTransition
	.byte 0

TrainerIsland_Entrance_PokemonCenter_OnTransition:
	setrespawn HEAL_LOCATION_TRAINER_ISLAND_HARBOUR
	end


TrainerIsland_Entrance_PokemonCenter_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end
