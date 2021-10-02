#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c;
    cin>>a>>b>>c;

    if((long long)(pow(a,c))<(long long)(pow(b,c))) cout<<"<"<<"\n";
    else if((long long)(pow(a,c))>(long long)(pow(b,c))) cout<<">"<<"\n";
    else cout<<"="<<"\n";

    return 0;
}
