// Kelby Hubbard
// CS202
// March 8, 2020
// Hw004 -- Hunt the Wumpus
#include "cave.hpp"
#include "hazards.hpp"

Hazard::Hazard() {}

Hazard::Hazard(int type)
{
  _type = type;
}

int Hazard::getCurrentRoom()
{
  return _room;
}

int Hazard::getType()
{
  return _type;
}

void Hazard::setType(int type)
{
  _type = type;
}

void Hazard::setCurrentRoom(const Cave& room)
{
  _room = room.getRoom();
}
