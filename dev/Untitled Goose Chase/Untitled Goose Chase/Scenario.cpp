#include "Scenario.h"

void Scenario::Boat(int scenarioOption)
{
    bool chance = false;
    switch (scenarioOption)
    {
    case 1:
        UI::Message("The man is lost and doesn't trust outsiders. He looks at you for a long moment as if deciding something.");
        chance = UI::rollForIt(14);
        if (chance == true)
        {
            UI::Message("Something in your eyes must convince him. He points accross the river to a small cave. I saw the goose go there, before he lets the sail free and the homonculus pushes them off.");
            UI::Message("You head on down to the cave a peer inside.");
            UI::Message("It appears Sir Oscar is not sir, for she is in a nest full of eggs made of gold.");
        }
        break;

    case 2:
        UI::Message("Player History is Under Construction");
        break;

    case 3:
       
        UI::Message("Thank you for playing.");
        break;
    }
}

void Scenario::Paladin(int scenarioOption)
{
}

void Scenario::Fairy(int scenarioOption)
{
}
