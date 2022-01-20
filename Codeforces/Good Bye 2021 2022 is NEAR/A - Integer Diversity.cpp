#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
#define MOD 1000000007

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        map<int, int> cnt;
        int n;
        cin >> n;
        int val;
        for(int i = 0; i < n; i++)
        {
            cin >> val;
            //if(val < 0) val = -val;
            cnt[abs(val)]++;
        }
        int ans = 0;
        for(auto v : cnt)
        {
            //cout << v.first <<" "<< v.second << endl;
            if(v.first == 0)
            {
                ans++;
                continue;
            }
            else if(v.second >= 2) ans += 2;
            else ans++;
        }
        cout << ans << endl;
    }
    return 0;
}

