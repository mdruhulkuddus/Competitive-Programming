#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000

int main()
{
    int a, b, m;
    cin>>a>>b;
    if(a==b) cout<<1<<endl;
    else
    {
        int diff = abs(a-b);
        m = pow(32, diff);
        cout<<m<<endl;
    }

    return 0;
}

