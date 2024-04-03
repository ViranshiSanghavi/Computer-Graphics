#include<conio.h>
#include<graphics.h>

int main()
{
	int gd=DETECT, gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	
   line(200,150,400,150);
   line(200,150,200,250);
   line(200,250,400,250);
   line(400,250,400,150);
	getch();
	closegraph();
}

