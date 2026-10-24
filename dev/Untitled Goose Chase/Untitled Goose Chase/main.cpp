
#include <iostream>
#include <string>
#include <vector>
#include "UI.h"
#include "Player.h"
#include "LeadMenu.h"
#include "Lead.h"
#include "PlayerHistory.h"
#include "Scenario.h"


int main()
{
    int lead = -1;
    int scenario = -1;
    std::string name = "Grimm";
    bool playedGame = true;
        
        UI::Divider();
        UI::Message("XXXXXXXXXXXXX UNTITLED GOOSE CHASE XXXXXXXXXXXXX");
        UI::Divider();
        UI::Spacer();
        UI::Spacer();

        UI::Message("Welcome to Untitled Goose Chase.");
        UI::Spacer();
        UI::Message("Lady Salem's pet goose Sir Oscar has gone missing and she is offering an exorbitant sum for Sir Oscar's return.");
        UI::Message("Become the investigator and find out the mystery of what happened to Sir Oscar");
        UI::Spacer();

        int menuChoice = -1;
        do 
        {
            UI::Message("===================== MENU =====================");
            UI::Message("1. Start Adventure");
            UI::Message("2. See Player History");
            UI::Message("3. Retire");
            UI::Spacer();
            menuChoice = UI::VerifyNumber("What you you like to do? ", 1, 3);
            UI::Spacer();
                switch (menuChoice)
                {
                case 1:
                    playedGame = LeadMenu::AccessLeads();
                    if (playedGame == false)
                    {
                        break;
                    }
                    lead = Scenario::LeadSave();
                    scenario = Scenario::ScenarioSave();
                    name = LeadMenu::NameSave();
                    PlayerHistory::StoreStory(name, lead, scenario);
                    break;

                case 2:
                    UI::Message("Here is your story so far: ");
                    UI::Spacer();
                    PlayerHistory::GetStory;
                    break;

                case 3:
                    UI::Message("Thank you for playing.");
                    return 0;
                    break;
                }
            } while (menuChoice != 3);
      

    return 0;
}


