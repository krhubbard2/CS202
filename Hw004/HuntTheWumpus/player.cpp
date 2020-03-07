// Kelby Hubbard
// CS202
// March 8, 2020
// Hw004 -- Hunt the Wumpus
#include "player.hpp"

Player::Player() {}

void Player::setCurrentRoom(const Cave& room)
{
  _currentRoom = room.getRoom();
}

int Player::getCurrentRoom() const
{
  return _currentRoom;
}
