//(3^n+1)/2
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
#define MOD 1000000007

//O(logN)+|set bit in N|
ll mod_expo(ll a, ll b) ///cal a^b % mod
{
    if(b == 0) return 1LL;
    if(b % 2 == 0)
    {
        ll half_expo = mod_expo(a, b/2) % MOD;
        return (half_expo * half_expo) % MOD;
    }
    return (a * mod_expo(a, b-1)) % MOD;
}

ll big_mod(string &s, int m)
{
    ll res = 0;
    for(int i = 0; i < s.size(); i++)
    {
        res = (res * 10LL + (s[i] - '0')) % m;
    }
    return res;
}

int main()
{
    int T, cs = 1;
    cin >> T;
    while(T--)
    {
        string n;
        cin >> n;
        ll mod_res = big_mod(n, MOD-1);
        ll res = mod_expo(3, mod_res) + 1;
        res = (res * 500000004) % MOD;
        cout << "Case " << cs++ << ": " << res << "\n";
    }

    return 0;
}
