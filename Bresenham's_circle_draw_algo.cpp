#include<graphic.h>
using namespace std;
 int main()
{ int gd = DETECT, gm; 
  
    // Initialize graphics function 
    initgraph (&gd, &gm, "");    
    int r;
    int x0,y0;
    cin>>x0>>y0;
    float dk=3-2*r;
    int x=0;
    int y=r;
    do{putpixel(x0+x,y0-y,RED);
        putpixel(x0-y,y0+x,RED);
        putpixel(x0+x,y0+y,RED);
        putpixel(x0+y,y0+x,RED);
        putpixel(x0-x,y0+y,RED);
        putpixel(x0-y,y0+x,RED);
        putpixel(x0-x,y0-y,RED);
        putpixel(x0,y0,RED);
        
        if(dk<0)
        {
            dk=dk+(4*x)+6;
        }
        else
        {dk=dk+4*x-4*y+10;
            y=y-1;

        }
        x=x+1;
    }while(x<y)