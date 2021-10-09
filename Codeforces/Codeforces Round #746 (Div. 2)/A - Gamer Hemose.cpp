/*
Let x be the highest damage value of a weapon, and y be the second-highest damage value of a weapon.
we will decrease monster health by x in the first move, and by y in the second move and so on.

ans=    2*H/(x+y), if H mod (x+y) = 0
        2*floor(H/(x+y))+1, if H mod (x+y) <= x
        2*floor(H/(x+y))+2, otherwise

*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int cmp(int v1, int v2)
{
    return v1>v2;
}
int main()
{
    int tc;
    scanf("%d", &tc);
    while(tc--)
    {
        int n, H;
        scanf("%d%d",&n,&H);
        vector<int>v(n);
        for(int &i : v)
            scanf("%d", &i);
        sort(v.begin(), v.end(), cmp);
        int x = v[0];
        int y = v[1];
        ll xPy = x + y;
        ll ans;
        ll H_mod_xPy = H%xPy;
        if(H_mod_xPy == 0) ans = 2*(H/xPy);
        else if(H_mod_xPy <= x) ans = 2*(H/xPy) + 1;
        else ans = 2*(H/xPy) + 2;

        printf("%lld\n", ans);
    }
    return 0;
}
