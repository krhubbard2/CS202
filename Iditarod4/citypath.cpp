// Kelby Hubbard
// CS202
// April 10, 2020
// Iditarod Challenge #4

#include "citypath.hpp"

CityPath::CityPath() {}

CityPath::CityPath(CityNode node)
{
  int connection = node.getNodeNumber();
  _connections.push_back(connection);
}

void CityPath::setCityPath(CityNode node)
{
  int connection = node.getNodeNumber();
  _connections.push_back(connection);
}

void CityPath::printCityPath()
{
  for (auto a : _connections)
  {
    std::cout << a << std::endl;
  }
}

int CityPath::cityPathSize()
{
  return _connections.size();
}

int CityPath::pathVectorSpecific(int n)
{
  return _connections[n];
}

void CityPath::popBackPath()
{
  _connections.pop_back();
}
