#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>stk;
    stack<int>min_stk;

    int t;
    scanf("%d",&t);
    while(t--)
    {
        char opcode[20];
        int operand;
        scanf("%s",&opcode);
        if(opcode[1]=='U')
        {
            scanf("%d",&operand);
            stk.push(operand);
            if(min_stk.empty())
                min_stk.push(operand);
            else
            {
                if(min_stk.top()>= operand)
                    min_stk.push(operand);
            }
        }
        else if(opcode[1]=='O')
        {
            if(stk.empty()) printf("EMPTY\n");
            else
            {
                if(min_stk.top()==stk.top())
                    min_stk.pop();
                stk.pop();
            }

        }
        else if(opcode[0]=='M')
        {
            if(stk.empty()) printf("EMPTY\n");
            else
                printf("%d\n",min_stk.top());
        }
    }
}
