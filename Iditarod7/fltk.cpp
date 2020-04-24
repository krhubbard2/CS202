// Kelby Hubbard
// CS202
// April 28, 2020
// Iditarod Challenge #7

#include "fltk.hpp"

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

  string choice = fileChoice->value();
  std::istringstream is(choice);
  is >> userFile;

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

void greedy(Fl_Widget* w, void* data, void* data1){
  readTSP(userFile, node0, list);
}
