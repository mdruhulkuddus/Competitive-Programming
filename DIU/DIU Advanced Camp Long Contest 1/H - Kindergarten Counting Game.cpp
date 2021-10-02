#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(getline(cin,str))
    {
        int f=0,cnt=0;
        for(int i = 0; i<str.length(); i++)
        {
            if(isalpha(str[i]))
            {
                f=1;
            }
            else
            {
                if(f) cnt++;
                f=0;
            }
        }
        cout<<cnt<<"\n";

    }


    return 0;
}
