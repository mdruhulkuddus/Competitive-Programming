#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double d, big,small;
        scanf("%lf",&d);
        if(d == 0)
            printf("Y 0.000000000 0.000000000\n");
        else if(d>0 && d<4)
           printf("N\n");
        else
        {
            big = (d + sqrt(d*d-4*d))/2.0;
            small = (d - sqrt(d*d-4*d))/2.0;
            printf("Y %0.9lf %0.9lf\n", big, small);
        }
    }
    return 0;
}
