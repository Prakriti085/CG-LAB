#include <graphics.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    int fd = DETECT, gm;
    int x1, y1, x2, y2, steps, k;
    float x_incr, y_incr, x, y, dx, dy;

    printf("enter x1 y1 ");
    scanf("%d %d", &x1, &y1);

    printf("enter x2 y2 ");
    scanf("%d %d", &x2, &y2);

    initgraph(&fd, &gm, "");

    dx = x2 - x1;
    dy = y2 - y1;

    if (abs(dx) > abs(dy))
    {
        steps = abs(dx);
    }
    else
    {
        steps = abs(dy);
    }

    x_incr = dx / steps;
    y_incr = dy / steps;

    x = x1;
    y = y1;

    putpixel((int)x, (int)y, WHITE);

    for (k = 1; k <= steps; k++)
    {
        x += x_incr;
        y += y_incr;
        putpixel((int)x, (int)y, WHITE);
    }

    getch();
    closegraph();
    return 0;
}
