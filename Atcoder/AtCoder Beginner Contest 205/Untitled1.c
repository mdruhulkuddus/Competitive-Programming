
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c;
    cin>>a>>b>>c;

if((long long)(pow(a,c))<(long long)(pow(b,c))) cout<<"<"<<"\n";
   else if((long long)(pow(a,c))>(long long)(pow(b,c))) cout<<">"<<"\n";
    else cout<<"="<<"\n";



//main();

    return 0;
}

//if(a>0 && b>0 && c>0) cout<<">"<<'\n';
//   else if(a<0 || b<0 || c<0)
//   {
//       //cout<<c<<endl;
//       if(c%2==0) cout<<"="<<'\n';
//        else cout<<"<"<<'\n';
//   }

