#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll Big_mod(ll a,ll b,ll m)
{
    if(b==0)
        return 1;
    ll x=Big_mod(a-1,b-1,m);
    x=(x*x)%m;
    if(b%2==1)
        x=(x*a)%m;
    return x;
}

int modBy4(string s, int len)
{
    int sum = 0, n, last, last2, su, dd;
    for(int i = 0; i < len; i++)
    {
        n = s[i]-'0';
        su = sum*10;
        // cout<<n+su<<endl;
        sum = n + su;
        // n = s[i]-'0';
        // n *= 10;
        //sum += n;
        cout<<sum<<endl;
        // sum += sum%4;
    }
    return sum;
}
int main()
{
    cout<<Big_mod(5, 4, 123456789)<<endl;
    string str;
    int len, last, last2, n;
    cin >> str;
    len = str.size();
    cout<<modBy4(str, len)<<endl;
    return 0;
    last = str[len - 1] - '0';
    last2 = str[len - 2] - '0';
    last2 *= 10;
    n = last + last2;
    if(n%4 == 0) cout << 4 <<endl;
    else cout << 0 <<endl;

//    int ans = 0;
//    for(int i = 1; i <= 4; i++)
//    {
//        ans += Big_mod(i, lastDigit, 5);
//    }
//
//    cout<<ans%5<<endl;

    return 0;
}
