#include "conway.h"
#include "cell.h"
#include "rgbapixel.h"
#include "animation.h"
#include "png.h"
using namespace std;

Conway::Conway(int s) {
	side = s;// Your code here!
}

Conway::~Conway()
{
	for (int i = 0; i < side; i++)
    {
        delete universe[i];
    }
    delete universe;
    universe = NULL;// Your code here!
}

void Conway::start() {
	// For HW3
}

void Conway::step() {
	// For HW3
}

int Conway::count_alive_neighbors(int x, int y)
{
	int count = 0;
    if ((universe[x-1][y].get_alive()) == true)
    {
        count++;
    }
    if ((universe[x+1][y].get_alive()) == true)
    {
        count++;
    }
    if ((universe[x-1][y+1].get_alive()) == true)
    {
        count++;
    }
    if ((universe[x][y+1].get_alive()) == true)
    {
        count++;
    }
    if ((universe[x+1][y+1].get_alive()) == true)
    {
        count++;
    }
    if ((universe[x-1][y-1].get_alive()) == true)
    {
        count++;
    }
    if ((universe[x][y-1].get_alive()) == true)
    {
        count++;
    }
    if ((universe[x+1][y-1].get_alive()) == true)
    {
        count++;
    }
    return count;
}
