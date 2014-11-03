#include "cell.h"
#include "rgbapixel.h"
#include <stdlib.h>     /* srand, rand */
using namespace std;

Cell::Cell()
{
	if ((rand() %100+1) % 2)
    {
        alive = true;
    }
    else {
        alive = false;
    }
    color = 0;// Your code here!
}

Cell::Cell(bool a, RGBAPixel c)
{
    alive = a;// Your code here!
    color = c;
}

bool Cell::get_alive()
{
	return alive; // Your code here!
}

void Cell::set_alive(bool a)
{
	alive = a;
    }// Your code here!
}

RGBAPixel get_color() {
	return color; // Your code here!
}

void set_color(RGBAPixel c) {
	color = c;
}
