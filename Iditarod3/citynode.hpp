// Kelby Hubbard
// CS202
// March 29, 2020
// Iditarod Challenge #3
#ifndef CITYNODE_HPP_
#define CITYNODE_HPP_

class CityNode
{
public:
  void setNodeNumber(unsigned int node);
  void setLatitudeY(double lat);
  void setLongitudeX(double lon);

private:
  unsigned int _nodeNumber;
  double _latitude;
  double _longitutde;
  double _graphX;
  double _graphY;
};





#endif
