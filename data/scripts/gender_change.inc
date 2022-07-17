Common_Debug_EventScript_Change_Pokeemon_Gender::
	lock
	faceplayer
	bufferleadmonspeciesname 0
	MSGBOX ask, MSGBOX_YESNO
	compare VAR_RESULT 1
	goto_if_eq yesplease
	goto nothanks
	end

yesplease:
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 1
	specialvar VAR_0x8006, 551
	compare VAR_0x8006, 255
	goto_if_eq genderless
	goto femalecheck
	end

genderless:
	MSGBOX nogender, MSGBOX_AUTOCLOSE
	release
	end

femalecheck:
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 1
	specialvar VAR_0x8006, 551
	compare VAR_0x8006, 254
	goto_if_eq yesfemale
	goto ismale
	end

yesfemale:
	msgbox askmakemale MSG_YESNO
	compare VAR_RESULT,0
	goto_if_eq nothanks
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 255
	setvar VAR_0x8006, 0
	setvar VAR_0x8007, 255
	specialvar VAR_0x8005, 552
	MSGBOX done, MSGBOX_AUTOCLOSE
	release
	end

ismale:
	MSGBOX askmakefemale MSGBOX_YESNO
	compare VAR_RESULT 0
	goto_if_eq nothanks
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 255
	setvar VAR_0x8006, 254
	setvar VAR_0x8007, 255
	specialvar VAR_0x8005, 552
	MSGBOX done, MSGBOX_AUTOCLOSE
	release
	end

nothanks:
	MSGBOX no, MSGBOX_DEFAULT
	release
	end

ask:
	.string "Change gender?$"

no:
	.string "OK$"

nogender:
	.string "This pokemon is fine.$"

askmakemale:
	.string "This pokemon is Female, do you\n"
	.string "want to make it Male?$"

askmakefemale:
	.string "This pokemon is Male, do you\n"
	.string	"want to make it Female?$"

done:
	.string "Done.$"