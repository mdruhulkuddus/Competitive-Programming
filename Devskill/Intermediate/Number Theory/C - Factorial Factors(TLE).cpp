#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000

// legendre formula -> generate number of p product in n
ll count_P_in_N(int n, int p)
{
    ll cnt = 0, x = p;
    while((n/x) > 0)
    {
        cnt += n/x;
        x *= p; // x = p^k
    }
    return cnt;
}

bool comp[MAX + 5]; // all declare with 0
vector<int> primes;
void sieve() //primes
{
    for(ll i = 2; i*i <= MAX; i++)
    {
        if(!comp[i])
        {
            for(ll j = i*i; j <= MAX; j += i)
            {
                comp[j]=1;
            }
        }
    }
    for(ll i = 2; i <= MAX; i++)
    {
        if(!comp[i]) primes.push_back(i);
    }
}

ll num_of_factors(int n)
{
    ll cnt_factors = 0;
    for(int i = 0; i < (int)primes.size(); i++)
    {
        if(primes[i] > n) break;
        cnt_factors += count_P_in_N(n, primes[i]);
    }
    return cnt_factors;
}

int main()
{
    sieve();
    int n;
  // cout<<primes.size();
    while(scanf("%d", &n) != EOF)
    {
        printf("%lld\n", num_of_factors(n));
    }
    return 0;
}


