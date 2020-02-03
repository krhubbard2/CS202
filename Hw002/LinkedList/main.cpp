// Kelby Hubbard
// CS202
// Feb. 2, 2020
// Hw002 -- Linked List with shared_ptr<T>

#define CATCH_CONFIG_MAIN

#include "value.hpp"

Value Test[] = { 1, 2, 3, 4, 5 };
std::list<shared_ptr<Value>> list1;
Value val6 = {6};
Value val7 = {7};

TEST_CASE("TESTING VALUE.HPP", "[data]")
{
  for(auto x : Test)
  {
    pushQueue(list1, x);
  }

  SECTION("QUEUE")
  {
    pushQueue(list1, val6);
    REQUIRE(list1.back()->data == val6.data);

    popQueue(list1);
    REQUIRE(list1.front()->data != Test[0].data);
  }
}
