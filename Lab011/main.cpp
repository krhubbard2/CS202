// Kelby Hubbard
// CS202
// April 9, 2020
// Lab011

#include <iostream>
using std::cout;
using std::endl;

// Design
// [X] Default base class object
// [] Base class object using 1 paremeter constructor
// [] Default dervied class object
// [] Dervied class object using 2 paremeter constructor

////////////////////////////////////////////////////////////////////////
// B A S E    C L A S S ////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

class Base
{
public:
  Base(){
     cout << "Constructing default Base object. Initial value is " << mph;}

private:
  int mph{60};
};

int main(int argc, char** argv)
{

  {Base b;}
  cout << endl;








  return 0;
}
