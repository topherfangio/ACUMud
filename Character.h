// File:        Character.h
// Date:        2.26.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Header file describing the Character object for program ACUMud

/* prevent multiple inclusions of header file */
#ifndef CHARACTER_H
#define CHARACTER_H

#include "Date.h"
#include "CharInfo.h"
#include "Room.h"
#include "Message.h"
#include "Direction.h"

#include <string>

class Character {
   public:
      /* -----------DEFINE PUBLIC VARIABLES------------- */
      // NONE YET

      /* -----------DEFINE PUBLIC METHODS------------- */
      
      /* Constructor Methods */
       Character();                           // Constructor method 1, defaults all
       Character(string);                        // Constructor method 1.5, asks for input
       Character(Room);
       Character(CharInfo, Room);
//                Message, Message);            // Constructor method 2, sets all values

       /* Overloaded Operators */
       const Character &operator=( const Character & );
       bool operator==( const Character & ) const;

      /* Get Methods */
      string   getDescription();              // Returns the description of the Character
      Date     getDateCreated();              // Returns the date the Character was created
      Date     getLastLogon();                // Returns the last time the Character played
      CharInfo getCharacterInfo();            // Returns info about the Character
      Room     getCurrentRoom();              // Returns the room the Character is in
      string   getFirstName();                // Returns the first name of the Character
      string   getPassword();                 // Returns the Character's password

      /* Set Methods */
      void     setName(Name);
      void     setName(string, string, string);
      void     setPassword(string);
      void     setDescription(string);        // Sets the description to the specified string
      void     setLastLogon(Date);            // Sets the last logon date/time
      void     setCurrentRoom(Room);          // Sets the Character's current room
      void     setPasssword(string);          // Sets the Character's password

      /* Other Methods */
      void     printCurrent();
      void     printExits();
      bool     move(Direction);               // Tries to move the direction specified
      bool     sendMessage(Character, string);// Sends a message to a Character
      void     look();                        // Looks in the current room

   private:
      /* -----------DEFINE PRIVATE VARIABLES------------- */
      CharInfo characterInfo;                 // Holds information about the Character
      Room     currentRoom;                   // Keeps the room the Character is in

      /* -----------DEFINE PRIVATE METHODS------------- */
      // NONE YET
};

#endif
