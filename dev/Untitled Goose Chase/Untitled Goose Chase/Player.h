#pragma once
#include <string>

class Player
{
protected:
	std::string _playerName;
	std::string _characterName;

public:
	std::string& getPlayer();
	std::string& getCharacter();

	void setPlayer(std::string& playerName);
	void setCharacter(std::string& characterName);
};

