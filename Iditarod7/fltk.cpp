// Kelby Hubbard
// CS202
// April 28, 2020
// Iditarod Challenge #7

#include "fltk.hpp"

void open(Fl_Widget* w, void* data){
  // Create the file chooser, and show it
  Fl_File_Chooser chooser(".",                        // directory
                          "*",                        // filter
                          Fl_File_Chooser::MULTI,     // chooser type
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

  // Multiple files? Show all of them
  if ( chooser.count() > 1 ) {
      for ( int t=1; t<=chooser.count(); t++ ) {
          fprintf(stderr, " VALUE[%d]: '%s'\n", t, chooser.value(t));
      }
  }
}

void quit(Fl_Widget* w, void* data){
  cout << "quit\n";
}

void help(Fl_Widget* w, void* data){
  cout << "help\n";
}
