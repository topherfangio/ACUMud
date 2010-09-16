// File:        World.h
// Date:        2.26.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Header file describing the World object for program ACUMud


/* prevent multiple inclusions of header file */
#ifndef WORLD_H
#define WORLD_H

#include "Name.h"
#include "Character.h"
#include "Date.h"
#include "Area.h"
#include "WorldInfo.h"

#include <vector>

class World {
   public:
      /* -----------DEFINE PUBLIC VARIABLES------------- */
      // NONE YET

      /* -----------DEFINE PUBLIC MEHTHODS------------- */
      /* Constuctor Methods */
      World();                                // Constuctor
      World(char*, int, Name*, 
	    Character*, Date, Date, Area*);   // Constuctor # 2

      /* Get Methods */
      char*      getDescription();            // Returns the description of the World
      int        getNumPlayers();             // Returns the number of total players in the World
      Name*      getPlayers();                // Returns a list of all of the players

      std::vector< Character >
	 getAllCharacters();                  // Returns a vector of all of the characters
      std::vector< Character >
	 getOnlineCharacters();               // Returns a vector of the online characters
      Character  getCharacter(string);        // Returns a character based on a username

      Date       getDateCreated();            // Returns the date the World was created
      Date       getLastReboot();             // Returns the date and time the World was last rebooted
      Area*      getAreas();                  // Returns a list of the areas in the World

      /* Set Methods */
      void setDescription(char*);             // Sets or changes the description
      void setNumPlayers(int);                // Sets the number of players in the world
      void setPlayers(Name*);                 // Sets the players in the world
      void setCharacters(Character*);         // Sets the characters in the world
      void setDateCreated(Date);              // Sets the date the World was created
      void setLastReboot(Date);               // Sets the date of the last world reboot
      void setAreas(Area*);                   // Sets the areas in the world
      	
      /* Other Methods */
      void addArea(Area);                     // Adds an area to the World
      void removeArea(Area);                  // Removes an area from the world

      void addPlayer(Name);                   // Adds a player to the world
      void removePlayer(Name);                // Removes a player from the world

      void addCharacter(string);              // Adds a character to the world based on a username
      void addCharacter(Character);           // Adds a character to the world
      bool hasCharacter(string);              // Returns true if the character exists
      void removeCharacter(Character);        // Removes a character from the world

   private:
      /* -----------DEFINE PRIVATE VARIABLES------------- */
      WorldInfo  info;                        // Contains information about the world
      std::vector< Area > areas;              // Vector of all of the areas in the world
      std::vector< Character > characters;    // Vector of all of the characters in the world

      /* -----------DEFINE PRIVATE METHODS------------- */
      // NONE YET
};

#endif
