#include<bits/stdc++.h>
using namespace std;


void findDivisors(int a, int b)
{
    vector<int>vc;
    set<int>s;
    for(int i = 1; i*i <= a; i++)
    {
        if(a%i == 0)
        {
            vc.push_back(i);
            s.insert(i);
            if(i != a/i)
            {
                vc.push_back(a/i);
                s.insert(a/i);
            }
        }
    }
    for(int i = 1; i*i <= b; i++)
    {
        if(b%i == 0)
        {
            vc.push_back(i);
            s.insert(i);
            if(i != b/i)
            {
                vc.push_back(b/i);
                s.insert(b/i);
            }
        }
    }
    cout<<vc.size()-s.size()<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        findDivisors(a,b);

    }

    return 0;
}
