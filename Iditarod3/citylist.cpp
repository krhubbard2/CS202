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

void CityList::printAllCityNodes()
{
  for (auto a : _cityList)
  {
    cout << "City/File: " << getFileName() << " Node: " << a.getNodeNumber()
         << " Lat: " << a.getLatitudeY() << " Lon: " << a.getLongitudeX()
         << endl;
  }
}

void CityList::printSpecCityNode(unsigned int node)
{
  /*Function assumes you typed in the node you want printed NOT the vector
    position. Hence node-1 to take into account vector position [0]*/
  cout << "City/File: " << getFileName() << " Node: "
       << _cityList[node-1].getNodeNumber() << " Lat: "
       << _cityList[node-1].getLatitudeY() << " Lon: "
       << _cityList[node-1].getLongitudeX() << endl;
}

void CityList::setFileName(string name)
{
  _fileName = name;
}

string CityList::getFileName()
{
  return _fileName;
}
