#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a, b;
        cin>>a>>b;
        if(a == 0)
            cout<<"Liquid\n";
        else if(b == 0)
            cout<<"Solid\n";
        else if(a > 0 && b > 0)
            cout<<"Solution\n";
    }

    return 0;
}

