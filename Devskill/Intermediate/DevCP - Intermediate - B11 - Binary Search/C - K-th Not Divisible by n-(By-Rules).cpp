#include<bits/stdc++.h>
using namespace std;
#define ll int long long

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n, k;
        scanf("%d%d",&n,&k);
        ll ans = k + (k-1)/(n-1);
        printf("%d\n",ans);
    }

    return 0;
}

