// Kelby Hubbard
// CS202
// April 10, 2020
// Iditarod Challenge #4
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
  return _cityList[node-1].getNodeNumber();
}

double CityList::getCityLat(int node)
{
  return _cityList[node-1].getLatitudeY();
}

double CityList::getCityLon(int node)
{
  return _cityList[node-1].getLongitudeX();
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

  //Returns Euclidean distance between two cities (node 1 & node 2).
double CityList::distance(int first, int second)
{
  //x = long y = lat
  double d, x1, x2, y1, y2;
  x1 = getCityLon(first);
  x2 = getCityLon(second);
  y1 = getCityLat(first);
  y2 = getCityLat(second);

  d = sqrt(pow((x2-x1),2) + pow((y2-y1),2));

  return d;

}
