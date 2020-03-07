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

////////////////////////////////////////////////////////////////////////////
// P R O T O T Y P E S /////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

void shoot(int &p);
void move(int &p);
void sm(int &p);
void check(int &p, const int w, const int b1, const int b2, const int p1,
           const int p2, int &win);
void batmove(int &p);





#endif
