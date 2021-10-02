#include<bits/stdc++.h>
using namespace std;

int main()
{

    queue<pair<string, int>>Q;
    queue< int>Q2;
    queue< int>Q3;

    string opcode; int operand;
    while(cin>>opcode>>operand)
    {
        Q.push(make_pair(opcode,operand));

        auto frontProc=Q.front();
        Q.pop();
        if(frontProc.first=="insert")
        {

             Q2.push(frontProc.second);

        }
       else if(frontProc.first=="extract")
        {
             int n1=Q2.front();
             Q2.pop();
             int n2=Q2.front();
             Q2.pop();
             if(n1>n2)
                {
                    Q2.push(n2);
                    Q3.push(n1);
                }
                else if(n2>n1) {
                     Q2.push(n1);
                    Q3.push(n2);
                }


        }
        else if(frontProc.first=="end"){

           break;
        }
    }

    return 0;
}

