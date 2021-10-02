#include<bits/stdc++.h>
using namespace std;

 double postfixEva(string str)
 {
     stack<double>stk;

     for(int i=0; i<str.length(); i++)
     {
         if(str[i]>='0' && str[i]<='9')
         {
             stk.push(str[i]-'0');
         }

         else
         {
             double op2=stk.top();
             stk.pop();
             double op1=stk.top();
             stk.pop();
          //  cout<<op1<< " "<<op2<<endl;
             switch(str[i])
             {
             case '+':
                stk.push(op1+op2);
                break;
            case '-':
                stk.push(op1-op2);
                break;
            case '*':
                stk.push(op1*op2);
                break;
            case '/':
                stk.push(op1/op2);
                break;
             }

         }
     }
     return stk.top();
 }

int main()
{
    string expresion;

    cin>>expresion;

    cout<<postfixEva(expresion)<<endl;;
    return 0;
}

