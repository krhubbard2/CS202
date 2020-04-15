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

void TspSolver::solveGreedy(CityList& list)
{
  // Design
  // [X] Pick a random starting city -- add it to CityPath
  // [] While cities remain -- look for closest city add it to CityList

  CityPath marked;
  CityPath unmarked;

  //Fill unmarked path
  for (int i = 0; i < list.cityListSize(); i++)
  {
    unmarked.addPath(i);
  }

  //Starting distance
  double dist = 0;

  //Set starting city
  int startNode = getRandInt(0, list.cityListSize() - 1);
  //Add starting city to marked
  marked.addPath(startNode);
  //Delete starting city from unmarked
  unmarked.deletePath(startNode);

  int smallest;
  int del;
  // Loop for all nodes
  for (int i = 0; i < list.cityListSize(); i++)
  {
    dist = 1e12;

    //If last city
    if (unmarked.size() == 1)
    {
      marked.addPath(unmarked.getPath(0));
      unmarked.deletePath(0);
      break;
    }

    for(int z = 0; z < unmarked.size(); z++)
    {
      if (dist > list.distance(marked.getPath(i), unmarked.getPath(z)))
      {
        dist = list.distance(marked.getPath(i), unmarked.getPath(z));

        smallest = unmarked.getPath(z);

        del = z;
      }
    }

    marked.addPath(smallest);
    unmarked.deletePath(del);

  }

  marked.addPath(marked.getPath(0));

  dist = 0;
  cout << "Path traveled: ";
  for (int i = 0; i < marked.size() - 1; i++)
  {
    dist += list.distance(marked.getPath(i), marked.getPath(i+1));
    cout << marked.getPath(i) << " ";
  }
  cout << marked.getPath(marked.size() - 1) << endl;
  cout << "Total distance: " << dist << endl;
}
