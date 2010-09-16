// File:        Date.h
// Date:        2.4.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: The header file which describes the Date object.

/* prevent multiple inclusions of header file */
#ifndef DATE_H
#define DATE_H

#include <iostream>

using std::ostream;

class Date {
   friend ostream &operator<<( ostream &, const Date & );

   public:
      /* -------------DEFINE PUBLIC VARIABLES-------------- */
      const int DATE_FORMAT_DEFAULT;
      const int DATE_FORMAT_DMY;
      const int DATE_FORMAT_YMD;


      /* -------------DEFINE PUBLIC METHODS-------------- */
      /* Constructor methods */
      Date();                            // Constructor Method
      Date(int, int, int);               // Second Constructor Method
      Date(int, int, int, char);         // Third Constructor Method

      /* Operator Overloads */
      const Date &operator=( const Date & );

      /* Set methods */
      void setDate(int, int, int);       // Sets the date by (month, day, year)
      void setMonth(int);                // Sets the month, 1 - 12
      void setDay(int);                  // Sets the day, 1 - 31
      void setYear(int);                 // Sets the year, #### (ie. 2004)
      void setFormat(int);               // Sets the format of the date, 0 - 2
      void setDelineator(char);          // Sets the current delineator, a char

      /* Get methods */
      int getMonth();                    // Returns the current month, 1 - 12
      int getDay();                      // Returns the current day, 1 - 31
      int getYear();                     // Returns the current year, #### (ie. 2004)
                                         //    NOTE: Can be negative for B.C Dates
      int getFormat();                   // Returns the current format, 0-2
      char getDelineator();               // Returns the current delineator, char

      /* Print methods */
      void printDate();                  // Prints the date based on the current format
      void printDate(int);               // Prints the date based on the argument format
      void printDate(char);              // Prints the date with specified delineator
      void printDate(int, char);         // Prints the date with both specified format,
                                         //    and specified delineator

   private: 
      /* -------------DEFINE PRIVATE VARIABLES-------------- */
      int month;                         // Month variable, 1 - 12
      int day;                           // Day variable, 1 - 31
      int year;                          // Year variable, #### (ie. 2004)
      int format;                        // Format variable, 0-2
      char delineator;                   // Seperator for each part of the date

      /* -------------DEFINE PRIVATE METHODS-------------- */
      /* Error methods */
      int monthError(int);             // Error method for month
      int dayError(int);               // Error method for day
      int yearError(int);              // Error method for year
      int formatError(int);            // Error method for format

};  // DON'T FORGET THE SEMICOLON

#endif
