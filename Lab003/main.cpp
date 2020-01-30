// Kelby Hubbard
// CS202
// Jan. 30, 2020
// Lab003 -- Smart Pointers

#include <iostream>
using std::cout;
using std::endl;
#include "time.hpp"
#include <memory>


int main()
{
  cout << "Creating raw pointer to dynamically allocated object."
       << endl;

  Time t1(3);
  Time *p1;
  p1 = &t1;

  t1.printval();

  cout << "Creating unique_ptr" << endl;
  Time t2(4);
  std::unique_ptr<Time> p2 (&t2);
  //Calls the unique_ptr function
  p2->printval();

  cout << "Transfer ownership of unique_ptr" << endl;
  std::unique_ptr<Time> p3 (&t1);
  p3 = std::move(p2);
  p3->printval();
  return 0;
}
