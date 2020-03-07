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


void shoot(int &p);
void move(int &p);
void sm(int &p);
void check(int &p, const int w, const int b1, const int b2, const int p1,
           const int p2, int &win);
void batmove(int &p);

int randInt(int low, int high);
//
// //Random device
// //Random device to seed
// random_device rd;
// mt19937 gen(rd());
// //Setting random for 1-20 (cave rooms)
// uniform_int_distribution<int> distrib1(1,20);
//
// //Random start room for player
// player = distrib1(gen);
//
// //Random start for Wumpus
// //Ensure random room wumpus starts in is not same as player
// while (wumpus == 0 || wumpus == player)
// {
//   wumpus = distrib1(gen);
// }
//
// //Random start for bats
// //Ensure room bats are is not the same as each other, player, or wumpus.
// while (bat1 == 0 || bat1 == player || bat1 == wumpus || bat1 == bat2
//        || bat2 == 0 || bat2 == player || bat2 == wumpus)
// {
//   bat1 = distrib1(gen);
//   bat2 = distrib1(gen);
// }
//
// //Random start for pits
// //Ensure pits are not same room as each other, player, bats, or wumpus
// while (pit1 == 0 || pit1 == player || pit1 == wumpus || pit1 == bat1
//        || pit1 == bat2 || pit2 == 0 || pit2 == player || pit2 == wumpus
//        || pit2 == bat1 || pit2 == bat2)
// {
// pit1 = distrib1(gen);
// pit2 = distrib1(gen);
// }



#endif
