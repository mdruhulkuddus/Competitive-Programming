#include<bits/stdc++.h>
using namespace std;
#define MAX 10000000
#define ll long long

bool comp[MAX + 5];
vector<int> primes;
void sieve()
{
    comp[0]=comp[1]=1;
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

int main()
{
    sieve();
    int T, cas = 1;
    scanf("%d", &T);
    while(T--)
    {
        int n, i = 0, cnt = 0;
        scanf("%d", &n);
        while(1)
        {
            if(primes[i] > n/2) break;
            ll check = n - primes[i];
            if(!comp[check])
            {
                cnt++;
            }
            i++;
        }
        printf("Case %d: %d\n", cas++, cnt);
    }

    return 0;
}
