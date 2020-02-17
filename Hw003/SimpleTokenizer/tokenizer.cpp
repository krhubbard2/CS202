// Kelby Hubbard
// CS202
// February 16, 2020
// Hw003 -- A Simple Tokenizer

#include "tokenizer.hpp"

//Reads a getline, converts to tokens reading both row and column
void ReadLine(const std::string& line, std::vector<std::string>& tokens,
          std::vector<std::pair<int, int>>& linecols, const int& row)
{
  string str;
  istringstream iss(line);

  //If line is not empty
  if (!line.empty())
  {
    while (!iss.eof())
    {
      iss >> str;
      if (iss)
      {
        tokens.push_back(str);
        linecols.push_back(std::make_pair(row, line.find(str) + 1));
      }
    }
  }

  //If line is empty
  else
  {
    tokens.push_back("Empty Line");
    linecols.push_back(std::make_pair(row, 1));
  }
}

void PrintTokens(const std::vector<std::string>& tokens,
          const std::vector<std::pair<int, int>>& linecols)
{
  int r = 0;
 for (auto i : tokens)
 {
   cout << "Row " << linecols[r].first << ", Column " << linecols[r].second
        << ": \"" << i << "\"" << endl;
   r++;
 }
}
