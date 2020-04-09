// Kelby Hubbard
// CS202
// March 29, 2020
// Iditarod Challenge #3

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <fstream>
using std::ifstream;
#include <string>
using std::string;
#include <sstream>
using std::istringstream;
#include "citynode.hpp"

void readTSP(string fileName)
{

}

int main(int argc, char** argv)
{
  CityNode brd1(1, 2918, 6528);
  CityNode node1(1, 2, 3);
  ifstream ifile("brd14051.tsp");
  //Throw error if it can't open file
  if (!ifile)
  {
    cout << "Couldn't open file." << endl;
  }
  else
  {
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
                int val1;

                iss1 >> val1;
                //Node number
                if (i == 0)
                {
                  node1.setNodeNumber(val1);
                }
                //Latitude
                else if (i == 1)
                {
                  node1.setLatitudeY(val1);
                }
                //Longitude
                else if (i == 2)
                {
                  node1.setLongitudeX(val1);
                }
              }
            }
          }
        }
      }
    }
  }
  cout << "Node: " << node1.getNodeNumber() << " Lat: "
       << node1.getLatitudeY() << " Lon: " << node1.getLongitudeX();





  return 0;
}
