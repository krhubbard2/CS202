// Kelby Hubbard
// CS202
// Feb. 4, 2020
// Lab004 -- Streams

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <fstream>
using std::ofstream;
using std::ifstream;
#include <string>
using std::string;
#include <sstream>
using std::istringstream;

void readToConsole(string file)
{
  ifstream ifile(file);

  //Read file check
  if (!ifile)
  {
      cout << "Can't open file." << endl;
  }
  else
  {
    bool loop = true;
    while(loop)
    {
      string line;
      getline(ifile, line);

      //eof check
      if(!ifile)
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
      cout << line << endl;
    }
  }
}


int main()
{
  readToConsole("text.txt");

  cout << "Please enter the number of copies you'd like: ";
  string copy;
  getline(cin, copy);
  istringstream iss(copy);
  int c;
  iss >> c;
  bool loop = false;
  if (!iss)
  {
    loop = true;
  }
  while (loop)
    {
      cout << "Error. Please enter an integer: ";
      getline(cin, copy);
      istringstream iss1(copy);
      iss1 >> c;
      if (iss1)
      {
        loop = false;
      }

    }

    cout << "Please enter a string you'd like to append: ";
    string n;
    getline(cin, n);

    ofstream fout("text.txt", std::ios::app);

    for (int i = 0; i < c; i++)
    {
      fout << n << endl;
    }


 return 0;
}
