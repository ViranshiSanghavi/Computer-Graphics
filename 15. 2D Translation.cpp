#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
	int gd=DETECT,gm;
	int x2,y2,x1,y1,tx,ty;
	printf("Line Before Translation");
	printf("Enter the 2 line end points:");
	printf("x1,y1,x2,y2:");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	initgraph(&gd,&gm,"c:\\tc\\bgi");
    line(x1,y1,x2,y2);
	printf("Enter translation coordinates:");
	printf("tx,ty");
	scanf("%d %d",&tx,&ty);
	x1=x1+tx;
	y1=y1+ty;
	x2=x2+tx;
	y2=y2+ty;
	printf("Line after translation");
	line(x1,y1,x2,y2);
	getch();
	closegraph();
}


