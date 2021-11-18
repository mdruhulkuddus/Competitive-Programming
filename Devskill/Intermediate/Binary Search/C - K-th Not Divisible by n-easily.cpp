#include <bits/stdc++.h>
using namespace std;
#define ll int long long
int KthNotDivByN(int N, int K)
{
    ll ans = 0;
    ll L = 1;
    ll H = INT_MAX;
    while (L <= H)
    {
        ll mid = (L + H) / 2;
        ll sol = mid - mid / N;
        if (sol > K)
        {
            H = mid - 1;
        }
        else if (sol < K)
        {
            L = mid + 1;
        }
        else
        {
            ans = mid;
            H = mid - 1; // H would be reduced to find any more possible value
        }
    }
    return ans;
}
int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n, k;
        scanf("%lld%lld",&n,&k);
        printf("%d\n",KthNotDivByN(n, k));
    }
    return 0;
}
