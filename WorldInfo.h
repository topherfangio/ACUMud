// File:        WorldInfo.h
// Date:        2.26.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Header file describing the WorldInfo object for program ACUMud

/* prevent multiple inclusions of header file */
#ifndef WORLDINFO_H
#define WORLDINFO_H

#include "Info.h"    // WorldInfo extends Info, so we include it
#include "Name.h"
#include "Character.h"
#include "Date.h"

class WorldInfo : public Info {
   public:
      /* -----------DEFINE PUBLIC VARIABLES------------- */
      // NONE YET

      /* -----------DEFINE PUBLIC METHODS------------- */

      /* Constructors */
      WorldInfo();                            // Constructor
      WorldInfo(int, Name*, Character*,
	    Character*);                      // Constructor # 2

      /* Get Methods */
      int        getNumPlayers();             // Returns the number of players
      Name*      getPlayers();                // Returns the players
      Name       getPlayer();                 // Returns a specific player
      Character* getChars();                  // Returns all of the characters
      Character  getChar();                   // Returns a specific character
      Character* getOnlineChars();            // Returns all of the online characters
      Character  getOnlineChar();             // Returns a specific online char

      /* Set Methods */
      void setNumPlayers(int);                // Sets the number of players
      void setPlayers(Name*);                 // Sets the players
      void setChars(Character*);              // Sets the characters
      void setOnlineChars(Character*);        // Sets the online characters

      /* Other Methods */
      void addPlayer(Name);                   // Adds a player to the world
      void removePlayer(Name);                // Removes a player from the world
      void addChar(Character);                // Adds a character to the world
      void removeChar(Character);             // Removes a character from the world
      void addOnlineChar(Character);          // Adds an online character
      void removeOnlineChar(Character);       // Removes an online character

   private:
      /* -----------DEFINE PRIVATE VARIABLES------------- */
      int        numPlayers;                  // Total number of players
      Name*      players;                     // All of the players in the world
      Character* allChars;                    // All of the characters in the world
      Character* onlineChars;                 // List of online characters
      Date       lastReboot;                  // Date and time of last reboot

      /* -----------DEFINE PRIVATE METHODS------------- */
      // NONE YET
};

#endif
