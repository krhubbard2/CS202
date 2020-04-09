// Kelby Hubbard
// CS202
// March 29, 2020
// Iditarod Challenge #3
#include "citylist.hpp"

CityList::CityList() {}

CityList::CityList(CityNode node)
{
  _cityList.push_back(node);
}


void CityList::setCityNode(CityNode node)
{
  _cityList.push_back(node);
}

unsigned int CityList::getCityNode(int node)
{
  return _cityList[node].getNodeNumber();
}

double CityList::getCityLat(int node)
{
  return _cityList[node].getLatitudeY();
}

double CityList::getCityLon(int node)
{
  return _cityList[node].getLongitudeX();
}
