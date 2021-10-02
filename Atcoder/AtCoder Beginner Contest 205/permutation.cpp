#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;
    int arr[n]={0};
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    int cnt=0;
    for(int i=0; i<n; i++)
    {
       for(int j=i+1; j<n; j++)
       {
            //cout<<arr[i]<<"  "<<arr[j]<<endl;
           if(arr[i]==arr[j])
           cnt++;

       }


    }
    if(cnt>0)
    {
        cout<<"No"<<endl;
    }
    else cout<<"Yes"<<endl;


    return 0;
}

