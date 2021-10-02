#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Fennec, Raccoon, cnt=0;
    int rock=0, scissors=1, paper=2;
    cin>>Fennec>>Raccoon;

    if(Fennec==rock && Raccoon==scissors)
    {
        cout<<paper;
    }
     else if(Fennec==scissors && Raccoon==paper)
    {
        cout<<rock;
    }
    else if(Fennec==rock && Raccoon==paper)
    {
        cout<<scissors;
    }
    else if(Fennec==rock &&Raccoon==rock)
    {
        cout<<rock;
    }


    return 0;
}
