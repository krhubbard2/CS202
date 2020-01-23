// Kelby Hubbard
// CS202
// Jan. 23, 2020
// Lab002 -- Classes, Constructors, and Destructors

#include "class.hpp"

//Default Constructor
Time::Time() : _seconds(0) {}

//Copy Constructor
Time::Time(const Time &original) : _seconds(original._seconds) {}

//Another Constructor
Time::Time(int s) : _seconds(s) {}

//Destructor
Time::~Time()
{
  delete []_seconds;
}
