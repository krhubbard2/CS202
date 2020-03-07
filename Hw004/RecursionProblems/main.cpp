// Kelby Hubbard
// CS202
// March 8, 2020
// Hw004 -- Recursion Problems
#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

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

//Factorial with recursion
int factorial(int n)
{
  if (n > 1)
  {
    return n * factorial (n-1);
  }
  else
  {
    return 1;
  }

}

//Factorial non recursion
int factorial_loop(int n)
{
  if (n > 1)
  {
    int a = 1, i;
    for (i = 1; i <= n; i++)
    {
      a = a * i;
    }
    return a;
  }
  else
  {
    return 1;
  }
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

  SECTION ("FACTORIAL RECURSIVE")
  {
    REQUIRE (factorial(0) == 1);
    REQUIRE (factorial(1) == 1);
    REQUIRE (factorial(2) == 2);
    REQUIRE (factorial(4) == 24);
    REQUIRE (factorial(6) == 720);
    REQUIRE (factorial(12) == 479001600);
  }

  SECTION ("FACTORIAL NON REDCURSIVE")
  {
    REQUIRE (factorial_loop(0) == 1);
    REQUIRE (factorial_loop(1) == 1);
    REQUIRE (factorial_loop(2) == 2);
    REQUIRE (factorial_loop(4) == 24);
    REQUIRE (factorial_loop(6) == 720);
    REQUIRE (factorial_loop(12) == 479001600);
  }

}
