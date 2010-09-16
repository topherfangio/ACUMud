// File:        Name.h
// Date:        2.26.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Header file describing the Name object for program ACUMud

/* prevent multiple inclusions of header file */
#ifndef NAME_H
#define NAME_H

#include <iostream>
#include <string>

using std::ostream;
using std::string;

class Name {
   friend ostream &operator<<( ostream &, const Name & );

   public:
      /* -----------DEFINE PUBLIC VARIABLES------------- */
      // NONE YET

      /* -----------DEFINE PUBLIC METHODS------------- */

      /* Constructors */
      Name();
      Name( string, string, string, string );

      /* Overloaded Operators */
      const Name &operator=( const Name & );
      bool operator==( const Name &right) const;

      /* Get Methods */
      string getName();                        // Returns the full name
      string getTitle();                       // Returns the title (Dr., Mrs., etc.)
      string getFirstName();                   // Returns the first name
      string getMiddleName();                  // Returns the middle name
      string getLastName();                    // Returns the last name
      char   getMiddleInital();                // Returns the middle inital of the middle name

      /* Set Methods */
      void  setTitle(string);                  // Sets the title to the specified string
      void  setFirstName(string);              // Sets the first name to the specified string
      void  setMiddleName(string);             // Sets the middle name to the specified string
      void  setLastName(string);               // Sets the last name to the specified string

   private:
      /* -----------DEFINE PRIVATE VARIABLES------------- */
      string title;                            // Title of person or character
      string firstName;                        // Person or Character's first name
      string middleName;                       // Person or Character's middle name
      string lastName;                         // Person or Character's last name

      /* -----------DEFINE PRIVATE METHODS------------- */
      // NONE YET
};

#endif
