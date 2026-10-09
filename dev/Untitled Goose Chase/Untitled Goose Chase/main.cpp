
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
    //bool playAgain = true;
    //do {
        
        UI::Divider();
        UI::Message("XXXXXXXXXXXXX UNTITLED GOOSE CHASE XXXXXXXXXXXXX");
        UI::Divider();
        UI::Spacer();

        char charAnswer;
        bool intro = false;
        do
        {
            charAnswer = UI::yesORno("Welcome are you the investigator? (y,n)");

            if (charAnswer == 'y')
            {
                UI::Message("\nThank the gods! You arrived quickly. The captain of the city guard sent me to greet you.");
                intro = true;
            }
            else if (charAnswer == 'n')
            {
                UI::Message("\nOh, nevermind then, please be on your way!");
                UI::Message("\nYour journey has ended.");
                return 0;
               
            }
            else { UI::Message("\nThat answer wasn't quite clear. Please use y or n for your response\n"); }

        } while (!intro);

        UI::Message("Someone kidnapped Sir _____ last night, Her Lady _____. Is overwrought. We need to find him immediately.");
        UI::Spacer();
        UI::Message("We have some leads base on the staff and locals we spoke with.");
        UI::Spacer();
        UI::Message("Explains 3 - 5 leads");
        UI::Spacer();
        UI::Message("List summary of the lead options, numbered");

        int leadVerify = UI::VerifyNumber("There isn't much time, which are you going to follow?", 1, 4);
        do
        {
            switch (leadVerify)
            {
            case 1:
                LeadChoice::LeadPlayerChoice(1);
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
        } while (leadVerify != 4);
    //} while (playAgain);


    return 0;
}


