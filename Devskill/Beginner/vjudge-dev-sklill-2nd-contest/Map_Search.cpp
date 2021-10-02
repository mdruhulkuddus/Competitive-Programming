#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    map<string, int>m;
    //map<string, int>::iterator it;
    cin>>n;
    while(n--)
    {
        int x, mValue;
        string keyStr;
        cin>>x;
        if(x==0)
        {   cin>>keyStr>>mValue;
            //m.insert(make_pair(keyStr, mValue));
            m[keyStr]=mValue;
        }

        else
        {
        cin>>keyStr;
       // it=m.find(keyStr);
        cout<<m[keyStr]<<endl;

        }

    }

    return 0;
}




