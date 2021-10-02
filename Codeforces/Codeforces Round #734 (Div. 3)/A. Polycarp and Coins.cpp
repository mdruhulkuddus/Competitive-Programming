#include<bits/stdc++.h>
using namespace std;
#define ll long long

void test(int n)
{
    ll c1= n/3;

    ll c2= (n-c1)/2;

    if((c1 + 2*c2) != n) c1++;

    cout<<c1<<" "<<c2<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        test(n);
    }

    return 0;
}
