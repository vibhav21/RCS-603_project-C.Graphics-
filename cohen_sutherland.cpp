#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{float x,y,x1,x2,y1,y2,x_min,x_max,y_min,y_max,dx,dy,t1=0,t2=1;
int flag=0;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x_min>>y_min;
    cin>>x_max>>y_max;
    dx=x2-x1;
    dy=y2-y1;
    float slope=(dy/dx);
    float p[5],q[5];
    if((x_min<x1 && x1<x_max) &&(y_max<y1))
    {   p[1]=1;
        p[2]=0;
        p[3]=0;
        p[4]=0;
    }
    if((x_min<x1 && x1<x_max)&&(y_min<y1 && y1<y_max))
    {   p[1]=0;
        p[2]=0;
        p[3]=0;
        p[4]=0;
        
    }
    if((x_min<x1 && x1<x_max)&&(y_min>y1))
    {   p[1]=0;
        p[2]=1;
        p[3]=0;
        p[4]=0;
        
    }
    if((x_max<x1)&&(y_max<y1))
    {   p[1]=1;
        p[2]=0;
        p[3]=1;
        p[4]=0;
        
    }
    if((x_max<x1)&&(y_min<y1 && y1<y_max ))
    {   p[1]=0;
        p[2]=0;
        p[3]=1;
        p[4]=0;
        
    }
    if((x_max<x1)&&(y_min>y1 ))
    {   p[1]=0;
        p[2]=1;
        p[3]=1;
        p[4]=0;
        
    }
    if((x_min>x1)&&(y_max<y1))
    {   p[1]=1;
        p[2]=0;
        p[3]=0;
        p[4]=1;
        
    }
    
    if((x_min>x1)&&(y_min<y1 && y1<y_max))
    {   p[1]=0;
        p[2]=0;
        p[3]=0;
        p[4]=1;
        
    }
    if((x_min>x1)&&(y_min>y1 ))
    {   p[1]=0;
        p[2]=1;
        p[3]=0;
        p[4]=1;
        
    }
    
        if((x_min<x2 && x2<x_max) &&(y_max<y2))
    {   q[1]=1;
        q[2]=0;
        q[3]=0;
        q[4]=0;
    }
    if((x_min<x2 && x2<x_max)&&(y_min<y2 && y2<y_max))
    {   q[1]=0;
        q[2]=0;
        q[3]=0;
        q[4]=0;
        
    }
    if((x_min<x2 && x2<x_max)&&(y_min>y2))
    {   q[1]=0;
        q[2]=1;
        q[3]=0;
        q[4]=0;
        
    }
    if((x_max<x2)&&(y_max<y2))
    {   q[1]=1;
        q[2]=0;
        q[3]=1;
        q[4]=0;
        
    }
    if((x_max<x2)&&(y_min<y2 && y2<y_max ))
    {   q[1]=0;
        q[2]=0;
        q[3]=1;
        q[4]=0;
        
    }
    if((x_max<x2)&&(y_min>y2 ))
    {   q[1]=0;
        q[2]=1;
        q[3]=1;
        q[4]=0;
        
    }
    if((x_min>x2)&&(y_max<y2))
    {   q[1]=1;
        q[2]=0;
        q[3]=0;
        q[4]=1;
        
    }
    
    if((x_min>x2)&&(y_min<y2 && y2<y_max))
    {   q[1]=0;
        q[2]=0;
        q[3]=0;
        q[4]=1;
        
    }
    if((x_min>x2)&&(y_min>y2 ))
    {   q[1]=0;
        q[2]=1;
        q[3]=0;
        q[4]=1;
        
    }
    for(int i=1;i<5;i++)
    {
        if(p[i]==q[i] && q[i]==0)
        {
            continue;
        }
        else 
        {flag=1;
            break;
        }
        
    }
    if(flag==0)
    {
        cout<<"LINE IS TOTALLY INSIDE CLIPPING BOX";
    }
    for(int i=1;i<5;i++)
    {
        if((p[i]&&q[i])==1)
        {
            cout<<"LINE CANNOT BE CLIPPED";
            return 0;
        }
        
    }
     if(p[1]==0 && p[2]==0 && p[2]==0 && p[2]==0)
        {
            if(q[1]==1)
            {
                y=y_max;
                x= x2+((1/slope) *(y_max-y2));
            }
            else if (q[2]==1)
            {
                y=y_min;
                x= x2+((1/slope) *(y_min-y2)); 
            }
            else if (q[3]==1)
            {
                x=x_max;
                y= y2+((slope) *(x_max-x2)); 
            }
            else if (q[4]==1)
            {
                x=x_min;
                y= y2+((slope) *(x_min-x2)); 
            }

        }
        else
        {if(p[1]==1)
            {
                y=y_max;
                x= x1+((1/slope) *(y_max-y1));
            }
            else if (p[2]==1)
            {
                y=y_min;
                x= x1+((1/slope) *(y_min-y1)); 
            }
            else if (p[3]==1)
            {
                x=x_max;
                y= y1+((slope) *(x_max-x1)); 
            }
            else if (p[4]==1)
            {
                x=x_min;
                y= y1+((slope) *(x_min-x1)); 
            }
        }
    int    x_int=(int)x;
     int   y_int=(int)y;
        cout<<"("<<x_int<<","<<y_int<<")";
        return 0;
    }