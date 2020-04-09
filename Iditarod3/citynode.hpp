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
  //Default Constructor
  CityNode();

  /*This constructor should typically be used. Adds node number,
    the lat, and long of node to the node.  */
  CityNode(unsigned int node, double latY, double lonX);

  //Sets _nodeNumber
  void setNodeNumber(unsigned int node);
  //Sets _latitude
  void setLatitudeY(double lat);
  //Sets _longitude
  void setLongitudeX(double lon);

  //returns _nodeNumber
  unsigned int getNodeNumber();
  //returns _latitude
  double getLatitudeY();
  //returns _longitude
  double getLongitudeX();

private:
  unsigned int _nodeNumber;
  double _latitude;
  double _longitude;
  double _graphX;
  double _graphY;
};





#endif
