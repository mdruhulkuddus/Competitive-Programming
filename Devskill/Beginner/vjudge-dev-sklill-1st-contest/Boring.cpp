#include<bits/stdc++.h>

using namespace std;

 int main()
 {
     int n;
     cin>>n;

     while(n--)
     {
         int number;
         cin>>number;

         int numCategory=number%10;

         int cntDigit=0;

    while(number>0)
    {
                number/=10;
             //cout<<number<<endl;
             cntDigit++;
    }
        if(cntDigit==1)
        {
            cout<<((numCategory*10)-10)+1<<endl;
        }
        else if(cntDigit==2)
        {
            cout<<((numCategory*10)-10)+3<<endl;
        }
        else if(cntDigit==3)
        {
            cout<<(((numCategory*10)-10)+6)<<endl;
        }
        else if(cntDigit==4)
        {
            cout<<(((numCategory*10)-10)+10)<<endl;
        }

     }

     return 0;
 }
