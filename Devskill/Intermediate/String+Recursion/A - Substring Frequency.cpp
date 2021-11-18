#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000
#define MOD 1000000007
#define BASE 26

ll prefix_hash[MAX + 5];
ll po[MAX + 5];

void pre_cal(string &str)
{
    po[0] = 1;
    for(int i = 1; i <= str.size(); i++)
    {
        po[i] = (po[i - 1] * BASE) % MOD;
    }
    prefix_hash[0] = str[0];
    for(int i = 1; i < str.size(); i++)
    {
        prefix_hash[i] = ((prefix_hash[i - 1] * BASE) + str[i]) % MOD;
    }
}

ll get_hash(int L, int R)
{
    if(!L) return prefix_hash[R];
    return (prefix_hash[R] - (prefix_hash[L-1] * po[R-L+1] % MOD) + MOD) % MOD;
}

int main()
{
    int t, cs = 1;
    cin >> t;
    while(t--)
    {
        string s, t;
        int cnt = 0;
        cin >> s >> t;
        pre_cal(s);
        ll hash_of_t = 0;
        for(auto ch : t)
            hash_of_t = ((hash_of_t * BASE) + ch) % MOD;

        for(int i = 0; i + (int)t.size() <= (int)s.size(); i++)
        {
            ll range_hash = get_hash(i, i + (int)t.size() - 1);
            if(range_hash == hash_of_t)
                cnt++;
        }
        cout<<"Case "<< cs++ <<": "<< cnt << "\n";
    }

    return 0;
}

