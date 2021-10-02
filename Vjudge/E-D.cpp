#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long N, A, X, Y;
    long long sum=0;

    scanf("%lld%lld%lld%lld",&N,&A,&X,&Y);
    if(N<=A) cout<<N*X<<"\n";
    else
    {
        sum+=A*X;
        A=N-A;

        sum+=A*Y;

        cout<<sum<<"\n";
    }


    return 0;

}
