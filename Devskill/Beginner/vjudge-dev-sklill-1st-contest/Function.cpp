#include<bits/stdc++.h>
using namespace std;

int main() {

    long long n;

    cin>>n;

    if(n%2==0)
    {
        cout<<n/2<<"\n";
    }
    else
        cout<<-(n+1)/2<<"\n";

   return 0;
}
//
//
//
//for(long long i=1; i<=n; i++)
//    {
//        sum+=(long long)(pow((-1),i)*i);
//    }
//cout<<sum<<endl;
//main();
////cout<<sizeof(n);
////cout<<sizeof(sum);
