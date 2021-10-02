#include<bits/stdc++.h>
using namespace std;

void stringSearch(string t, string s)
{
    for(int i=0; i<t.size(); i++)
    {
        string sub_str= t.substr(i, s.size()); //cut string with s size(2), then compare
        //cout<<sub_str<<endl;
        if(s == sub_str)
        {
            cout<<i<<"\n";
        }

    }
   // cout<<""<<"\n";

}
int main()
{
    string t,s;
    cin>>t>>s;
    stringSearch(t,s);
}
