#ifndef CELL_H
#define CELL_H

#include "rgbapixel.h"

class Cell {
public:
  Cell();                         // set alive to random value, set color to default color
  Cell(bool a, RGBAPixel c);      // set alive to a, set color to c
  
  bool get_alive();               // return alive member
  void set_alive(bool a);         // set alive to a
  
  RGBAPixel get_color();          // return color
  void set_color(RGBAPixel c);    // set color to c
private:
  bool alive;                     // whether cell is alive or dead
  RGBAPixel color;                // color of the cell, assuming have rgbapixel.h
};

#endif