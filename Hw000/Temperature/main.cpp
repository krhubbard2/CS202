// Kelby Hubbard
// CS202
// Jan. 16, 2020
// Command Line Arguments

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

int main(int argc, const char** argv)
{
  if (argc >= 2 && argv[1] == string("--ftoc"))
  {
    cout << "ftoc\n";
  }
  else if (argc >= 2 && argv[1] == string("--ctof"))
  {
    cout << "ctof\n";
  }



  return 0;
}
