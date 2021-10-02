#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int d,x,y,z;
        cin>>d>>x>>y>>z;
        x*=7;
        int remainDays=7-d;
        y*=d;
        z*=remainDays;

       // cout<<x<<" "<<y+z<<"\n";

        if(x>(y+z)) cout<<x<<"\n";
        else cout<<(y+z)<<"\n";
    }

    return 0;
}
