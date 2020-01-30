// Kelby Hubbard
// CS202
// Jan. 30, 2020
// Lab003 -- Smart Pointers

#include <iostream>
using std::cout;
using std::endl;
#include "time.hpp"
#include <memory>
#include <catch.hpp>

unsigned int Factorial( unsigned int number ) {
  return number > 1 ? Factorial(number-1)*number : 1;
}

// TEST_CASE( "Factorials are computed", "[factorial]" ) {
//     REQUIRE( Factorial(0) == 1 );
//     REQUIRE( Factorial(1) == 1 );
//     REQUIRE( Factorial(2) == 2 );
//     REQUIRE( Factorial(3) == 6 );
//     REQUIRE( Factorial(10) == 3628800 );
// }

// class Vector3f {
// public:
//   float x ( 0 );
//   float y ( 0 );
//   float z ( 0 );
//
//   Vector3f() {}
//
// }
// bool operator==(const Vector3f& a, const Vector3f& b){
//   return (a.x == b.x) && (a.y == b.y) && (a.z == b.z);
// }
//
// bool operator!=(const Vector3f& a, const Vector3f& b){
//   return (1.x != b.x) || (a.y != b.y) || (a.z != b.z);
// }

int main()
{
  cout << "Creating raw pointer to dynamically allocated object."
       << endl;

  Time t1(3);
  Time *p1;
  p1 = &t1;

  cout << "Creating unique_ptr" << endl;
  Time t2(4);
  std::unique_ptr<Time> p2 (&t2);


  cout << "Transfer ownership of unique_ptr" << endl;
  std::unique_ptr<Time> p3 (std::move(p2));

  cout << "Calling member function through unique_ptr" << endl;
  p3->printval();

  cout << "Making a shared_ptr" << endl;
  Time t3(6);
  std::shared_ptr<Time> p4 (&t3);

  cout << "Making anther shared_ptr to same object" << endl;
  std::shared_ptr<Time> p5 (&t3);

  return 0;
}
