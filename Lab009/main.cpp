// Kelby Hubbard
// CS202
// Mar. 31, 2020
// Lab009

#include <iostream>
using std::cout;
using std::endl;
#include <iomanip>
#include <string>

// [X] Static local variable
// [X] Static global variable
// [] Static member variable
// [] Static member function

static int test_static_count = 0;

class TestStatic
{
public:
  TestStatic() :
    instanceNum_(test_static_count) {
    cout << __FUNCTION__ << " " << instanceNum_ << " initialized." << endl;
    test_static_count++;
  }

  ~TestStatic()
  {
    cout << __FUNCTION__ << " " << instanceNum_ << " destroyed." << endl;
  }

private:
  int instanceNum_;
};

namespace
{
  TestStatic ts1;
  TestStatic ts2;
}

void foo_static()
{
  static int count = 0;
  static TestStatic ts;
  if (!count)
  {
    cout << __FUNCTION__ << " is not initialized" << endl;
    count = 1;
  }
  else
  {
    cout << __FUNCTION__ << " called " << count << " times" << endl;
    count++;
  }
}

int main(int argc, char** argv)
{
  cout << "Starting main" << endl;
  foo_static();
  foo_static();
  foo_static();
  cout << "Leaving main" << endl;

  return 0;
}
