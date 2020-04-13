// Kelby Hubbard
// CS202
// April 10, 2020
// Iditarod Challenge #4
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
#include <cmath>

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

  //Returns Euclidean distance between two cities (node 1 & node 2).
  double distance(int first, int second);

  //Returns CityNode
  CityNode getCityNode(int node);

  //returns  _latitude from CityNode
  double getCityLat(int node);

  //returns _longitude from CityNode
  double getCityLon(int node);

  //Returns _cityList vector size (For use in TspSolver)
  int cityListSize();

private:
  vector<CityNode> _cityList;
  string _fileName;
  CityNode node;
};












#endif
