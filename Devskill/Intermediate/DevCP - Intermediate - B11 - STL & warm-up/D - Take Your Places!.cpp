#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        vector<int>odd_list;
        vector<int>even_list;
        int n;
        int even=0, odd=0;
        scanf("%d",&n);
        int arr[MAX+5];
        for(int i = 0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]%2 == 0) // 0 even, 1 odd
            {
                even++;
                arr[i]=0;
                even_list.push_back(i);

            }
            else
            {
                odd++;
                arr[i]=1;
                odd_list.push_back(i);
            }
        }
        if( n == 1 )
        {
            printf("%d\n",0);
        }
        else if( n == odd || n == even || abs(even-odd) > 1)
        {
            printf("%d\n",-1);
        }
        else
        {

            if(even > odd)
            {
                int eve = 0, ans = 0, i = 0;
                while(eve < n)
                {
                    ans += abs(even_list[i++]-eve);
                    eve = eve+2;
                }
                cout<< ans <<"\n";
            }
            else if(odd > even)
            {
                int od = 0, ans = 0, j = 0;
                while(od < n)
                {
                    ans += abs(odd_list[j++]-od);
                    od = od+2;

                }
                cout<< ans <<"\n";
            }
            else if(even == odd)
            {
                int eve = 0, even_ans = 0, i = 0;
                while(eve < n)
                {
                    even_ans += abs(even_list[i++]-eve);
                    eve = eve+2;
                }
                int od = 0, odd_ans = 0, j = 0;
                while(od < n)
                {
                    odd_ans += abs(odd_list[j++]-od);
                    od = od+2;
                }
                int ans = min(even_ans, odd_ans);
                cout << ans << "\n";
            }
        }
    }
    return  0;
}
