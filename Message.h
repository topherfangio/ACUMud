// File:        Message.h
// Date:        3.22.2004
// Author:      Chris Fangio
// Professor:   Dr. John Barton
// Description: Header file describing the Message object for program ACUMud

/* prevent multiple inclusions of header file */
#ifndef MESSAGE_H
#define MESSAGE_H

class Message {
   public:
      /* -----------DEFINE PUBLIC VARIABLES------------- */
      // NONE YET

      /* -----------DEFINE PUBLIC METHODS------------- */
      Message();       // Default Constructor
      bool operator==(const Message &) const;

   private:
      /* -----------DEFINE PRIVATE VARIABLES------------- */

      /* -----------DEFINE PRIVATE METHODS------------- */
      // NONE YET
};

#endif
