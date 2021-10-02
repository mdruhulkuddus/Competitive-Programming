
#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>stk;
    int minstack=0;
    int privMIn=0;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string opcode;
        int operand;
        cin>>opcode;
        if(opcode=="PUSH")
        {
            scanf("%d",&operand);
            if(stk.empty())
            {
                stk.push(operand);
                minstack=operand;
            }
            else
            {
                if(minstack>=operand)
                {   privMIn=minstack;
                    minstack=operand;
                    stk.push(minstack);
                }

                stk.push(operand);
            }
        }
        else if(opcode=="POP")
        {
            if(stk.empty()) printf("EMPTY\n");
            else
            {
                int tmp = stk.top();
                stk.pop();
                if(tmp==minstack)
                {

                     stk.pop();
                     minstack=privMIn;
                }


            }

        }
        else if(opcode=="MIN")
        {
            if(stk.empty()) printf("EMPTY\n");
            else
                printf("%d\n",minstack);
        }
    }
}
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>stk;
    //stack<int>min_stk;
    multiset<int>mset;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string opcode;
        int operand;
        cin>>opcode;
        if(opcode=="PUSH")
        {
            scanf("%d",&operand);
            stk.push(operand);
            mset.insert(operand);
        }
        else if(opcode=="POP")
        {
            if(stk.empty()) printf("EMPTY\n");
            else
            {
                int top = stk.top();
                stk.pop();
                mset.erase(mset.find(top));
            }

        }
        else if(opcode=="MIN")
        {
            if(stk.empty()) printf("EMPTY\n");
            else
                printf("%d\n",*mset.begin());
        }
    }
}
*/
