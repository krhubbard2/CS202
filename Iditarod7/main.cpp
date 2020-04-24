// Kelby Hubbard
// CS202
// April 28, 2020
// Iditarod Challenge #7

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
#include "fltk.hpp"



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
//General Class declerations needed
CityNode node0(0, 0, 0);
TspSolver solve;
CityList list;
CityPath path;
// readTSP("fnl4461.tsp", node0, list);
// CityPath svgfnl;
// solve.solveGreedy(fnl, svgfnl);


// Main Window
Fl_Double_Window* window = new Fl_Double_Window(810, 570, "TSPLIB Solver");

// Drop Down Menu Bar
{ Fl_Menu_Bar* menuBar
		= new Fl_Menu_Bar(0, 0, 85, 25);
	//When selected runs "open()" in fltk.cpp
	menuBar->add("File/Open", FL_CTRL + 'o', open);
	//When selected runs "quit()" in fltk.cpp
	menuBar->add("File/Quit", FL_CTRL + 'q', quit);
	//When selected runs "help()" in fltk.cpp
	menuBar->add("Help/Help", FL_CTRL + 'h', help);
}

// Greedy Button
{ Fl_Button* greedyButton
        = new Fl_Button(55, 480, 180, 45, "Greedy");
greedyButton->callback(greedy, (void*) &userFile);
}

// Random Button
{ Fl_Button* randomButton
        = new Fl_Button(325, 480, 180, 45, "Random");
}

// MyWay Button
{ Fl_Button* myWayButton
        = new Fl_Button(585, 480, 180, 45, "MyWay");
}

// Import Button
{ Fl_Button* importButton
        = new Fl_Button(280, 215, 280, 70, "Import TSLIB");
importButton->callback(open);
}

// TotalDistance Output
{ Fl_Output* output
        = new Fl_Output(330, 390, 175, 55, "Total Distance Traveled:");
}



window->end();
window->resizable();
window->show(argc, argv);

return (Fl::run());

  // CityNode node0(0, 0, 0);
  // TspSolver solve;
  // CityList fnl;
  // //Make CityList for FNL4461
  // cout << "CITY: FNL4461\n";
  // CityList fnl;
  // readTSP("fnl4461.tsp", node0, fnl);
  // CityPath svgfnl;
  // solve.solveGreedy(fnl, svgfnl);
  // cout << "Generating Greedy SVG Output\n";
  // svgGraph(fnl, svgfnl, "fnl14461GreedyOutput.svg");
  // solve.solveRandomly(fnl, svgfnl);
  // cout << "Generating Randomly SVG Output\n";
  // svgGraph(fnl, svgfnl, "fnl14461RandomlyOutput.svg");
  // solve.solveMyWay(fnl, svgfnl);
  // cout << "Generating MyWay SVG Output\n";
  // svgGraph(fnl, svgfnl, "fnl14461MyWayOutput.svg");
}
