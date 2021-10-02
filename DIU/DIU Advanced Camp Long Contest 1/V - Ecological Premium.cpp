#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,a,b,c,sum=0;
        cin>>n;
        for(int i = 0; i < n; i++)
        {
            cin>>a>>b>>c;
            sum+=a*c;
        }
        cout<<sum<<"\n";
    }
    return 0;
}




