// File:        CharInfo.cpp
// Date:        3.4.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Defines methods for the CharInfo class

#include "CharInfo.h"
#include "Colors.h"

#include <iostream>

using std::cout;

/* -----------BEGIN CONSTRUCTOR METHODS------------- */

/* FIrst default constructor method, sets all variables to null */
CharInfo::CharInfo() {

   password = "";

   /* Start General Information */
   gender = Gender();
   race = Race();
//   classes = new Class();
   abilityScores = AbilityScores();
   stats = Statistics();

   /* Start Special Information */
   skills = new Skill();
   feats = new Feat();
   spells = new Spell();
   specialAbilities = new Ability();
   languages = new Language();

   /* Start Items */
   gear = new Item();
   inventory = new Item();

   /* Start Money */
   copper = 0;
   silver = 0;
   gold = 0;
   platinum = 0;
}

/* Second constructor method */
CharInfo::CharInfo(Gender g, Race r, Class* c, AbilityScores abs,
      Statistics sts, Skill* sks, Feat* f, Spell* sps,
      Ability* a, Language* l, Item* ge, Item* i,
      int co, int si, int go, int pl) {

   /* Start General Information */
   gender = g;
   race = r;
   classes = c;
   abilityScores = abs;
   stats = sts;

   /* Start Special Information */
   skills = sks;
   feats = f;
   spells = sps;
   specialAbilities = a;
   languages = l;

   /* Start Items */
   gear = ge;
   inventory = i;

   /* Start Money */
   copper = co;
   silver = si;
   gold = go;
   platinum = pl;

}
/* -----------END CONSTRUCTOR METHODS------------- */


/* -----------BEGIN OVERLOADED OPERATORS------------- */
const CharInfo &CharInfo::operator=( const CharInfo &right ) {
   if ( &right != this ) {
      name = right.name;
      createdBy = right.createdBy;
      created = right.created;
      description = right.description;
      password = right.password;

      /* Copy General Information */
      gender = right.gender;
      race = right.race;
      classes = right.classes;
      abilityScores = right.abilityScores;
      stats = right.stats;

      /* Copy Special Information */
      skills = right.skills;
      feats = right.feats;
      spells = right.spells;
      specialAbilities = right.specialAbilities;
      languages = right.languages;

      /* Copy Items */
      gear = right.gear;
      inventory = right.inventory;

      /* Copy Money */
      copper = right.copper;
      silver = right.silver;
      gold = right.gold;
      platinum = right.platinum;
   }

   return *this;
}

bool CharInfo::operator==( const CharInfo &right ) const {
   bool check;

   /* Return false if they don't equal, default case will return true */

   /* Check General Information */
   check = (gender == right.gender) ? : false;
   check = (race == right.race) ? : false;
   check = (classes == right.classes) ? : false;
   check = (abilityScores == right.abilityScores) ? : false;
   check = (stats == right.stats) ? : false;

   /* Check Special Information */
   check = (skills == right.skills) ? : false;
   check = (feats == right.feats) ? : false;
   check = (spells == right.spells) ? : false;
   check = (specialAbilities == right.specialAbilities) ? : false;
   check = (languages == right.languages) ? : false;

   /* Check Items */
   check = (gear == right.gear) ? : false;
   check = (inventory == right.inventory) ? : false;

   /* Check Money */
   check = (copper == right.copper) ? : false;
   check = (silver == right.silver) ? : false;
   check = (gold == right.gold) ? : false;
   check = (platinum == right.platinum) ? : false;

   return check;
}
/* -----------END OVERLOADED OPERATORS------------- */


/* -----------BEGIN GET METHODS------------- */

Name CharInfo::getName() {
   return name;
}

string CharInfo::getFirstName() {
   return name.getFirstName();
}

string CharInfo::getPassword() {
   return password;
}
/*

string CharInfo::getDescription() {
   return description;
}

Date CharInfo::getDateCreated() {
   return created;
}
*/

Date CharInfo::getLastLogon() {
   return lastLogon;
}

Gender CharInfo::getGender() {
   return gender;
}

Race CharInfo::getRace() {
   return race;
}

Class* CharInfo::getClasses() {
   return classes;
}

AbilityScores CharInfo::getAbilityScores() {
   return abilityScores;
}

Statistics CharInfo::getStats() {
   return stats;
}

Skill* CharInfo::getSkills() {
   return skills;
}

Feat* CharInfo::getFeats() {
   return feats;
}

Spell* CharInfo::getSpells() {
   return spells;
}

Ability* CharInfo::getAbilities() {
   return specialAbilities;
}

Language* CharInfo::getLanguages() {
   return languages;
}

Item* CharInfo::getGear() {
   return gear;
}

Item* CharInfo::getInventory() {
   return inventory;
}

int CharInfo::getCopper() {
   return copper;
}

int CharInfo::getSilver() {
   return silver;
}

int CharInfo::getGold() {
   return gold;
}

int CharInfo::getPlatinum() {
   return platinum;
}

/* -----------END GET METHODS------------- */


/* -----------BEGIN SET METHODS------------- */
void CharInfo::setName(Name n) {
   name = n;
}

void CharInfo::setName(string f, string m, string l) {
   name.setTitle("");
   name.setFirstName(f);
   name.setMiddleName(m);
   name.setLastName(l);
}

void CharInfo::setPassword(string p) {
   password = p;
}

void CharInfo::setGender(Gender g) {
   gender = g;
}

void CharInfo::setRace(Race r) {
   race = r;
}

void CharInfo::setClasses(Class* c) {
   classes = c;
}

void CharInfo::setAbilityScores(AbilityScores as) {
   abilityScores = as;
}

void CharInfo::setStatistics(Statistics s) {
   stats = s;
}

void CharInfo::setSkills(Skill* sk) {
   skills = sk;
}

void CharInfo::setFeats(Feat* f) {
   feats = f;
}

void CharInfo::setSpells(Spell* sp) {
   spells = sp;
}

void CharInfo::setAbilities(Ability* abs) {
   specialAbilities = abs;
}

void CharInfo::setLanguages(Language* l) {
   languages = l;
}

void CharInfo::setGear(Item* g) {
   gear = g;
}

void CharInfo::setInventory(Item* in) {
   inventory = in;
}

void CharInfo::setCurrentHP(int hp) {
   stats.setCurrentHP(hp);
}

/* -----------END SET METHODS------------- */


/* -----------BEGIN OTHER METHODS------------- */

void CharInfo::printPrompt() {
   // Print out begining
   cout << CYAN << "<";

   // Print out hit points
      cout << LIGHT_GREY << stats.getCurrentHP() << CYAN
      << "/" << GREEN << stats.getMaxHP() << LIGHT_GREY << "hp ";

   // Print out mana
   cout << LIGHT_GREY << stats.getCurrentMana() << CYAN
      << "/" << GREEN << stats.getMaxMana() << LIGHT_GREY << "mana ";

   // Print out movement
   cout << LIGHT_GREY << stats.getCurrentMovement() << CYAN
      << "/" << GREEN << stats.getMaxMovement() << LIGHT_GREY << "move";

   // Print out end
   cout << CYAN << "> ";
}

/* -----------END OTHER METHODS------------- */
