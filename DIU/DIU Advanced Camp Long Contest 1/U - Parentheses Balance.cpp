#include<bits/stdc++.h>
using namespace std;

bool isBalance(string s)
{
    stack<char>stk;
    int n=s.size();
    if(n%2==1) return 0;
    for(int i = 0; i<n; i++)
    {
        if(s[i]=='[' || s[i]=='(')
            stk.push(s[i]);
        else if(s[i]==']' || s[i]==')')
        {
            if(stk.empty()) return 0;
            else
            {
                if(stk.top()=='[' && s[i]==']') stk.pop();
                else if(stk.top()=='(' && s[i]==')') stk.pop();
                else return 0;
            }
        }
    }
    return stk.empty();
}

int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        string braketSeq;
        getline(cin,braketSeq);

        if(isBalance(braketSeq))
        {
            cout<<"Yes\n";
        }
        else cout<<"No\n";
    }
    return 0;
}





