#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b)
{
    if(b==0) return a;
    return gcd(b, a%b);

}
ll countDivisorGCD(ll n)
{
    int cnt = 0;
    for(ll i = 1; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            cnt++;
            if(i != n/i)
                cnt++;
        }
    }
    return cnt;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll a,b;
        scanf("%lld%lld",&a,&b);
        //gcd(a,b);
        printf("%lld\n",countDivisorGCD(gcd(a,b)));
    }

    return 0;
}
