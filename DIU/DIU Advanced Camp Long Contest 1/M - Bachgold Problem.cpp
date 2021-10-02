#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cout<<t/2<<"\n";

    if(t%2 == 0)
    {
        int n =0;
        while(n != t)
        {
            cout<< 2 <<" ";
            n+=2;
        }
        cout<<"\n";
    }
    else
    {
        t-=3;
        int n =0;
        while(n != t)
        {
            cout<< 2 <<" ";
            n+=2;
        }
        cout<< 3 <<"\n";
    }

    return 0;
}
