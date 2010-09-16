// File:        Room.h
// Date:        3.22.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Header file describing the Room object for program ACUMud

/* prevent multiple inclusions of header file */
#ifndef ROOM_H
#define ROOM_H

#include "Direction.h"
#include "Name.h"

#include <string>
#include <vector>

using std::string;

class Room {
   public:
      /* -----------DEFINE PUBLIC VARIABLES------------- */
      // NONE YET

      /* -----------DEFINE PUBLIC METHODS------------- */
      Room();                             // Default constructor
      Room(string, string, int, Room**);  // Second constructor
      Room(string, string, int);   // Third constructor

      /* Overloading Operators */
      const Room &operator=( const Room & );
      bool operator==( const Room & ) const;

      string getName();                   // Returns the name of the room
      string getDescription();            // Returns the description of the room
      bool   hasExit(Direction);          // Returns true if the exit exists
      Room   getRoom(Direction);          // Returns the room

      void   setExit(int, Room*);         // Sets the specified exit
      void   setExits(Room*);

      bool   hasCharacter(Name);
      void   addCharacter(Name);          // Adds a character to the room
      void   removeCharacter(Name);       // Removes a character from the room

      void   printCharacters();           // Prints the characters in the room
      void   printDescription();          // Prints the description
      void   printExits();                // Prints the current room's exits
      void   printExitsShort();           // Prints the current room's exits horizontally


   private:
      /* -----------DEFINE PRIVATE VARIABLES------------- */
      string name;                        // Defines the room's name
      string description;                 // Defines the room's description
      int    id;                          // Defines the room's number
      Room** exits;                       // Defines all of the exits from the room
      std::vector< Name >  charsInRoom;   // Keeps up with all of the characters in the room

      /* -----------DEFINE PRIVATE METHODS------------- */
      // NONE YET
};

#endif
