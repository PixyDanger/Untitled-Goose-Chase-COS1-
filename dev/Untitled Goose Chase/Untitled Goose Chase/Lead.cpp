#include "Lead.h"
#include <string>
#include "Scenario.h"


void Lead::LeadPlayerChoice(int leadOption)

{
   int scenarioChoice;

    switch (leadOption)
    {
    case 1:
        //Modular code, once this is complete I should be able to reuse it changing the scenario description and choices.
        UI::ClearUniversal();
        UI::Message("As you approach the boat you see it bears the mark of the Branwen tribe. A group with an almost cult mentality. However, individual members are a frequent sight in the area, selling pelts, meat, and healing fauna.");
        UI::Message("A man steps out onto the deck of the boat followed by a large homonculus.");
        UI::Continue();
        UI::Spacer();
        UI::Message("You can try the following tactics:");
        UI::Message("(1) Investigate: Attempt to to gather informations without appearing suspious.");
        UI::Message("(2) Insigate: Attempt a brute force method to either yield information or remove the obstacle.");
        UI::Message("(3) Interest: Attempt to start a friendly conversation to gather information.");
        scenarioChoice = UI::VerifyNumber("How do you want to do this?", 1, 3);
        Scenario::Boat(scenarioChoice);
        

        break;


    case 2:

        UI::Message("");
        UI::Message("");
        UI::Spacer();
        UI::Message("You can try the following tactics:");
        UI::Message("(1) Investigate: Attempt to to gather informations without appearing suspious.");
        UI::Message("(2) Insigate: Attempt a brute force method to either yield information or remove the obstacle.");
        UI::Message("(3) Interest: Attempt to start a friendly conversation to gather information.");
        scenarioChoice = UI::VerifyNumber("How do you want to do this?", 1, 3);
        Scenario::Paladin(scenarioChoice);
      


        break;

    case 3:

        UI::Message("You follow the winding path of toadstools and glowing flowers for what feels like hours. Finally you reach a clearing where fae creatures are drinking honey and cream. While you see an assortment of small fairies of many colors, you do not see a goose.");
        UI::Spacer();
        UI::Message("You can try the following tactics:");
        UI::Message("(1) Investigate: Attempt to to gather informations without appearing suspious.");
        UI::Message("(2) Insigate: Attempt a brute force method to either yield information or remove the obstacle.");
        UI::Message("(3) Interest: Attempt to start a friendly conversation to gather information.");
        scenarioChoice = UI::VerifyNumber("How do you want to do this?", 1, 3);
        Scenario::Fairy(scenarioChoice);

        break;




    default:

        break;
    }
}

