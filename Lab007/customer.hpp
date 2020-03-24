// Kelby Hubbard
// CS202
// March 24, 2020
// Lab007
#ifndef CUSTOMER_HPP_
#define CUSTOMER_HPP_

#include <string>
#include <iostream>

class Customer
{
public:
    Customer();

    Customer& operator=(const Customer& other);

    const std::string& firstName() const{ return _firstName;}
    const std::string& lastName() const{ return _lastName;}
    double bankBalance() const{ return _bankBalance;}

    void setFirstName(const std::string& newFirstName);
    void setLastName(const std::string& newLastName);
    void setBankBalance(double newBankBalance);
private:
    std::string _firstName{"Kelby"};
    std::string _lastName{"Hubbard"};
    double _bankBalance{100.00};

};

std::ostream& operator<<(std::ostream& os, const Customer& customer);










#endif
