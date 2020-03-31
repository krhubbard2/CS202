// Kelby Hubbard
// CS202
// Mar. 31, 2020
// Lab009

#include <iostream>
using std::cout;
using std::endl;
#include <iomanip>
#include <string>

// [] Static local variable
// [] Static global variable
// [] Static member variable
// [] Static member function

void foo_static()
{
  static int count = 0;
  if (!count)
  {
    cout << __FUNCTION__ << " is not initialized" << endl;
    count = 1;
  }
  else
  {
    cout << __FUNCTION__ << " called " << count << " times" << endl;
    count++;
  }
}

int main(int argc, char** argv)
{
  foo_static();
  foo_static();
  foo_static();

  return 0;
}
