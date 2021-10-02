#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int cnt=0;
    int a[100];
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i = 0; i<n; i++)
    {
        if(a[i]>=a[k-1] && a[i]) cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}




