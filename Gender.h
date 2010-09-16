// File:        Gender.h
// Date:        3.22.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Header file describing the Gender object for program ACUMud

/* prevent multiple inclusions of header file */
#ifndef GENDER_H
#define GENDER_H

class Gender {
   public:
      /* -----------DEFINE PUBLIC VARIABLES------------- */
      // NONE YET

      /* -----------DEFINE PUBLIC METHODS------------- */
      Gender();               // Default constructor
      Gender(int);            // Second constructor
      bool operator==(const Gender &) const;
      int  getGender();       // returns the gender of the character
      void setGender(int);    // sets the gender of the character
      bool isMale();          // returns true if the character is male
      bool isFemale();        // returns true if the character if female

   private:
      /* -----------DEFINE PRIVATE VARIABLES------------- */
      int gender;             // 0 defines female, 1 defines male

      /* -----------DEFINE PRIVATE METHODS------------- */
      // NONE YET
};

#endif
