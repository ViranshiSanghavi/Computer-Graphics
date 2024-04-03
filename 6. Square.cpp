#include<conio.h>
#include<graphics.h>

int main()
{
	int gd=DETECT, gm,xcen,ycen;
	initgraph(&gd,&gm,"c:\tc\\bgi");
	xcen=getmaxx()/2;
    ycen=getmaxy()/2;
    line(xcen-100,ycen-100,xcen+100,ycen-100);
    line(xcen-100,ycen+100,xcen+100,ycen+100);
    line(xcen-100,ycen-100,xcen-100,ycen+100);
    line(xcen+100,ycen-100,xcen+100,ycen+100);
	getch();
	closegraph();
}
