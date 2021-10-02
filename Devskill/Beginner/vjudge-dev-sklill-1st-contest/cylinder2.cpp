#include<stdio.h>
#define pi 3.14


int main()
{
    int d, t;
scanf("%d%d",&d,&t);

    double r =d/2.0;
    double v=pi*r*r*t;

    printf("%0.2lf cm^3\n",v);


    return 0;
}
