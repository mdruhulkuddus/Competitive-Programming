#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000

int main()
{
    string n;
    cin>>n;
    int len = n.size();
    if(len == 4)
    {
        cout<<n<<endl;
    }
    else if(len == 3)
    {
        cout<<"0"<<n<<endl;
    }
    else if(len == 2)
    {
        cout<<"00"<<n<<endl;
    }
    else
    {
        cout<<"000"<<n<<endl;
    }
    return 0;
}
