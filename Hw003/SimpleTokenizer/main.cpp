// Kelby Hubbard
// CS202
// February 16, 2020
// Hw003 -- A Simple Tokenizer

#include "tokenizer.hpp"

int main(int argc, const char** argv)
{
  vector<string> tokens;
  vector<std::pair<int, int>> linecols;
  string line;
  int row = 0;

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
    ifstream file(argv[2]);
    if (!file)
    {
      cout << "Error. Can't locate or open file. For help type \"--help\"\n";
    }
    else
    {
      bool read = true;
      while (read)
      {
        getline(file, line);
        row++;
        ReadLine(line, tokens, linecols, row);
        if (!file)
        {
          if (file.eof())
          {
            read = false;
          }
          else
          {
            read = true;
          }
        }
      }
      PrintTokens(tokens, linecols);
    }
  }

  //Incorrect argv input
  else if (argc >= 2)
    {
      cout << "Command not understood. For assistance please type"
           << "\"--help\"" << endl;
    }

    else if (argc <= 2)
    {
    cout << "Enter some text. To exit type \"END\"." << endl;
    //User Input
    bool loop = true;
    while (loop)
    {
      getline(cin, line);
      if (line == "END" || line == "end" || line == "End")
      {
        loop = false;
      }
      row++;
      ReadLine(line, tokens, linecols, row);


    }

    PrintTokens(tokens, linecols);
  }



  return 0;
}
