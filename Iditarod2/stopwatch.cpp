// Kelby Hubbard
// CS202
// March 24, 2020
// Iditarod Challenge 2


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

double StopWatch::mbps()
{
  std::chrono::duration<double> elapsed_seconds = _end-_start;
  std::time_t end_time = std::chrono::system_clock::to_time_t(_end);

  double passed = elapsed_seconds.count();

  return passed;
}
