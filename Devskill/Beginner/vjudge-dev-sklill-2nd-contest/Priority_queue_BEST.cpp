#include<bits/stdc++.h>
using namespace std;

int main()
{
    int val;
    priority_queue<int>pq;
    while(1)
    {
        string str;
        cin>>str;
        if(str=="end")
            break;
        else if(str=="insert")
        {
            cin>>val;
            pq.push(val);
        }
        else
        {
            cout<<pq.top()<<endl;
            pq.pop();
        }
    }

    return 0;

}
