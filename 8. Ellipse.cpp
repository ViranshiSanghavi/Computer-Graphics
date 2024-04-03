#include<conio.h>
#include<graphics.h>

int main()
{
	int gd=DETECT, gm,xcen,ycen;
	initgraph(&gd,&gm,"c:\tc\\bgi");
    xcen=getmaxx()/2;
    ycen=getmaxy()/2;
    ellipse(xcen,ycen,200,200,120,70);
	getch();
	closegraph();
}


