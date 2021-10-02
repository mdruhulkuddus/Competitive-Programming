#include<bits/stdc++.h>
using namespace std;
stack<double> stk;
double calc(double a, double b, char op)
{
    if(op=='+')
       stk.push(a+b);
    else if(op=='-')
       stk.push(a-b);
    else if(op=='*')
       stk.push(a*b);
    else if(op=='/')
       stk.push(a/b);
    else
       stk.push(pow(a,b));
}
int main() {
    string t;
    while(getline(cin,t))

        {

        //stringstream ss;
        //ss << t;
        stringstream ss(t); //up 2 lines// t store in ss

        string word;
        while(ss>>word){ // 1 by 1 word transfer ss to word
               // cout<<word[0]<<endl;
            if(isdigit(word[0])){
                double x=stod(word);
                //cout<<x<<endl;
                stk.push(x);
            }
            else{
                double y=stk.top();
                stk.pop();
                double x=stk.top();
                stk.pop();
                calc(x,y,word[0]);
            }
        }
    printf("%0.4f\n",stk.top());

    //stk.pop();
    }

	return 0;
}
