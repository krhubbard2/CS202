// Kelby Hubbard
// CS202
// April 28, 2020
// Iditarod Challenge #7

#ifndef FLTK_HPP_
#define FLTK_HPP_

#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_File_Chooser.H>
#include <FL/Fl_Input.H>
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <sstream>
using std::istringstream;
#include "citynode.hpp"
#include "citylist.hpp"
#include "svg.hpp"
#include "tspsolver.hpp"

//Please refer to "fltk.cpp" for information on functions below.

void open(Fl_Widget* w, void* data);
void quit(Fl_Widget* w, void* data);
void help(Fl_Widget* w, void* data);
void quitProgram(Fl_Widget* w, void* data);
void greedy(Fl_Widget* w, void* data);
void random(Fl_Widget* w, void* data);
void myWay(Fl_Widget* w, void* data);
void closeWindow(Fl_Widget* w, void* data);
void saveSVGGreedy(Fl_Widget* w, void* data);
void saveSVGRandom(Fl_Widget* w, void* data);
void saveSVGMyWay(Fl_Widget* w, void* data);


#endif
