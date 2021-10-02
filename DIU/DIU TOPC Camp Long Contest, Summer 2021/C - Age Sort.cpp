#include<bits/stdc++.h>
using namespace std;
#define MAX 2000000
#define ll long long
int main()
{
    int t;
    while(scanf("%d",&t)==1)
    {
        vector<int>age(t);
        if(t==0) break;

        for(int i = 0; i < t; i++)
        {
            cin>>age[i];
        }
        //insertion sort
//        for(int i = 1; i<t; i++)
//        {
//            int key = age[i];
//            int p = i-1;
//            while(p >= 0 && age[p]>key)
//            {
//                age[p+1]=age[p];
//                p--;
//            }
//            age[p+1]=key;
//        }

        sort(age.begin(),age.end());
        for(int i = 0; i < t; i++)
        {
            if(i==(t-1))  cout<<age[i]<<"\n";
            else cout<<age[i]<<" ";
        }

    }

    return 0;
}
/*
bubble sort
for(int i = 0; i < t; i++)
        {
            for(int j = i+1; j<t; j++)
            {
                if(age[i]>age[j])
                {
                    swap(age[j], age[i]);

                }
            }
        cout<<age[i]<<" ";
        }
*/
