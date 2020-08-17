#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<iomanip>
using namespace std;

int main()
{
    double x,y,c;
    while(scanf("%lf %lf %lf",&x,&y,&c)==3)
    {
        double lw=0.0,hi,mid;
        hi=min(x,y);

        int cnt=100;
        while(cnt--)
        {
            mid=(lw+hi)/2.0;
            double h1=sqrt((y*y)-(mid*mid));
            double h2=sqrt((x*x)-(mid*mid));
            double z=(h1*h2)/(h1+h2);

            if(z<=c) hi=mid;
            else lw=mid;
            //cout<<"lw : "<<lw<<endl;
        }
       // printf("%0.3f \n",lw);
    cout<<fixed<<setprecision(3)<<lw<<endl;
    }
    return 0;
}
