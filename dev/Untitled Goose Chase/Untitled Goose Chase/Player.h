#pragma once
#include <string>

class Player
{
protected:
	std::string _playerName;
	std::string _characterName;

public:
	std::string& getPlayer();

	void setPlayer(std::string& playerName);

};

