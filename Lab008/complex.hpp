// Kelby Hubbard
// CS202
// March 24, 2020
// Lab008
#ifndef COMPLEX_HPP_
#define COMPLEX_HPP_

#include <iostream>

class Complex
{
public:
  Complex() {}
  Complex(double real, double imag = 0);

private:
  double _real{0};
  double _imag{0};
};

std::ostream& operator<<(std::ostream& os, const Complex& complex);









#endif
