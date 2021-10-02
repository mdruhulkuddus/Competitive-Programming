#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, quantm;
    cin>>n>>quantm;
    queue<pair<string, int>>Q;
    string procNam; int procTime;
    for(int i=0; i<n; i++)
    {
        cin>>procNam>>procTime;
        Q.push(make_pair(procNam,procTime));
    }
    int T=0;
    while(!Q.empty())
    {
        auto frocProc=Q.front();
        Q.pop();
        if(frocProc.second<=quantm)
        {
            T+=frocProc.second;
            cout<<frocProc.first<<" "<<T;
        }
        else{
            T+=quantm;
            frocProc.second-=quantm;
            Q.push(frocProc);
        }
    }

    return 0;
}
