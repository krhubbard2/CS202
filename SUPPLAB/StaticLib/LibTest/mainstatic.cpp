// Kelby Hubbard
// CS202
// Feb. 27, 2020
// SUPPLAB - Static Library

#include "stopwatch.hpp"

#pragma comment (lib, "TimeItLib.lib")

int main()
{
    StopWatch timer;
    timer.starttimer();

    for (int i = 0; i < 10; i++)
    {
      cout << i << " ";
    }
    cout << endl;

    timer.stoptimer();
    timer.elapsed();
}
