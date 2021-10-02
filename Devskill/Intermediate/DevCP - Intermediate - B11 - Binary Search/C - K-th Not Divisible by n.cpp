#include<bits/stdc++.h>
using namespace std;
#define ll int long long
int KthNotDivByN(int n, int k)
{
    ll ans;
    ll L = 1;
    ll R = INT_MAX;
    while(L <= R)
    {
        ll M = L + (R-L)/2;
        ll S = M - M/n;

        if(k > S) L = M + 1;
        else  R = M - 1;
    }
    return L;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n, k;
        scanf("%d%d",&n,&k);

        printf("%d\n",KthNotDivByN(n, k));
    }

    return 0;
}

/* bruteforce
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n, k, cnt = 0, ans = 0, i = 1;
        scanf("%d%d",&n,&k);
        while(cnt != k)
        {

            if(i%n != 0)
            {
                cnt++;
            }

            i++;
        }
        printf("%d\n", i-1);
    }

    return 0;
}
*/
