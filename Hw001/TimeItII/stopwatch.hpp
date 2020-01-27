// Kelby Hubbard
// CS202
// Jan. 26, 2020
// HW001 -- Time It II

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
