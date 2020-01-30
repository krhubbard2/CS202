// Kelby Hubbard
// CS202
// Jan. 30, 2020
// Lab003 -- Smart Pointers

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
  void printval();


private:
  int _seconds;

};

void passbyvalue(Time t);
void passbyreference(Time& t);
void passbyconstreference(const Time& t);
Time return_time();










#endif
