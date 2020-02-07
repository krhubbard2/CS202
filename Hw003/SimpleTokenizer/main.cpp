// Kelby Hubbard
// CS202
// February 16, 2020
// Hw003 -- A Simple Tokenizer

#include "tokenizer.hpp"

int main()
{
  vector<string> tokens;
  vector<std::pair<int, int>> linecols;

  string input;
  cout << "Please enter some text. When you are done type \"END\": ";

  //Grabs input and adds to vector "tokens"
  while (getline(cin, input) && input != "end" && input != "End"
    && input != "END")
  {
    LineToTokens(input, tokens);
  }

  for (auto i : tokens)
  {
    cout << i << " ";
  }










  return 0;
}
