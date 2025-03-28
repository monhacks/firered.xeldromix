PewterCity_Gym_Text_BrockIntro::
    .string "So, you're here. I'm Brock.\n"
    .string "I'm Pewter's Gym Leader.\p"
    .string "My rock-hard willpower is evident\n"
    .string "even in my Pokémon.\p"
    .string "My Pokémon are all rock hard, and\n"
    .string "have true-grit determination.\p"
    .string "That's right - my Pokémon are all\n"
    .string "the Rock-type!\p"
    .string "Fuhaha! You're going to challenge\n"
    .string "me knowing that you'll lose?\p"
    .string "That's the Trainer's honor that\n"
    .string "compels you to challenge me.\p"
    .string "Fine, then!\n"
    .string "Show me your best!{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"

@ NOTE: This defeat text actually causes a buffer overflow. It's too long for the gDisplayedStringBattle
@ buffer that it's put into, and it stomps all over the gBattleTextBuffs after, as well as the otherwise
@ unused array after that, sFlickerArray. Perhaps that's the reason why said array exists.
PewterCity_Gym_Text_BrockDefeat::
    .string "I took you for granted, and so\n"
    .string "I lost.\p"
    .string "As proof of your victory, I confer\n"
    .string "on you this…the official Pokémon\l"
    .string "League Boulder Badge.\p"
    .string "{FONT_NORMAL}{PLAYER} received the Boulder Badge\n"
    .string "from BROCK!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}\p"
    .string "{FONT_MALE}Having the Boulder Badge allows\n"
    .string "you to train Pokémon up to Lv. 21.\p"
    .string "It also enables the use of the\n"
    .string "move Flash outside of battle.\p"
    .string "Of course, a Pokémon must know the\n"
    .string "move Flash to use it.$"

PewterCity_Gym_Text_TakeThisWithYou::
    .string "Wait!\n"
    .string "Take this with you.$"

PewterCity_Gym_Text_ReceivedTM39FromBrock::
    .string "{PLAYER} received TM39\n"
    .string "from Brock!$"

PewterCity_Gym_Text_ExplainTM39::
    .string "A TM, Technical Machine, contains a\n"
    .string "technique for Pokémon.\p"
    .string "Using a TM teaches the move it\n"
    .string "contains to a Pokémon.\p"
    .string "A TM can be used an unlimited\n"
    .string "amount of times, so free free\p"
    .string "to teach it to all your Pokémon.\p"
    .string "Anyways…\n"
    .string "TM39 contains Rock Tomb.\p"
    .string "It hurls boulders at the foe and\n"
    .string "lowers its Speed.$"

PewterCity_Gym_Text_BrockPostBattle::
    .string "There are all kinds of Trainers in\n"
    .string "this huge world of ours.\p"
    .string "You appear to be very gifted as a\n"
    .string "Pokémon Trainer.\p"
    .string "So let me make a suggestion.\p"
    .string "Go to the Gym in Cerulean and test\n"
    .string "your abilities.$"

PewterCity_Gym_Text_DontHaveRoomForThis::
    .string "You don't have room for this.$"

PewterCity_Gym_Text_LiamIntro::
    .string "Stop right there, kid!\p"
    .string "You're ten thousand light-years \n"
    .string "from facing Brock!$"

PewterCity_Gym_Text_LiamDefeat::
    .string "Darn!\p"
    .string "Light-years isn't time…\n"
    .string "It measures distance!$"

PewterCity_Gym_Text_LiamPostBattle::
    .string "You're pretty hot.\n"
    .string "…But not as hot as Brock!$"

PewterCity_Gym_Text_LetMeTakeYouToTheTop::
    .string "Hiya!\n"
    .string "Do you want to dream big?\p"
    .string "Do you dare to dream of becoming\n"
    .string "the Pokémon champ?\p"
    .string "I'm no Trainer, but I can advise\n"
    .string "you on how to win.\p"
    .string "Let me take you to the top!$"

PewterCity_Gym_Text_LetsGetHappening::
    .string "All right!\n"
    .string "Let's get happening!$"

PewterCity_Gym_Text_TryDifferentPartyOrders::
    .string "The first Pokémon out in a match is\n"
    .string "at the left of the Pokémon List.\p"
    .string "By changing the order of Pokémon,\n"
    .string "you may gain an advantage.\p"
    .string "Try different orders to suit your\n"
    .string "opponent's party.$"

PewterCity_Gym_Text_ItsFreeLetsGetHappening::
    .string "It's a free service!\n"
    .string "Let's get happening!$"

PewterCity_Gym_Text_YoureChampMaterial::
    .string "Just as I thought!\n"
    .string "You're Pokémon champ material!$"

PewterCity_Gym_Text_GymStatue::
    .string "PEWTER POKéMON GYM\n"
    .string "LEADER: BROCK\p"
    .string "WINNING TRAINERS:\n"
    .string "{RIVAL}$"

PewterCity_Gym_Text_GymStatuePlayerWon::
    .string "PEWTER POKéMON GYM\n"
    .string "LEADER: BROCK\p"
    .string "WINNING TRAINERS:\n"
    .string "{RIVAL}, {PLAYER}$"

@Placeholder dialogue.
PewterCity_Gym_Text_BrockRematch::
    .string "This hack adds rematches, so\n"
    .string "I'll use YOU as a Drying Pan!\p"

PewterCity_Gym_Text_BrockRematchDefeat::
    .string "You're pretty hot! But not in\n"
    .string "the same way as Nurse Joy.\p"

PewterCity_Gym_Text_BrockPostRematch::
    .string "That battle was almost as\n"
    .string "good as my jelly doughnuts.\p"
