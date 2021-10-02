#include<bits/stdc++.h>
using namespace std;


    double postfixOp(string valu)
    {

        stack<float>stk;
    for(int i=0; i<valu.size(); i++)
    {
        char value = valu[i];
        //cout<<value<<endl;}
        if(value=='+' || value=='-' || value=='*' || value=='/')
        {
            double b=stk.top();
            stk.pop();
            double a=stk.top();
            stk.pop();


            if(value=='+')
            {
                double op=a+b;
                stk.push(op);
            }
            else if(value=='-')
            {
                double op=a-b;
                stk.push(op);
            }
            else if(value=='*')
            {
                double op=a*b;
                stk.push(op);
            }
            else if(value=='/')
            {
                double op=a/b;
                stk.push(op);
            }
        }
        else if(isdigit(value))
            {
                stk.push(value-'0');
            }
    }
    cout<< stk.top()<<endl;
    }
int main()
{
    string postString;
    cin>>postString;

    double finalValue=postfixOp(postString);
    //cout<<finalValue<<endl;
}
