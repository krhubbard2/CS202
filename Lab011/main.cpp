// Kelby Hubbard
// CS202
// April 9, 2020
// Lab011

#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

// Design
// [X] Default base class object
// [X] Base class object using 1 paremeter constructor
// [X] Default dervied class object
// [X] Derived class object using 2 paremeter constructor

////////////////////////////////////////////////////////////////////////
// B A S E    C L A S S ////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

class Base
{
public:
  Base(){
     cout << "Constructing default Base object. Initial value is " << _mph
          << endl;}

  Base(int mph)
      : _mph(mph){
    cout << "Constructing a Base object with value " << _mph << endl;
  }

  ~Base(){
    cout << "Destructing a Base object with value " << _mph << endl;
  }

private:
  int _mph{60};
};

////////////////////////////////////////////////////////////////////////
// D E RI V E D    C L A S S ///////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

class Derived : public Base{
public:
  Derived()
    : Base(75), _name{"Ferrari"}{
    cout << "Constructing a Derived object, name is " << _name << endl;
  }

  Derived(int mph, const std::string& name)
    : Base{mph}, _name{name}{
      cout << "Constructing a Derived object with name " << _name << endl;
  }

  ~Derived(){
    cout << "Destructing a Derived object with name " << _name << endl;
  }

private:
  string _name;
};

int main(int argc, char** argv)
{

  {Base b;}
  cout << endl;

  {Base b{16384};}
  cout << endl;

  {Derived d;}
  cout << endl;

  {Derived d{100, "Porsche"};}
  cout << endl;




  return 0;
}
