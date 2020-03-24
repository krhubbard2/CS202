// Kelby Hubbard
// CS202
// March 24, 2020
// Iditarod Challenge 1

#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

//Design
// [X] fib(n)
// [X] fib_loop(n)
// [] factorial(n)
// [] factorial_loop(n)

//Fibonacci with recursion
unsigned int fib(unsigned int n)
 {
   if (n <= 1)
    {
      return n;
    }
  return fib(n-1) + fib(n-2);
}

//Fibonacci without recursion
int fib_loop(int n)
{
  if (n <= 1)
  {
    return n;
  }
  int a = 1;
  int b = 1;
  for (int i = 2; i < n; ++i)
  {
    int temp = a;
    a += b;
    b = temp;
  }
  return a;
}


TEST_CASE( "Fibonacci Sequence", "[fibonacci]" )
{
  SECTION("FIBONACCI RECURSIVE")
  {
    REQUIRE( fib(0) == 0 );
    REQUIRE( fib(1) == 1 );
    REQUIRE( fib(9) == 34 );
    REQUIRE( fib(14) == 377 );
  }

  SECTION ("FIBONACCI NON RECURSIVE")
  {
    REQUIRE( fib_loop(0) == 0);
    REQUIRE( fib_loop(1) == 1 );
    REQUIRE( fib_loop(9) == 34 );
    REQUIRE( fib_loop(14) == 377 );
  }

}
