// Kelby Hubbard
// CS202
// March 29, 2020
// Iditarod Challenge #3
#include "citynode.hpp"

CityNode::CityNode() {}

CityNode::CityNode(unsigned int node, double latY, double lonX)
{
  _nodeNumber = node;
  _latitude = latY;
  _graphY = latY;
  _longitutde = lonX;
  _graphX = lonX;
}

void CityNode::setNodeNumber(unsigned int node)
{
 _nodeNumber = node;
}

void CityNode::setLatitudeY(double lat)
{
  _latitude = lat;
  _graphY = lat;
}

void CityNode::setLongitudeX(double lon)
{
  _longitutde = lon;
  _graphX = lon;
}


unsigned int CityNode::getNodeNumber()
{
  return _nodeNumber;
}

double CityNode::getLatitudeY()
{
  return _latitude;
}

double CityNode::getLongitudeX()
{
  return _longitutde;
}
