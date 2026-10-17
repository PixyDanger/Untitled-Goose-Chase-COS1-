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
    bool chance = false;
    bool chance2 = false;
    bool chance3 = false;
    switch (scenarioOption)
    {
    case 1:
        UI::Message("");
        
            UI::Message("Something in your eyes must convince him. He points accross the river to a small cave. I saw the goose go there, he mutters, before he lets the sail free and the homonculus pushes them off.");
            
            UI::Message("You head on down to the cave a peer inside.");
            UI::Message("It appears Sir Oscar is not sir, for she is in a nest full of eggs made of gold.");
            UI::Message("He stares at you unblinking for several moments before snapping his fingers. The sail suddenly billows and the homonculus pushes them off. With a magical gust of wind the boat is rushed down the river.");
        
        break;

    case 2:
        UI::Message("You try to force your way onto the boat. Before you have a chance to register what is happening you are thrown across the river. Your back smacks the water so hard you are dazed and struggle to find your barings as you sink. Then your legs feel the soft sand of the riverbed. You landed just short of the shore. As you comtemplate whether or not the construct meant to keep you alive you watch the boat sail off.");
        break;

    case 3:

        UI::Message("As you ask him about his travels and tribe, he begins to open up. I am Sun, he says, I was in a storm and got thrown off course. I came here as it seemed a safe place to get my bearings, but everyone is going crazy over the old woman's goose. It's right underneath the castle you can see it's cave from here. As he points, you indeed do see the entrance to a small cave.");
        chance = UI::rollForIt(12);
        UI::Message("I'd have told the others, but they acted like I was a thief. So I let them wonder.");
        UI::Message("You chuckle as you wish him well and head on down to the cave. You peer inside and laugh once more.");
        UI::Message("It appears Sir Oscar is not sir, for she is in a nest full of eggs made of gold.");
        break;
    }
}

void Scenario::Fairy(int scenarioOption)
{
}
