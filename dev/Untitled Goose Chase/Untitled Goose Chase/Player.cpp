#include "Player.h"

std::string& Player::getPlayer()
{
	return _playerName;
}

//std::string& Player::getCharacter()
//{
//	return _characterName;
//}

void Player::setPlayer(std::string& playerName)
{
	_playerName = playerName;
}

//void Player::setCharacter(std::string& characterName)
//{
//	_characterName = characterName;
//}


