#include<iostream.h>
#include<bihts/stdc++.h>
#include<graphic.h>
using namespace std;
/* for slope <=1 */
int main()
{  int gd = DETECT, gm; 
  
    // Initialize graphics function 
    initgraph (&gd, &gm, "");    
    int x0,y0,x1,y1;
    cin>>x0>>y0;
    cin>>x1>>y1;
    float dx,dy;
    dx=x1-x0;
    dy=y1-y0;
    float x=x0;
    float y=y0;
    float pk=2*dy-dx;
    for(int k=0;k<dx;k++)
    {
    	if(pk<0)
    	{x=x+1;
    		putpixel(x,y,RED);
    	pk=pk+2*dy;


    	}
    	else
    	{
    		x=x+1;
    		y=y+1;
    		putpixel(x,y,BLUE);
    		pk=pk+(2*dy)-(2*dx);
    	}

    }
return 0;
}