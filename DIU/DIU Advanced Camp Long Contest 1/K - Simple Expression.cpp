#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    for(int i = 0; i < 3; i++)
        cin>>a[i];
    sort(a, a+3);
    // for(int i = 0; i < 3; i++)
    //cout<<a[i]<<" ";
    int output= a[0]-a[1]-a[2];
    int output2= a[0]-a[1]*a[2];
    cout<<min(output,output2)<<"\n";
    return 0;
}
