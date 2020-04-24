// Kelby Hubbard
// CS202
// April 28, 2020
// Iditarod Challenge #7

#include "fltk.hpp"

Fl_Input* fileChoice = nullptr;
string userFile = "";
int saveSVGInt = 0;

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
  Fl_Window* window = new Fl_Window(380, 150, "Help");
    Fl_Box* box = new Fl_Box(35, 60, 300, 35,
      "First import a TSP file you'd like to analyze.\n"
      "Please note the TSP file must include nodes in\n"
      "the format of \"Node # -> Longitutde -> Latitude\"\n"
      "Nodes must be after \"NODE_COORD_SECTION\" and\n"
      "before \"EOF\". Click which algorithm you'd like to\n"
      "run on the TSP file. Some algorithms take some time.\n"
      "Do not worry if there is a slight pause. You will then\n"
      "be prompted if you want to save the SVG.");
  window->show();
  box->show();
}

void greedy(Fl_Widget* w, void* data){
  string input = userFile;
  if (input != ""){
    CityNode node(0,0,0);
    CityList list;
    readTSP(input, node, list);
    CityPath path;
    TspSolver solve;

    Fl_Button* b = (Fl_Button*) w;
    Fl_Output * o = (Fl_Output*)b->parent()->child(5);
    string distance = std::to_string(solve.solveGreedy(list, path));
    o->value(distance.c_str());
    //Save SVG Prompt
    Fl_Window* window = new Fl_Window(340, 150, "SVG");
      Fl_Box* box = new Fl_Box(20, 40, 300, 35, "Would you like to save SVG file?");
      Fl_Button* yesButton = new Fl_Button(60, 100, 100, 25, "Yes");
      yesButton->callback(saveSVGGreedy, (void*) window);
      Fl_Button* noButton = new Fl_Button(180, 100, 100, 25, "No");
      noButton->callback(closeWindow, (void*) window);
      box->show();
      window->show();

  }
  else{
    Fl_Window* window = new Fl_Window(340, 150, "Error!");
    	Fl_Box* box = new Fl_Box(20, 40, 300, 35, "You must first import a file.");
    	box->show();
    	window->show();
  }
}

void random(Fl_Widget* w, void* data){
  string input = userFile;
  if (input != ""){
    CityNode node(0,0,0);
    CityList list;
    readTSP(input, node, list);
    CityPath path;
    TspSolver solve;

    // Display total distance
    Fl_Button* b = (Fl_Button*) w;
    Fl_Output * o = (Fl_Output*)b->parent()->child(5);
    string distance = std::to_string(solve.solveRandomly(list, path));
    o->value(distance.c_str());

    //Save SVG Prompt
    Fl_Window* window = new Fl_Window(340, 150, "SVG");
      Fl_Box* box = new Fl_Box(20, 40, 300, 35, "Would you like to save SVG file?");
      Fl_Button* yesButton = new Fl_Button(60, 100, 100, 25, "Yes");
      yesButton->callback(saveSVGRandom, (void*) window);
      Fl_Button* noButton = new Fl_Button(180, 100, 100, 25, "No");
      noButton->callback(closeWindow, (void*) window);
      box->show();
      window->show();

  }
  else{
    Fl_Window* window = new Fl_Window(340, 150, "Error!");
    	Fl_Box* box = new Fl_Box(20, 40, 300, 35, "You must first import a file.");
    	box->show();
    	window->show();
  }
}

void myWay(Fl_Widget* w, void* data){
  string input = userFile;
  if (input != ""){
    CityNode node(0,0,0);
    CityList list;
    readTSP(input, node, list);
    CityPath path;
    TspSolver solve;


    Fl_Button* b = (Fl_Button*) w;
    Fl_Output * o = (Fl_Output*)b->parent()->child(5);
    string distance = std::to_string(solve.solveMyWay(list, path));
    o->value(distance.c_str());

    //Save SVG Prompt
    Fl_Window* window = new Fl_Window(340, 150, "SVG");
      Fl_Box* box = new Fl_Box(20, 40, 300, 35, "Would you like to save SVG file?");
      Fl_Button* yesButton = new Fl_Button(60, 100, 100, 25, "Yes");
      yesButton->callback(saveSVGMyWay, (void*) window);
      Fl_Button* noButton = new Fl_Button(180, 100, 100, 25, "No");
      noButton->callback(closeWindow, (void*) window);
      box->show();
      window->show();
  }
  else{
    Fl_Window* window = new Fl_Window(340, 150, "Error!");
    	Fl_Box* box = new Fl_Box(20, 40, 300, 35, "You must first import a file.");
    	box->show();
    	window->show();
  }
}

void closeWindow(Fl_Widget* w, void* data){
  Fl_Window *win = (Fl_Window*)data;
  win->hide();
}

void saveSVGGreedy(Fl_Widget* w, void* data){
  string input = userFile;
  CityNode node(0,0,0);
  CityList list;
  readTSP(input, node, list);
  CityPath path;
  TspSolver solve;
  string distance = std::to_string(solve.solveGreedy(list, path));
  string saveName = userFile;
  saveName.erase(saveName.end()-4, saveName.end());
  saveName += "Greedy.svg";
  svgGraph(list, path, saveName);

  Fl_Window* o = new Fl_Window(405, 195, "Saved");
    Fl_Box* box = new Fl_Box(40, 15, 315, 95, "File saved.");
    Fl_Output* output = new Fl_Output(100, 100, 265, 60, "File Name:");
    output->value(saveName.c_str());
    o->show();
    box->show();

  Fl_Window *win = (Fl_Window*)data;
  win->hide();
}

void saveSVGRandom(Fl_Widget* w, void* data){
  string input = userFile;
  CityNode node(0,0,0);
  CityList list;
  readTSP(input, node, list);
  CityPath path;
  TspSolver solve;
  string distance = std::to_string(solve.solveRandomly(list, path));
  string saveName = userFile;
  saveName.erase(saveName.end()-4, saveName.end());
  saveName += "Random.svg";
  svgGraph(list, path, saveName);

  Fl_Window* o = new Fl_Window(405, 195, "Saved");
    Fl_Box* box = new Fl_Box(40, 15, 315, 95, "File saved.");
    Fl_Output* output = new Fl_Output(100, 100, 265, 60, "File Name:");
    output->value(saveName.c_str());
    o->show();
    box->show();


  Fl_Window *win = (Fl_Window*)data;
  win->hide();
}

void saveSVGMyWay(Fl_Widget* w, void* data){
  string input = userFile;
  CityNode node(0,0,0);
  CityList list;
  readTSP(input, node, list);
  CityPath path;
  TspSolver solve;
  string distance = std::to_string(solve.solveMyWay(list, path));
  string saveName = userFile;
  saveName.erase(saveName.end()-4, saveName.end());
  saveName += "MyWay.svg";
  svgGraph(list, path, saveName);

  Fl_Window* o = new Fl_Window(405, 195, "Saved");
    Fl_Box* box = new Fl_Box(40, 15, 315, 95, "File saved.");
    Fl_Output* output = new Fl_Output(100, 100, 265, 60, "File Name:");
    output->value(saveName.c_str());
    o->show();
    box->show();

  Fl_Window *win = (Fl_Window*)data;
  win->hide();
}
