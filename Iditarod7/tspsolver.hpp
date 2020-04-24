// Kelby Hubbard
// CS202
// April 28, 2020
// Iditarod Challenge #7

#ifndef TSPSOLVER_HPP_
#define TSPSOLVER_HPP_

#include "citylist.hpp"
#include "citypath.hpp"
#include "citynode.hpp"
#include <random>
#include "fltk.hpp"


class TspSolver
{
public:
  double solveRandomly(CityList& list, CityPath& path);
  double solveGreedy(CityList& list, CityPath& path);
  double solveMyWay(CityList& list, CityPath& path);
  unsigned int getRandInt(int low, int high);

private:



};










#endif
