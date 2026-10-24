#pragma once
#include "Player.h"
#include "UI.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <sstream>


class PlayerHistory :
    public Player
{
private:
    int _leadChoice = 0;
    int _scenarioChoice = 0;
   


public:

    int getLeadChoice();
    int getScenarioChoice();
    PlayerHistory(const std::string& playerName, int leadChoice, int scenarioChoice);
    std::string PlayerStory();
    static void StoreStory(const std::string& playerName, int& leadChoice, int& scenarioChoice);
    static void GetStory();
    static void ClearStory();
    
  
};

