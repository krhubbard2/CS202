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

//Conversion using C++ STL
double cpp_ftoc(const char* str)
{

  return 1;
}

//Conversion using C Function strtod
double c_ctof(const char* str)
{
  double celsius = strtod((str), NULL);
  double fahrenheit = (9*celsius/5)+ 32;

  return fahrenheit;
}


int main(int argc, const char** argv)
{
  if (argc >= 2 && argv[1] == string("--ftoc"))
  {
    cout << "ftoc\n";
  }
  else if (argc >= 2 && argv[1] == string("--ctof"))
  {
    cout << "ctof\n";
    cout << c_ctof(argv[2]) << " fahrenheit" << endl;

  }



  return 0;
}
