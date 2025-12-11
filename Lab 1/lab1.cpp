#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
int main()
{
    int gm, x, y, gd = DETECT, i;
    // int midx, midy;
    int stangle = 45, endangle = 50;
    int radius = 50;
    
    char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file

    initgraph(&gd, &gm, data);
setcolor(LIGHTGREEN);
line(100,200,300,400);
setcolor(CYAN);
line(400,600,200,100);
setcolor(RED);
line(500,300,300,400);

    getch();
    closegraph();

    return 0;
}


