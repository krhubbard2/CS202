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
  CityPath(const int& s);

  CityPath() : _size(0) {};

  CityPath(CityPath &copy) {_connections = copy._connections;};

  int getPath(const int& n) const;

  void addPath(const int& n);

  void deletePath(const int& n);

  void deleteAllPaths();

  int size() const { return _connections.size(); }

  vector<int> get_connections();

  void set_connections(vector<int>& vec);

private:
  //Stores optimal connections from city to city (vector<CityNode> _cityList)
  vector<int> _connections;

  int _size;
};







#endif
