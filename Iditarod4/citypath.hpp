// Kelby Hubbard
// CS202
// April 10, 2020
// Iditarod Challenge #4

#ifndef CITYPATH_HPP_
#define CITYPATH_HPP_
#include <vector>
using std::vector;
#include "citynode.hpp"

class CityPath
{
public:
  //Default Constructor
  CityPath ();

  //Constructor automatically adding node to _connections vector
  CityPath(CityNode node);

  //Adds node to _cityList vector
  void setCityPath(CityNode node);

private:
  //Stores optimal connections from city to city (vector<CityNode> _cityList)
  vector<int> _connections;



};







#endif
