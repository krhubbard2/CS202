// Kelby Hubbard
// CS202
// February 16, 2020
// Hw003 -- A Simple Tokenizer

#ifndef TOKENIZER_HPP_
#define TOKENIZER_HPP_

/////////////////////////////////////////////////////////////////////////
// U S I N G ////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <vector>
using std::vector;
#include <sstream>
using std::istringstream;








/////////////////////////////////////////////////////////////////////////
// P R O T O T Y P E S //////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////

bool LineToTokens(const std::string& line, std::vector<std::string>& tokens);

void ReadLine(const std::string& line, std::vector<std::string>& tokens,
          std::vector<std::pair<int, int>>& linecols, const int& row);

void PrintTokens(std::ostream& os, const std::vector<std::string>& tokens,
          const std::vector<std::pair<int, int>>& linecols);







#endif
