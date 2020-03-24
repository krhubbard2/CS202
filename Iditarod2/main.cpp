// Kelby Hubbard
// CS202
// March 24, 2020
// Iditarod Challenge 2

#include <iostream>
#include "stopwatch.hpp"

using std::cout;
using std::endl;

//Ackermann's Function
int ack(int m, int n)
{
  if (m == 0)
  {
    return n + 1;
  }
  else if ((m > 0) && (n == 0))
  {
    return ack(m - 1, 1);
  }
  else if ((m > 0) && (n > 0))
  {
    return ack(m - 1, ack(m, n-1));
  }
};

int main()
{
  StopWatch stopwatch;
  stopwatch.starttimer();
  cout << ack(1,1) << endl;
  stopwatch.stoptimer();
  stopwatch.elapsed();
}
