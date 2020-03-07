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

int Player::getArrows() const
{
  return _arrows;
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
      //Improper choice. Try again.
      else
      {
        loop = true;
      }
    }
    //Improper choice. Try again.
    else
    {
      loop = true;
    }
  }
}

//Hazard or wumpus acts upon player if player is in same room
void Player::act(const Cave& room, const Hazard& bat1,
         const Hazard& bat2, const Hazard& pit1,
         const Hazard& pit2, const Wumpus& wumpus)
{
  //If player is in same room as wumpus
  if (room.getRoom() == wumpus.getCurrentRoom())
  {
    _alive = 2;
    std::cout << "Ah! The Wumpus ate you! Better luck next time." << std::endl;
  }
  //If player is in same room as a pit
  else if (room.getRoom() == pit1.getCurrentRoom() ||
           room.getRoom() == pit2.getCurrentRoom())
  {
    _alive = 3;
    std::cout << "Ahhhhhhhhh! You fell to your death." << std::endl;
  }
  //If player is in same room as a bat
  else if (room.getRoom() == bat1.getCurrentRoom() ||
           room.getRoom() == bat2.getCurrentRoom())
  {
    std::cout << "You got snatched by a bat!" << endl;
    _currentRoom = randInt(1,20);
    cout << "You were transported to room " << _currentRoom << std::endl;
  }
}

//Allows player to try and shoot wumpus
void Player::shoot(const Cave& room, Wumpus& wumpus)
{
  if (_arrows > 0)
  {
    bool loop = true;
    string input = "";
    int choice;
    while (loop)
    {
      cout << "What room do you want to shoot the arrow in: ";
      getline(cin, input);
      istringstream iss(input);
      iss >> choice;
      if (iss)
      {
        //If you shoot your own room
        if (choice == room.getRoom())
        {
          _alive = 4;
          std::cout << "You shot yourself! Game over." << std::endl;
          loop = false;
        }
        //If arrow goes in first room
        else if (choice == room.getRoomOne())
        {
          //If hit the wumpus
          if (wumpus.getCurrentRoom() == room.getRoomOne())
          {
            //Set wumpus to dead
            wumpus.setAliveState(1);
            std::cout << "You killed the Wumpus! You won!" << std::endl;
          }
          //If miss
          else
          {
            //Minus 1 arrow.
            _arrows -= 1;
            std::cout << "You hit nothing. You now have " << _arrows
                      << " arrow(s).\n";
          }
          loop = false;
        }
        //If arrow goes in second room
        else if (choice == room.getRoomTwo())
        {
          //If hit the wumpus
          if (wumpus.getCurrentRoom() == room.getRoomTwo())
          {
            //Set wumpus to dead
            wumpus.setAliveState(1);
            std::cout << "You killed the Wumpus! You won!" << std::endl;
          }
          //If miss
          else
          {
            //Minus 1 arrow.
            _arrows -= 1;
            std::cout << "You hit nothing. You now have " << _arrows
                      << " arrow(s).\n";
          }
          loop = false;
        }
        //If arrow goes in third room
        else if (choice == room.getRoomThree())
        {
          //If hit the wumpus
          if (wumpus.getCurrentRoom() == room.getRoomThree())
          {
            //Set wumpus to dead
            wumpus.setAliveState(1);
            std::cout << "You killed the Wumpus! You won!" << std::endl;
          }
          //If miss
          else
          {
            //Minus 1 arrow.
            _arrows -= 1;
            std::cout << "You hit nothing. You now have " << _arrows
                      << " arrow(s).\n";
          }
          loop = false;
        }
        //Improper choice
        else
        {
          loop = true;
        }
      }
      //Improper choice
      else
      {
        loop = true;
      }


    }


  }
}
