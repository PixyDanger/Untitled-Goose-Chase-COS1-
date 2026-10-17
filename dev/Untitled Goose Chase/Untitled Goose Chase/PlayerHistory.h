#pragma once
#include "Player.h"

class PlayerHistory :
    public Player
{
private:
    int _leadChoice = 0;
    int _scenarioChoice = 0;

public:

    PlayerHistory(std::string& playerName, std::string& characterName, int& leadChoice, int& scenarioChoice);


};

