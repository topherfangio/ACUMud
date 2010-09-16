// File:        AbilityScores.cpp
// Date:        3.22.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Object file describing the AbilityScores methods for program ACUMud

#include "AbilityScores.h"

/* -----------BEGIN CONSTRUCTORS------------- */
AbilityScores::AbilityScores() {
   maxStrength = 0;
   maxDexterity = 0;
   maxConstitution = 0;
   maxIntelligence = 0;
   maxWisdom = 0;
   maxCharisma = 0;

   tempStrength = 0;
   tempDexterity = 0;
   tempConstitution = 0;
   tempIntelligence = 0;
   tempWisdom = 0;
   tempCharisma = 0;
}
/* -----------END CONSTRUCTORS------------- */

/* -----------BEGIN OVERLOADED OPERATORS------------- */

bool AbilityScores::operator==( const AbilityScores &right) const {
   return true;
}

/* -----------END OVERLOADED OPERATORS------------- */
