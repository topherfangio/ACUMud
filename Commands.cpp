#include "Command.h"

using std::cout;

CmdLook::CmdLook(string n, string d, Character c) {
   name = n;
   description = d;
   opchar = c;
}

void CmdLook::execute() {
   opchar.look();
}

CmdNorth::CmdNorth(string n, string d, Character c) {
   name = n;
   description = d;
   opchar = c;
   north = Direction(0);
}

void CmdNorth::execute() {
   opchar.move(north);
}

CmdSouth::CmdSouth(string n, string d, Character c) {
   name = n;
   description = d;
   opchar = c;
   south = Direction(4);
}

void CmdSouth::execute() {
   opchar.move(south);
}

CmdEast::CmdEast(string n, string d, Character c) {
   name = n;
   description = d;
   opchar = c;
   east = Direction(2);
}

void CmdEast::execute() {
   opchar.move(east);
}

CmdWest::CmdWest(string n, string d, Character c) {
   name = n;
   description = d;
   opchar = c;
   west = Direction(6);
}

void CmdWest::execute() {
   opchar.move(west);
}

CmdNortheast::CmdNortheast(string n, string d, Character c) {
   name = n;
   description = d;
   opchar = c;
   northeast = Direction(1);
}

void CmdNortheast::execute() {
   opchar.move(northeast);
}

CmdQuit::CmdQuit(string n, string d, Character c) {
   name = n;
   description = d;
   opchar = c;
}

void CmdQuit::execute() {
   cout << LIGHT_RED << "Goodbye " << WHITE << opchar.getFirstName() << "\n";
   cout << CLEAR;
   exit(0);
}
