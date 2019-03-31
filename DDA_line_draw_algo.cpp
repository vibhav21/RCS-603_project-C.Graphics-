#include<iostream>
#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main()
{  int x,y,x0,y0,x1,y1;
	float dx,dy;
	int length;
       int gd = DETECT, gm;

    // Initialize graphics function
    initgraph (&gd, &gm, "");

	cout<<"Enter coordinates";
	cin>>x0>>y0;
	cin>>x1>>y1;
	dx=x1=x0;
	dy=y1-y0;
	if(abs(dx)>=abs(dy))
	{
		length=abs(dx);

	}
	else
		length=abs(dy);
	x=x0;
	y=y0;
	int i=0;
	dx=(dx/length);
	dy=(dy/length);
	while(i<length)
	{putpixel(x,y,RED);
		x=x+dx;
		y=y+dy;
		i=i+1;
	}
	getch();
return 0;

}
