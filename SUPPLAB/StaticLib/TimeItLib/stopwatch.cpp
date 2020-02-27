// Kelby Hubbard
// CS202
// Feb. 27, 2020
// SUPPLAB - Static Library

#include "stopwatch.hpp"


void StopWatch::starttimer()
{
  _start = std::chrono::system_clock::now();
}

void StopWatch::stoptimer()
{
  _end = std::chrono::system_clock::now();
}

void StopWatch::elapsed()
{
  std::chrono::duration<double> elapsed_seconds = _end-_start;
  std::time_t end_time = std::chrono::system_clock::to_time_t(_end);

  std::cout << "Finished job: " << std::ctime(&end_time)
       << "Elapsed time: " << elapsed_seconds.count() << "s\n";
}
