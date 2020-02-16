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
    }
  }
  else
  {
    tokens.push_back("Empty Line");
    linecols.push_back(std::make_pair(row, 1));
  }
}

void PrintTokens(std::ostream& os, const std::vector<std::string>& tokens,
          const std::vector<std::pair<int, int>>& linecols)
{
  cout << "Line ";
}
