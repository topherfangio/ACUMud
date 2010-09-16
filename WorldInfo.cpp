// File:        WorldInfo.cpp
// Date:        3.5.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Defines member functions for class WorldInfo

#include "WorldInfo.h"

WorldInfo::WorldInfo() {
   numPlayers = 0;
   players = 0;
   allChars = 0;
   onlineChars = 0;

   name = Name();
   createdBy = Name();
   created = Date();
   description = "";
}

WorldInfo::WorldInfo(int np, Name* ps, Character* cs,
      Character* ocs) {

   numPlayers = np;
   players = ps;
   allChars = cs;
   onlineChars = ocs;
}
