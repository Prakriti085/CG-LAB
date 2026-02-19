#include <graphics.h>
#include <iostream>

using namespace std;

void flood(int x, int y, int fill_col, int old_col);

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\MinGW\\lib\\libbgi.a");

    rectangle(50, 50, 100, 100);

    int old_color = getpixel(55, 55);

    flood(55, 55, RED, old_color);

    getch();
    closegraph();

    return 0;
}

void flood(int x, int y, int fill_col, int old_col)
{
    if (getpixel(x, y) == old_col)
    {
        putpixel(x, y, fill_col);

        // 4-direction
        flood(x + 1, y, fill_col, old_col);
        flood(x - 1, y, fill_col, old_col);
        flood(x, y + 1, fill_col, old_col);
        flood(x, y - 1, fill_col, old_col);

        // 4 diagonal directions
        flood(x + 1, y - 1, fill_col, old_col);
        flood(x + 1, y + 1, fill_col, old_col);
        flood(x - 1, y - 1, fill_col, old_col);
        flood(x - 1, y + 1, fill_col, old_col);
    }
}



