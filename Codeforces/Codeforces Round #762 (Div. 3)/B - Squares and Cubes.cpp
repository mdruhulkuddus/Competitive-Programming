#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000000

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        set<ll> st;
        int n;
        cin >> n;
        for(ll i = 1; i*i <= n; i++)
        {
            st.insert(i * i);
            if(i * i *i <= n) st.insert(i * i * i);
        }
        cout << st.size() << endl;
    }
    return 0;
}


