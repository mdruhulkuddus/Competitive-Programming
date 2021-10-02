#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    cin>>t;
    for(int i=1; i<=t;i++)
    {
        cin>>n;
        long long int even_num=  (long long int)((n*(n+1))/2)*2;
        //cout<<sizeof(even_num);
        cout<<"Case "<<i<<": "<<even_num<<endl;

    }

    return 0;
}


