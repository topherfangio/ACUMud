// File:        CharInfo.h
// Date:        2.26.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Header file describing the CharInfo object for program ACUMud

/* prevent multiple inclusions of header file */
#ifndef CHARINFO_H
#define CHARINFO_H

#include "Info.h"    // Info class definition
#include "Gender.h"
#include "Race.h"
#include "Class.h"
#include "AbilityScores.h"
#include "Statistics.h"
#include "Skill.h"
#include "Feat.h"
#include "Spell.h"
#include "Ability.h"
#include "Language.h"
#include "Item.h"

/* Class CharInfo inherits from class Info */
class CharInfo : public Info {
   public:
      /* -----------DEFINE PUBLIC VARIABLES------------- */
      // NONE YET

      /* -----------DEFINE PUBLIC METHODS------------- */

      /* Constructors */
      CharInfo();
      CharInfo(Gender, Race, Class*, AbilityScores,
	    Statistics, Skill*, Feat*, Spell*, Ability*,
	    Language*, Item*, Item*, int, int,
	    int, int);

      /* Overloaded Operators */
      const CharInfo &operator=( const CharInfo & );
      bool operator==( const CharInfo & ) const;

      /* Get Methods */
      Name          getName();
      Date          getLastLogon();
      string        getFirstName();
      string        getPassword();

      Gender        getGender();
      Race          getRace();
      Class*        getClasses();
      AbilityScores getAbilityScores();
      Statistics    getStats();
      Skill*        getSkills();
      Feat*         getFeats();
      Spell*        getSpells();
      Ability*      getAbilities();
      Language*     getLanguages();
      Item*         getGear();
      Item*         getInventory();
      int           getCopper();
      int           getSilver();
      int           getGold();
      int           getPlatinum();

      /* Set Methods */
      void setName(Name);
      void setName(string, string, string);
      void setPassword(string);
      void setGender(Gender);
      void setRace(Race);
      void setClasses(Class*);
      void setAbilityScores(AbilityScores);
      void setStatistics(Statistics);
      void setSkills(Skill*);
      void setFeats(Feat*);
      void setSpells(Spell*);
      void setAbilities(Ability*);
      void setLanguages(Language*);
      void setGear(Item*);
      void setInventory(Item*);

      void setCurrentHP(int);

      void printPrompt();

      /* Other Methods */
      /* COMMENTED OUT FOR LATER IMPLEMENTATION
      void addSkill(Skill);
      void removeSkill(Skill);
      void addFeat(Feat);
      void removeFeat(Feat);
      void addSpell(Spell);
      void removeSpell(Spell);
      void addAbility(Ability);
      void removeAbility(Ability);
      void addLanguage(Language);
      void removeLangage(Language);
      void addToGear(Item*);
      void removeFromGear(Item*);
      void addToInventory(Item*);
      void removeFromInventory(Item*);
      */

   private:
      /* -----------DEFINE PRIVATE VARIABLES------------- */
      Date   lastLogon;            // The date of the character's last logon
      string password;             // The character's password

      /* General Information */
      Gender        gender;        // Male of Female
      Race          race;          // What race (Human, Elf, Dwarf, etc.)
      Class*        classes;       // Which class (Monk, Fighter, Paladin, etc.)
      AbilityScores abilityScores; // All ability scores (Str, Dex, Con, Int, Wis, Cha)
      Statistics    stats;         // Statistics scores (HP, AC, Speed, Initiative, etc.)

      /* Special Information */
      Skill*    skills;            // Skills (Pick Lock, Bluff, Hide, Listen, Spot, etc.)
      Feat*     feats;             // Feats (Dodge, Mobility, Spring Attack, etc.)
      Spell*    spells;            // Spells (Magic Missile, Fire Bolt, etc.)
      Ability*  specialAbilities;  // Sp. Abilities (Evasion, Ki Strike, etc.)
      Language* languages;         // Languages (Common, Elven, Draconic, etc.)

      /* Items */
      Item* gear;                  // Equipment (Weapons, Armor, etc.)
      Item* inventory;             // Items (Gloves, Rope, Torches, etc.)

      /* Money */
      int copper;                  // Smallest unit of money
      int silver;                  // Second smallest unit of money (10 Copper)
      int gold;                    // Second highest (100 Silver)
      int platinum;                // Highest (100 Gold)

      /* -----------DEFINE PRIVATE METHODS------------- */
      // NONE YET
};

#endif
