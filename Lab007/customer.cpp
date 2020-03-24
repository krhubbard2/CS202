// Kelby Hubbard
// CS202
// March 24, 2020
// Lab007

#include "customer.hpp"
#include <iomanip>

Customer::Customer(){}

Customer& Customer::operator=(const Customer& other)
{
  _firstName = other._firstName;
  _lastName = other._lastName;
  _bankBalance = other._bankBalance;
  return *this;
}

void Customer::setFirstName(const std::string& newFirstName)
{
  _firstName = newFirstName;
}
void Customer::setLastName(const std::string& newLastName)
{
  _lastName = newLastName;
}
void Customer::setBankBalance(double newBankBalance)
{
  _bankBalance = newBankBalance;
}

std::ostream& operator<<(std::ostream& os, const Customer& customer)
{
  os << "First Name: " << customer.firstName() << std::endl;
  os << "Last Name: " << customer.lastName() << std::endl;
  os << "Bank Balance: " << std::put_money(customer.bankBalance());
  return os;
}
