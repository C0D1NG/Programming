#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
# define Round(a) ((int)a+0.5)
void lineDDA(int x1,int y1,int x2,int y2)
{
	int dx=x2-x1;
	int dy=y2-y1;
	int steps,k,i;
	float x_increment,y_increment,x=x1,y=y1;

	if(abs(dx)>abs(dy))
		steps=abs(dx);
	else
		steps=abs(dy);
	x_increment=dx/(float)steps;
	y_increment=dy/(float)steps;
	putpixel(Round(x),Round(y),WHITE);
	for(i=0;i<steps;i++)
	{
		x+=x_increment;
		y+=y_increment;
		putpixel(Round(x),Round(y),WHITE);
	}
}
int main()//main code
{
 	int gd = DETECT, gm;
 	initgraph (&gd, &gm, "C:\\TURBOC3\\BGI");
	lineDDA(2, 2, 140, 160);
 	getch();
 	return 0;
}
