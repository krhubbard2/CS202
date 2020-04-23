// Kelby Hubbard
// CS202
// April 23, 2020
// Lab014

#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

// [X] Write function template 'twice'
// [X] Test with int and double
// [X] Test with a C++ string
// [X] Test with a C string

template <typename T>
T twice(const T& x){
  return x + x;
}

string twice(const char* x){
  return twice(string(x));
}

int main(int argc, char** argv){
  cout << twice(2) << endl;
  cout << twice(2.3) << endl;
  cout << twice(string("Hello")) << endl;
  cout << twice("Hello") << endl;








  return 0;
}
