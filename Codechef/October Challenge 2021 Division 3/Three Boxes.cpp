#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
       int a, b, c, d;
       cin>>a>>b>>c>>d;
       int sum = a + b + c;
       if(sum <= d) cout<< 1 <<endl;
       else if(a+b <= d) cout<<2<<endl;
       else cout<< 3 <<endl;
    }

return 0;
}
