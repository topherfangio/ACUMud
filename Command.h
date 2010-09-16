// File:        Command.h
// Date:        4.22.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Header file describing the Command object for program ACUMud.
//              Allows for use of full word commands in an easily alterable way.
//              All commands will inherit from this class and must implement the
//              executable method

/* prevent multiple inclusions of header file */
#ifndef COMMAND_H
#define COMMAND_H

#include "Character.h"
#include "Colors.h"
#include "Direction.h"

#include <string>
#include <iostream>

class Command {
   public:
      /* -----------DEFINE PUBLIC VARIABLES------------- */
      // NONE YET

      /* -----------DEFINE PUBLIC METHODS------------- */
      Command() { name = (string) ""; description = (string) ""; }
      Command(string n, string d) { name = n; description = d; }
      virtual ~Command() {}

      string getName() { return name; }
      string getDescription() { return description; }
      
      void setName(string n) { name = n; }
      void setDescription(string d) { description = d; }

      virtual void execute() {}
      //virtual void execute(Room);
      //virtual void execute(Area);

   protected:
      /* -----------DEFINE PRIVATE VARIABLES------------- */
      string name;
      string description;

      /* -----------DEFINE PRIVATE METHODS------------- */
      // NONE YET
};

class CmdLook : public Command {
   public:
      /* -----------DEFINE PUBLIC VARIABLES------------- */
      // NONE YET

      /* -----------DEFINE PUBLIC METHODS------------- */
      CmdLook(string, string, Character);
      void execute();

   private:
      /* -----------DEFINE PRIVATE VARIABLES------------- */
      Character opchar;

      /* -----------DEFINE PRIVATE METHODS------------- */
      // NONE YET
};

class CmdNorth : public Command {
   public:
      /* -----------DEFINE PUBLIC VARIABLES------------- */
      // NONE YET

      /* -----------DEFINE PUBLIC METHODS------------- */
      CmdNorth(string, string, Character);
      void execute();

   private:
      /* -----------DEFINE PRIVATE VARIABLES------------- */
      Character opchar;
      Direction north;

      /* -----------DEFINE PRIVATE METHODS------------- */
      // NONE YET
};

class CmdSouth : public Command {
   public:
      /* -----------DEFINE PUBLIC VARIABLES------------- */
      // NONE YET

      /* -----------DEFINE PUBLIC METHODS------------- */
      CmdSouth(string, string, Character);
      void execute();

   private:
      /* -----------DEFINE PRIVATE VARIABLES------------- */
      Character opchar;
      Direction south;

      /* -----------DEFINE PRIVATE METHODS------------- */
      // NONE YET
};

class CmdEast : public Command {
   public:
      /* -----------DEFINE PUBLIC VARIABLES------------- */
      // NONE YET

      /* -----------DEFINE PUBLIC METHODS------------- */
      CmdEast(string, string, Character);
      void execute();

   private:
      /* -----------DEFINE PRIVATE VARIABLES------------- */
      Character opchar;
      Direction east;

      /* -----------DEFINE PRIVATE METHODS------------- */
      // NONE YET
};

class CmdWest : public Command {
   public:
      /* -----------DEFINE PUBLIC VARIABLES------------- */
      // NONE YET

      /* -----------DEFINE PUBLIC METHODS------------- */
      CmdWest(string, string, Character);
      void execute();

   private:
      /* -----------DEFINE PRIVATE VARIABLES------------- */
      Character opchar;
      Direction west;

      /* -----------DEFINE PRIVATE METHODS------------- */
      // NONE YET
};

class CmdNortheast : public Command {
   public:
      /* -----------DEFINE PUBLIC VARIABLES------------- */
      // NONE YET

      /* -----------DEFINE PUBLIC METHODS------------- */
      CmdNortheast(string, string, Character);
      void execute();

   private:
      /* -----------DEFINE PRIVATE VARIABLES------------- */
      Character opchar;
      Direction northeast;

      /* -----------DEFINE PRIVATE METHODS------------- */
      // NONE YET
};

class CmdQuit : public Command {
   public:
      /* -----------DEFINE PUBLIC VARIABLES------------- */
      // NONE YET

      /* -----------DEFINE PUBLIC METHODS------------- */
      CmdQuit(string, string, Character);
      void execute();

   private:
      /* -----------DEFINE PRIVATE VARIABLES------------- */
      Character opchar;

      /* -----------DEFINE PRIVATE METHODS------------- */
      // NONE YET
};
#endif
