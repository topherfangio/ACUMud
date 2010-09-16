// File:        Area.cpp
// Date:        3.4.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Defines methods for the Area class

#include <iostream>
#include <iomanip>
#include "Area.h"

using std::cout;
using std::endl;

using std::setfill;
using std::setw;

/* -----------BEGIN CONSTRUCTOR METHODS------------- */

/* FIrst default constructor method */
Area::Area() {

   characters = new Character();
   numChars = 0;

   //rooms = new Room();
   numRooms = 0;

   info = AreaInfo();
   info.setDescription("");
}

/* Second constructor method, sets the info and room variables */
Area::Area(AreaInfo i, std::vector<Room> r) {
   info=i;
   rooms=r;
   numChars = 0;
}
/* -----------END CONSTRUCTOR METHODS------------- */

/* -----------BEGIN GET METHODS------------- */

string Area::getDescription() {
   return info.getDescription();
}

int Area::getNumChars() {
   return numChars;
}

Character* Area::getCharacters() {
   return characters;
}

Name Area::getCreatorInfo(){
   return info.getCreator();
}

Date Area::getDateCreated() {
   return info.getDateCreated();
}

std::vector<Room> Area::getRooms() {
   return rooms;
}

/* -----------END GET METHODS------------- */

/* -----------BEGIN SET METHODS------------- */

void Area::setDescription(char* d) {
   info.setDescription(d);
}

void Area::setCreator(Name n) {
   info.setCreator(n);
}

void Area::setDateCreated(Date d) {
   info.setCreated(d);
}

/* -----------END SET METHODS------------- */

/* -----------BEGIN PRINT METHODS------------- */

void Area::printDescription() {
   string desc = getDescription();

   cout << "**************************************************" << endl;

   cout << "Description:" << endl;
   cout << setw(50) <<  desc << endl;

   cout << "**************************************************" << endl;
}

void Area::printNumChars() {
   cout << "**************************************************" << endl;

   cout << "Number of characters in area: " << numChars << endl;
   
   cout << "**************************************************" << endl;
}

void Area::printCharacters() {
   int i;

   cout << "**************************************************" << endl;

   cout << "Number of characters in area: " << numChars << endl;
   cout << "Characters in area:" << endl;

   for (i = 0; i < numChars; i++) {
      cout << "   " << characters[i].getCharacterInfo().getName().getFirstName() << endl;
   }

   cout << "**************************************************" << endl;
}

void Area::printCreatorInfo() {
   Name creator = info.getCreator();

   cout << "**************************************************" << endl;

   cout << "Area created by: " << creator.getName() << endl;

   cout << "**************************************************" << endl;
}

void Area::printDateCreated() {
   cout << "**************************************************" << endl;

   cout << "Date " << info.getName() << " was created: " << info.getDateCreated() << endl;

   cout << "**************************************************" << endl;
}

void Area::printRooms() {
   std::vector< Room >::iterator i;

   cout << "\nRooms: \n";

   if (rooms.empty()) {
      cout << "   No Rooms";
   }
   else {
      for (i = rooms.begin(); i < rooms.end(); i++) {
	 cout << (*i).getName() << "\n";
      }
   }
}

/* -----------END PRINT METHODS------------- */

/* -----------BEGIN OTHER METHODS------------- */

void Area::addCharacter(Character c) {
   int i;

   numChars++;

   Character tempChars[numChars];

   for (i = 0; i < numChars; i++) {
      tempChars[i] = characters[i];
   }
   tempChars[numChars] = c;

   characters = tempChars;
}

void Area::removeCharacter(Character c) {
   int i;
   int j;

   Character tempChars[numChars - 1];

   for (i = 0; i < numChars; i++ , j++) {
      if (characters[i]==c) {
	 // Do nothing, skip the character
      }
      else {
	 tempChars[i] = characters[j];
      }
   }

   characters = tempChars;
   numChars--;
}

void Area::addRoom(Room r) {
   rooms.push_back(r);
}

void Area::removeRoom(Room r) {
   std::vector< Room >::iterator i;

   for (i = rooms.begin(); i < rooms.end(); i++) {
      if ((*i) == r) {
	 rooms.erase(i);
      }
   }
}

/* -----------END OTHER METHODS------------- */
