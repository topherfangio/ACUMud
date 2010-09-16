// File:        AbilityScores.h
// Date:        3.22.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Header file describing the AbilityScores object for program ACUMud

/* prevent multiple inclusions of header file */
#ifndef ABILITYSCORES_H
#define ABILITYSCORES_H

class AbilityScores {
   public:
      /* -----------DEFINE PUBLIC VARIABLES------------- */
      // NONE YET

      /* -----------DEFINE PUBLIC METHODS------------- */

      /* Consructors */
      AbilityScores();                 // Default Constructor
      AbilityScores( int, int, int,    // Second Constructor
	    int, int, int,             //   All Ability Scores
	    int, int, int,             //   in the order of abilty, 
	    int, int, int );           //   temp, abilty, temp...

      /* Overloaded Operators */
      bool operator==(const AbilityScores &) const;

      int getStr() { return maxStrength; }
      int getDex() { return maxDexterity; }
      int getCon() { return maxConstitution; }
      int getInt() { return maxIntelligence; }
      int getWis() { return maxWisdom; }
      int getCha() { return maxCharisma; }

      int getTempStr() { return tempStrength; }
      int getTempDex() { return tempDexterity; }
      int getTempCon() { return tempConstitution; }
      int getTempInt() { return tempIntelligence; }
      int getTempWis() { return tempWisdom; }
      int getTempCha() { return tempCharisma; }

   private:
      /* -----------DEFINE PRIVATE VARIABLES------------- */
      int maxStrength;         // Maximum strength
      int maxDexterity;        // Maximum dexterity
      int maxConstitution;     // Maximum constitution
      int maxIntelligence;     // Maximum intelligence
      int maxWisdom;           // Maximum wisdom
      int maxCharisma;         // Maximum charisma

      int tempStrength;        // Temporary strength, and so on...
      int tempDexterity;       
      int tempConstitution;
      int tempIntelligence;
      int tempWisdom;
      int tempCharisma;

      /* -----------DEFINE PRIVATE METHODS------------- */
      // NONE YET
};

#endif
