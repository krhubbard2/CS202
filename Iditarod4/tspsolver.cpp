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
  //      -- add unchosen city to the chosen city path list
  // [] Calculate distance of this city list
  // [] if best-found distance > new-founce distance
  //      --set best-foucne city list to better city list
  // [] repeat M times
//  double bestDist = 1e12;
}

void TspSolver::solveGreedy(CityList& list, CityPath& path)
{
  // Design
  // [X] Pick a random starting city -- add it to CityPath
  // [] While cities remain -- look for closest city add it to CityList

  //Set starting city
  int high = list.cityListSize();
  int startNode = getRandInt(0, high);
  path.setCityPath(list.getCityNode(startNode));
  int totalDist = 0;
  //While CityPath isn't complete
    int cityPathNumber = 1;
  while (cityPathNumber != list.cityListSize())
  {
    // n = last element of _connections vector
    int n = path.cityPathSize() - 1;
    //list.removeCityList(n);
    int bestDist = 1e12;
    for (int i = 0; i < list.cityListSize(); i++)
    {


      // dist = distance from most recent _connections node to cityList node
      int dist = list.distance(path.pathVectorSpecific(n),
                               list.listVectorSpecific(i));
      cout << dist << " traveled.\n";

      if (dist < bestDist)
        {
          //If we already added a (worse) node to cityPath for this connection
          if (path.cityPathSize() != cityPathNumber)
          {
            //Remove that worse connection
            path.popBackPath();
          }
          //push new, better connection
          bestDist = dist;
          path.setCityPath(list.getCityNode(i));
        }
    }
    totalDist += bestDist;
    cityPathNumber++;

  }


  cout << "Solve Greedy path contains " << path.cityPathSize() << " cities.\n"
       << "Total distance traveled is: " << totalDist << endl;
  path.printCityPath();

}
