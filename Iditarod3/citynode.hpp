// Kelby Hubbard
// CS202
// March 29, 2020
// Iditarod Challenge #3
#ifndef CITYNODE_HPP_
#define CITYNODE_HPP_

#include <string>
using std::string;

class CityNode
{
public:
  CityNode();
  CityNode(unsigned int node, double latY, double lonX);
  void setNodeNumber(unsigned int node);
  void setLatitudeY(double lat);
  void setLongitudeX(double lon);

  unsigned int getNodeNumber();
  double getLatitudeY();
  double getLongitudeX();

private:
  string _cityName;
  unsigned int _nodeNumber;
  double _latitude;
  double _longitutde;
  double _graphX;
  double _graphY;
};





#endif
