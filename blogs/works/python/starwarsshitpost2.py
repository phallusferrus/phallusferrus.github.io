



#preamble = "No my father didn't fight in the wars he was a navigator on a spice freighter.\n>That's what your uncle told you.
#No, my father didn't fight in the wars. He was a navigator on a spice freighter.
#>That's what your uncle told you. He didn't hold with your father's ideals. Thought he should have stayed here and not gotten involved.
#You fought in the Clone Wars?
#>Yes, I was once a Jedi Knight the same as your father.
#I wish I'd known him.
#>He was the best starpilot in the galaxy, and a cunning warrior. I understand you've become quite a good pilot yourself. And he was a good friend. Which reminds me, I have something here for you. You father wanted you to have this when you were old enough, but your uncle wouldn't allow it. He feared you might follow old Obi-Wan on some damn fool idealistic crusade like your father did.
#C-3PO: Sir, if you'll not be needing me, I'll close down for awhile.
#Sure, go ahead.
#[C-3PO shuts down.]
#[to Ben] What is it?
#>Your father's lightsaber. [He turns it on and hands it to Luke, who begins swinging it around while Ben continues.] This is the weapon of a Jedi Knight. Not as clumsy or random as a blaster. An elegant weapon, for a more civilized age. For over a thousand generations, the Jedi Knights were guardians of peace and justice in the Old Republic. Before the dark times. Before the Empire.
#[turns off the lightsaber] How did my father die?
#>A young Jedi named Darth Vader, who was a pupil of mine until he turned to evil, helped the Empire hunt down and destroy the Jedi Knights. He betrayed and murdered your father. Now the Jedi are all but extinct. Vader was seduced by the dark side of the Force.
#The Force?
#>The Force is what gives a Jedi his powers. It's an energy field created by all living things. It surrounds us, penetrates us, it binds the galaxy together. [to R2-D2] Now, let's see if we can't figure out who you are, my little friend. And where you come from.
#I saw part of the message he was
#>I seem to have found it.
#General Kenobi. Years ago, you served my father in the Clone Wars. Now he begs you to help him in his struggle against the Empire. I regret that I am unable to present my father's request to you in person, but my ship has fallen under attack and I'm afraid my mission to bring you to Alderaan has failed. I have placed information vital to the survival of the Rebellion into the memory systems of this R2 unit. My father will know how to retrieve it. You must see this droid safely delivered to him in Alderaan. This is our most desperate hour. Help me, Obi-Wan Kenobi. You're my only hope. [looks to the side quickly, then crouches to end the message]
#>You must learn the ways of the Force if you're to come with me to Alderaan.
#Alderaan? I'm not going to Alderaan. I've got to go home. It's late, I'm in for it as it is.
#>I need your help, Luke. She needs your help. I'm getting too old for this sort of thing.
#I can't get involved! I've got work to do! It's not that I like the Empire, I hate it, but there's nothing I can do about it right now. It's such a long way from here.
#>That's your uncle talking.
#Oh God, my uncle. How am I ever gonna explain this?
#>Learn about the Force, Luke.
#Look, I can take you as far as Anchorhead. You can get a transport there to Mos Eisley or wherever you're going.
#>You must do what you feel is right, of course."






intro = "No, my father didn't fight in the wars. He was a navigator on a spice freighter.\n>That's what your uncle told you. He didn't hold with your father's ideals. Thought he should have stayed here and not gotten involved.\nYou fought in the Clone Wars?\n>Yes, I was once a Jedi Knight the same as your father.\nI wish I'd known him.\n>He was the best starpilot in the galaxy, and a cunning warrior. I understand you've become quite a good pilot yourself. And he was a good friend. Which reminds me, I have something here for you. You father wanted you to have this when you were old enough, but your uncle wouldn't allow it. He feared you might follow old Obi-Wan on some damn fool idealistic crusade like your father did\n>Your father's lightsaber. This is the weapon of a Jedi Knight. Not as clumsy or random as a blaster. An elegant weapon, for a more civilized age. For over a thousand generations, the Jedi Knights were guardians of peace and justice in the Old Republic. Before the dark times. Before the Empire.\nHow did my father die?\n>A young Jedi named Darth Vader, who was a pupil of mine until he turned to evil, helped the Empire hunt down and destroy the Jedi Knights. He betrayed and murdered your father. Now the Jedi are all but extinct. Vader was seduced by the dark side of the Force.\nThe Force?\n>The Force is what gives a Jedi his powers. It's an energy field created by all living things. It surrounds us, penetrates us, it binds the galaxy together."



leia = ">General Kenobi. Years ago, you served my father in the Clone Wars. Now he begs you to help him in his struggle against the Empire. I regret that I am unable to present my father's request to you in person, but my ship has fallen under attack and I'm afraid my mission to bring you to Alderaan has failed. I have placed information vital to the survival of the Rebellion into the memory systems of this R2 unit. My father will know how to retrieve it. You must see this droid safely delivered to him in Alderaan. This is our most desperate hour. Help me, Obi-Wan Kenobi. You're my only hope."



response = ">You must learn the ways of the Force if you're to come with me to Alderaan.\nAlderaan? I'm not going to Alderaan. I've got to go home. It's late, I'm in for it as it is.\n>I need your help, Luke. She needs your help. I'm getting too old for this sort of thing.\nI can't get involved! I've got work to do! It's not that I like the Empire, I hate it, but there's nothing I can do about it right now. It's such a long way from here.\n>That's your uncle talking.\nOh God, my uncle. How am I ever gonna explain this?\n>Learn about the Force, Luke.\nLook, I can take you as far as Anchorhead. You can get a transport there to Mos Eisley or wherever you're going.\n>You must do what you feel is right, of course."

print(intro)


father = input("father :    ").upper()
fatherGEN = input("father genitive: ").upper()


introR = "No, my "+father+" didn't fight in the wars. He was a navigator on a spice freighter.\n>That's what your uncle told you. He didn't hold with your "+fatherGEN+" ideals. Thought he should have stayed here and not gotten involved.\nYou fought in the Clone Wars?\n>Yes, I was once a Jedi Knight the same as your father.\nI wish I'd known him.\n>He was the best starpilot in the galaxy, and a cunning warrior. I understand you've become quite a good pilot yourself. And he was a good friend. Which reminds me, I have something here for you. You father wanted you to have this when you were old enough, but your uncle wouldn't allow it. He feared you might follow old Obi-Wan on some damn fool idealistic crusade like your father did\n>Your father's lightsaber. This is the weapon of a Jedi Knight. Not as clumsy or random as a blaster. An elegant weapon, for a more civilized age. For over a thousand generations, the Jedi Knights were guardians of peace and justice in the Old Republic. Before the dark times. Before the Empire.\nHow did my father die?\n>A young Jedi named Darth Vader, who was a pupil of mine until he turned to evil, helped the Empire hunt down and destroy the Jedi Knights. He betrayed and murdered your father. Now the Jedi are all but extinct. Vader was seduced by the dark side of the Force.\nThe Force?\n>The Force is what gives a Jedi his powers. It's an energy field created by all living things. It surrounds us, penetrates us, it binds the galaxy together."

pause = (15 * '#')

print(pause +' \n\n\n' + pause)
print(introR)
