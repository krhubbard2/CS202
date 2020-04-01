// Kelby Hubbard
// CS202
// April 1, 2020
// Lab010

#include <iostream>

// [X] Write try/catch block
// [X] Put runtime_error in functionC
// [] Write object with constructor/destructor message



void functionC()
{
  //your code here
  throw std::runtime_error("functionC() threw std::runtime_error");
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
  try
  {
  functionB();
  std::cout << "Shouldn't read / reach this." << std::endl;
  }
  catch(const std::exception& e)
  {
    // your code here
    std::cout << "Caught an exception: " << e.what() << std::endl;
    // your code here
  }
  std::cout << "This code should be read / reached" << std::endl;
}

int main()
{
  std::cout << "Starting main()" << std::endl;
  functionA();
  std::cout << "Ended normally." << std::endl;
  return 0;
}
