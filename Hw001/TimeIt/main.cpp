// Kelby Hubbard
// CS202
// Jan. 26, 2020
// HW001 -- Time It I

#include "stopwatch.hpp"
#include <vector>
using std::vector;


bool sequentialSearch(int random, const vector<int>& values)
{
  for (size_t i = 0; i < values.size(); i++)
  {
    if (values[i] == random)
    {
      cout << "Match found." << endl;
      return true;
    }

  }
  return false;
}


int main()
{
  /*TO CHANGE DATASET SIZE AND RANDOM NUMBER SIZE PLEASE CHANGE VARIABLE
  "size" BELOW TO DESIGNATED NUMBER. FOR TESTING PURPOSES IT IS SET TO
  100M. IT IS NOT RECOMMENDED TO GO OVER 1B UNLESS YOU HAVE AN EXCESS
  AMOUNT OF RAM (POSSIBLY GREATER THAN 32GB). */

  int size = 100000000;

  StopWatch timer;

  //Generate random number
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(1, size);
  dis(gen);

  //Filling dataset
  cout << "Filling dataset of size " << size << "." << endl
       << "Starting timer." << endl;
  timer.starttimer();
  vector<int> vec;
  for (int i = 0; i < size; i++)
  {
    vec.push_back(i);
  }
  timer.stoptimer();
  timer.elapsed();


  int x = dis(gen);
  cout << "Random number we're searching for is: " << x << endl;
  cout << "In a vector of size: " << vec.size() << endl;
  timer.starttimer();
  sequentialSearch(x, vec);

  timer.stoptimer();
  timer.elapsed();




  return 0;
}
