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
  CityList();
  CityList(CityNode node);

  void setCityNode(CityNode node);
  void printCityNode();
  void setFileName(string name);

  string getFileName();
  unsigned int getCityNode(int node);
  double getCityLat(int node);
  double getCityLon(int node);

private:
  vector<CityNode> _cityList;
  string _fileName;
  CityNode node;
};












#endif
