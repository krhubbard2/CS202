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

void TspSolver::solveRandomly(CityList& list)
{
  CityPath marked;
  CityPath unmarked;
  vector<int> temp;
  vector<int> final;
  //Fill unmarked path
  for (int i = 0; i < list.cityListSize(); i++)
  {
    unmarked.addPath(i);
  }

  //Starting distance
  double dist = 0;

  //Best Distance
  double bestDist = 0;

  //M times repeated -- Change m to whatever
  int m = 1;

  for (int i = 0; i < m; i++)
  {
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
      final = temp;
    }
  }
  marked.set_connections(final);


  //Print out distance and path
  cout << "Path Traveled: ";
  for (auto i = 0; i < marked.size() - 1; i++)
  {
    dist += list.distance(marked.getPath(i), marked.getPath(i + 1));

    cout << marked.getPath(i) << " ";
  }
  cout << marked.getPath(0) << endl;
  cout << "Distance Traveled: " << dist << endl;


}

void TspSolver::solveGreedy(CityList& list)
{
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

    //Find closest city comparing all cities remaining (unmarked)
    for(int z = 0; z < unmarked.size(); z++)
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
  cout << "Path traveled: ";
  for (int i = 0; i < marked.size() - 1; i++)
  {
    dist += list.distance(marked.getPath(i), marked.getPath(i+1));
    cout << marked.getPath(i) << " ";
  }
  cout << marked.getPath(marked.size() - 1) << endl;
  cout << "Total distance: " << dist << endl;
}

void TspSolver::solveMyWay(CityList& list)
{
  // Connect cities in node order (ending with starting node)
  CityPath marked;

  for (int i = 0; i < list.cityListSize(); i++)
  {
    marked.addPath(i);
  }

  int dist = 0;
  cout << "Path traveled: ";
  for (int i = 0; i < marked.size() - 1; i++)
  {
    dist += list.distance(marked.getPath(i), marked.getPath(i+1));
    cout << marked.getPath(i) << " ";
  }
  cout << marked.getPath(marked.size() - 1) << endl;
  cout << "Total distance: " << dist << endl;

}
