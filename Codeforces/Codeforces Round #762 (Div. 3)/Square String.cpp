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
        string s;
        cin >> s;
        string s1, s2;
        int n = s.size();
        if(n%2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        for(int i = 0; i < n/2; i++)
        {
            s1.push_back(s[i]);
        }
        for(int i = n/2; i < n; i++)
        {
            s2.push_back(s[i]);
        }
        if(s1 == s2)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}

