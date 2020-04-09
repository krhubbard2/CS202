// Kelby Hubbard
// CS202
// March 29, 2020
// Iditarod Challenge #3
#ifndef CITYLIST_HPP_
#define CITYLIST_HPP_

#include <string>
using std::string;
#include <vector>
using std::vector;
#include "citynode.hpp"

class CityList
{
public:
  CityList();
  CityList(CityNode node);
  void setCityNode(CityNode node);

  unsigned int getCityNode(int node);
  double getCityLat(int node);
  double getCityLon(int node);

private:
  vector<CityNode> _cityList;
  CityNode node;
};












#endif
