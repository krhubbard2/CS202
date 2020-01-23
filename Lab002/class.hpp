// Kelby Hubbard
// CS202
// Jan. 23, 2020
// Lab002 -- Classes, Constructors, and Destructors

#ifndef CLASS_HPP_
#define CLASS_HPP_

class Time
{
public:
  Time();
  Time(const Time &original);
  Time(int s);
  ~Time();

private:
  int _seconds;

};













#endif
