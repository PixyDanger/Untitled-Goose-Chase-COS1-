#include "LeadChoice.h"
#include <string>


void LeadChoice::LeadPlayerChoice(int leadOption)

{
   int scenarioChoice;
    bool validateChoice;

    switch (leadOption)
    {
    case 1:
        //Modular code, once this is complete I should be able to reuse it changing the scenario description and choices. 
        //This should be a good starting point for the scenario class as well. 
        UI::Message("Sucessfully accessed Lead Choices");
        UI::Message("Describe Scenario and 3 options");
        scenarioChoice = UI::VerifyNumber("Ask user what they would like to do from options", 1, 3);
        std::cout << "Placeholder sucessfully verified.";

        break;


    case 2:



        break;

    case 3:



        break;



    case 4:



        break;



    default:

        break;
    }
}

