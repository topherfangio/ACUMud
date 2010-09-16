// File:        Message.cpp
// Date:        3.22.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Object file describing the Message methods for program ACUMud

#include "Message.h"

Message::Message() {
   // Constructor does nothing yet
}

/* -----------BEGIN OVERLOADED OPERATORS------------- */

bool Message::operator==( const Message &right) const {
   return true;
}

/* -----------END OVERLOADED OPERATORS------------- */
