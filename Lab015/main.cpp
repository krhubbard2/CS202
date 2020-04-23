// Kelby Hubbard
// CS202
// April 23, 2020
// Lab015

#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <algorithm> // hhttps://en.cppreference.com/w/cpp/algorithm
#include <numeric>   // https://en.cppreference.com/w/cpp/header/numeric
#include <iterator>

// [X] Implement remove_copy
// [] Implement sample

int main(int argc, char** argv){

  //Remove_copy
  string str = "Hello, World";
  cout << "Before: " << str << endl;
  cout << "After: ";
  // Remove ','
  std::remove_copy(str.begin(), str.end(),
                   std::ostream_iterator<char>(cout), ',');
  cout << endl;






  return 0;
}
