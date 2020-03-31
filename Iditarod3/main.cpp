// Kelby Hubbard
// CS202
// March 29, 2020
// Iditarod Challenge #3

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <fstream>
using std::ifstream;
#include <string>
using std::string;
#include "citynode.hpp"

int main(int argc, char** argv)
{
  ifstream ifile("brd14051.tsp");
  //Throw error if it can't open file
  if (!ifile)
  {
    cout << "Couldn't open file." << endl;
  }
  else
  {
    string city;
    string line;
    bool loop = true;
    while (loop)
    {
      //If reading file hits an error or EOF
      if (!ifile)
      {
        if (ifile.eof())
        {
          loop = false;
        }
        else
        {
          loop = true;
        }
      }
      else
      {
        getline(ifile, line);
        cout << line << endl;
      }

    }

  }





  return 0;
}
