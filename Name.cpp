// File:        Name.cpp
// Date:        3.5.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Defines member functions for class name

#include "Name.h"

/* -----------CONSTRUCTOR METHODS------------- */

/* Default Constructor */
Name::Name() {
   title = "";
   firstName = "";
   middleName = "";
   lastName = "";
}

Name::Name(string t, string f, string m, string l) {
   title = t;
   firstName = f;
   middleName = m;
   lastName = l;
}

/* -----------OVERLOADED FUNCTIONS------------- */
ostream &operator<<( ostream &output, const Name &n ) {
   if (n.title != "") {
      output << n.title << " ";
   }
   output << n.firstName << " " << n.middleName << " " << n.lastName;

   return output;       // Enable cascading
}

const Name &Name::operator=( const Name &right ) {
   if (&right != this) {
      title = right.title;
      firstName = right.firstName;
      middleName = right.middleName;
      lastName = right.lastName;
   }

   return *this;
}

bool Name::operator==( const Name &right ) const {
   if (title == right.title &&
	 firstName == right.firstName &&
	 middleName == right.middleName &&
	 lastName == right.lastName) {
      return true;
   }
   else {
      return false;
   }
}
/* -----------END OVERLOADED OPERATORS------------- */


/* -----------GET METHODS------------- */
string Name::getName() {
   return ( firstName + " " + middleName + " " + lastName );
}

string Name::getTitle() {
   return title;
}

string Name::getFirstName() {
   return firstName;
}

string Name::getMiddleName() {
   return middleName;
}

string Name::getLastName() {
   return lastName;
}

char Name::getMiddleInital() {
   return middleName[0];
}
/* -----------END GET METHODS------------- */


/* -----------BEGIN SET METHODS------------- */
void Name::setTitle(string t) {
   title = t;
}

void Name::setFirstName(string f) {
   firstName = f;
}

void Name::setMiddleName(string m) {
   middleName = m;
}

void Name::setLastName(string l) {
   lastName = l;
}
/* -----------END SET METHODS------------- */


/* -----------BEGIN PRINT METHODS------------- */
/* -----------END PRINT METHODS------------- */
