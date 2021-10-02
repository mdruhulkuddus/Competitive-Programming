#include<bits/stdc++.h>

using namespace std;

int main()
{
//    int a;
//    cout<<sizeof(a)<<endl;
//    short b;
//    cout<<sizeof(b)<<endl;
//    short int t;
//    cout<<sizeof(t)<<endl;
//    long int c;
//    cout<<sizeof(c)<<endl;
//    long int w;
//    cout<<sizeof(w)<<endl;
//    long long q;
//    cout<<sizeof(q)<<endl;
//    long long int r;
//    cout<<sizeof(r)<<endl;
//
//    float v;
//    cout<<sizeof(v)<<endl;
//    double d;
//    cout<<sizeof(d)<<endl;

    int arr[20]={0};
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    int m=0;
    for(int j=0; j<5; j++)
    {
        while(arr[j])
        {
            arr[j] = arr[j]/10;
            m++;
        }
        cout<<m<<endl;
    }

    return 0;
}
