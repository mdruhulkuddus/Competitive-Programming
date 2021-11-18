#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n, status = 0;
        cin >> n;
           getchar();
           n /= 2;
        while(n--)
        {
            string str1, str2;
            getline(cin, str1);
            getline(cin, str2);
            if(str1 == str2) status = 1;
        }
        if(status == 0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}


