#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    vector<int>v;
    vector<int>::iterator it;
    cin>>n;
    while(n--)
    {
        int x, value;
        cin>>x;
        if(x==0)
        {
            cin>>value;
            v.push_back(value);
        }
        else if(x==1)
        {   cin>>value;
             cout<<v[value]<<"\n";
        }
        else
        {

            v.pop_back();
        }

    }

    return 0;
}




