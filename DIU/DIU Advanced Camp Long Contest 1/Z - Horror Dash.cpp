#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cas=0;
    cin>>t;
    while(t--)
    {
        int n, x, maxs=0;
        cin>>n;
        for(int i =0; i<n; i++)
        {
            cin>>x;
            if(maxs<x) maxs=x;

        }
        cout<<"Case "<< ++cas <<": "<< maxs <<"\n";
    }

    return 0;

}
