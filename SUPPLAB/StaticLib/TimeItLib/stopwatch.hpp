// Kelby Hubbard
// CS202
// Feb. 27, 2020
// SUPPLAB - Static Library

#ifndef STOPWATCH_HPP_
#define STOPWATCH_HPP_


#include <chrono>
#include <ctime>
#include <iostream>
using std::cout;
using std::endl;
#include <random>

class StopWatch
{
public:

  std::chrono::system_clock::time_point _start;
  std::chrono::system_clock::time_point _end;

void starttimer();
void stoptimer();
void elapsed();
};






#endif
