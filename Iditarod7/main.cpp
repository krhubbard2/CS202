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


void newline(){
  cout << "--------------------------------\n";
}

int main(int argc, char** argv){
// Main Window
Fl_Double_Window* window = new Fl_Double_Window(810, 570, "TSPLIB Solver");

// Drop Down Menu Bar Child 0
{ Fl_Menu_Bar* menuBar
		= new Fl_Menu_Bar(0, 0, 85, 25);
	//When selected runs "open()" in fltk.cpp
	menuBar->add("File/Open", FL_CTRL + 'o', open);
	//When selected runs "quit()" in fltk.cpp
	menuBar->add("File/Quit", FL_CTRL + 'q', quit);
	//When selected runs "help()" in fltk.cpp
	menuBar->add("Help/Help", FL_CTRL + 'h', help);
}

// Greedy Button Child 1
{ Fl_Button* greedyButton
        = new Fl_Button(55, 480, 180, 45, "Greedy");
greedyButton->callback(greedy);
}

// Random Button Child 2
{ Fl_Button* randomButton
        = new Fl_Button(325, 480, 180, 45, "Random");
}

// MyWay Button Child 3
{ Fl_Button* myWayButton
        = new Fl_Button(585, 480, 180, 45, "MyWay");
}

// Import Button Child 4
{ Fl_Button* importButton
        = new Fl_Button(280, 215, 280, 70, "Import TSLIB");
importButton->callback(open);
}

// Total Distance Output Child 5
{ Fl_Output* distanceOutput
        = new Fl_Output(330, 390, 175, 55, "Total Distance Traveled:");
}

// File Selected Output Child 6
{ Fl_Output* fileOutput
        = new Fl_Output(220, 310, 425, 35, "File Selected:");
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
