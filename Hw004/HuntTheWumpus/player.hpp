// Kelby Hubbard
// CS202
// March 8, 2020
// Hw004 -- Hunt the Wumpus
#ifndef PLAYER_HPP_
#define PLAYER_HPP_
#include "cave.hpp"
#include "hazards.hpp"
#include "wumpus.hpp"


class Player
{
  //Alive = 0, Win = 1, Died to wumpus = 2, Died to pits = 3
  int _alive = 0;
  int _currentRoom = 0;

public:
  Player();
  Player(int alive, const Cave& current_room);
  int getCurrentRoom() const;
  void setCurrentRoom(const Cave& room);
  void act();
  void seeHazards(const Cave& room, const Hazard& bat1,
                 const Hazard& bat2, const Hazard& pit1,
                 const Hazard& pit2, const Wumpus& wumpus);
};

#endif
