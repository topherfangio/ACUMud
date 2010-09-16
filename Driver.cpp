#include "Character.h"
#include "Room.h"

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main() {

   char choice;
   bool done = false;

   setbuf( stdout , NULL);

   Room* mainExits[10];

   mainExits[0] = new Room ( (string) "North Room", (string) "This is the north room.", 0);
   mainExits[1] = new Room ( (string) "NorthEast Room", (string) "This is the northeast room.", 1);
   mainExits[2] = new Room ( (string) "East Room", (string) "This is the east room.", 2);
   mainExits[3] = new Room ( (string) "SouthEast Room", (string) "This is the southeast room.", 3);
   mainExits[4] = new Room ( (string) "South Room", (string) "This is the south room.", 4);
   mainExits[5] = new Room ( (string) "SouthWest Room", (string) "This is the southwest room.", 5);
   mainExits[6] = new Room ( (string) "West Room", (string) "This is the west room.", 6);
   mainExits[7] = new Room ( (string) "NorthWest Room", (string) "This is the northwest room.", 7);
   mainExits[8] = new Room ( (string) "Up", (string) "This is up.", 8);
   mainExits[9] = new Room ( (string) "Down", (string) "This is down.", 9);

   Direction north = Direction(0);
   Direction northeast = Direction(1);
   Direction east = Direction(2);
   Direction southeast = Direction(3);
   Direction south = Direction(4);
   Direction southwest = Direction(5);
   Direction west = Direction(6);
   Direction northwest = Direction(7);
   Direction up = Direction(8);
   Direction down = Direction(9);

   Room mainRoom = Room( (string) "Main Room", 
	 (string) "This is the main room. Isn't it a lovely room? Thank you.",
	 0, mainExits);

   for (int i=0; i < 10; i++) {
      mainExits[i]->setExits(&mainRoom);
   }

   Character newChar = Character(mainRoom);

   newChar.printCurrent();
   while (!done) {
      cin >> choice;

      switch ( toupper(choice) ) {
	 case 'Q': done = true;
		   break;
	 case 'N': newChar.move(north);
		   break;
	 case 'E': newChar.move(east);
		   break;
	 case 'S': newChar.move(south);
		   break;
	 case 'W': newChar.move(west);
		   break;
	 case 'H': newChar.move(northwest);
		   break;
	 case 'J': newChar.move(northeast);
		   break;
	 case 'K': newChar.move(southeast);
		   break;
	 case 'L': newChar.move(southwest);
		   break;
	 case 'U': newChar.move(up);
		   break;
	 case 'D': newChar.move(down);
		   break;
	 case 'X': newChar.printExits();
		   break;
      }
   }

   return 0;
}
