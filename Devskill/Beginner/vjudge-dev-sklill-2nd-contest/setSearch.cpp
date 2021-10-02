#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    set<int>s;
    set<int>::iterator it;
    cin>>n;
    while(n--)
    {
        int x, element;
        cin>>x>>element;
        if(x==0)
        {
            s.insert(element);
            cout<< s.size()<<endl;
            // for(it=s.begin(); it != s.find(element); it++) cout<< *it<<endl;
        }

        else
        {
            if(s.count(element)) cout<<"1"<<"\n";
            else cout<<"0"<<"\n";


        }

    }

    return 0;
}


