// Kelby Hubbard
// CS202
// April 10, 2020
// Iditarod Challenge #4

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

int main()
{

  CityNode node0(0, 0, 0);

  // //Make CityList for BRD14051
  // CityList brd;
  // readTSP("brd14051.tsp", node0, brd);
  //
  // //Make CityList for FL3795
  // CityList fl;
  // readTSP("fl3795.tsp", node0, fl);
  //
  // //Make CityList for FNL4461
  // CityList fnl;
  // readTSP("fnl4461.tsp", node0, fnl);
  //
  // //Make CityList for RL1304
  // CityList rl;
  // readTSP("rl1304.tsp", node0, rl);
  //
  // //Make CityList for U2152
  // CityList u;
  // readTSP("u2152.tsp", node0, u);

  CityList test;
  readTSP("test.tsp", node0, test);

  CityPath testPath;
  TspSolver testSolve;
  testSolve.solveGreedy(test, testPath);






  return 0;
}
