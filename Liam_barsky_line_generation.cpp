#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{float x1,x2,y1,y2,x_min,x_max,y_min,y_max,dx,dy,t1=0,t2=1;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x_min>>y_min;
    cin>>x_max>>y_max;
    dx=x2-x1;
    dy=y2-y1;
    float p[5],q[5];
    p[1]=-dx;
    p[2]=dx;
    p[3]=-dy;
    p[4]=dy;
    q[1]=x1 - x_min;
    q[2]=x_max - x1;
    q[3]=y1 - y_min;
    q[4]= y_max - y1;
    for(int i=1;i<5;i++)
    {
        if(p[i]==0 && q[i]<0 )
        {
            cout<<"NO INTERSECTION";
            return 0;
        }
        else if(p[i]<0)
        {
            t1=max(t1,(q[i]/p[i]));
            
        }
        else
        {
            t2=min(t2,(q[i]/p[i]));
        }
    }
    float x_inter1=x1+(t1*dx);
    float y_inter1=y1+(t1*dy);
    float x_inter2=x1+(t2*dx);
    float y_inter2=x1+(t2*dy);
    cout<<"("<<x_inter1<<","<<y_inter1<<")"<<endl;        
    cout<<"("<<x_inter2<<","<<y_inter2<<")"<<endl;
return 0;
}