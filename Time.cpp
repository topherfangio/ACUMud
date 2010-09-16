// File:        Time.cpp
// Date:        1.23.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Declares member functions for class Time

#include <iostream>
#include <iomanip>
#include "Time.h"

using std::cout;
using std::cin;
using std::endl;

using std::setfill;
using std::setw;

/* ------------BEGIN CONSTRUCTOR METHODS------------ */

/* Time constructor, initalizes all Time data to zero. */
Time::Time() {
   hour = 0;
   minute = 0;
   timeZone = 0;
   DST = false;
} /* end Time() constructor */

/* Time constructor with arguments hour and minute */
Time::Time(int h, int m) {
   timeZone=0;
   setTime(h, m, timeZone);
   DST = false;
}
/* end Time() constructor */

/* Time constructor with arguments hour, minute, and time zone*/
Time::Time(int h, int m, int tz) {
   setTime(h, m, tz);
   DST = false;
}
/* end Time() constructor */

/* ------------END CONSTRUCTOR METHODS------------ */


/* ------------BEGIN SET METHODS------------ */

/* Sets the current time to be Hour h, Minute m, in Time Zone tz */
void Time::setTime(int h, int m, int tz) {
   hour = (h >= 0 && h < 24) ? h : hourError(h);
   minute = (m >= 0 && m < 60) ? m: minuteError(m);
   timeZone = (tz >= -12 && tz < 13) ? tz: timeZoneError(tz);
} /* End setTime() */

/* Sets the current hour */
void Time::setHour(int h) {
   hour = (h >= 0 && h < 24) ? h : hourError(h);
}
/* End setHour() */

/* Sets the current minute */
void Time::setMinute(int m) {
   minute = (m >= 0 && m < 24) ? m : minuteError(m);
}
/* End setMinute() */

/* Sets the current time zone */
void Time::setTimeZone(int tz) {
   timeZone = (tz >= -12 && tz < 13) ? tz : timeZoneError(tz);
}
/* End setTimeZone() */

/* Flips the daylight savings time variable */
void Time::flipDST() {
   DST = DST ? false : true;            // test DST for truth and flip
} /* End flipDST() */

/* -------------END SET METHODS----------- */

/* -------------BEGIN GET METHODS----------- */

/* Returns the Greenwich Meridian hour */
int Time::getGMHour() {
   return ( DST ? ( (hour + timeZone) < 0 ? (hour + 24 + timeZone) : (hour + timeZone) ) - 1 :
	 ( (hour + timeZone) < 0 ? (hour + 24 + timeZone) : (hour + timeZone) ) );
} /* End getGMHour() */

/* Returns the current hour */
int Time::getLocalHour() {
   return ( DST ? (hour - 1) : hour );
} /* End getLocalHour() */

/* Returns the current minute */
int Time::getMinute() {
   return ( minute );
} /* End getMinute() */

/* -------------END GET METHODS----------- */



/* -------------BEGIN PRINT METHODS----------- */

/* Prints the local time */
void Time::printLocalTime() {
   cout << "\nLocal Time: " << setfill('0') << setw(2) << (DST ? hour - 1 : hour) << ":" << setw(2) << minute << endl;
}
/* End printLocalTime() */

/* Prints the Greenwich Meridian Time */
void Time::printGMT() {
   cout << "\nGreenwich Meridian Time: " << setfill('0') << setw(2)
      << ( DST ? ( (hour+timeZone) < 0 ? (hour + 24 + timeZone) : (hour + timeZone) ) - 1 :
	       ( (hour+timeZone) < 0 ? (hour + 24 + timeZone) : (hour + timeZone) ) ) << ":" << setw(2) << minute << endl;
}
/* End printGMT() */

/* -------------END PRINT METHODS----------- */



/* -------------BEGIN ERROR METHODS----------- */

/* If the user has entered an incorrect value for the hour, 
   inform them and ask for the new hour. */
int Time::hourError(int h) {
   cout << "\tInvalid hour in function setTime: " << h << "\n";
   cout << "\tValid values are integers 0 - 24.\n";
   cout << "\tPlease enter new value: ";
   cin >> h;
   return( (h >= 0 && h < 24) ? h : hourError(h) );
} /* End hourError() */

/* If the user has entered an incorrect value for the minute
   inform them and ask for the new minute. */
int Time::minuteError(int m) {
   cout << "\tInvalid minute in function setTime: " << m << "\n";
   cout << "\tValid values are integers 0 - 59.\n";
   cout << "\tPlease enter new value: ";
   cin >> m;
   return( (m >= 0 && m < 60) ? m: minuteError(m) );
} /* End minuteError() */

/* If the user has entered an incorrect value for the time zone
   inform them and ask for the new time zone. */ 
int Time::timeZoneError(int tz) {
   cout << "\tInvalid time zone in function setTime: " << tz << "\n";
   cout << "\tValid values are integers -12 - 12.\n";
   cout << "\tPlease enter new value: ";
   cin >> tz;
   return( (tz >= -12 && tz < 13) ? tz: timeZoneError(tz) );
} /* End timeZoneError() */

/* -------------END ERROR METHODS----------- */
