// Kelby Hubbard
// CS202
// March 8, 2020
// Hw004 -- Recursion Problems
// #include <catch2/catch.hpp>
// #include <iostream>
// #define CATCH_CONFIG_MAIN
//
// int fib(int n)
// {
//   //
//
//   return 0;
// }
//
// int factorial(int n)
// {
//   //
//
//   return 0;
// }
//
// int ack(int m, int n)
// {
//   //
//
//   return 0;
// }
//
// TEST_CASE("Fibonacci Sequence", "[Fibonacci]")
// {
//     REQUIRE( fib(0) == 0 );
//     REQUIRE( fib(1) == 1 );
//     REQUIRE( fib(9) == 34 );
//     REQUIRE( fib(14) == 377 );
// }

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <catch2/catch.hpp>

unsigned int fib(unsigned int n)
 {
   if (n <= 1)
    {
      return n;
    }
  return fib(n-1) + fib(n-2);
}

TEST_CASE( "Fibonacci Sequence", "[fibonacci]" ) {
    REQUIRE( fib(0) == 0 );
    REQUIRE( fib(1) == 1 );
    REQUIRE( fib(9) == 34 );
    REQUIRE( fib(14) == 377 );
}
