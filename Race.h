// File:        Race.h
// Date:        3.22.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Header file describing the Race object for program ACUMud

/* prevent multiple inclusions of header file */
#ifndef RACE_H
#define RACE_H

#include "AbilityScores.h"
#include "Skill.h"
#include "Feat.h"
#include "Ability.h"
#include "Language.h"

#include <string>

using std::string;

class Race {
   public:
      /* -----------DEFINE PUBLIC VARIABLES------------- */
      // NONE YET

      /* -----------DEFINE PUBLIC METHODS------------- */
      Race();    // Default constructor
      Race(string, AbilityScores, Skill*, 
	    Feat*, Ability*, Language*);

      bool operator==(const Race &) const;

      string        getName();         // Returns the name of the race
      AbilityScores getModifiers();    // Returns the ability modifiers the race has
      Skill*        getSkills();       // Returns the special skills the race has
      Feat*         getFeats();        // Returns the special feats the race has
      Ability*      getAbilities();    // Returns the special abilities the race has
      Language*     getLanguages();    // Returns the special languages the race has


   private:
      /* -----------DEFINE PRIVATE VARIABLES------------- */
      string        name;         // The name of the race
      AbilityScores modifiers;    // Any ability score (STR, WIS, ...) modifiers the race has
      Skill*        skills;       // Special racial skills the character might get
      Feat*         feats;        // Special racial feats the character might get
      Ability*      abilities;    // Special racial abilities the character might get
      Language*     languages;    // Special racial languages the character might get

      /* -----------DEFINE PRIVATE METHODS------------- */
      // NONE YET
};

#endif
