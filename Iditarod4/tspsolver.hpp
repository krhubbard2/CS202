// Kelby Hubbard
// CS202
// April 10, 2020
// Iditarod Challenge #4

#ifndef TSPSOLVER_HPP_
#define TSPSOLVER_HPP_

#include "citylist.hpp"
#include "citypath.hpp"
#include "citynode.hpp"
#include <random>


class TspSolver
{
public:
  void solveRandomly();
  void solveGreedy(CityList &list, CityPath &path);
  void solveMyWay();
  unsigned int getRandInt(int low, int high);

private:



};










#endif
