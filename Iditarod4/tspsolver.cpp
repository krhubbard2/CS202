// Kelby Hubbard
// CS202
// April 10, 2020
// Iditarod Challenge #4

#include "tspsolver.hpp"

unsigned int TspSolver::getRandInt(int low, int high)
{
  std::random_device rd;
  std::mt19937 gen1(rd());
  std::uniform_int_distribution<int> dist(low,high);
  return dist(gen1);
}

void TspSolver::solveRandomly()
{
  // Design
  // [] Pick a random starting city
  // [] Add startign city to CityPath
  // [] While unchosen cities remain
  //      -- add unchosen ccity to the chosen city path list
  // [] Calculate distance of this city list
  // [] if best-found distance > new-founce distance
  //      --set best-foucne city list to better city list
  // [] repeat M times
  double bestDist = 1e12;
}

void TspSolver::solveGreedy(CityList& list, CityPath& path)
{
  // Design
  // [] Pick a random starting city -- add it to CityPath
  // [] While cities remain -- look for closest city add it to CityList

  //Set starting city
  int high = list.cityListSize();
  int startNode = getRandInt(0, high);
  path.setCityPath(list.getCityNodeNode(startNode));

  cout << "Solve Greedy path contains:\n";
  path.printCityPath();

}
