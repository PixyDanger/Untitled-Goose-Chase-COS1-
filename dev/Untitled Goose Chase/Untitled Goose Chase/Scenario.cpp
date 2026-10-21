#include "Scenario.h"

void Scenario::Boat(int scenarioOption)
{
    bool chance = false;
    switch (scenarioOption)
    {
    case 1:
        UI::Spacer();
        UI::Message("The man is lost and doesn't trust outsiders. He looks at you for a long moment as if deciding something.");
        chance = UI::rollForIt(12);
        if (chance == true)
        {
            UI::Spacer();
            UI::Message("Something in your eyes must convince him. He points accross the river to a small cave. I saw the goose go there, he mutters, before he lets the sail free and the homonculus pushes them off.");
            UI::Message("You head on down to the cave a peer inside.");
            UI::Message("It appears Sir Oscar is not sir, for she is in a nest full of eggs made of gold.");
            UI::Spacer();
            UI::End();
            UI::ClearUniversal();
        }
        else
        {
            UI::Spacer();
            UI::Message("He stares at you unblinking for several moments before snapping his fingers. The sail suddenly billows and the homonculus pushes them off. With a magical gust of wind the boat is rushed down the river.");
            UI::Spacer();
            UI::End();
            UI::ClearUniversal();
        }
        break;

    case 2:
        UI::Spacer();
        UI::Message("You try to force your way onto the boat. Before you have a chance to register what is happening you are thrown across the river. Your back smacks the water so hard you are dazed and struggle to find your barings as you sink. Then your legs feel the soft sand of the riverbed. You landed just short of the shore. As you comtemplate whether or not the construct meant to keep you alive you watch the boat sail off.");
        UI::Spacer();
        UI::End();
        UI::ClearUniversal();
        break;

    case 3:
        UI::Spacer();
        UI::Message("As you ask him about his travels and tribe, he begins to open up. I am Sun, he says, I was in a storm and got thrown off course. I came here as it seemed a safe place to get my bearings, but everyone is going crazy over the old woman's goose. It's right underneath the castle you can see it's cave from here. As he points, you indeed do see the entrance to a small cave.");
        UI::Message("I'd have told the others, but they acted like I was a thief. So I let them wonder.");
        UI::Continue();
        UI::Spacer();
        UI::Message("You chuckle as you wish him well and head on down to the cave. You peer inside and laugh once more.");
        UI::Message("It appears Sir Oscar is not sir, for she is in a nest full of eggs made of gold.");
        UI::Spacer();
        UI::End();
        UI::ClearUniversal();
        break;
    }
}

void Scenario::Paladin(int scenarioOption)
{
    int illAdvised = (rand() % 20) + 1;
    switch (scenarioOption)
    {
    case 1:
        UI::Message("You stare at the paladin and then the goose and back again then motion for him to continue. He sighs and bops the bag, which tears apart as the goose is transformed into a man, with an unusaully long neck.");
        UI::Message("This will be a joy to explain to her lady, but at least the mystery is solved. The castle will likely be safer with the criminal in custody.");
        UI::Spacer();
        UI::End();
        UI::ClearUniversal();
        break;

    case 2:
        UI::Message("Not believing this tall tale you attempt to grab Oscar and run.");

        if (illAdvised >= 18)
        {
            UI::Message("Somehow you manage to steal the goose and make it back to Lady Salem. A few weeks later you hear of her being found dead in her sleep and a mysterious, unknown nephew with an unusually long neck takes over the estate.");
        }
        else if (illAdvised >= 10)
        {
            UI::Message("You attempt to grab the bag, the paladin sees and backhands you. You and the goose hit the ground hard. Ears ringing you look up to  to see the paladin clutching a small man by his awkwardly long neck.");
        }
        else
        {
            UI::Message("You manage to grab the bag, but the paladin accuses you being in league with the criminal and stabs you through with his blade. As you bleed out you see the goose has also been smote and watch him transform into a scrawny guy with a disproportionately long neck.");
        }
        UI::Spacer();
        UI::End();
        UI::ClearUniversal();
        break;

        case 3:

            UI::Message("You ask the Paladin to explain how he came to this conclusion. He tells you of Roman's partner in crime, a powerful illusionary witch called Neo.");
            UI::Message("She can make herself look like anyone, make enviroments look complete different, and has an uncanny knack for turning people into animals, he recounts. She always seems to match people to animal that matches them somewhat. A woman was seen with a rather irrate goose right after the crime, many witness remember seeing them. The goose never really calmed down and I was able to follow the string of angry goose tales all the way here.");
            UI::Message("While speaking with the staff I found out that Oscar had been ornery the last month. It would have been simple for Neo to have swapped the geese and plant Roman in Oscar's place.");
            UI::Continue();
            UI::Spacer();
            UI::Message("You ask how he could be sure. He turns to the bagged goose. Roman is an incompetent, and badly dressed leader. The sentence isn't even finished before the goose is flailing and honking up a storm.");
            UI::Message("You concede to let him take the goose. As he leaves he mentions that Oscar may still be alive. Neo prefers subterfuge and would want to have the option to swap them back.");
            UI::Message("You leave the clearing knowing this goose chase may have just begun.");
            UI::Spacer();
            UI::End();
            UI::ClearUniversal();
            break;
    }
}

void Scenario::Fairy(int scenarioOption)
{
    bool chance = false;
    switch (scenarioOption)
    {
    case 1:
        UI::Message("The fae notice you sneaking around immediately, and with a chorus of raspberries, they disappear back into the fae realm.");
        UI::Message("You search the clearing and find an elegant nest made of ribbons of velvet and studded with jewels. You search high and low and find no sign of Oscar.");
        UI::Spacer();
        UI::End();
        UI::ClearUniversal();
        break;

    case 2:
        UI::Message("As you run into the clearing to attack the fairies summon a fae web. They coo at you as you lie tangled on the ground. You get the feeling they think your attempt was adorable.");
        UI::Message("They roll you over and sit you up next to the wayward goose. Oscar has been decked out with a crown made of lost or stolen jewelry and a robe of beautiful velvets, silks, and cashmere.");
        UI::Message("You spend the night being plied with sweets and ambrosia. When you wake the next morning you are lying in a soft bed of moss with Oscar asleep on your chest. You gather the goose and your dignity and head back to the castle not sure how you will recount this tale.");
        UI::Spacer();
        UI::End();
        UI::ClearUniversal();
        break;

    case 3:

        chance = UI::rollForIt(14);
        UI::Message("You announce yourself and the fairies invite you into the clearing. As you chat you realize that much like you are attempting to cajole information out of them, they are trying to ply something from you.");
        if (chance == true)
        {
            UI::Message("You manage to keep your wits about you and they seem impressed. They lead you to Oscar and allow you to take him home.");
            UI::Message("It is late at night by the time you are heading back to the castle. You need not worry though as your way is lit by Oscar, apparently touched by fairy fire. Oh well, at least he made it home.");
            UI::Spacer();
            UI::End();
            UI::ClearUniversal();
        }
        
        else
        {
            UI::Message("As you chat everything starts to feel a bit fuzzy. You realize you made a critical mistake. You gave fae creatures your name.");
            UI::Continue();
            UI::Spacer();
            UI::Message("The fae start to chant and glow and with a flash of light you are transported to the fae. Still befuddled you recognize you are have been sent to a fairy court and will not likely be leaving anytime soon. For some reason this doesn't bother you, you aren't even sure what you were doing before this.");
            UI::Spacer();
            UI::End();
            UI::ClearUniversal();
        }
        break;
    }
}
