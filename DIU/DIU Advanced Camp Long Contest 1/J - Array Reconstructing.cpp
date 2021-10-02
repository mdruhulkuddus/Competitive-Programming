#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n, m;
        scanf("%lld%lld",&n,&m);
        //m-=1;
        ll a[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%lld",&a[i]);
        }
        int flag =0;
        for (int i = 0; i < n; ++i)
            if (a[i] != -1)
            {
                flag = i;
                break;
            }
        for(int i = flag+1; i < n; i++)
        {
            if(a[i]<0)
            {
                a[i]=(a[i-1]+1)%m;
            }
        }
        for(int i = flag-1; i >=0; i--)
        {
            if(a[i]<0)
            {
                a[i]=(a[i+1]-1+m)%m;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout<< a[i] << " ";
        }
        cout<<"\n";
    }
    return 0;
}

/**
        for(int i = 0; i < n; i++)
        {
            if(arr[i]<0)
            {
                if(i==0)
                {
                    if(arr[i+1]<0)
                        arr[i]=arr[i+2]-2;
                    else
                        arr[i]=arr[i+1]-1;
                }

                else if(arr[i-1]==m)
                    arr[i]=0;
                else
                    arr[i]=++arr[i-1];
            }

            if(i==0)
                printf("%lld",arr[i]);
            else
                printf(" %lld",arr[i]);

        }
        cout<<"\n";

**/
