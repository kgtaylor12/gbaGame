#ifndef MAIN_H
#define MAIN_H

#include "gba.h"


// TODO: Create any necessary structs
/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
*/

struct ball {
		int row;
		int col;
		int rd;
		int cd;
		unsigned short color;
};

struct rectangle {
    int row;
    int col;
    int height;
    int width;
    unsigned short color;
};



/*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/




#endif
