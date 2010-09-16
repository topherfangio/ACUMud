// File:        Class.cpp
// Date:        3.22.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Object file describing the Class methods for program ACUMud

#include "Class.h"

#include <string>

using std::string;

Class::Class() {
   name = "";
   skills = new Skill();
   feats = new Feat();
   abilities = new Ability();
   languages = new Language();
}

Class::Class(string n, Skill* s, Feat* f,
      Ability* a, Language* l) {
   name = n;
   skills = s;
   feats = f;
   abilities = a;
   languages = l;
}

/* -----------BEGIN OVERLOADED OPERATORS------------- */

bool Class::operator==( const Class &right) const {
   return true;
}

/* -----------END OVERLOADED OPERATORS------------- */


/* -----------BEGIN OTHER METHODS------------- */

string Class::getName() {
   return name;
}

Skill* Class::getSkills() {
   return skills;
}

Feat* Class::getFeats() {
   return feats;
}

Ability* Class::getAbilities() {
   return abilities;
}

Language* Class::getLanguages() {
   return languages;
}
/* -----------END OTHER METHODS------------- */
