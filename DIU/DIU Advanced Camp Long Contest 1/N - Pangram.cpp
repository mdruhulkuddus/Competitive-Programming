#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char ch[100];
    set<char>s;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>ch[i];
        ch[i] = tolower(ch[i]);
        s.insert(ch[i]);
    }
    if(s.size() == 26) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}

