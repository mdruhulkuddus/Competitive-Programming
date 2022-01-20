#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000

ll bfs(int src, int des)
{
    if(src == des) return 0;
    queue<pair<int, int>> Q;
    set<int>vis;
    Q.push({src, 0});
    int MX = 2*des;
    while(!Q.empty())
    {
        int node = Q.front().first, dis = Q.front().second;
        vis.insert(node);
        Q.pop();
        int d1 = node - 1;
        int d2 = node + 3;
        int d3 = node * 2;
        if(node == des)
        {
             return dis;
        }
        if(d1 >= 0 && !vis.count(d1))
        {
            Q.push({d1, dis+1});
        }
        if(d2 <= MX && !vis.count(d2))
        {
            Q.push({d2, dis+1});
        }
        if(d3 <= MX && !vis.count(d3))
        {
            Q.push({d3, dis+1});
        }
    }
}

int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int src, des;
        scanf("%d%d", &src, &des);
        printf("%d\n", bfs(src, des));
    }
    return 0;
}
