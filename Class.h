// File:        Class.h
// Date:        3.22.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Header file describing the Class object for program ACUMud

/* prevent multiple inclusions of header file */
#ifndef CLASS_H
#define CLASS_H

#include "Skill.h"
#include "Feat.h"
#include "Ability.h"
#include "Language.h"

class Class {
   public:
      /* -----------DEFINE PUBLIC VARIABLES------------- */
      // NONE YET

      /* -----------DEFINE PUBLIC METHODS------------- */
      Class();                     // Default constructor

      bool operator==(const Class &) const;

      string    getName();         // Returns the name of the class
      Skill*    getSkills();       // Returns the special skill of the class
      Feat*     getFeats();        // Returns the feats the class has
      Ability*  getAbilities();    // Returns the class abilities
      Language* getLanguages();    // Returns the class languages

   private:
      /* -----------DEFINE PRIVATE VARIABLES------------- */
      string    name;         // The name of the class (Monk, Fighter, Paladin, etc.)
      Skill*    skills;       // All of the class skills
      Feat*     feats;        // Any special class feats
      Ability*  abilities;    // Any special class abilities
      Language* languages;    // Any special class languages

      /* -----------DEFINE PRIVATE METHODS------------- */
      // NONE YET
};

#endif
