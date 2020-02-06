// Kelby Hubbard
// CS202
// February 6, 2020
// Lab005 -- Binary Files

#include <iostream>
using std::cout;
using std::endl;
#include <fstream>
using std::fstream;

int main()
{
  fstream f;
  f.open("data.dat", ios::in | ios::binary);







  f.close();


  return 0;
}
