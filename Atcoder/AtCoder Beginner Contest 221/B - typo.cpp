#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000

int main()
{
    string S, T;
    cin>>S>>T;
    if(S == T)
        cout<<"Yes\n";
    else
    {
        for(int i = 0; i<S.size(); i++)
        {
            if(S[i] == T[i])
                continue;
            else
            {
                swap(S[i], S[i+1]);
                if(S == T) cout<<"Yes\n";
                else cout<<"No\n";
                break;
            }
        }
    }
    return 0;
}

