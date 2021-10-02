#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    map<string, int>m;
    cin>>n;
    while(n--)
    {
        int x, mValue;
        string keyStr;
        cin>>x;
        if(x==0)
        {   cin>>keyStr>>mValue;
            m[keyStr]=mValue;
        }

        else if(x==1)
        {
            cin>>keyStr;
           if(m[keyStr]) cout<<m[keyStr]<<"\n";
           else cout<<"0"<<"\n";

        }
        else
        {
            cin>>keyStr;
             m.erase(keyStr);
        }


    }

    return 0;
}




