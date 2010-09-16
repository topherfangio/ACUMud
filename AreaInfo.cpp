// File:        AreaInfo.cpp
// Date:        2.26.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Object file describing the AreaInfo methods for program ACUMud

#include "AreaInfo.h"

#include <string>

using std::string;

AreaInfo::AreaInfo() {
   name = Name();
   createdBy = Name();
   created = Date();
   description = "";
}

AreaInfo::AreaInfo(Name areaName, Name creator, 
      Date dateCreated, string desc) {

   name        = areaName;
   createdBy   = creator;
   created     = dateCreated;
   description = desc;
}

string AreaInfo::getDescription() {
   return description;
}
