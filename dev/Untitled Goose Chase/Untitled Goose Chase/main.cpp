
#include <iostream>
#include <string>
#include <vector>
#include "UI.h"
#include "Character.h"
#include "LeadChoice.h"
#include "ScenarioChoice.h"
#include "Playthrough.h"


int main()
{
    UI::Divider();
    UI::Message("XXXXXXXXXXXXX UNTITLED GOOSE CHASE XXXXXXXXXXXXX");
    UI::Divider();
    UI::Spacer();

    UI::Message("Welcome are you the investigator? (y,n)");

    char answer;
    std::cin >> answer;

        if (answer == 'y')
        {
            UI::Message("Thank the gods! You arrived quickly. The captain of the city guard sent me to greet you.");
        }
        else if (answer == 'n')
        {
            UI::Message("Oh, nevermind then, please be on your way!");
        }
        else
        {
            UI::Message("Invalid Answer"); //will need to add loop back 
        }

    UI::Message("Someone kidnapped Sir _____ last night, Her Lady _____. Is overwrought. We need to find him immediately.");
    UI::Spacer();
    UI::Message("We have some leads base on the staff and locals we spoke with.");
    UI::Spacer();
    UI::Message("Explains 3 - 5 leads");
    UI::Spacer();
    UI::Message("There isn't much time, which are you going to follow?");
    UI::Spacer();
    UI::Message("List summary of the lead options, numbered");
    UI::Message("There isn't much time, which are you going to follow?");
    UI::Message("(Choose a lead using the number assigned to it.)");
    UI::Message("There isn't much time, which are you going to follow?");
    UI::Message("List summary of the lead options, numbered");
    
    int leadInt;
    bool leadCheck = false;
    std::cin >> leadInt;
    leadCheck = UI::Verify(leadInt, 1, 4);
    if (leadCheck == false)
    {
        UI::Message("That was not a choice. Are you sure you are an investigator?");
    }
    if (leadCheck == true)
    {
        switch (leadInt)
        {
        case 1:
            LeadChoice::LeadScenarioChoice(1);
            UI::Message("Choice 1");
            break;

        case 2:
            UI::Message("Choice 2");
            break;

        case 3:
            UI::Message("Choice 3");
            break;

        case 4:
            UI::Message("Thank you for playing.");
            return 0;
            break;

        }
    }


    return 0;
}


