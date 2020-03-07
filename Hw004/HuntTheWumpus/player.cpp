// Kelby Hubbard
// CS202
// March 8, 2020
// Hw004 -- Hunt the Wumpus
#include "player.hpp"
#include <iostream>

Player::Player() {}

void Player::setCurrentRoom(const Cave& room)
{
  _currentRoom = room.getRoom();
}

int Player::getCurrentRoom() const
{
  return _currentRoom;
}

int Player::getAlive() const
{
  return _alive;
}

//Shows player hazards in connecting rooms to player
void Player::seeHazards(const Cave& room, const Hazard& bat1,
               const Hazard& bat2, const Hazard& pit1,
               const Hazard& pit2, const Wumpus& wumpus)
{
  //If bat1 is in adjacent room
  if (room.getRoomOne() == bat1.getCurrentRoom() ||
      room.getRoomTwo() == bat1.getCurrentRoom() ||
      room.getRoomThree() == bat1.getCurrentRoom())
    {
      std::cout << "I hear flapping." << std::endl;
    }

    //If bat2 is in adjacent room
    if (room.getRoomOne() == bat2.getCurrentRoom() ||
        room.getRoomTwo() == bat2.getCurrentRoom() ||
        room.getRoomThree() == bat2.getCurrentRoom())
      {
        std::cout << "I hear flapping." << std::endl;
      }

    //If pit1 is in adjacent room
    if (room.getRoomOne() == pit1.getCurrentRoom() ||
        room.getRoomTwo() == pit1.getCurrentRoom() ||
        room.getRoomThree() == pit1.getCurrentRoom())
      {
        std::cout << "I feel a breeze." << std::endl;
      }

      //If pit2 is in adjacent room
      if (room.getRoomOne() == pit2.getCurrentRoom() ||
          room.getRoomTwo() == pit2.getCurrentRoom() ||
          room.getRoomThree() == pit2.getCurrentRoom())
        {
          std::cout << "I feel a breeze." << std::endl;
        }

      //If wumpus is in an adjacent room
      if (room.getRoomOne() == wumpus.getCurrentRoom() ||
          room.getRoomTwo() == wumpus.getCurrentRoom() ||
          room.getRoomThree() == wumpus.getCurrentRoom())
        {
          std::cout << "I smell a Wumpus." << std::endl;
        }
}

//Shows connecting rooms to player
void Player::surrounding(const Cave& room)
{
  std::cout << "You are in room " << _currentRoom << std::endl;
  std::cout << "Tunnels lead to rooms " << room.getRoomOne() << " "
            << room.getRoomTwo() << " " << room.getRoomThree() << std::endl;
}

//Allows player to move to connecting room
void Player::move(const Cave& room)
{
  string input = "";
  int choice;
  bool loop = true;
  while (loop)
  {
    std::cout << "Where to? ";
    getline(cin, input);
    istringstream iss(input);
    iss >> choice;
    if (iss)
    {
      //If player selected room 1
      if (choice == room.getRoomOne())
      {
        _currentRoom = room.getRoomOne();
        loop = false;
      }
      //If player selected room 2
      else if (choice == room.getRoomTwo())
      {
        _currentRoom = room.getRoomTwo();
        loop = false;
      }
      //If player selected room 3
      else if (choice == room.getRoomThree())
      {
        _currentRoom = room.getRoomThree();
        loop = false;
      }
      else
      {
        loop = true;
      }
    }
    else
    {
      loop = true;
    }
  }



}
