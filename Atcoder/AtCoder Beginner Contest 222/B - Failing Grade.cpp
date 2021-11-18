#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000

int main()
{
    int n, val, fix;
    cin>>n>>fix;
    int cnt = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>val;
        if(val < fix) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

