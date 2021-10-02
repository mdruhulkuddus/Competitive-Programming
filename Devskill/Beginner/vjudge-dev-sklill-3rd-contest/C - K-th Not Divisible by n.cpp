#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll BSmethodSolv(ll n, ll k)
{
    ll L=1;            //start from 1
    ll R=INT_MAX;      // or let ll R=1e18;//10 power 18

    while(L<R)        //if L==R or L>R condition false then loop terminate
    {
        ll M=L+(R-L)/2;                     //mid without overflow issue
        ll cnt_not_divisible_series_mem=M-(M/n); //count non divisible number from mid range
        if(cnt_not_divisible_series_mem<k)
        {
            L=M+1;
        }
        else
        {
            R=M;
        }

    }
    return L; //return R; // same , because we terminate when l==r, so l r value same

}
int main()
{
    int t;
    cin>>t;
    ll n,k;
    while(t--)
    {
        cin>>n>>k;
        cout<<BSmethodSolv(n,k)<<"\n";
    }

}
