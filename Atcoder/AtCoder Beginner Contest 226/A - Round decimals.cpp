#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
#define MOD 1000000007

int main()
{
    double n; int t;
    cin >> n;
    t = n;
    if((n-t) >= 0.5)
    cout << t+1 <<endl;
    else cout << t << endl;

    return 0;
}
