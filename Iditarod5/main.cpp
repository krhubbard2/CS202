// Kelby Hubbard
// CS202
// April 21, 2020
// Iditarod Challenge #5

#include <iostream>
using std::cout;
using std::endl;
#include <fstream>
using std::ifstream;
using std::ofstream;
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

int main(int argc, char** argv){

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
  // //Make CityList for U2152
  // CityList u;
  // readTSP("u2152.tsp", node0, u);

  // //Make CityList for RL1304
  // CityList rl;
  // readTSP("rl1304.tsp", node0, rl);
  // CityPath svgrl;

  //Make CityList for USA13509
  CityList us;
  readTSP("usa13509.tsp", node0, us);
  CityPath svgus;

  TspSolver solve;
  solve.solveGreedy(us, svgus);
  // solve.solveRandomly(rl, svgrl);
  // solve.solveMyWay(rl, svgrl);

  double minX = us.minX();
  double maxX = us.maxX();
  double minY = us.minY();
  double maxY = us.maxY();




  vector<string> svg;
  string line;

  ofstream svgOut("output.svg");
  if (svgOut.is_open())
  {

    line = "<html xmlns=\"http://www.w3.org/1999/xhtml\"\n";
    line += "xmlns:svg=\"http://www.w3.org/2000/svg\">\n";
    line += "<body>\n <svg:svg width=\"2250px\" height=\"2500px\">\n";
    svgOut << line;

    double x = 0;
    double y = 0;
    double oldX = 0;
    double oldY = 0;
    string dot = "";

    // INSERT CITIES AND LINES HERE
    for (auto i = 0; i < svgus.size(); i++){
      oldX = x;
      oldY = y;

      dot = "<svg:circle cx=\"";
      x = 1980 - 1920 * (us.getCityLon(svgus.getPath(i)) - minX) / (maxX - minX);
      y = 2080 - 1080 * (us.getCityLat(svgus.getPath(i)) - minY) / (maxY - minY);

      //x
      dot += std::to_string(x);

      //y
      dot += "\" cy=\"";
      dot += std::to_string(y);

      dot += "\" r=\"";
      dot += '3';

      dot += "\" fill=\"#0078ff\"/>\n";


      svgOut << dot;



    }

    line = "</svg:svg>\n <svg:svg width=\"2250px\" height=\"2500px\">\n";
    line += "</svg:svg>\n </body>\n </html>";
    svgOut << line;
  }

  /*
  ofstream ifile(fileName);
  if (ifile.is_open())
  {
    for (auto i = 0; i < _pb.size(); i++)
    {
      string fname, lname;
      double phone;
      fname = get<0>(_pb.getTuple(i));
      lname = get<1>(_pb.getTuple(i));
      phone = get<2>(_pb.getTuple(i));
      ifile << fname << " " << lname << " " << setprecision(9) << phone << endl;
    }
  */


  /*
  <rect width="100%" height="100%" fill="red" />

  <circle cx="960" cy="540" r="380" fill="blue" />

  <text x="960" y="540" font-size="160" text-anchor="middle" fill="white">SVG</text>

</svg>

       */



  return 0;
}
