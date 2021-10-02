#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int player=0;
    for(int i = 0; i<str.size(); i++)
    {
        if(str[i]==str[i+1])
        {
            player++;
           // cout<<player<<"\n";
            if(player == 6)
            {
                break;
            }
        }
        else player=0;
    }

    if(player==6) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}

