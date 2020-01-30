// Kelby Hubbard
// CS202
// Jan. 30, 2020
// Lab003 -- Smart Pointers

#include "time.hpp"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//Default Constructor
Time::Time() : _seconds(0)
{
  cout << "Default Constructor." << endl;
}

//Copy Constructor
Time::Time(const Time &original) : _seconds(original._seconds)
{
  cout << "Copy Constructor." << endl;
}

//Another Constructor
Time::Time(int s) : _seconds(s)
{
    cout << "Constructor." << endl;
}

//Destructor
Time::~Time()
{
  cout << "Destructed." << endl;
}

Time return_time()
{
  Time t;
  cout << "Returned by value" << endl;
  return t;
}

void Time::printval()
{
  cout << _seconds << endl;
}
void Time::set_s(const int& s)
{
  _seconds = s;
}

void passbyvalue(Time t)
{
  cout << "Passed by value." << endl;
}

void passbyreference(Time& t)
{
  cout << "Passed by reference." << endl;
}

void passbyconstreference(const Time& t)
{
  cout << "Passed by const reference" << endl;
}
