#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int>pq;

    int intElement;
    string strOperation;
    int j=0;
    //cout<<strOperation;
    int arr[10]={};
    while(cin>>strOperation)
    {
         if(strOperation=="insert")
            {
                cin>>intElement;
                pq.push(intElement);

            }
        else if(strOperation=="extract")
        {
            arr[j++]=pq.top();
            pq.pop();
        }
        else{
           arr[j++]=pq.top();
            break;
        }
    }
    for(int i=0; i<j; i++)
    {
        cout<<arr[i]<<endl;
    }



    return 0;
}

/*
// onno vabe

#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int>pq;
    queue<int>q;

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

            q.push(pq.top());
            pq.pop();
        }
      cin>>strOperation;
    }
q.push(pq.top());
while(!q.empty())
{
    cout<<q.front()<<endl;
    q.pop();
}
    return 0;
}
*/
