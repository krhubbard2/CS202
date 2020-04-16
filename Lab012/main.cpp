// Kelby Hubbard
// CS 202
// April 14, 2020
// Lab012 -- Polymorphism

#include <iostream>
using std::cout;
#include <string>

// [X] Write Base class with two methods (one virtual)
// [X] Write a Derived class with two methods (one virtual)
// [] Test base class pointer to base class object
// [] Test base class pointer to derived class object
// [] Test derived class pointer to derived class object
// [] Test base class reference to base class object
// [] Test base class reference to derived object
// [] Test derived class reference to derived class object

class Base{
public:
  Base() { cout << "Base::Base() constructor\n"; }
  virtual ~Base() { cout << "~Base::Base() destructor\n"; }

  void functionA() { cout << "Base::functionA() non-virtual\n"; }
  virtual void functionB() { cout << "Base::functionB() virtual\n"; }
};

class Derived : public Base{
public:
  Derived() { cout << "Derived::Derived() constructor\n"; }
  ~Derived() { cout << "~Derived::Derived() destructor\n"; }

  void functionA() { cout << "Derived::functionA() non-virtual\n"; }
  virtual void functionB() { cout << "Derived::functionB() virtual\n"; }
};

void dashednewline(){
  cout << "--------------------\n";
}

int main(int argc, char** argv)
{
  { Base b; b.functionA(); b.functionB();}
  dashednewline();

  { Derived d; d.functionA(); d.functionB();}
  dashednewline();


  return 0;
}