// Kelby Hubbard
// CS202
// February 16, 2020
// Hw003 -- A Simple Tokenizer

#include "tokenizer.hpp"
#include "stopwatch.hpp"

int main(int argc, const char** argv)
{
  //Variables needed for both user input or file input.
  vector<string> tokens;
  vector<std::pair<int, int>> linecols;
  string line;
  int row = 0;


  //TIMER
  StopWatch timer;

  //Help command
  if (argc >= 2 && argv[1] == string("--help"))
  {
    cout << "To tokenize a .txt file use the command"
         << " \"--tokenize filenamehere.txt\".\nEnsure the file is in the "
         << "same directory as the program.\nOtherwise run the program to "
         << "tokenize input text." << endl;
  }

  //--lineonly doesn't print back to user
  else if (argc >= 2 && argv[1] == string ("--lineonly"))
    {
      ifstream file(argv[2]);
      //Ensure file can be opened. If not reference help to user.
      if (!file)
      {
        cout << "Error. Can't locate or open file. For help type \"--help\"\n";
      }
      //If file opened--continue
      else
      {
        bool read = true;
        timer.starttimer();
        while (read)
        {
          getline(file, line);
          row++;
          ReadLine(line, tokens, linecols, row);
          if (!file)
          {
            //If end of file end loops.
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
        timer.stoptimer();
        timer.elapsed();

        ifstream size(argv[2], std::ios::binary | std::ios::ate);
        double fsize = size.tellg();

        double megabyte = 1000000 / fsize;
        double mbpstime = megabyte / timer.mbps();
        cout << "File size was " << megabyte << "MB. Result is "
             << mbpstime << " MB/second" << endl;
      }
    }

  //--tokenize command
  else if (argc >= 2 && argv[1] == string ("--tokenize"))
  {
    ifstream file(argv[2]);
    //Ensure file can be opened. If not reference help to user.
    if (!file)
    {
      cout << "Error. Can't locate or open file. For help type \"--help\"\n";
    }
    //If file opened--continue
    else
    {
      bool read = true;
      timer.starttimer();
      while (read)
      {
        getline(file, line);
        row++;
        ReadLine(line, tokens, linecols, row);
        if (!file)
        {
          //If end of file end loops.
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

      //Print tokens back to user.
      PrintTokens(tokens, linecols);

      timer.stoptimer();
      timer.elapsed();

      ifstream size(argv[2], std::ios::binary | std::ios::ate);
      double fsize = size.tellg();

      double megabyte = 1000000 / fsize;
      double mbpstime = megabyte / timer.mbps();
      cout << "File size was " << megabyte << "MB. Result is "
           << mbpstime << " MB/second" << endl;
    }
  }



  //Incorrect argv input
  else if (argc >= 2)
    {
      cout << "Command not understood. For assistance please type"
           << "\"--help\"" << endl;
    }

  //If no commands were passed when running program
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
