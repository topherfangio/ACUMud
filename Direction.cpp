// File:        Direction.cpp
// Date:        3.22.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Object file describing the Direction methods for program ACUMud

#include "Direction.h"

#include <string>
#include <iostream>

using std::string;
using std::cout;

Direction::Direction() {
   direction = -1;      // Set the direction to be null
}

Direction::Direction(int d) {
   direction = d;
}

int Direction::getDirection() {
   return direction;
}

string Direction::getName() {
   switch (direction) {
      case 0: return "North";
	      break;
      case 1: return "Northeast";
	      break;
      case 2: return "East";
	      break;
      case 3: return "Southeast";
	      break;
      case 4: return "South";
	      break;
      case 5: return "Southwest";
	      break;
      case 6: return "West";
	      break;
      case 7: return "Northwest";
	      break;
      case 8: return "Up";
	      break;
      case 9: return "Down";
	      break;
      default: return "";
   }
}

void Direction::setDirection(int d) {
   direction = d;
}

void Direction::print() {
   cout << "Direction name: " << getName();
}
