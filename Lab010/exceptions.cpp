// Kelby Hubbard
// CS202
// April 1, 2020
// Lab010

#include <iostream>

// [] Put runtime_error in functionC
// [] Write object with constructor/destructor message
// [] Write try/catch block

void functionC()
{
  //your code here
}

void functionB()
{
  //your code here
  std::cout << "Starting functionB()\n";
  functionC();
  std::cout << "Ending functionB()\n";
}

void functionA()
{
  // your code here
  functionB();
  // your code here
  std::cout << "Caught an exception: " << e.what() << std::endl;
  // your code here
}

int main()
{
  std::cout << "Starting main()" << std::endl;
  functionA();
  std::cout << "Ended normally." << std::endl;
  return 0;
}
