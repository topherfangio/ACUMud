// File:        Character.cpp
// Date:        2.26.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Declares member functions for class Character

#include "Character.h"
#include "Colors.h"

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

/* -----------BEGIN CONSTRUCTORS------------- */

/* First Constructor Method */
Character::Character() {
   characterInfo = CharInfo();
   currentRoom = Room();
   //lastMessageSent = Message();
   //lastMessageReceived = Message();
}

/* First and a half Constructor Method */
Character::Character(string s) {
   string f, m, l, p1, p2;
   bool done = false;
   char choice;

   cout << RED << "\nNew Character Creation" << CYAN;
   
   while (!done) {
      cout << LIGHT_GREY << "\nIs your name " << s << "? (y/n):" << CYAN;
      cin >> choice;

      switch ( toupper(choice) ) {
	 case 'Y': f = s;
		   done = true;
		   break;
	 case 'N': cout << LIGHT_GREY << "\nOk, please enter your name: " << CYAN;
		   cin >> s;
		   break;

      }
   }
   done = false;

   cout << LIGHT_GREY << "\nPlease enter your middle name: " << CYAN;
   cin >> m;
   cout << LIGHT_GREY << "\nPlease enter your last name: " << CYAN;
   cin >> l;

   characterInfo.setName(f, m, l);

   while (!done) {
      cout << LIGHT_GREY << "\nPlease enter a password: " << HIDDEN;
      cin >> p1;
      cout << CLEAR;
      cout << LIGHT_GREY << "\nPlease re-enter password: " << HIDDEN;
      cin >> p2;
      cout << CLEAR;

      if (p1 != p2) {
	 cout << RED << "Passwords do not match!";
      }
      else {
	 characterInfo.setPassword(p1);
	 done = true;
      }
   }

}

/* Second Constructor Method */
Character::Character(Room r) {
   currentRoom = r;
}

/* Thrid Constructor Method */
Character::Character(CharInfo c, Room r) {
    //  Message lms, Message lmr) {

   characterInfo = c;
   currentRoom = r;
   //lastMessageSent = lms;
   //lastMessageReceived = lmr;
}
/* -----------END CONSTRUCTORS------------- */


/* -----------BEGIN OVERLOADED OPERATORS------------- */

bool Character::operator==( const Character &right ) const {
   bool check=true;

   /* Return false if they don't equal, default case will return true */

   check = (characterInfo == right.characterInfo) ? : false;
   check = (currentRoom == right.currentRoom) ? : false;
   //check = (lastMessageSent == right.lastMessageSent) ? : false;
   //check = (lastMessageReceived == right.lastMessageReceived) ? : false;

   return check;
}

const Character &Character::operator=( const Character &right ) {
   if ( &right != this ) {
      characterInfo = right.characterInfo;
      currentRoom = right.currentRoom;
      //lastMessageSent = right.lastMessageSent;
      //lastMessageReceived = right.lastMessageReceived;
   }

   return *this;        // Enable cascading assignment
}

/* -----------END OVERLOADED OPERATORS------------- */


/* -----------BEGIN GET FUNCTIONS------------- */
string Character::getDescription() {
   return characterInfo.getDescription();
}

Date Character::getDateCreated() {
   return characterInfo.getDateCreated();
}

Date Character::getLastLogon() {
   return characterInfo.getLastLogon();
}

CharInfo Character::getCharacterInfo() {
   return characterInfo;
}

Room Character::getCurrentRoom() {
   return currentRoom;
}

string Character::getFirstName() {
   return characterInfo.getFirstName();
}

string Character::getPassword() {
   return characterInfo.getPassword();
}
/* -----------END GET FUNCTIONS------------- */


/* -----------BEGIN SET FUNCTIONS------------- */
void Character::setName(Name n) {
   characterInfo.setName(n);
}

void Character::setName( string f, string m, string l ) {
   characterInfo.setName(f, m, l);
}

void Character::setCurrentRoom(Room r) {
   currentRoom = r;
   currentRoom.addCharacter(characterInfo.getName());
}

void Character::setPassword(string p) {
   characterInfo.setPassword(p);
}
/* -----------END SET FUNCTIONS------------- */


/* -----------BEGIN OTHER FUNCTIONS------------- */

void Character::printCurrent() {
   currentRoom.printDescription();
   currentRoom.printExitsShort();
   currentRoom.printCharacters();
}

void Character::printExits() {
   currentRoom.printExits();
}

bool Character::move(Direction d) {
   if ( currentRoom.hasExit(d) ) {
      currentRoom.removeCharacter(characterInfo.getName());
      setCurrentRoom( currentRoom.getRoom(d) );
      currentRoom.addCharacter(characterInfo.getName());
      currentRoom.printDescription();
      currentRoom.printCharacters();

      return true;
   }
   else {
      return false;
   }
}

void Character::look() {
   currentRoom.printDescription();
   currentRoom.printExitsShort();
   currentRoom.printCharacters();
}

/* -----------END OTHER FUNCTIONS------------- */
