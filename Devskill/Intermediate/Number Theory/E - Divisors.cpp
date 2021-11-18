#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000

//O(sqrt(N))
int findDivisors(int n, int k)
{
    int sum = 0;
    for(int i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            if(i%k != 0) sum += i;
            if(i != n / i)
                 if((n / i)%k != 0) sum += (n/i);
        }
    }
   return sum;
}

int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int N, K;
        scanf("%d%d", &N, &K);
        printf("%d\n", findDivisors(N, K));
    }


    return 0;
}

