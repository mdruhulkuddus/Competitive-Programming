#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int, int>mp;
int check_block(int n, int k)
{

}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n, k;
        scanf("%d%d",&n,&k);

        check_block(n, k);
        int cnt = n-1;
        ll limt = (n*(n-1))/2;
        int i=1;
        while(limt != 0)
        {
            //cout<<limt<<" "<<i<<endl; getchar();
            mp[limt]=i++;
            limt= limt - cnt;
            cnt--;
        }
        for(auto i : mp)
            cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}
