#include<stdio.h>
 #include<conio.h>
 #include<graphics.h>
 #include<dos.h>
 void boundary (int x, int y, int f_color, int b_color)
{
    if(getpixel(x,y)!=b_color&&getpixel(x,y)!=f_color)
    {
	    putpixel(x,y,f_color);
        delay(5);
        boundary(x+1,y,f_color,b_color);
        boundary (x,y+1,f_color,b_color);
        boundary (x-1,y,f_color,b_color);
        boundary (x,y-1,f_color,b_color);
        boundary (x+1,y+1,f_color,b_color);
        boundary(x+1,y-1,f_color,b_color);
        boundary(x-1,y+1,f_color,b_color);
        boundary(x-1,y-1,f_color,b_color);
    }
}
int main()
{
    int gm, gd=DETECT;
    initgraph(&gd,&gm, "c:/tc/bgi");
    rectangle(50,50,100,100);
    boundary (55,55,14,15);
    getch();
    closegraph();
}


