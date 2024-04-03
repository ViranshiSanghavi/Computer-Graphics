#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void midellipse(int, int, int, int);
void ellipsepoints(int, int, int, int);
int main() {
    int gd = DETECT, gm;
    int xc, yc, rx, ry;
    initgraph(&gd, &gm, "c:\\tc\\bgi");
    printf("Enter the Coordinates:");
    scanf("%d %d %d %d", &xc, &yc, &rx, &ry);
    midellipse(xc, yc, rx, ry);
    getch();
    closegraph();
    return 0;
}
void midellipse(int xc, int yc, int rx, int ry) {
    double ry2 = ry * ry;
    double rx2 = rx * rx;
    int x = 0, y = ry;
    double p = ry2 - ry2 * ry + (0.25) * rx2;
    while ((2 * ry2 * x) < (2 * rx2 * y)) {
        if (p < 0) {
            p += 2 * ry2 * x + 2 * ry2 + ry2;
        } else {
            p += 2 * ry2 * x + 2 * ry2 + ry2 - 2 * rx2 * y + 2 * rx2;
            y--;
        }
        x++;
        ellipsepoints(xc, yc, x, y);
    }
    p = ry2 * (x * x + x + 0.25) + rx2 * (y * y - 2 * y + 1) - rx2 * ry2;
    while (y > 0) {
        if (p > 0) {
            p += -2 * rx2 * y - 2 * rx2 + rx2;
        } else {
            p += -2 * rx2 * y - 2 * rx2 + rx2 + 2 * ry2 * x + 2 * ry2;
            x++;
        }
        y--;
        ellipsepoints(xc, yc, x, y);
    }
}
void ellipsepoints(int xc, int yc, int x, int y) {
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
}



