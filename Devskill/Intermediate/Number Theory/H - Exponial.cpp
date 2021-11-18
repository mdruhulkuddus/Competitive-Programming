#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
#define MOD 1000000007

ll base[]= {0, 1, 2, 9, 1LL<<18}; //2^18

ll get_phi(int n)
{
    ll res = n;
    for(ll i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            while(n % i == 0) n /= i;
            res -= res / i;
        }
    }
    if(n > 1)
        res -= res / n;
    return res;
}

ll mod_expo(ll a, ll b, ll m)
{
    if(b == 0) return 1LL;
    if(b % 2 == 0)
    {
        ll temp = mod_expo(a, b/2, m) % m;
        return (temp * temp) % m;
    }
    return (a * mod_expo(a, b-1, m)) % m;
}

ll f(ll n, ll mod)
{
    if(n < 5) return base[n] % mod;
    ll newMod = get_phi(mod);
    if(newMod == 0 || newMod == 1) return 0;
    return mod_expo(n, newMod + f(n - 1, newMod), mod); //f(n) = n^f(n-1)%m //(n^pi(m)+f(n-1)%pi(m))%m
}

int main()
{
    ll n, m;
    scanf("%lld%lld", &n, &m);
    printf("%lld", f(n, m)%m);
    return 0;
}

