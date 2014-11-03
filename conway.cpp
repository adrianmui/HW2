#include "conway.h"
#include "cell.h"
#include "rgbapixel.h"
#include "animation.h"
#include "png.h"
using namespace std;

Conway::Conway(int s) {
	side = s;// Your code here!
    Cell** universe = new Cell*[side];
    for(int i = 0; i < side; i++)
        universe[i] = new Cell[side];
}

Conway::~Conway()
{
    if (universe !=NULL)
    {
        
        for (int i = 0; i < side; i++)
        {
            delete [] universe[i];
        }
        delete [] universe;
    }
// Your code here!
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
            int grid_x = (i+side)%side;
            int grid_y= ji+side)%side;
            if ((universe[grid_x][grid_y].get_alive()) == true)
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
