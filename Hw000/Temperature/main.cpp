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
#include <sstream>
using std::istringstream;

//Conversion using C++ STL
double cpp_ftoc(const char* str)
{
  istringstream iss(str);
  double fahrenheit;
  iss >> fahrenheit;;

  double celsius = (fahrenheit - 32)*5/9;

  return celsius;
}

//Conversion using C Function strtod
double c_ctof(const char* str)
{
  double celsius = strtod((str), NULL);
  double fahrenheit = (9*celsius/5)+ 32;

  return fahrenheit;
}

//Ensures string entered are digits only
bool digits(const string s)
{
  return s.find_first_not_of(".012345679") == string::npos;
}

int main(int argc, const char** argv)
{

  //Fahrenheit to celius
  if (argc >= 2 && argv[1] == string("--ftoc"))
  {
    //Checks if temp entered is below absolute zero
    if (cpp_ftoc(argv[2]) < -273.15)
    {
      cout << "Error. That temperature is below absolute zero.\n";
    }

    //Checks if negative number
    else if (argv[2][0] == '-')
    {
      //Erases negative sign
      string neg = argv[2];
      neg.erase (neg.begin() + 0);
      //Ensures number is only digits
      if (digits(neg))
      {
        cout << cpp_ftoc(argv[2]) << " celsius" << endl;
      }
      //Improper entry
      else
      {
        cout << "Improper entry. Please enter a valid temperature." << endl;
      }
    }
    //Entry only contains digits
    else if (digits(argv[2]))
    {
    cout << cpp_ftoc(argv[2]) << " celsius" << endl;
    }
    //Improper entry
    else
    {
      cout << "Improper entry. Please enter a valid temperature." << endl;
    }
  }

  //Celcius to fahrenheit
  else if (argc >= 2 && argv[1] == string("--ctof"))
  {
    //Checks if temp entered is below absolute zero
    if (c_ctof(argv[2]) < -459.67)
    {
      cout << "Error. That temperature is below absolute zero.\n";
    }
    //Checks if negative
    else if (argv[2][0] == '-')
    {
      //Delete negative
      string neg = argv[2];
      neg.erase (neg.begin() + 0);
      //Checks now that negative is gone that there is only digits
      if (digits(neg))
      {
        cout << c_ctof(argv[2]) << " fahrenheit" << endl;
      }
      //Impropery Entry
      else
      {
        cout << "Improper entry. Please enter a valid temperature." << endl;
      }
    }
    //Only digits entered
    else if (digits(argv[2]))
    {
    cout << c_ctof(argv[2]) << " fahrenheit" << endl;
    }
    //Error for improper entry.
    else
    {
      cout << "Improper entry. Please enter a valid temperature." << endl;
    }
  }



  return 0;
}
