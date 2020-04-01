// Kelby Hubbard
// CS202
// April 1, 2020
// Lab010

#include <iostream>

// [X] Write try/catch block
// [X] Put runtime_error in functionC
// [X] Write object with constructor/destructor message

class TestObject
{
public:
  TestObject()
  {
    std::cout << "TestObject constructed" << std::endl;
  }
  ~TestObject()
  {
    std::cout << "TestObject destroyed" << std::endl;
  }
};

void functionC()
{
  throw std::runtime_error("functionC() threw std::runtime_error");
}

void functionB()
{
  TestObject to;
  std::cout << "Starting functionB()\n";
  functionC();
  std::cout << "Ending functionB()\n";
}

void functionA()
{
  try
  {
  functionB();
  std::cout << "Shouldn't read / reach this." << std::endl;
  }
  catch(const std::exception& e)
  {
    std::cout << "Caught an exception: " << e.what() << std::endl;
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
