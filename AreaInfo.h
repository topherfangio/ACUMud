// File:        AreaInfo.h
// Date:        2.26.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Header file describing the AreaInfo object for program ACUMud

/* prevent multiple inclusions of header file */
#ifndef AREAINFO_H
#define AREAINFO_H

#include "Info.h"  // Class extends Info, so we include it
#include "Name.h"
#include "Character.h"
#include "Date.h"

#include <string>

class AreaInfo : public Info {
   public:
      /* -----------DEFINE PUBLIC VARIABLES------------- */
      // NONE YET

      /* -----------DEFINE PUBLIC METHODS------------- */

      /* Constructors */
      AreaInfo();                            // Constructor
      AreaInfo(Name, Name, Date,
	    string);                         // Constructor # 2

      string getDescription();

   private:
      /* -----------DEFINE PRIVATE VARIABLES------------- */


      /* -----------DEFINE PRIVATE METHODS------------- */
      // NONE YET
};

#endif
