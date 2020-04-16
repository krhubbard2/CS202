// Kelby Hubbard
// CS202
// April 16, 2020
// Lab013 -- Class Templates

#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

// [X] Write wrapper template class
// [] Get friend to work with operator<<

template <typename WrapType>
class Wrapper{
public:
  Wrapper(const WrapType& obj) : _obj(obj) {}

//private:
  WrapType _obj;
};

template <typename T>
std::ostream& operator<<(std::ostream& os, const Wrapper<T>& w){
  os << w._obj;
  return os;
}

int main(int argc, char** argv)
{
  Wrapper<int> w{ 2 };
  Wrapper<string> s{ "Hello, World" };

  cout << w << " " << s << endl;

  return 0;
}
