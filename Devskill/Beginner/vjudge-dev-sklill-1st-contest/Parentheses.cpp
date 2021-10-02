#include<bits/stdc++.h>
using namespace std;

 bool isValid(string bracketSeq)
 {
     stack<char>stk;

     int sizeStr = bracketSeq.size();
    if(sizeStr % 2 == 1) return 0;



    for(int i=0; i<bracketSeq.size(); i++)
    {
        char ch = bracketSeq[i];
        if((ch == ')') || (ch==']'))
        {
              if(stk.empty())
                return false;
            else{
                 if(ch == ')' && stk.top() == '(') stk.pop();
                else if(ch == ']' && stk.top() == '[') stk.pop();
               }


        }
        else if((ch == '(') || (ch=='['))
                stk.push(ch);
        else if(ch == ' ')
        continue;

        else
            break;

    }
//if(stk.empty()) return true;
//return false;
   return stk.empty();
 }

 int main()
 {
     string bracketSeq; int n;
     cin>>n;
    getchar();
    while(n--)
     {
     getline(cin,bracketSeq);

     if(isValid(bracketSeq))

            cout<<"Yes"<<"\n";

        else

            cout<<"No"<<"\n";


     }

     return 0;
 }
///cout<<bracketSeq<<" --> "<<isValid(bracketSeq)<<endl;



