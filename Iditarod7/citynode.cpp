// Kelby Hubbard
// CS202
// April 10, 2020
// Iditarod Challenge #4
#include "citynode.hpp"

CityNode::CityNode() {}

CityNode::CityNode(unsigned int node, double latY, double lonX)
{
  _nodeNumber = node;
  _latitude = latY;
  _graphY = latY;
  _longitude = lonX;
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
  _longitude = lon;
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
  return _longitude;
}
