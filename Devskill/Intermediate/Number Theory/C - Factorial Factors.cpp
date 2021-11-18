#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000

int PrimeCount(int n) // 12 = 2*2*3 -> 3
{
    int cnt = 0;
    for(int i = 2; i * i <= n; i++)
    {
       if(n%i == 0)
        {
            while(n%i == 0)
            {
                n /= i;
                cnt++;
            }
        }
    }
    if(n > 1) cnt++;
    return cnt;
}

/// O(MAX * H(MAX)) = O(MAX * log2(MAX))
ll f_factors[MAX+5]; // num of prime factors of n factorial
void fact_Factors()
{
    f_factors[2]=1;
    for(int i = 3; i <= MAX; i++)
    {
        f_factors[i] = f_factors[i - 1] + PrimeCount(i);
        /// ans[3] = ans[2] + pC(3)
    }
}

int main()
{
    fact_Factors();
    int n;
    while(scanf("%d", &n) != EOF)
    {
        printf("%lld\n", f_factors[n]);
    }
    return 0;
}

