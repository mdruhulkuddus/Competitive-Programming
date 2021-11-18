#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 32000

bool comp[MAX + 5];
vector<int> primes;

void sieve() //O(Nlog(logN))
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

int primePosition(int n)
{
    if(n <= 2) return 0;
    int i = 0;
    for(i = 0; i < n; i++)
    {
        if(primes[i] >= n) break;
    }
    return i;
}

int main()
{
    sieve();
    int x, y;
    while(cin>>x>>y)
    {
        if(x == 0 && y == 0) break;
        if( x > y) swap(x , y) ;
        int frChk,scChk, trChk;
        x = primePosition(x);
        for(int i = x; primes[i] <= y; i++)
        {
            if(i > 3432) break;
       //   if(primes[i] >= y) break;
            if(i == x)
                frChk = primes[i+1] - primes[i];
            else
            {
                scChk = primes[i+1] - primes[i];
                if(frChk != scChk) frChk = scChk;
                else
                {
                    trChk =  primes[i+1+1] - primes[i+1];
                    if(scChk == trChk)
                    {
                        cout<<primes[i-1]<<" "<<primes[i]<<" "<<primes[i+1]<<" "<<primes[i+1+1]<<endl;
                        i++;
                    }
                    else
                    {
                        cout<<primes[i-1]<<" "<<primes[i]<<" "<<primes[i+1]<<endl;
                    }

                }
            }
        }
    }
    return 0;
}
