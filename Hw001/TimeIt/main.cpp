// Kelby Hubbard
// CS202
// Jan. 26, 2020
// HW001 -- Time It I

#include "stopwatch.hpp"
#include <vector>
using std::vector;
#include <algorithm>

int main()
{
  /*TO CHANGE DATASET SIZE AND RANDOM NUMBER SIZE PLEASE CHANGE VARIABLE
  "size" BELOW TO DESIGNATED NUMBER. FOR TESTING PURPOSES IT IS SET TO
  100M. IT IS NOT RECOMMENDED TO GO OVER 1B UNLESS YOU HAVE AN EXCESS
  AMOUNT OF RAM (POSSIBLY GREATER THAN 32GB). */

  int size = 100000000;

  StopWatch timer;

  //Generate random number
  cout << "Generating random number to compare to dataset." << endl;
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(1, size);
  vector<int> random = {dis(gen)};
  cout << "Random number generated is " << dis(gen) << "." << endl;

  //Filling dataset
  cout << "Filling dataset of size " << size << "." << endl
       << "Starting timer." << endl;
  timer.starttimer();
  vector<int> dataset;
  for (int i = 0; i < size; i++)
  {
    dataset.push_back(i);
  }
  timer.stoptimer();
  timer.elapsed();

  //Sorting dataset
  cout << "Sorting the dataset" << endl;
  timer.starttimer();
  std::sort(dataset.begin(), dataset.end());
  timer.stoptimer();
  timer.elapsed();

  //Standard search
  cout << "Using standard search to search the dataset." << endl;
  timer.starttimer();
  std::search(dataset.begin(), dataset.end(), random.begin(),
  random.end());
  timer.stoptimer();
  timer.elapsed();

  //Binary search
  cout << "Using binary search to search the dataset." << endl;
  timer.starttimer();
  std::binary_search(dataset.begin(), dataset.end(), random[0]);
  timer.stoptimer();
  timer.elapsed();

  //Shuffle
  cout << "Shuffling dataset." << endl;
  timer.starttimer();
  std::shuffle(dataset.begin(), dataset.end(), gen);
  timer.stoptimer();
  timer.elapsed();



  return 0;
}
