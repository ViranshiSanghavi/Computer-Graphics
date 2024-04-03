#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main(){        
               int x,y,x_mid,y_mid,radius,dp;
	int g_mode,g_driver=DETECT;
	printf("********MID POINT Circle drawing algorithm*********");
	printf("\nEnter the coordinates=");
	scanf("%d%d",&x_mid,&y_mid);
	printf("\nNow Enter the radius=");
	scanf("%d",&radius);
	initgraph(&g_driver,&g_mode,"c:\\tc\\bgi");
	x=0;
	y=radius;
	dp=1-radius;
	do{        putpixel(x_mid+x,y_mid+y,YELLOW);
                            putpixel(x_mid+y,y_mid+x,GREEN);
		putpixel(x_mid-y,y_mid+x,BLUE);
		putpixel(x_mid-x,y_mid+y,CYAN);
		putpixel(x_mid-x,y_mid-y,WHITE);
		putpixel(x_mid-y,y_mid-x,LIGHTGRAY);
		putpixel(x_mid+y,y_mid-x,LIGHTBLUE);
		putpixel(x_mid+x,y_mid-y,RED);	
		if(dp<0){
			dp+=(2*x)+1;
				}else{  
                                                                       y=y-1;
					dp+=(2*x)-(2*y)+1;
				          }     x=x+1;
	}     while(y>x);
	getch();
	}
	

