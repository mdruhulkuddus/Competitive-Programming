#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;

    str.erase(remove(str.begin(), str.end(), '+'), str.end());
    sort(str.begin(),str.end());
    //cout<<str.size()<<" "<<str;

    for(int i = 0; i<str.size(); i++)
    {
        if(i==0)
            cout<<str[i];
        else
            cout<<'+'<<str[i];
    }
    cout<<"\n";
    return 0;
}


