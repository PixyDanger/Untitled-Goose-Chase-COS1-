#include "LeadMenu.h"
#include "Lead.h"

void LeadMenu::AccessLeads()
{
    char charAnswer;
    bool intro = false;
    do
    {
        charAnswer = UI::yesORno("Welcome are you the investigator? (y,n)");

        if (charAnswer == 'y')
        {
            UI::Spacer();
            UI::Message("Thank the gods! You arrived quickly. The captain of the city guard sent me to greet you.");
            intro = true;
        }
        else if (charAnswer == 'n')
        {
            UI::Spacer();
            UI::Message("Oh, nevermind then, please be on your way!");
            UI::Spacer();
            UI::Message("Your journey has ended.");
            UI::Spacer();
            return;

        }

        else { UI::Message("That answer wasn't quite clear. Please use y or n for your response"); }

    } while (!intro);

    UI::Message("Someone kidnapped Sir _____ last night, Her Lady _____. Is overwrought. We need to find him immediately.");
    UI::Spacer();
    UI::Message("We have some leads base on the staff and locals we spoke with.");
    UI::Spacer();
    std::cout << "\t";
    UI::Message("One of the first reports we recieved was from a local fisherman, Jaune. This was actually slightly before the kidnapping. Jaune gave us a heads up that there was a boat he didn't recognize pulled up on shore rather close to the castle. We had already put it on or rounds for the next day, just to be safe. When we went to talk with them after the kidnapping the man on the boat agreed to stay for a few days, but refused to talk about the incident.");
    UI::Spacer();
    std::cout << "\t";
    UI::Message("Our next lead came from one of the huntsmen in town, Sun. He reported an armored man he bumped to in the Emerald Forest. When he tried to check on the man to see if he was lost and the man just laughed and kept walking. Ren drew a map to where he'd run into the man and noted he carried a large bag and came from the general direction of the castle.");
    UI::Spacer();
    std::cout << "\t";
    UI::Message("Last, and perhaps weirdest, the Valkyrie twins found a trail of toadstools and fairy flowers going into Forever Fall. Forever Fall is an odd little forest that is seperated from the rest of the land by two rivers, and is butted up against the base of a cliff off Mountain Glenn. The rivers are actually formed from waterfalls coming off that same mountain. It's a creepy little woods, there is a bridge of sorts, a small strip of land where the rivers almost touch, but its rare someone uses it. Since the kidnapping the bridge has been covered with the mushrooms and flowers the kids were going on about.");
    UI::Message("That's all we have at this time.");
    UI::Spacer();
    UI::Message("To summarize you can:");
    UI::Message("(1) Check out a suspicious boat near the castle.");
    UI::Message("(2) Track down an armored figure seen in the woods, coming from the general direction of the castle.");
    UI::Message("(3) Enter Forever Fall and follow the path of toadstools and fairy flowers.");
    UI::Spacer();


    int leadVerify = UI::VerifyNumber("There isn't much time, which are you going to follow?", 1, 3);
    Lead::LeadPlayerChoice(leadVerify);

}
