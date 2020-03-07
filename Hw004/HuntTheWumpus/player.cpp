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

//Shows player hazards in connecting rooms to player
void seeHazards(const Cave& room, const Hazard& bat1,
               const Hazard& bat2, const Hazard& pit1,
               const Hazard& pit2, const Wumpus& wumpus)
{
  //If bat1 is in adjacent room
  if (room.getRoomOne() == bat1.getCurrentRoom() ||
      room.getRoomTwo() == bat1.getCurrentRoom() ||
      room.getRoomThree() == bat1.getCurrentRoom())
    {
      cout << "I hear flapping." << endl;
    }

    //If bat2 is in adjacent room
    if (room.getRoomOne() == bat2.getCurrentRoom() ||
        room.getRoomTwo() == bat2.getCurrentRoom() ||
        room.getRoomThree() == bat2.getCurrentRoom())
      {
        cout << "I hear flapping." << endl;
      }

    //If pit1 is in adjacent room
    if (room.getRoomOne() == pit1.getCurrentRoom() ||
        room.getRoomTwo() == pit1.getCurrentRoom() ||
        room.getRoomThree() == pit1.getCurrentRoom())
      {
        cout << "I feel a breeze." << endl;
      }

      //If pit2 is in adjacent room
      if (room.getRoomOne() == pit2.getCurrentRoom() ||
          room.getRoomTwo() == pit2.getCurrentRoom() ||
          room.getRoomThree() == pit2.getCurrentRoom())
        {
          cout << "I feel a breeze." << endl;
        }
}
