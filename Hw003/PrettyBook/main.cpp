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

bool lineToTokens(const std::string& line, std::vector<std::string>& tokens)
{
  string str;

  for (auto a : line)
  {
    if (a == ' ')
    {
      tokens.push_back(str);
      str = "";
    }
    else
    {
      str += a;
    }
  }
    if (str.length() != 0)
    {
      tokens.push_back(str);
    }
    return true;
  }

int main(int argc, char* argv[])
{
  vector<string> paragraphs;
  int wrap = 0;
  string line;

  if (argc < 2)
  {
    cout << "Error. Please try format: \"filename.txt 40\" or"
         << "\"filename.txt --html\". Thank you. \n";
         return 0;
  }

  ifstream ifile(argv[2]);
  if (!ifile)
  {
    cout << "Error. Couldn't read file." << endl;
  }

  while (getline(ifile, line))
  {
    if (line == "")
    {
      paragraphs.push_back("\n\n");
    }
    lineToTokens(line, paragraphs);
  }


    string tempstr;
    for (auto r : paragraphs)
    {
        if (tempstr.length() + r.length() >= wrap)
        {
          cout << tempstr;
          tempstr = r;
        }
        else
        {
          tempstr += r;
        }

        if (tempstr.size() != wrap)
        {
          tempstr += " ";
        }
    }
    cout << tempstr;


  return 0;
}
