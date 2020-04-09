// Kelby Hubbard
// CS202
// March 29, 2020
// Iditarod Challenge #3
#ifndef CITYLIST_HPP_
#define CITYLIST_HPP_

#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <vector>
using std::vector;
#include "citynode.hpp"

class CityList
{
public:
  //Default Constructor
  CityList();

  //Constructor automatically adding node to _cityList vector
  CityList(CityNode node);

  //Adds node to _cityList vector
  void setCityNode(CityNode node);

  //Prints whole _cityList vector
  void printAllCityNodes();

  /*Prints specific vector position of _cityList depending
    on node you want printed*/
  void printSpecCityNode(unsigned int node);

  //Sets file/city name
  void setFileName(string name);

  //returns _fileName
  string getFileName();

  //returns _nodeNumber from CityNode
  unsigned int getCityNode(int node);

  //returns  _latitude from CityNode
  double getCityLat(int node);

  //returns _longitude from CityNode
  double getCityLon(int node);

private:
  vector<CityNode> _cityList;
  string _fileName;
  CityNode node;
};












#endif
