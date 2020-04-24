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


int main(int argc, char** argv){
// Main Window
Fl_Double_Window* window = new Fl_Double_Window(810, 370, "TSPLIB Solver");

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
        = new Fl_Button(55, 280, 180, 45, "Greedy");
greedyButton->callback(greedy);
}

// Random Button Child 2
{ Fl_Button* randomButton
        = new Fl_Button(325, 280, 180, 45, "Random");
randomButton->callback(random);
}

// MyWay Button Child 3
{ Fl_Button* myWayButton
        = new Fl_Button(585, 280, 180, 45, "MyWay");
myWayButton->callback(myWay);
}

// Import Button Child 4
{ Fl_Button* importButton
        = new Fl_Button(280, 35, 280, 70, "Import TSLIB");
importButton->callback(open);
}

// Total Distance Output Child 5
{ Fl_Output* distanceOutput
        = new Fl_Output(330, 190, 175, 55, "Total Distance Traveled:");
}

// File Selected Output Child 6
{ Fl_Output* fileOutput
        = new Fl_Output(220, 135, 425, 35, "File Selected:");
}



//Show main FLTK window
window->end();
window->resizable();
window->show(argc, argv);

return (Fl::run());
}
