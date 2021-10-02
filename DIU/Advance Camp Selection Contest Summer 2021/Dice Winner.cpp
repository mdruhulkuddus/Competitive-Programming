#include<bits/stdc++.h>
using namespace std;

int main()
{
    int hablu, dablu, sumHub=0, sumDab=0,i=0,j=0,cnth=4,cntb=4;
    //cin>>hablu;
    while(cnth--)
    {
        cin>>hablu;
        if(hablu>0 && hablu<7)
        {
            if(hablu==6) ++i;
            sumHub+=hablu;
            if(hablu<6) break;
            if(i==3) sumHub-=18;
        }
        else break;
    }
    //cout<<sumHub<<endl;
    while(cntb--)
    {
        cin>>dablu;
        if(dablu>0 && dablu<7)
        {
            if(dablu==6) ++j;
            sumDab+=dablu;
            if(dablu<6) break;
            if(j==3) sumDab-=18;
        }
        else break;
    }

    //cout<<sumDab;

    if(sumHub>sumDab) cout<<"Hablu Is Winner\n";
    else if(sumDab>sumHub) cout<<"Dablu Is Winner\n";
    else cout<<"The Round Is Draw\n";

    return 0;
}

