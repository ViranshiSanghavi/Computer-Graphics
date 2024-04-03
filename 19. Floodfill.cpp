#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void flood(int x, int y, int newcolor, int oldcolor)
{
  if(getpixel(x,y)==oldcolor)
  {
    putpixel(x,y,newcolor);
    delay(5);
    flood(x+1,y,newcolor, oldcolor);
    flood(x,y+1, newcolor,oldcolor);
    flood(x-1,y,newcolor,oldcolor);
    flood(x,y-1, newcolor,oldcolor);
   }
}
int main()
{
    int gm,gd=DETECT;
    initgraph(&gd,&gm, "c:/tc/bgi");
    setcolor (6);
    rectangle(250,200,300,250);
    flood (251,201,15,0);
    getch(); 
    closegraph();
}


