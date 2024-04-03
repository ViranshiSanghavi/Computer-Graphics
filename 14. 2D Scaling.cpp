#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
	int gd=DETECT,gm;
	int x2,y2,x1,y1,sx,sy;
	printf("Line Before Scaling");
	printf("Enter the 2 line end points:");
	printf("x1,y1,x2,y2:");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	initgraph(&gd,&gm,"c:\\tc\\bgi");
    line(x1,y1,x2,y2);
	printf("Enter translation coordinates:");
	printf("sx,sy");
	scanf("%d %d",&sx,&sy);
	x1=x1*sx;
	y1=y1*sy;
	x2=x2*sx;
	y2=y2*sy;
	printf("Line after Scaling");
	line(x1,y1,x2,y2);
	getch();
	closegraph();
}


