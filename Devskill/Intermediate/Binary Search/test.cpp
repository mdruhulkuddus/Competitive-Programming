#include<bits/stdc++.h>
using namespace std;
#define MAX 100000000
//impossible case
vector<int> impossible_case;
bool isPower(int x, long int y)
{
    if (x == 1)
        return (y == 1);
    long int pow = 1;
    while (pow < y)
        pow *= x;
    return (pow == y);
}
bool search_element(vector<int>&arr, int search_ele)
{
        int L = 0, R= arr.size()-1;

        while(L<=R)
        {
            int M=(L+R)/2;
            if(arr[M]==search_ele)
            {
                return 1;
            }
            else if(arr[M] < search_ele)
            {
                L = M + 1;

            }
            else
            {
                R = M - 1;
            }
        }
        return false;
}
void impossible_all_cases()
{
    int inc = 0;
    for(int i = 25; i <= MAX; i+=25)
    {
        int n = i, cnt = 0;
        if(isPower(5, i))
        {
            int div = n/5;
            int power = log(i)/log(5);
            while(power != 1)
            {
                impossible_case.push_back(div + inc++);
                power--;
            }
        }
        else
        {
            int div = n/5;
            impossible_case.push_back(div + inc++);
        }
    }
}

//possible case
int trail_zero_of_Mid(int n)
{
    int p = 5;
    int trailing_zero_n_fact = 0, count_partial;
    while( n >= p)
    {
        count_partial = n/p;
        trailing_zero_n_fact += count_partial;
        p *= 5;
    }
    return trailing_zero_n_fact;
}
int fact_num_of_trailig_zero(int trailing_zero)
{
    int L = 5;
    int R = 100000000;
    while(L < R)
    {
        int M = L+(R-L)/2;
        int trail_of_M = trail_zero_of_Mid(M);
        //cout<<M<<" trail = "<<trail_of_M<<endl; getchar();
        if(trail_of_M < trailing_zero)
            L = M + 1;
        else
            R = M;
    }

    return L;

}

int main()
{
    impossible_all_cases();
    int tc, cases = 1;
    scanf("%d",&tc);
    while(tc--)
    {
        int trailing_zero;
        scanf("%d", &trailing_zero);
        if(search_element(impossible_case, trailing_zero))
            printf("Case %d: impossible\n", cases++);
        else
            printf("Case %d: %d\n",cases++, fact_num_of_trailig_zero(trailing_zero));
    }
    return 0;
}
