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
#include <random>

// [X] Implement remove_copy
// [X] Implement sample (MUST COMPILE IN 17+)

int main(int argc, char** argv){

  // Remove_copy
  string str = "Hello, World";
  cout << "Before: " << str << endl;
  cout << "After: ";
  // Remove ','
  std::remove_copy(str.begin(), str.end(),
                   std::ostream_iterator<char>(cout), ',');
  cout << endl;

  // sample
  string out;
  std::sample(str.begin(), str.end(), std::back_inserter(out),
              3, std::mt19937{std::random_device{}()});
  cout << "3 random chars out of " << str << " : " << out << endl;







  return 0;
}
