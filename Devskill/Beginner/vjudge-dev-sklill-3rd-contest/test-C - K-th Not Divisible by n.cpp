#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    ll n,k;

    while(t--)
    {
        cin>>n>>k;

        string currString(n, 'a');

        for(ll i = n-2; i>=0; i--)
        {
            ll numTimeBstays=n-1-i;
           // cout<<numTimeBstays<<endl;
            if(k <= numTimeBstays)
            {
                currString[i]='b';
                currString[n-k]='b';
                cout<<currString<<endl;
                break;
            }
            k-=numTimeBstays;
        }

    }

    return 0;
}



