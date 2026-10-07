#include "Character.h"
#include <iostream>
#include <string>
#include <vector>



void Character::SetPlayerName(const char* playerName)
{
	if (playerName == nullptr) { return; }
	delete[] _playerName;
	size_t length = strlen(playerName) + 1;
	_playerName = new char[length];
	strcpy_s(_playerName, length, playerName);
};

void Character::SetCharacterName(const char* characterName)
{
	if (characterName == nullptr) { return; }
	delete[] _characterName;
	size_t length = strlen(characterName) + 1;
	_characterName = new char[length];
	strcpy_s(_characterName, length, characterName);

}

Character::Character(char* playerName, char* characterName, int playcount)
{
	SetPlayerName(playerName);
	SetCharacterName(characterName);
	_playCount = playcount;
}

Character::Character(const Character& playersheet)
{
	SetPlayerName(playersheet._playerName);
	SetCharacterName(playersheet._characterName);
	_playCount = playersheet._playCount;
}

Character::~Character()
{
	delete[] _playerName;
	_playerName = nullptr;
	delete[] _characterName;
	_characterName = nullptr;
}
;

