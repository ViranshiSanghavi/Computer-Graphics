#include<conio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm,xcen,ycen;
	initgraph(&gd,&gm,"C:\tc\\bgi");
	xcen=getmaxx()/2;
	ycen=getmaxy()/2;
	circle(xcen,ycen,90);
	circle(xcen,ycen,50);
	circle(xcen,ycen,120);
	circle(xcen,ycen,170);
	circle(xcen,ycen,200);
	circle(xcen,ycen,230);
	circle(xcen,ycen,300);
	getch();
	closegraph();
}
