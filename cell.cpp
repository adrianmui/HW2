#include "cell.h"
#include "rgbapixel.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>
using namespace std;

Cell::Cell()
{
	if ((rand() %100+1) <= 50)
    {
        alive = true;
    }
    else {
        alive = false;
    }
    color.blue = 255;
    color.red = 255;
    color.alpha = 255;
    color.green = 255;
    // Your code here!
}

Cell::Cell(bool a, RGBAPixel c)
{
    alive = a;// Your code here!
    color.blue = c.blue;
    color.red = c.red;
    color.alpha = c.alpha;
    color.green = c.green;
}

bool Cell::get_alive()
{
	return alive; // Your code here!
}

void Cell::set_alive(bool a)
{
	alive = a;
    // Your code here!
}

RGBAPixel Cell::get_color() {
	return color; // Your code here!
}

void Cell::set_color(RGBAPixel c) {
    color.blue = c.blue;
    color.red = c.red;
    color.alpha = c.alpha;
    color.green = c.green;

}
