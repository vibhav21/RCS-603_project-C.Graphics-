#include<iostream.h>
#include<math.h>
#include<li.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#define PI 3.14159265


int main()
{
  int gdriver = DETECT, gmode, errorcode;
   int midx, midy;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");

   int x,y,z;
   cout<<"Enter the coordinates\n";
   cin>>x>>y>>z;
   cout<<"Press 1 for translation\nPress 2 for rotation\nPress 3 for scaling\n";
   int choice;
   cin>>choice;
   switch(choice)
   {case 1:
   int dx,dy,dz;
   cout<<"Enter translation along x-axis: ";
   cin>>dx;
   cout<<"Enter translation along y-axis: ";
   cin>>dy;
   cout<<"Enter translation along z-axis: ";
   cin>>dz;
   x+=dx;
   y+=dy;
   z+=dz;
   cout<<"Translated Point is now : ("<<x<<","<<y<<","<<z<<")\n";
   break;
   case 2:
   cout<<"Press 1 for rotation along x-axis\nPress 2 for rotation along y-axis\nPress 3 for rotation along z-axis\n";
   int axis;
   cin>>axis;
   cout<<"Enter the angle: ";
   double angle;
   cin>>angle;
   angle=(1.0*angle*PI)/180;
   if(angle>360)
   {angle=int(angle)%360;}
   if(axis==1)
   {int temp=y;

    y=y*cos(angle) - z*sin(angle);
    z=temp*sin(angle) + z*cos(angle);
   }
   else if(axis==2)
   {int temp=x;
   x=x*cos(angle) - z*sin(angle);
   z=temp*sin(angle) + z*cos(angle);
   }
   else if(axis==3)
   { int temp=x;
     x=x*cos(angle)-y*sin(angle);
     y=temp*sin(angle) + y*cos(angle);

   }

   else cout<<"Wrong choice\n";
//   cout<<"\n"<<angle;
   cout<<"Translated Point is now : ("<<x<<","<<y<<","<<z<<")\n";
   break;
   case 3:
   float sx,sy,sz;
   cout<<"Enter Scaling in X-Axis\n";
   cin>>sx;
   cout<<"Enter Scaling in Y-Axis\n";
   cin>>sy;
   cout<<"Enter Scaling in Z-Axis\n";
   cin>>sz;
   x*=sx;
   y*=sy;
   z*=sz;
//   cout<<z<<" "<<sz;
   cout<<"Translated Point is now : ("<<x<<","<<y<<","<<z<<")\n";
   break;
   default:
   cout<<"Wrong Choice\n";
   }
   getch();
   return 0;

	}