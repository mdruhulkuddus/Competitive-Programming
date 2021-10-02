#include<bits/stdc++.h>
using namespace std;
#define MAX 100000000
#define ll long long int

ll trail_zero_of_Mid(ll n)
{
    ll p = 5;
    ll trailing_zero_n_fact = 0, count_partial;
    while( n >= p)
    {
        count_partial = n/p;
        trailing_zero_n_fact += count_partial;
        p *= 5;
    }
    return trailing_zero_n_fact;
}
int fact_num_of_trailig_zero(int given_trail_zero)
{
    ll L = 5, ans = 0;
    ll R = 1e18;
    while(L <= R)
    {
        ll M = L+(R-L)/2;
        ll trail_of_M = trail_zero_of_Mid(M);
        if(trail_of_M < given_trail_zero)
            L = M + 1;
        else if(trail_of_M > given_trail_zero)
            R = M - 1;
        else
        {
            ans = M;
            R = M - 1;
        }
    }

    return ans;
}

int main()
{
    int tc, cases = 1;
    scanf("%d",&tc);
    while(tc--)
    {
        int trailing_zero;
        scanf("%d", &trailing_zero);
        if(fact_num_of_trailig_zero(trailing_zero))
            printf("Case %d: %d\n",cases++, fact_num_of_trailig_zero(trailing_zero));
        else
            printf("Case %d: impossible\n", cases++);

    }
    return 0;
}

