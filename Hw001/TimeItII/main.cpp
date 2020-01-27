// Kelby Hubbard
// CS202
// Jan. 26, 2020
// HW001 -- Time It II
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::istringstream;
#include <fstream>
using std::ifstream;
#include <vector>
using std::vector;
#include "stopwatch.hpp"
#include <algorithm>

void vecadd(vector<string>& vec, string book)
{
  ifstream fin(book);

  //Can it read file?
  if (!fin)
  {
    cout << "Can't open file." << endl;
  }
  else
  {
    bool read = true;
    while(read)
    {
      string line;
      getline(fin, line);
      vec.push_back(line);
      //eof checking
      if (!fin)
        {
          if (fin.eof())
          {
            read = false;
          }
          else
          {
            read = true;
          }
        }
      }
    }
  }

int main()
{
  StopWatch timer;

  //Making a vector of 5 Project Gutenberg books
  vector<string> books;
  cout << "Adding Dracula, Moby Dick, Pride and Prejudice,"
       << "The Scarlet Letter, and War and Peace to a vector."
       << endl;
  timer.starttimer();
  vecadd(books, "Dracula.txt");
  cout << "Added Dracula to Vector." << endl;
  vecadd(books, "Moby Dick.txt");
  cout << "Added Moby Dick to Vector." << endl;
  vecadd(books, "Pride and Prejudice.txt");
  cout << "Added Pride and Prejudice to Vector." << endl;
  vecadd(books, "The Scarlet Letter.txt");
  cout << "Added The Scarlet Letter to Vector." << endl;
  vecadd(books, "War and Peace.txt");
  cout << "Added War and Peace to Vector." << endl;
  timer.stoptimer();
  timer.elapsed();

  //Sort
  cout << "Sorting vector of books." << endl;
  timer.starttimer();
  std::sort (books.begin(), books.end());
  cout << "Vector is sorted." << endl;
  timer.stoptimer();
  timer.elapsed();

  //std::find a random string in the vector
  string random = "whole neighborhood in powder smoke.";
  //timer.starttimer();
  if (std::find(books.begin(), books.end(), random) != books.end())
  {
    cout << "String found!" << endl;
  }
  else
  {
    cout << "String not found." << endl;
  }
  timer.stoptimer();
  timer.elapsed();

  return 0;
}
