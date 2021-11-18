#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, d;
    scanf("%d%d", &n, &d);
    vector<int> vc(n);
    for(int &e : vc) //take input
        scanf("%d", &e);
    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        int idx = i + 1;
        ll limit = vc[i] + d;
        ll up_bound = upper_bound(vc.begin(), vc.end(), limit) - vc.begin();
        ll points = up_bound - idx;
        if(points < 2) continue;
        ans += (points * (points - 1))/2;
    }
    printf("%lld\n", ans);
    return 0;
}
