// all square number's divisors are odd
// divisor->(fc+1) 5=5^1 -> 1+1 -> 2
// square number of a number divisor -> (2*fc + 1) -> 25 -> (2*1 + 1) -> 3 // here 1-> 5->5^1-> fc = 1
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define N 100000 // 10^5 * 10^5 = 10^10 // this program cal square of a number so no need 10^10 its need 10^5

bool comp[N + 5];
vector<ll> primes, divsCnt[N];

void sieve() //O(Nlog(logN))
{
    for(ll i = 2; i*i <= N; i++)
    {
        if(!comp[i])
        {
            for(ll j = i*i; j <= N; j += i)
            {
                comp[j]=1;
            }
        }
    }
    for(ll i = 2; i <= N; i++)
    {
        if(!comp[i]) primes.push_back(i);
    }
}

/// O(sqrt(N))
void divisorCount(ll n)
{
    ll temp = n;
    ll ans = 1;
    for(ll i = 0; i<primes.size() && primes[i]*primes[i] <= n; i++)
    {
        if(n%primes[i] == 0)
        {
            int pcnt = 0;
            while(n%primes[i] == 0)
            {
                n /= primes[i];
                pcnt++;
            }
            ans *= (2*pcnt + 1); //(2*a+1)
        }
    }
    if(n > 1) ans *= 3; //(2*a+1) -> (2*1+1) -> 3
    divsCnt[ans].push_back(temp*temp); // divisor count base number included
}

void all_Num_div_cnt()
{
    for(ll i = 1; i <= N; i++) //n
    {
        divisorCount(i);
    }
}

int main()
{
    sieve();
    all_Num_div_cnt();

    int T;
    scanf("%d", &T);
    while(T--)
    {
        ll K, L, H;
        scanf("%lld%lld%lld",&K,&L,&H);
        auto LB = lower_bound(divsCnt[K].begin(),divsCnt[K].end(),L)-divsCnt[K].begin(); //O(logN)
        auto UB = upper_bound(divsCnt[K].begin(),divsCnt[K].end(),H)-divsCnt[K].begin(); //O(logN)
        printf("%lld\n",UB-LB);
    }
    return 0;
}
