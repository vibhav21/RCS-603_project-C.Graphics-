#include<graphic.h>
using namespace std;
 int main()
{ int gd = DETECT, gm; 
  
    // Initialize graphics function 
    initgraph (&gd, &gm, "");    
    float r;
    cin>>r;
    float x=0;
    float y=r;
    float d=1-r;
    while(y>=x)
    {
        cout<<x<<","<<y; //putpixel(x,y,RED);
        if(d<=0)
        {
            d=d+(2*x)+3;
            x=x+1;
        }
        else
        {
            d=d+(2*x)-(2*y)+5;
            x+x+1;
            y=y-1;
        }
    }

   return 0;
   } 