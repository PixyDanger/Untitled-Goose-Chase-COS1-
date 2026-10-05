#pragma once
#include <iostream>
#include <string>
#include <vector>

class Character
{

public:

	char* _playerName;
	char* _characterName;
	int _playCount = 0;

	Character();

	void setName();

	Character(char* playerName, char* characterName, int playcount);


	};


