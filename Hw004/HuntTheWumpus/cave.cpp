// Kelby Hubbard
// CS202
// March 8, 2020
// Hw004 -- Hunt the Wumpus
#include "cave.hpp"
#include <iostream>
Cave::Cave() {}

Cave::Cave(int room)
{
  _room = room;
}

int Cave::getRoom() const
{
  return _room;
}
int Cave::getRoomOne() const
{
  return _one;
}

int Cave::getRoomTwo() const
{
  return _two;
}

int Cave::getRoomThree() const
{
  return _three;
}

void Cave::setRoomOne(const Cave& room)
{
  _one = room.getRoom();
}

void Cave::setRoomTwo(const Cave& room)
{
  _two = room.getRoom();
}

void Cave::setRoomThree(const Cave& room)
{
  _three = room.getRoom();
}
