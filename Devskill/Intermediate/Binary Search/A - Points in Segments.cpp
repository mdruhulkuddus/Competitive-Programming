#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, casee = 1;
    scanf("%d",&t);
    while(t--)
    {
        int n, q, cnt = 0,p;
        vector<int>vec;
        scanf("%d%d",&n,&q);
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&p);
            vec.push_back(p);
        }
        printf("Case %d:\n",casee++);
        while(q--)
        {
            int q1, q2, low1, low2;
            scanf("%d%d",&q1,&q2);
            low1 = lower_bound(vec.begin(), vec.end(), q1) - vec.begin();
            low2 = upper_bound(vec.begin(), vec.end(), q2) - vec.begin();
            printf("%d\n",low2-low1);
        }
    }

    return 0;
}
