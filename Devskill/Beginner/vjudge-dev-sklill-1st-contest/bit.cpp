#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=0,n;
    string fix;

    cin>>n;


    for(int i=1; i<=n; i++)
    {
        cin>>fix;

        if(fix=="++x" || fix=="++X")
    {
        ++x;
    }
    else if(fix=="--x" || fix=="--X")
    {
        --x;
    }
    else if(fix=="x++" || fix=="X++")
    {
        x++;
    }
    else if(fix=="x--" || fix=="X--")
    {
        x--;
    }
    }


    cout<<x<<endl;

    return 0;
}
