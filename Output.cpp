// File:        Output.cpp
// Date:        4.13.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Object file describing the Output methods for program ACUMud.
//              Handles output formatting specifications

#include "Output.h"

using std::string;

// Wraps words at the specified width
string wordWrap(string s, int width) {
   int lastSpace;

   for (unsigned int i = 0; i < s.length(); i++) {
      if ( s.at(i) == ' ' ) {
	 lastSpace = i;
      }
      if ( (i % width == 0) && (i != 0) ) {
	 s.at(lastSpace) = '\n';
      }
   }

   return s;
}
