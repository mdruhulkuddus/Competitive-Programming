#include<bits/stdc++.h>
using namespace std;

int main()
{

    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
         deque<int>dq;
        int n;
        scanf("%d",&n);
        for(int i = 0; i<n; i++)
        {
            int p;
            scanf("%d",&p);
            if(i == 0) dq.push_back(p);
            else if(dq.front() > p) dq.push_front(p);
            else dq.push_back(p);
        }
        for(auto it : dq)
            printf("%d ", it);
        printf("\n");
    }


    return 0;
}
