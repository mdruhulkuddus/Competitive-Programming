/// TC= O(sqrt(N))
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string str(n, 'a');
        for(int i=n-2; i>=0; i--)
        {
            if(k <= (n-i-1))
            {
                str[i]='b';
                str[n-k]='b';
                break;
            }
            k-=n-i-1;
        }
        cout<<str<<"\n";

    }

    return 0;
}
