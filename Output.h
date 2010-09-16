// File:        Output.h
// Date:        4.13.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Header file describing the Output object for program ACUMud.
//              Handles output formatting specifications

/* prevent multiple inclusions of header file */
#ifndef OUTPUT_H
#define OUTPUT_H

#include <string>

using std::string;

string wordWrap(string, int);                // Wraps the words at the specified width

#endif
