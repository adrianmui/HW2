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
    if (universe != NULL)
    {
        for (int i=0; i< side; i++)
        {
            delete [] universe[i];
        }
    }
    delete universe;
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
    for (int i = -1; i <= 1; i++)
    {
        for (int j = -1; j <= 1; j++)
        {
            int grid_x = (i+x+side)%side;
            int grid_y= (j+y+side)%side;
            if (universe[grid_x][grid_y].get_alive() == true)
            {
                if ((i != 0) && (j != 0)) // excludes center
                {
                    count++;
                }
            }
        }
    }
    return count;
}
