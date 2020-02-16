// Kelby Hubbard
// CS202
// February 16, 2020
// Hw003 -- A Simple Tokenizer

#include "tokenizer.hpp"

int main(int argc, const char** argv)
{
  vector<string> tokens;
  vector<std::pair<int, int>> linecols;


  //Help command
  if (argc >= 2 && argv[1] == string("--help"))
  {
    cout << "To tokenize a .txt file use the command"
         << " \"--tokenize filenamehere.txt\".\nEnsure the file is in the "
         << "same directory as the program.\nOtherwise run the program to "
         << "tokenize input text." << endl;
  }

  else if (argc >= 2 && argv[1] == string ("--tokenize"))
  {

  }

  //Incorrect argv input
  else if (argc >= 2)
  {
    cout << "Command not understood. For assistance please type"
         << "\"--help\"" << endl;
  }






  return 0;
}
