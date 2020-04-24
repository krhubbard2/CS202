// Kelby Hubbard
// CS202
// April 21, 2020
// Iditarod Challenge #5

#ifndef SVG_HPP_
#define SVG_HPP_

#include "citylist.hpp"
#include "citypath.hpp"
#include <fstream>
using std::ofstream;
using std::ifstream;
#include <sstream>
using std::istringstream;

void svgGraph(CityList &list, CityPath &path, string outputName);
void readTSP(string fileName, CityNode& node, CityList& city);



#endif
