#include "PlayerHistory.h"
#include <filesystem>

static const std::map<int, std::string> leadFollowed =

{
    { 0," deny being the investigator" },

    { 1,"go check out the mysterious boat" },

    { 2,"to find the armored man in the Emerald Forest" },

    { 3,"to follow the fairy trail into Forever Fall" }


};

static const std::map<int, std::string> endStory =

{

    { 1," were able to find Oscar with a little direction from the Branwen tribesman. You also found out that Oscar can lay golden egss.\n" },

    { 2," not convincing the tribesman to help you find Oscar. Your investigation was unsuccessful.\n " },

    { 3," getting thrown across the river by a homoculus. You were left bruised, sodden, and unsuccessful in your search.\n" },

    { 4," chatting with Qrow. He let you know where Oscar went, but you were surprised to see the goose a top her nest of golden eggs.\n" },

    { 5," finding out that Oscar was actually a polymorphed man and let the paladin leave with him.\n" },

    { 6," stealing the goose from the paladin and returning him to Salem. A few months after she died and her estate was taken over by a man with an alarming long neck. You feel you may have made a mistake.\n" },

    { 7," on the ground with a bruised face and ego as the paladin struck you for trying to steal the goose. During the struggle the goose was revealed to be a polymorphed man.\n" },

    { 8," dead. Your attempt to steal the goose ended with you being stabbed by the paladin. You were left bleeding out next to a man that had been diguised as a goose.\n" },

    { 9," learning about the a criminal named Roman and his illusionary witch companion. After the paladin proves the goose is not what had seemed, you were left with hope that Oscar may still be out there.\n" },

    { 10," in a clearing full of fairy. Upon noticing you they fled into the fae, leaving you empty handed.\n" },

    { 11," captured by fairies. Fortunately, they thought your attempt to attack them was adorable and treated you a night of festivities honoring Oscar. You and Oscar were left to go home the next morning.\n" },

    { 12," impressing the fairies with your charm and are allowed to take Oscar home. They were even kind enough to guide you home with fairy fire.\n" },

    { 13," failing to keep your wits about you and were sent into the fae. You will likely remain a befuddled guest of a fae court for the foreseeable future.\n" },

    { 14," doing nothing.\n" },

};


const auto* whichLead = &leadFollowed;
const auto* whichEnd = &endStory;
static std::vector<PlayerHistory> playerTimeline;

int PlayerHistory::getLeadChoice()
{
    return _leadChoice;
}

int PlayerHistory::getScenarioChoice()
{
    return _scenarioChoice;
}

PlayerHistory::PlayerHistory(const std::string& playerName, int leadChoice, int scenarioChoice)
{
    _playerName = playerName;
    _leadChoice = leadChoice;
    _scenarioChoice = scenarioChoice;
}

std::string PlayerHistory::PlayerStory()
{

   return "You decided to " + whichLead->at(_leadChoice) + " and ended up " + whichEnd->at(_scenarioChoice);
   
}

void PlayerHistory::StoreStory(const std::string& playerName, int& leadChoice, int& scenarioChoice)
{
    PlayerHistory currentStory(playerName, leadChoice, scenarioChoice);
    playerTimeline.push_back(currentStory);

    std::ofstream file("PlayerFile.txt", std::ios::app);
    if (!file)
    {
        UI::Message("Player's History not found.");
        return;
    }

    file << currentStory.getPlayer() << ','
        << currentStory.getLeadChoice() << ','
        << currentStory.getScenarioChoice()
        << '\n';

    file.close();

}

void PlayerHistory::GetStory()
{
    playerTimeline.clear();
    std::ifstream file("PlayerFile.txt");
    if (!file)
    {
        UI::Message("No saved stories found.");
        return;
    }

    std::string line;

    while (std::getline(file, line))
    {
        std::stringstream ss(line);

        std::string nameString;
        std::string leadString;
        std::string scenarioString;

        std::getline(ss, nameString, ',');
        std::getline(ss, leadString, ',');
        std::getline(ss, scenarioString);

        int savingLead = std::stoi(leadString);
        int savingScenario = std::stoi(scenarioString);

        playerTimeline.emplace_back(
            nameString,
            savingLead,
            savingScenario);
    }

    for ( auto& player : playerTimeline)
    {
        UI::Message(player.getPlayer());
        UI::Message(player.PlayerStory());
        UI::Spacer();
    }
    file.close();

}

void PlayerHistory::ClearStory()
{
    std::ofstream ofs;
    ofs.open("PlayerFile.txt", std::ios::trunc);
    ofs.close();
    UI::Message("Players save data is reset.");
}





