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
  cout << ack(3,13) << endl;
  stopwatch.stoptimer();
  stopwatch.elapsed();


  //Results
  //(3,3) = 61 : Elapsed time: 0.000015971s
  //(3,4) = 125 : Elapsed time: 0.000074735s
  //(3,5) = 253 : Elapsed time: 0.000263427s
  //(3,10) = 8189 : Elapsed time: 0.162673s
  //(3,12) = 32765 : Elapsed time: 2.23392s
  //(3,13) = 65533 : Elapsed time: 9.18236s
  //(4,1)= 65533 : Elapsed time: 9.51603s
  //(3,14) = 131069 : Elapsed time: 37.7826s
  //(2,1000000) = 200003 : Elapsed time: 71.1964s
  //(3,15) : Segmentation fault (core dumped)
  //(4,2) : Segmentation fault (core dumped)


}
