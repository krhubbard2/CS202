// Kelby Hubbard
// CS202
// Jan. 23, 2020
// Lab002 -- Classes, Constructors, and Destructors

#include "time.hpp"
#include <iostream>
#include <vector>
using std::vector;


int main()
{
  Time t1;
  Time t2(3);
  Time t3(t2);

  passbyvalue(t1);
  passbyreference(t2);
  passbyconstreference(t3);
  Time t4 = return_time();

  vector<Time> t_vector;

  Time t5;
  for (int i = 0; i < 5; i++)
  {
    t5.set_s(i);
    t_vector.push_back(t5);
  }

  return 0;
}
