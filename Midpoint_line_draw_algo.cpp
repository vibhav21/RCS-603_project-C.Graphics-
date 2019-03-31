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
    int d=dy-(dx/2);
    float x=x0;
    float y=y0;
   cout<<x<<","<<y;   // putpixel(x,y,RED);
   while(x<x1)
   {
    x++;
    if(d<0)
    {
        d=d+dy;
    }
    else
    {
        d=d+(dy-dx);
        y++;
    }
    cout<<x<<","<<y<<endl;
    }
       return 0;
   }
