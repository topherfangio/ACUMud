// File:        World.cpp
// Date:        3.5.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Defines the member functions for class World

#include "World.h"

#include <iostream>

using std::cout;

World::World() {
   info = WorldInfo();
}

World::World(char* d, int n, Name* p,
      Character* c, Date cr, Date reb, Area* a) {

   /*
      NEEDS TO BE IMPLEMENTED
   info.setDescription(d);
   info.setNumPlayers(n);
   info.setPlayers(p);
   info.setCharacters(c);
   info.setDateCreated(cr);
   info.setLastReboot(reb);
   info.setAreas(a);
   */
}

void World::addArea(Area a) {
   areas.push_back(a);
}

void World::addCharacter(Character c) {
   characters.push_back(c);
}

bool World::hasCharacter(string s) {
   std::vector< Character >::iterator i;

   for (i = characters.begin(); i < characters.end(); i++) {
      if ( s == (*i).getFirstName() ) {
	 return true;
      }
   }
   return false;
}

Character World::getCharacter(string s) {
   std::vector< Character >::iterator i;

   for (i = characters.begin(); i < characters.end(); i++) {
      if ( s == (*i).getFirstName() ) {
	 return (*i);
      }
   }
   return Character();
}
