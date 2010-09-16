// File:        Gender.h
// Date:        3.22.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Header file describing the Gender object for program ACUMud

#include <iostream>
#include "Gender.h"

using std::cout;

/* -----------CONSTRUCTOR METHODS------------- */

/* Default Constructor */
Gender::Gender() {
   gender = -1;           // Defaults to -1 if no gender is specified
}

Gender::Gender(int g) {   // Sets the gender
   if (gender == 0 || gender == 1) {
      gender = g;
   }
   else {
      cout << "Gender is invalid!";
      exit(0);
   }
}

/* -----------BEGIN OVERLOADED OPERATORS------------- */

bool Gender::operator==( const Gender &right) const {
   return true;
}

/* -----------END OVERLOADED OPERATORS------------- */

/* -----------BEGIN GET METHODS------------- */

int Gender::getGender() {
   return gender;
}

/* -----------END GET METHODS------------- */


/* -----------BEGIN SET METHODS------------- */

void Gender::setGender(int g) {
   gender = g;
}

/* -----------END SET METHODS------------- */

/* -----------BEGIN OTHER METHODS------------- */

bool Gender::isMale() {
   if (gender == 1) {
      return true;
   }
   else {
      return false;
   }
}

bool Gender::isFemale() {
   if (gender == 0) {
      return true;
   }
   else {
      return false;
   }
}

/* -----------END OTHER METHODS------------- */
