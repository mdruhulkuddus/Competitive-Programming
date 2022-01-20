#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000

int par[MAX + 5], value[MAX + 5];
bool isComp[MAX + 5];
vector<int> primes;

int find_parent(int u)
{
    if(u == par[u]) return u;
    return par[u] = find_parent(par[u]);
}

void unite(int u, int v)
{
    int pu = find_parent(u);
    int pv = find_parent(v);
    if(pu != pv)
        par[pu] = pv;
}

void sieve()
{
    for(int i = 2; i*i <= MAX; i++)
    {
        if(!isComp[i])
        {
            for(int j = i*i; j <= MAX; j += i)
            {
                isComp[j] = 1;
            }
        }
        primes.push_back(2);
        for(int i = 3; i <= MAX; i += 2)
        {
            if(!isComp[i])
                primes.push_back(i);
        }
    }
}
vector<int> getPrimeList(int value)
{
    vector<int> uniquePrimes;
    for(int i = 0; i < primes.size() && primes[i] * primes[i] <= value; i++)
    {
        if(value % primes[i] == 0)
        {
            uniquePrimes.push_back(primes[i]);
            while(value % primes[i] == 0)
            {
                value /= primes[i];
            }
        }
    }
    if(value > 1) uniquePrimes.push_back(value);
    return uniquePrimes;
}

int main()
{
    sieve();
    int T,n, cs = 1;
    scanf("%d", &T);
    while(T--)
    {
        for(int it = 1; it <= MAX; it++)
            par[it] = it;
        int oneCount = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &value[i]);
            auto uplist = getPrimeList(value[i]);
            for(auto u : uplist)
            {
                unite(u, value[i]);
            }
            oneCount += value[i] == 1;
        }
        unordered_set<int>uniqeGroups;
        for(int i = 0; i < n; i++)
        {
            if(value[i] > 1)
                uniqeGroups.insert(find_parent(find_parent(value[i])));
        }
        printf("Case %d: %d\n", cs++, (int)uniqeGroups.size() + oneCount);
    }
    return 0;
}
