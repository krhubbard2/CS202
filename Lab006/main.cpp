// Kelby Hubbard
// CS202
// Feb. 13, 2020
// Lab006 -- Namespaces
#include <iostream>
using std::cout;
#include "names.hpp"

void foo()
{
  cout << "This is the foo() in main\n";
}

namespace
{
  int x = 100;
}

int main()
{
  cs202::display obj;
  obj.foo();
  foo();

  int x = 200;

  cout << x << std::endl;
}
