#include <bits/stdc++.h>
using namespace std;

int Big_mod(int a,int b,int m)
{
    if(b==0)
        return 1;
    int x=Big_mod(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1)
        x=(x*a)%m;
    return x;
}

int main()
{

    string str;
    int len, last, last2, n;
    cin >> str;
    len = str.size();
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
