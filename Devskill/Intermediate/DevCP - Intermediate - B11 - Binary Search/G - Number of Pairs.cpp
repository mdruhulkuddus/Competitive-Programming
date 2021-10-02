#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000

int main()
{
    int tc;
    scanf("%d", &tc);
    while(tc--)
    {
        vector<int>vc;
        ll l, r;
        int n, val, cnt=0;
        scanf("%d%ld%ld",&n, &l, &r);
        for(int i = 0; i<n; i++)
        {
            scanf("%d", &val);
            vc.push_back(val);
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                // cout<<arr[i]<<" "<<arr[j]<<" L = "<<l<<" R = "<<r<<" = "<<arr[i]+arr[j]<<" - "<<cnt<<endl;
                if(l <= vc[i]+vc[j] && vc[i]+vc[j] <= r)
                    cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}

