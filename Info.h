// File:        Info.h
// Date:        2.26.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Header file describing the Info object for program ACUMud

/* prevent multiple inclusions of header file */
#ifndef INFO_H
#define INFO_H

#include "Name.h"
#include "Date.h"

#include <string>

using std::string;

class Info {
   public:
      /* -----------DEFINE PUBLIC VARIABLES------------- */
      // NONE YET

      /* -----------DEFINE PUBLIC METHODS------------- */

      /* Get Methods */
      Name   getName();
      Name   getCreator();
      Date   getDateCreated();
      string getDescription();

      /* Set Methods */
      void setName(Name);
      void setCreator(Name);
      void setCreated(Date);
      void setDescription(string);

   protected:
      /* -----------DEFINE PRIVATE VARIABLES------------- */
      Name   name;
      Name   createdBy;
      Date   created;
      string description;

      /* -----------DEFINE PRIVATE METHODS------------- */
      // NONE YET
};

#endif
