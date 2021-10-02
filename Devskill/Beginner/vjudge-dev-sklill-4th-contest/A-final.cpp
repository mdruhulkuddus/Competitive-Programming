#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    scanf("%lld",&t);

    while(t--)
    {
        long long n,i,j,sum=0;
        scanf("%lld",&n);
        i=0;
        j=sqrtl(n);

        while(true)
        {
            sum=i*i+j*j;
            if(sum == n)
            {
                printf("Yes\n");
                break;
            }
            if(sum > n)
            {
                j--;
            }
            else
            {
                i++;
            }
            //cout<<i<<" "<<j<<"\n";
            if(i>j)
            {
                printf("No\n");
                break;
            }

        }

    }

    return 0;
}


/**

        int flag = 0;
        for(long long i =0; i*i <= n; i++)
        {
            for(long long j =0; j*j <= n; j++)
            {
                //cout<<i<<" "<<j<<"\n";
                if(i*i + j*j > n) break;
                if(i*i + j*j == n)
                {
                    flag = 1;
                    break;
                }
            }

        }
        if(flag)
            cout<<"Yes\n";
        else
            cout<<"No\n";

    }



while(t--)
    {
        long long n;
        cin>>n;

        if(n%2==0 && (n)%4==0)
        {
                cout<<"No\n";
        }

        else if(n%2==1 && n%4==3)
        {
                cout<<"No\n";

        }

        else
            cout<<"Yes\n";
    }

**/
