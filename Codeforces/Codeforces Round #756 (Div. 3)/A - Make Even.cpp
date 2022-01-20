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
        int a, b, res;
        cin >> a >> b;
        res = min({(a+b)/4, a, b});
        cout << res << endl;
    }
    return 0;
}
