#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000000
bool marked[MAX+10];
void findSieve(long long n)
{
    marked[0]=marked[1]=1;
    for(int i = 2; i*i <= n; i++)
    {
        if(marked[i]==0)
        {
            for(int j = i*i; j<=n; j=i+j)
            {
                marked[j]=1;
            }
        }
    }
    for(int i = 2; i<=n; i++)
    {
        if(marked[i]==0)
        {
            cout<<i <<" ";
        }
    }
    cout<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        findSieve(n);
        for(long long i = 2; i<=n; i++)
        {
            long long multi = 1;
            if(marked[i]==0)
            {
                long long cnt = 1, repeat=1;
                for(int j = 1; j<=cnt; j++)
                {
                    repeat*=i;
                }
                multi*=repeat;
                if(multi == n || multi>n)
                {
                    if(cnt%2==0)   cout<<"Yes\n";
                    else cout<<"No\n";

                    break;
                }
                cnt++;
            }
        }





    }

    return 0;
}
