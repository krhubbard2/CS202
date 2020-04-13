// Kelby Hubbard
// CS202
// April 10, 2020
// Iditarod Challenge #4

#ifndef CITYPATH_HPP_
#define CITYPATH_HPP_
#include <iostream>
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

  //Prints _connections to terminal
  void printCityPath();

  //Returns _connections vector size (For use in TspSolver)
  int cityPathSize();

  //Returns _connections [n] value
  int pathVectorSpecific(int n);

  //Remove last element in _connections (For use in TspSolver)
  void popBackPath();


private:
  //Stores optimal connections from city to city (vector<CityNode> _cityList)
  vector<int> _connections;



};







#endif
