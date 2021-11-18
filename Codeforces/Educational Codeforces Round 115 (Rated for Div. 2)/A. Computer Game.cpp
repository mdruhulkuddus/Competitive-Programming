#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n, status = 0;
        cin>>n;
        string str1, str2;
        cin >> str1 >> str2;
        for(int i = 0; i <str1.size(); i++)
        {
            if(str1[i]=='1' && str2[i] == '1')
            {
                status = 1;
                break;
            }
        }
        if(status == 0) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}

