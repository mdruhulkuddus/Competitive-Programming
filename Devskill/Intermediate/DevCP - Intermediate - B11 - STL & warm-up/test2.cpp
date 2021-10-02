#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007
int main()
{
fast
string s;
cin>>s;
string c="chokudai";
ll ct[8]={0};
ll ans;
for(int i=s.size()-1;i>=0;i--)
{
    for(int j=0;j<8;j++)
    {
        //cout<<s[i]<<" "<<c[j]<<endl;
        if(s[i]==c[j])
           {
               if(j==7)
                    ct[j]++;
               else
                   ct[j]+=ct[j+1];
                ct[j]%=mod;
           }
        if(j==0)
            ans=ct[j];
    }
}
cout<<ans;
}
