#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        int n,k, a_number, b_number;
        int cnt=0;
        cin>>n>>k;
        a_number=n-2;
        b_number=n-a_number;
        for( int i=0; i<a_number; i++)
        {
            str.insert(i,"a");
        }
        for( int i=a_number; i<n; i++)
        {
            str.insert(i,"b");
        }
        do
        {
            ++cnt;
            if(cnt==k)
            {
                cout<<str<<"\n";
                break;
            }
        }
        while (next_permutation(str.begin(), str.end()));

    }
    return 0;
}


