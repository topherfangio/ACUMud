// File:        Race.cpp
// Date:        3.22.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Object file describing the Race methods for program ACUMud

#include "Race.h"

Race::Race() {
   name = "";
   modifiers = AbilityScores();
   skills = new Skill();
   feats = new Feat();
   abilities = new Ability();
   languages = new Language();
}

Race::Race(string n, AbilityScores m, Skill* s,
      Feat* f, Ability* a, Language* l) {
   name = n;
   modifiers = m;
   skills = s;
   feats = f;
   abilities = a;
   languages = l;
}

/* -----------BEGIN OVERLOADED OPERATORS------------- */

bool Race::operator==( const Race &right) const {
   return true;
}

/* -----------END OVERLOADED OPERATORS------------- */
