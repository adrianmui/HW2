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
    for (int i = (x-1); i == (x+1); i++)
    {
        for (int j = (y-1); j == (y+1); j++)
        {
            if ((universe[i][j].get_alive()) == true)
            {
                if ((i != x) && (j != y)) // excludes center
                {
                    count++;
                }
            }
        }
    }
    return count;
}
