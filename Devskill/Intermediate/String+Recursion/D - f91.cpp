#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    while(scanf("%d", &n) && n != 0)
    {
        if(n<=100) printf("f91(%d) = %d\n",n,91);
        else printf("f91(%d) = %d\n",n,n-10);
    }
    return 0;
}

