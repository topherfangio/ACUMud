// File:        Statistics.cpp
// Date:        3.22.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Object file describing the Statistics methods for program ACUMud

#include "Statistics.h"

Statistics::Statistics() {
   maxHP = 0;
   currentHP = 0;
}

/* -----------BEGIN OVERLOADED OPERATORS------------- */

bool Statistics::operator==( const Statistics &right) const {
   return true;
}

/* -----------END OVERLOADED OPERATORS------------- */


/* -----------BEGIN GET METHODS------------- */

int Statistics::getMaxHP() {
   return maxHP;
}

int Statistics::getCurrentHP() {
   return currentHP;
}

int Statistics::getMaxMana() {
   return maxMana;
}

int Statistics::getCurrentMana() {
   return currentMana;
}

int Statistics::getMaxMovement() {
   return maxMovement;
}

int Statistics::getCurrentMovement() {
   return currentMovement;
}

int Statistics::getNumTrains() {
   return trains;
}

/* -----------END GET METHODS------------- */


/* -----------BEGIN SET METHODS------------- */

void Statistics::setMaxHP( int hp ) {
   maxHP = hp;
}

void Statistics::setCurrentHP( int hp ) {
   currentHP = hp;
}

void Statistics::setMaxMana( int mana ) {
   maxMana = mana;
}

void Statistics::setCurrentMana( int mana ) {
   currentMana = mana;
}

void Statistics::setMaxMovement( int move ) {
   maxMovement = move;
}

void Statistics::setCurrentMovement( int move ) {
   currentMovement = move;
}

/* -----------END SET METHODS------------- */


/* -----------BEGIN OTHER METHODS------------- */

void Statistics::addTrain() {
   trains++;
}

void Statistics::removeTrain() {
   trains--;
}
/* -----------END OTHER METHODS------------- */
