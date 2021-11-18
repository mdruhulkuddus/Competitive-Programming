#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    map<string, int>mp;
    //map<string, int>::iterator it;
    scanf("%d",&t);
    while(t--)
    {
        int val, op;
        char key[20];
        string L, R;
        scanf("%d",&op);

        if(op == 0)
        {
            scanf("%s%d",key,&val);
            //mp.insert(make_pair(key, val));
            mp[key]=val;

        }
        else if(op == 1)
        {
            scanf("%s",key);
            auto it = mp.find(key);
            if(it == mp.end()) printf("%d\n", 0);
            else printf("%d\n",it->second);
            //printf("%d\n",mp[key]);

        }
        else if(op == 2)
        {
            scanf("%s",key);
            mp.erase(key);
        }
        else if(op == 3)
        {
            cin>>L>>R;
            for(auto it = mp.lower_bound(L); it != mp.upper_bound(R); it++)
            {
                cout<<it->first<<" "<<it->second<<"\n";
            }
        }
    }
    return 0;
}
