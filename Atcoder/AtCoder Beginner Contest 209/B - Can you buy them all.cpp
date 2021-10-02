#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N, X, Ai,sum=0;

    cin>>N>>X;
    long long arr[N]={};
    for(int i=1; i<=N; i++)
    {
        cin>>arr[i];
        if(i%2 == 0) arr[i]=arr[i]-1;
    }
     for(int i=1; i<=N; i++)
    {
        sum+=arr[i];
        //cout<<arr[i]<<" ";

    }
   if(sum<=X) cout<<"Yes"<<"\n";
    else cout<<"No"<<"\n";
//cout<<sum;
    //main();


    return 0;
}





