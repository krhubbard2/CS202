// Kelby Hubbard
// CS202
// Feb. 2, 2020
// Hw002 -- Lower Case Letters
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

void to_lower(char* s)
{
  while (s[0] != 0)
  {
    if (s[0] >= 65 && s[0] <= 90)
    {
      char a = s[0] + 32;
      cout << a;
    }
    else
    {
      cout << s[0];
    }
    s++;
  }
  cout << endl;
}

int main()
{
  cout << "C Style String Uppercase to Lowercase Converter" << endl;

  //To convert any c style string to lowercase, change the string
  //below to desired text. Any length will work.
  char *s = "ThIs iS a C sTylE STRING!";

  cout << "Original: " << s << endl;

  cout << "Lowercase: ";
  to_lower(s);



  return 0;
}
