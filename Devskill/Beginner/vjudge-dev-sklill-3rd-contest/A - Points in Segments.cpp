#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll lowerBound(vector<ll>&v, int val)
{

    int L=0;
    int R=v.size();

    while(L<R)
    {
        int M = L+(R-L)/2;
        if(v[M]<val)
        {
            L=M+1;
        }
        else R=M;
    }
    return L;
}
ll UpperBound(vector<ll>&v, int val)
{

    int L=0;
    int R=v.size();

    while(L<R)
    {
        int M = L+(R-L)/2;
        if(v[M]<=val)
        {
            L=M+1;
        }
        else R=M;
    }
    return L;
}

int main()
{
    int TC, t=1;
    cin>>TC;

    while(TC--)
    {
        ll n, q, num, qLower, qUpper;
        vector<ll>v;
        cin>>n>>q;

        for(int i =0; i<n; i++)
        {
            scanf("%lld",&num);
            //cin>>num;
            v.push_back(num);
        }
        printf("Case %d:\n",t++);
        for(int i = 0; i<q; i++)
        {
            //cin>>qLower>>qUpper;
            scanf("%lld%lld",&qLower, &qUpper);
            ll lower= lowerBound(v, qLower);
            ll upper= UpperBound(v,qUpper);
            printf("%lld\n",upper-lower);
            //cout<<upper-lower<<"\n";
        }



    }
}
