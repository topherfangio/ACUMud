// File:        Info.cpp
// Date:        2.26.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Object file describing the Info methods for program ACUMud

#include "Info.h"

using std::string;

Name Info::getName() {
   return name;
}

Name Info::getCreator() {
   return createdBy;
}

Date Info::getDateCreated() {
   return created;
}

string Info::getDescription() {
   return description;
}

void Info::setName(Name n) {
   name = n;
}

void Info::setCreator(Name c) {
   createdBy = c;
}

void Info::setCreated(Date d) {
   created = d;
}

void Info::setDescription(string s) {
   description = s;
}
