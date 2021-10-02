#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,A,B;
        cin>>a>>b;

        A=(a+b)/2;
        B=(a-b)/2;

        if(a<b || (a+b)%2 != 0) cout<<"impossible"<<"\n";
        else cout<<A<<" "<<B<<"\n";

    }

    return 0;
}


