#include<bits/stdc++.h>
using namespace std;
#define ll long long

void twoNum(ll n)
{
    ll L = -n + 1;
    ll R = n;
    printf("%lld %lld\n", L, R);
}

int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        ll n;
        scanf("%lld", &n);
        twoNum(n);
    }
    return 0;
}
 
