#include<bits/stdc++.h>
using namespace std;
void two_Non_Negetive_Numbers_of_n(double d)
{
    double mid, low, high, bigNum, smallNum;
    if(d == 0)
        printf("Y 0.000000000 0.000000000\n");
    else if(d > 0 && d < 4)
        printf("N\n");
    else if(d == 4)
        printf("Y 2.000000000 2.000000000\n");
    else
    {
        low = 0.0;
        high = d;
        int cnt = 50;
        while(cnt--)
        {
            mid = low + (high - low)/2.0;
            bigNum = mid;
            smallNum = d - bigNum;
            if(bigNum * smallNum > bigNum + smallNum)
                low = mid;
            else
                high = mid;
        }
        printf("Y %0.9lf %0.9lf\n", bigNum, smallNum);
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        two_Non_Negetive_Numbers_of_n(n);
    }

    return 0;
}
