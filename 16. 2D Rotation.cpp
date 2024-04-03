#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void DrawTriangle(int x1,int y1,int x2,int y2,int x3,int y3);
void RotateTriangle(int x1,int y1,int x2,int y2,int x3,int y3,float angle);
int main()
{
	int gd=DETECT,gm;
	int x1,y1,x2,y2,x3,y3;
	float angle;
	initgraph(&gd,&gm,"");
	printf("Enter the 1st point for the triangle(x1,y1):");
	scanf("%d %d",&x1,&y1);
	printf("Enter the 2nd point for the triangle(x2,y2):");
	scanf("%d %d",&x2,&y2);
	printf("Enter the 3rd point for the triangle(x3,y3):");
	scanf("%d %d",&x3,&y3);
	DrawTriangle(x1,y1,x2,y2,x3,y3);
	printf("Enter the angle for rotation(in degrees):");
	scanf("%f",&angle);
	RotateTriangle(x1,y1,x2,y2,x3,y3,angle);
	getch();
	closegraph();
	return 0;
}
void DrawTriangle(int x1,int y1,int x2,int y2,int x3,int y3)
{
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
}
void RotateTriangle(int x1,int y1,int x2,int y2,int x3,int y3,float angle)
{
	int p=x2,q=y2;
	float radianAngle=(angle*3.44)/180.0;
	int a1=p+(x1-p)*cos(radianAngle)-(y1-q)*sin(radianAngle);
	int b1=q+(x1-p)*sin(radianAngle)+(y1-q)*cos(radianAngle);
	int a2=p+(x2-p)*cos(radianAngle)-(y2-q)*sin(radianAngle);
	int b2=q+(x2-p)*sin(radianAngle)+(y2-q)*cos(radianAngle);
	int a3=p+(x3-p)*cos(radianAngle)-(y3-q)*sin(radianAngle);
	int b3=q+(x3-p)*sin(radianAngle)+(y3-q)*cos(radianAngle);
	setcolor(YELLOW);
	DrawTriangle(a1,b1,a2,b2,a3,b3);
}


