#pragma once
#include <iostream>
#include <string>
#include <vector>

class Character
{

public:

	char* _playerName = nullptr;
	char* _characterName = nullptr;
	int _playCount = 0;

	

	void SetPlayerName(const char* playerName);

	void SetCharacterName(const char* characterName);

	Character(char* playerName, char* characterName, int playcount);

	Character(const Character& playersheet);

	~Character();

	};


