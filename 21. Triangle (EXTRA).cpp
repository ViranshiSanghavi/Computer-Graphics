#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Coordinates of the triangle vertices
    int x1 = 100, y1 = 200;
    int x2 = 300, y2 = 200;
    int x3 = 200, y3 = 50;

    // Draw lines connecting the vertices to form a triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    getch();
    closegraph();
    return 0;
}
