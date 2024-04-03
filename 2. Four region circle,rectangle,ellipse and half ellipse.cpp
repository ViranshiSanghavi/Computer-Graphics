#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm,xcen,ycen;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	xcen=getmaxx()/2;
	ycen=getmaxy()/2;
	line(xcen,0,xcen,getmaxy());
	line(0,ycen,getmaxx(),ycen);
	circle(xcen/2,ycen/2,70);
	rectangle(xcen+50,ycen-200,xcen+300,ycen-50);
	ellipse(150,350,200,200,120,70);
	ellipse(getmaxy()+20,ycen+110,0,180,80,40);
	getch();
	closegraph();
}
