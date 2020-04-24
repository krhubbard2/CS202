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

void TspSolver::solveRandomly(CityList& list, CityPath& marked)
{
  CityPath unmarked;
  vector<int> temp;
  vector<int> finalVec;

  //Starting distance
  double dist = 0;

  //Best Distance
  double bestDist = 1e12;

  //M times repeated -- Change m to whatever
  int m = 100;

  for (int i = 0; i < m; i++)
  {
    temp.clear();
    dist = 0;
    unmarked.deleteAllPaths();
    //Fill unmarked path
    for (int i = 0; i < list.cityListSize(); i++)
    {
      unmarked.addPath(i);
    }
    temp.clear();
    //Set starting city
    int startNode = getRandInt(0, list.cityListSize() - 1);
    //Add starting city to temp
    temp.push_back(startNode);
    //Delete starting city from unmarked
    unmarked.deletePath(startNode);

    //While cities unmarked remain
    while (unmarked.size() != 0)
    {
      //Randomly connect cities
      int startNode = getRandInt(0, unmarked.size() - 1);
      temp.push_back(unmarked.getPath(startNode));
      unmarked.deletePath(startNode);
    }

    //Starting city is also ending city
    temp.push_back(temp[0]);

    //Find distance traveled
    for (auto i = 0; i < temp.size() - 1; i++)
    {
      dist += list.distance(temp[i], temp[i + 1]);
    }

    if (dist < bestDist)
    {
      bestDist = dist;
      finalVec = temp;
    }
  }

  marked.setConnections(finalVec);
  dist = 0;
  //cout << "Path traveled: ";
  for (int i = 0; i < marked.size() - 1; i++)
  {
    dist += list.distance(marked.getPath(i), marked.getPath(i+1));
    //cout << marked.getPath(i) << " ";
  }
  //cout << marked.getPath(marked.size() - 1) << endl;
  cout << "Total distance: " << dist << endl;
}

double TspSolver::solveGreedy(CityList& list, CityPath& marked)
{
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

    //Find closest city comparing all cities remaining (unmarked)
    for(auto z = 0; z < unmarked.cityPathSize(); z++)
    {
      if (dist > list.distance(marked.getPath(i), unmarked.getPath(z)))
      {
        dist = list.distance(marked.getPath(i), unmarked.getPath(z));

        //Smallest city found
        smallest = unmarked.getPath(z);
        //Delete the found city
        del = z;
      }
    }

    marked.addPath(smallest);
    unmarked.deletePath(del);

  }

  marked.addPath(marked.getPath(0));

  dist = 0;
  //cout << "Path traveled: ";
  for (int i = 0; i < marked.size() - 1; i++)
  {
    dist += list.distance(marked.getPath(i), marked.getPath(i+1));
    //cout << marked.getPath(i) << " ";
  }
  //cout << marked.getPath(marked.size() - 1) << endl;
  cout << "Total distance: " << dist << endl;

  return dist;

}

void TspSolver::solveMyWay(CityList& list, CityPath& marked)
{
  // Connect cities in node order (ending with starting node)

  for (int i = 0; i < list.cityListSize(); i++)
  {
    marked.addPath(i);
  }

  int dist = 0;
  //cout << "Path traveled: ";
  for (int i = 0; i < marked.size() - 1; i++)
  {
    dist += list.distance(marked.getPath(i), marked.getPath(i+1));
    //cout << marked.getPath(i) << " ";
  }
  //cout << marked.getPath(marked.size() - 1) << endl;
  cout << "Total distance: " << dist << endl;

}
