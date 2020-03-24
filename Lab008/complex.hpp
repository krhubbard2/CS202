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

  Complex operator+(const Complex& complex);
  Complex& operator+=(const Complex complex);

  double realPart() const { return _real; }
  double imagPart() const { return _imag; }
private:
  double _real{0};
  double _imag{0};
};

inline Complex operator+(double lhs, const Complex rhs)
{
  return Complex(lhs + rhs.realPart(), rhs.imagPart());
}

std::ostream& operator<<(std::ostream& os, const Complex& complex);









#endif
