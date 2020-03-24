// Kelby Hubbard
// CS202
// March 24, 2020
// Lab008

#include <iostream>
using std::cout;
using std::endl;
#include "complex.hpp"
#include <iomanip>

//Design
// [X] Create Complex Class
// [X] Override << operator
// [X] Override + operator
// [] Override += operator

int main(int argc, char** argv)
{
  cout << std::fixed;
  cout << Complex() << endl;
  cout << Complex(4,5) + Complex(2,3) << endl;
  cout << 1.0 + Complex(2,3) << endl;
  cout << Complex(4,5) + 1 << endl;






  return 0;
}
