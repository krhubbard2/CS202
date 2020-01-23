// Kelby Hubbard
// CS202
// January 16, 2020
// Gutenberg Excerpt

#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
using std::getline;
#include <fstream>
using std::ifstream;
#include <sstream>
using std::istringstream;

int main()
{
  ifstream fin("ebookplaintext.txt");

  //Can it read file?
  if (!fin)
  {
    cout << "Can't open file." << endl;
  }
  else
  {
    while(true)
    {
      string line;
      getline(fin, line);
      //eof checking
      if (!fin)
      {
        if (fin.eof())
        {
          return true;
        }
        else
        {
          return false;
        }
      }
      //Grab each line word by word
      istringstream iss(line);
      string word;
      iss >> word;

      //Start of the excerpt
      if (word == "'Heathcliff--I")
      {
        //Print out excerpt until blank line
        do {
          cout << line << " ";
          getline(fin, line);
        } while(line != "");
        cout << endl;
      }
    }
  }

  return 0;
}
