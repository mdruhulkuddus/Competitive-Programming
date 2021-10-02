#include<bits/stdc++.h>
using namespace std;

int main()
{
    int f=0;
    string a;
    while(getline(cin,a))
    {

        int len=a.length();
        //cout<<len<<"\n";
        int count=0;
        for(int i=0; i<len; i++)
        {
            if(isalpha(a[i]))
                f=1;
            else
            {
                if(f)
                    count++;
                f=0;

            }
        }
        printf("%d\n",count);
   }

   return 0;
}
