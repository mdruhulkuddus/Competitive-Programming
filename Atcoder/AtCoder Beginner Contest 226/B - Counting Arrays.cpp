#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
#define MOD 1000000007

int main()
{
    set<vector<int>> s;
    int T;
    cin >> T;
    while(T--)
    {
        vector<int>v;
        int n, a;
        cin >> n;
        for(int i = 0; i<n; i++)
        {
            cin >> a;
            v.push_back(a);
        }
        s.insert(v);
    }
    cout<< s.size()<<endl;
    return 0;
}
