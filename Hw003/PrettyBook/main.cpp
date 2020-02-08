// Kelby Hubbard
// CS202
// February 16, 2020
// Hw003 -- Book Pretty Printer

#include <iostream>
using std::cout;
using std::endl;
#include <fstream>
using std::ifstream;
#include <string>
using std::string;
#include <vector>
using std::vector;
#include <sstream>
using std::istringstream;


int main()
{
  vector<string> paragraphs;
  ifstream ifile("book.txt");
  if (!ifile)
  {
    cout << "Error. Couldn't read file." << endl;
  }
  else
  {
    string line = "";
    string para = "";
    string word = "";
    while (true)
    {
      getline(ifile, line);

      //EOF check
      if(!ifile)
      {
        if (ifile.eof())
        {
          return false;
        }
        else
        {
          return true;
        }
      }

      istringstream iss(line);
      while (iss >> word)
      {
        para.append(word);
      }
    }
  }

  return 0;
}
