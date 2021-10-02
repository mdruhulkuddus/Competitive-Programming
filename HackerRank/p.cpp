#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,x,v;
    double v2,t,g=9.8;
    cin>>h>>x>>v;
    t=sqrt(2*h/g);  //h=1/2*f*t^2
    v2=x/t;

    if(v==v2) cout<<"YES"<<endl;
    else cout<<setprecision(2)<<fixed<<"NO "<<v2-v<<" m/s"<<endl;
    return 0;
}


