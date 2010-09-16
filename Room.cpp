// File:        Room.cpp
// Date:        3.22.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Object file describing the Room methods for program ACUMud

#include "Room.h"
#include "Direction.h"

#include "Output.h"
#include "Colors.h"

#include <iostream>
#include <iomanip>

using std::cout;
using std::setw;
using std::left;
using std::right;

/* -----------BEGIN CONSTRUCTOR METHODS------------- */
Room::Room() {
   name = "";
   description = "";
   id = -1;
}

Room::Room(string n, string d, int i, Room** r) {
   name = n;
   description = d;
   id = i;
   exits = r;
}

Room::Room(string n, string d, int i) {
   name = n;
   description = d;
   id = i;
   exits = new Room*[10];

   for (int i = 0; i < 10; i++) {
      exits[i] = new Room();
   }
}

/* -----------END CONSTRUCTOR METHODS------------- */

/* -----------BEGIN OVERLOADED OPERATORS------------- */
const Room &Room::operator=( const Room &right ) {
   if ( &right != this ) {
      name = right.name;
      description = right.description;
      id = right.id;
      exits = right.exits;
      charsInRoom = right.charsInRoom;
   }

   return *this;      // Enable cascading assignment
}

bool Room::operator==( const Room &right ) const {
   if ( name == right.name && 
	 id == right.id &&
	 exits == right.exits) {
      return true;
   }
   else {
      return false;
   }
}

/* -----------END OVERLOADED OPERATORS------------- */


/* -----------BEGIN GET FUNCTIONS------------- */
string Room::getName() {
   return name;
}

string Room::getDescription() {
   return description;
}
/* -----------END GET FUNCTIONS------------- */


/* -----------BEGIN SET FUNCTIONS------------- */

void Room::setExit(int i, Room* r) {
   exits[i] = r;
}

void Room::setExits(Room* r) {
   for (int i = 0; i < 10; i++) {
      exits[i] = r;
   }
}

bool Room::hasCharacter(Name n) {

   std::vector< Name >::iterator i;

   for (i = charsInRoom.begin(); i < charsInRoom.end(); i++) {
      if (n == (*i)) {
	 return true;
      }
   }
   return false;
}

void Room::addCharacter(Name n) {
   if (! this->hasCharacter(n) ) {
      charsInRoom.push_back(n);
   }
}

void Room::removeCharacter(Name n) {

   std::vector< Name >::iterator i;

   for (i = charsInRoom.begin(); i < charsInRoom.end(); i++) {
      if (n == (*i)) {
	 charsInRoom.erase(i);
      }
   }
}

/* -----------END SET FUNCTIONS------------- */


/* -----------BEGIN PRINT FUNCTIONS------------- */

void Room::printCharacters() {
   std::vector< Name >::iterator i;

   cout << "\n";

   for (i = charsInRoom.begin(); i < charsInRoom.end(); i++) {
      cout << BROWN << (*i) << CYAN << "\n";
   }

   cout << "\n";
}

void Room::printDescription() {
   cout << "\n" << name << "\n";

   for (unsigned int i=0; i < name.length(); i++) {
      cout << '-';
   }
   
   cout << "\n" << LIGHT_GREY << left << wordWrap(description, 85) << CYAN << "\n\n";
}

void Room::printExits() {
   int i;
   Direction tempD = Direction(0);

   cout << "\nObvious Exits:\n";

   for (i=0; i <= 9; i++) {
      tempD.setDirection(i);       // Create a temporary direction object

      if ( exits[i]->id != -1 ) {      // If the room has an exit in this direction
	 // Print out the Direction and the Name of the room
	 cout << LIGHT_PURPLE << setw(12) << left
	    << tempD.getName() << right << LIGHT_GREY <<  "- " 
	    << exits[i]->getName() << CYAN << "\n";
      }
   }
   cout << "\n";
}

void Room::printExitsShort() {
   int i;
   Direction tempD = Direction(0);

   cout << CYAN << "[" << LIGHT_GREY << "Obvious Exits: ";

   for (i=0; i < 10; i++) {
      tempD.setDirection(i);       // Create a temporary direction object

      if ( exits[i]->id != -1 ) {      // If the room has an exit in this direction
	 // Print out the Direction and the Name of the room
	 cout << tempD.getName();

	 // If this is the last direction, don't print a space
	 if (i < 9) {
	    cout << " ";
	 }
      }
   }
   cout << CYAN << "]\n";
}

/* -----------END PRINT FUNCTIONS------------- */


/* -----------BEGIN OTHER FUNCTIONS------------- */
/*
void Room::addCharacter(Character c) {
   characters.push_back(c);
}
*/

bool Room::hasExit(Direction d) {
   if (exits[d.getDirection()]->id != -1) {
      return true;
   }
   else {
      return false;
   }
}

Room Room::getRoom(Direction d) {
   return *exits[d.getDirection()];
}
/* -----------END OTHER FUNCTIONS------------- */
