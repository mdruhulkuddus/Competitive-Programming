#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000

int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int a, b, c, first, sec, third;
        scanf("%d%d%d", &a, &b, &c);
        first = max(0, max(b,c)+1-a); // 0 > -10000
        sec = max(0, max(a,c)+1-b);
        third = max(0, max(a,b)+1-c);

        cout<<first<<" "<<sec<<" "<<third<<endl;
    }

return 0;
}

