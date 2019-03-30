#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int i,j,a,x,y,x1,y1,x2,y2,n,x4,y4,Sx,Sy;
float x3,y3;
clrscr();
printf("enter initial coordinates:");
scanf("%d%d",&x,&y);
printf("enter 1,2,3 for translation,rotation and scaling");
scanf("%d",&n);
switch(n)
{
case 1:
{
printf("enter the translation coordinates");
scanf("%d%d",&x1,&y1);
x2=x1+x;
y2=y1+y;
printf("%d %d",x2,y2);
break;
}
case 2:
{
printf("enter the angle:");
scanf("%d",&a);
x3=(x*cos(double(a)))-(y*sin(double(a)));
y3=(x*sin(double(a)))+(y*cos(double(a)));
printf("rotation coordinates=%f %f",x3,y3);
break;
}
case 3:
{
printf("enter the scaling values:");
scanf("%d%d",&Sx,&Sy);
x4=x*Sx;
y4=y*Sy;
printf("coordinates after scaling=%d %d",x4,y4);
break;
}
}
getch();
}