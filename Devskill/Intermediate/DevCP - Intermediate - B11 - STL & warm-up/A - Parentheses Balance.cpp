#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        string str;
        getline(cin,str);
        stack<char>stk;
        int siZe = str.size();
        if(siZe%2==1)
            cout<<"No\n";
        else
        {
            for(int i = 0; i<siZe; i++)
            {
                if(str[i]=='(' || str[i]=='[')
                {
                    stk.push(str[i]);
                }
                else if(str[i]==')' || str[i]==']')
                {
                    if(stk.empty())
                    {
                        continue;
                    }
                    if(str[i]==')' && stk.top()=='(')
                        stk.pop();
                    else if(str[i]==']' && stk.top()=='[')
                        stk.pop();

                }

            }
            if(stk.empty()) cout<<"Yes\n";
            else cout<<"No\n";
        }
    }

    return 0;
}
