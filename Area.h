// File:        Area.h
// Date:        2.26.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Header file describing the Area object for program ACUMud

/* prevent multiple inclusions of header file */
#ifndef AREA_H
#define AREA_H

#include "AreaInfo.h"
#include "Character.h"
#include "Name.h"
#include "Date.h"
#include "Room.h"

#include <vector>
#include <algorithm>

class Area {
   public:
      /* -----------DEFINE PUBLIC VARIBLES------------- */
      // NONE YET

      /* -----------DEFINE PUBLIC METHODS------------- */

      /* Constructors */
      Area();                                 // Constructor
      Area(AreaInfo, std::vector<Room>);                  // Second constructor

      /* Get Methods */
      string     getDescription();            // Returns the description of the Area
      int        getNumChars();               // Returns the current number of characters
      Character* getCharacters();             // Returns an array of the current charcters
      Name       getCreatorInfo();            // Returns the information about the Area creator
      Date       getDateCreated();            // Returns the date the Area was created
      std::vector<Room>      getRooms();                  // Returns an array of the rooms in the Area
      
      /* Set Methods */
      void setDescription(char*);             // Sets the description
      void setCreator(Name);                  // Sets the creator's
      void setDateCreated(Date);              // Sets the date created

      /* Print Methods */
      void printDescription();                // Prints the area description
      void printNumChars();                   // Prints the number of characters in the area
      void printCharacters();                 // Prints the characters in the area
      void printCreatorInfo();                // Prints the creator's information
      void printDateCreated();                // Prints the date created
      void printRooms();                      // Prints the rooms in the area

      /* Other Methods */
      /* -----------NOTE: Some of the following replace set methods------------- */
      void addCharacter(Character);           // Adds a character to the area
      void removeCharacter(Character);        // Removes a character from the area
      void addRoom(Room);                     // Adds a room to the area
      void removeRoom(Room);                  // Removes a room from the area

   private:
      /* -----------DEFINE PRIVATE VARIABLES------------- */
      AreaInfo   info;                        // Contains all of the area's information
      Character* characters;                  // Characters in the area
      int        numChars;                    // Number of characters in the area
      std::vector<Room>  rooms;               // Array of all of the rooms in the area
      int        numRooms;                    // Number of rooms in the area

      /* -----------DEFINE PRIVATE METHODS------------- */
      // NONE YET
};

#endif
