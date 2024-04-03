#include<stdio.h>  
#include<graphics.h>  
int main()  {
    int x1, y1, x2, y2;
    int x, y, dx, dy, pk;
    int i = 0;
    int gd = DETECT, gm;  
    printf("Enter co-ordinates of first point: ");  
    scanf("%d %d", &x1, &y1);  
    printf("Enter co-ordinates of second point: ");  
    scanf("%d %d", &x2, &y2);  
    initgraph(&gd, &gm, "c:\\tc\\bgi"); 
    dx = x2 - x1;  
    dy = y2 - y1;  
    x = x1;  
    y = y1;  
    putpixel(x, y, GREEN);
    pk = 2 * dy - dx;
    while (i <= dx) {
        if (pk < 0) {
            y = y;
            pk = pk + 2 * dy;
        } 
        if (pk >= 0) {
            x = x + 1;
            y = y + 1;
            pk = pk + 2 * dy - 2 * dx;
        }  
        putpixel(x, y, CYAN); 
    }
    getch();
    closegraph();
}



