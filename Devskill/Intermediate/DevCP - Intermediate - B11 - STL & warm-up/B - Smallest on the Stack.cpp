#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    stack<ll>stk;

    int t;
    scanf("%d",&t);
    while(t--)
    {
        char opcode[20];
        ll operand, minVal;
        scanf("%s",&opcode);
        if(opcode[1]=='U')
        {
            scanf("%lld",&operand);
            if(stk.empty())
            {
                stk.push(operand);
                minVal=operand;
            }

            else if (operand > minVal)
            {
                stk.push(operand);
            }
            else
            {
                stk.push(2*operand - minVal);
                minVal = operand;
            }

        }
        else if(opcode[1]=='O')
        {
            if(stk.empty()) printf("EMPTY\n");
            else
            {
                int top = stk.top();

                if(top < minVal)
                    minVal=2*minVal-top;
                stk.pop();
            }
        }
        else if(opcode[1]=='I')
        {
            if(stk.empty()) printf("EMPTY\n");
            else
                printf("%lld\n", minVal);
        }
    }
}
