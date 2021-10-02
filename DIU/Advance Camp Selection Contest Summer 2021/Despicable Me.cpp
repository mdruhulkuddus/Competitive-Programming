#include<stdio.h>


int main()
{
    int frds, money,totalMoney,need, noNeed=0;

    scanf("%d%d",&frds,&money);
    totalMoney=frds*350;
    need=totalMoney-money;

    if(money>totalMoney) printf("%d",noNeed);
    else
        printf("%d",need);
    return 0;
}
