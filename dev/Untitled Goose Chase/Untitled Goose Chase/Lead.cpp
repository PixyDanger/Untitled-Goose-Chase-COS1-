#include "Lead.h"
#include <string>


void Lead::LeadPlayerChoice(int leadOption)

{
   int scenarioChoice;

    switch (leadOption)
    {
    case 1:
        //Modular code, once this is complete I should be able to reuse it changing the scenario description and choices. 
        //This should be a good starting point for the scenario class as well. 
        UI::Message("As you approach the boat you see it bears the mark of the Branwen tribe. A group with an almost cult mentality. However, individual members are a frequent sight in the area, selling pelts, meat, and healing fauna.");
        UI::Message("A man steps out onto the deck of the boat followed by a large homonculus.");
        UI::Message("You can try the following tactic:");
        UI::Message("(1) Investigate: Attempt to to gather informations without appearing suspious.");
        UI::Message("(2) Insigate: Attempt a brute force method to either yield information or remove the obstacle.");
        UI::Message("(3) Interest: Attempt to start a friendly conversation to gather information.");
        scenarioChoice = UI::VerifyNumber("How do you want to do this?", 1, 3);
        

        break;


    case 2:

        UI::Message("Sucessfully accessed Lead Choices");
        UI::Message("Describe Scenario and 3 options");
        scenarioChoice = UI::VerifyNumber("Ask user what they would like to do from options", 1, 3);
        std::cout << "Placeholder sucessfully verified.";


        break;

    case 3:



        break;




    default:

        break;
    }
}

