// Kelby Hubbard
// CS202
// Jan. 30, 2020
// Lab003 -- Smart Pointers

#include <iostream>
using std::cout;
using std::endl;
#include "time.hpp"
#include <memory>
#include <catch.hpp>


int main()
{
  cout << "Creating raw pointer to dynamically allocated object."
       << endl;

  Time* p1 = new Time;

  cout << "Creating unique_ptr" << endl;
  std::unique_ptr<Time> p2 = std::make_unique<Time>(3);


  cout << "Transfer ownership of unique_ptr" << endl;
  std::unique_ptr<Time> p4 = nullptr;
  p2 = std::move(p4);

  cout << "Calling member function through unique_ptr" << endl;
  p1->set_s(10);
  p1->printval();

  cout << "Making a shared_ptr" << endl;
  std::shared_ptr<Time> p5 = std::make_shared<Time>(6);

  cout << "Making anther shared_ptr to same object" << endl;
  std::shared_ptr<Time> p6(p5);

  return 0;
}
