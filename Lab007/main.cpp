// Kelby Hubbard
// CS202
// March 24, 2020
// Lab007

#include <iostream>
#include <iomanip>
#include "customer.hpp"

//Design
// [X] Create Customer Class
// [X] Write setters/getters
// [X] override << operator
// [X] overide = operator

int main(int argc, char** argv)
{
  std::cout.imbue(std::locale("en_US.UTF-8"));
  std::cout << std::showbase;

  const Customer customer;
  std::cout << customer << "\n";

  Customer customer2;
  customer2.setFirstName("Albert");
  customer2.setLastName("Einstein");
  customer2.setBankBalance(200.00);
  std::cout << customer2 << std::endl;

  Customer customer3;
  customer3 = customer2;
  std::cout << customer3 << std::endl;







  return 0;
}
