// Kelby Hubbard
// CS202
// April 10, 2020
// Iditarod Challenge #4

#include "citypath.hpp"

CityPath::CityPath(const int& s) : _size(s) {}

void CityPath::addPath(const int& n)
{
  _connections.push_back(n);
}

void CityPath::deletePath(const int& n)
{
  if (_connections.size() == 1) {
		_connections.erase(_connections.begin());
		return;
	}
	_connections.erase(_connections.begin() + n);
}

int CityPath::getPath(const int& n) const
{
  return _connections[n];
}
