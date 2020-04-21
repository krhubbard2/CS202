// Kelby Hubbard
// CS202
// April 21, 2020
// Iditarod Challenge #5

#include <iostream>
using std::cout;
using std::endl;
#include <fstream>
using std::ifstream;
#include <string>
using std::string;
#include <sstream>
using std::istringstream;
#include "citylist.hpp"
#include "citynode.hpp"
#include "citypath.hpp"
#include "tspsolver.hpp"
#include "svg.hpp"

void readTSP(string fileName, CityNode& node, CityList& city)
{
  ifstream ifile(fileName);
  //Throw error if it can't open file
  if (!ifile)
  {
    cout << "Couldn't open file." << endl;
  }
  else
  {
    city.setFileName(fileName);
    string line;
    bool loop = true;

    while (loop)
    {
      //If reading file hits an error or EOF
      if (!ifile)
      {
        if (ifile.eof())
        {
          loop = false;
        }
        else
        {
          loop = true;
        }
      }
      //If file opens correctly
      else
      {
        getline(ifile, line);
        string nodeStart = "NODE_COORD_SECTION";

        //Start of node listings
        if (line == nodeStart)
        {
          bool loop1 = true;
          while(loop1)
          {
            //If reading file hits EOF
            if (line == "EOF")
            {
              loop1 = false;
              loop = false;
            }
            else
            {
              loop1 = true;
            }
            getline(ifile, line);

            //Ensure line is an int (node / info)
            istringstream iss(line);
            int val;
            iss >> val;
            if(iss)
            {
              istringstream iss1(line);
              //Grab each section of string
              for (int i = 0; i < 3; i++)
              {
                double val1;

                iss1 >> val1;
                //Node number
                if (i == 0)
                {
                  node.setNodeNumber(val1);
                }
                //Latitude
                else if (i == 1)
                {
                  node.setLatitudeY(val1);
                }
                //Longitude
                else if (i == 2)
                {
                  node.setLongitudeX(val1);
                }
              }
              city.setCityNode(node);
            }
          }
        }
      }
    }
  }
}

void newline(){
  cout << "--------------------------------\n";
}

int main(int argc, char** argv){

  CityNode node0(0, 0, 0);
  TspSolver solve;

  //Make CityList for FL3795
  cout << "CITY: FL3795\n";
  CityList fl;
  readTSP("fl3795.tsp", node0, fl);
  CityPath svgfl;
  solve.solveGreedy(fl, svgfl);
  cout << "Generating Greedy SVG Output\n";
  svgGraph(fl, svgfl, "fl3795GreedyOutput.svg");
  solve.solveRandomly(fl, svgfl);
  cout << "Generating Randomly SVG Output\n";
  svgGraph(fl, svgfl, "fl3795RandomlyOutput.svg");
  solve.solveMyWay(fl, svgfl);
  cout << "Generating MyWay SVG Output\n";
  svgGraph(fl, svgfl, "fl3795MyWayOutput.svg");

  newline();

  //Make CityList for FNL4461
  cout << "CITY: FNL4461\n";
  CityList fnl;
  readTSP("fnl4461.tsp", node0, fnl);
  CityPath svgfnl;
  solve.solveGreedy(fnl, svgfnl);
  cout << "Generating Greedy SVG Output\n";
  svgGraph(fnl, svgfnl, "fnl14461GreedyOutput.svg");
  solve.solveRandomly(fnl, svgfnl);
  cout << "Generating Randomly SVG Output\n";
  svgGraph(fnl, svgfnl, "fnl14461RandomlyOutput.svg");
  solve.solveMyWay(fnl, svgfnl);
  cout << "Generating MyWay SVG Output\n";
  svgGraph(fnl, svgfnl, "fnl14461MyWayOutput.svg");

    newline();

  //Make CityList for U2152
  cout << "CITY: U2152\n";
  CityList u;
  readTSP("u2152.tsp", node0, u);
  CityPath svgu;
  solve.solveGreedy(u, svgu);
  cout << "Generating Greedy SVG Output\n";
  svgGraph(u, svgu, "u2152GreedyOutput.svg");
  solve.solveRandomly(u, svgu);
  cout << "Generating Randomly SVG Output\n";
  svgGraph(u, svgu, "u2152RandomlyOutput.svg");
  solve.solveMyWay(u, svgu);
  cout << "Generating MyWay SVG Output\n";
  svgGraph(u, svgu, "u2152MyWayOutput.svg");

    newline();

  //Make CityList for RL1304
  cout << "CITY: RL1304\n";
  CityList rl;
  readTSP("rl1304.tsp", node0, rl);
  CityPath svgrl;
  solve.solveGreedy(rl, svgrl);
  cout << "Generating Greedy SVG Output\n";
  svgGraph(rl, svgrl, "rl1304GreedyOutput.svg");
  solve.solveRandomly(rl, svgrl);
  cout << "Generating Randomly SVG Output\n";
  svgGraph(rl, svgrl, "rl1304RandomlyOutput.svg");
  solve.solveMyWay(rl, svgrl);
  cout << "Generating MyWay SVG Output\n";
  svgGraph(rl, svgrl, "rl1304MyWayOutput.svg");

    newline();


  // Make CityList for USA13509
  cout << "CITY: USA13509\n";
  CityList us;
  readTSP("usa13509.tsp", node0, us);
  CityPath svgus;
  solve.solveGreedy(us, svgus);
  cout << "Generating Greedy SVG Output\n";
  svgGraph(us, svgus, "us13509GreedyOutput.svg");
  solve.solveRandomly(us, svgus);
  cout << "Generating Randomly SVG Output\n";
  svgGraph(us, svgus, "us13509RandomlyOutput.svg");
  solve.solveMyWay(us, svgus);
  cout << "Generating MyWay SVG Output\n";
  svgGraph(us, svgus, "us13509MyWayOutput.svg");

  return 0;
}
