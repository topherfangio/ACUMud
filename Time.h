// File:        Time.h
// Date:        1.23.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: The header file which describes the Time object.

/* prevent multiple inclusions of header file */
#ifndef TIME_H
#define TIME_H

class Time {
   public:
      /* -------------DEFINE PUBLIC VARIABLES-------------- */
      /* no public variables */



      /* -------------DEFINE PUBLIC METHODS-------------- */
      /* Constructor methods */
      Time();                            // Constructor Method
      Time(int, int);                    // Second Constructor Method
      Time(int, int, int);               // Third Constructor Method

      /* Set methods */
      void setTime( int, int, int );     // Method to set time
      void setHour(int);                 // Set the hour by itself
      void setMinute(int);               // Set the minute by itself
      void setTimeZone(int);             // Set the time zone by itself
      void flipDST();                    // Flip the boolean daylight savings time

      /* Get methods */
      int  getGMHour();                  // Returns the Greenwich Meridain hour
      int  getLocalHour();               // Returns the local hour
      int  getMinute();                  // Returns the current minute 

      /* Print methods */
      void printLocalTime();             // Prints the local time
      void printGMT();                   // Prints the Greenwich Meridian Time

   private: 
      /* -------------DEFINE PRIVATE VARIABLES-------------- */
      int hour;                          // 0 - 23 ( 24 hour clock format )
      int minute;                        // 0 - 59
      int timeZone;                      // 0 - 23 ( # of hours west of Grennich )
      bool DST;                          // true/false Daylight Savings Time (initally false)

      /* -------------DEFINE PRIVATE METHODS-------------- */

      /* Error methods */
      int hourError(int);                // informs user that hour was entered
                                         //    incorrectly and asks for new hour
      int minuteError(int);              // informs user that minute was entered
                                         //    incorrectly and asks for new minute
      int timeZoneError(int);            // informs user that time zone was entered
                                         //    incorrectly and asks for new time zone
};  // DON'T FORGET THE SEMICOLON

#endif
