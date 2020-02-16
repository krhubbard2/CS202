// Kelby Hubbard
// CS202
// February 16, 2020
// Hw003 -- A Simple Tokenizer

#include "tokenizer.hpp"

// bool LineToTokens(const std::string& line, std::vector<std::string>& tokens)
// {
//   istringstream iss(line);
//   string word;
//   while (iss >> word)
//   {
//     tokens.push_back(word);
//   }
//
// }

void ReadLine(const std::string& line, std::vector<std::string>& tokens,
          std::vector<std::pair<int, int>>& linecols, const int& row)
{
  string str;
  istringstream iss(line);

  if (!line.empty())
  {
    while (!iss.eof())
    {
      iss >> str;
      tokens.push_back(str);
      linecols.push_back(std::make_pair(row, line.find(str) + 1));
    }
  }
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
