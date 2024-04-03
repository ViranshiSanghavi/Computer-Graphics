#include<conio.h>
#include<math.h>
#include<graphics.h>
int main()
{
	int driver=DETECT,mode;
	initgraph(&driver,&mode,"C://TC//BGI");
	circle(339,220,150);
	circle(260,180,20);
	circle(405,180,20);
	
	line(330,180,310,230);
	line(310,230,350,230);
	line(330,180,350,230);
	
	arc(210,200,100,214,45);
	arc(470,210,290,76,45);
	arc(335,250,199,342,80);
	
	line(259,275,410,275);
	getch();
	closegraph();
}
