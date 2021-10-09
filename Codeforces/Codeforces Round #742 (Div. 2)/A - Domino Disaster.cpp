#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == 'U') str[i]='D';
            else if(str[i] == 'D') str[i]='U';
        }
        cout<<str<<endl;
    }

    return 0;
}
