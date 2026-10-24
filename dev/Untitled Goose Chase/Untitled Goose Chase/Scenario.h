#pragma once
#include "Lead.h"
#include "PlayerHistory.h"
#include "Player.h"
#include "LeadMenu.h"

class Scenario
{
public:

	static void Boat(int scenarioOption);

	static void Paladin(int scenarioOption);

	static void Fairy(int scenarioOption);

	static int LeadSave();

	static int ScenarioSave();

};

