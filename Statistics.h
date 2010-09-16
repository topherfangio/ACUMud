// File:        Statistics.h
// Date:        3.22.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Header file describing the Statistics object for program ACUMud

/* prevent multiple inclusions of header file */
#ifndef STATISTICS_H
#define STATISTICS_H

class Statistics {
   public:
      /* -----------DEFINE PUBLIC VARIABLES------------- */
      // NONE YET

      /* -----------DEFINE PUBLIC METHODS------------- */
      Statistics();   // Default constructor
      bool operator==(const Statistics &) const;

      /* Get Methods */
      int  getMaxHP();
      int  getCurrentHP();
      int  getMaxMana();
      int  getCurrentMana();
      int  getMaxMovement();
      int  getCurrentMovement();

      int  getNumTrains();

      /* Set Methods */
      void setMaxHP(int);
      void setCurrentHP(int);
      void setMaxMana(int);
      void setCurrentMana(int);
      void setMaxMovement(int);
      void setCurrentMovement(int);

      void addTrain();
      void removeTrain();

   private:
      /* -----------DEFINE PRIVATE VARIABLES------------- */
      int maxHP;
      int currentHP;

      int maxMana;
      int currentMana;

      int maxMovement;
      int currentMovement;

      int trains;

      /* -----------DEFINE PRIVATE METHODS------------- */
      // NONE YET
};

#endif
