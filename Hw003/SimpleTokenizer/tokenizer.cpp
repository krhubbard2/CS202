// Kelby Hubbard
// CS202
// February 16, 2020
// Hw003 -- A Simple Tokenizer

#include "tokenizer.hpp"

bool LineToTokens(const std::string& line, std::vector<std::string>& tokens)
{
  istringstream iss(line);
  string word;
  while (iss >> word)
  {
    tokens.push_back(word);
  }

}

// bool ReadLine(std::istream& is, std::vector<std::string>& tokens,
//           std::vector<std::pair<int, int>>& linecols)
// {
//
// }
//
// void PrintTokens(std::ostream& os, const std::vector<std::string>& tokens,
//           const std::vector<std::pair<int, int>>& linecols)
// {
//
// }
