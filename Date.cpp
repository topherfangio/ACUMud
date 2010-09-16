// File:        Date.cpp
// Date:        2.13.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: This file includes all of the methods for the class Date

#include <iostream>
#include <iomanip>
#include "Date.h"

using std::cout;
using std::cin;
using std::endl;

using std::setfill;
using std::setw;

/* ------------BEGIN CONSTRUCTOR METHODS------------ */

/* Date constructor, initalizes all Date data to zero */
Date::Date():

/* Initalize constant values */
DATE_FORMAT_DEFAULT(0), 
DATE_FORMAT_DMY(1), 
DATE_FORMAT_YMD(2) 
/* End const init */

{
   month=0;
   day=0;
   year=0;
   format=DATE_FORMAT_DEFAULT;
   delineator='/';
} /* End Date() constructor */

/* Date constructor with arguments month, day, and year */
Date::Date(int m, int d, int y):

/* Initalize constant values */
DATE_FORMAT_DEFAULT(0), 
DATE_FORMAT_DMY(1), 
DATE_FORMAT_YMD(2) 
/* End const init */

{
/* End const init */
   setDate(m, d, y);
   setFormat(DATE_FORMAT_DEFAULT);
   delineator='/';
} /* End Date(int, int, int) constructor */

/* Date constructor with arguments month, day, and year */
Date::Date(int m, int d, int y, char del):

/* Initalize constant values */
DATE_FORMAT_DEFAULT(0), 
DATE_FORMAT_DMY(1), 
DATE_FORMAT_YMD(2) 
/* End const init */

{
   setDate(m, d, y);
   setFormat(DATE_FORMAT_DEFAULT);
   setDelineator(del);
} /* End Date(int, int, int, char) constructor */

/* ------------END CONSTRUCTOR METHODS------------ */


/* -----------BEGIN OVERLOADED OPERATORS------------- */

ostream &operator<<( ostream &output, const Date &d ) {
   if ( d.format == d.DATE_FORMAT_DEFAULT ) {
      output << d.month << d.delineator
	     << d.day << d.delineator
	     << d.year;
   }
   else if ( d.format == d.DATE_FORMAT_DMY ) {
      output << d.day << d.delineator
	     << d.month << d.delineator
	     << d.year;
   }
   else if ( d.format == d.DATE_FORMAT_YMD ) {
      output << d.year << d.delineator
	     << d.month << d.delineator
	     << d.day;
   }

   return output;          // Enables cascading assignment
}

const Date &Date::operator=( const Date &right ) {
   if ( &right != this ) {     // Avoid self assignment
      month = right.month;
      day = right.day;
      year = right.year;
      format = right.format;
      delineator = right.delineator;
   }

   return *this;        // Enables cascaded assignments
}

/* -----------END OVERLOADED OPERATORS------------- */


/* ------------BEGIN SET METHODS------------ */

/* Sets the current date to be Month m, Day d, and Year y */
void Date::setDate(int m, int d, int y) {
   setMonth(m);
   setDay(d);
   setYear(y);
} /* End setDate(int, int, int)  */

/* Sets the current month to be m */
void Date::setMonth(int m) {
   month = (m > 0 && m <= 12) ? m : monthError(m);
} /* End setMonth(int) */

/* Sets the current day to be d */
void Date::setDay(int d) {
   day = (d > 0 && d <= 31) ? d : dayError(d);
} /* End setDay(int) */

/* Sets the current year to be y */
void Date::setYear(int y) {
   year = (y >= -2000 && y <= 9999) ? y : yearError(y);
} /* End setYear(int) */

/* Sets the current format output to be f */
void Date::setFormat(int f) {
   format = (f >= 0 && f <= 2) ? f : formatError(f);
} /* End setFormat(int) */

/* Set the current delineator to be t */
void Date::setDelineator(char d) {
   delineator=d;
} /* End setDelineator(char) */

/* ------------END SET METHODS------------ */


/* ------------BEGIN GET METHODS------------ */

/* Returns the current month */
int Date::getMonth() {
   return (month);
} /* End getMonth() */

/* Returns the current day */
int Date::getDay() {
   return (day);
} /* End getDay() */

/* Returns the current year */
int Date::getYear() {
   return (year);
} /* End getYear() */

/* Returns the current format */
int Date::getFormat() {
   return (format);
} /* End getFormat() */

/* Returns the current delineator */
char Date::getDelineator() {
   return (delineator);
} /* End getDelineator() */

/* ------------END GET METHODS------------ */


/* ------------BEGIN PRINT METHODS------------ */

/* Prints the date based on the current format and delineator */
void Date::printDate() {
   if (format==DATE_FORMAT_DEFAULT) {
      cout << "\nDate: " << setfill('0') 
	 << setw(2) << month << delineator 
	 << setw(2) << day << delineator
	 << setw(4) << year << '\n';
   }
   else if (format==DATE_FORMAT_DMY) {
      cout << "\nDate: " << setfill('0') 
	 << setw(2) << day << delineator
	 << setw(2) << month << delineator 
	 << setw(4) << year << '\n';
   }
   else if (format==DATE_FORMAT_YMD) {
      cout << "\nDate: " << setfill('0') 
	 << setw(4) << year << delineator
	 << setw(2) << month << delineator 
	 << setw(2) << day << '\n';
   }
} /* End printDate() */

/* Prints the date based on the format f */
void Date::printDate(int f) {
   setFormat(f);
   printDate();
} /* End printDate(int) */

/* Prints the date with the delineator d */
void Date::printDate(char d) {
   setDelineator(d);
   printDate();
} /* End printDate(char) */

/* Prints the date with the format f and delineator d */
void Date::printDate(int f, char d) {
   setFormat(f);
   setDelineator(d);
   printDate();
} /* End printDate(int, char) */

/* ------------END PRINT METHODS------------ */


/* ------------BEGIN ERROR METHODS------------ */

/* Prints a month error and asks for user input */
int Date::monthError(int m) {
   cout << "\tInvalid month: " << m << "\n";
   cout << "\tValid values are integers 1 - 12.\n";
   cout << "Please enter a new value: ";
   cin >> m;
   return ( (m > 0 && m <= 12) ? m : monthError(m) );
} /* End monthError(int) */

/* Prints a day error and asks for user input */
int Date::dayError(int d) {
   cout << "\tInvalid day: " << d << "\n";
   cout << "\tValid values are integers 1 - 31.\n";
   cout << "Please enter a new value: ";
   cin >> d;
   return ( (d > 0 && d <= 31) ? d : dayError(d) );
} /* End monthError(int) */

/* Prints a year error and asks for user input */
int Date::yearError(int y) {
   cout << "\tInvalid year: " << y << "\n";
   cout << "\tValid values are integers -2000 - 9999.\n";
   cout << "Please enter a new value: ";
   cin >> y;
   return ( (y > -2001 && y <= 9999) ? y : yearError(y) );
} /* End monthError(int) */

/* Prints a format error and asks for user input */
int Date::formatError(int f) {
   cout << "\tInvalid format: " << f << "\n";
   cout << "\tValid values are 0 - 2\t0=Default\t1=Day/Month/Year\t2=Year/Month/Day.\n";
   cout << "Please enter a new value: ";
   cin >> f;
   return ( (f >= 0 && f <= 2) ? f : formatError(f) );
} /* End formatError(int) */

/* ------------END ERROR METHODS------------ */
