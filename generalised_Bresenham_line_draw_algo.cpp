#include<iostream.h>
#include<bihts/stdc++.h>
#include<graphic.h>
using namespace std;
/* for slope <=1 */
int sign(int x);
int main()
{  int swap;
	int gd = DETECT, gm; 
  
    // Initialize graphics function 
    initgraph (&gd, &gm, "");    
    int x0,y0,x1,y1;
    cin>>x0>>y0;
    cin>>x1>>y1;
    float dx,dy;
    dx=abs(x1-x0);
    dy=abs(y1-y0);
    float x=x0;
    float y=y0;
    s1=sign(x1-x0);
    s2=sign(y1-y0);
    if(dy>dx)
    {
    	int temp;
    	temp=dy;
    	dy=dx;
    	dx=temp;
    	swap=1;
    }
    else
    swap=0;
int n=1;
float pk=2*dy-dx;
while(n<=dx)
{
	if(pk>=0)
	{
		x=x+s1;
		y=y+s2;
		pk=pk+2*dy-2*dx;
	}
	else if(swap==1)
	{
		y=y+s2;
	}
	else
	{
		x=x+s1;
	}
	pk=pk+2*dy;
	putpixel(x,y,RED);
	n=n+1;

}
    return 0;
   } 
   int sign(int x)
   {
   	return (x/abs(x));
   }