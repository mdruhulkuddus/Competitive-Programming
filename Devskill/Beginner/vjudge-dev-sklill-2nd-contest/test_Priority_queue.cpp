#include<bits/stdc++.h>
using namespace std;

int main()
{

    string t;


    queue<int>Q;
    queue<int>Q2;
    while(getline(cin,t))
    {
        stringstream ss(t);

        string word;

        while(ss>>word){
            if(isdigit(word[0])){
                    cout<<stoi(word)<<endl;
                int x=stoi(word);
                cout<<x<<endl;
                Q.push(x);

            }
            else if(word=="extract")
            {
                int n1=Q.front();
                Q.pop();
                int n2=Q.front();
                Q.pop();

                if(n1>n2)
                {
                    Q.push(n2);
                    Q2.push(n1);
                }
                else {
                     Q.push(n1);
                     Q2.push(n2);
                }

            }
           else if(word=="end")
           {
               int n3=Q.front();
                Q.pop();
                Q2.push(n3);
                break;
           }

            else{

                    break;
         }

          }




    }


    return 0;
}
