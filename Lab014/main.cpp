// Kelby Hubbard
// CS202
// April 23, 2020
// Lab014

#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

// [] Write function template 'twice'
// [] Test with int and double
// [] Test with a C++ string
// [] Test with a C string

template <typename T>
T twice(const T& x){
  return x + x;
}

int main(int argc, char** argv){
  cout << twice(2) << endl;
  cout << twice(2.3) << endl;









  return 0;
}
