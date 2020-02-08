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
    string line;
    while (true)
    {
      getline(ifile, line);

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
      string para;
      string word;
      while (iss >> word)
      {
        para.append(word);
      }
      if (line == "")
      {
        paragraphs.push_back(para);
        para.clear();
      }
    }
  }
  for (auto x : paragraphs)
  {
    cout << x << endl;
  }

  return 0;
}
