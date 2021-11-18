#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000

int find_divisors(int n) //O(sqrt(n))
{
    int cnt = 0;
    for(int i = 1; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            cnt++;
            if(i != n/i)
                cnt++;
        }
    }
    return cnt;
}

int find_gcd(int a, int b)
{
    /*
    if(b==0) return a;
    return find_gcd(b, a%b); */

    // or default fn
    return __gcd(a, b);

}

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int divFirst, divSec;
        scanf("%d%d",&divFirst,&divSec);
        if(divFirst == divSec)
        {
            printf("%d\n", find_divisors(divFirst));
            continue;
        }
        int gcd = find_gcd(divFirst, divSec);
        printf("%d\n", find_divisors(gcd));
    }
    return 0;
}
