
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long L, x=0, storeX=0,  volume=0,temp=0;

    cin>>L;

        while(1)
        {
            x++;
            volume=(L-2*x)*(L-2*x)*x;
            if(temp>volume) break;
            temp=volume; storeX=x;

        }
        cout<<temp<<" "<<storeX;



    return 0;
}

