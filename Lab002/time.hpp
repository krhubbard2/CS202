// Kelby Hubbard
// CS202
// Jan. 23, 2020
// Lab002 -- Classes, Constructors, and Destructors

#ifndef TIME_HPP_
#define TIME_HPP_

class Time
{
public:
  Time();
  Time(const Time &original);
  Time(int s);
  ~Time();

  void set_s(const int& s);
  

private:
  int _seconds;

};

void passbyvalue(Time t);
void passbyreference(Time& t);
void passbyconstreference(const Time& t);
Time return_time();










#endif
