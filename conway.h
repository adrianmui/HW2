#ifndef CONWAY_H
#define CONWAY_H

#include "cell.h"

class Conway {
public:
  Conway(int s);    // set side to s
  ~Conway();        // free all dynamically allocated memory
  
  void start();     // start the game by running step
  void step();      // update the board by one unit of time(?)
private:
  Cell ** universe; // 2d array representing CGoL
  int side;         // length of one side of CGoL
  
  /* private helpers */
  int count_alive_neighbors(int x, int y);  // count the number of living neighbors around element (x,y)
};

#endif