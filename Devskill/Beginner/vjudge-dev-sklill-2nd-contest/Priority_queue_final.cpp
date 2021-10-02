#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int>pq;
    int intElement;
    string strOperation;

    //cout<<strOperation;
    cin>>strOperation;
    while(strOperation != "end")
    {
       if(strOperation=="insert")
        {
            cin>>intElement;
            pq.push(intElement);

        }
        else
        {

            cout<<pq.top()<<"\n";
            pq.pop();
        }
      cin>>strOperation;
    }
//cout<<pq.top()<<"\n";
    return 0;
}
