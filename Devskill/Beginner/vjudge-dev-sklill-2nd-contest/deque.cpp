
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    deque<int>dq;
    while(n--)
    {
        int cmd, idx, val;
        cin>>cmd;
        if(cmd==0)
        {
            cin>>idx>>val;
            if(idx==0)
            {
                dq.push_front(val);
            }
            else
            {
                dq.push_back(val);
            }
        }
        else if(cmd==1)
        {
            cin>>val;
            cout<<dq[val]<<"\n";
        }
        else
        {
            cin>>val;
            if(val==0)
            {
                dq.pop_front();
            }
            else
            {
                dq.pop_back();
            }
        }
    }
    return 0;
}

