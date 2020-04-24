// Kelby Hubbard
// CS202
// April 28, 2020
// Iditarod Challenge #7

#include "fltk.hpp"

Fl_Input* fileChoice = nullptr;
string userFile = "";

void open(Fl_Widget* w, void* data){
  // Create the file chooser, and show it
  Fl_File_Chooser chooser(".",                        // directory
                          "*.tsp",                        // filter
                          Fl_File_Chooser::SINGLE,     // chooser type
                          "Title Of Chooser");        // title
  chooser.show();

  // Block until user picks something.
  //     (The other way to do this is to use a callback())
  //
  while(chooser.shown())
      { Fl::wait(); }

  // User hit cancel?
  if ( chooser.value() == NULL )
      { fprintf(stderr, "(User hit 'Cancel')\n"); return; }

  // Print what the user picked
  fprintf(stderr, "--------------------\n");
  fprintf(stderr, "DIRECTORY: '%s'\n", chooser.directory());
  fprintf(stderr, "    VALUE: '%s'\n", chooser.value());
  fprintf(stderr, "    COUNT: %d files selected\n", chooser.count());

  string choice = chooser.value();
  std::istringstream is(choice);
  is >> userFile;

  Fl_Button* b = (Fl_Button*) w;
  Fl_Output * o = (Fl_Output*)b->parent()->child(6);
  o->value(userFile.c_str());

}

//Exits program
void quitProgram(Fl_Widget* w, void* data)
{
	exit(0);
}

//Quit function for menu dropdown bar
void quit(Fl_Widget* w, void* data){
  Fl_Window* window = new Fl_Window(340, 150, "Quit");
  	Fl_Box* box = new Fl_Box(20, 40, 300, 35, "Are you sure you want to quit?");
  	Fl_Button* yesButton = new Fl_Button(120, 100, 100, 25, "Yes I\'m sure.");
  	yesButton->callback(quitProgram);

  	box->show();
  	window->show();
}

void help(Fl_Widget* w, void* data){
  cout << "help\n";
}

void greedy(Fl_Widget* w, void* data){
  string input = userFile;
  if (input != ""){
    CityNode node(0,0,0);
    CityList list;
    readTSP(input, node, list);
    CityPath path;
    TspSolver solve;
    // solve.solveGreedy(list, path);


    Fl_Button* b = (Fl_Button*) w;
    Fl_Output * o = (Fl_Output*)b->parent()->child(5);
    string distance = std::to_string(solve.solveGreedy(list, path));
    o->value(distance.c_str());
  }
  else{
    Fl_Window* window = new Fl_Window(340, 150, "Error!");
    	Fl_Box* box = new Fl_Box(20, 40, 300, 35, "You must first import a file.");
    	box->show();
    	window->show();
  }
}
