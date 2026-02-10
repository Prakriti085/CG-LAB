#include <stdio.h>
#include <graphics.h>
#include <math.h>

void plotEllipsePoints(int xc, int yc, int x, int y);

int main()
{
    int xc, yc, rx, ry;
    int gd = DETECT, gm;

    char data[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gd, &gm, data);

    printf("Enter center (xc yc): ");
    scanf("%d %d", &xc, &yc);

    printf("Enter rx and ry: ");
    scanf("%d %d", &rx, &ry);

    int x = 0;
    int y = ry;

    long rx2 = rx * rx;
    long ry2 = ry * ry;

    long p1 = ry2 - (rx2 * ry) + (rx2 / 4);

    // Region 1
    while ((2 * ry2 * x) <= (2 * rx2 * y))
    {
        plotEllipsePoints(xc, yc, x, y);

        x++;
        if (p1 < 0)
        {
            p1 += 2 * ry2 * x + ry2;
        }
        else
        {
            y--;
            p1 += 2 * ry2 * x - 2 * rx2 * y + ry2;
        }

        delay(20);
    }

    // Region 2
    long p2 = (ry2 * (x + 0.5) * (x + 0.5)) +
              (rx2 * (y - 1) * (y - 1)) -
              (rx2 * ry2);

    while (y >= 0)
    {
        plotEllipsePoints(xc, yc, x, y);

        y--;
        if (p2 > 0)
        {
            p2 += rx2 - 2 * rx2 * y;
        }
        else
        {
            x++;
            p2 += 2 * ry2 * x - 2 * rx2 * y + rx2;
        }

        delay(20);
    }

    getch();
    closegraph();
    return 0;
}

void plotEllipsePoints(int xc, int yc, int x, int y)
{
    putpixel(xc + x, yc + y, GREEN);
    putpixel(xc - x, yc + y, GREEN);
    putpixel(xc + x, yc - y, GREEN);
    putpixel(xc - x, yc - y, GREEN);
}
