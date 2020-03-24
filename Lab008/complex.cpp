// Kelby Hubbard
// CS202
// March 24, 2020
// Lab008
#include "complex.hpp"


Complex::Complex(double real, double imag)
  : _real(real), _imag(imag){}

Complex Complex::operator+(const Complex& complex)
{
  return Complex(_real + complex._real, _imag + complex._imag);
}

Complex& Complex::operator+=(const Complex complex)
{
  _real += complex._real;
  _imag += complex._imag;
  return *this;
}

std::ostream& operator<<(std::ostream& os, const Complex& complex)
{
  //Format:
  // a + i b
  os << complex.realPart();
  os << " + i ";
  os << complex.imagPart();
  return os;
}
