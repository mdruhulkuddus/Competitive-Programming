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
        int n, a, mx = INT_MIN, mn = INT_MAX;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> a;
            if(mx < a) mx = a;
            if(mn > a) mn = a;
        }
        cout << mx - mn << endl;
    }
    return 0;
}

