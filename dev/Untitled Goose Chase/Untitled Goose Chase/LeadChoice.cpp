#include "LeadChoice.h"


static void LeadScenarioChoice(int leadOption)

{
    int scenarioChoice;
    bool validateChoice;

    switch (leadOption)
    {
    case 1:
        //Modular code, once this is complete I should be able to reuse it changing the scenario description and choices. 
        //This should be a good starting point for the scenario class as well. 
        UI::Message("Describe Scenario and 3 options");
        UI::Message("Ask user what they would like to do from options");
        std::cin >> scenarioChoice;
        validateChoice = UI::Verify(scenarioChoice, 1, 3);
        if (validateChoice == true)
        {
            //go to scenario choice
        }
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