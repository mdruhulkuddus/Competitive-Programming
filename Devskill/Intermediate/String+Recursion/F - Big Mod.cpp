#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000

ll mod_expo(ll a, ll b, int MOD)
{
    if(b == 0) return 1LL;
    if(b % 2 == 0)
    {
        ll half_expo = mod_expo(a, b/2, MOD) % MOD; /// if a is large, here do a%MOD in fn re-call parameter
        return (half_expo * half_expo) % MOD;
    }
    return ((a%MOD) * mod_expo(a, b-1, MOD)) % MOD; // here also ""
}

int main()
{
    ll B, P, R, M;
    while(scanf("%lld%lld%lld", &B, &P, &M) != EOF)
    {
        R = mod_expo(B, P, M);
        printf("%lld\n", R);
    }
    return 0;
}
