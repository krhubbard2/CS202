// Kelby Hubbard
// CS202
// Feb. 13, 2020
// Lab006 -- Namespaces

#include "names.hpp"

void cs202::display::foo()
{
  cout << "cs202::display::foo()\n";
}

namespace
{
  int x = 100;
}
