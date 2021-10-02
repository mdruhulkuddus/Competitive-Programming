#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int count_A=0, count_B=0, count_C=0;
        for(int i = 0; i<str.size(); i++)
        {
            if(str[i]=='A') count_A++;

            if(str[i]=='C') count_C++;
            if(str[i]=='B') count_B++;
        }
        if(count_A == 1 && count_B == 1 && count_C == 1) cout<<"NO\n";
        else if(count_A == 0)
        {
            if(count_B == count_C) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else if(count_B == 0)
        {
            cout<<"NO\n";
        }
        else if(count_C == 0)
        {
            if(count_A == count_B) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else if(count_A > count_B || count_C > count_B)
        {
            cout<<"NO\n";
        }
        else if(count_A && count_B && count_C)
        {
//        if(count_A > count_B && count_A > count_C) int big = count_A;
//        else if(count_B > count_A && count_B > count_C) int big = count_B;
            count_B = count_B - count_A;
            count_B = count_B - count_C;
            if(count_B == 0) cout<<"YES\n";
            else  cout<<"NO\n";

        }
        else
        {
            cout<<"NO\n";
        }
    }

    return 0;
}
