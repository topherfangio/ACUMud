// File:        Direction.h
// Date:        3.22.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Header file describing the Direction object for program ACUMud

/* prevent multiple inclusions of header file */
#ifndef DIRECTION_H
#define DIRECTION_H

#include <string>

using std::string;

class Direction {
   public:
      /* -----------DEFINE PUBLIC VARIABLES------------- */
      // NONE YET

      /* -----------DEFINE PUBLIC METHODS------------- */
      Direction();               // Default Constructor
      Direction(int);            // Second Constructor

      int    getDirection();     // Returns the direction
      string getName();          // Returns the direction name (i.e. north, up) specified

      void   setDirection(int);    // Sets the current direction
      void   print();

   private:
      int direction;       // 0=n, 1=ne, 2=e, 3=se, 4=s, 5=sw, 6=w, 7=nw, 8=up, 9=down
      /* -----------DEFINE PRIVATE VARIABLES------------- */

      /* -----------DEFINE PRIVATE METHODS------------- */
      // NONE YET
};

#endif
