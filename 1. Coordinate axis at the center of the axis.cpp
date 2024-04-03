#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm,xcen,ycen;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	xcen=getmaxx()/2;
	ycen=getmaxy()/2;
	line(xcen,0,xcen,getmaxy());
	line(0,ycen,getmaxx(),ycen);
	getch();
	closegraph();
}
