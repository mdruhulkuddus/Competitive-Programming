#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    vector<int>v;
    cin>>t;

    while(t--)
    {
        int n,val;
        cin>>n;
        int sum=0,cnt=0;


            for(int i=0; i<n; i++)
            {
                cin>>val;
                sum+=val;

                 v.push_back(val);
            }


            int mod=sum%n;
            if(mod != 0) cout<<"-1"<<"\n";
            else
            {
                    sum=sum/n;
                for(int j=0; j<v.size(); j++)
                {
                    if(v[j]>sum) cnt++;

                }
                cout<<cnt<<"\n";
            }


            v.clear();

    }

    return 0;
}
