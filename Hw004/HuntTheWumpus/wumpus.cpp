// Kelby Hubbard
// CS202
// March 8, 2020
// Hw004 -- Hunt the Wumpus
#include "wumpus.hpp"


Wumpus::Wumpus() {}

void Wumpus::setCurrentRoom(const Cave& room)
{
  _currentRoom = room.getRoom();
}

int Wumpus::getCurrentRoom() const
{
  return _currentRoom;
}

int Wumpus::getAliveState() const
{
  return _alive;
}

void Wumpus::setAliveState(int type)
{
  _alive = type;
}
