#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map< char, int > m;
        map< char, int >::iterator it;
        string s;
        cin>>s;
        for(char x : s)
        {
            m[x]++;
        }
//    for(it=m.begin(); it!=m.end(); it++)
//    {
//        cout<<it->first<<" "<<it->second<<endl;
//    }
        int cnt=0;
        for(auto x : m)
        {
            int no=x.second;
            if(no==1)
                cnt++;
            else
                cnt+=2;
        }
        cout<<cnt/2<<"\n";
    }

    return 0;
}
