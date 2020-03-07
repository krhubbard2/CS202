// Kelby Hubbard
// CS202
// March 8, 2020
// Hw004 -- Hunt the Wumpus

#ifndef WUMPUS_HPP_
#define WUMPUS_HPP_

////////////////////////////////////////////////////////////////////////////
// I N C L U D E S /////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <random>
using std::mt19937;
using std::random_device;
using std::uniform_int_distribution;
#include <sstream>
using std::istringstream;
#include <vector>
using std::vector;
#include "cave.hpp"
// #include "player.hpp"
// #include "hazards.hpp"
////////////////////////////////////////////////////////////////////////////
// P R O T O T Y P E S /////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

class Wumpus
{
  int _currentRoom = 0;

public:
  Wumpus();
  int getCurrentRoom() const;
  void setCurrentRoom(const Cave& room);
  void move();
};

int randInt(int low, int high);



#endif
